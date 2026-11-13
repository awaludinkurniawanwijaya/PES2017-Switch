#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830E8750"))) PPC_WEAK_FUNC(sub_830E8750);
PPC_FUNC_IMPL(__imp__sub_830E8750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E8758;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x830e75e8
	ctx.lr = 0x830E877C;
	sub_830E75E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83742b00
	ctx.lr = 0x830E8784;
	sub_83742B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8878
	if (cr6.eq) goto loc_830E8878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742958
	ctx.lr = 0x830E8798;
	sub_83742958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8878
	if (cr6.eq) goto loc_830E8878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83741ee8
	ctx.lr = 0x830E87AC;
	sub_83741EE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bne cr6,0x830e87c8
	if (!cr6.eq) goto loc_830E87C8;
	// addi r10,r3,-10
	ctx.r10.s64 = ctx.r3.s64 + -10;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_830E87C8:
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bne cr6,0x830e87e8
	if (!cr6.eq) goto loc_830E87E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E87E8:
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bne cr6,0x830e880c
	if (!cr6.eq) goto loc_830E880C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E880C:
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x830e882c
	if (!cr6.eq) goto loc_830E882C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r10,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E882C:
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bne cr6,0x830e886c
	if (!cr6.eq) goto loc_830E886C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8858
	if (!cr6.eq) goto loc_830E8858;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E8858:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,48709
	ctx.r9.u64 = ctx.r10.u64 | 48709;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r10,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_830E886C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E8878:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8884"))) PPC_WEAK_FUNC(sub_830E8884);
PPC_FUNC_IMPL(__imp__sub_830E8884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8888"))) PPC_WEAK_FUNC(sub_830E8888);
PPC_FUNC_IMPL(__imp__sub_830E8888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E8890;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r25,6132(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x830e75e8
	ctx.lr = 0x830E88C8;
	sub_830E75E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83742df0
	ctx.lr = 0x830E88D0;
	sub_83742DF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742b00
	ctx.lr = 0x830E88DC;
	sub_83742B00(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// bne cr6,0x830e8900
	if (!cr6.eq) goto loc_830E8900;
	// addi r11,r31,-159
	ctx.r11.s64 = ctx.r31.s64 + -159;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8900:
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e89ec
	if (cr6.eq) goto loc_830E89EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x830e8930
	if (!cr6.eq) goto loc_830E8930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742c80
	ctx.lr = 0x830E8924;
	sub_83742C80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8930:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bne cr6,0x830e895c
	if (!cr6.eq) goto loc_830E895C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742a38
	ctx.lr = 0x830E8950;
	sub_83742A38(ctx, base);
loc_830E8950:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E895C:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x830e89a4
	if (!cr6.eq) goto loc_830E89A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742560
	ctx.lr = 0x830E896C;
	sub_83742560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8990
	if (cr6.eq) goto loc_830E8990;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837425b0
	ctx.lr = 0x830E8980;
	sub_837425B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e8994
	if (cr6.eq) goto loc_830E8994;
loc_830E8990:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830E8994:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E89A4:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x830e8b20
	if (!cr6.eq) goto loc_830E8B20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742560
	ctx.lr = 0x830E89B4;
	sub_83742560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e89d8
	if (cr6.eq) goto loc_830E89D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837425b0
	ctx.lr = 0x830E89C8;
	sub_837425B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830e89dc
	if (!cr6.eq) goto loc_830E89DC;
loc_830E89D8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830E89DC:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E89EC:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e8b44
	if (cr6.eq) goto loc_830E8B44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742958
	ctx.lr = 0x830E8A00;
	sub_83742958(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x830e8950
	if (cr6.eq) goto loc_830E8950;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830e8a30
	if (!cr6.eq) goto loc_830E8A30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837427f0
	ctx.lr = 0x830E8A24;
	sub_837427F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8A30:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x830e8a7c
	if (!cr6.eq) goto loc_830E8A7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742bd0
	ctx.lr = 0x830E8A44;
	sub_83742BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8a68
	if (cr6.eq) goto loc_830E8A68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837429d0
	ctx.lr = 0x830E8A58;
	sub_837429D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e8a6c
	if (cr6.eq) goto loc_830E8A6C;
loc_830E8A68:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830E8A6C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8A7C:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x830e8aac
	if (!cr6.eq) goto loc_830E8AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837427f0
	ctx.lr = 0x830E8A94;
	sub_837427F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8AAC:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x830e8ac8
	if (!cr6.eq) goto loc_830E8AC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742200
	ctx.lr = 0x830E8ABC;
	sub_83742200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8AC8:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x830e8af4
	if (cr6.lt) goto loc_830E8AF4;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x830e8af4
	if (cr6.gt) goto loc_830E8AF4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e8550
	ctx.lr = 0x830E8AE8;
	sub_830E8550(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8AF4:
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// blt cr6,0x830e8b20
	if (cr6.lt) goto loc_830E8B20;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bgt cr6,0x830e8b20
	if (cr6.gt) goto loc_830E8B20;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e8750
	ctx.lr = 0x830E8B14;
	sub_830E8750(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8B20:
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bne cr6,0x830e8b80
	if (!cr6.eq) goto loc_830E8B80;
	// lbz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 6);
	// subfic r10,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r29,r8,31
	ctx.r29.u64 = ctx.r8.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E8B44:
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bne cr6,0x830e8b80
	if (!cr6.eq) goto loc_830E8B80;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// beq cr6,0x830e8b7c
	if (cr6.eq) goto loc_830E8B7C;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// bne cr6,0x830e8b80
	if (!cr6.eq) goto loc_830E8B80;
loc_830E8B7C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_830E8B80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8B8C"))) PPC_WEAK_FUNC(sub_830E8B8C);
PPC_FUNC_IMPL(__imp__sub_830E8B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8B90"))) PPC_WEAK_FUNC(sub_830E8B90);
PPC_FUNC_IMPL(__imp__sub_830E8B90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,17536
	ctx.r9.s64 = ctx.r10.s64 + 17536;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E8BAC"))) PPC_WEAK_FUNC(sub_830E8BAC);
PPC_FUNC_IMPL(__imp__sub_830E8BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8BB0"))) PPC_WEAK_FUNC(sub_830E8BB0);
PPC_FUNC_IMPL(__imp__sub_830E8BB0) {
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
	// bl 0x839f7bb8
	ctx.lr = 0x830E8BC8;
	sub_839F7BB8(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21232
	ctx.r9.s64 = ctx.r10.s64 + 21232;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// stb r11,692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 692, ctx.r11.u8);
	// bl 0x830e9450
	ctx.lr = 0x830E8BEC;
	sub_830E9450(ctx, base);
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

__attribute__((alias("__imp__sub_830E8C04"))) PPC_WEAK_FUNC(sub_830E8C04);
PPC_FUNC_IMPL(__imp__sub_830E8C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8C08"))) PPC_WEAK_FUNC(sub_830E8C08);
PPC_FUNC_IMPL(__imp__sub_830E8C08) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830e8c5c
	if (cr6.eq) goto loc_830E8C5C;
	// bl 0x839f7f88
	ctx.lr = 0x830E8C30;
	sub_839F7F88(ctx, base);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x838c21a0
	ctx.lr = 0x830E8C40;
	sub_838C21A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E8C54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f90
	ctx.lr = 0x830E8C5C;
	sub_839F7F90(ctx, base);
loc_830E8C5C:
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

__attribute__((alias("__imp__sub_830E8C74"))) PPC_WEAK_FUNC(sub_830E8C74);
PPC_FUNC_IMPL(__imp__sub_830E8C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8C78"))) PPC_WEAK_FUNC(sub_830E8C78);
PPC_FUNC_IMPL(__imp__sub_830E8C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E8C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8ce0
	if (cr6.eq) goto loc_830E8CE0;
	// lbz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8ce0
	if (!cr6.eq) goto loc_830E8CE0;
	// bl 0x839f7f88
	ctx.lr = 0x830E8CAC;
	sub_839F7F88(ctx, base);
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838c21a0
	ctx.lr = 0x830E8CBC;
	sub_838C21A0(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E8CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f90
	ctx.lr = 0x830E8CD8;
	sub_839F7F90(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 692, ctx.r9.u8);
loc_830E8CE0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7c80
	ctx.lr = 0x830E8CF0;
	sub_839F7C80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8CF8"))) PPC_WEAK_FUNC(sub_830E8CF8);
PPC_FUNC_IMPL(__imp__sub_830E8CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E8D00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8d4c
	if (cr6.eq) goto loc_830E8D4C;
	// bl 0x839f7f88
	ctx.lr = 0x830E8D20;
	sub_839F7F88(ctx, base);
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838c21a0
	ctx.lr = 0x830E8D30;
	sub_838C21A0(ctx, base);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E8D44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f90
	ctx.lr = 0x830E8D4C;
	sub_839F7F90(ctx, base);
loc_830E8D4C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7c80
	ctx.lr = 0x830E8D5C;
	sub_839F7C80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8D64"))) PPC_WEAK_FUNC(sub_830E8D64);
PPC_FUNC_IMPL(__imp__sub_830E8D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8D68"))) PPC_WEAK_FUNC(sub_830E8D68);
PPC_FUNC_IMPL(__imp__sub_830E8D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E8D70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8dbc
	if (cr6.eq) goto loc_830E8DBC;
	// bl 0x839f7f88
	ctx.lr = 0x830E8D90;
	sub_839F7F88(ctx, base);
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838c21a0
	ctx.lr = 0x830E8DA0;
	sub_838C21A0(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E8DB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f90
	ctx.lr = 0x830E8DBC;
	sub_839F7F90(ctx, base);
loc_830E8DBC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7c80
	ctx.lr = 0x830E8DCC;
	sub_839F7C80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8DD4"))) PPC_WEAK_FUNC(sub_830E8DD4);
PPC_FUNC_IMPL(__imp__sub_830E8DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8DD8"))) PPC_WEAK_FUNC(sub_830E8DD8);
PPC_FUNC_IMPL(__imp__sub_830E8DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E8DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8e5c
	if (cr6.eq) goto loc_830E8E5C;
	// bl 0x839f7f88
	ctx.lr = 0x830E8DFC;
	sub_839F7F88(ctx, base);
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838c21a0
	ctx.lr = 0x830E8E0C;
	sub_838C21A0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E8E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e8e54
	if (cr6.eq) goto loc_830E8E54;
	// lis r4,267
	ctx.r4.s64 = 17498112;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x83535150
	ctx.lr = 0x830E8E4C;
	sub_83535150(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
loc_830E8E54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f90
	ctx.lr = 0x830E8E5C;
	sub_839F7F90(ctx, base);
loc_830E8E5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8E64"))) PPC_WEAK_FUNC(sub_830E8E64);
PPC_FUNC_IMPL(__imp__sub_830E8E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8E68"))) PPC_WEAK_FUNC(sub_830E8E68);
PPC_FUNC_IMPL(__imp__sub_830E8E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E8E70;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8f04
	if (cr6.eq) goto loc_830E8F04;
	// bl 0x839f7f88
	ctx.lr = 0x830E8E88;
	sub_839F7F88(ctx, base);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x839f7f58
	ctx.lr = 0x830E8EA4;
	sub_839F7F58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f78
	ctx.lr = 0x830E8EB0;
	sub_839F7F78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f68
	ctx.lr = 0x830E8EBC;
	sub_839F7F68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291c758
	ctx.lr = 0x830E8EC8;
	sub_8291C758(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838c21a0
	ctx.lr = 0x830E8ED4;
	sub_838C21A0(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x830E8EFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f90
	ctx.lr = 0x830E8F04;
	sub_839F7F90(ctx, base);
loc_830E8F04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8F0C"))) PPC_WEAK_FUNC(sub_830E8F0C);
PPC_FUNC_IMPL(__imp__sub_830E8F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8F10"))) PPC_WEAK_FUNC(sub_830E8F10);
PPC_FUNC_IMPL(__imp__sub_830E8F10) {
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
	// bl 0x839f7ef8
	ctx.lr = 0x830E8F28;
	sub_839F7EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8f88
	if (cr6.eq) goto loc_830E8F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291c758
	ctx.lr = 0x830E8F3C;
	sub_8291C758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8f88
	if (!cr6.eq) goto loc_830E8F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f58
	ctx.lr = 0x830E8F50;
	sub_839F7F58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8f88
	if (!cr6.eq) goto loc_830E8F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f68
	ctx.lr = 0x830E8F64;
	sub_839F7F68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8f88
	if (!cr6.eq) goto loc_830E8F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f78
	ctx.lr = 0x830E8F78;
	sub_839F7F78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8f8c
	if (cr6.eq) goto loc_830E8F8C;
loc_830E8F88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8F8C:
	// bl 0x830eb550
	ctx.lr = 0x830E8F90;
	sub_830EB550(ctx, base);
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

__attribute__((alias("__imp__sub_830E8FA4"))) PPC_WEAK_FUNC(sub_830E8FA4);
PPC_FUNC_IMPL(__imp__sub_830E8FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8FA8"))) PPC_WEAK_FUNC(sub_830E8FA8);
PPC_FUNC_IMPL(__imp__sub_830E8FA8) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lwz r10,680(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,21232
	ctx.r9.s64 = ctx.r11.s64 + 21232;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830e9018
	if (cr6.eq) goto loc_830E9018;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830E8FE8;
	sub_82595150(ctx, base);
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e9008
	if (cr6.eq) goto loc_830E9008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E9008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E9008:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830E9010;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
loc_830E9018:
	// bl 0x830e96b8
	ctx.lr = 0x830E901C;
	sub_830E96B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7c38
	ctx.lr = 0x830E9024;
	sub_839F7C38(ctx, base);
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

__attribute__((alias("__imp__sub_830E9038"))) PPC_WEAK_FUNC(sub_830E9038);
PPC_FUNC_IMPL(__imp__sub_830E9038) {
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
	// bl 0x830e8f10
	ctx.lr = 0x830E9058;
	sub_830E8F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7ef8
	ctx.lr = 0x830E9060;
	sub_839F7EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e9084
	if (cr6.eq) goto loc_830E9084;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E9084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E9084:
	// bl 0x830e9240
	ctx.lr = 0x830E9088;
	sub_830E9240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e90b8
	if (cr6.eq) goto loc_830E90B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f88
	ctx.lr = 0x830E9098;
	sub_839F7F88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838c21a0
	ctx.lr = 0x830E90A0;
	sub_838C21A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e9240
	ctx.lr = 0x830E90A8;
	sub_830E9240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e94c8
	ctx.lr = 0x830E90B0;
	sub_830E94C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f7f90
	ctx.lr = 0x830E90B8;
	sub_839F7F90(ctx, base);
loc_830E90B8:
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

__attribute__((alias("__imp__sub_830E90D0"))) PPC_WEAK_FUNC(sub_830E90D0);
PPC_FUNC_IMPL(__imp__sub_830E90D0) {
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
	// bl 0x830e8fa8
	ctx.lr = 0x830E90F0;
	sub_830E8FA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e9110
	if (cr6.eq) goto loc_830E9110;
	// bl 0x82595188
	ctx.lr = 0x830E9100;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830E9110;
	sub_825952B8(ctx, base);
loc_830E9110:
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

__attribute__((alias("__imp__sub_830E912C"))) PPC_WEAK_FUNC(sub_830E912C);
PPC_FUNC_IMPL(__imp__sub_830E912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9130"))) PPC_WEAK_FUNC(sub_830E9130);
PPC_FUNC_IMPL(__imp__sub_830E9130) {
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
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830e9168
	if (cr6.eq) goto loc_830E9168;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830e916c
	if (!cr6.eq) goto loc_830E916C;
	// bl 0x830e9038
	ctx.lr = 0x830E9154;
	sub_830E9038(ctx, base);
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
loc_830E9168:
	// bl 0x830e8dd8
	ctx.lr = 0x830E916C;
	sub_830E8DD8(ctx, base);
loc_830E916C:
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

__attribute__((alias("__imp__sub_830E9180"))) PPC_WEAK_FUNC(sub_830E9180);
PPC_FUNC_IMPL(__imp__sub_830E9180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// ori r10,r10,42
	ctx.r10.u64 = ctx.r10.u64 | 42;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830e91c0
	if (cr6.gt) goto loc_830E91C0;
	// beq cr6,0x830e91bc
	if (cr6.eq) goto loc_830E91BC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x830e91b8
	if (cr6.eq) goto loc_830E91B8;
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addic. r11,r11,-3
	xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x830e91bc
	if (cr0.eq) goto loc_830E91BC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x830e91d4
	if (!cr6.eq) goto loc_830E91D4;
	// b 0x830e8cf8
	sub_830E8CF8(ctx, base);
	return;
loc_830E91B8:
	// b 0x830e9130
	sub_830E9130(ctx, base);
	return;
loc_830E91BC:
	// b 0x830e8c78
	sub_830E8C78(ctx, base);
	return;
loc_830E91C0:
	// addis r11,r11,-267
	ctx.r11.s64 = ctx.r11.s64 + -17498112;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x830e91dc
	if (cr0.eq) goto loc_830E91DC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x830e91d8
	if (cr6.eq) goto loc_830E91D8;
loc_830E91D4:
	// b 0x839f7c80
	sub_839F7C80(ctx, base);
	return;
loc_830E91D8:
	// b 0x830e8d68
	sub_830E8D68(ctx, base);
	return;
loc_830E91DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r11.u32);
	// b 0x839f7c80
	sub_839F7C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E91E8"))) PPC_WEAK_FUNC(sub_830E91E8);
PPC_FUNC_IMPL(__imp__sub_830E91E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,21400
	ctx.r10.s64 = ctx.r11.s64 + 21400;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E91F8"))) PPC_WEAK_FUNC(sub_830E91F8);
PPC_FUNC_IMPL(__imp__sub_830E91F8) {
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
	// addi r9,r11,21400
	ctx.r9.s64 = ctx.r11.s64 + 21400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830e922c
	if (cr6.eq) goto loc_830E922C;
	// bl 0x82416268
	ctx.lr = 0x830E9228;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E922C:
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

__attribute__((alias("__imp__sub_830E9240"))) PPC_WEAK_FUNC(sub_830E9240);
PPC_FUNC_IMPL(__imp__sub_830E9240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,24880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E924C"))) PPC_WEAK_FUNC(sub_830E924C);
PPC_FUNC_IMPL(__imp__sub_830E924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9250"))) PPC_WEAK_FUNC(sub_830E9250);
PPC_FUNC_IMPL(__imp__sub_830E9250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E9258;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x830e929c
	if (!cr6.eq) goto loc_830E929C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x830e929c
	if (!cr6.eq) goto loc_830E929C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e62630
	ctx.lr = 0x830E9288;
	sub_82E62630(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E929C:
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// beq cr6,0x830e92f4
	if (cr6.eq) goto loc_830E92F4;
	// li r28,2
	ctx.r28.s64 = 2;
loc_830E92A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x830e92e8
	if (cr6.eq) goto loc_830E92E8;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x830E92DC;
	sub_825952B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_830E92E8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x830e92a8
	if (!cr6.eq) goto loc_830E92A8;
loc_830E92F4:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9304"))) PPC_WEAK_FUNC(sub_830E9304);
PPC_FUNC_IMPL(__imp__sub_830E9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9308"))) PPC_WEAK_FUNC(sub_830E9308);
PPC_FUNC_IMPL(__imp__sub_830E9308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x830e9378
	if (cr6.eq) goto loc_830E9378;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_830E9318:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x830e9338
	if (cr6.eq) goto loc_830E9338;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x830e9318
	if (!cr6.eq) goto loc_830E9318;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830E9338:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x830e9378
	if (cr6.eq) goto loc_830E9378;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x830e9378
	if (cr6.eq) goto loc_830E9378;
loc_830E934C:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x830e936c
	if (cr6.eq) goto loc_830E936C;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_830E936C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x830e934c
	if (!cr6.eq) goto loc_830E934C;
loc_830E9378:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9380"))) PPC_WEAK_FUNC(sub_830E9380);
PPC_FUNC_IMPL(__imp__sub_830E9380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E9388;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x830e9400
	if (cr6.eq) goto loc_830E9400;
	// li r29,25
	ctx.r29.s64 = 25;
loc_830E93A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e93f0
	if (cr6.eq) goto loc_830E93F0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830E93C4;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e93e4
	if (cr6.eq) goto loc_830E93E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E93E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E93E4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830E93EC;
	sub_82595170(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_830E93F0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x830e93a8
	if (!cr6.eq) goto loc_830E93A8;
loc_830E9400:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x830e9308
	ctx.lr = 0x830E9414;
	sub_830E9308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830e9250
	ctx.lr = 0x830E942C;
	sub_830E9250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e62630
	ctx.lr = 0x830E9434;
	sub_82E62630(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x830E9448;
	sub_825952B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9450"))) PPC_WEAK_FUNC(sub_830E9450);
PPC_FUNC_IMPL(__imp__sub_830E9450) {
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
	// lwz r11,24880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24880);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e94b4
	if (!cr6.eq) goto loc_830E94B4;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830E9488;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e94ac
	if (cr6.eq) goto loc_830E94AC;
	// bl 0x82e8dbd0
	ctx.lr = 0x830E9494;
	sub_82E8DBD0(ctx, base);
	// stw r3,24880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24880, ctx.r3.u32);
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
loc_830E94AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24880, ctx.r11.u32);
loc_830E94B4:
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

__attribute__((alias("__imp__sub_830E94C8"))) PPC_WEAK_FUNC(sub_830E94C8);
PPC_FUNC_IMPL(__imp__sub_830E94C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E94D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x830e9570
	if (cr6.eq) goto loc_830E9570;
	// li r28,25
	ctx.r28.s64 = 25;
loc_830E94F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E950C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e9560
	if (cr6.eq) goto loc_830E9560;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e9560
	if (cr6.eq) goto loc_830E9560;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830E9534;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e9554
	if (cr6.eq) goto loc_830E9554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E9554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E9554:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830E955C;
	sub_82595170(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_830E9560:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x830e94f4
	if (!cr6.eq) goto loc_830E94F4;
loc_830E9570:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x830e9308
	ctx.lr = 0x830E9584;
	sub_830E9308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830e9250
	ctx.lr = 0x830E959C;
	sub_830E9250(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E95A4"))) PPC_WEAK_FUNC(sub_830E95A4);
PPC_FUNC_IMPL(__imp__sub_830E95A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E95A8"))) PPC_WEAK_FUNC(sub_830E95A8);
PPC_FUNC_IMPL(__imp__sub_830E95A8) {
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
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8378d870
	ctx.lr = 0x830E95C4;
	sub_8378D870(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E95D4"))) PPC_WEAK_FUNC(sub_830E95D4);
PPC_FUNC_IMPL(__imp__sub_830E95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E95D8"))) PPC_WEAK_FUNC(sub_830E95D8);
PPC_FUNC_IMPL(__imp__sub_830E95D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E95E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x830e9680
	if (cr6.eq) goto loc_830E9680;
	// li r27,25
	ctx.r27.s64 = 25;
loc_830E9608:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f8200
	ctx.lr = 0x830E9610;
	sub_831F8200(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// bne cr6,0x830e9670
	if (!cr6.eq) goto loc_830E9670;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825832d8
	ctx.lr = 0x830E9620;
	sub_825832D8(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// bne cr6,0x830e9670
	if (!cr6.eq) goto loc_830E9670;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e9670
	if (cr6.eq) goto loc_830E9670;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830E9644;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e9664
	if (cr6.eq) goto loc_830E9664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E9664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830E9664:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830E966C;
	sub_82595170(ctx, base);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_830E9670:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x830e9608
	if (!cr6.eq) goto loc_830E9608;
loc_830E9680:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x830e9308
	ctx.lr = 0x830E9694;
	sub_830E9308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830e9250
	ctx.lr = 0x830E96AC;
	sub_830E9250(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E96B4"))) PPC_WEAK_FUNC(sub_830E96B4);
PPC_FUNC_IMPL(__imp__sub_830E96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E96B8"))) PPC_WEAK_FUNC(sub_830E96B8);
PPC_FUNC_IMPL(__imp__sub_830E96B8) {
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
	// lwz r11,24880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24880);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e971c
	if (cr6.eq) goto loc_830E971C;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830E96F0;
	sub_82595150(ctx, base);
	// lwz r30,24880(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24880);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830e970c
	if (cr6.eq) goto loc_830E970C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e9380
	ctx.lr = 0x830E9704;
	sub_830E9380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830E970C;
	sub_82416268(ctx, base);
loc_830E970C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830E9714;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24880, ctx.r11.u32);
loc_830E971C:
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

__attribute__((alias("__imp__sub_830E9734"))) PPC_WEAK_FUNC(sub_830E9734);
PPC_FUNC_IMPL(__imp__sub_830E9734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9738"))) PPC_WEAK_FUNC(sub_830E9738);
PPC_FUNC_IMPL(__imp__sub_830E9738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E9740;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ce7d8
	ctx.lr = 0x830E975C;
	sub_831CE7D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r29,r11,21668
	ctx.r29.s64 = ctx.r11.s64 + 21668;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// bl 0x831d9200
	ctx.lr = 0x830E977C;
	sub_831D9200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e9804
	if (cr6.eq) goto loc_830E9804;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
loc_830E9788:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_830E9798:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830e97bc
	if (cr6.eq) goto loc_830E97BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830e9798
	if (cr6.eq) goto loc_830E9798;
loc_830E97BC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830e97ec
	if (!cr6.eq) goto loc_830E97EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830E97C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e97c8
	if (!cr6.eq) goto loc_830E97C8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x830e9820
	if (cr6.eq) goto loc_830E9820;
loc_830E97EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9200
	ctx.lr = 0x830E97FC;
	sub_831D9200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e9788
	if (!cr6.eq) goto loc_830E9788;
loc_830E9804:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830e9814
	if (cr6.eq) goto loc_830E9814;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830E9814:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E9820:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830e9834
	if (cr6.eq) goto loc_830E9834;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x830E9830;
	sub_831D88A0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_830E9834:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9840"))) PPC_WEAK_FUNC(sub_830E9840);
PPC_FUNC_IMPL(__imp__sub_830E9840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E9848;
	__savegprlr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e9864
	if (!cr6.eq) goto loc_830E9864;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E9864:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,21668
	ctx.r30.s64 = ctx.r11.s64 + 21668;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r11,r30,-28
	ctx.r11.s64 = ctx.r30.s64 + -28;
	// addi r10,r30,-24
	ctx.r10.s64 = ctx.r30.s64 + -24;
	// addi r9,r30,-20
	ctx.r9.s64 = ctx.r30.s64 + -20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
loc_830E9894:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ce7d8
	ctx.lr = 0x830E98A8;
	sub_831CE7D8(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d9200
	ctx.lr = 0x830E98BC;
	sub_831D9200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e9944
	if (cr6.eq) goto loc_830E9944;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
loc_830E98C8:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_830E98D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830e98fc
	if (cr6.eq) goto loc_830E98FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830e98d8
	if (cr6.eq) goto loc_830E98D8;
loc_830E98FC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830e992c
	if (!cr6.eq) goto loc_830E992C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830E9908:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e9908
	if (!cr6.eq) goto loc_830E9908;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x830e9974
	if (cr6.eq) goto loc_830E9974;
loc_830E992C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9200
	ctx.lr = 0x830E993C;
	sub_831D9200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e98c8
	if (!cr6.eq) goto loc_830E98C8;
loc_830E9944:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830E994C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e996c
	if (!cr6.eq) goto loc_830E996C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x830e9894
	if (cr6.lt) goto loc_830E9894;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_830E996C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E9974:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x830E997C;
	sub_831D88A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830e994c
	goto loc_830E994C;
}

__attribute__((alias("__imp__sub_830E9984"))) PPC_WEAK_FUNC(sub_830E9984);
PPC_FUNC_IMPL(__imp__sub_830E9984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9988"))) PPC_WEAK_FUNC(sub_830E9988);
PPC_FUNC_IMPL(__imp__sub_830E9988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E9990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e99ac
	if (!cr6.eq) goto loc_830E99AC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E99AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e9840
	ctx.lr = 0x830E99B4;
	sub_830E9840(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,21636
	ctx.r30.s64 = ctx.r11.s64 + 21636;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e9738
	ctx.lr = 0x830E99D0;
	sub_830E9738(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e9738
	ctx.lr = 0x830E99E4;
	sub_830E9738(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e99f8
	if (cr6.eq) goto loc_830E99F8;
	// oris r11,r29,32768
	ctx.r11.u64 = ctx.r29.u64 | 2147483648;
loc_830E99F8:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e9a08
	if (cr6.eq) goto loc_830E9A08;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
loc_830E9A08:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9A14"))) PPC_WEAK_FUNC(sub_830E9A14);
PPC_FUNC_IMPL(__imp__sub_830E9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9A18"))) PPC_WEAK_FUNC(sub_830E9A18);
PPC_FUNC_IMPL(__imp__sub_830E9A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E9A20;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830e9a44
	if (cr6.lt) goto loc_830E9A44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830e9a48
	goto loc_830E9A48;
loc_830E9A44:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830E9A48:
	// rlwinm r9,r4,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// clrlwi r29,r4,3
	ctx.r29.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e9a6c
	if (cr6.eq) goto loc_830E9A6C;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r31,r11,21660
	ctx.r31.s64 = ctx.r11.s64 + 21660;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x830e9a88
	goto loc_830E9A88;
loc_830E9A6C:
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r31,r11,21660
	ctx.r31.s64 = ctx.r11.s64 + 21660;
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x830e9a88
	if (!cr6.eq) goto loc_830E9A88;
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
loc_830E9A88:
	// bl 0x830fe708
	ctx.lr = 0x830E9A8C;
	sub_830FE708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830E9AA8;
	sub_831D0B08(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830E9AB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e9ab0
	if (!cr6.eq) goto loc_830E9AB0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830E9AD8;
	sub_8259CC28(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9AE0"))) PPC_WEAK_FUNC(sub_830E9AE0);
PPC_FUNC_IMPL(__imp__sub_830E9AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E9AE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r3,r11,65535
	ctx.r3.u64 = ctx.r11.u64 | 65535;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// beq cr6,0x830e9bd4
	if (cr6.eq) goto loc_830E9BD4;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ce7d8
	ctx.lr = 0x830E9B10;
	sub_831CE7D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,21816
	ctx.r30.s64 = ctx.r11.s64 + 21816;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x831d9200
	ctx.lr = 0x830E9B30;
	sub_831D9200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e9bd0
	if (cr6.eq) goto loc_830E9BD0;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
loc_830E9B3C:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_830E9B4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830e9b70
	if (cr6.eq) goto loc_830E9B70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830e9b4c
	if (cr6.eq) goto loc_830E9B4C;
loc_830E9B70:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830e9ba0
	if (!cr6.eq) goto loc_830E9BA0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830E9B7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e9b7c
	if (!cr6.eq) goto loc_830E9B7C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x830e9bc4
	if (cr6.eq) goto loc_830E9BC4;
loc_830E9BA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9200
	ctx.lr = 0x830E9BB0;
	sub_831D9200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e9b3c
	if (!cr6.eq) goto loc_830E9B3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E9BC4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x830E9BCC;
	sub_831D88A0(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
loc_830E9BD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830E9BD4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9BDC"))) PPC_WEAK_FUNC(sub_830E9BDC);
PPC_FUNC_IMPL(__imp__sub_830E9BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9BE0"))) PPC_WEAK_FUNC(sub_830E9BE0);
PPC_FUNC_IMPL(__imp__sub_830E9BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addis r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -65536;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9BF8"))) PPC_WEAK_FUNC(sub_830E9BF8);
PPC_FUNC_IMPL(__imp__sub_830E9BF8) {
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
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,9999
	cr6.compare<uint32_t>(ctx.r11.u32, 9999, xer);
	// ble cr6,0x830e9c24
	if (!cr6.gt) goto loc_830E9C24;
	// li r30,9999
	ctx.r30.s64 = 9999;
loc_830E9C24:
	// bl 0x830fe708
	ctx.lr = 0x830E9C28;
	sub_830FE708(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,21820
	ctx.r5.s64 = ctx.r11.s64 + 21820;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x831d0b08
	ctx.lr = 0x830E9C44;
	sub_831D0B08(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// blt cr6,0x830e9c60
	if (cr6.lt) goto loc_830E9C60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x830e9c64
	goto loc_830E9C64;
loc_830E9C60:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_830E9C64:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830E9C70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e9c70
	if (!cr6.eq) goto loc_830E9C70;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830E9C98;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_830E9CB0"))) PPC_WEAK_FUNC(sub_830E9CB0);
PPC_FUNC_IMPL(__imp__sub_830E9CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E9CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830e9d34
	if (!cr6.lt) goto loc_830E9D34;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bge cr6,0x830e9d34
	if (!cr6.lt) goto loc_830E9D34;
	// bl 0x831156e8
	ctx.lr = 0x830E9CD8;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312bc20
	ctx.lr = 0x830E9CF0;
	sub_8312BC20(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312bca0
	ctx.lr = 0x830E9D04;
	sub_8312BCA0(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// beq cr6,0x830e9d1c
	if (cr6.eq) goto loc_830E9D1C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E9D1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830e9d38
	if (!cr6.eq) goto loc_830E9D38;
loc_830E9D34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E9D38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9D40"))) PPC_WEAK_FUNC(sub_830E9D40);
PPC_FUNC_IMPL(__imp__sub_830E9D40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830e9d9c
	if (!cr6.lt) goto loc_830E9D9C;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x830e9d9c
	if (!cr6.lt) goto loc_830E9D9C;
	// bl 0x831156e8
	ctx.lr = 0x830E9D70;
	sub_831156E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312bc50
	ctx.lr = 0x830E9D84;
	sub_8312BC50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830e9da0
	if (!cr6.eq) goto loc_830E9DA0;
loc_830E9D9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E9DA0:
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

__attribute__((alias("__imp__sub_830E9DB8"))) PPC_WEAK_FUNC(sub_830E9DB8);
PPC_FUNC_IMPL(__imp__sub_830E9DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830e9df4
	if (!cr6.lt) goto loc_830E9DF4;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,22784
	ctx.r8.s64 = ctx.r10.s64 + 22784;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830E9DD4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x830e9dfc
	if (cr6.eq) goto loc_830E9DFC;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,252
	cr6.compare<uint32_t>(ctx.r9.u32, 252, xer);
	// blt cr6,0x830e9dd4
	if (cr6.lt) goto loc_830E9DD4;
loc_830E9DF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E9DFC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9E18"))) PPC_WEAK_FUNC(sub_830E9E18);
PPC_FUNC_IMPL(__imp__sub_830E9E18) {
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x830e9e44
	if (cr6.lt) goto loc_830E9E44;
loc_830E9E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e9e70
	goto loc_830E9E70;
loc_830E9E44:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E9E54;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a163f0
	ctx.lr = 0x830E9E5C;
	sub_82A163F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,23
	cr6.compare<int32_t>(ctx.r3.s32, 23, xer);
	// bge cr6,0x830e9e3c
	if (!cr6.lt) goto loc_830E9E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ef368
	ctx.lr = 0x830E9E70;
	sub_830EF368(ctx, base);
loc_830E9E70:
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

__attribute__((alias("__imp__sub_830E9E88"))) PPC_WEAK_FUNC(sub_830E9E88);
PPC_FUNC_IMPL(__imp__sub_830E9E88) {
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
	// li r11,32767
	ctx.r11.s64 = 32767;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830e9edc
	if (!cr6.lt) goto loc_830E9EDC;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bge cr6,0x830e9edc
	if (!cr6.lt) goto loc_830E9EDC;
	// bl 0x831156e8
	ctx.lr = 0x830E9EC0;
	sub_831156E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312bc20
	ctx.lr = 0x830E9ED4;
	sub_8312BC20(ctx, base);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// b 0x830e9ee0
	goto loc_830E9EE0;
loc_830E9EDC:
	// li r3,32767
	ctx.r3.s64 = 32767;
loc_830E9EE0:
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

__attribute__((alias("__imp__sub_830E9EF8"))) PPC_WEAK_FUNC(sub_830E9EF8);
PPC_FUNC_IMPL(__imp__sub_830E9EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830E9F00;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-2848(r1)
	ea = -2848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r7,88
	ctx.r7.s64 = 88;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// addi r11,r1,280
	ctx.r11.s64 = ctx.r1.s64 + 280;
	// lwz r10,-3564(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// lwz r25,6132(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_830E9F2C:
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// stw r27,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// stb r27,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r27.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830E9F4C:
	// stbx r27,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r27.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x830e9f4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E9F4C;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x830e9f2c
	if (!cr0.lt) goto loc_830E9F2C;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,23040
	ctx.r29.s64 = ctx.r11.s64 + 23040;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r30,r1,260
	ctx.r30.s64 = ctx.r1.s64 + 260;
	// li r28,21
	ctx.r28.s64 = 21;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,22784
	ctx.r26.s64 = ctx.r11.s64 + 22784;
loc_830E9F84:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,21
	cr6.compare<int32_t>(ctx.r31.s32, 21, xer);
	// bge cr6,0x830ea09c
	if (!cr6.lt) goto loc_830EA09C;
	// bl 0x831156e8
	ctx.lr = 0x830E9F94;
	sub_831156E8(ctx, base);
	// lwz r22,56(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312bc20
	ctx.lr = 0x830E9FAC;
	sub_8312BC20(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8312bca0
	ctx.lr = 0x830E9FC0;
	sub_8312BCA0(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bne cr6,0x830ea09c
	if (!cr6.eq) goto loc_830EA09C;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x830ea09c
	if (cr6.eq) goto loc_830EA09C;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,21
	cr6.compare<int32_t>(ctx.r31.s32, 21, xer);
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r27.u64);
	// bge cr6,0x830ea00c
	if (!cr6.lt) goto loc_830EA00C;
	// bl 0x831156e8
	ctx.lr = 0x830E9FF8;
	sub_831156E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8312bca0
	ctx.lr = 0x830EA00C;
	sub_8312BCA0(ctx, base);
loc_830EA00C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830EA024:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830ea024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EA024;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_830EA040:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x830ea330
	if (cr6.eq) goto loc_830EA330;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,252
	cr6.compare<uint32_t>(ctx.r9.u32, 252, xer);
	// blt cr6,0x830ea040
	if (cr6.lt) goto loc_830EA040;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830EA064:
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830EA084:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x830ea084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EA084;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
loc_830EA09C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x830e9f84
	if (!cr0.eq) goto loc_830E9F84;
	// mulli r9,r24,28
	ctx.r9.s64 = ctx.r24.s64 * 28;
	// addi r10,r1,260
	ctx.r10.s64 = ctx.r1.s64 + 260;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r29,r11,23040
	ctx.r29.s64 = ctx.r11.s64 + 23040;
	// li r28,21
	ctx.r28.s64 = 21;
loc_830EA0C0:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,21
	cr6.compare<int32_t>(ctx.r31.s32, 21, xer);
	// bge cr6,0x830ea1d8
	if (!cr6.lt) goto loc_830EA1D8;
	// bl 0x831156e8
	ctx.lr = 0x830EA0D0;
	sub_831156E8(ctx, base);
	// lwz r22,56(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312bc20
	ctx.lr = 0x830EA0E8;
	sub_8312BC20(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8312bca0
	ctx.lr = 0x830EA0FC;
	sub_8312BCA0(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bne cr6,0x830ea1d8
	if (!cr6.eq) goto loc_830EA1D8;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x830ea1d8
	if (cr6.eq) goto loc_830EA1D8;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,21
	cr6.compare<int32_t>(ctx.r31.s32, 21, xer);
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r27.u64);
	// bge cr6,0x830ea148
	if (!cr6.lt) goto loc_830EA148;
	// bl 0x831156e8
	ctx.lr = 0x830EA134;
	sub_831156E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x8312bca0
	ctx.lr = 0x830EA148;
	sub_8312BCA0(ctx, base);
loc_830EA148:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830EA160:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830ea160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EA160;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_830EA17C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x830ea348
	if (cr6.eq) goto loc_830EA348;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,252
	cr6.compare<uint32_t>(ctx.r9.u32, 252, xer);
	// blt cr6,0x830ea17c
	if (cr6.lt) goto loc_830EA17C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830EA1A0:
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830EA1C0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x830ea1c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EA1C0;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
loc_830EA1D8:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x830ea0c0
	if (!cr0.eq) goto loc_830EA0C0;
	// lwz r11,572(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 572);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830ea254
	if (cr6.eq) goto loc_830EA254;
	// bl 0x831156e8
	ctx.lr = 0x830EA1FC;
	sub_831156E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312bcf0
	ctx.lr = 0x830EA208;
	sub_8312BCF0(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// mulli r11,r24,28
	ctx.r11.s64 = ctx.r24.s64 * 28;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// addi r6,r9,21992
	ctx.r6.s64 = ctx.r9.s64 + 21992;
	// addi r8,r1,264
	ctx.r8.s64 = ctx.r1.s64 + 264;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
loc_830EA240:
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x830ea240
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EA240;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_830EA254:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830EA258:
	// mulli r10,r24,28
	ctx.r10.s64 = ctx.r24.s64 * 28;
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_830EA268:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830EA274;
	sub_82A0C738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a16188
	ctx.lr = 0x830EA27C;
	sub_82A16188(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x830ea3a0
	if (!cr6.lt) goto loc_830EA3A0;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x830ea3a0
	if (!cr6.lt) goto loc_830EA3A0;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bge cr6,0x830ea3a0
	if (!cr6.lt) goto loc_830EA3A0;
	// bl 0x831156e8
	ctx.lr = 0x830EA29C;
	sub_831156E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8312bc50
	ctx.lr = 0x830EA2B0;
	sub_8312BC50(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x830ea3a0
	if (cr6.eq) goto loc_830EA3A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r27.u64);
	// bl 0x831156e8
	ctx.lr = 0x830EA2D0;
	sub_831156E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8312bc50
	ctx.lr = 0x830EA2E4;
	sub_8312BC50(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830EA2FC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x830ea2fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EA2FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830EA314;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a163f0
	ctx.lr = 0x830EA31C;
	sub_82A163F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,23
	cr6.compare<int32_t>(ctx.r3.s32, 23, xer);
	// blt cr6,0x830ea360
	if (cr6.lt) goto loc_830EA360;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x830ea368
	goto loc_830EA368;
loc_830EA330:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x830ea064
	goto loc_830EA064;
loc_830EA348:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r26,8
	ctx.r9.s64 = ctx.r26.s64 + 8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x830ea1a0
	goto loc_830EA1A0;
loc_830EA360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef368
	ctx.lr = 0x830EA368;
	sub_830EF368(ctx, base);
loc_830EA368:
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stw r3,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r3.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r8,r1,232
	ctx.r8.s64 = ctx.r1.s64 + 232;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830EA388:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x830ea388
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EA388;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
loc_830EA3A0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,23
	cr6.compare<int32_t>(ctx.r28.s32, 23, xer);
	// blt cr6,0x830ea268
	if (cr6.lt) goto loc_830EA268;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x830ea258
	if (cr6.lt) goto loc_830EA258;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830ea3cc
	if (cr6.eq) goto loc_830EA3CC;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830ef168
	ctx.lr = 0x830EA3CC;
	sub_830EF168(ctx, base);
loc_830EA3CC:
	// addi r1,r1,2848
	ctx.r1.s64 = ctx.r1.s64 + 2848;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA3D8"))) PPC_WEAK_FUNC(sub_830EA3D8);
PPC_FUNC_IMPL(__imp__sub_830EA3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830EA3E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24356);
	// li r10,12
	ctx.r10.s64 = 12;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r8,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// subfc r7,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// not r5,r8
	ctx.r5.u64 = ~ctx.r8.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r5,31
	ctx.r30.u64 = ctx.r5.u32 & 0x1;
	// and r28,r4,r9
	ctx.r28.u64 = ctx.r4.u64 & ctx.r9.u64;
	// bl 0x82a26828
	ctx.lr = 0x830EA410;
	sub_82A26828(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// beq cr6,0x830ea488
	if (cr6.eq) goto loc_830EA488;
	// bl 0x83742b00
	ctx.lr = 0x830EA420;
	sub_83742B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ea488
	if (cr6.eq) goto loc_830EA488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r31,r31,-16828
	ctx.r31.s64 = ctx.r31.s64 + -16828;
	// bl 0x82a26848
	ctx.lr = 0x830EA43C;
	sub_82A26848(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830ea454
	if (!cr6.eq) goto loc_830EA454;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x830ea470
	if (cr6.eq) goto loc_830EA470;
loc_830EA454:
	// cmpwi cr6,r3,121
	cr6.compare<int32_t>(ctx.r3.s32, 121, xer);
	// bne cr6,0x830ea47c
	if (!cr6.eq) goto loc_830EA47C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83742270
	ctx.lr = 0x830EA464;
	sub_83742270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ea47c
	if (!cr6.eq) goto loc_830EA47C;
loc_830EA470:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830EA47C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830EA488:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA494"))) PPC_WEAK_FUNC(sub_830EA494);
PPC_FUNC_IMPL(__imp__sub_830EA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA498"))) PPC_WEAK_FUNC(sub_830EA498);
PPC_FUNC_IMPL(__imp__sub_830EA498) {
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
	// bl 0x82a26848
	ctx.lr = 0x830EA4A8;
	sub_82A26848(ctx, base);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x830ea4c4
	if (cr6.eq) goto loc_830EA4C4;
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
	// beq cr6,0x830ea4c4
	if (cr6.eq) goto loc_830EA4C4;
	// cmpwi cr6,r3,21
	cr6.compare<int32_t>(ctx.r3.s32, 21, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830ea4c8
	if (!cr6.eq) goto loc_830EA4C8;
loc_830EA4C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830EA4C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA4DC"))) PPC_WEAK_FUNC(sub_830EA4DC);
PPC_FUNC_IMPL(__imp__sub_830EA4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA4E0"))) PPC_WEAK_FUNC(sub_830EA4E0);
PPC_FUNC_IMPL(__imp__sub_830EA4E0) {
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
	// bl 0x82a26848
	ctx.lr = 0x830EA4F0;
	sub_82A26848(ctx, base);
	// addi r11,r3,-31
	ctx.r11.s64 = ctx.r3.s64 + -31;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA50C"))) PPC_WEAK_FUNC(sub_830EA50C);
PPC_FUNC_IMPL(__imp__sub_830EA50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA510"))) PPC_WEAK_FUNC(sub_830EA510);
PPC_FUNC_IMPL(__imp__sub_830EA510) {
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
	// bl 0x82a26848
	ctx.lr = 0x830EA520;
	sub_82A26848(ctx, base);
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// beq cr6,0x830ea53c
	if (cr6.eq) goto loc_830EA53C;
	// cmpwi cr6,r3,26
	cr6.compare<int32_t>(ctx.r3.s32, 26, xer);
	// beq cr6,0x830ea53c
	if (cr6.eq) goto loc_830EA53C;
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830ea540
	if (!cr6.eq) goto loc_830EA540;
loc_830EA53C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830EA540:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA554"))) PPC_WEAK_FUNC(sub_830EA554);
PPC_FUNC_IMPL(__imp__sub_830EA554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA558"))) PPC_WEAK_FUNC(sub_830EA558);
PPC_FUNC_IMPL(__imp__sub_830EA558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830EA560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a26828
	ctx.lr = 0x830EA56C;
	sub_82A26828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83742c80
	ctx.lr = 0x830EA578;
	sub_83742C80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ea5c8
	if (!cr6.eq) goto loc_830EA5C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837428f0
	ctx.lr = 0x830EA58C;
	sub_837428F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ea5c8
	if (!cr6.eq) goto loc_830EA5C8;
	// lbz r11,24024(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24024);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x830ea5ac
	if (!cr6.lt) goto loc_830EA5AC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830ea5b8
	if (cr6.eq) goto loc_830EA5B8;
loc_830EA5AC:
	// cmpwi cr6,r30,124
	cr6.compare<int32_t>(ctx.r30.s32, 124, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830ea5bc
	if (!cr6.eq) goto loc_830EA5BC;
loc_830EA5B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830EA5BC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830EA5C8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,48964
	ctx.r10.u64 = ctx.r11.u64 | 48964;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x830ea5e4
	if (cr6.eq) goto loc_830EA5E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830EA5E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA5EC"))) PPC_WEAK_FUNC(sub_830EA5EC);
PPC_FUNC_IMPL(__imp__sub_830EA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA5F0"))) PPC_WEAK_FUNC(sub_830EA5F0);
PPC_FUNC_IMPL(__imp__sub_830EA5F0) {
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
	// bl 0x82a26848
	ctx.lr = 0x830EA600;
	sub_82A26848(ctx, base);
	// addi r11,r3,-30
	ctx.r11.s64 = ctx.r3.s64 + -30;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA61C"))) PPC_WEAK_FUNC(sub_830EA61C);
PPC_FUNC_IMPL(__imp__sub_830EA61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA620"))) PPC_WEAK_FUNC(sub_830EA620);
PPC_FUNC_IMPL(__imp__sub_830EA620) {
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
	// bl 0x8311c6c8
	ctx.lr = 0x830EA630;
	sub_8311C6C8(ctx, base);
	// rlwinm r3,r3,0,14,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA644"))) PPC_WEAK_FUNC(sub_830EA644);
PPC_FUNC_IMPL(__imp__sub_830EA644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA648"))) PPC_WEAK_FUNC(sub_830EA648);
PPC_FUNC_IMPL(__imp__sub_830EA648) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8311c6c8
	ctx.lr = 0x830EA668;
	sub_8311C6C8(ctx, base);
	// rlwinm r11,r3,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
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

__attribute__((alias("__imp__sub_830EA690"))) PPC_WEAK_FUNC(sub_830EA690);
PPC_FUNC_IMPL(__imp__sub_830EA690) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA6A0"))) PPC_WEAK_FUNC(sub_830EA6A0);
PPC_FUNC_IMPL(__imp__sub_830EA6A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8311c6c0
	sub_8311C6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA6A4"))) PPC_WEAK_FUNC(sub_830EA6A4);
PPC_FUNC_IMPL(__imp__sub_830EA6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA6A8"))) PPC_WEAK_FUNC(sub_830EA6A8);
PPC_FUNC_IMPL(__imp__sub_830EA6A8) {
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
	// clrlwi r3,r4,14
	ctx.r3.u64 = ctx.r4.u32 & 0x3FFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8311c6c0
	ctx.lr = 0x830EA6CC;
	sub_8311C6C0(ctx, base);
	// rlwimi r3,r30,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_830EA6F0"))) PPC_WEAK_FUNC(sub_830EA6F0);
PPC_FUNC_IMPL(__imp__sub_830EA6F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA704"))) PPC_WEAK_FUNC(sub_830EA704);
PPC_FUNC_IMPL(__imp__sub_830EA704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA708"))) PPC_WEAK_FUNC(sub_830EA708);
PPC_FUNC_IMPL(__imp__sub_830EA708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ea730
	if (cr6.eq) goto loc_830EA730;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// ble cr6,0x830ea730
	if (!cr6.gt) goto loc_830EA730;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
loc_830EA730:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA738"))) PPC_WEAK_FUNC(sub_830EA738);
PPC_FUNC_IMPL(__imp__sub_830EA738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ea75c
	if (cr6.eq) goto loc_830EA75C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// ble cr6,0x830ea75c
	if (!cr6.gt) goto loc_830EA75C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_830EA75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA764"))) PPC_WEAK_FUNC(sub_830EA764);
PPC_FUNC_IMPL(__imp__sub_830EA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA768"))) PPC_WEAK_FUNC(sub_830EA768);
PPC_FUNC_IMPL(__imp__sub_830EA768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ea7b8
	if (cr6.eq) goto loc_830EA7B8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// ble cr6,0x830ea7b8
	if (!cr6.gt) goto loc_830EA7B8;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// bne cr6,0x830ea7ac
	if (!cr6.eq) goto loc_830EA7AC;
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
loc_830EA7AC:
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830EA7B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA7C0"))) PPC_WEAK_FUNC(sub_830EA7C0);
PPC_FUNC_IMPL(__imp__sub_830EA7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ea7f0
	if (cr6.eq) goto loc_830EA7F0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// ble cr6,0x830ea7f0
	if (!cr6.gt) goto loc_830EA7F0;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// sraw r7,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
loc_830EA7F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA7F8"))) PPC_WEAK_FUNC(sub_830EA7F8);
PPC_FUNC_IMPL(__imp__sub_830EA7F8) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ea830
	if (cr6.eq) goto loc_830EA830;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830EA828;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_830EA830:
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

__attribute__((alias("__imp__sub_830EA844"))) PPC_WEAK_FUNC(sub_830EA844);
PPC_FUNC_IMPL(__imp__sub_830EA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA848"))) PPC_WEAK_FUNC(sub_830EA848);
PPC_FUNC_IMPL(__imp__sub_830EA848) {
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
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x830ea884
	if (!cr6.gt) goto loc_830EA884;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_830EA884:
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830EA898;
	sub_82595718(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x830EA8AC;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_830EA8C0"))) PPC_WEAK_FUNC(sub_830EA8C0);
PPC_FUNC_IMPL(__imp__sub_830EA8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EA8DC"))) PPC_WEAK_FUNC(sub_830EA8DC);
PPC_FUNC_IMPL(__imp__sub_830EA8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA8E0"))) PPC_WEAK_FUNC(sub_830EA8E0);
PPC_FUNC_IMPL(__imp__sub_830EA8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830EA8E8;
	__savegprlr_27(ctx, base);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,396
	ctx.r5.s64 = 25952256;
	// lis r4,366
	ctx.r4.s64 = 23986176;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// li r7,1024
	ctx.r7.s64 = 1024;
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// li r31,8
	ctx.r31.s64 = 8;
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ori r5,r5,47744
	ctx.r5.u64 = ctx.r5.u64 | 47744;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// ori r4,r4,13824
	ctx.r4.u64 = ctx.r4.u64 | 13824;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r29,6
	ctx.r29.s64 = 6;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f0,24504(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r28,5
	ctx.r28.s64 = 5;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r31,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r31.u8);
	// stb r30,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r30.u8);
	// stb r8,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r8.u8);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// stw r29,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r29.u32);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stb r9,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r9.u8);
	// stb r9,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r9.u8);
	// stb r11,102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 102, ctx.r11.u8);
	// stb r11,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r11.u8);
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// stb r9,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r9.u8);
	// stb r9,106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 106, ctx.r9.u8);
	// std r11,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r6,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r6.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r28,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r28.u32);
	// stw r8,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r8.u32);
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// stw r10,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stb r8,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r8.u8);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r27,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r27.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EAA30"))) PPC_WEAK_FUNC(sub_830EAA30);
PPC_FUNC_IMPL(__imp__sub_830EAA30) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eaa94
	if (cr6.eq) goto loc_830EAA94;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830ebb60
	ctx.lr = 0x830EAA5C;
	sub_830EBB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eaa94
	if (!cr6.eq) goto loc_830EAA94;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830ebb60
	ctx.lr = 0x830EAA70;
	sub_830EBB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eaa94
	if (!cr6.eq) goto loc_830EAA94;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830ebb60
	ctx.lr = 0x830EAA84;
	sub_830EBB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eaa98
	if (cr6.eq) goto loc_830EAA98;
loc_830EAA94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EAA98:
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

__attribute__((alias("__imp__sub_830EAAAC"))) PPC_WEAK_FUNC(sub_830EAAAC);
PPC_FUNC_IMPL(__imp__sub_830EAAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EAAB0"))) PPC_WEAK_FUNC(sub_830EAAB0);
PPC_FUNC_IMPL(__imp__sub_830EAAB0) {
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
	// bl 0x830ebb40
	ctx.lr = 0x830EAAC0;
	sub_830EBB40(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eaaf8
	if (cr6.eq) goto loc_830EAAF8;
	// bl 0x830f6768
	ctx.lr = 0x830EAAD4;
	sub_830F6768(ctx, base);
	// bl 0x830f32e8
	ctx.lr = 0x830EAAD8;
	sub_830F32E8(ctx, base);
	// bl 0x835d58e8
	ctx.lr = 0x830EAADC;
	sub_835D58E8(ctx, base);
	// bl 0x830f2e48
	ctx.lr = 0x830EAAE0;
	sub_830F2E48(ctx, base);
	// bl 0x830f4930
	ctx.lr = 0x830EAAE4;
	sub_830F4930(ctx, base);
	// bl 0x830f02a0
	ctx.lr = 0x830EAAE8;
	sub_830F02A0(ctx, base);
	// bl 0x830f0e98
	ctx.lr = 0x830EAAEC;
	sub_830F0E98(ctx, base);
	// bl 0x830ef6b0
	ctx.lr = 0x830EAAF0;
	sub_830EF6B0(ctx, base);
	// bl 0x830f2148
	ctx.lr = 0x830EAAF4;
	sub_830F2148(ctx, base);
	// bl 0x830f1358
	ctx.lr = 0x830EAAF8;
	sub_830F1358(ctx, base);
loc_830EAAF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EAB08"))) PPC_WEAK_FUNC(sub_830EAB08);
PPC_FUNC_IMPL(__imp__sub_830EAB08) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x830f1600
	ctx.lr = 0x830EAB1C;
	sub_830F1600(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x830edee0
	ctx.lr = 0x830EAB24;
	sub_830EDEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EAB34"))) PPC_WEAK_FUNC(sub_830EAB34);
PPC_FUNC_IMPL(__imp__sub_830EAB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EAB38"))) PPC_WEAK_FUNC(sub_830EAB38);
PPC_FUNC_IMPL(__imp__sub_830EAB38) {
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
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x830ebb60
	ctx.lr = 0x830EAB4C;
	sub_830EBB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eab5c
	if (!cr6.eq) goto loc_830EAB5C;
	// bl 0x830f0f18
	ctx.lr = 0x830EAB5C;
	sub_830F0F18(ctx, base);
loc_830EAB5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EAB6C"))) PPC_WEAK_FUNC(sub_830EAB6C);
PPC_FUNC_IMPL(__imp__sub_830EAB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EAB70"))) PPC_WEAK_FUNC(sub_830EAB70);
PPC_FUNC_IMPL(__imp__sub_830EAB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830EAB78;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eacd8
	if (cr6.eq) goto loc_830EACD8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// stb r11,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_830EABC8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x830eabc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EABC8;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lfs f0,-26260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// sth r8,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r8.u16);
	// beq cr6,0x830eaca8
	if (cr6.eq) goto loc_830EACA8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ef418
	ctx.lr = 0x830EAC58;
	sub_830EF418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eacdc
	if (!cr6.eq) goto loc_830EACDC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eac90
	if (cr6.eq) goto loc_830EAC90;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,220
	ctx.r8.s64 = ctx.r1.s64 + 220;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_830EAC80:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830eac80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EAC80;
loc_830EAC90:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
loc_830EACA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835d58f0
	ctx.lr = 0x830EACB4;
	sub_835D58F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830eacd8
	if (cr6.eq) goto loc_830EACD8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830eacd8
	if (cr6.eq) goto loc_830EACD8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x830eacd8
	if (!cr6.eq) goto loc_830EACD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f4010
	ctx.lr = 0x830EACD8;
	sub_830F4010(ctx, base);
loc_830EACD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EACDC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EACE4"))) PPC_WEAK_FUNC(sub_830EACE4);
PPC_FUNC_IMPL(__imp__sub_830EACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EACE8"))) PPC_WEAK_FUNC(sub_830EACE8);
PPC_FUNC_IMPL(__imp__sub_830EACE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830EACF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r11,25292(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ead60
	if (cr6.eq) goto loc_830EAD60;
	// li r30,16
	ctx.r30.s64 = 16;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r31,r1,120
	ctx.r31.s64 = ctx.r1.s64 + 120;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_830EAD30:
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// bdnz 0x830ead30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EAD30;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r5,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r5.u8);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// sth r6,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r6.u16);
	// bl 0x835d58f0
	ctx.lr = 0x830EAD60;
	sub_835D58F0(ctx, base);
loc_830EAD60:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EAD68"))) PPC_WEAK_FUNC(sub_830EAD68);
PPC_FUNC_IMPL(__imp__sub_830EAD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830EAD70;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,16
	ctx.r10.s64 = 16;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// sth r28,222(r1)
	PPC_STORE_U16(ctx.r1.u32 + 222, ctx.r28.u16);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
loc_830EADF8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830eadf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EADF8;
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// lbz r4,25292(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25292);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// lfs f30,-26260(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// beq cr6,0x830eaf4c
	if (cr6.eq) goto loc_830EAF4C;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bge cr6,0x830eaf4c
	if (!cr6.lt) goto loc_830EAF4C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// bl 0x830ef418
	ctx.lr = 0x830EAE90;
	sub_830EF418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eaec4
	if (!cr6.eq) goto loc_830EAEC4;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x830eaea8
	if (cr6.eq) goto loc_830EAEA8;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x830eaed4
	if (!cr6.eq) goto loc_830EAED4;
loc_830EAEA8:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// b 0x830eaed4
	goto loc_830EAED4;
loc_830EAEC4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,-28732
	ctx.r10.s64 = ctx.r11.s64 + -28732;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
loc_830EAED4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// addi r10,r11,-28748
	ctx.r10.s64 = ctx.r11.s64 + -28748;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// bne cr6,0x830eaf08
	if (!cr6.eq) goto loc_830EAF08;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830f1b18
	ctx.lr = 0x830EAEF8;
	sub_830F1B18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eaf08
	if (!cr6.eq) goto loc_830EAF08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
loc_830EAF08:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x835d58f0
	ctx.lr = 0x830EAF14;
	sub_835D58F0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830eaf4c
	if (cr6.eq) goto loc_830EAF4C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eaf4c
	if (!cr6.eq) goto loc_830EAF4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x830eaf4c
	if (cr6.lt) goto loc_830EAF4C;
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x830eaf4c
	if (!cr6.lt) goto loc_830EAF4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835d5908
	ctx.lr = 0x830EAF4C;
	sub_835D5908(ctx, base);
loc_830EAF4C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EAF5C"))) PPC_WEAK_FUNC(sub_830EAF5C);
PPC_FUNC_IMPL(__imp__sub_830EAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EAF60"))) PPC_WEAK_FUNC(sub_830EAF60);
PPC_FUNC_IMPL(__imp__sub_830EAF60) {
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
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eaf94
	if (cr6.eq) goto loc_830EAF94;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x830eab70
	ctx.lr = 0x830EAF84;
	sub_830EAB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EAF94:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r11,r11,24012
	ctx.r11.s64 = ctx.r11.s64 + 24012;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830eace8
	ctx.lr = 0x830EAFC8;
	sub_830EACE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EAFD8"))) PPC_WEAK_FUNC(sub_830EAFD8);
PPC_FUNC_IMPL(__imp__sub_830EAFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830EAFE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,24052
	ctx.r31.s64 = ctx.r11.s64 + 24052;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// addi r10,r31,-24
	ctx.r10.s64 = ctx.r31.s64 + -24;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x835d5a58
	ctx.lr = 0x830EB020;
	sub_835D5A58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eb064
	if (!cr6.eq) goto loc_830EB064;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x830eb03c
	if (!cr6.lt) goto loc_830EB03C;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
loc_830EB03C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x835d5aa8
	ctx.lr = 0x830EB048;
	sub_835D5AA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eb064
	if (!cr6.eq) goto loc_830EB064;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_830EB064:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eb0dc
	if (cr6.eq) goto loc_830EB0DC;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_830EB0A0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830eb0a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EB0A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r9,-8
	ctx.r9.s64 = -8;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r28,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r28.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// sth r9,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r9.u16);
	// bl 0x835d58f0
	ctx.lr = 0x830EB0DC;
	sub_835D58F0(ctx, base);
loc_830EB0DC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB0E4"))) PPC_WEAK_FUNC(sub_830EB0E4);
PPC_FUNC_IMPL(__imp__sub_830EB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB0E8"))) PPC_WEAK_FUNC(sub_830EB0E8);
PPC_FUNC_IMPL(__imp__sub_830EB0E8) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830eb140
	if (cr6.eq) goto loc_830EB140;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,24436
	ctx.r5.s64 = ctx.r11.s64 + 24436;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ldx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r5.u32);
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x830eace8
	ctx.lr = 0x830EB130;
	sub_830EACE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EB140:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x830EB154;
	sub_830EAB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB164"))) PPC_WEAK_FUNC(sub_830EB164);
PPC_FUNC_IMPL(__imp__sub_830EB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB168"))) PPC_WEAK_FUNC(sub_830EB168);
PPC_FUNC_IMPL(__imp__sub_830EB168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb180
	if (cr6.eq) goto loc_830EB180;
	// b 0x835d58f8
	sub_835D58F8(ctx, base);
	return;
loc_830EB180:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB188"))) PPC_WEAK_FUNC(sub_830EB188);
PPC_FUNC_IMPL(__imp__sub_830EB188) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eb1c0
	if (cr6.eq) goto loc_830EB1C0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x835d58f8
	ctx.lr = 0x830EB1B4;
	sub_835D58F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x830eb1c4
	if (!cr6.eq) goto loc_830EB1C4;
loc_830EB1C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EB1C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB1D4"))) PPC_WEAK_FUNC(sub_830EB1D4);
PPC_FUNC_IMPL(__imp__sub_830EB1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB1D8"))) PPC_WEAK_FUNC(sub_830EB1D8);
PPC_FUNC_IMPL(__imp__sub_830EB1D8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eb224
	if (cr6.eq) goto loc_830EB224;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835d5a18
	ctx.lr = 0x830EB208;
	sub_835D5A18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eb224
	if (!cr6.eq) goto loc_830EB224;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830eb228
	if (!cr6.eq) goto loc_830EB228;
loc_830EB224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EB228:
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

__attribute__((alias("__imp__sub_830EB23C"))) PPC_WEAK_FUNC(sub_830EB23C);
PPC_FUNC_IMPL(__imp__sub_830EB23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB240"))) PPC_WEAK_FUNC(sub_830EB240);
PPC_FUNC_IMPL(__imp__sub_830EB240) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eb280
	if (cr6.eq) goto loc_830EB280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835d5a08
	ctx.lr = 0x830EB26C;
	sub_835D5A08(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,272
	ctx.r10.u64 = ctx.r11.u64 | 272;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x830eb284
	if (!cr6.eq) goto loc_830EB284;
loc_830EB280:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EB284:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB298"))) PPC_WEAK_FUNC(sub_830EB298);
PPC_FUNC_IMPL(__imp__sub_830EB298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb2e4
	if (cr6.eq) goto loc_830EB2E4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835d5918
	ctx.lr = 0x830EB2D4;
	sub_835D5918(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EB2E4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB2F8"))) PPC_WEAK_FUNC(sub_830EB2F8);
PPC_FUNC_IMPL(__imp__sub_830EB2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb314
	if (cr6.eq) goto loc_830EB314;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x835d5908
	sub_835D5908(ctx, base);
	return;
loc_830EB314:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB31C"))) PPC_WEAK_FUNC(sub_830EB31C);
PPC_FUNC_IMPL(__imp__sub_830EB31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB320"))) PPC_WEAK_FUNC(sub_830EB320);
PPC_FUNC_IMPL(__imp__sub_830EB320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb338
	if (cr6.eq) goto loc_830EB338;
	// b 0x835d5990
	sub_835D5990(ctx, base);
	return;
loc_830EB338:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB340"))) PPC_WEAK_FUNC(sub_830EB340);
PPC_FUNC_IMPL(__imp__sub_830EB340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x835d5948
	sub_835D5948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB35C"))) PPC_WEAK_FUNC(sub_830EB35C);
PPC_FUNC_IMPL(__imp__sub_830EB35C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB360"))) PPC_WEAK_FUNC(sub_830EB360);
PPC_FUNC_IMPL(__imp__sub_830EB360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x835d5950
	sub_835D5950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB388"))) PPC_WEAK_FUNC(sub_830EB388);
PPC_FUNC_IMPL(__imp__sub_830EB388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB38C"))) PPC_WEAK_FUNC(sub_830EB38C);
PPC_FUNC_IMPL(__imp__sub_830EB38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB390"))) PPC_WEAK_FUNC(sub_830EB390);
PPC_FUNC_IMPL(__imp__sub_830EB390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eb3c8
	if (cr6.eq) goto loc_830EB3C8;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x835d5960
	ctx.lr = 0x830EB3C8;
	sub_835D5960(ctx, base);
loc_830EB3C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB3D8"))) PPC_WEAK_FUNC(sub_830EB3D8);
PPC_FUNC_IMPL(__imp__sub_830EB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x835d5958
	sub_835D5958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB3F4"))) PPC_WEAK_FUNC(sub_830EB3F4);
PPC_FUNC_IMPL(__imp__sub_830EB3F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB3F8"))) PPC_WEAK_FUNC(sub_830EB3F8);
PPC_FUNC_IMPL(__imp__sub_830EB3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x835d5968
	sub_835D5968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB414"))) PPC_WEAK_FUNC(sub_830EB414);
PPC_FUNC_IMPL(__imp__sub_830EB414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB418"))) PPC_WEAK_FUNC(sub_830EB418);
PPC_FUNC_IMPL(__imp__sub_830EB418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x835d5970
	sub_835D5970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB434"))) PPC_WEAK_FUNC(sub_830EB434);
PPC_FUNC_IMPL(__imp__sub_830EB434) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB438"))) PPC_WEAK_FUNC(sub_830EB438);
PPC_FUNC_IMPL(__imp__sub_830EB438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb454
	if (cr6.eq) goto loc_830EB454;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x835d5930
	sub_835D5930(ctx, base);
	return;
loc_830EB454:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB45C"))) PPC_WEAK_FUNC(sub_830EB45C);
PPC_FUNC_IMPL(__imp__sub_830EB45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB460"))) PPC_WEAK_FUNC(sub_830EB460);
PPC_FUNC_IMPL(__imp__sub_830EB460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb47c
	if (cr6.eq) goto loc_830EB47C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x835d5930
	sub_835D5930(ctx, base);
	return;
loc_830EB47C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB484"))) PPC_WEAK_FUNC(sub_830EB484);
PPC_FUNC_IMPL(__imp__sub_830EB484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB488"))) PPC_WEAK_FUNC(sub_830EB488);
PPC_FUNC_IMPL(__imp__sub_830EB488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb4a0
	if (cr6.eq) goto loc_830EB4A0;
	// b 0x835d5938
	sub_835D5938(ctx, base);
	return;
loc_830EB4A0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB4A8"))) PPC_WEAK_FUNC(sub_830EB4A8);
PPC_FUNC_IMPL(__imp__sub_830EB4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,25292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eb4cc
	if (cr6.eq) goto loc_830EB4CC;
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x835d5940
	sub_835D5940(ctx, base);
	return;
loc_830EB4CC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB4D4"))) PPC_WEAK_FUNC(sub_830EB4D4);
PPC_FUNC_IMPL(__imp__sub_830EB4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB4D8"))) PPC_WEAK_FUNC(sub_830EB4D8);
PPC_FUNC_IMPL(__imp__sub_830EB4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bgt cr6,0x830eb52c
	if (cr6.gt) goto loc_830EB52C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x830eb52c
	if (cr6.lt) goto loc_830EB52C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x830eb52c
	if (cr6.gt) goto loc_830EB52C;
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// lbz r9,25292(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-28716
	ctx.r8.s64 = ctx.r10.s64 + -28716;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x835d5978
	sub_835D5978(ctx, base);
	return;
loc_830EB52C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB534"))) PPC_WEAK_FUNC(sub_830EB534);
PPC_FUNC_IMPL(__imp__sub_830EB534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB538"))) PPC_WEAK_FUNC(sub_830EB538);
PPC_FUNC_IMPL(__imp__sub_830EB538) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f0408
	sub_830F0408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB53C"))) PPC_WEAK_FUNC(sub_830EB53C);
PPC_FUNC_IMPL(__imp__sub_830EB53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB540"))) PPC_WEAK_FUNC(sub_830EB540);
PPC_FUNC_IMPL(__imp__sub_830EB540) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f05a0
	sub_830F05A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB544"))) PPC_WEAK_FUNC(sub_830EB544);
PPC_FUNC_IMPL(__imp__sub_830EB544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB548"))) PPC_WEAK_FUNC(sub_830EB548);
PPC_FUNC_IMPL(__imp__sub_830EB548) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f0508
	sub_830F0508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB54C"))) PPC_WEAK_FUNC(sub_830EB54C);
PPC_FUNC_IMPL(__imp__sub_830EB54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB550"))) PPC_WEAK_FUNC(sub_830EB550);
PPC_FUNC_IMPL(__imp__sub_830EB550) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f0500
	sub_830F0500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB554"))) PPC_WEAK_FUNC(sub_830EB554);
PPC_FUNC_IMPL(__imp__sub_830EB554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB558"))) PPC_WEAK_FUNC(sub_830EB558);
PPC_FUNC_IMPL(__imp__sub_830EB558) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f6c90
	sub_830F6C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB55C"))) PPC_WEAK_FUNC(sub_830EB55C);
PPC_FUNC_IMPL(__imp__sub_830EB55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB560"))) PPC_WEAK_FUNC(sub_830EB560);
PPC_FUNC_IMPL(__imp__sub_830EB560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830EB568;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lbz r10,25293(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25293);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eb58c
	if (cr6.eq) goto loc_830EB58C;
	// addi r11,r11,24304
	ctx.r11.s64 = ctx.r11.s64 + 24304;
	// addi r30,r11,-44
	ctx.r30.s64 = ctx.r11.s64 + -44;
	// b 0x830eb590
	goto loc_830EB590;
loc_830EB58C:
	// addi r30,r11,24304
	ctx.r30.s64 = ctx.r11.s64 + 24304;
loc_830EB590:
	// li r29,24
	ctx.r29.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830EB5A8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eb5d8
	if (cr6.eq) goto loc_830EB5D8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83104868
	ctx.lr = 0x830EB5C4;
	sub_83104868(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,24428
	ctx.r9.s64 = ctx.r10.s64 + 24428;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x830eb5dc
	goto loc_830EB5DC;
loc_830EB5D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EB5DC:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r11,r11,25288
	ctx.r11.s64 = ctx.r11.s64 + 25288;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x830EB5EC;
	sub_83103B18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EB5F8"))) PPC_WEAK_FUNC(sub_830EB5F8);
PPC_FUNC_IMPL(__imp__sub_830EB5F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x835d5a00
	ctx.lr = 0x830EB614;
	sub_835D5A00(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x830f32c8
	ctx.lr = 0x830EB61C;
	sub_830F32C8(ctx, base);
	// bl 0x830f6bc8
	ctx.lr = 0x830EB620;
	sub_830F6BC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB630"))) PPC_WEAK_FUNC(sub_830EB630);
PPC_FUNC_IMPL(__imp__sub_830EB630) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,25296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eb678
	if (!cr6.eq) goto loc_830EB678;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830EB66C;
	sub_82595718(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,25296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25296, ctx.r3.u32);
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_830EB678:
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

__attribute__((alias("__imp__sub_830EB68C"))) PPC_WEAK_FUNC(sub_830EB68C);
PPC_FUNC_IMPL(__imp__sub_830EB68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB690"))) PPC_WEAK_FUNC(sub_830EB690);
PPC_FUNC_IMPL(__imp__sub_830EB690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830eb7b4
	if (cr6.eq) goto loc_830EB7B4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830eb7b4
	if (cr6.eq) goto loc_830EB7B4;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
loc_830EB6D0:
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// sth r9,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r9.u16);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// sth r9,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r9.u16);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// sth r9,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// sth r9,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r9.u16);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// sth r9,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r9.u16);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// sth r9,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r9.u16);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// sth r9,72(r11)
	PPC_STORE_U16(ctx.r11.u32 + 72, ctx.r9.u16);
	// stwu r10,76(r11)
	ea = 76 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830eb6d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EB6D0;
	// stw r4,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r4.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r5,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r5.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// ori r3,r3,6464
	ctx.r3.u64 = ctx.r3.u64 | 6464;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// sth r6,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r6.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r11.u8);
	// li r31,5
	ctx.r31.s64 = 5;
	// sth r8,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r8.u16);
	// li r6,6
	ctx.r6.s64 = 6;
	// sth r8,76(r4)
	PPC_STORE_U16(ctx.r4.u32 + 76, ctx.r8.u16);
	// li r30,14
	ctx.r30.s64 = 14;
	// stb r11,78(r4)
	PPC_STORE_U8(ctx.r4.u32 + 78, ctx.r11.u8);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// sth r11,80(r4)
	PPC_STORE_U16(ctx.r4.u32 + 80, ctx.r11.u16);
	// sth r11,152(r4)
	PPC_STORE_U16(ctx.r4.u32 + 152, ctx.r11.u16);
	// stb r8,154(r4)
	PPC_STORE_U8(ctx.r4.u32 + 154, ctx.r8.u8);
	// sth r7,156(r4)
	PPC_STORE_U16(ctx.r4.u32 + 156, ctx.r7.u16);
	// sth r7,228(r4)
	PPC_STORE_U16(ctx.r4.u32 + 228, ctx.r7.u16);
	// stb r11,230(r4)
	PPC_STORE_U8(ctx.r4.u32 + 230, ctx.r11.u8);
	// sth r11,232(r4)
	PPC_STORE_U16(ctx.r4.u32 + 232, ctx.r11.u16);
	// sth r10,304(r4)
	PPC_STORE_U16(ctx.r4.u32 + 304, ctx.r10.u16);
	// stb r10,306(r4)
	PPC_STORE_U8(ctx.r4.u32 + 306, ctx.r10.u8);
	// sth r8,308(r4)
	PPC_STORE_U16(ctx.r4.u32 + 308, ctx.r8.u16);
	// sth r31,380(r4)
	PPC_STORE_U16(ctx.r4.u32 + 380, ctx.r31.u16);
	// stb r8,382(r4)
	PPC_STORE_U8(ctx.r4.u32 + 382, ctx.r8.u8);
	// sth r5,392(r4)
	PPC_STORE_U16(ctx.r4.u32 + 392, ctx.r5.u16);
	// sth r6,456(r4)
	PPC_STORE_U16(ctx.r4.u32 + 456, ctx.r6.u16);
	// stb r8,458(r4)
	PPC_STORE_U8(ctx.r4.u32 + 458, ctx.r8.u8);
	// sth r30,468(r4)
	PPC_STORE_U16(ctx.r4.u32 + 468, ctx.r30.u16);
loc_830EB7B4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB7C0"))) PPC_WEAK_FUNC(sub_830EB7C0);
PPC_FUNC_IMPL(__imp__sub_830EB7C0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,25292(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830eb7f4
	if (cr6.eq) goto loc_830EB7F4;
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
loc_830EB7F4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// bl 0x831ce980
	ctx.lr = 0x830EB804;
	sub_831CE980(ctx, base);
	// bl 0x830f3600
	ctx.lr = 0x830EB808;
	sub_830F3600(ctx, base);
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// lbz r3,25293(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25293);
	// bl 0x830eba90
	ctx.lr = 0x830EB814;
	sub_830EBA90(ctx, base);
	// bl 0x830eb560
	ctx.lr = 0x830EB818;
	sub_830EB560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EB828"))) PPC_WEAK_FUNC(sub_830EB828);
PPC_FUNC_IMPL(__imp__sub_830EB828) {
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
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// lbz r11,25292(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eb8c8
	if (cr6.eq) goto loc_830EB8C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,25292(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25292, ctx.r11.u8);
	// bl 0x830f1230
	ctx.lr = 0x830EB854;
	sub_830F1230(ctx, base);
	// bl 0x830f2018
	ctx.lr = 0x830EB858;
	sub_830F2018(ctx, base);
	// bl 0x830eef20
	ctx.lr = 0x830EB85C;
	sub_830EEF20(ctx, base);
	// bl 0x830f0e48
	ctx.lr = 0x830EB860;
	sub_830F0E48(ctx, base);
	// bl 0x830f16e0
	ctx.lr = 0x830EB864;
	sub_830F16E0(ctx, base);
	// bl 0x830f2b58
	ctx.lr = 0x830EB868;
	sub_830F2B58(ctx, base);
	// bl 0x830f42c0
	ctx.lr = 0x830EB86C;
	sub_830F42C0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x835d5858
	ctx.lr = 0x830EB874;
	sub_835D5858(ctx, base);
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r4,25296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25296);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830eb89c
	if (cr6.eq) goto loc_830EB89C;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830EB894;
	sub_825952B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25296, ctx.r11.u32);
loc_830EB89C:
	// bl 0x830f6b40
	ctx.lr = 0x830EB8A0;
	sub_830F6B40(ctx, base);
	// bl 0x830f6658
	ctx.lr = 0x830EB8A4;
	sub_830F6658(ctx, base);
	// bl 0x830f3278
	ctx.lr = 0x830EB8A8;
	sub_830F3278(ctx, base);
	// bl 0x830ee560
	ctx.lr = 0x830EB8AC;
	sub_830EE560(ctx, base);
	// bl 0x830ee9a8
	ctx.lr = 0x830EB8B0;
	sub_830EE9A8(ctx, base);
	// bl 0x830ebaf8
	ctx.lr = 0x830EB8B4;
	sub_830EBAF8(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,25288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eb8c8
	if (cr6.eq) goto loc_830EB8C8;
	// bl 0x83103e98
	ctx.lr = 0x830EB8C8;
	sub_83103E98(ctx, base);
loc_830EB8C8:
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

__attribute__((alias("__imp__sub_830EB8DC"))) PPC_WEAK_FUNC(sub_830EB8DC);
PPC_FUNC_IMPL(__imp__sub_830EB8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EB8E0"))) PPC_WEAK_FUNC(sub_830EB8E0);
PPC_FUNC_IMPL(__imp__sub_830EB8E0) {
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
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830f6448
	ctx.lr = 0x830EB904;
	sub_830F6448(ctx, base);
	// bl 0x830f6a78
	ctx.lr = 0x830EB908;
	sub_830F6A78(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ea8e0
	ctx.lr = 0x830EB910;
	sub_830EA8E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r8,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r8.u8);
	// bl 0x831d2828
	ctx.lr = 0x830EB938;
	sub_831D2828(ctx, base);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r4,30
	ctx.r4.s64 = 1966080;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r10,r7,-28792
	ctx.r10.s64 = ctx.r7.s64 + -28792;
	// ori r7,r4,33920
	ctx.r7.u64 = ctx.r4.u64 | 33920;
	// li r8,10
	ctx.r8.s64 = 10;
	// lis r6,-31985
	ctx.r6.s64 = -2096168960;
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// lis r5,-31985
	ctx.r5.s64 = -2096168960;
	// stb r8,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r8.u8);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r5,26248
	ctx.r8.s64 = ctx.r5.s64 + 26248;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r9,r6,-18952
	ctx.r9.s64 = ctx.r6.s64 + -18952;
	// stb r11,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// bl 0x831ce980
	ctx.lr = 0x830EB9A4;
	sub_831CE980(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830eb690
	ctx.lr = 0x830EB9B0;
	sub_830EB690(ctx, base);
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r6,24468
	ctx.r5.s64 = ctx.r6.s64 + 24468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x833cb2d8
	ctx.lr = 0x830EB9C8;
	sub_833CB2D8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835d57f8
	ctx.lr = 0x830EB9E4;
	sub_835D57F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eba68
	if (!cr6.eq) goto loc_830EBA68;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x830eba04
	if (!cr6.gt) goto loc_830EBA04;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830eba68
	goto loc_830EBA68;
loc_830EBA04:
	// bl 0x830eb630
	ctx.lr = 0x830EBA08;
	sub_830EB630(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,25296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25296);
	// bl 0x835d5ce8
	ctx.lr = 0x830EBA1C;
	sub_835D5CE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eba68
	if (!cr6.eq) goto loc_830EBA68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830f6d20
	ctx.lr = 0x830EBA2C;
	sub_830F6D20(ctx, base);
	// bl 0x830f3178
	ctx.lr = 0x830EBA30;
	sub_830F3178(ctx, base);
	// bl 0x830f4fc8
	ctx.lr = 0x830EBA34;
	sub_830F4FC8(ctx, base);
	// bl 0x830f1670
	ctx.lr = 0x830EBA38;
	sub_830F1670(ctx, base);
	// bl 0x830eee58
	ctx.lr = 0x830EBA3C;
	sub_830EEE58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830edee0
	ctx.lr = 0x830EBA44;
	sub_830EDEE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830edee0
	ctx.lr = 0x830EBA4C;
	sub_830EDEE0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830edee0
	ctx.lr = 0x830EBA54;
	sub_830EDEE0(ctx, base);
	// bl 0x830f1f30
	ctx.lr = 0x830EBA58;
	sub_830F1F30(ctx, base);
	// bl 0x830f1118
	ctx.lr = 0x830EBA5C;
	sub_830F1118(ctx, base);
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,25292(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25292, ctx.r11.u8);
loc_830EBA68:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
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

__attribute__((alias("__imp__sub_830EBA80"))) PPC_WEAK_FUNC(sub_830EBA80);
PPC_FUNC_IMPL(__imp__sub_830EBA80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x830eb8e0
	sub_830EB8E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EBA8C"))) PPC_WEAK_FUNC(sub_830EBA8C);
PPC_FUNC_IMPL(__imp__sub_830EBA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EBA90"))) PPC_WEAK_FUNC(sub_830EBA90);
PPC_FUNC_IMPL(__imp__sub_830EBA90) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ebac0
	if (cr6.eq) goto loc_830EBAC0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830ebae0
	goto loc_830EBAE0;
loc_830EBAC0:
	// bl 0x830f7768
	ctx.lr = 0x830EBAC4;
	sub_830F7768(ctx, base);
	// bl 0x830f6da0
	ctx.lr = 0x830EBAC8;
	sub_830F6DA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830ebae0
	if (!cr6.eq) goto loc_830EBAE0;
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,25328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25328, ctx.r11.u8);
	// stb r30,25329(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25329, ctx.r30.u8);
loc_830EBAE0:
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

__attribute__((alias("__imp__sub_830EBAF8"))) PPC_WEAK_FUNC(sub_830EBAF8);
PPC_FUNC_IMPL(__imp__sub_830EBAF8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lbz r10,25328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25328);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ebb28
	if (!cr6.eq) goto loc_830EBB28;
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
loc_830EBB28:
	// bl 0x830f6e48
	ctx.lr = 0x830EBB2C;
	sub_830F6E48(ctx, base);
	// bl 0x830f7800
	ctx.lr = 0x830EBB30;
	sub_830F7800(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EBB40"))) PPC_WEAK_FUNC(sub_830EBB40);
PPC_FUNC_IMPL(__imp__sub_830EBB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,25328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25328);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x830f72c0
	sub_830F72C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EBB58"))) PPC_WEAK_FUNC(sub_830EBB58);
PPC_FUNC_IMPL(__imp__sub_830EBB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EBB5C"))) PPC_WEAK_FUNC(sub_830EBB5C);
PPC_FUNC_IMPL(__imp__sub_830EBB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EBB60"))) PPC_WEAK_FUNC(sub_830EBB60);
PPC_FUNC_IMPL(__imp__sub_830EBB60) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,25328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25328);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ebb9c
	if (!cr6.eq) goto loc_830EBB9C;
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
loc_830EBB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bgt cr6,0x830ebc00
	if (cr6.gt) goto loc_830EBC00;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830ebbd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EBBD0;
	// bdzf 4*cr6+eq,0x830ebbdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EBBDC;
	// bdzf 4*cr6+eq,0x830ebbdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EBBDC;
	// bdzf 4*cr6+eq,0x830ebbec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EBBEC;
	// bne cr6,0x830ebbf8
	if (!cr6.eq) goto loc_830EBBF8;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x830ebc00
	goto loc_830EBC00;
loc_830EBBD0:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x830ebc00
	goto loc_830EBC00;
loc_830EBBDC:
	// lis r3,2055
	ctx.r3.s64 = 134676480;
	// ori r3,r3,65405
	ctx.r3.u64 = ctx.r3.u64 | 65405;
	// rldicr r3,r3,4,59
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// b 0x830ebc00
	goto loc_830EBC00;
loc_830EBBEC:
	// li r3,575
	ctx.r3.s64 = 575;
	// rldicr r3,r3,23,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 23) & 0xFFFFFFFFFF800000;
	// b 0x830ebc00
	goto loc_830EBC00;
loc_830EBBF8:
	// li r3,11
	ctx.r3.s64 = 11;
	// rldicr r3,r3,29,34
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 29) & 0xFFFFFFFFE0000000;
loc_830EBC00:
	// bl 0x830f6fe0
	ctx.lr = 0x830EBC04;
	sub_830F6FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ebc2c
	if (!cr6.eq) goto loc_830EBC2C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x830ebc2c
	if (!cr6.eq) goto loc_830EBC2C;
	// bl 0x830f57e0
	ctx.lr = 0x830EBC1C;
	sub_830F57E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ebc2c
	if (!cr6.eq) goto loc_830EBC2C;
	// bl 0x830f78b0
	ctx.lr = 0x830EBC2C;
	sub_830F78B0(ctx, base);
loc_830EBC2C:
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

__attribute__((alias("__imp__sub_830EBC40"))) PPC_WEAK_FUNC(sub_830EBC40);
PPC_FUNC_IMPL(__imp__sub_830EBC40) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f0de0
	sub_830F0DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EBC44"))) PPC_WEAK_FUNC(sub_830EBC44);
PPC_FUNC_IMPL(__imp__sub_830EBC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EBC48"))) PPC_WEAK_FUNC(sub_830EBC48);
PPC_FUNC_IMPL(__imp__sub_830EBC48) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f0ef0
	sub_830F0EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EBC4C"))) PPC_WEAK_FUNC(sub_830EBC4C);
PPC_FUNC_IMPL(__imp__sub_830EBC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EBC50"))) PPC_WEAK_FUNC(sub_830EBC50);
PPC_FUNC_IMPL(__imp__sub_830EBC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830EBC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ebc84
	if (cr6.lt) goto loc_830EBC84;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830EBC84;
	sub_825952B8(ctx, base);
loc_830EBC84:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ebcb8
	if (cr6.lt) goto loc_830EBCB8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830EBCB8;
	sub_825952B8(ctx, base);
loc_830EBCB8:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EBCCC"))) PPC_WEAK_FUNC(sub_830EBCCC);
PPC_FUNC_IMPL(__imp__sub_830EBCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EBCD0"))) PPC_WEAK_FUNC(sub_830EBCD0);
PPC_FUNC_IMPL(__imp__sub_830EBCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830EBCD8;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-28548
	ctx.r11.s64 = ctx.r11.s64 + -28548;
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// ori r22,r9,3
	ctx.r22.u64 = ctx.r9.u64 | 3;
	// ori r23,r8,65529
	ctx.r23.u64 = ctx.r8.u64 | 65529;
	// lis r27,-31754
	ctx.r27.s64 = -2081030144;
	// addi r30,r11,24549
	ctx.r30.s64 = ctx.r11.s64 + 24549;
loc_830EBD24:
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// sth r26,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r26.u16);
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// beq cr6,0x830ebd74
	if (cr6.eq) goto loc_830EBD74;
	// addi r4,r30,115
	ctx.r4.s64 = ctx.r30.s64 + 115;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x830ebd7c
	goto loc_830EBD7C;
loc_830EBD74:
	// addi r4,r30,151
	ctx.r4.s64 = ctx.r30.s64 + 151;
	// li r5,30
	ctx.r5.s64 = 30;
loc_830EBD7C:
	// bl 0x8259cc28
	ctx.lr = 0x830EBD80;
	sub_8259CC28(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EBD88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ebd88
	if (!cr6.eq) goto loc_830EBD88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EBDAC;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,183
	ctx.r4.s64 = ctx.r30.s64 + 183;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830EBDBC;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ebdd0
	if (!cr6.lt) goto loc_830EBDD0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830EBDD0:
	// bl 0x83104018
	ctx.lr = 0x830EBDD4;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ebec4
	if (cr6.eq) goto loc_830EBEC4;
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ebe04
	if (cr6.eq) goto loc_830EBE04;
	// addi r4,r30,191
	ctx.r4.s64 = ctx.r30.s64 + 191;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x8259cc28
	ctx.lr = 0x830EBE00;
	sub_8259CC28(ctx, base);
	// b 0x830ebe24
	goto loc_830EBE24;
loc_830EBE04:
	// addi r4,r30,227
	ctx.r4.s64 = ctx.r30.s64 + 227;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x8259cc28
	ctx.lr = 0x830EBE10;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EBE14;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ebe24
	if (cr6.eq) goto loc_830EBE24;
	// bl 0x83574c00
	ctx.lr = 0x830EBE20;
	sub_83574C00(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_830EBE24:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EBE2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ebe2c
	if (!cr6.eq) goto loc_830EBE2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EBE50;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,251
	ctx.r4.s64 = ctx.r30.s64 + 251;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830EBE60;
	sub_825A1EB8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ebe74
	if (!cr6.lt) goto loc_830EBE74;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
loc_830EBE74:
	// bl 0x83104018
	ctx.lr = 0x830EBE78;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ebe98
	if (!cr6.eq) goto loc_830EBE98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cc28
	ctx.lr = 0x830EBE94;
	sub_8259CC28(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
loc_830EBE98:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// sth r23,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r23.u16);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r10,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r10.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830EBEB8;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ebec4
	if (cr6.eq) goto loc_830EBEC4;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_830EBEC4:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ebee0
	if (cr6.lt) goto loc_830EBEE0;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x825952b8
	ctx.lr = 0x830EBEE0;
	sub_825952B8(ctx, base);
loc_830EBEE0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// blt cr6,0x830ebf08
	if (cr6.lt) goto loc_830EBF08;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x830EBF08;
	sub_825952B8(ctx, base);
loc_830EBF08:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne 0x830ebd24
	if (!cr0.eq) goto loc_830EBD24;
	// subfic r11,r21,0
	xer.ca = ctx.r21.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r21.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EBF30"))) PPC_WEAK_FUNC(sub_830EBF30);
PPC_FUNC_IMPL(__imp__sub_830EBF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830EBF38;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-28524
	ctx.r11.s64 = ctx.r11.s64 + -28524;
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// ori r22,r9,8
	ctx.r22.u64 = ctx.r9.u64 | 8;
	// ori r23,r8,65528
	ctx.r23.u64 = ctx.r8.u64 | 65528;
	// lis r27,-31754
	ctx.r27.s64 = -2081030144;
	// addi r30,r11,24550
	ctx.r30.s64 = ctx.r11.s64 + 24550;
loc_830EBF84:
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// sth r26,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r26.u16);
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// beq cr6,0x830ebfd4
	if (cr6.eq) goto loc_830EBFD4;
	// addi r4,r30,282
	ctx.r4.s64 = ctx.r30.s64 + 282;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x830ebfdc
	goto loc_830EBFDC;
loc_830EBFD4:
	// addi r4,r30,318
	ctx.r4.s64 = ctx.r30.s64 + 318;
	// li r5,30
	ctx.r5.s64 = 30;
loc_830EBFDC:
	// bl 0x8259cc28
	ctx.lr = 0x830EBFE0;
	sub_8259CC28(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EBFE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ebfe8
	if (!cr6.eq) goto loc_830EBFE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EC00C;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,350
	ctx.r4.s64 = ctx.r30.s64 + 350;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830EC01C;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ec030
	if (!cr6.lt) goto loc_830EC030;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830EC030:
	// bl 0x83104018
	ctx.lr = 0x830EC034;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ec124
	if (cr6.eq) goto loc_830EC124;
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ec064
	if (cr6.eq) goto loc_830EC064;
	// addi r4,r30,358
	ctx.r4.s64 = ctx.r30.s64 + 358;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x8259cc28
	ctx.lr = 0x830EC060;
	sub_8259CC28(ctx, base);
	// b 0x830ec084
	goto loc_830EC084;
loc_830EC064:
	// addi r4,r30,394
	ctx.r4.s64 = ctx.r30.s64 + 394;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x8259cc28
	ctx.lr = 0x830EC070;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EC074;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec084
	if (cr6.eq) goto loc_830EC084;
	// bl 0x83574c00
	ctx.lr = 0x830EC080;
	sub_83574C00(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_830EC084:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EC08C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ec08c
	if (!cr6.eq) goto loc_830EC08C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EC0B0;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,418
	ctx.r4.s64 = ctx.r30.s64 + 418;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830EC0C0;
	sub_825A1EB8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ec0d4
	if (!cr6.lt) goto loc_830EC0D4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
loc_830EC0D4:
	// bl 0x83104018
	ctx.lr = 0x830EC0D8;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ec0f8
	if (!cr6.eq) goto loc_830EC0F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cc28
	ctx.lr = 0x830EC0F4;
	sub_8259CC28(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
loc_830EC0F8:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// sth r23,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r23.u16);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r10,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r10.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830EC118;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec124
	if (cr6.eq) goto loc_830EC124;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_830EC124:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ec140
	if (cr6.lt) goto loc_830EC140;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x825952b8
	ctx.lr = 0x830EC140;
	sub_825952B8(ctx, base);
loc_830EC140:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// blt cr6,0x830ec168
	if (cr6.lt) goto loc_830EC168;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x830EC168;
	sub_825952B8(ctx, base);
loc_830EC168:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne 0x830ebf84
	if (!cr0.eq) goto loc_830EBF84;
	// subfic r11,r21,0
	xer.ca = ctx.r21.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r21.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EC190"))) PPC_WEAK_FUNC(sub_830EC190);
PPC_FUNC_IMPL(__imp__sub_830EC190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830EC198;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31754
	ctx.r27.s64 = -2081030144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// std r31,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r31.u64);
	// lbz r9,25329(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// addi r28,r11,25264
	ctx.r28.s64 = ctx.r11.s64 + 25264;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r30.u16);
	// sth r31,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r31.u16);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// beq cr6,0x830ec224
	if (cr6.eq) goto loc_830EC224;
	// li r5,43
	ctx.r5.s64 = 43;
	// addi r4,r28,-288
	ctx.r4.s64 = ctx.r28.s64 + -288;
	// bl 0x8259cc28
	ctx.lr = 0x830EC210;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-244
	ctx.r4.s64 = ctx.r28.s64 + -244;
	// li r5,43
	ctx.r5.s64 = 43;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x8259cc28
	ctx.lr = 0x830EC220;
	sub_8259CC28(ctx, base);
	// b 0x830ec254
	goto loc_830EC254;
loc_830EC224:
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r28,-200
	ctx.r4.s64 = ctx.r28.s64 + -200;
	// bl 0x8259cc28
	ctx.lr = 0x830EC230;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-156
	ctx.r4.s64 = ctx.r28.s64 + -156;
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x8259cc28
	ctx.lr = 0x830EC240;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EC244;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec254
	if (cr6.eq) goto loc_830EC254;
	// bl 0x83574c00
	ctx.lr = 0x830EC250;
	sub_83574C00(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
loc_830EC254:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r24,r11,3
	ctx.r24.u64 = ctx.r11.u64 | 3;
	// ori r25,r10,65528
	ctx.r25.u64 = ctx.r10.u64 | 65528;
	// li r9,2
	ctx.r9.s64 = 2;
	// std r24,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r24.u64);
	// sth r25,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r25.u16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// bl 0x830f75f8
	ctx.lr = 0x830EC27C;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec288
	if (cr6.eq) goto loc_830EC288;
	// li r23,1
	ctx.r23.s64 = 1;
loc_830EC288:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x830ebc50
	ctx.lr = 0x830EC290;
	sub_830EBC50(ctx, base);
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r31.u8);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// sth r30,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r30.u16);
	// sth r31,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r31.u16);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x830ec2f4
	if (cr6.eq) goto loc_830EC2F4;
	// addi r4,r28,-120
	ctx.r4.s64 = ctx.r28.s64 + -120;
	// li r5,39
	ctx.r5.s64 = 39;
	// bl 0x8259cc28
	ctx.lr = 0x830EC2E0;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8259cc28
	ctx.lr = 0x830EC2F0;
	sub_8259CC28(ctx, base);
	// b 0x830ec324
	goto loc_830EC324;
loc_830EC2F4:
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// li r5,37
	ctx.r5.s64 = 37;
	// bl 0x8259cc28
	ctx.lr = 0x830EC300;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8259cc28
	ctx.lr = 0x830EC310;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EC314;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec324
	if (cr6.eq) goto loc_830EC324;
	// bl 0x83574c00
	ctx.lr = 0x830EC320;
	sub_83574C00(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_830EC324:
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r25,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r25.u16);
	// addi r9,r11,-17344
	ctx.r9.s64 = ctx.r11.s64 + -17344;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bl 0x830f75f8
	ctx.lr = 0x830EC348;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec354
	if (cr6.eq) goto loc_830EC354;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_830EC354:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ebc50
	ctx.lr = 0x830EC35C;
	sub_830EBC50(ctx, base);
	// subfic r11,r23,0
	xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EC36C"))) PPC_WEAK_FUNC(sub_830EC36C);
PPC_FUNC_IMPL(__imp__sub_830EC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EC370"))) PPC_WEAK_FUNC(sub_830EC370);
PPC_FUNC_IMPL(__imp__sub_830EC370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830EC378;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31754
	ctx.r27.s64 = -2081030144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lbz r9,25329(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r28,r11,25640
	ctx.r28.s64 = ctx.r11.s64 + 25640;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r31.u8);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// sth r30,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r30.u16);
	// sth r31,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r31.u16);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x830ec404
	if (cr6.eq) goto loc_830EC404;
	// li r5,49
	ctx.r5.s64 = 49;
	// addi r4,r28,-344
	ctx.r4.s64 = ctx.r28.s64 + -344;
	// bl 0x8259cc28
	ctx.lr = 0x830EC3F0;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-292
	ctx.r4.s64 = ctx.r28.s64 + -292;
	// li r5,49
	ctx.r5.s64 = 49;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8259cc28
	ctx.lr = 0x830EC400;
	sub_8259CC28(ctx, base);
	// b 0x830ec434
	goto loc_830EC434;
loc_830EC404:
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r28,-240
	ctx.r4.s64 = ctx.r28.s64 + -240;
	// bl 0x8259cc28
	ctx.lr = 0x830EC410;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-188
	ctx.r4.s64 = ctx.r28.s64 + -188;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8259cc28
	ctx.lr = 0x830EC420;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EC424;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec434
	if (cr6.eq) goto loc_830EC434;
	// bl 0x83574c00
	ctx.lr = 0x830EC430;
	sub_83574C00(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_830EC434:
	// lis r11,2055
	ctx.r11.s64 = 134676480;
	// li r10,5
	ctx.r10.s64 = 5;
	// ori r9,r11,65405
	ctx.r9.u64 = ctx.r11.u64 | 65405;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rldicr r24,r9,4,59
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// sth r8,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r8.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// bl 0x830f75f8
	ctx.lr = 0x830EC45C;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec468
	if (cr6.eq) goto loc_830EC468;
	// li r25,1
	ctx.r25.s64 = 1;
loc_830EC468:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ebc50
	ctx.lr = 0x830EC470;
	sub_830EBC50(ctx, base);
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// std r31,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r31.u64);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r30.u16);
	// sth r31,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r31.u16);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// beq cr6,0x830ec4d4
	if (cr6.eq) goto loc_830EC4D4;
	// addi r4,r28,-144
	ctx.r4.s64 = ctx.r28.s64 + -144;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x8259cc28
	ctx.lr = 0x830EC4C0;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-96
	ctx.r4.s64 = ctx.r28.s64 + -96;
	// li r5,45
	ctx.r5.s64 = 45;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x8259cc28
	ctx.lr = 0x830EC4D0;
	sub_8259CC28(ctx, base);
	// b 0x830ec504
	goto loc_830EC504;
loc_830EC4D4:
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x8259cc28
	ctx.lr = 0x830EC4E0;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x8259cc28
	ctx.lr = 0x830EC4F0;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EC4F4;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ec504
	if (cr6.eq) goto loc_830EC504;
	// bl 0x83574c00
	ctx.lr = 0x830EC500;
	sub_83574C00(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
loc_830EC504:
	// li r11,4
	ctx.r11.s64 = 4;
	// std r24,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r24.u64);
	// li r10,-4
	ctx.r10.s64 = -4;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830EC520;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec52c
	if (cr6.eq) goto loc_830EC52C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_830EC52C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x830ebc50
	ctx.lr = 0x830EC534;
	sub_830EBC50(ctx, base);
	// subfic r11,r25,0
	xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EC544"))) PPC_WEAK_FUNC(sub_830EC544);
PPC_FUNC_IMPL(__imp__sub_830EC544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EC548"))) PPC_WEAK_FUNC(sub_830EC548);
PPC_FUNC_IMPL(__imp__sub_830EC548) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lbz r7,25329(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25329);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r31.u8);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// sth r8,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r8.u16);
	// sth r31,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r31.u16);
	// beq cr6,0x830ec5c4
	if (cr6.eq) goto loc_830EC5C4;
	// addi r11,r11,25728
	ctx.r11.s64 = ctx.r11.s64 + 25728;
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// b 0x830ec5cc
	goto loc_830EC5CC;
loc_830EC5C4:
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r11,25728
	ctx.r4.s64 = ctx.r11.s64 + 25728;
loc_830EC5CC:
	// bl 0x8259cc28
	ctx.lr = 0x830EC5D0;
	sub_8259CC28(ctx, base);
	// lis r11,2055
	ctx.r11.s64 = 134676480;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ori r9,r11,65405
	ctx.r9.u64 = ctx.r11.u64 | 65405;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rldicr r7,r9,4,59
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// sth r8,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r8.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x830f75f8
	ctx.lr = 0x830EC5FC;
	sub_830F75F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ebc50
	ctx.lr = 0x830EC608;
	sub_830EBC50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EC620"))) PPC_WEAK_FUNC(sub_830EC620);
PPC_FUNC_IMPL(__imp__sub_830EC620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830EC628;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31754
	ctx.r27.s64 = -2081030144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lbz r9,25329(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r28,r11,26572
	ctx.r28.s64 = ctx.r11.s64 + 26572;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r31.u8);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// sth r30,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r30.u16);
	// sth r31,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r31.u16);
	// beq cr6,0x830ec6b8
	if (cr6.eq) goto loc_830EC6B8;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r28,-324
	ctx.r4.s64 = ctx.r28.s64 + -324;
	// bl 0x8259cc28
	ctx.lr = 0x830EC6A0;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-280
	ctx.r4.s64 = ctx.r28.s64 + -280;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8259cc28
	ctx.lr = 0x830EC6B0;
	sub_8259CC28(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// b 0x830ec6e0
	goto loc_830EC6E0;
loc_830EC6B8:
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r28,-236
	ctx.r4.s64 = ctx.r28.s64 + -236;
	// bl 0x8259cc28
	ctx.lr = 0x830EC6C4;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-188
	ctx.r4.s64 = ctx.r28.s64 + -188;
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8259cc28
	ctx.lr = 0x830EC6D4;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EC6D8;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830EC6DC;
	sub_83574C00(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_830EC6E0:
	// lis r11,2055
	ctx.r11.s64 = 134676480;
	// li r9,7
	ctx.r9.s64 = 7;
	// ori r10,r11,65405
	ctx.r10.u64 = ctx.r11.u64 | 65405;
	// li r23,2
	ctx.r23.s64 = 2;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// rldicr r24,r10,4,59
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// sth r23,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r23.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// bl 0x830f75f8
	ctx.lr = 0x830EC708;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec714
	if (cr6.eq) goto loc_830EC714;
	// li r25,1
	ctx.r25.s64 = 1;
loc_830EC714:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ebc50
	ctx.lr = 0x830EC71C;
	sub_830EBC50(ctx, base);
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// std r31,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r31.u64);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r30.u16);
	// sth r31,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r31.u16);
	// beq cr6,0x830ec784
	if (cr6.eq) goto loc_830EC784;
	// addi r4,r28,-148
	ctx.r4.s64 = ctx.r28.s64 + -148;
	// li r5,46
	ctx.r5.s64 = 46;
	// bl 0x8259cc28
	ctx.lr = 0x830EC76C;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-100
	ctx.r4.s64 = ctx.r28.s64 + -100;
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x8259cc28
	ctx.lr = 0x830EC77C;
	sub_8259CC28(ctx, base);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// b 0x830ec7ac
	goto loc_830EC7AC;
loc_830EC784:
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// li r5,51
	ctx.r5.s64 = 51;
	// bl 0x8259cc28
	ctx.lr = 0x830EC790;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x8259cc28
	ctx.lr = 0x830EC7A0;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830EC7A4;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830EC7A8;
	sub_83574C00(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
loc_830EC7AC:
	// li r11,8
	ctx.r11.s64 = 8;
	// std r24,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r24.u64);
	// sth r23,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r23.u16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x830f75f8
	ctx.lr = 0x830EC7C4;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec7d0
	if (cr6.eq) goto loc_830EC7D0;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_830EC7D0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x830ebc50
	ctx.lr = 0x830EC7D8;
	sub_830EBC50(ctx, base);
	// bl 0x830f5f80
	ctx.lr = 0x830EC7DC;
	sub_830F5F80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec7e8
	if (cr6.eq) goto loc_830EC7E8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_830EC7E8:
	// bl 0x830f7b80
	ctx.lr = 0x830EC7EC;
	sub_830F7B80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ec7f8
	if (cr6.eq) goto loc_830EC7F8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_830EC7F8:
	// subfic r11,r25,0
	xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EC808"))) PPC_WEAK_FUNC(sub_830EC808);
PPC_FUNC_IMPL(__imp__sub_830EC808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830EC810;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31754
	ctx.r27.s64 = -2081030144;
	// lbz r11,25329(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r30,r11,26836
	ctx.r30.s64 = ctx.r11.s64 + 26836;
	// addi r29,r30,-216
	ctx.r29.s64 = ctx.r30.s64 + -216;
	// bne cr6,0x830ec834
	if (!cr6.eq) goto loc_830EC834;
	// addi r29,r30,-180
	ctx.r29.s64 = ctx.r30.s64 + -180;
loc_830EC834:
	// bl 0x830f1c38
	ctx.lr = 0x830EC838;
	sub_830F1C38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ec964
	if (cr6.eq) goto loc_830EC964;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// sth r9,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r9.u16);
	// sth r31,210(r1)
	PPC_STORE_U16(ctx.r1.u32 + 210, ctx.r31.u16);
loc_830EC88C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ec88c
	if (!cr6.eq) goto loc_830EC88C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830EC8B4;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x830EC8C4;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-128
	ctx.r4.s64 = ctx.r30.s64 + -128;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x830EC8D4;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8259cc28
	ctx.lr = 0x830EC8E4;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x825a1eb8
	ctx.lr = 0x830EC8F4;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x825a1eb8
	ctx.lr = 0x830EC904;
	sub_825A1EB8(ctx, base);
	// lbz r10,25329(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830ec918
	if (cr6.eq) goto loc_830EC918;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// b 0x830ec924
	goto loc_830EC924;
loc_830EC918:
	// bl 0x831099d8
	ctx.lr = 0x830EC91C;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830EC920;
	sub_83574C00(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
loc_830EC924:
	// lis r11,2055
	ctx.r11.s64 = 134676480;
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r9,r11,65405
	ctx.r9.u64 = ctx.r11.u64 | 65405;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// rldicr r7,r9,4,59
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// sth r8,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r8.u16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// bl 0x830f75f8
	ctx.lr = 0x830EC94C;
	sub_830F75F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830ebc50
	ctx.lr = 0x830EC958;
	sub_830EBC50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830EC964:
	// lis r11,17742
	ctx.r11.s64 = 1162739712;
	// lis r10,11565
	ctx.r10.s64 = 757923840;
	// ori r9,r11,18176
	ctx.r9.u64 = ctx.r11.u64 | 18176;
	// ori r8,r10,11520
	ctx.r8.u64 = ctx.r10.u64 | 11520;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x830f17f0
	ctx.lr = 0x830EC984;
	sub_830F17F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830f1d40
	ctx.lr = 0x830EC990;
	sub_830F1D40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830EC99C;
	sub_837B0C10(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830EC9A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830ec9a4
	if (!cr6.eq) goto loc_830EC9A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EC9CC;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x830EC9DC;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ec9f0
	if (!cr6.lt) goto loc_830EC9F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_830EC9F0:
	// bl 0x83104018
	ctx.lr = 0x830EC9F4;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eca04
	if (!cr6.eq) goto loc_830ECA04;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
loc_830ECA04:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830eca24
	if (cr6.lt) goto loc_830ECA24;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830ECA24;
	sub_825952B8(ctx, base);
loc_830ECA24:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// std r31,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r31.u64);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// sth r9,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r9.u16);
	// sth r31,306(r1)
	PPC_STORE_U16(ctx.r1.u32 + 306, ctx.r31.u16);
loc_830ECA78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830eca78
	if (!cr6.eq) goto loc_830ECA78;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830ECAA0;
	sub_8259CC28(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830ECAA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ecaa4
	if (!cr6.eq) goto loc_830ECAA4;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ECACC;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECADC;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x8259cc28
	ctx.lr = 0x830ECAEC;
	sub_8259CC28(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830ECAF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ecaf0
	if (!cr6.eq) goto loc_830ECAF0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ECB18;
	sub_825A1EB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECB28;
	sub_825A1EB8(ctx, base);
	// lbz r10,25329(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 25329);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830ecb3c
	if (cr6.eq) goto loc_830ECB3C;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// b 0x830ecb48
	goto loc_830ECB48;
loc_830ECB3C:
	// bl 0x831099d8
	ctx.lr = 0x830ECB40;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830ECB44;
	sub_83574C00(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
loc_830ECB48:
	// lis r11,2055
	ctx.r11.s64 = 134676480;
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r9,r11,65405
	ctx.r9.u64 = ctx.r11.u64 | 65405;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// rldicr r7,r9,4,59
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// sth r8,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r8.u16);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// bl 0x830f75f8
	ctx.lr = 0x830ECB70;
	sub_830F75F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x830ebc50
	ctx.lr = 0x830ECB7C;
	sub_830EBC50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ECB88"))) PPC_WEAK_FUNC(sub_830ECB88);
PPC_FUNC_IMPL(__imp__sub_830ECB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830ECB90;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// lbz r10,25329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25329);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r29,r11,26960
	ctx.r29.s64 = ctx.r11.s64 + 26960;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r29,-116
	ctx.r30.s64 = ctx.r29.s64 + -116;
	// bne cr6,0x830ecbbc
	if (!cr6.eq) goto loc_830ECBBC;
	// addi r30,r29,-80
	ctx.r30.s64 = ctx.r29.s64 + -80;
loc_830ECBBC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// std r31,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r31.u64);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stb r31,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r31.u8);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// sth r26,320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 320, ctx.r26.u16);
	// sth r31,322(r1)
	PPC_STORE_U16(ctx.r1.u32 + 322, ctx.r31.u16);
loc_830ECC04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ecc04
	if (!cr6.eq) goto loc_830ECC04;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830ECC2C;
	sub_8259CC28(ctx, base);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECC3C;
	sub_825A1EB8(ctx, base);
	// lis r10,2055
	ctx.r10.s64 = 134676480;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// ori r8,r10,65405
	ctx.r8.u64 = ctx.r10.u64 | 65405;
	// ori r25,r9,65528
	ctx.r25.u64 = ctx.r9.u64 | 65528;
	// rldicr r24,r8,4,59
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// li r7,11
	ctx.r7.s64 = 11;
	// sth r25,320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 320, ctx.r25.u16);
	// std r24,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r24.u64);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// bl 0x830f75f8
	ctx.lr = 0x830ECC6C;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ecc78
	if (cr6.eq) goto loc_830ECC78;
	// li r22,1
	ctx.r22.s64 = 1;
loc_830ECC78:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x830ebc50
	ctx.lr = 0x830ECC80;
	sub_830EBC50(ctx, base);
	// lis r11,17742
	ctx.r11.s64 = 1162739712;
	// lis r10,11565
	ctx.r10.s64 = 757923840;
	// ori r9,r11,18176
	ctx.r9.u64 = ctx.r11.u64 | 18176;
	// ori r8,r10,11520
	ctx.r8.u64 = ctx.r10.u64 | 11520;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x830f18a8
	ctx.lr = 0x830ECCA0;
	sub_830F18A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830f1d40
	ctx.lr = 0x830ECCAC;
	sub_830F1D40(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_830ECCBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830eccbc
	if (!cr6.eq) goto loc_830ECCBC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830ECCE4;
	sub_8259CC28(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECCF4;
	sub_825A1EB8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830ECCFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830eccfc
	if (!cr6.eq) goto loc_830ECCFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ECD24;
	sub_825A1EB8(ctx, base);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECD34;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ecd48
	if (!cr6.lt) goto loc_830ECD48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_830ECD48:
	// bl 0x83104018
	ctx.lr = 0x830ECD4C;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ecd5c
	if (!cr6.eq) goto loc_830ECD5C;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
loc_830ECD5C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ecd7c
	if (cr6.lt) goto loc_830ECD7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830ECD7C;
	sub_825952B8(ctx, base);
loc_830ECD7C:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// sth r26,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r26.u16);
	// sth r31,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r31.u16);
loc_830ECDC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ecdc0
	if (!cr6.eq) goto loc_830ECDC0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830ECDE8;
	sub_8259CC28(ctx, base);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECDF8;
	sub_825A1EB8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830ECDFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ecdfc
	if (!cr6.eq) goto loc_830ECDFC;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ECE24;
	sub_825A1EB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECE34;
	sub_825A1EB8(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r24,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r24.u64);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// sth r25,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r25.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830ECE50;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ece5c
	if (cr6.eq) goto loc_830ECE5C;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_830ECE5C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x830ebc50
	ctx.lr = 0x830ECE64;
	sub_830EBC50(ctx, base);
	// subfic r11,r22,0
	xer.ca = ctx.r22.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r22.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ECE74"))) PPC_WEAK_FUNC(sub_830ECE74);
PPC_FUNC_IMPL(__imp__sub_830ECE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ECE78"))) PPC_WEAK_FUNC(sub_830ECE78);
PPC_FUNC_IMPL(__imp__sub_830ECE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830ECE80;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,11565
	ctx.r11.s64 = 757923840;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,11520
	ctx.r10.u64 = ctx.r11.u64 | 11520;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// bl 0x830f1c50
	ctx.lr = 0x830ECEA4;
	sub_830F1C50(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830ed0c0
	if (!cr6.eq) goto loc_830ED0C0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// li r9,575
	ctx.r9.s64 = 575;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r25,7
	ctx.r25.s64 = 7;
	// li r28,15
	ctx.r28.s64 = 15;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// rldicr r26,r9,23,40
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u64, 23) & 0xFFFFFFFFFF800000;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r30,r11,27172
	ctx.r30.s64 = ctx.r11.s64 + 27172;
loc_830ECEE4:
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// sth r27,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r27.u16);
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// bl 0x8259cc28
	ctx.lr = 0x830ECF28;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECF38;
	sub_825A1EB8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ECF40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ecf40
	if (!cr6.eq) goto loc_830ECF40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ECF64;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECF74;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ecf88
	if (!cr6.lt) goto loc_830ECF88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830ECF88:
	// bl 0x83104018
	ctx.lr = 0x830ECF8C;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ed05c
	if (cr6.eq) goto loc_830ED05C;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cc28
	ctx.lr = 0x830ECFA8;
	sub_8259CC28(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830ECFB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830ecfb0
	if (!cr6.eq) goto loc_830ECFB0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ECFD8;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830ECFE8;
	sub_825A1EB8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ECFF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ecff0
	if (!cr6.eq) goto loc_830ECFF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED014;
	sub_825A1EB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED024;
	sub_825A1EB8(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830ED028;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830ED02C;
	sub_83574C00(ctx, base);
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// sth r24,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r24.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// sth r9,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r9.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830ED050;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ed05c
	if (cr6.eq) goto loc_830ED05C;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_830ED05C:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ed078
	if (cr6.lt) goto loc_830ED078;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x825952b8
	ctx.lr = 0x830ED078;
	sub_825952B8(ctx, base);
loc_830ED078:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// blt cr6,0x830ed0a0
	if (cr6.lt) goto loc_830ED0A0;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x830ED0A0;
	sub_825952B8(ctx, base);
loc_830ED0A0:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne 0x830ecee4
	if (!cr0.eq) goto loc_830ECEE4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x830ed0cc
	if (cr6.eq) goto loc_830ED0CC;
loc_830ED0C0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830ED0CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ED0D8"))) PPC_WEAK_FUNC(sub_830ED0D8);
PPC_FUNC_IMPL(__imp__sub_830ED0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x830ED0E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,11
	ctx.r8.s64 = 11;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r25,15
	ctx.r25.s64 = 15;
	// ori r23,r9,65535
	ctx.r23.u64 = ctx.r9.u64 | 65535;
	// rldicr r22,r8,29,34
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u64, 29) & 0xFFFFFFFFE0000000;
	// ori r20,r7,65528
	ctx.r20.u64 = ctx.r7.u64 | 65528;
	// li r19,2
	ctx.r19.s64 = 2;
	// lis r24,-31754
	ctx.r24.s64 = -2081030144;
	// addi r27,r11,24601
	ctx.r27.s64 = ctx.r11.s64 + 24601;
	// addi r26,r10,-28412
	ctx.r26.s64 = ctx.r10.s64 + -28412;
loc_830ED128:
	// lbz r11,25329(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 25329);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// sth r23,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r23.u16);
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// beq cr6,0x830ed178
	if (cr6.eq) goto loc_830ED178;
	// addi r4,r27,2591
	ctx.r4.s64 = ctx.r27.s64 + 2591;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x830ed180
	goto loc_830ED180;
loc_830ED178:
	// addi r4,r27,2627
	ctx.r4.s64 = ctx.r27.s64 + 2627;
	// li r5,30
	ctx.r5.s64 = 30;
loc_830ED180:
	// bl 0x8259cc28
	ctx.lr = 0x830ED184;
	sub_8259CC28(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ED19C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ed19c
	if (!cr6.eq) goto loc_830ED19C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED1C0;
	sub_825A1EB8(ctx, base);
	// addi r4,r27,2659
	ctx.r4.s64 = ctx.r27.s64 + 2659;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED1D0;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ed1e4
	if (!cr6.lt) goto loc_830ED1E4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830ED1E4:
	// bl 0x83104018
	ctx.lr = 0x830ED1E8;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ed2e8
	if (cr6.eq) goto loc_830ED2E8;
	// lbz r11,25329(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 25329);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ed218
	if (cr6.eq) goto loc_830ED218;
	// addi r4,r27,2667
	ctx.r4.s64 = ctx.r27.s64 + 2667;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x8259cc28
	ctx.lr = 0x830ED210;
	sub_8259CC28(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// b 0x830ed230
	goto loc_830ED230;
loc_830ED218:
	// addi r4,r27,2703
	ctx.r4.s64 = ctx.r27.s64 + 2703;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x8259cc28
	ctx.lr = 0x830ED224;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830ED228;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830ED22C;
	sub_83574C00(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_830ED230:
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ED238:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ed238
	if (!cr6.eq) goto loc_830ED238;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED25C;
	sub_825A1EB8(ctx, base);
	// addi r4,r27,2727
	ctx.r4.s64 = ctx.r27.s64 + 2727;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED26C;
	sub_825A1EB8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ed280
	if (!cr6.lt) goto loc_830ED280;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
loc_830ED280:
	// bl 0x83104018
	ctx.lr = 0x830ED284;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ed2a4
	if (!cr6.eq) goto loc_830ED2A4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cc28
	ctx.lr = 0x830ED2A0;
	sub_8259CC28(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
loc_830ED2A4:
	// lwzx r11,r29,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x830ed2c4
	if (!cr6.eq) goto loc_830ED2C4;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r10,r11,-17336
	ctx.r10.s64 = ctx.r11.s64 + -17336;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
loc_830ED2C4:
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// sth r20,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r20.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// sth r10,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r10.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830ED2DC;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ed2e8
	if (cr6.eq) goto loc_830ED2E8;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_830ED2E8:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ed304
	if (cr6.lt) goto loc_830ED304;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x825952b8
	ctx.lr = 0x830ED304;
	sub_825952B8(ctx, base);
loc_830ED304:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// blt cr6,0x830ed32c
	if (cr6.lt) goto loc_830ED32C;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x830ED32C;
	sub_825952B8(ctx, base);
loc_830ED32C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x830ed128
	if (cr6.lt) goto loc_830ED128;
	// subfic r11,r18,0
	xer.ca = ctx.r18.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r18.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ED354"))) PPC_WEAK_FUNC(sub_830ED354);
PPC_FUNC_IMPL(__imp__sub_830ED354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ED358"))) PPC_WEAK_FUNC(sub_830ED358);
PPC_FUNC_IMPL(__imp__sub_830ED358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830ED360;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31754
	ctx.r29.s64 = -2081030144;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lbz r8,25329(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 25329);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r30,r11,24602
	ctx.r30.s64 = ctx.r11.s64 + 24602;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// sth r9,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r9.u16);
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// beq cr6,0x830ed3d4
	if (cr6.eq) goto loc_830ED3D4;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,2746
	ctx.r4.s64 = ctx.r30.s64 + 2746;
	// b 0x830ed3dc
	goto loc_830ED3DC;
loc_830ED3D4:
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r30,2782
	ctx.r4.s64 = ctx.r30.s64 + 2782;
loc_830ED3DC:
	// bl 0x8259cc28
	ctx.lr = 0x830ED3E0;
	sub_8259CC28(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r28,r11,-28388
	ctx.r28.s64 = ctx.r11.s64 + -28388;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ED3F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ed3f0
	if (!cr6.eq) goto loc_830ED3F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED414;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,2814
	ctx.r4.s64 = ctx.r30.s64 + 2814;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED424;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ed438
	if (!cr6.lt) goto loc_830ED438;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830ED438:
	// bl 0x83104018
	ctx.lr = 0x830ED43C;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ed534
	if (cr6.eq) goto loc_830ED534;
	// lbz r11,25329(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 25329);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ed46c
	if (cr6.eq) goto loc_830ED46C;
	// addi r4,r30,2822
	ctx.r4.s64 = ctx.r30.s64 + 2822;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x8259cc28
	ctx.lr = 0x830ED464;
	sub_8259CC28(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// b 0x830ed484
	goto loc_830ED484;
loc_830ED46C:
	// addi r4,r30,2858
	ctx.r4.s64 = ctx.r30.s64 + 2858;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x8259cc28
	ctx.lr = 0x830ED478;
	sub_8259CC28(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830ED47C;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830ED480;
	sub_83574C00(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_830ED484:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ED48C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ed48c
	if (!cr6.eq) goto loc_830ED48C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED4B0;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,2886
	ctx.r4.s64 = ctx.r30.s64 + 2886;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED4C0;
	sub_825A1EB8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ed4d4
	if (!cr6.lt) goto loc_830ED4D4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
loc_830ED4D4:
	// bl 0x83104018
	ctx.lr = 0x830ED4D8;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ed4f8
	if (!cr6.eq) goto loc_830ED4F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cc28
	ctx.lr = 0x830ED4F4;
	sub_8259CC28(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
loc_830ED4F8:
	// lis r9,2055
	ctx.r9.s64 = 134676480;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r8,-7
	ctx.r8.s64 = -7;
	// ori r7,r9,65405
	ctx.r7.u64 = ctx.r9.u64 | 65405;
	// sth r8,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r8.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rldicr r6,r7,4,59
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// sth r10,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r10.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830ED528;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ed534
	if (cr6.eq) goto loc_830ED534;
	// li r26,1
	ctx.r26.s64 = 1;
loc_830ED534:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ed554
	if (cr6.lt) goto loc_830ED554;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x825952b8
	ctx.lr = 0x830ED554;
	sub_825952B8(ctx, base);
loc_830ED554:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// blt cr6,0x830ed57c
	if (cr6.lt) goto loc_830ED57C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x830ED57C;
	sub_825952B8(ctx, base);
loc_830ED57C:
	// subfic r11,r26,0
	xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ED58C"))) PPC_WEAK_FUNC(sub_830ED58C);
PPC_FUNC_IMPL(__imp__sub_830ED58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ED590"))) PPC_WEAK_FUNC(sub_830ED590);
PPC_FUNC_IMPL(__imp__sub_830ED590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830ED598;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,11565
	ctx.r11.s64 = 757923840;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,11520
	ctx.r10.u64 = ctx.r11.u64 | 11520;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x830f1c50
	ctx.lr = 0x830ED5BC;
	sub_830F1C50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830ed7b4
	if (!cr6.eq) goto loc_830ED7B4;
	// li r28,15
	ctx.r28.s64 = 15;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r30,r11,27556
	ctx.r30.s64 = ctx.r11.s64 + 27556;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// sth r10,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r10.u16);
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// bl 0x8259cc28
	ctx.lr = 0x830ED61C;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED62C;
	sub_825A1EB8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r29,r11,-28376
	ctx.r29.s64 = ctx.r11.s64 + -28376;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ED63C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ed63c
	if (!cr6.eq) goto loc_830ED63C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED660;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED670;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830ed684
	if (!cr6.lt) goto loc_830ED684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830ED684:
	// bl 0x83104018
	ctx.lr = 0x830ED688;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ed764
	if (cr6.eq) goto loc_830ED764;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cc28
	ctx.lr = 0x830ED6A4;
	sub_8259CC28(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830ED6AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830ed6ac
	if (!cr6.eq) goto loc_830ED6AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED6D4;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED6E4;
	sub_825A1EB8(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ED6EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ed6ec
	if (!cr6.eq) goto loc_830ED6EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830ED710;
	sub_825A1EB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED720;
	sub_825A1EB8(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x830ED724;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830ED728;
	sub_83574C00(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// rldicr r7,r9,29,34
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 29) & 0xFFFFFFFFE0000000;
	// sth r8,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r8.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r10,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r10.u16);
	// bl 0x830f75f8
	ctx.lr = 0x830ED758;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ed764
	if (cr6.eq) goto loc_830ED764;
	// li r27,1
	ctx.r27.s64 = 1;
loc_830ED764:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ed784
	if (cr6.lt) goto loc_830ED784;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x825952b8
	ctx.lr = 0x830ED784;
	sub_825952B8(ctx, base);
loc_830ED784:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// blt cr6,0x830ed7ac
	if (cr6.lt) goto loc_830ED7AC;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x830ED7AC;
	sub_825952B8(ctx, base);
loc_830ED7AC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830ed7c0
	if (cr6.eq) goto loc_830ED7C0;
loc_830ED7B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830ED7C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ED7CC"))) PPC_WEAK_FUNC(sub_830ED7CC);
PPC_FUNC_IMPL(__imp__sub_830ED7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ED7D0"))) PPC_WEAK_FUNC(sub_830ED7D0);
PPC_FUNC_IMPL(__imp__sub_830ED7D0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830f1ba8
	ctx.lr = 0x830ED7E8;
	sub_830F1BA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ed824
	if (!cr6.eq) goto loc_830ED824;
	// bl 0x830f1bc0
	ctx.lr = 0x830ED7F8;
	sub_830F1BC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ed824
	if (!cr6.eq) goto loc_830ED824;
	// bl 0x830f1bd8
	ctx.lr = 0x830ED808;
	sub_830F1BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ed824
	if (!cr6.eq) goto loc_830ED824;
	// bl 0x830f1c08
	ctx.lr = 0x830ED818;
	sub_830F1C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ed83c
	if (cr6.eq) goto loc_830ED83C;
loc_830ED824:
	// bl 0x830f1c20
	ctx.lr = 0x830ED828;
	sub_830F1C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ed83c
	if (!cr6.eq) goto loc_830ED83C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830ed928
	goto loc_830ED928;
loc_830ED83C:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lbz r10,25329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25329);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r30,r11,27052
	ctx.r30.s64 = ctx.r11.s64 + 27052;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// bne cr6,0x830ed85c
	if (!cr6.eq) goto loc_830ED85C;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
loc_830ED85C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830ED864;
	sub_837B0C10(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// sth r9,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r9.u16);
	// sth r31,210(r1)
	PPC_STORE_U16(ctx.r1.u32 + 210, ctx.r31.u16);
	// bl 0x8259cb28
	ctx.lr = 0x830ED8BC;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x830ED8CC;
	sub_825A1EB8(ctx, base);
	// lis r8,2055
	ctx.r8.s64 = 134676480;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// ori r6,r8,65405
	ctx.r6.u64 = ctx.r8.u64 | 65405;
	// li r5,-8
	ctx.r5.s64 = -8;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// rldicr r4,r6,4,59
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// sth r5,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r5.u16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// bl 0x830f75f8
	ctx.lr = 0x830ED8F8;
	sub_830F75F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830ebc50
	ctx.lr = 0x830ED904;
	sub_830EBC50(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x830ed924
	if (cr6.lt) goto loc_830ED924;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830ED924;
	sub_825952B8(ctx, base);
loc_830ED924:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830ED928:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_830ED940"))) PPC_WEAK_FUNC(sub_830ED940);
PPC_FUNC_IMPL(__imp__sub_830ED940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x830ED948;
	__savegprlr_17(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r27,r11,-28352
	ctx.r27.s64 = ctx.r11.s64 + -28352;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// addi r28,r27,-8
	ctx.r28.s64 = ctx.r27.s64 + -8;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// li r30,10
	ctx.r30.s64 = 10;
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// stw r26,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r26.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stb r31,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
	// stw r26,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r26.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// stb r31,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, ctx.r31.u8);
	// stw r26,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r26.u32);
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r31.u32);
	// stb r31,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r31.u8);
	// stw r26,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r26.u32);
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// stb r31,420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 420, ctx.r31.u8);
	// stw r26,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r26.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// stw r26,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r26.u32);
	// stw r31,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r31.u32);
	// stb r31,476(r1)
	PPC_STORE_U8(ctx.r1.u32 + 476, ctx.r31.u8);
loc_830ED9E4:
	// lwzu r4,12(r28)
	ea = 12 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830ED9EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ed9ec
	if (!cr6.eq) goto loc_830ED9EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830EDA10;
	sub_8259CC28(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x830ed9e4
	if (!cr0.eq) goto loc_830ED9E4;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x830f18d0
	ctx.lr = 0x830EDA2C;
	sub_830F18D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830f8308
	ctx.lr = 0x830EDA34;
	sub_830F8308(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r20,r11,24551
	ctx.r20.s64 = ctx.r11.s64 + 24551;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r20,1357
	ctx.r3.s64 = ctx.r20.s64 + 1357;
	// bl 0x83523fd8
	ctx.lr = 0x830EDA4C;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830edae4
	if (cr6.eq) goto loc_830EDAE4;
	// addi r3,r20,1385
	ctx.r3.s64 = ctx.r20.s64 + 1385;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x830EDA60;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830edab8
	if (cr6.eq) goto loc_830EDAB8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x830eda9c
	if (cr6.eq) goto loc_830EDA9C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x830EDA84;
	sub_83915A50(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x830EDA98;
	sub_838ADAB0(ctx, base);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_830EDA9C:
	// addi r3,r20,1413
	ctx.r3.s64 = ctx.r20.s64 + 1413;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x830EDAA8;
	sub_83523FD8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x830f8308
	ctx.lr = 0x830EDAB4;
	sub_830F8308(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830EDAB8:
	// addi r3,r20,1441
	ctx.r3.s64 = ctx.r20.s64 + 1441;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x830EDAC4;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830edae4
	if (cr6.eq) goto loc_830EDAE4;
	// addi r3,r20,1469
	ctx.r3.s64 = ctx.r20.s64 + 1469;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x830EDAD8;
	sub_83523FD8(ctx, base);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bl 0x830f18e0
	ctx.lr = 0x830EDAE0;
	sub_830F18E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830EDAE4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x830edb7c
	if (!cr6.eq) goto loc_830EDB7C;
	// bl 0x830f1908
	ctx.lr = 0x830EDAF0;
	sub_830F1908(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830edb7c
	if (cr6.eq) goto loc_830EDB7C;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x830edb7c
	if (cr6.eq) goto loc_830EDB7C;
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
loc_830EDB0C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830edb68
	if (cr6.eq) goto loc_830EDB68;
	// addi r4,r20,1497
	ctx.r4.s64 = ctx.r20.s64 + 1497;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x830EDB28;
	sub_825A1EB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830edb3c
	if (cr6.lt) goto loc_830EDB3C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x830edb40
	goto loc_830EDB40;
loc_830EDB3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830EDB40:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EDB44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edb44
	if (!cr6.eq) goto loc_830EDB44;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EDB68;
	sub_825A1EB8(ctx, base);
loc_830EDB68:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x830edb0c
	if (!cr6.eq) goto loc_830EDB0C;
loc_830EDB7C:
	// lis r19,-31754
	ctx.r19.s64 = -2081030144;
	// addi r29,r20,1501
	ctx.r29.s64 = ctx.r20.s64 + 1501;
	// lbz r11,25329(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 25329);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830edb94
	if (!cr6.eq) goto loc_830EDB94;
	// addi r29,r20,1545
	ctx.r29.s64 = ctx.r20.s64 + 1545;
loc_830EDB94:
	// lis r10,2055
	ctx.r10.s64 = 134676480;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ori r8,r10,65405
	ctx.r8.u64 = ctx.r10.u64 | 65405;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r30,r1,224
	ctx.r30.s64 = ctx.r1.s64 + 224;
	// li r25,10
	ctx.r25.s64 = 10;
	// li r23,-1
	ctx.r23.s64 = -1;
	// ori r24,r9,65535
	ctx.r24.u64 = ctx.r9.u64 | 65535;
	// rldicr r21,r8,4,59
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// ori r22,r7,65528
	ctx.r22.u64 = ctx.r7.u64 | 65528;
	// li r18,2
	ctx.r18.s64 = 2;
	// addi r28,r11,-28364
	ctx.r28.s64 = ctx.r11.s64 + -28364;
loc_830EDBC8:
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// sth r24,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r24.u16);
	// sth r31,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r31.u16);
loc_830EDC00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edc00
	if (!cr6.eq) goto loc_830EDC00;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830EDC28;
	sub_8259CC28(ctx, base);
	// bl 0x830f1908
	ctx.lr = 0x830EDC2C;
	sub_830F1908(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EDC38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edc38
	if (!cr6.eq) goto loc_830EDC38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EDC5C;
	sub_825A1EB8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830edc70
	if (cr6.lt) goto loc_830EDC70;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x830edc74
	goto loc_830EDC74;
loc_830EDC70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830EDC74:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EDC78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edc78
	if (!cr6.eq) goto loc_830EDC78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EDC9C;
	sub_825A1EB8(ctx, base);
	// addi r4,r20,1593
	ctx.r4.s64 = ctx.r20.s64 + 1593;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x830EDCAC;
	sub_825A1EB8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830edcc0
	if (!cr6.lt) goto loc_830EDCC0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_830EDCC0:
	// bl 0x83104018
	ctx.lr = 0x830EDCC4;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eddf4
	if (cr6.eq) goto loc_830EDDF4;
	// lbz r11,25329(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 25329);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830edcec
	if (cr6.eq) goto loc_830EDCEC;
	// addi r4,r20,1601
	ctx.r4.s64 = ctx.r20.s64 + 1601;
	// li r5,41
	ctx.r5.s64 = 41;
	// b 0x830edcf4
	goto loc_830EDCF4;
loc_830EDCEC:
	// addi r4,r20,1645
	ctx.r4.s64 = ctx.r20.s64 + 1645;
	// li r5,40
	ctx.r5.s64 = 40;
loc_830EDCF4:
	// bl 0x8259cc28
	ctx.lr = 0x830EDCF8;
	sub_8259CC28(ctx, base);
	// bl 0x830f1908
	ctx.lr = 0x830EDCFC;
	sub_830F1908(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EDD08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edd08
	if (!cr6.eq) goto loc_830EDD08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EDD2C;
	sub_825A1EB8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830edd40
	if (cr6.lt) goto loc_830EDD40;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x830edd44
	goto loc_830EDD44;
loc_830EDD40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830EDD44:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830EDD48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edd48
	if (!cr6.eq) goto loc_830EDD48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830EDD6C;
	sub_825A1EB8(ctx, base);
	// addi r4,r20,1689
	ctx.r4.s64 = ctx.r20.s64 + 1689;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x825a1eb8
	ctx.lr = 0x830EDD7C;
	sub_825A1EB8(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830edd90
	if (!cr6.lt) goto loc_830EDD90;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
loc_830EDD90:
	// bl 0x83104018
	ctx.lr = 0x830EDD94;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eddbc
	if (cr6.eq) goto loc_830EDDBC;
	// lbz r11,25329(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 25329);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eddcc
	if (!cr6.eq) goto loc_830EDDCC;
	// bl 0x831099d8
	ctx.lr = 0x830EDDB0;
	sub_831099D8(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x830EDDB4;
	sub_83574C00(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// b 0x830eddd0
	goto loc_830EDDD0;
loc_830EDDBC:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8259cc28
	ctx.lr = 0x830EDDCC;
	sub_8259CC28(ctx, base);
loc_830EDDCC:
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_830EDDD0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r21,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r21.u64);
	// sth r22,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r22.u16);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x830f75f8
	ctx.lr = 0x830EDDE8;
	sub_830F75F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830eddf4
	if (cr6.eq) goto loc_830EDDF4;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_830EDDF4:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ede10
	if (cr6.lt) goto loc_830EDE10;
	// stw r18,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r18.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x825952b8
	ctx.lr = 0x830EDE10;
	sub_825952B8(ctx, base);
loc_830EDE10:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// blt cr6,0x830ede38
	if (cr6.lt) goto loc_830EDE38;
	// stw r18,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r18.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x830EDE38;
	sub_825952B8(ctx, base);
loc_830EDE38:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x830edbc8
	if (!cr0.eq) goto loc_830EDBC8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subfic r11,r17,0
	xer.ca = ctx.r17.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r17.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subfe r28,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x830ede88
	if (cr6.eq) goto loc_830EDE88;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x830EDE78;
	sub_838ADAB0(ctx, base);
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x830EDE88;
	sub_825952B8(ctx, base);
loc_830EDE88:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r1,504
	ctx.r30.s64 = ctx.r1.s64 + 504;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r29,9
	ctx.r29.s64 = 9;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
loc_830EDE9C:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830edebc
	if (cr6.lt) goto loc_830EDEBC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// bl 0x825952b8
	ctx.lr = 0x830EDEBC;
	sub_825952B8(ctx, base);
loc_830EDEBC:
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x830ede9c
	if (!cr0.lt) goto loc_830EDE9C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EDEDC"))) PPC_WEAK_FUNC(sub_830EDEDC);
PPC_FUNC_IMPL(__imp__sub_830EDEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EDEE0"))) PPC_WEAK_FUNC(sub_830EDEE0);
PPC_FUNC_IMPL(__imp__sub_830EDEE0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lbz r10,25328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25328);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830edf10
	if (!cr6.eq) goto loc_830EDF10;
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
loc_830EDF10:
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x830ee02c
	if (cr6.gt) goto loc_830EE02C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830edf58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EDF58;
	// bdzf 4*cr6+eq,0x830edf88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EDF88;
	// bdzf 4*cr6+eq,0x830edf88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EDF88;
	// bdzf 4*cr6+eq,0x830edfd4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830EDFD4;
	// bne cr6,0x830ee008
	if (!cr6.eq) goto loc_830EE008;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x830f7418
	ctx.lr = 0x830EDF40;
	sub_830F7418(ctx, base);
	// bl 0x830ebcd0
	ctx.lr = 0x830EDF44;
	sub_830EBCD0(ctx, base);
	// bl 0x830ec190
	ctx.lr = 0x830EDF48;
	sub_830EC190(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EDF58:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// bl 0x830f7418
	ctx.lr = 0x830EDF64;
	sub_830F7418(ctx, base);
	// lis r3,2055
	ctx.r3.s64 = 134676480;
	// ori r3,r3,65405
	ctx.r3.u64 = ctx.r3.u64 | 65405;
	// rldicr r3,r3,4,59
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// bl 0x830f7418
	ctx.lr = 0x830EDF74;
	sub_830F7418(ctx, base);
	// bl 0x830ebf30
	ctx.lr = 0x830EDF78;
	sub_830EBF30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EDF88:
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// bl 0x830f7418
	ctx.lr = 0x830EDF94;
	sub_830F7418(ctx, base);
	// lis r3,2055
	ctx.r3.s64 = 134676480;
	// ori r3,r3,65405
	ctx.r3.u64 = ctx.r3.u64 | 65405;
	// rldicr r3,r3,4,59
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// bl 0x830f7418
	ctx.lr = 0x830EDFA4;
	sub_830F7418(ctx, base);
	// bl 0x830ec370
	ctx.lr = 0x830EDFA8;
	sub_830EC370(ctx, base);
	// bl 0x830ec548
	ctx.lr = 0x830EDFAC;
	sub_830EC548(ctx, base);
	// bl 0x830ed940
	ctx.lr = 0x830EDFB0;
	sub_830ED940(ctx, base);
	// bl 0x830ec620
	ctx.lr = 0x830EDFB4;
	sub_830EC620(ctx, base);
	// bl 0x830ec808
	ctx.lr = 0x830EDFB8;
	sub_830EC808(ctx, base);
	// bl 0x830ecb88
	ctx.lr = 0x830EDFBC;
	sub_830ECB88(ctx, base);
	// bl 0x830ed7d0
	ctx.lr = 0x830EDFC0;
	sub_830ED7D0(ctx, base);
	// bl 0x830ed358
	ctx.lr = 0x830EDFC4;
	sub_830ED358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EDFD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f3308
	ctx.lr = 0x830EDFE4;
	sub_830F3308(ctx, base);
	// li r3,575
	ctx.r3.s64 = 575;
	// rldicr r3,r3,23,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 23) & 0xFFFFFFFFFF800000;
	// bl 0x830f7418
	ctx.lr = 0x830EDFF0;
	sub_830F7418(ctx, base);
	// bl 0x830ece78
	ctx.lr = 0x830EDFF4;
	sub_830ECE78(ctx, base);
	// bl 0x830f1e68
	ctx.lr = 0x830EDFF8;
	sub_830F1E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EE008:
	// li r3,11
	ctx.r3.s64 = 11;
	// rldicr r3,r3,29,34
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 29) & 0xFFFFFFFFE0000000;
	// bl 0x830f7418
	ctx.lr = 0x830EE014;
	sub_830F7418(ctx, base);
	// bl 0x830ed0d8
	ctx.lr = 0x830EE018;
	sub_830ED0D8(ctx, base);
	// bl 0x830ed590
	ctx.lr = 0x830EE01C;
	sub_830ED590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830EE02C:
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

__attribute__((alias("__imp__sub_830EE040"))) PPC_WEAK_FUNC(sub_830EE040);
PPC_FUNC_IMPL(__imp__sub_830EE040) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lbz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ee078
	if (!cr6.eq) goto loc_830EE078;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_830EE078:
	// lis r3,2055
	ctx.r3.s64 = 134676480;
	// ori r3,r3,65405
	ctx.r3.u64 = ctx.r3.u64 | 65405;
	// rldicr r3,r3,4,59
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// bl 0x830f7418
	ctx.lr = 0x830EE088;
	sub_830F7418(ctx, base);
	// bl 0x830f60c0
	ctx.lr = 0x830EE08C;
	sub_830F60C0(ctx, base);
	// bl 0x830f7cc0
	ctx.lr = 0x830EE090;
	sub_830F7CC0(ctx, base);
	// lbz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ee0bc
	if (cr6.eq) goto loc_830EE0BC;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// bl 0x830f7418
	ctx.lr = 0x830EE0A8;
	sub_830F7418(ctx, base);
	// lis r3,2055
	ctx.r3.s64 = 134676480;
	// ori r3,r3,65405
	ctx.r3.u64 = ctx.r3.u64 | 65405;
	// rldicr r3,r3,4,59
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// bl 0x830f7418
	ctx.lr = 0x830EE0B8;
	sub_830F7418(ctx, base);
	// bl 0x830ebf30
	ctx.lr = 0x830EE0BC;
	sub_830EBF30(ctx, base);
loc_830EE0BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f0ad0
	ctx.lr = 0x830EE0CC;
	sub_830F0AD0(ctx, base);
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

__attribute__((alias("__imp__sub_830EE0E0"))) PPC_WEAK_FUNC(sub_830EE0E0);
PPC_FUNC_IMPL(__imp__sub_830EE0E0) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,9904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee118
	if (cr6.eq) goto loc_830EE118;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE118:
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

__attribute__((alias("__imp__sub_830EE130"))) PPC_WEAK_FUNC(sub_830EE130);
PPC_FUNC_IMPL(__imp__sub_830EE130) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee168
	if (cr6.eq) goto loc_830EE168;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830EE168:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830ee1a8
	if (!cr6.eq) goto loc_830EE1A8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee190
	if (cr6.eq) goto loc_830EE190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE190:
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
loc_830EE1A8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee1c0
	if (cr6.eq) goto loc_830EE1C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE1C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE1C0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830ebb60
	ctx.lr = 0x830EE1C8;
	sub_830EBB60(ctx, base);
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

__attribute__((alias("__imp__sub_830EE1DC"))) PPC_WEAK_FUNC(sub_830EE1DC);
PPC_FUNC_IMPL(__imp__sub_830EE1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE1E0"))) PPC_WEAK_FUNC(sub_830EE1E0);
PPC_FUNC_IMPL(__imp__sub_830EE1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,25340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r5,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// beqlr cr6
	if (cr6.eq) return;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// srawi r6,r7,24
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 24;
	// srawi r5,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// rlwimi r6,r5,0,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r4,r7,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r6,r4,8,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE254"))) PPC_WEAK_FUNC(sub_830EE254);
PPC_FUNC_IMPL(__imp__sub_830EE254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE258"))) PPC_WEAK_FUNC(sub_830EE258);
PPC_FUNC_IMPL(__imp__sub_830EE258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,25340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ee318
	if (cr6.eq) goto loc_830EE318;
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x830ee318
	if (!cr6.lt) goto loc_830EE318;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// srawi r7,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 24;
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r11,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// srawi r31,r8,24
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 24;
	// rlwinm r10,r6,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// srawi r9,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwinm r11,r11,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r31,r9,0,16,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF00) | (ctx.r31.u64 & 0xFFFFFFFFFFFF00FF);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// rlwimi r31,r6,8,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r8,r7,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r7.s64;
	// beq cr6,0x830ee308
	if (cr6.eq) goto loc_830EE308;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830ee304
	if (cr6.eq) goto loc_830EE304;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x830ee308
	goto loc_830EE308;
loc_830EE304:
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_830EE308:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830ee314
	if (cr6.eq) goto loc_830EE314;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_830EE314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE318:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE320"))) PPC_WEAK_FUNC(sub_830EE320);
PPC_FUNC_IMPL(__imp__sub_830EE320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830ee344
	if (!cr6.eq) goto loc_830EE344;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_830EE344:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r6,25340(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25340);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830ee42c
	if (cr6.eq) goto loc_830EE42C;
	// lhz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// srawi r5,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// srawi r30,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 24;
	// rlwimi r5,r9,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwimi r30,r9,0,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r30,r7,8,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830ee42c
	if (cr6.eq) goto loc_830EE42C;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_830EE3A0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_830EE3A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// beq cr6,0x830ee3cc
	if (cr6.eq) goto loc_830EE3CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ee3a8
	if (cr6.eq) goto loc_830EE3A8;
loc_830EE3CC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ee410
	if (cr6.eq) goto loc_830EE410;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,80
	ctx.r7.s64 = ctx.r7.s64 + 80;
	// srawi r10,r11,24
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 24;
	// srawi r9,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r9,0,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r30,r11,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r10,r30,8,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x830ee3a0
	if (cr6.lt) goto loc_830EE3A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_830EE410:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_830EE42C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE43C"))) PPC_WEAK_FUNC(sub_830EE43C);
PPC_FUNC_IMPL(__imp__sub_830EE43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE440"))) PPC_WEAK_FUNC(sub_830EE440);
PPC_FUNC_IMPL(__imp__sub_830EE440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830ead68
	sub_830EAD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE460"))) PPC_WEAK_FUNC(sub_830EE460);
PPC_FUNC_IMPL(__imp__sub_830EE460) {
	PPC_FUNC_PROLOGUE();
	// b 0x830eb1d8
	sub_830EB1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE464"))) PPC_WEAK_FUNC(sub_830EE464);
PPC_FUNC_IMPL(__imp__sub_830EE464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE468"))) PPC_WEAK_FUNC(sub_830EE468);
PPC_FUNC_IMPL(__imp__sub_830EE468) {
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
	// lwz r11,25340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ee4b4
	if (cr6.eq) goto loc_830EE4B4;
	// lis r30,-31754
	ctx.r30.s64 = -2081030144;
	// lwz r3,25336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25336);
	// bl 0x83103e98
	ctx.lr = 0x830EE498;
	sub_83103E98(ctx, base);
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,25336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25336, ctx.r11.u32);
	// stw r10,25340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25340, ctx.r10.u32);
	// stw r9,25344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25344, ctx.r9.u32);
loc_830EE4B4:
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

__attribute__((alias("__imp__sub_830EE4D0"))) PPC_WEAK_FUNC(sub_830EE4D0);
PPC_FUNC_IMPL(__imp__sub_830EE4D0) {
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
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// ble cr6,0x830ee544
	if (!cr6.gt) goto loc_830EE544;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee518
	if (cr6.eq) goto loc_830EE518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830EE518:
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,25340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25340, ctx.r30.u32);
	// stw r11,25344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25344, ctx.r11.u32);
	// beq cr6,0x830ee544
	if (cr6.eq) goto loc_830EE544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE544:
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

__attribute__((alias("__imp__sub_830EE55C"))) PPC_WEAK_FUNC(sub_830EE55C);
PPC_FUNC_IMPL(__imp__sub_830EE55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE560"))) PPC_WEAK_FUNC(sub_830EE560);
PPC_FUNC_IMPL(__imp__sub_830EE560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830EE568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee594
	if (cr6.eq) goto loc_830EE594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830EE594:
	// lis r30,-31754
	ctx.r30.s64 = -2081030144;
	// lwz r11,25340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ee5d0
	if (cr6.eq) goto loc_830EE5D0;
	// lis r29,-31754
	ctx.r29.s64 = -2081030144;
	// lwz r3,25336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25336);
	// bl 0x83103e98
	ctx.lr = 0x830EE5B0;
	sub_83103E98(ctx, base);
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,25336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25336, ctx.r11.u32);
	// stw r10,25340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25340, ctx.r10.u32);
	// stw r9,25344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25344, ctx.r9.u32);
loc_830EE5D0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee5e8
	if (cr6.eq) goto loc_830EE5E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE5E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE5E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE5F4"))) PPC_WEAK_FUNC(sub_830EE5F4);
PPC_FUNC_IMPL(__imp__sub_830EE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE5F8"))) PPC_WEAK_FUNC(sub_830EE5F8);
PPC_FUNC_IMPL(__imp__sub_830EE5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee60c
	if (cr6.eq) goto loc_830EE60C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830ee258
	sub_830EE258(ctx, base);
	return;
loc_830EE60C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE614"))) PPC_WEAK_FUNC(sub_830EE614);
PPC_FUNC_IMPL(__imp__sub_830EE614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE618"))) PPC_WEAK_FUNC(sub_830EE618);
PPC_FUNC_IMPL(__imp__sub_830EE618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ee630
	if (cr6.eq) goto loc_830EE630;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830ee258
	sub_830EE258(ctx, base);
	return;
loc_830EE630:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE638"))) PPC_WEAK_FUNC(sub_830EE638);
PPC_FUNC_IMPL(__imp__sub_830EE638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830EE640;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee66c
	if (cr6.eq) goto loc_830EE66C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
loc_830EE66C:
	// lis r28,-31754
	ctx.r28.s64 = -2081030144;
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830ee6a0
	if (!cr6.eq) goto loc_830EE6A0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee694
	if (cr6.eq) goto loc_830EE694;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE694:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830EE6A0:
	// bl 0x830ee468
	ctx.lr = 0x830EE6A4;
	sub_830EE468(ctx, base);
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee6c0
	if (cr6.eq) goto loc_830EE6C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE6C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE6C0:
	// lis r11,11565
	ctx.r11.s64 = 757923840;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r11,11520
	ctx.r10.u64 = ctx.r11.u64 | 11520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830f1c50
	ctx.lr = 0x830EE6D8;
	sub_830F1C50(ctx, base);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r9,27860
	ctx.r31.s64 = ctx.r9.s64 + 27860;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x830EE6EC;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x830EE700;
	sub_82574D38(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830EE70C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830ee70c
	if (!cr6.eq) goto loc_830EE70C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a84c0
	ctx.lr = 0x830EE738;
	sub_827A84C0(ctx, base);
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee758
	if (cr6.eq) goto loc_830EE758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE758:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830ee76c
	if (!cr6.lt) goto loc_830EE76C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_830EE76C:
	// bl 0x83104018
	ctx.lr = 0x830EE770;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ee7fc
	if (cr6.eq) goto loc_830EE7FC;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830EE794;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee7d8
	if (cr6.eq) goto loc_830EE7D8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830ee7b4
	if (!cr6.lt) goto loc_830EE7B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_830EE7B4:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104868
	ctx.lr = 0x830EE7C4;
	sub_83104868(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,27948
	ctx.r9.s64 = ctx.r10.s64 + 27948;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x830ee7dc
	goto loc_830EE7DC;
loc_830EE7D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE7DC:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r11,r11,25336
	ctx.r11.s64 = ctx.r11.s64 + 25336;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x830EE7EC;
	sub_83103B18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,25344(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25344, ctx.r11.u32);
	// b 0x830ee800
	goto loc_830EE800;
loc_830EE7FC:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830EE800:
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ee81c
	if (cr6.eq) goto loc_830EE81C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EE81C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EE81C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ee83c
	if (cr6.lt) goto loc_830EE83C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830EE83C;
	sub_825952B8(ctx, base);
loc_830EE83C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE848"))) PPC_WEAK_FUNC(sub_830EE848);
PPC_FUNC_IMPL(__imp__sub_830EE848) {
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
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,25340(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830ee8f4
	if (cr6.eq) goto loc_830EE8F4;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srawi r8,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 24;
	// srawi r7,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r7,0,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r6,8,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x830ee8f4
	if (!cr6.lt) goto loc_830EE8F4;
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r6,r9,9
	ctx.r6.s64 = ctx.r9.s64 + 9;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x830ee8f4
	if (cr6.eq) goto loc_830EE8F4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x830EE8E4;
	sub_8259D6C0(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259d6c0
	ctx.lr = 0x830EE8F0;
	sub_8259D6C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EE8F4:
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

__attribute__((alias("__imp__sub_830EE90C"))) PPC_WEAK_FUNC(sub_830EE90C);
PPC_FUNC_IMPL(__imp__sub_830EE90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE910"))) PPC_WEAK_FUNC(sub_830EE910);
PPC_FUNC_IMPL(__imp__sub_830EE910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830EE918;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x830ee998
	if (cr6.eq) goto loc_830EE998;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830EE938:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ee954
	if (cr6.lt) goto loc_830EE954;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x830EE954;
	sub_825952B8(ctx, base);
loc_830EE954:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830ee97c
	if (cr6.lt) goto loc_830EE97C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x825952b8
	ctx.lr = 0x830EE97C;
	sub_825952B8(ctx, base);
loc_830EE97C:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// addi r11,r31,-52
	ctx.r11.s64 = ctx.r31.s64 + -52;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x830ee938
	if (!cr6.eq) goto loc_830EE938;
loc_830EE998:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE9A0"))) PPC_WEAK_FUNC(sub_830EE9A0);
PPC_FUNC_IMPL(__imp__sub_830EE9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f5f80
	sub_830F5F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE9A4"))) PPC_WEAK_FUNC(sub_830EE9A4);
PPC_FUNC_IMPL(__imp__sub_830EE9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE9A8"))) PPC_WEAK_FUNC(sub_830EE9A8);
PPC_FUNC_IMPL(__imp__sub_830EE9A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f60c0
	sub_830F60C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE9AC"))) PPC_WEAK_FUNC(sub_830EE9AC);
PPC_FUNC_IMPL(__imp__sub_830EE9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE9B0"))) PPC_WEAK_FUNC(sub_830EE9B0);
PPC_FUNC_IMPL(__imp__sub_830EE9B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f57e0
	sub_830F57E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EE9B4"))) PPC_WEAK_FUNC(sub_830EE9B4);
PPC_FUNC_IMPL(__imp__sub_830EE9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EE9B8"))) PPC_WEAK_FUNC(sub_830EE9B8);
PPC_FUNC_IMPL(__imp__sub_830EE9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,87
	ctx.r11.s64 = ctx.r1.s64 + 87;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,-26260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r10,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r10.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830EE9EC:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x830ee9ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EE9EC;
	// lis r11,-31753
	ctx.r11.s64 = -2080964608;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r4,r11,-29736
	ctx.r4.s64 = ctx.r11.s64 + -29736;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830EEA0C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830eea0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EEA0C;
	// li r5,4508
	ctx.r5.s64 = 4508;
	// addi r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 + 28;
	// bl 0x831cee08
	ctx.lr = 0x830EEA24;
	sub_831CEE08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEA38"))) PPC_WEAK_FUNC(sub_830EEA38);
PPC_FUNC_IMPL(__imp__sub_830EEA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,162
	ctx.r9.s64 = 162;
	// lis r11,-31753
	ctx.r11.s64 = -2080964608;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r11,r11,-25192
	ctx.r11.s64 = ctx.r11.s64 + -25192;
	// addi r10,r10,-27904
	ctx.r10.s64 = ctx.r10.s64 + -27904;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// li r9,0
	ctx.r9.s64 = 0;
loc_830EEA5C:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830eea70
	if (cr6.eq) goto loc_830EEA70;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_830EEA70:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 + 996;
	// bdnz 0x830eea5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EEA5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEA84"))) PPC_WEAK_FUNC(sub_830EEA84);
PPC_FUNC_IMPL(__imp__sub_830EEA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EEA88"))) PPC_WEAK_FUNC(sub_830EEA88);
PPC_FUNC_IMPL(__imp__sub_830EEA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-27904
	ctx.r8.s64 = ctx.r11.s64 + -27904;
loc_830EEAAC:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_830EEAB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830eead8
	if (cr6.eq) goto loc_830EEAD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830eeab4
	if (cr6.eq) goto loc_830EEAB4;
loc_830EEAD8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830eeaf4
	if (cr6.eq) goto loc_830EEAF4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplwi cr6,r7,162
	cr6.compare<uint32_t>(ctx.r7.u32, 162, xer);
	// blt cr6,0x830eeaac
	if (cr6.lt) goto loc_830EEAAC;
	// blr 
	return;
loc_830EEAF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEB00"))) PPC_WEAK_FUNC(sub_830EEB00);
PPC_FUNC_IMPL(__imp__sub_830EEB00) {
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
	// beq cr6,0x830eeb7c
	if (cr6.eq) goto loc_830EEB7C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830eeb7c
	if (cr6.eq) goto loc_830EEB7C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,80
	ctx.r8.s64 = 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r30,584
	ctx.r5.s64 = ctx.r30.s64 + 584;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d2dc0
	ctx.lr = 0x830EEB54;
	sub_832D2DC0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,80
	ctx.r8.s64 = 80;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r30,664
	ctx.r5.s64 = ctx.r30.s64 + 664;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x832d2dc0
	ctx.lr = 0x830EEB7C;
	sub_832D2DC0(ctx, base);
loc_830EEB7C:
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

__attribute__((alias("__imp__sub_830EEB94"))) PPC_WEAK_FUNC(sub_830EEB94);
PPC_FUNC_IMPL(__imp__sub_830EEB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EEB98"))) PPC_WEAK_FUNC(sub_830EEB98);
PPC_FUNC_IMPL(__imp__sub_830EEB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830EEBA0;
	__savegprlr_20(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31754
	ctx.r25.s64 = -2081030144;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-31753
	ctx.r11.s64 = -2080964608;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// lis r26,-31754
	ctx.r26.s64 = -2081030144;
	// lhz r9,25380(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 25380);
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// addi r20,r11,-29736
	ctx.r20.s64 = ctx.r11.s64 + -29736;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eecbc
	if (cr6.eq) goto loc_830EECBC;
	// lis r11,-31753
	ctx.r11.s64 = -2080964608;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r24,r11,-25192
	ctx.r24.s64 = ctx.r11.s64 + -25192;
loc_830EEBE0:
	// mulli r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 * 28;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eec80
	if (!cr6.eq) goto loc_830EEC80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x830eea88
	ctx.lr = 0x830EEC04;
	sub_830EEA88(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830eec80
	if (!cr6.eq) goto loc_830EEC80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,25(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// mulli r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 * 996;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r29,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r29.u8);
	// beq cr6,0x830eec50
	if (cr6.eq) goto loc_830EEC50;
	// stb r29,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830eeb00
	ctx.lr = 0x830EEC38;
	sub_830EEB00(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stb r28,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r28.u8);
	// stb r28,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r28.u8);
	// stb r28,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r28.u8);
	// b 0x830eec80
	goto loc_830EEC80;
loc_830EEC50:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,25384(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25384);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x8310e498
	ctx.lr = 0x830EEC60;
	sub_8310E498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eec80
	if (cr6.eq) goto loc_830EEC80;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r3,25384(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25384);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8310e548
	ctx.lr = 0x830EEC7C;
	sub_8310E548(ctx, base);
	// stb r3,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r3.u8);
loc_830EEC80:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eec90
	if (!cr6.eq) goto loc_830EEC90;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
loc_830EEC90:
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eeca0
	if (cr6.eq) goto loc_830EECA0;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
loc_830EECA0:
	// addi r9,r27,1
	ctx.r9.s64 = ctx.r27.s64 + 1;
	// lhz r10,25380(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 25380);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x830eebe0
	if (cr6.lt) goto loc_830EEBE0;
loc_830EECBC:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eed50
	if (!cr6.eq) goto loc_830EED50;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eece8
	if (cr6.eq) goto loc_830EECE8;
	// lwz r3,25384(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25384);
	// bl 0x8310e458
	ctx.lr = 0x830EECDC;
	sub_8310E458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eed50
	if (!cr6.eq) goto loc_830EED50;
loc_830EECE8:
	// lhz r9,25380(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 25380);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830eed2c
	if (cr6.eq) goto loc_830EED2C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
loc_830EED00:
	// addi r8,r20,24
	ctx.r8.s64 = ctx.r20.s64 + 24;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830eed14
	if (!cr6.eq) goto loc_830EED14;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830EED14:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// blt cr6,0x830eed00
	if (cr6.lt) goto loc_830EED00;
loc_830EED2C:
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,2
	ctx.r10.s64 = 2;
	// lhz r7,25392(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 25392);
	// stw r10,25388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25388, ctx.r10.u32);
	// ori r11,r7,2
	ctx.r11.u64 = ctx.r7.u64 | 2;
	// sth r11,25392(r9)
	PPC_STORE_U16(ctx.r9.u32 + 25392, ctx.r11.u16);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830EED50:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EED5C"))) PPC_WEAK_FUNC(sub_830EED5C);
PPC_FUNC_IMPL(__imp__sub_830EED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EED60"))) PPC_WEAK_FUNC(sub_830EED60);
PPC_FUNC_IMPL(__imp__sub_830EED60) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq cr6,0x830eed98
	if (cr6.eq) goto loc_830EED98;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EED98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EED98:
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

__attribute__((alias("__imp__sub_830EEDB0"))) PPC_WEAK_FUNC(sub_830EEDB0);
PPC_FUNC_IMPL(__imp__sub_830EEDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r11,30820
	ctx.r10.s64 = ctx.r11.s64 + 30820;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,6
	ctx.r10.s64 = ctx.r3.s64 + 6;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_830EEDD4:
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x830eedd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EEDD4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r8,r11,30844
	ctx.r8.s64 = ctx.r11.s64 + 30844;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830EEE00:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830eee00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EEE00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EEE0C"))) PPC_WEAK_FUNC(sub_830EEE0C);
PPC_FUNC_IMPL(__imp__sub_830EEE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EEE10"))) PPC_WEAK_FUNC(sub_830EEE10);
PPC_FUNC_IMPL(__imp__sub_830EEE10) {
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
	// addi r9,r11,30820
	ctx.r9.s64 = ctx.r11.s64 + 30820;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830eee44
	if (cr6.eq) goto loc_830EEE44;
	// bl 0x82416268
	ctx.lr = 0x830EEE40;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EEE44:
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

__attribute__((alias("__imp__sub_830EEE58"))) PPC_WEAK_FUNC(sub_830EEE58);
PPC_FUNC_IMPL(__imp__sub_830EEE58) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,25376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830eeef8
	if (!cr6.eq) goto loc_830EEEF8;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830EEE98;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eef14
	if (cr6.eq) goto loc_830EEF14;
	// bl 0x830eedb0
	ctx.lr = 0x830EEEA4;
	sub_830EEDB0(ctx, base);
	// stw r3,25376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eeecc
	if (cr6.eq) goto loc_830EEECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,30716
	ctx.r4.s64 = ctx.r10.s64 + 30716;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830EEEC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830EEECC:
	// lis r11,-31753
	ctx.r11.s64 = -2080964608;
	// li r9,65
	ctx.r9.s64 = 65;
	// addi r10,r11,-25192
	ctx.r10.s64 = ctx.r11.s64 + -25192;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,25400
	ctx.r11.s64 = ctx.r11.s64 + 25400;
	// addi r10,r10,30080
	ctx.r10.s64 = ctx.r10.s64 + 30080;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830EEEEC:
	// stwu r11,996(r10)
	ea = 996 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bdnz 0x830eeeec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EEEEC;
loc_830EEEF8:
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
loc_830EEF14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25376, ctx.r11.u32);
	// b 0x830eeecc
	goto loc_830EEECC;
}

__attribute__((alias("__imp__sub_830EEF20"))) PPC_WEAK_FUNC(sub_830EEF20);
PPC_FUNC_IMPL(__imp__sub_830EEF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830EEF28;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31754
	ctx.r28.s64 = -2081030144;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwz r31,25376(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25376);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830ef034
	if (cr6.eq) goto loc_830EF034;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EEF58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-31754
	ctx.r30.s64 = -2081030144;
	// li r27,24
	ctx.r27.s64 = 24;
	// lwz r11,25384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830eefa8
	if (cr6.eq) goto loc_830EEFA8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830EEF7C;
	sub_82595150(ctx, base);
	// lwz r29,25384(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25384);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830eef98
	if (cr6.eq) goto loc_830EEF98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310eff8
	ctx.lr = 0x830EEF90;
	sub_8310EFF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830EEF98;
	sub_82416268(ctx, base);
loc_830EEF98:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830EEFA0;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25384, ctx.r11.u32);
loc_830EEFA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EEFBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,25376(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25376);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef034
	if (cr6.eq) goto loc_830EF034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EEFD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,25376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25376);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ef020
	if (cr6.eq) goto loc_830EF020;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830EEFF8;
	sub_82595150(ctx, base);
	// lwz r3,25376(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25376);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef018
	if (cr6.eq) goto loc_830EF018;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF018:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830EF020;
	sub_82595170(ctx, base);
loc_830EF020:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,25376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25376, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830EF034:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF040"))) PPC_WEAK_FUNC(sub_830EF040);
PPC_FUNC_IMPL(__imp__sub_830EF040) {
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
	ctx.lr = 0x830EF048;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r23,25376(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x830ef160
	if (cr6.eq) goto loc_830EF160;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ef160
	if (cr6.eq) goto loc_830EF160;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,162
	cr6.compare<uint32_t>(ctx.r31.u32, 162, xer);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// bge cr6,0x830ef13c
	if (!cr6.lt) goto loc_830EF13C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830ef13c
	if (cr6.eq) goto loc_830EF13C;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-31753
	ctx.r10.s64 = -2080964608;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r24,r11,30732
	ctx.r24.s64 = ctx.r11.s64 + 30732;
	// addi r28,r10,-25192
	ctx.r28.s64 = ctx.r10.s64 + -25192;
loc_830EF0BC:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ef12c
	if (cr6.eq) goto loc_830EF12C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r30,576
	ctx.r3.s64 = ctx.r30.s64 + 576;
	// bl 0x831d82f0
	ctx.lr = 0x830EF0D4;
	sub_831D82F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830ef12c
	if (cr6.eq) goto loc_830EF12C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x830eea88
	ctx.lr = 0x830EF0EC;
	sub_830EEA88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830ef12c
	if (!cr6.eq) goto loc_830EF12C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mulli r11,r11,996
	ctx.r11.s64 = ctx.r11.s64 * 996;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,984
	ctx.r5.s64 = 984;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x831ce980
	ctx.lr = 0x830EF118;
	sub_831CE980(ctx, base);
	// stb r27,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r27.u8);
	// stb r29,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eeb00
	ctx.lr = 0x830EF128;
	sub_830EEB00(ctx, base);
	// b 0x830ef130
	goto loc_830EF130;
loc_830EF12C:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_830EF130:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r30,r30,992
	ctx.r30.s64 = ctx.r30.s64 + 992;
	// bne 0x830ef0bc
	if (!cr0.eq) goto loc_830EF0BC;
loc_830EF13C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r31,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830EF15C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EF160:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF168"))) PPC_WEAK_FUNC(sub_830EF168);
PPC_FUNC_IMPL(__imp__sub_830EF168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830EF170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r29,25376(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830ef240
	if (cr6.eq) goto loc_830EF240;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ef240
	if (cr6.eq) goto loc_830EF240;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF1B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830ef22c
	if (cr6.eq) goto loc_830EF22C;
	// cmplwi cr6,r30,162
	cr6.compare<uint32_t>(ctx.r30.u32, 162, xer);
	// bge cr6,0x830ef22c
	if (!cr6.lt) goto loc_830EF22C;
	// bl 0x830ee9b8
	ctx.lr = 0x830EF1C4;
	sub_830EE9B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830ef210
	if (cr6.eq) goto loc_830EF210;
	// lis r11,-31753
	ctx.r11.s64 = -2080964608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r10,r11,-29736
	ctx.r10.s64 = ctx.r11.s64 + -29736;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r7,r10,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_830EF1E4:
	// li r8,7
	ctx.r8.s64 = 7;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_830EF1F8:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x830ef1f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830EF1F8;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bne 0x830ef1e4
	if (!cr0.eq) goto loc_830EF1E4;
loc_830EF210:
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// lhz r11,25392(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 25392);
	// sth r30,25396(r8)
	PPC_STORE_U16(ctx.r8.u32 + 25396, ctx.r30.u16);
	// rlwinm r7,r11,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 | 1;
	// sth r11,25392(r9)
	PPC_STORE_U16(ctx.r9.u32 + 25392, ctx.r11.u16);
loc_830EF22C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF240:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF24C"))) PPC_WEAK_FUNC(sub_830EF24C);
PPC_FUNC_IMPL(__imp__sub_830EF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF250"))) PPC_WEAK_FUNC(sub_830EF250);
PPC_FUNC_IMPL(__imp__sub_830EF250) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,25376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ef2c4
	if (cr6.eq) goto loc_830EF2C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830EF294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r11,25392(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 25392);
	// rlwinm r7,r11,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r11,r7,2
	ctx.r11.u64 = ctx.r7.u64 | 2;
	// sth r11,25392(r8)
	PPC_STORE_U16(ctx.r8.u32 + 25392, ctx.r11.u16);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x830EF2C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EF2C4:
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

__attribute__((alias("__imp__sub_830EF2DC"))) PPC_WEAK_FUNC(sub_830EF2DC);
PPC_FUNC_IMPL(__imp__sub_830EF2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF2E0"))) PPC_WEAK_FUNC(sub_830EF2E0);
PPC_FUNC_IMPL(__imp__sub_830EF2E0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830ef354
	if (cr6.lt) goto loc_830EF354;
	// cmplwi cr6,r31,64
	cr6.compare<uint32_t>(ctx.r31.u32, 64, xer);
	// bge cr6,0x830ef354
	if (!cr6.lt) goto loc_830EF354;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,25376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ef354
	if (cr6.eq) goto loc_830EF354;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eed60
	ctx.lr = 0x830EF320;
	sub_830EED60(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-27904
	ctx.r11.s64 = ctx.r11.s64 + -27904;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r9,r11,776
	ctx.r9.s64 = ctx.r11.s64 + 776;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// beq cr6,0x830ef350
	if (cr6.eq) goto loc_830EF350;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF350:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EF354:
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

__attribute__((alias("__imp__sub_830EF368"))) PPC_WEAK_FUNC(sub_830EF368);
PPC_FUNC_IMPL(__imp__sub_830EF368) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830ef3fc
	if (cr6.lt) goto loc_830EF3FC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830ef3fc
	if (!cr6.lt) goto loc_830EF3FC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ef3fc
	if (cr6.lt) goto loc_830EF3FC;
	// cmplwi cr6,r4,23
	cr6.compare<uint32_t>(ctx.r4.u32, 23, xer);
	// bge cr6,0x830ef3fc
	if (!cr6.lt) goto loc_830EF3FC;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,25376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ef3fc
	if (cr6.eq) goto loc_830EF3FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eed60
	ctx.lr = 0x830EF3C0;
	sub_830EED60(ctx, base);
	// mulli r11,r31,23
	ctx.r11.s64 = ctx.r31.s64 * 23;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r10,-27904
	ctx.r11.s64 = ctx.r10.s64 + -27904;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,384
	ctx.r7.s64 = ctx.r11.s64 + 384;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r31,r8,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// beq cr6,0x830ef3f8
	if (cr6.eq) goto loc_830EF3F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF3F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF3F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EF3FC:
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

__attribute__((alias("__imp__sub_830EF414"))) PPC_WEAK_FUNC(sub_830EF414);
PPC_FUNC_IMPL(__imp__sub_830EF414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF418"))) PPC_WEAK_FUNC(sub_830EF418);
PPC_FUNC_IMPL(__imp__sub_830EF418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830EF420;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r28,25376(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830ef550
	if (cr6.eq) goto loc_830EF550;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ef550
	if (cr6.eq) goto loc_830EF550;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x830eea88
	ctx.lr = 0x830EF47C;
	sub_830EEA88(ctx, base);
	// lis r11,-31753
	ctx.r11.s64 = -2080964608;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r8,r11,-25192
	ctx.r8.s64 = ctx.r11.s64 + -25192;
	// bne cr6,0x830ef538
	if (!cr6.eq) goto loc_830EF538;
	// mulli r11,r9,996
	ctx.r11.s64 = ctx.r9.s64 * 996;
	// addi r10,r8,9
	ctx.r10.s64 = ctx.r8.s64 + 9;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830ef4ac
	if (!cr6.eq) goto loc_830EF4AC;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_830EF4AC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x830ef538
	if (!cr6.eq) goto loc_830EF538;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// mulli r11,r9,996
	ctx.r11.s64 = ctx.r9.s64 * 996;
	// addi r10,r10,-27948
	ctx.r10.s64 = ctx.r10.s64 + -27948;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbzx r5,r9,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// beq cr6,0x830ef538
	if (cr6.eq) goto loc_830EF538;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830ef538
	if (cr6.eq) goto loc_830EF538;
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830ef52c
	if (cr6.lt) goto loc_830EF52C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bge cr6,0x830ef52c
	if (!cr6.lt) goto loc_830EF52C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830EF52C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_830EF538:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF54C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830EF550:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF558"))) PPC_WEAK_FUNC(sub_830EF558);
PPC_FUNC_IMPL(__imp__sub_830EF558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830EF560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r31,25376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830ef60c
	if (cr6.eq) goto loc_830EF60C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF59C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x830eea88
	ctx.lr = 0x830EF5B0;
	sub_830EEA88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830ef5f4
	if (!cr6.eq) goto loc_830EF5F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31753
	ctx.r10.s64 = -2080964608;
	// addi r9,r10,-25192
	ctx.r9.s64 = ctx.r10.s64 + -25192;
	// mulli r8,r11,996
	ctx.r8.s64 = ctx.r11.s64 * 996;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ef5f4
	if (cr6.eq) goto loc_830EF5F4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830ef5e4
	if (cr6.eq) goto loc_830EF5E4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_830EF5E4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830ef5f4
	if (cr6.eq) goto loc_830EF5F4;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830EF5F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830EF60C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF614"))) PPC_WEAK_FUNC(sub_830EF614);
PPC_FUNC_IMPL(__imp__sub_830EF614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF618"))) PPC_WEAK_FUNC(sub_830EF618);
PPC_FUNC_IMPL(__imp__sub_830EF618) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,25376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ef694
	if (cr6.eq) goto loc_830EF694;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830EF660;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x830eea88
	ctx.lr = 0x830EF674;
	sub_830EEA88(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r31,r6,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r5,12(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x830EF690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EF694:
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

__attribute__((alias("__imp__sub_830EF6AC"))) PPC_WEAK_FUNC(sub_830EF6AC);
PPC_FUNC_IMPL(__imp__sub_830EF6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF6B0"))) PPC_WEAK_FUNC(sub_830EF6B0);
PPC_FUNC_IMPL(__imp__sub_830EF6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830EF6B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r28,r11,25376
	ctx.r28.s64 = ctx.r11.s64 + 25376;
	// lwz r26,25376(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830ef8dc
	if (cr6.eq) goto loc_830EF8DC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF6EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r29,-31754
	ctx.r29.s64 = -2081030144;
	// lwz r11,25388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25388);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830ef844
	if (cr6.eq) goto loc_830EF844;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830ef7b0
	if (cr6.eq) goto loc_830EF7B0;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lhz r10,25392(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 25392);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830ef724
	if (cr6.eq) goto loc_830EF724;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,25392(r11)
	PPC_STORE_U16(ctx.r11.u32 + 25392, ctx.r10.u16);
	// b 0x830ef8c8
	goto loc_830EF8C8;
loc_830EF724:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830ef8c8
	if (cr6.eq) goto loc_830EF8C8;
	// rlwinm r10,r10,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE;
	// sth r10,25392(r11)
	PPC_STORE_U16(ctx.r11.u32 + 25392, ctx.r10.u16);
	// bl 0x830eea38
	ctx.lr = 0x830EF73C;
	sub_830EEA38(ctx, base);
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,25384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ef780
	if (!cr6.eq) goto loc_830EF780;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,656
	ctx.r4.s64 = 656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830EF768;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef7a4
	if (cr6.eq) goto loc_830EF7A4;
	// bl 0x8310ef60
	ctx.lr = 0x830EF774;
	sub_8310EF60(ctx, base);
	// stw r3,25384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25384, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef8c8
	if (cr6.eq) goto loc_830EF8C8;
loc_830EF780:
	// bl 0x8310f9e0
	ctx.lr = 0x830EF784;
	sub_8310F9E0(ctx, base);
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,25388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25388, ctx.r11.u32);
	// lhz r11,25396(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 25396);
	// sth r10,25396(r9)
	PPC_STORE_U16(ctx.r9.u32 + 25396, ctx.r10.u16);
	// sth r11,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r11.u16);
	// b 0x830ef8c8
	goto loc_830EF8C8;
loc_830EF7A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25384, ctx.r11.u32);
	// b 0x830ef8c8
	goto loc_830EF8C8;
loc_830EF7B0:
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r3,25384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ef7d4
	if (!cr6.eq) goto loc_830EF7D4;
loc_830EF7C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r11.u16);
	// stw r10,25388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25388, ctx.r10.u32);
	// b 0x830ef8c8
	goto loc_830EF8C8;
loc_830EF7D4:
	// bl 0x83102db0
	ctx.lr = 0x830EF7D8;
	sub_83102DB0(ctx, base);
	// lwz r11,25384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25384);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830ef8c8
	if (!cr6.eq) goto loc_830EF8C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ef828
	if (cr6.eq) goto loc_830EF828;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830EF804;
	sub_82595150(ctx, base);
	// lwz r30,25384(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25384);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830ef820
	if (cr6.eq) goto loc_830EF820;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310eff8
	ctx.lr = 0x830EF818;
	sub_8310EFF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830EF820;
	sub_82416268(ctx, base);
loc_830EF820:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x830EF828;
	sub_82595170(ctx, base);
loc_830EF828:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,25384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25384, ctx.r11.u32);
	// sth r10,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r10.u16);
	// stw r9,25388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25388, ctx.r9.u32);
	// b 0x830ef8c8
	goto loc_830EF8C8;
loc_830EF844:
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r3,25384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef7c0
	if (cr6.eq) goto loc_830EF7C0;
	// bl 0x83102db0
	ctx.lr = 0x830EF858;
	sub_83102DB0(ctx, base);
	// lwz r30,25384(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25384);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ef8c8
	if (!cr6.eq) goto loc_830EF8C8;
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lhz r11,25392(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 25392);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830ef8a0
	if (cr6.eq) goto loc_830EF8A0;
	// bl 0x830ee9b8
	ctx.lr = 0x830EF880;
	sub_830EE9B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310ed98
	ctx.lr = 0x830EF88C;
	sub_8310ED98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r11,25392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 25392, ctx.r11.u16);
	// stw r10,25388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25388, ctx.r10.u32);
	// b 0x830ef8c8
	goto loc_830EF8C8;
loc_830EF8A0:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ef8c0
	if (cr6.eq) goto loc_830EF8C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310ed98
	ctx.lr = 0x830EF8B4;
	sub_8310ED98(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,25388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25388, ctx.r11.u32);
	// b 0x830ef8c8
	goto loc_830EF8C8;
loc_830EF8C0:
	// bl 0x830eeb98
	ctx.lr = 0x830EF8C4;
	sub_830EEB98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_830EF8C8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF8DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF8DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EF8E8"))) PPC_WEAK_FUNC(sub_830EF8E8);
PPC_FUNC_IMPL(__imp__sub_830EF8E8) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef920
	if (cr6.eq) goto loc_830EF920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF91C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830EF920:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r11,5096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5096);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830ef960
	if (!cr6.eq) goto loc_830EF960;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef948
	if (cr6.eq) goto loc_830EF948;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF948:
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
loc_830EF960:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ef978
	if (cr6.eq) goto loc_830EF978;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EF978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EF978:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830ebb60
	ctx.lr = 0x830EF980;
	sub_830EBB60(ctx, base);
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

__attribute__((alias("__imp__sub_830EF994"))) PPC_WEAK_FUNC(sub_830EF994);
PPC_FUNC_IMPL(__imp__sub_830EF994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EF998"))) PPC_WEAK_FUNC(sub_830EF998);
PPC_FUNC_IMPL(__imp__sub_830EF998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r8,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

