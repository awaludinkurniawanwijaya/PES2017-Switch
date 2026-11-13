#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DC022C"))) PPC_WEAK_FUNC(sub_82DC022C);
PPC_FUNC_IMPL(__imp__sub_82DC022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0230"))) PPC_WEAK_FUNC(sub_82DC0230);
PPC_FUNC_IMPL(__imp__sub_82DC0230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC0238;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 280);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,281(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 281);
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r8,282(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 282);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r7,283(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 283);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r27,r3,280
	ctx.r27.s64 = ctx.r3.s64 + 280;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lwz r6,536(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82dc0290
	if (cr6.eq) goto loc_82DC0290;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC0290:
	// lbz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 284);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,248
	ctx.r5.s64 = 248;
	// addi r4,r29,288
	ctx.r4.s64 = ctx.r29.s64 + 288;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r9,285(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 285);
	// stb r9,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r9.u8);
	// lbz r8,286(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 286);
	// stb r8,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r8.u8);
	// lbz r11,287(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 287);
	// stb r11,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r11.u8);
	// bl 0x82dbff38
	ctx.lr = 0x82DC02D0;
	sub_82DBFF38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82dc0324
	if (cr6.eq) goto loc_82DC0324;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82dc0324
	if (cr6.lt) goto loc_82DC0324;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r10,r31,47
	ctx.r10.s64 = ctx.r31.s64 + 47;
	// addi r11,r11,279
	ctx.r11.s64 = ctx.r11.s64 + 279;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DC0310:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82dc0310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC0310;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82DC0324:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfic r10,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r9.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc033c
	if (!cr6.lt) goto loc_82DC033C;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x82dc0370
	goto loc_82DC0370;
loc_82DC033C:
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,280
	ctx.r8.s64 = ctx.r10.s64 + 280;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r7,280(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r4.u8);
loc_82DC0370:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc03b0
	if (cr6.eq) goto loc_82DC03B0;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// subfic r5,r30,256
	xer.ca = ctx.r30.u32 <= 256;
	ctx.r5.s64 = 256 - ctx.r30.s64;
	// addi r4,r11,280
	ctx.r4.s64 = ctx.r11.s64 + 280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dbff38
	ctx.lr = 0x82DC039C;
	sub_82DBFF38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82dc03b4
	if (!cr6.eq) goto loc_82DC03B4;
loc_82DC03B0:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC03B4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0410
	if (cr6.eq) goto loc_82DC0410;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x82dc03d8
	if (!cr6.lt) goto loc_82DC03D8;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82dc0400
	goto loc_82DC0400;
loc_82DC03D8:
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r10,r31,95
	ctx.r10.s64 = ctx.r31.s64 + 95;
	// addi r11,r11,279
	ctx.r11.s64 = ctx.r11.s64 + 279;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DC03EC:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82dc03ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC03EC;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82DC0400:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc0414
	if (!cr6.eq) goto loc_82DC0414;
loc_82DC0410:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC0414:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82dc0488
	if (cr6.eq) goto loc_82DC0488;
	// subfic r8,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r9.s64;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bge cr6,0x82dc0440
	if (!cr6.lt) goto loc_82DC0440;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x82dc0478
	goto loc_82DC0478;
loc_82DC0440:
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r10,280
	ctx.r11.s64 = ctx.r10.s64 + 280;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r6,280(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// lbz r5,281(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// lbz r4,282(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// lbz r3,283(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// stb r5,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// stb r4,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r4.u8);
	// stb r3,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r3.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DC0478:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne cr6,0x82dc048c
	if (!cr6.eq) goto loc_82DC048C;
loc_82DC0488:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82DC048C:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dc05e8
	if (!cr6.eq) goto loc_82DC05E8;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0504
	if (cr6.eq) goto loc_82DC0504;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc04c0
	if (!cr6.lt) goto loc_82DC04C0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// b 0x82dc04f4
	goto loc_82DC04F4;
loc_82DC04C0:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// addi r11,r10,280
	ctx.r11.s64 = ctx.r10.s64 + 280;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r4.u8);
loc_82DC04F4:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc0508
	if (!cr6.eq) goto loc_82DC0508;
loc_82DC0504:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC0508:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc056c
	if (cr6.eq) goto loc_82DC056C;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc052c
	if (!cr6.lt) goto loc_82DC052C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82dc055c
	goto loc_82DC055C;
loc_82DC052C:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,280
	ctx.r9.s64 = ctx.r10.s64 + 280;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r7,280(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r7,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r7.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r4.u8);
loc_82DC055C:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc0570
	if (!cr6.eq) goto loc_82DC0570;
loc_82DC056C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC0570:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc05d4
	if (cr6.eq) goto loc_82DC05D4;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc0594
	if (!cr6.lt) goto loc_82DC0594;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82dc05c4
	goto loc_82DC05C4;
loc_82DC0594:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,280
	ctx.r9.s64 = ctx.r10.s64 + 280;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r7,280(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r7,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r7.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r4.u8);
loc_82DC05C4:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc05d8
	if (!cr6.eq) goto loc_82DC05D8;
loc_82DC05D4:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC05D8:
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// b 0x82dc0878
	goto loc_82DC0878;
loc_82DC05E8:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// bne cr6,0x82dc0738
	if (!cr6.eq) goto loc_82DC0738;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0654
	if (cr6.eq) goto loc_82DC0654;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc0610
	if (!cr6.lt) goto loc_82DC0610;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// b 0x82dc0644
	goto loc_82DC0644;
loc_82DC0610:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// addi r11,r10,280
	ctx.r11.s64 = ctx.r10.s64 + 280;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r4.u8);
loc_82DC0644:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc0658
	if (!cr6.eq) goto loc_82DC0658;
loc_82DC0654:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC0658:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc06bc
	if (cr6.eq) goto loc_82DC06BC;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc067c
	if (!cr6.lt) goto loc_82DC067C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82dc06ac
	goto loc_82DC06AC;
loc_82DC067C:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,280
	ctx.r9.s64 = ctx.r10.s64 + 280;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r7,280(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r7,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r7.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r4.u8);
loc_82DC06AC:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc06c0
	if (!cr6.eq) goto loc_82DC06C0;
loc_82DC06BC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC06C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0724
	if (cr6.eq) goto loc_82DC0724;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc06e4
	if (!cr6.lt) goto loc_82DC06E4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82dc0714
	goto loc_82DC0714;
loc_82DC06E4:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,280
	ctx.r9.s64 = ctx.r10.s64 + 280;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r7,280(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r7,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r7.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r4.u8);
loc_82DC0714:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc0728
	if (!cr6.eq) goto loc_82DC0728;
loc_82DC0724:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC0728:
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// b 0x82dc0878
	goto loc_82DC0878;
loc_82DC0738:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0798
	if (cr6.eq) goto loc_82DC0798;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc0754
	if (!cr6.lt) goto loc_82DC0754;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// b 0x82dc0788
	goto loc_82DC0788;
loc_82DC0754:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r9,r31,120
	ctx.r9.s64 = ctx.r31.s64 + 120;
	// addi r11,r10,280
	ctx.r11.s64 = ctx.r10.s64 + 280;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r9,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r9.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,123(r31)
	PPC_STORE_U8(ctx.r31.u32 + 123, ctx.r4.u8);
loc_82DC0788:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc079c
	if (!cr6.eq) goto loc_82DC079C;
loc_82DC0798:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC079C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0800
	if (cr6.eq) goto loc_82DC0800;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc07c0
	if (!cr6.lt) goto loc_82DC07C0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82dc07f0
	goto loc_82DC07F0;
loc_82DC07C0:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,280
	ctx.r9.s64 = ctx.r10.s64 + 280;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r7,280(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r7,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r7.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r4.u8);
loc_82DC07F0:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc0804
	if (!cr6.eq) goto loc_82DC0804;
loc_82DC0800:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC0804:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0868
	if (cr6.eq) goto loc_82DC0868;
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82dc0828
	if (!cr6.lt) goto loc_82DC0828;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82dc0858
	goto loc_82DC0858;
loc_82DC0828:
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,280
	ctx.r9.s64 = ctx.r10.s64 + 280;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r7,280(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// stb r7,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r7.u8);
	// lbz r6,281(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// stb r6,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r6.u8);
	// lbz r5,282(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// stb r5,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r5.u8);
	// lbz r4,283(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r4,131(r31)
	PPC_STORE_U8(ctx.r31.u32 + 131, ctx.r4.u8);
loc_82DC0858:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82dc086c
	if (!cr6.eq) goto loc_82DC086C;
loc_82DC0868:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82DC086C:
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
loc_82DC0878:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc08f0
	if (cr6.eq) goto loc_82DC08F0;
	// subfic r8,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r9.s64;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bge cr6,0x82dc08a8
	if (!cr6.lt) goto loc_82DC08A8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x82dc08e0
	goto loc_82DC08E0;
loc_82DC08A8:
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r10,280
	ctx.r11.s64 = ctx.r10.s64 + 280;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r6,280(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 280);
	// lbz r5,281(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// lbz r4,282(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 282);
	// lbz r3,283(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 283);
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// stb r5,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// stb r4,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r4.u8);
	// stb r3,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r3.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DC08E0:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc08f4
	if (!cr6.eq) goto loc_82DC08F4;
loc_82DC08F0:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82DC08F4:
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r7,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r7.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dbf3b8
	ctx.lr = 0x82DC0910;
	sub_82DBF3B8(ctx, base);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82dc0974
	if (cr6.eq) goto loc_82DC0974;
	// subfic r11,r5,256
	xer.ca = ctx.r5.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r5.s64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82dc0934
	if (!cr6.lt) goto loc_82DC0934;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82dc0964
	goto loc_82DC0964;
loc_82DC0934:
	// add r11,r5,r29
	ctx.r11.u64 = ctx.r5.u64 + ctx.r29.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,280
	ctx.r10.s64 = ctx.r11.s64 + 280;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 280);
	// lbz r7,281(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 281);
	// lbz r6,282(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 282);
	// lbz r5,283(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 283);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r6,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// stb r5,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r5.u8);
loc_82DC0964:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82dc0978
	if (!cr6.eq) goto loc_82DC0978;
loc_82DC0974:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82DC0978:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82dc098c
	if (!cr6.eq) goto loc_82DC098C;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82DC098C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0994"))) PPC_WEAK_FUNC(sub_82DC0994);
PPC_FUNC_IMPL(__imp__sub_82DC0994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0998"))) PPC_WEAK_FUNC(sub_82DC0998);
PPC_FUNC_IMPL(__imp__sub_82DC0998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC09A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// beq cr6,0x82dc0a28
	if (cr6.eq) goto loc_82DC0A28;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
loc_82DC09D8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dc09fc
	if (cr6.lt) goto loc_82DC09FC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC09FC;
	sub_825952B8(ctx, base);
loc_82DC09FC:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC0A18;
	sub_825952B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc09d8
	if (!cr6.eq) goto loc_82DC09D8;
loc_82DC0A28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0A30"))) PPC_WEAK_FUNC(sub_82DC0A30);
PPC_FUNC_IMPL(__imp__sub_82DC0A30) {
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
	// addi r3,r3,636
	ctx.r3.s64 = ctx.r3.s64 + 636;
	// bl 0x82dc0998
	ctx.lr = 0x82DC0A4C;
	sub_82DC0998(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stb r11,648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 648, ctx.r11.u8);
	// stb r11,649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 649, ctx.r11.u8);
	// stb r10,650(r31)
	PPC_STORE_U8(ctx.r31.u32 + 650, ctx.r10.u8);
	// stb r11,654(r31)
	PPC_STORE_U8(ctx.r31.u32 + 654, ctx.r11.u8);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stb r11,655(r31)
	PPC_STORE_U8(ctx.r31.u32 + 655, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DC0A84"))) PPC_WEAK_FUNC(sub_82DC0A84);
PPC_FUNC_IMPL(__imp__sub_82DC0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0A88"))) PPC_WEAK_FUNC(sub_82DC0A88);
PPC_FUNC_IMPL(__imp__sub_82DC0A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC0A90;
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
	// bl 0x82dbf2c8
	ctx.lr = 0x82DC0AA4;
	sub_82DBF2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc0abc
	if (!cr6.eq) goto loc_82DC0ABC;
loc_82DC0AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC0ABC:
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0230
	ctx.lr = 0x82DC0AC8;
	sub_82DC0230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc0ab0
	if (cr6.eq) goto loc_82DC0AB0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbf3b8
	ctx.lr = 0x82DC0AE4;
	sub_82DBF3B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,650(r31)
	PPC_STORE_U8(ctx.r31.u32 + 650, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0AFC"))) PPC_WEAK_FUNC(sub_82DC0AFC);
PPC_FUNC_IMPL(__imp__sub_82DC0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0B00"))) PPC_WEAK_FUNC(sub_82DC0B00);
PPC_FUNC_IMPL(__imp__sub_82DC0B00) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82dbf1c0
	ctx.lr = 0x82DC0B20;
	sub_82DBF1C0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82dbf1c0
	ctx.lr = 0x82DC0B28;
	sub_82DBF1C0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x831cdcf0
	ctx.lr = 0x82DC0B38;
	sub_831CDCF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stb r30,540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 540, ctx.r30.u8);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// bl 0x82dc0998
	ctx.lr = 0x82DC0B50;
	sub_82DC0998(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,84
	ctx.r5.s64 = 84;
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 648, ctx.r30.u8);
	// addi r3,r31,541
	ctx.r3.s64 = ctx.r31.s64 + 541;
	// stb r30,649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 649, ctx.r30.u8);
	// stb r11,650(r31)
	PPC_STORE_U8(ctx.r31.u32 + 650, ctx.r11.u8);
	// stb r30,654(r31)
	PPC_STORE_U8(ctx.r31.u32 + 654, ctx.r30.u8);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stb r30,655(r31)
	PPC_STORE_U8(ctx.r31.u32 + 655, ctx.r30.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82DC0B80;
	sub_831CDCF0(ctx, base);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stb r30,651(r31)
	PPC_STORE_U8(ctx.r31.u32 + 651, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82DC0BA0"))) PPC_WEAK_FUNC(sub_82DC0BA0);
PPC_FUNC_IMPL(__imp__sub_82DC0BA0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-22920
	ctx.r10.s64 = ctx.r11.s64 + -22920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82dbf4d8
	ctx.lr = 0x82DC0BCC;
	sub_82DBF4D8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82dbf4d8
	ctx.lr = 0x82DC0BD4;
	sub_82DBF4D8(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC0BF4;
	sub_82595718(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,636(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stb r30,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r30.u8);
	// stb r7,653(r31)
	PPC_STORE_U8(ctx.r31.u32 + 653, ctx.r7.u8);
	// std r30,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r30.u64);
	// std r30,672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 672, ctx.r30.u64);
	// bl 0x82dc0b00
	ctx.lr = 0x82DC0C24;
	sub_82DC0B00(ctx, base);
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

__attribute__((alias("__imp__sub_82DC0C40"))) PPC_WEAK_FUNC(sub_82DC0C40);
PPC_FUNC_IMPL(__imp__sub_82DC0C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC0C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,636
	ctx.r3.s64 = ctx.r3.s64 + 636;
	// addi r10,r11,-22920
	ctx.r10.s64 = ctx.r11.s64 + -22920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82dc0998
	ctx.lr = 0x82DC0C64;
	sub_82DC0998(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC0C78;
	sub_825952B8(ctx, base);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// addi r29,r8,-22924
	ctx.r29.s64 = ctx.r8.s64 + -22924;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// bl 0x82da8c38
	ctx.lr = 0x82DC0C90;
	sub_82DA8C38(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82da8c38
	ctx.lr = 0x82DC0C98;
	sub_82DA8C38(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82da8c38
	ctx.lr = 0x82DC0CA8;
	sub_82DA8C38(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82da8c38
	ctx.lr = 0x82DC0CB0;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0CB8"))) PPC_WEAK_FUNC(sub_82DC0CB8);
PPC_FUNC_IMPL(__imp__sub_82DC0CB8) {
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
	// bl 0x82dc0c40
	ctx.lr = 0x82DC0CD8;
	sub_82DC0C40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc0cf0
	if (cr6.eq) goto loc_82DC0CF0;
	// bl 0x82416268
	ctx.lr = 0x82DC0CEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DC0CF0:
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

__attribute__((alias("__imp__sub_82DC0D08"))) PPC_WEAK_FUNC(sub_82DC0D08);
PPC_FUNC_IMPL(__imp__sub_82DC0D08) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r3,-32200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc0d38
	if (cr6.eq) goto loc_82DC0D38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC0D38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DC0D38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-32200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32200, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DC0D54"))) PPC_WEAK_FUNC(sub_82DC0D54);
PPC_FUNC_IMPL(__imp__sub_82DC0D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0D58"))) PPC_WEAK_FUNC(sub_82DC0D58);
PPC_FUNC_IMPL(__imp__sub_82DC0D58) {
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
	// bl 0x83a7d958
	ctx.lr = 0x82DC0D70;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DC0D74;
	sub_83524138(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc0d90
	if (cr6.eq) goto loc_82DC0D90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DC0D90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DC0D90:
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

__attribute__((alias("__imp__sub_82DC0DA4"))) PPC_WEAK_FUNC(sub_82DC0DA4);
PPC_FUNC_IMPL(__imp__sub_82DC0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0DA8"))) PPC_WEAK_FUNC(sub_82DC0DA8);
PPC_FUNC_IMPL(__imp__sub_82DC0DA8) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc0de0
	if (cr6.eq) goto loc_82DC0DE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC0DD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_82DC0DE0:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,-32200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32200);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc0dfc
	if (cr6.eq) goto loc_82DC0DFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-32200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32200, ctx.r10.u32);
loc_82DC0DFC:
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

__attribute__((alias("__imp__sub_82DC0E10"))) PPC_WEAK_FUNC(sub_82DC0E10);
PPC_FUNC_IMPL(__imp__sub_82DC0E10) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,-22460
	ctx.r9.s64 = ctx.r11.s64 + -22460;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-32200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32200, ctx.r11.u32);
	// bl 0x831032a0
	ctx.lr = 0x82DC0E48;
	sub_831032A0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc0e60
	if (cr6.eq) goto loc_82DC0E60;
	// bl 0x82416268
	ctx.lr = 0x82DC0E5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DC0E60:
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

__attribute__((alias("__imp__sub_82DC0E78"))) PPC_WEAK_FUNC(sub_82DC0E78);
PPC_FUNC_IMPL(__imp__sub_82DC0E78) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC0E94;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc0eb0
	if (!cr6.eq) goto loc_82DC0EB0;
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// b 0x82dc0f1c
	goto loc_82DC0F1C;
loc_82DC0EB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82DC0ECC;
	sub_831CDCF0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DC0ED4;
	sub_825832F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc13f0
	ctx.lr = 0x82DC0EDC;
	sub_82DC13F0(ctx, base);
	// bl 0x82e9b5e8
	ctx.lr = 0x82DC0EE0;
	sub_82E9B5E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc0f1c
	if (cr6.eq) goto loc_82DC0F1C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82e9b700
	ctx.lr = 0x82DC0F10;
	sub_82E9B700(ctx, base);
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// addi r9,r10,4392
	ctx.r9.s64 = ctx.r10.s64 + 4392;
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
loc_82DC0F1C:
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

__attribute__((alias("__imp__sub_82DC0F34"))) PPC_WEAK_FUNC(sub_82DC0F34);
PPC_FUNC_IMPL(__imp__sub_82DC0F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0F38"))) PPC_WEAK_FUNC(sub_82DC0F38);
PPC_FUNC_IMPL(__imp__sub_82DC0F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC0F40;
	__savegprlr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC0F4C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc0f6c
	if (!cr6.eq) goto loc_82DC0F6C;
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC0F6C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82DC0F88;
	sub_831CDCF0(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DC0F90;
	sub_825832F0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc13f0
	ctx.lr = 0x82DC0F98;
	sub_82DC13F0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b75c90
	ctx.lr = 0x82DC0FA0;
	sub_82B75C90(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825832f0
	ctx.lr = 0x82DC0FAC;
	sub_825832F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x82dc3868
	ctx.lr = 0x82DC0FB8;
	sub_82DC3868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc0fe0
	if (!cr6.eq) goto loc_82DC0FE0;
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// bl 0x82b75b00
	ctx.lr = 0x82DC0FD8;
	sub_82B75B00(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC0FE0:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DC0FF0:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82dc0ff0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC0FF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x831ce980
	ctx.lr = 0x82DC100C;
	sub_831CE980(ctx, base);
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,116(r1)
	PPC_STORE_U64(ctx.r1.u32 + 116, ctx.r11.u64);
	// bl 0x831ce980
	ctx.lr = 0x82DC1024;
	sub_831CE980(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DC102C;
	sub_825832F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc13e0
	ctx.lr = 0x82DC1034;
	sub_82DC13E0(ctx, base);
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r9,r10,3704
	ctx.r9.s64 = ctx.r10.s64 + 3704;
	// stw r9,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r9.u32);
	// bl 0x82b75b00
	ctx.lr = 0x82DC1048;
	sub_82B75B00(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1050"))) PPC_WEAK_FUNC(sub_82DC1050);
PPC_FUNC_IMPL(__imp__sub_82DC1050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// addi r10,r11,3896
	ctx.r10.s64 = ctx.r11.s64 + 3896;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1060"))) PPC_WEAK_FUNC(sub_82DC1060);
PPC_FUNC_IMPL(__imp__sub_82DC1060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC1068;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC1074;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc10dc
	if (cr6.eq) goto loc_82DC10DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DC1094;
	sub_825832F0(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc5e68
	ctx.lr = 0x82DC10A0;
	sub_82DC5E68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc10dc
	if (cr6.eq) goto loc_82DC10DC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825832f0
	ctx.lr = 0x82DC10BC;
	sub_825832F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82dc1398
	ctx.lr = 0x82DC10C8;
	sub_82DC1398(ctx, base);
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// addi r10,r11,4176
	ctx.r10.s64 = ctx.r11.s64 + 4176;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC10DC:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC10F0"))) PPC_WEAK_FUNC(sub_82DC10F0);
PPC_FUNC_IMPL(__imp__sub_82DC10F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// ld r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82dc1108
	if (!cr6.gt) goto loc_82DC1108;
	// ld r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82DC1108:
	// ld r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// addi r9,r11,5000
	ctx.r9.s64 = ctx.r11.s64 + 5000;
	// addi r8,r10,4192
	ctx.r8.s64 = ctx.r10.s64 + 4192;
	// std r9,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r9.u64);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1124"))) PPC_WEAK_FUNC(sub_82DC1124);
PPC_FUNC_IMPL(__imp__sub_82DC1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1128"))) PPC_WEAK_FUNC(sub_82DC1128);
PPC_FUNC_IMPL(__imp__sub_82DC1128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC1130;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e9b4b0
	ctx.lr = 0x82DC113C;
	sub_82E9B4B0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82e9b758
	ctx.lr = 0x82DC114C;
	sub_82E9B758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc1214
	if (cr6.eq) goto loc_82DC1214;
	// bl 0x82d86078
	ctx.lr = 0x82DC115C;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc1208
	if (cr6.eq) goto loc_82DC1208;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x831cdcf0
	ctx.lr = 0x82DC1180;
	sub_831CDCF0(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DC1188;
	sub_825832F0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc13f0
	ctx.lr = 0x82DC1190;
	sub_82DC13F0(ctx, base);
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ble cr6,0x82dc11d8
	if (!cr6.gt) goto loc_82DC11D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x82db7120
	ctx.lr = 0x82DC11D0;
	sub_82DB7120(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// b 0x82dc11e4
	goto loc_82DC11E4;
loc_82DC11D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82DC11E4:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DC11EC;
	sub_825832F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc33a0
	ctx.lr = 0x82DC11F4;
	sub_82DC33A0(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// ld r31,96(r30)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// bl 0x825832f0
	ctx.lr = 0x82DC1200;
	sub_825832F0(ctx, base);
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
	// bl 0x82e9b688
	ctx.lr = 0x82DC1208;
	sub_82E9B688(ctx, base);
loc_82DC1208:
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
loc_82DC1214:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC121C"))) PPC_WEAK_FUNC(sub_82DC121C);
PPC_FUNC_IMPL(__imp__sub_82DC121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1220"))) PPC_WEAK_FUNC(sub_82DC1220);
PPC_FUNC_IMPL(__imp__sub_82DC1220) {
	PPC_FUNC_PROLOGUE();
	// ld r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// addi r9,r11,5000
	ctx.r9.s64 = ctx.r11.s64 + 5000;
	// addi r8,r10,4336
	ctx.r8.s64 = ctx.r10.s64 + 4336;
	// std r9,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r9.u64);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC123C"))) PPC_WEAK_FUNC(sub_82DC123C);
PPC_FUNC_IMPL(__imp__sub_82DC123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1240"))) PPC_WEAK_FUNC(sub_82DC1240);
PPC_FUNC_IMPL(__imp__sub_82DC1240) {
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
	// bl 0x83103328
	ctx.lr = 0x82DC1258;
	sub_83103328(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32036
	ctx.r9.s64 = -2099511296;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-22460
	ctx.r8.s64 = ctx.r10.s64 + -22460;
	// addi r7,r9,4640
	ctx.r7.s64 = ctx.r9.s64 + 4640;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82DC12A0"))) PPC_WEAK_FUNC(sub_82DC12A0);
PPC_FUNC_IMPL(__imp__sub_82DC12A0) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-32200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc12fc
	if (!cr6.eq) goto loc_82DC12FC;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC12E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc12f4
	if (cr6.eq) goto loc_82DC12F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82dc1240
	ctx.lr = 0x82DC12F0;
	sub_82DC1240(ctx, base);
	// b 0x82dc12f8
	goto loc_82DC12F8;
loc_82DC12F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC12F8:
	// stw r3,-32200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32200, ctx.r3.u32);
loc_82DC12FC:
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

__attribute__((alias("__imp__sub_82DC1314"))) PPC_WEAK_FUNC(sub_82DC1314);
PPC_FUNC_IMPL(__imp__sub_82DC1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1318"))) PPC_WEAK_FUNC(sub_82DC1318);
PPC_FUNC_IMPL(__imp__sub_82DC1318) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-32200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc136c
	if (!cr6.eq) goto loc_82DC136C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc1354
	if (!cr6.eq) goto loc_82DC1354;
	// bl 0x82e64050
	ctx.lr = 0x82DC1348;
	sub_82E64050(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc136c
	if (cr6.eq) goto loc_82DC136C;
loc_82DC1354:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22580
	ctx.r3.s64 = ctx.r11.s64 + -22580;
	// bl 0x82dc12a0
	ctx.lr = 0x82DC1360;
	sub_82DC12A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82DC136C;
	sub_83103100(ctx, base);
loc_82DC136C:
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

__attribute__((alias("__imp__sub_82DC1380"))) PPC_WEAK_FUNC(sub_82DC1380);
PPC_FUNC_IMPL(__imp__sub_82DC1380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r10,272(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1398"))) PPC_WEAK_FUNC(sub_82DC1398);
PPC_FUNC_IMPL(__imp__sub_82DC1398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC13A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831cdcf0
	ctx.lr = 0x82DC13D0;
	sub_831CDCF0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC13E0"))) PPC_WEAK_FUNC(sub_82DC13E0);
PPC_FUNC_IMPL(__imp__sub_82DC13E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// li r5,60
	ctx.r5.s64 = 60;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC13EC"))) PPC_WEAK_FUNC(sub_82DC13EC);
PPC_FUNC_IMPL(__imp__sub_82DC13EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC13F0"))) PPC_WEAK_FUNC(sub_82DC13F0);
PPC_FUNC_IMPL(__imp__sub_82DC13F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC141C"))) PPC_WEAK_FUNC(sub_82DC141C);
PPC_FUNC_IMPL(__imp__sub_82DC141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1420"))) PPC_WEAK_FUNC(sub_82DC1420);
PPC_FUNC_IMPL(__imp__sub_82DC1420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc143c
	if (cr6.eq) goto loc_82DC143C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DC143C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,305(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc1478
	if (!cr6.eq) goto loc_82DC1478;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,305(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc1470
	if (!cr6.eq) goto loc_82DC1470;
loc_82DC145C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,305(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc145c
	if (cr6.eq) goto loc_82DC145C;
loc_82DC1470:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DC1478:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc14b0
	if (!cr6.eq) goto loc_82DC14B0;
loc_82DC1488:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc14b0
	if (!cr6.eq) goto loc_82DC14B0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc1488
	if (cr6.eq) goto loc_82DC1488;
loc_82DC14B0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,305(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC14C8"))) PPC_WEAK_FUNC(sub_82DC14C8);
PPC_FUNC_IMPL(__imp__sub_82DC14C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc14e4
	if (cr6.eq) goto loc_82DC14E4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DC14E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc1520
	if (!cr6.eq) goto loc_82DC1520;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc1518
	if (!cr6.eq) goto loc_82DC1518;
loc_82DC1504:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc1504
	if (cr6.eq) goto loc_82DC1504;
loc_82DC1518:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DC1520:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1558
	if (!cr6.eq) goto loc_82DC1558;
loc_82DC1530:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc1558
	if (!cr6.eq) goto loc_82DC1558;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc1530
	if (cr6.eq) goto loc_82DC1530;
loc_82DC1558:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1570"))) PPC_WEAK_FUNC(sub_82DC1570);
PPC_FUNC_IMPL(__imp__sub_82DC1570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82dc1584
	if (!cr6.eq) goto loc_82DC1584;
loc_82DC157C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DC1584:
	// lwz r11,216(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc157c
	if (cr6.eq) goto loc_82DC157C;
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DC1598:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc15c8
	if (!cr6.eq) goto loc_82DC15C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// blt cr6,0x82dc1598
	if (cr6.lt) goto loc_82DC1598;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82DC15C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC15DC"))) PPC_WEAK_FUNC(sub_82DC15DC);
PPC_FUNC_IMPL(__imp__sub_82DC15DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC15E0"))) PPC_WEAK_FUNC(sub_82DC15E0);
PPC_FUNC_IMPL(__imp__sub_82DC15E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,305(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc162c
	if (!cr6.eq) goto loc_82DC162C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,305(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc1624
	if (!cr6.eq) goto loc_82DC1624;
loc_82DC1610:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,305(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc1610
	if (cr6.eq) goto loc_82DC1610;
loc_82DC1624:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DC162C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1664
	if (!cr6.eq) goto loc_82DC1664;
loc_82DC163C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc1664
	if (!cr6.eq) goto loc_82DC1664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc163c
	if (cr6.eq) goto loc_82DC163C;
loc_82DC1664:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC166C"))) PPC_WEAK_FUNC(sub_82DC166C);
PPC_FUNC_IMPL(__imp__sub_82DC166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1670"))) PPC_WEAK_FUNC(sub_82DC1670);
PPC_FUNC_IMPL(__imp__sub_82DC1670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,305(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc1690
	if (!cr6.eq) goto loc_82DC1690;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DC1690:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc16b8
	if (!cr6.eq) goto loc_82DC16B8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DC16B8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc16d8
	if (!cr6.eq) goto loc_82DC16D8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DC16D8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC16E8"))) PPC_WEAK_FUNC(sub_82DC16E8);
PPC_FUNC_IMPL(__imp__sub_82DC16E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,305(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc1708
	if (!cr6.eq) goto loc_82DC1708;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DC1708:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc1730
	if (!cr6.eq) goto loc_82DC1730;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DC1730:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc1750
	if (!cr6.eq) goto loc_82DC1750;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DC1750:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1760"))) PPC_WEAK_FUNC(sub_82DC1760);
PPC_FUNC_IMPL(__imp__sub_82DC1760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC1768;
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
	// beq cr6,0x82dc17f4
	if (cr6.eq) goto loc_82DC17F4;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
loc_82DC1780:
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8e68
	ctx.lr = 0x82DC178C;
	sub_82DA8E68(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r4,r31,9
	ctx.r4.s64 = ctx.r31.s64 + 9;
	// addi r3,r30,57
	ctx.r3.s64 = ctx.r30.s64 + 57;
	// li r5,36
	ctx.r5.s64 = 36;
	// stb r11,48(r30)
	PPC_STORE_U8(ctx.r30.u32 + 48, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r9,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x82DC17B4;
	sub_831CE980(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// stw r8,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r8.u32);
	// lbz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// stb r7,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r7.u8);
	// bl 0x82da8e68
	ctx.lr = 0x82DC17D0;
	sub_82DA8E68(ctx, base);
	// lbz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// stb r6,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r6.u8);
	// lbz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// stb r5,160(r30)
	PPC_STORE_U8(ctx.r30.u32 + 160, ctx.r5.u8);
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// bne cr6,0x82dc1780
	if (!cr6.eq) goto loc_82DC1780;
loc_82DC17F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1800"))) PPC_WEAK_FUNC(sub_82DC1800);
PPC_FUNC_IMPL(__imp__sub_82DC1800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC1808;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,65(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc1850
	if (!cr6.eq) goto loc_82DC1850;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82DC1824:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82dc1800
	ctx.lr = 0x82DC1830;
	sub_82DC1800(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC1844;
	sub_825952B8(ctx, base);
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc1824
	if (cr6.eq) goto loc_82DC1824;
loc_82DC1850:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1858"))) PPC_WEAK_FUNC(sub_82DC1858);
PPC_FUNC_IMPL(__imp__sub_82DC1858) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82dc1890
	if (!cr6.eq) goto loc_82DC1890;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82dc18e0
	goto loc_82DC18E0;
loc_82DC1890:
	// lis r11,390
	ctx.r11.s64 = 25559040;
	// ori r10,r11,6241
	ctx.r10.u64 = ctx.r11.u64 | 6241;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82dc18ac
	if (!cr6.gt) goto loc_82DC18AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82DC18AC;
	sub_831CC150(ctx, base);
loc_82DC18AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r30,r4,168
	ctx.r30.s64 = ctx.r4.s64 * 168;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC18C8;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82DC18E0:
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

__attribute__((alias("__imp__sub_82DC18F8"))) PPC_WEAK_FUNC(sub_82DC18F8);
PPC_FUNC_IMPL(__imp__sub_82DC18F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,312
	ctx.r4.s64 = 312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC192C;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,304(r7)
	PPC_STORE_U8(ctx.r7.u32 + 304, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,305(r6)
	PPC_STORE_U8(ctx.r6.u32 + 305, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DC1970"))) PPC_WEAK_FUNC(sub_82DC1970);
PPC_FUNC_IMPL(__imp__sub_82DC1970) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC19A4;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,64(r7)
	PPC_STORE_U8(ctx.r7.u32 + 64, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,65(r6)
	PPC_STORE_U8(ctx.r6.u32 + 65, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DC19E8"))) PPC_WEAK_FUNC(sub_82DC19E8);
PPC_FUNC_IMPL(__imp__sub_82DC19E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC1A1C;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,136(r7)
	PPC_STORE_U8(ctx.r7.u32 + 136, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,137(r6)
	PPC_STORE_U8(ctx.r6.u32 + 137, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DC1A60"))) PPC_WEAK_FUNC(sub_82DC1A60);
PPC_FUNC_IMPL(__imp__sub_82DC1A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DC1A68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1365
	ctx.r10.s64 = 89456640;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,21844
	ctx.r9.u64 = ctx.r10.u64 | 21844;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82dc1aac
	if (cr6.lt) goto loc_82DC1AAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DC1AA0;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82DC1AAC;
	sub_831CC150(ctx, base);
loc_82DC1AAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc1adc
	if (!cr6.eq) goto loc_82DC1ADC;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82dc1b1c
	goto loc_82DC1B1C;
loc_82DC1ADC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc1b04
	if (cr6.eq) goto loc_82DC1B04;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc1b1c
	if (!cr6.eq) goto loc_82DC1B1C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82dc1b1c
	goto loc_82DC1B1C;
loc_82DC1B04:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc1b1c
	if (!cr6.eq) goto loc_82DC1B1C;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82DC1B1C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1c40
	if (!cr6.eq) goto loc_82DC1C40;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DC1B38:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc1bc0
	if (!cr6.eq) goto loc_82DC1BC0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1b80
	if (!cr6.eq) goto loc_82DC1B80;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r29.u8);
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,64(r8)
	PPC_STORE_U8(ctx.r8.u32 + 64, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82dc1c30
	goto loc_82DC1C30;
loc_82DC1B80:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc1b98
	if (!cr6.eq) goto loc_82DC1B98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825692d0
	ctx.lr = 0x82DC1B98;
	sub_825692D0(ctx, base);
loc_82DC1B98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82569348
	ctx.lr = 0x82DC1BBC;
	sub_82569348(ctx, base);
	// b 0x82dc1c30
	goto loc_82DC1C30;
loc_82DC1BC0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1bf4
	if (!cr6.eq) goto loc_82DC1BF4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r29.u8);
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,64(r8)
	PPC_STORE_U8(ctx.r8.u32 + 64, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82dc1c30
	goto loc_82DC1C30;
loc_82DC1BF4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc1c0c
	if (!cr6.eq) goto loc_82DC1C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82569348
	ctx.lr = 0x82DC1C0C;
	sub_82569348(ctx, base);
loc_82DC1C0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x825692d0
	ctx.lr = 0x82DC1C30;
	sub_825692D0(ctx, base);
loc_82DC1C30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc1b38
	if (cr6.eq) goto loc_82DC1B38;
loc_82DC1C40:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1C5C"))) PPC_WEAK_FUNC(sub_82DC1C5C);
PPC_FUNC_IMPL(__imp__sub_82DC1C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1C60"))) PPC_WEAK_FUNC(sub_82DC1C60);
PPC_FUNC_IMPL(__imp__sub_82DC1C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DC1C68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,65(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 65);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc1c90
	if (cr6.eq) goto loc_82DC1C90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82DC1C90;
	sub_831CC188(ctx, base);
loc_82DC1C90:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83355ac8
	ctx.lr = 0x82DC1C9C;
	sub_83355AC8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82dc1cb8
	if (cr6.eq) goto loc_82DC1CB8;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82dc1cdc
	goto loc_82DC1CDC;
loc_82DC1CB8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,65(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc1cd0
	if (cr6.eq) goto loc_82DC1CD0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82dc1cdc
	goto loc_82DC1CDC;
loc_82DC1CD0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc1dc8
	if (!cr6.eq) goto loc_82DC1DC8;
loc_82DC1CDC:
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc1cf0
	if (!cr6.eq) goto loc_82DC1CF0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DC1CF0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc1d08
	if (!cr6.eq) goto loc_82DC1D08;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82dc1d20
	goto loc_82DC1D20;
loc_82DC1D08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc1d1c
	if (!cr6.eq) goto loc_82DC1D1C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82dc1d20
	goto loc_82DC1D20;
loc_82DC1D1C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82DC1D20:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc1d70
	if (!cr6.eq) goto loc_82DC1D70;
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc1d44
	if (cr6.eq) goto loc_82DC1D44;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82dc1d6c
	goto loc_82DC1D6C;
loc_82DC1D44:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc1d6c
	if (!cr6.eq) goto loc_82DC1D6C;
loc_82DC1D58:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc1d58
	if (cr6.eq) goto loc_82DC1D58;
loc_82DC1D6C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82DC1D70:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc1e5c
	if (!cr6.eq) goto loc_82DC1E5C;
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc1d98
	if (cr6.eq) goto loc_82DC1D98;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82dc1e5c
	goto loc_82DC1E5C;
loc_82DC1D98:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc1dc0
	if (!cr6.eq) goto loc_82DC1DC0;
loc_82DC1DAC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc1dac
	if (cr6.eq) goto loc_82DC1DAC;
loc_82DC1DC0:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82dc1e5c
	goto loc_82DC1E5C;
loc_82DC1DC8:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc1de8
	if (!cr6.eq) goto loc_82DC1DE8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82dc1e10
	goto loc_82DC1E10;
loc_82DC1DE8:
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc1dfc
	if (!cr6.eq) goto loc_82DC1DFC;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DC1DFC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82DC1E10:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc1e28
	if (!cr6.eq) goto loc_82DC1E28;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82dc1e44
	goto loc_82DC1E44;
loc_82DC1E28:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc1e40
	if (!cr6.eq) goto loc_82DC1E40;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82dc1e44
	goto loc_82DC1E44;
loc_82DC1E40:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82DC1E44:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,64(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 64);
	// lbz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 64);
	// stb r9,64(r25)
	PPC_STORE_U8(ctx.r25.u32 + 64, ctx.r9.u8);
	// stb r10,64(r26)
	PPC_STORE_U8(ctx.r26.u32 + 64, ctx.r10.u8);
loc_82DC1E5C:
	// lbz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dc1ff4
	if (!cr6.eq) goto loc_82DC1FF4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc1ff0
	if (cr6.eq) goto loc_82DC1FF0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DC1E80:
	// lbz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dc1ff0
	if (!cr6.eq) goto loc_82DC1FF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc1f38
	if (!cr6.eq) goto loc_82DC1F38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1ec0
	if (!cr6.eq) goto loc_82DC1EC0;
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825692d0
	ctx.lr = 0x82DC1EBC;
	sub_825692D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DC1EC0:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1f8c
	if (!cr6.eq) goto loc_82DC1F8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82dc1eec
	if (!cr6.eq) goto loc_82DC1EEC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82dc1f88
	if (cr6.eq) goto loc_82DC1F88;
loc_82DC1EEC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc1f14
	if (!cr6.eq) goto loc_82DC1F14;
	// stb r29,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82569348
	ctx.lr = 0x82DC1F10;
	sub_82569348(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DC1F14:
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, ctx.r29.u8);
	// bl 0x825692d0
	ctx.lr = 0x82DC1F34;
	sub_825692D0(ctx, base);
	// b 0x82dc1ff0
	goto loc_82DC1FF0;
loc_82DC1F38:
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1f5c
	if (!cr6.eq) goto loc_82DC1F5C;
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82569348
	ctx.lr = 0x82DC1F58;
	sub_82569348(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DC1F5C:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc1f8c
	if (!cr6.eq) goto loc_82DC1F8C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82dc1fa8
	if (!cr6.eq) goto loc_82DC1FA8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc1fa8
	if (!cr6.eq) goto loc_82DC1FA8;
loc_82DC1F88:
	// stb r30,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r30.u8);
loc_82DC1F8C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc1e80
	if (!cr6.eq) goto loc_82DC1E80;
	// b 0x82dc1ff0
	goto loc_82DC1FF0;
loc_82DC1FA8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc1fd0
	if (!cr6.eq) goto loc_82DC1FD0;
	// stb r29,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825692d0
	ctx.lr = 0x82DC1FCC;
	sub_825692D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DC1FD0:
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, ctx.r29.u8);
	// bl 0x82569348
	ctx.lr = 0x82DC1FF0;
	sub_82569348(ctx, base);
loc_82DC1FF0:
	// stb r29,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r29.u8);
loc_82DC1FF4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DC2008;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc201c
	if (cr6.eq) goto loc_82DC201C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82DC201C:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC202C"))) PPC_WEAK_FUNC(sub_82DC202C);
PPC_FUNC_IMPL(__imp__sub_82DC202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2030"))) PPC_WEAK_FUNC(sub_82DC2030);
PPC_FUNC_IMPL(__imp__sub_82DC2030) {
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
	// bl 0x82dc1800
	ctx.lr = 0x82DC2050;
	sub_82DC1800(ctx, base);
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

__attribute__((alias("__imp__sub_82DC2084"))) PPC_WEAK_FUNC(sub_82DC2084);
PPC_FUNC_IMPL(__imp__sub_82DC2084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2088"))) PPC_WEAK_FUNC(sub_82DC2088);
PPC_FUNC_IMPL(__imp__sub_82DC2088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC2090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc20dc
	if (!cr6.eq) goto loc_82DC20DC;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc20dc
	if (!cr6.eq) goto loc_82DC20DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82dc2030
	ctx.lr = 0x82DC20C4;
	sub_82DC2030(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC20DC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82dc210c
	if (cr6.eq) goto loc_82DC210C;
loc_82DC20E4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83355ac8
	ctx.lr = 0x82DC20F0;
	sub_83355AC8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1c60
	ctx.lr = 0x82DC2100;
	sub_82DC1C60(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82dc20e4
	if (!cr6.eq) goto loc_82DC20E4;
loc_82DC210C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC211C"))) PPC_WEAK_FUNC(sub_82DC211C);
PPC_FUNC_IMPL(__imp__sub_82DC211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2120"))) PPC_WEAK_FUNC(sub_82DC2120);
PPC_FUNC_IMPL(__imp__sub_82DC2120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC2128;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc21ac
	if (!cr6.eq) goto loc_82DC21AC;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82DC2160:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82dc217c
	if (cr6.eq) goto loc_82DC217C;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82dc2188
	goto loc_82DC2188;
loc_82DC217C:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82DC2188:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc219c
	if (cr6.eq) goto loc_82DC219C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82dc21a0
	goto loc_82DC21A0;
loc_82DC219C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82DC21A0:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc2160
	if (cr6.eq) goto loc_82DC2160;
loc_82DC21AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc220c
	if (cr6.eq) goto loc_82DC220C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc2204
	if (!cr6.eq) goto loc_82DC2204;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82dc1a60
	ctx.lr = 0x82DC21E8;
	sub_82DC1A60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2204:
	// bl 0x838bf4f8
	ctx.lr = 0x82DC2208;
	sub_838BF4F8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DC220C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc2250
	if (!cr6.lt) goto loc_82DC2250;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1a60
	ctx.lr = 0x82DC2234;
	sub_82DC1A60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2250:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DC2264;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC227C"))) PPC_WEAK_FUNC(sub_82DC227C);
PPC_FUNC_IMPL(__imp__sub_82DC227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2280"))) PPC_WEAK_FUNC(sub_82DC2280);
PPC_FUNC_IMPL(__imp__sub_82DC2280) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC22B4;
	sub_82595718(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// beq 0x82dc2300
	if (cr0.eq) goto loc_82DC2300;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_82DC2300:
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

__attribute__((alias("__imp__sub_82DC2318"))) PPC_WEAK_FUNC(sub_82DC2318);
PPC_FUNC_IMPL(__imp__sub_82DC2318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DC2320;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc23ec
	if (cr6.eq) goto loc_82DC23EC;
	// addi r31,r5,152
	ctx.r31.s64 = ctx.r5.s64 + 152;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82DC2340:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82dc23d4
	if (cr6.eq) goto loc_82DC23D4;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da8fd0
	ctx.lr = 0x82DC2354;
	sub_82DA8FD0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r4,r30,9
	ctx.r4.s64 = ctx.r30.s64 + 9;
	// addi r3,r31,-95
	ctx.r3.s64 = ctx.r31.s64 + -95;
	// li r5,36
	ctx.r5.s64 = 36;
	// stb r11,-104(r31)
	PPC_STORE_U8(ctx.r31.u32 + -104, ctx.r11.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,-100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -100, ctx.r10.u32);
	// lbz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r9,-96(r31)
	PPC_STORE_U8(ctx.r31.u32 + -96, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x82DC237C;
	sub_831CE980(ctx, base);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r31,-48
	ctx.r29.s64 = ctx.r31.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r8.u32);
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// stb r7,-52(r31)
	PPC_STORE_U8(ctx.r31.u32 + -52, ctx.r7.u8);
	// bl 0x82da8d18
	ctx.lr = 0x82DC2398;
	sub_82DA8D18(ctx, base);
	// lwz r6,-48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82DC23AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da87d0
	ctx.lr = 0x82DC23B4;
	sub_82DA87D0(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8e68
	ctx.lr = 0x82DC23C4;
	sub_82DA8E68(ctx, base);
	// lbz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// lbz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
loc_82DC23D4:
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// addi r28,r28,168
	ctx.r28.s64 = ctx.r28.s64 + 168;
	// addi r11,r30,-48
	ctx.r11.s64 = ctx.r30.s64 + -48;
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc2340
	if (!cr6.eq) goto loc_82DC2340;
loc_82DC23EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC23F8"))) PPC_WEAK_FUNC(sub_82DC23F8);
PPC_FUNC_IMPL(__imp__sub_82DC23F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC2400;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82dc245c
	if (cr6.eq) goto loc_82DC245C;
loc_82DC241C:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d04220
	ctx.lr = 0x82DC2434;
	sub_82D04220(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82db91a0
	ctx.lr = 0x82DC2444;
	sub_82DB91A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc15e0
	ctx.lr = 0x82DC244C;
	sub_82DC15E0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc241c
	if (!cr6.eq) goto loc_82DC241C;
loc_82DC245C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2464"))) PPC_WEAK_FUNC(sub_82DC2464);
PPC_FUNC_IMPL(__imp__sub_82DC2464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2468"))) PPC_WEAK_FUNC(sub_82DC2468);
PPC_FUNC_IMPL(__imp__sub_82DC2468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc24a8
	if (!cr6.eq) goto loc_82DC24A8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82DC2480:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dc2494
	if (!cr6.lt) goto loc_82DC2494;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82dc249c
	goto loc_82DC249C;
loc_82DC2494:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DC249C:
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc2480
	if (cr6.eq) goto loc_82DC2480;
loc_82DC24A8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc24d8
	if (cr6.eq) goto loc_82DC24D8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82dc24d8
	if (cr6.lt) goto loc_82DC24D8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DC24D8:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC24EC"))) PPC_WEAK_FUNC(sub_82DC24EC);
PPC_FUNC_IMPL(__imp__sub_82DC24EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC24F0"))) PPC_WEAK_FUNC(sub_82DC24F0);
PPC_FUNC_IMPL(__imp__sub_82DC24F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,305(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc2530
	if (!cr6.eq) goto loc_82DC2530;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82DC2508:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dc251c
	if (!cr6.lt) goto loc_82DC251C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82dc2524
	goto loc_82DC2524;
loc_82DC251C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DC2524:
	// lbz r8,305(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc2508
	if (cr6.eq) goto loc_82DC2508;
loc_82DC2530:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc2560
	if (cr6.eq) goto loc_82DC2560;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82dc2560
	if (cr6.lt) goto loc_82DC2560;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DC2560:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2574"))) PPC_WEAK_FUNC(sub_82DC2574);
PPC_FUNC_IMPL(__imp__sub_82DC2574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2578"))) PPC_WEAK_FUNC(sub_82DC2578);
PPC_FUNC_IMPL(__imp__sub_82DC2578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc25b8
	if (!cr6.eq) goto loc_82DC25B8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82DC2590:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dc25a4
	if (!cr6.lt) goto loc_82DC25A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82dc25ac
	goto loc_82DC25AC;
loc_82DC25A4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DC25AC:
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc2590
	if (cr6.eq) goto loc_82DC2590;
loc_82DC25B8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc25e8
	if (cr6.eq) goto loc_82DC25E8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82dc25e8
	if (cr6.lt) goto loc_82DC25E8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DC25E8:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC25FC"))) PPC_WEAK_FUNC(sub_82DC25FC);
PPC_FUNC_IMPL(__imp__sub_82DC25FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2600"))) PPC_WEAK_FUNC(sub_82DC2600);
PPC_FUNC_IMPL(__imp__sub_82DC2600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC2608;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,137(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 137);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc266c
	if (!cr6.eq) goto loc_82DC266C;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82DC2628:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82dc2600
	ctx.lr = 0x82DC2634;
	sub_82DC2600(ctx, base);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da8c38
	ctx.lr = 0x82DC2644;
	sub_82DA8C38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82DC264C;
	sub_82DA8C38(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DC265C;
	sub_825952B8(ctx, base);
	// lbz r11,137(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 137);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc2628
	if (cr6.eq) goto loc_82DC2628;
loc_82DC266C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2674"))) PPC_WEAK_FUNC(sub_82DC2674);
PPC_FUNC_IMPL(__imp__sub_82DC2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2678"))) PPC_WEAK_FUNC(sub_82DC2678);
PPC_FUNC_IMPL(__imp__sub_82DC2678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DC2680;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,137(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 137);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc26a8
	if (cr6.eq) goto loc_82DC26A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82DC26A8;
	sub_831CC188(ctx, base);
loc_82DC26A8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82db7808
	ctx.lr = 0x82DC26B4;
	sub_82DB7808(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82dc26d0
	if (cr6.eq) goto loc_82DC26D0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82dc26f4
	goto loc_82DC26F4;
loc_82DC26D0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,137(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc26e8
	if (cr6.eq) goto loc_82DC26E8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82dc26f4
	goto loc_82DC26F4;
loc_82DC26E8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc27e0
	if (!cr6.eq) goto loc_82DC27E0;
loc_82DC26F4:
	// lbz r11,137(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 137);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc2708
	if (!cr6.eq) goto loc_82DC2708;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DC2708:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc2720
	if (!cr6.eq) goto loc_82DC2720;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82dc2738
	goto loc_82DC2738;
loc_82DC2720:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc2734
	if (!cr6.eq) goto loc_82DC2734;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82dc2738
	goto loc_82DC2738;
loc_82DC2734:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82DC2738:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc2788
	if (!cr6.eq) goto loc_82DC2788;
	// lbz r11,137(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 137);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc275c
	if (cr6.eq) goto loc_82DC275C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82dc2784
	goto loc_82DC2784;
loc_82DC275C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,137(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc2784
	if (!cr6.eq) goto loc_82DC2784;
loc_82DC2770:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,137(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc2770
	if (cr6.eq) goto loc_82DC2770;
loc_82DC2784:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82DC2788:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc2874
	if (!cr6.eq) goto loc_82DC2874;
	// lbz r11,137(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 137);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc27b0
	if (cr6.eq) goto loc_82DC27B0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82dc2874
	goto loc_82DC2874;
loc_82DC27B0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,137(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc27d8
	if (!cr6.eq) goto loc_82DC27D8;
loc_82DC27C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,137(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc27c4
	if (cr6.eq) goto loc_82DC27C4;
loc_82DC27D8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82dc2874
	goto loc_82DC2874;
loc_82DC27E0:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc2800
	if (!cr6.eq) goto loc_82DC2800;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82dc2828
	goto loc_82DC2828;
loc_82DC2800:
	// lbz r11,137(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 137);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc2814
	if (!cr6.eq) goto loc_82DC2814;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DC2814:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82DC2828:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc2840
	if (!cr6.eq) goto loc_82DC2840;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82dc285c
	goto loc_82DC285C;
loc_82DC2840:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc2858
	if (!cr6.eq) goto loc_82DC2858;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82dc285c
	goto loc_82DC285C;
loc_82DC2858:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82DC285C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,136(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 136);
	// lbz r10,136(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 136);
	// stb r9,136(r25)
	PPC_STORE_U8(ctx.r25.u32 + 136, ctx.r9.u8);
	// stb r10,136(r26)
	PPC_STORE_U8(ctx.r26.u32 + 136, ctx.r10.u8);
loc_82DC2874:
	// lbz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dc2a0c
	if (!cr6.eq) goto loc_82DC2A0C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc2a08
	if (cr6.eq) goto loc_82DC2A08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DC2898:
	// lbz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dc2a08
	if (!cr6.eq) goto loc_82DC2A08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc2950
	if (!cr6.eq) goto loc_82DC2950;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc28d8
	if (!cr6.eq) goto loc_82DC28D8;
	// stb r29,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db7898
	ctx.lr = 0x82DC28D4;
	sub_82DB7898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DC28D8:
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc29a4
	if (!cr6.eq) goto loc_82DC29A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 136);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82dc2904
	if (!cr6.eq) goto loc_82DC2904;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 136);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82dc29a0
	if (cr6.eq) goto loc_82DC29A0;
loc_82DC2904:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 136);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc292c
	if (!cr6.eq) goto loc_82DC292C;
	// stb r29,136(r10)
	PPC_STORE_U8(ctx.r10.u32 + 136, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db7910
	ctx.lr = 0x82DC2928;
	sub_82DB7910(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DC292C:
	// lbz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r10.u8);
	// stb r29,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,136(r9)
	PPC_STORE_U8(ctx.r9.u32 + 136, ctx.r29.u8);
	// bl 0x82db7898
	ctx.lr = 0x82DC294C;
	sub_82DB7898(ctx, base);
	// b 0x82dc2a08
	goto loc_82DC2A08;
loc_82DC2950:
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc2974
	if (!cr6.eq) goto loc_82DC2974;
	// stb r29,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db7910
	ctx.lr = 0x82DC2970;
	sub_82DB7910(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DC2974:
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc29a4
	if (!cr6.eq) goto loc_82DC29A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 136);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82dc29c0
	if (!cr6.eq) goto loc_82DC29C0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 136);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc29c0
	if (!cr6.eq) goto loc_82DC29C0;
loc_82DC29A0:
	// stb r30,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r30.u8);
loc_82DC29A4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc2898
	if (!cr6.eq) goto loc_82DC2898;
	// b 0x82dc2a08
	goto loc_82DC2A08;
loc_82DC29C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 136);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc29e8
	if (!cr6.eq) goto loc_82DC29E8;
	// stb r29,136(r10)
	PPC_STORE_U8(ctx.r10.u32 + 136, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db7898
	ctx.lr = 0x82DC29E4;
	sub_82DB7898(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DC29E8:
	// lbz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r10.u8);
	// stb r29,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,136(r9)
	PPC_STORE_U8(ctx.r9.u32 + 136, ctx.r29.u8);
	// bl 0x82db7910
	ctx.lr = 0x82DC2A08;
	sub_82DB7910(ctx, base);
loc_82DC2A08:
	// stb r29,136(r28)
	PPC_STORE_U8(ctx.r28.u32 + 136, ctx.r29.u8);
loc_82DC2A0C:
	// addi r31,r26,24
	ctx.r31.s64 = ctx.r26.s64 + 24;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82da8c38
	ctx.lr = 0x82DC2A18;
	sub_82DA8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82DC2A20;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DC2A34;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc2a48
	if (cr6.eq) goto loc_82DC2A48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82DC2A48:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2A58"))) PPC_WEAK_FUNC(sub_82DC2A58);
PPC_FUNC_IMPL(__imp__sub_82DC2A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC2A60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc2a9c
	if (!cr6.eq) goto loc_82DC2A9C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x835e7b48
	ctx.lr = 0x82DC2A90;
	sub_835E7B48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2A9C:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc2ae0
	if (!cr6.eq) goto loc_82DC2AE0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc2bdc
	if (!cr6.lt) goto loc_82DC2BDC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e7b48
	ctx.lr = 0x82DC2AD4;
	sub_835E7B48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2AE0:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82dc2b1c
	if (!cr6.eq) goto loc_82DC2B1C;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82dc2bdc
	if (!cr6.lt) goto loc_82DC2BDC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e7b48
	ctx.lr = 0x82DC2B10;
	sub_835E7B48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2B1C:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82dc2b80
	if (!cr6.gt) goto loc_82DC2B80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc14c8
	ctx.lr = 0x82DC2B38;
	sub_82DC14C8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82dc2b7c
	if (!cr6.lt) goto loc_82DC2B7C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc2bc8
	if (!cr6.eq) goto loc_82DC2BC8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DC2B68:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x835e7b48
	ctx.lr = 0x82DC2B70;
	sub_835E7B48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2B7C:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82DC2B80:
	// bge cr6,0x82dc2bdc
	if (!cr6.lt) goto loc_82DC2BDC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387beb0
	ctx.lr = 0x82DC2B90;
	sub_8387BEB0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82dc2ba8
	if (cr6.eq) goto loc_82DC2BA8;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82dc2bdc
	if (!cr6.lt) goto loc_82DC2BDC;
loc_82DC2BA8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc2b68
	if (cr6.eq) goto loc_82DC2B68;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DC2BC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x835e7b48
	ctx.lr = 0x82DC2BD0;
	sub_835E7B48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2BDC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835e7da0
	ctx.lr = 0x82DC2BF0;
	sub_835E7DA0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2C08"))) PPC_WEAK_FUNC(sub_82DC2C08);
PPC_FUNC_IMPL(__imp__sub_82DC2C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC2C10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc2c4c
	if (!cr6.eq) goto loc_82DC2C4C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dc1a60
	ctx.lr = 0x82DC2C40;
	sub_82DC1A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2C4C:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc2c90
	if (!cr6.eq) goto loc_82DC2C90;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc2d8c
	if (!cr6.lt) goto loc_82DC2D8C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc1a60
	ctx.lr = 0x82DC2C84;
	sub_82DC1A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2C90:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82dc2ccc
	if (!cr6.eq) goto loc_82DC2CCC;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82dc2d8c
	if (!cr6.lt) goto loc_82DC2D8C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc1a60
	ctx.lr = 0x82DC2CC0;
	sub_82DC1A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2CCC:
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82dc2d30
	if (!cr6.gt) goto loc_82DC2D30;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838bf4f8
	ctx.lr = 0x82DC2CE8;
	sub_838BF4F8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82dc2d2c
	if (!cr6.lt) goto loc_82DC2D2C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc2d78
	if (!cr6.eq) goto loc_82DC2D78;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DC2D18:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dc1a60
	ctx.lr = 0x82DC2D20;
	sub_82DC1A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2D2C:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82DC2D30:
	// bge cr6,0x82dc2d8c
	if (!cr6.lt) goto loc_82DC2D8C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x82DC2D40;
	sub_83355AC8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82dc2d58
	if (cr6.eq) goto loc_82DC2D58;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82dc2d8c
	if (!cr6.lt) goto loc_82DC2D8C;
loc_82DC2D58:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc2d18
	if (cr6.eq) goto loc_82DC2D18;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DC2D78:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82dc1a60
	ctx.lr = 0x82DC2D80;
	sub_82DC1A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC2D8C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2120
	ctx.lr = 0x82DC2DA0;
	sub_82DC2120(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2DB8"))) PPC_WEAK_FUNC(sub_82DC2DB8);
PPC_FUNC_IMPL(__imp__sub_82DC2DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC2DEC;
	sub_82595718(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r10.u8);
	// stb r10,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r10.u8);
	// beq 0x82dc2e3c
	if (cr0.eq) goto loc_82DC2E3C;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82DC2E30:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82dc2e30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC2E30;
loc_82DC2E3C:
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

__attribute__((alias("__imp__sub_82DC2E54"))) PPC_WEAK_FUNC(sub_82DC2E54);
PPC_FUNC_IMPL(__imp__sub_82DC2E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2E58"))) PPC_WEAK_FUNC(sub_82DC2E58);
PPC_FUNC_IMPL(__imp__sub_82DC2E58) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc24f0
	ctx.lr = 0x82DC2E80;
	sub_82DC24F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82DC2EA8"))) PPC_WEAK_FUNC(sub_82DC2EA8);
PPC_FUNC_IMPL(__imp__sub_82DC2EA8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2578
	ctx.lr = 0x82DC2ED8;
	sub_82DC2578(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc2f0c
	if (cr6.eq) goto loc_82DC2F0C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DC2EF8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82dc2ef8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC2EF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82dc2f10
	goto loc_82DC2F10;
loc_82DC2F0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC2F10:
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

__attribute__((alias("__imp__sub_82DC2F28"))) PPC_WEAK_FUNC(sub_82DC2F28);
PPC_FUNC_IMPL(__imp__sub_82DC2F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82dc2ea8
	ctx.lr = 0x82DC2F5C;
	sub_82DC2EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2F80"))) PPC_WEAK_FUNC(sub_82DC2F80);
PPC_FUNC_IMPL(__imp__sub_82DC2F80) {
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
	// bl 0x82dc2600
	ctx.lr = 0x82DC2FA0;
	sub_82DC2600(ctx, base);
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

__attribute__((alias("__imp__sub_82DC2FD4"))) PPC_WEAK_FUNC(sub_82DC2FD4);
PPC_FUNC_IMPL(__imp__sub_82DC2FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2FD8"))) PPC_WEAK_FUNC(sub_82DC2FD8);
PPC_FUNC_IMPL(__imp__sub_82DC2FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC2FE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc302c
	if (!cr6.eq) goto loc_82DC302C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc302c
	if (!cr6.eq) goto loc_82DC302C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82dc2f80
	ctx.lr = 0x82DC3014;
	sub_82DC2F80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC302C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82dc305c
	if (cr6.eq) goto loc_82DC305C;
loc_82DC3034:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82db7808
	ctx.lr = 0x82DC3040;
	sub_82DB7808(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2678
	ctx.lr = 0x82DC3050;
	sub_82DC2678(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82dc3034
	if (!cr6.eq) goto loc_82DC3034;
loc_82DC305C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC306C"))) PPC_WEAK_FUNC(sub_82DC306C);
PPC_FUNC_IMPL(__imp__sub_82DC306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3070"))) PPC_WEAK_FUNC(sub_82DC3070);
PPC_FUNC_IMPL(__imp__sub_82DC3070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC3078;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,29(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc30e8
	if (!cr6.eq) goto loc_82DC30E8;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bl 0x82dc2280
	ctx.lr = 0x82DC30A0;
	sub_82DC2280(ctx, base);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lbz r10,29(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc30c0
	if (cr6.eq) goto loc_82DC30C0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82DC30C0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc3070
	ctx.lr = 0x82DC30D0;
	sub_82DC3070(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc3070
	ctx.lr = 0x82DC30E4;
	sub_82DC3070(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82DC30E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC30F4"))) PPC_WEAK_FUNC(sub_82DC30F4);
PPC_FUNC_IMPL(__imp__sub_82DC30F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC30F8"))) PPC_WEAK_FUNC(sub_82DC30F8);
PPC_FUNC_IMPL(__imp__sub_82DC30F8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc3150
	if (!cr6.eq) goto loc_82DC3150;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DC3128:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc313c
	if (!cr6.lt) goto loc_82DC313C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82dc3144
	goto loc_82DC3144;
loc_82DC313C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DC3144:
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc3128
	if (cr6.eq) goto loc_82DC3128;
loc_82DC3150:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc316c
	if (cr6.eq) goto loc_82DC316C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc31bc
	if (!cr6.lt) goto loc_82DC31BC;
loc_82DC316C:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82dc2280
	ctx.lr = 0x82DC319C;
	sub_82DC2280(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2a58
	ctx.lr = 0x82DC31B0;
	sub_82DC2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82dc31c0
	goto loc_82DC31C0;
loc_82DC31BC:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
loc_82DC31C0:
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

__attribute__((alias("__imp__sub_82DC31D8"))) PPC_WEAK_FUNC(sub_82DC31D8);
PPC_FUNC_IMPL(__imp__sub_82DC31D8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc3230
	if (!cr6.eq) goto loc_82DC3230;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DC3208:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc321c
	if (!cr6.lt) goto loc_82DC321C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82dc3224
	goto loc_82DC3224;
loc_82DC321C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DC3224:
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc3208
	if (cr6.eq) goto loc_82DC3208;
loc_82DC3230:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc324c
	if (cr6.eq) goto loc_82DC324C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc32c0
	if (!cr6.lt) goto loc_82DC32C0;
loc_82DC324C:
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82DC3288:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82dc3288
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC3288;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc2db8
	ctx.lr = 0x82DC32A0;
	sub_82DC2DB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2c08
	ctx.lr = 0x82DC32B4;
	sub_82DC2C08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82dc32c4
	goto loc_82DC32C4;
loc_82DC32C0:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
loc_82DC32C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_82DC32DC"))) PPC_WEAK_FUNC(sub_82DC32DC);
PPC_FUNC_IMPL(__imp__sub_82DC32DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC32E0"))) PPC_WEAK_FUNC(sub_82DC32E0);
PPC_FUNC_IMPL(__imp__sub_82DC32E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC32E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82dc3070
	ctx.lr = 0x82DC3308;
	sub_82DC3070(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,29(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc3388
	if (!cr6.eq) goto loc_82DC3388;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc334c
	if (!cr6.eq) goto loc_82DC334C;
loc_82DC3338:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc3338
	if (cr6.eq) goto loc_82DC3338;
loc_82DC334C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc337c
	if (!cr6.eq) goto loc_82DC337C;
loc_82DC3368:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc3368
	if (cr6.eq) goto loc_82DC3368;
loc_82DC337C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC3388:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC339C"))) PPC_WEAK_FUNC(sub_82DC339C);
PPC_FUNC_IMPL(__imp__sub_82DC339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33A0"))) PPC_WEAK_FUNC(sub_82DC33A0);
PPC_FUNC_IMPL(__imp__sub_82DC33A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC33A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2578
	ctx.lr = 0x82DC33C8;
	sub_82DC2578(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc33e4
	if (cr6.eq) goto loc_82DC33E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1c60
	ctx.lr = 0x82DC33E4;
	sub_82DC1C60(ctx, base);
loc_82DC33E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc31d8
	ctx.lr = 0x82DC33F0;
	sub_82DC31D8(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DC3400:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82dc3400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC3400;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3414"))) PPC_WEAK_FUNC(sub_82DC3414);
PPC_FUNC_IMPL(__imp__sub_82DC3414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3418"))) PPC_WEAK_FUNC(sub_82DC3418);
PPC_FUNC_IMPL(__imp__sub_82DC3418) {
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
	// lwz r5,128(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc3464
	if (cr6.eq) goto loc_82DC3464;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dc1760
	ctx.lr = 0x82DC344C;
	sub_82DC1760(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b76760
	ctx.lr = 0x82DC3460;
	sub_82B76760(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DC3464:
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

__attribute__((alias("__imp__sub_82DC347C"))) PPC_WEAK_FUNC(sub_82DC347C);
PPC_FUNC_IMPL(__imp__sub_82DC347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3480"))) PPC_WEAK_FUNC(sub_82DC3480);
PPC_FUNC_IMPL(__imp__sub_82DC3480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC3488;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc35d0
	if (cr6.eq) goto loc_82DC35D0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,168
	ctx.r29.s64 = 168;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82dc34c8
	if (!cr0.eq) goto loc_82DC34C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db8688
	ctx.lr = 0x82DC34BC;
	sub_82DB8688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC34C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r9,r9,r29
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82dc352c
	if (cr6.gt) goto loc_82DC352C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82dc1760
	ctx.lr = 0x82DC34F0;
	sub_82DC1760(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b76760
	ctx.lr = 0x82DC3500;
	sub_82B76760(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// mulli r10,r7,168
	ctx.r10.s64 = ctx.r7.s64 * 168;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC352C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82dc3564
	if (cr6.gt) goto loc_82DC3564;
	// mulli r10,r9,168
	ctx.r10.s64 = ctx.r9.s64 * 168;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82dc1760
	ctx.lr = 0x82DC3558;
	sub_82DC1760(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82dc35bc
	goto loc_82DC35BC;
loc_82DC3564:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc3590
	if (cr6.eq) goto loc_82DC3590;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82b76760
	ctx.lr = 0x82DC357C;
	sub_82B76760(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC3590;
	sub_825952B8(ctx, base);
loc_82DC3590:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r29
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82dc1858
	ctx.lr = 0x82DC35A8;
	sub_82DC1858(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc35d0
	if (cr6.eq) goto loc_82DC35D0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82DC35BC:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82dc2318
	ctx.lr = 0x82DC35CC;
	sub_82DC2318(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82DC35D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC35DC"))) PPC_WEAK_FUNC(sub_82DC35DC);
PPC_FUNC_IMPL(__imp__sub_82DC35DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC35E0"))) PPC_WEAK_FUNC(sub_82DC35E0);
PPC_FUNC_IMPL(__imp__sub_82DC35E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC35E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82DC3614;
	sub_8259CB28(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC3630;
	sub_8259CB28(ctx, base);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lbz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// stb r8,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r8.u8);
	// lbz r7,89(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// stb r7,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r7.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DC3684;
	sub_8259CB28(ctx, base);
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82DC3694;
	sub_831CE980(ctx, base);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r28,r30,208
	ctx.r28.s64 = ctx.r30.s64 + 208;
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r5,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// lbz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 188);
	// stb r4,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r4.u8);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lbz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 196);
	// stb r11,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r11.u8);
	// lbz r10,197(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 197);
	// stb r10,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r10.u8);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// lwz r8,204(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// beq cr6,0x82dc3704
	if (cr6.eq) goto loc_82DC3704;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82da6ea8
	ctx.lr = 0x82DC36F8;
	sub_82DA6EA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc32e0
	ctx.lr = 0x82DC3704;
	sub_82DC32E0(ctx, base);
loc_82DC3704:
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82da8e68
	ctx.lr = 0x82DC3710;
	sub_82DA8E68(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3724"))) PPC_WEAK_FUNC(sub_82DC3724);
PPC_FUNC_IMPL(__imp__sub_82DC3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3728"))) PPC_WEAK_FUNC(sub_82DC3728);
PPC_FUNC_IMPL(__imp__sub_82DC3728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC3730;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82DC3770;
	sub_8259CB28(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DC3798;
	sub_8259CB28(ctx, base);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lbz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// stb r8,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r8.u8);
	// lbz r7,89(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// stb r7,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r7.u8);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stb r29,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DC37F8;
	sub_8259CB28(ctx, base);
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82DC3808;
	sub_831CE980(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r30,176
	ctx.r10.s64 = ctx.r30.s64 + 176;
	// addi r9,r31,176
	ctx.r9.s64 = ctx.r31.s64 + 176;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82DC3818:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82dc3818
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC3818;
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da6a60
	ctx.lr = 0x82DC3838;
	sub_82DA6A60(ctx, base);
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc32e0
	ctx.lr = 0x82DC3844;
	sub_82DC32E0(ctx, base);
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82da8fd0
	ctx.lr = 0x82DC3850;
	sub_82DA8FD0(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3864"))) PPC_WEAK_FUNC(sub_82DC3864);
PPC_FUNC_IMPL(__imp__sub_82DC3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3868"))) PPC_WEAK_FUNC(sub_82DC3868);
PPC_FUNC_IMPL(__imp__sub_82DC3868) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc24f0
	ctx.lr = 0x82DC3898;
	sub_82DC24F0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc38bc
	if (cr6.eq) goto loc_82DC38BC;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC38B4;
	sub_82DC35E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82dc38c0
	goto loc_82DC38C0;
loc_82DC38BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC38C0:
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

__attribute__((alias("__imp__sub_82DC38D8"))) PPC_WEAK_FUNC(sub_82DC38D8);
PPC_FUNC_IMPL(__imp__sub_82DC38D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC38E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82b75c90
	ctx.lr = 0x82DC38FC;
	sub_82B75C90(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc24f0
	ctx.lr = 0x82DC3910;
	sub_82DC24F0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc3934
	if (cr6.eq) goto loc_82DC3934;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC392C;
	sub_82DC35E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82dc3938
	goto loc_82DC3938;
loc_82DC3934:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DC3938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc39a0
	if (cr6.eq) goto loc_82DC39A0;
	// addi r5,r1,452
	ctx.r5.s64 = ctx.r1.s64 + 452;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2468
	ctx.lr = 0x82DC3954;
	sub_82DC2468(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc39a0
	if (cr6.eq) goto loc_82DC39A0;
	// addi r4,r1,452
	ctx.r4.s64 = ctx.r1.s64 + 452;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82dc30f8
	ctx.lr = 0x82DC3970;
	sub_82DC30F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bl 0x82b75b00
	ctx.lr = 0x82DC3994;
	sub_82B75B00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC39A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b75b00
	ctx.lr = 0x82DC39A8;
	sub_82B75B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC39B4"))) PPC_WEAK_FUNC(sub_82DC39B4);
PPC_FUNC_IMPL(__imp__sub_82DC39B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC39B8"))) PPC_WEAK_FUNC(sub_82DC39B8);
PPC_FUNC_IMPL(__imp__sub_82DC39B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC39C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82b75c90
	ctx.lr = 0x82DC39D8;
	sub_82B75C90(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dc24f0
	ctx.lr = 0x82DC39EC;
	sub_82DC24F0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc3a10
	if (cr6.eq) goto loc_82DC3A10;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC3A08;
	sub_82DC35E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82dc3a14
	goto loc_82DC3A14;
loc_82DC3A10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DC3A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc3a54
	if (cr6.eq) goto loc_82DC3A54;
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82dc3a54
	if (cr6.eq) goto loc_82DC3A54;
loc_82DC3A34:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc3a68
	if (!cr6.eq) goto loc_82DC3A68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387beb0
	ctx.lr = 0x82DC3A48;
	sub_8387BEB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82dc3a34
	if (!cr6.eq) goto loc_82DC3A34;
loc_82DC3A54:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b75b00
	ctx.lr = 0x82DC3A5C;
	sub_82B75B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC3A68:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bl 0x82b75b00
	ctx.lr = 0x82DC3A88;
	sub_82B75B00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3A94"))) PPC_WEAK_FUNC(sub_82DC3A94);
PPC_FUNC_IMPL(__imp__sub_82DC3A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3A98"))) PPC_WEAK_FUNC(sub_82DC3A98);
PPC_FUNC_IMPL(__imp__sub_82DC3A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC3AA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82dc3bdc
	if (cr6.eq) goto loc_82DC3BDC;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DC3AC8:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DC3AD8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82dc3ad8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC3AD8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b75c90
	ctx.lr = 0x82DC3AEC;
	sub_82B75C90(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82dc24f0
	ctx.lr = 0x82DC3B04;
	sub_82DC24F0(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc3b28
	if (cr6.eq) goto loc_82DC3B28;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC3B20;
	sub_82DC35E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82dc3b2c
	goto loc_82DC3B2C;
loc_82DC3B28:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82DC3B2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc3b4c
	if (!cr6.eq) goto loc_82DC3B4C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x82DC3B44;
	sub_83355AC8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// b 0x82dc3bb4
	goto loc_82DC3BB4;
loc_82DC3B4C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x82dc39b8
	ctx.lr = 0x82DC3B68;
	sub_82DC39B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc3ba4
	if (cr6.eq) goto loc_82DC3BA4;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc3b8c
	if (cr6.eq) goto loc_82DC3B8C;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
loc_82DC3B8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x82DC3B94;
	sub_83355AC8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b75b00
	ctx.lr = 0x82DC3B9C;
	sub_82B75B00(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82dc3bd0
	goto loc_82DC3BD0;
loc_82DC3BA4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355ac8
	ctx.lr = 0x82DC3BB0;
	sub_83355AC8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82DC3BB4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// bl 0x82dc1c60
	ctx.lr = 0x82DC3BC0;
	sub_82DC1C60(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82b75b00
	ctx.lr = 0x82DC3BD0;
	sub_82B75B00(ctx, base);
loc_82DC3BD0:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc3ac8
	if (!cr6.eq) goto loc_82DC3AC8;
loc_82DC3BDC:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3BE4"))) PPC_WEAK_FUNC(sub_82DC3BE4);
PPC_FUNC_IMPL(__imp__sub_82DC3BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3BE8"))) PPC_WEAK_FUNC(sub_82DC3BE8);
PPC_FUNC_IMPL(__imp__sub_82DC3BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r9,168
	ctx.r9.s64 = 168;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82dc3c30
	if (cr0.eq) goto loc_82DC3C30;
	// bl 0x82dc3480
	ctx.lr = 0x82DC3C1C;
	sub_82DC3480(ctx, base);
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
loc_82DC3C30:
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

__attribute__((alias("__imp__sub_82DC3C44"))) PPC_WEAK_FUNC(sub_82DC3C44);
PPC_FUNC_IMPL(__imp__sub_82DC3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C48"))) PPC_WEAK_FUNC(sub_82DC3C48);
PPC_FUNC_IMPL(__imp__sub_82DC3C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DC3C50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,227
	ctx.r10.s64 = 14876672;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,36407
	ctx.r9.u64 = ctx.r10.u64 | 36407;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82dc3c9c
	if (cr6.lt) goto loc_82DC3C9C;
	// addi r3,r7,24
	ctx.r3.s64 = ctx.r7.s64 + 24;
	// bl 0x82b75b00
	ctx.lr = 0x82DC3C7C;
	sub_82B75B00(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DC3C90;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82DC3C9C;
	sub_831CC150(ctx, base);
loc_82DC3C9C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc3ccc
	if (!cr6.eq) goto loc_82DC3CCC;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82dc3d0c
	goto loc_82DC3D0C;
loc_82DC3CCC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc3cf4
	if (cr6.eq) goto loc_82DC3CF4;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc3d0c
	if (!cr6.eq) goto loc_82DC3D0C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82dc3d0c
	goto loc_82DC3D0C;
loc_82DC3CF4:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc3d0c
	if (!cr6.eq) goto loc_82DC3D0C;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82DC3D0C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc3e30
	if (!cr6.eq) goto loc_82DC3E30;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DC3D28:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc3db0
	if (!cr6.eq) goto loc_82DC3DB0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc3d70
	if (!cr6.eq) goto loc_82DC3D70;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,304(r10)
	PPC_STORE_U8(ctx.r10.u32 + 304, ctx.r29.u8);
	// stb r29,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,304(r8)
	PPC_STORE_U8(ctx.r8.u32 + 304, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82dc3e20
	goto loc_82DC3E20;
loc_82DC3D70:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc3d88
	if (!cr6.eq) goto loc_82DC3D88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82dc1670
	ctx.lr = 0x82DC3D88;
	sub_82DC1670(ctx, base);
loc_82DC3D88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,304(r9)
	PPC_STORE_U8(ctx.r9.u32 + 304, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82dc16e8
	ctx.lr = 0x82DC3DAC;
	sub_82DC16E8(ctx, base);
	// b 0x82dc3e20
	goto loc_82DC3E20;
loc_82DC3DB0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc3de4
	if (!cr6.eq) goto loc_82DC3DE4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,304(r10)
	PPC_STORE_U8(ctx.r10.u32 + 304, ctx.r29.u8);
	// stb r29,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,304(r8)
	PPC_STORE_U8(ctx.r8.u32 + 304, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82dc3e20
	goto loc_82DC3E20;
loc_82DC3DE4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc3dfc
	if (!cr6.eq) goto loc_82DC3DFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82dc16e8
	ctx.lr = 0x82DC3DFC;
	sub_82DC16E8(ctx, base);
loc_82DC3DFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,304(r9)
	PPC_STORE_U8(ctx.r9.u32 + 304, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82dc1670
	ctx.lr = 0x82DC3E20;
	sub_82DC1670(ctx, base);
loc_82DC3E20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc3d28
	if (cr6.eq) goto loc_82DC3D28;
loc_82DC3E30:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,304(r10)
	PPC_STORE_U8(ctx.r10.u32 + 304, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3E4C"))) PPC_WEAK_FUNC(sub_82DC3E4C);
PPC_FUNC_IMPL(__imp__sub_82DC3E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E50"))) PPC_WEAK_FUNC(sub_82DC3E50);
PPC_FUNC_IMPL(__imp__sub_82DC3E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC3E58;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc3fb0
	if (cr6.eq) goto loc_82DC3FB0;
	// addi r30,r5,188
	ctx.r30.s64 = ctx.r5.s64 + 188;
	// addi r31,r3,188
	ctx.r31.s64 = ctx.r3.s64 + 188;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82DC3E78:
	// lwz r11,-188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -188);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// addi r3,r30,-184
	ctx.r3.s64 = ctx.r30.s64 + -184;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC3E94;
	sub_8259CB28(ctx, base);
	// lwz r10,-156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -156);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r30,-152
	ctx.r3.s64 = ctx.r30.s64 + -152;
	// stw r10,-156(r30)
	PPC_STORE_U32(ctx.r30.u32 + -156, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC3EB0;
	sub_8259CB28(ctx, base);
	// lwz r9,-124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r30,-96
	ctx.r3.s64 = ctx.r30.s64 + -96;
	// stw r9,-124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -124, ctx.r9.u32);
	// lwz r8,-120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -120);
	// stw r8,-120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -120, ctx.r8.u32);
	// lwz r7,-116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// stw r7,-116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -116, ctx.r7.u32);
	// lbz r11,-112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -112);
	// stb r11,-112(r30)
	PPC_STORE_U8(ctx.r30.u32 + -112, ctx.r11.u8);
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// stw r10,-108(r30)
	PPC_STORE_U32(ctx.r30.u32 + -108, ctx.r10.u32);
	// lwz r9,-104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// stw r9,-104(r30)
	PPC_STORE_U32(ctx.r30.u32 + -104, ctx.r9.u32);
	// lbz r8,-100(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -100);
	// stb r8,-100(r30)
	PPC_STORE_U8(ctx.r30.u32 + -100, ctx.r8.u8);
	// lbz r7,-99(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -99);
	// stb r7,-99(r30)
	PPC_STORE_U8(ctx.r30.u32 + -99, ctx.r7.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DC3F04;
	sub_8259CB28(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r30,-68
	ctx.r3.s64 = ctx.r30.s64 + -68;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82DC3F14;
	sub_831CE980(ctx, base);
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// stw r6,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r6.u32);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r5,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r5.u32);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r4,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r4.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r10,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r10.u8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// beq cr6,0x82dc3f84
	if (cr6.eq) goto loc_82DC3F84;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82da6ea8
	ctx.lr = 0x82DC3F78;
	sub_82DA6EA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc32e0
	ctx.lr = 0x82DC3F84;
	sub_82DC32E0(ctx, base);
loc_82DC3F84:
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82da8e68
	ctx.lr = 0x82DC3F90;
	sub_82DA8E68(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r31,r31,280
	ctx.r31.s64 = ctx.r31.s64 + 280;
	// addi r28,r28,280
	ctx.r28.s64 = ctx.r28.s64 + 280;
	// addi r10,r31,-188
	ctx.r10.s64 = ctx.r31.s64 + -188;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// addi r30,r30,280
	ctx.r30.s64 = ctx.r30.s64 + 280;
	// bne cr6,0x82dc3e78
	if (!cr6.eq) goto loc_82DC3E78;
loc_82DC3FB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3FBC"))) PPC_WEAK_FUNC(sub_82DC3FBC);
PPC_FUNC_IMPL(__imp__sub_82DC3FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3FC0"))) PPC_WEAK_FUNC(sub_82DC3FC0);
PPC_FUNC_IMPL(__imp__sub_82DC3FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DC3FC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	// bge cr6,0x82dc415c
	if (!cr6.lt) goto loc_82DC415C;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82DC3FF8:
	// mulli r11,r27,280
	ctx.r11.s64 = ctx.r27.s64 * 280;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82DC4010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc415c
	if (cr6.eq) goto loc_82DC415C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r29,280
	ctx.r11.s64 = ctx.r29.s64 * 280;
	// stwx r10,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82DC4040;
	sub_8259CB28(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC405C;
	sub_8259CB28(ctx, base);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r7,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r7.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// stb r10,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r10.u8);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r9.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r8,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r8.u32);
	// lbz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// stb r7,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r7.u8);
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// stb r11,89(r30)
	PPC_STORE_U8(ctx.r30.u32 + 89, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DC40B0;
	sub_8259CB28(ctx, base);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82DC40C0;
	sub_831CE980(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r28,r31,208
	ctx.r28.s64 = ctx.r31.s64 + 208;
	// addi r29,r30,208
	ctx.r29.s64 = ctx.r30.s64 + 208;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stw r10,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r10.u32);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r9,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r9.u32);
	// lbz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// stb r8,188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 188, ctx.r8.u8);
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r7,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r7.u32);
	// lbz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// stb r6,196(r30)
	PPC_STORE_U8(ctx.r30.u32 + 196, ctx.r6.u8);
	// lbz r5,197(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// stb r5,197(r30)
	PPC_STORE_U8(ctx.r30.u32 + 197, ctx.r5.u8);
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// stw r4,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r4.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r3,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r3.u32);
	// beq cr6,0x82dc4130
	if (cr6.eq) goto loc_82DC4130;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82da6ea8
	ctx.lr = 0x82DC4124;
	sub_82DA6EA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc32e0
	ctx.lr = 0x82DC4130;
	sub_82DC32E0(ctx, base);
loc_82DC4130:
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x82da8e68
	ctx.lr = 0x82DC413C;
	sub_82DA8E68(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r23,r27
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r27.s32, xer);
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	// stw r9,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r9.u32);
	// blt cr6,0x82dc3ff8
	if (cr6.lt) goto loc_82DC3FF8;
loc_82DC415C:
	// mulli r11,r29,280
	ctx.r11.s64 = ctx.r29.s64 * 280;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC416C;
	sub_82DC35E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4174"))) PPC_WEAK_FUNC(sub_82DC4174);
PPC_FUNC_IMPL(__imp__sub_82DC4174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4178"))) PPC_WEAK_FUNC(sub_82DC4178);
PPC_FUNC_IMPL(__imp__sub_82DC4178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC4180;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc42d4
	if (cr6.eq) goto loc_82DC42D4;
	// addi r30,r5,188
	ctx.r30.s64 = ctx.r5.s64 + 188;
	// addi r31,r4,188
	ctx.r31.s64 = ctx.r4.s64 + 188;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82DC41A0:
	// addi r31,r31,-280
	ctx.r31.s64 = ctx.r31.s64 + -280;
	// addi r30,r30,-280
	ctx.r30.s64 = ctx.r30.s64 + -280;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// lwz r11,-188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -188);
	// addi r3,r30,-184
	ctx.r3.s64 = ctx.r30.s64 + -184;
	// stwu r11,-280(r26)
	ea = -280 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r26.u32 = ea;
	// bl 0x8259cb28
	ctx.lr = 0x82DC41C4;
	sub_8259CB28(ctx, base);
	// lwz r10,-156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -156);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r30,-152
	ctx.r3.s64 = ctx.r30.s64 + -152;
	// stw r10,-156(r30)
	PPC_STORE_U32(ctx.r30.u32 + -156, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC41E0;
	sub_8259CB28(ctx, base);
	// lwz r9,-124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r30,-96
	ctx.r3.s64 = ctx.r30.s64 + -96;
	// stw r9,-124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -124, ctx.r9.u32);
	// lwz r8,-120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -120);
	// stw r8,-120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -120, ctx.r8.u32);
	// lwz r7,-116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// stw r7,-116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -116, ctx.r7.u32);
	// lbz r11,-112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -112);
	// stb r11,-112(r30)
	PPC_STORE_U8(ctx.r30.u32 + -112, ctx.r11.u8);
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// stw r10,-108(r30)
	PPC_STORE_U32(ctx.r30.u32 + -108, ctx.r10.u32);
	// lwz r9,-104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// stw r9,-104(r30)
	PPC_STORE_U32(ctx.r30.u32 + -104, ctx.r9.u32);
	// lbz r8,-100(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -100);
	// stb r8,-100(r30)
	PPC_STORE_U8(ctx.r30.u32 + -100, ctx.r8.u8);
	// lbz r7,-99(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -99);
	// stb r7,-99(r30)
	PPC_STORE_U8(ctx.r30.u32 + -99, ctx.r7.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DC4234;
	sub_8259CB28(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r30,-68
	ctx.r3.s64 = ctx.r30.s64 + -68;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82DC4244;
	sub_831CE980(ctx, base);
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stw r6,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r6.u32);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r5,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r5.u32);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r4,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r4.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r10,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r10.u8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// beq cr6,0x82dc42b4
	if (cr6.eq) goto loc_82DC42B4;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82da6ea8
	ctx.lr = 0x82DC42A8;
	sub_82DA6EA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc32e0
	ctx.lr = 0x82DC42B4;
	sub_82DC32E0(ctx, base);
loc_82DC42B4:
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82da8e68
	ctx.lr = 0x82DC42C0;
	sub_82DA8E68(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r31,-188
	ctx.r11.s64 = ctx.r31.s64 + -188;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82dc41a0
	if (!cr6.eq) goto loc_82DC41A0;
loc_82DC42D4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC42E0"))) PPC_WEAK_FUNC(sub_82DC42E0);
PPC_FUNC_IMPL(__imp__sub_82DC42E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC42E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,305(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 305);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc4340
	if (!cr6.eq) goto loc_82DC4340;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82DC4308:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82dc42e0
	ctx.lr = 0x82DC4314;
	sub_82DC42E0(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b75b00
	ctx.lr = 0x82DC4320;
	sub_82B75B00(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DC4330;
	sub_825952B8(ctx, base);
	// lbz r11,305(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 305);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc4308
	if (cr6.eq) goto loc_82DC4308;
loc_82DC4340:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4348"))) PPC_WEAK_FUNC(sub_82DC4348);
PPC_FUNC_IMPL(__imp__sub_82DC4348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DC4350;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,305(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 305);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc4378
	if (cr6.eq) goto loc_82DC4378;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82DC4378;
	sub_831CC188(ctx, base);
loc_82DC4378:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82dc15e0
	ctx.lr = 0x82DC4384;
	sub_82DC15E0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82dc43a0
	if (cr6.eq) goto loc_82DC43A0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82dc43c4
	goto loc_82DC43C4;
loc_82DC43A0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,305(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc43b8
	if (cr6.eq) goto loc_82DC43B8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82dc43c4
	goto loc_82DC43C4;
loc_82DC43B8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc44b0
	if (!cr6.eq) goto loc_82DC44B0;
loc_82DC43C4:
	// lbz r11,305(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 305);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc43d8
	if (!cr6.eq) goto loc_82DC43D8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DC43D8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc43f0
	if (!cr6.eq) goto loc_82DC43F0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82dc4408
	goto loc_82DC4408;
loc_82DC43F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc4404
	if (!cr6.eq) goto loc_82DC4404;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82dc4408
	goto loc_82DC4408;
loc_82DC4404:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82DC4408:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc4458
	if (!cr6.eq) goto loc_82DC4458;
	// lbz r11,305(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 305);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc442c
	if (cr6.eq) goto loc_82DC442C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82dc4454
	goto loc_82DC4454;
loc_82DC442C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,305(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc4454
	if (!cr6.eq) goto loc_82DC4454;
loc_82DC4440:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,305(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc4440
	if (cr6.eq) goto loc_82DC4440;
loc_82DC4454:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82DC4458:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc4544
	if (!cr6.eq) goto loc_82DC4544;
	// lbz r11,305(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 305);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc4480
	if (cr6.eq) goto loc_82DC4480;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82dc4544
	goto loc_82DC4544;
loc_82DC4480:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,305(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82dc44a8
	if (!cr6.eq) goto loc_82DC44A8;
loc_82DC4494:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,305(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82dc4494
	if (cr6.eq) goto loc_82DC4494;
loc_82DC44A8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82dc4544
	goto loc_82DC4544;
loc_82DC44B0:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc44d0
	if (!cr6.eq) goto loc_82DC44D0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82dc44f8
	goto loc_82DC44F8;
loc_82DC44D0:
	// lbz r11,305(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 305);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc44e4
	if (!cr6.eq) goto loc_82DC44E4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DC44E4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82DC44F8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc4510
	if (!cr6.eq) goto loc_82DC4510;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82dc452c
	goto loc_82DC452C;
loc_82DC4510:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82dc4528
	if (!cr6.eq) goto loc_82DC4528;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82dc452c
	goto loc_82DC452C;
loc_82DC4528:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82DC452C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,304(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 304);
	// lbz r10,304(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 304);
	// stb r9,304(r25)
	PPC_STORE_U8(ctx.r25.u32 + 304, ctx.r9.u8);
	// stb r10,304(r26)
	PPC_STORE_U8(ctx.r26.u32 + 304, ctx.r10.u8);
loc_82DC4544:
	// lbz r11,304(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 304);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dc46dc
	if (!cr6.eq) goto loc_82DC46DC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dc46d8
	if (cr6.eq) goto loc_82DC46D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DC4568:
	// lbz r11,304(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 304);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dc46d8
	if (!cr6.eq) goto loc_82DC46D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc4620
	if (!cr6.eq) goto loc_82DC4620;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc45a8
	if (!cr6.eq) goto loc_82DC45A8;
	// stb r29,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dc1670
	ctx.lr = 0x82DC45A4;
	sub_82DC1670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DC45A8:
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc4674
	if (!cr6.eq) goto loc_82DC4674;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 304);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82dc45d4
	if (!cr6.eq) goto loc_82DC45D4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 304);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82dc4670
	if (cr6.eq) goto loc_82DC4670;
loc_82DC45D4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 304);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc45fc
	if (!cr6.eq) goto loc_82DC45FC;
	// stb r29,304(r10)
	PPC_STORE_U8(ctx.r10.u32 + 304, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dc16e8
	ctx.lr = 0x82DC45F8;
	sub_82DC16E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DC45FC:
	// lbz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// stb r29,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,304(r9)
	PPC_STORE_U8(ctx.r9.u32 + 304, ctx.r29.u8);
	// bl 0x82dc1670
	ctx.lr = 0x82DC461C;
	sub_82DC1670(ctx, base);
	// b 0x82dc46d8
	goto loc_82DC46D8;
loc_82DC4620:
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc4644
	if (!cr6.eq) goto loc_82DC4644;
	// stb r29,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dc16e8
	ctx.lr = 0x82DC4640;
	sub_82DC16E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DC4644:
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc4674
	if (!cr6.eq) goto loc_82DC4674;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 304);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82dc4690
	if (!cr6.eq) goto loc_82DC4690;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 304);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc4690
	if (!cr6.eq) goto loc_82DC4690;
loc_82DC4670:
	// stb r30,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r30.u8);
loc_82DC4674:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc4568
	if (!cr6.eq) goto loc_82DC4568;
	// b 0x82dc46d8
	goto loc_82DC46D8;
loc_82DC4690:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 304);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82dc46b8
	if (!cr6.eq) goto loc_82DC46B8;
	// stb r29,304(r10)
	PPC_STORE_U8(ctx.r10.u32 + 304, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dc1670
	ctx.lr = 0x82DC46B4;
	sub_82DC1670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DC46B8:
	// lbz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// stb r29,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,304(r9)
	PPC_STORE_U8(ctx.r9.u32 + 304, ctx.r29.u8);
	// bl 0x82dc16e8
	ctx.lr = 0x82DC46D8;
	sub_82DC16E8(ctx, base);
loc_82DC46D8:
	// stb r29,304(r28)
	PPC_STORE_U8(ctx.r28.u32 + 304, ctx.r29.u8);
loc_82DC46DC:
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82b75b00
	ctx.lr = 0x82DC46E4;
	sub_82B75B00(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DC46F8;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc470c
	if (cr6.eq) goto loc_82DC470C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82DC470C:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC471C"))) PPC_WEAK_FUNC(sub_82DC471C);
PPC_FUNC_IMPL(__imp__sub_82DC471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4720"))) PPC_WEAK_FUNC(sub_82DC4720);
PPC_FUNC_IMPL(__imp__sub_82DC4720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC4728;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc47ac
	if (!cr6.eq) goto loc_82DC47AC;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82DC4760:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82dc477c
	if (cr6.eq) goto loc_82DC477C;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82dc4788
	goto loc_82DC4788;
loc_82DC477C:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82DC4788:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc479c
	if (cr6.eq) goto loc_82DC479C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82dc47a0
	goto loc_82DC47A0;
loc_82DC479C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82DC47A0:
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc4760
	if (cr6.eq) goto loc_82DC4760;
loc_82DC47AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc480c
	if (cr6.eq) goto loc_82DC480C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc4804
	if (!cr6.eq) goto loc_82DC4804;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82dc3c48
	ctx.lr = 0x82DC47E8;
	sub_82DC3C48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC4804:
	// bl 0x82dc1420
	ctx.lr = 0x82DC4808;
	sub_82DC1420(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DC480C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc4850
	if (!cr6.lt) goto loc_82DC4850;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc3c48
	ctx.lr = 0x82DC4834;
	sub_82DC3C48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC4850:
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82b75b00
	ctx.lr = 0x82DC4858;
	sub_82B75B00(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DC486C;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4884"))) PPC_WEAK_FUNC(sub_82DC4884);
PPC_FUNC_IMPL(__imp__sub_82DC4884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4888"))) PPC_WEAK_FUNC(sub_82DC4888);
PPC_FUNC_IMPL(__imp__sub_82DC4888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC4890;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82DC48B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc48ec
	if (cr6.eq) goto loc_82DC48EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82dc3728
	ctx.lr = 0x82DC48CC;
	sub_82DC3728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC48D8;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC48E4;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82b75b00
	ctx.lr = 0x82DC48EC;
	sub_82B75B00(ctx, base);
loc_82DC48EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82DC48FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc4934
	if (cr6.eq) goto loc_82DC4934;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc3728
	ctx.lr = 0x82DC4914;
	sub_82DC3728(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC4920;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC492C;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b75b00
	ctx.lr = 0x82DC4934;
	sub_82B75B00(ctx, base);
loc_82DC4934:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82DC4944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc497c
	if (cr6.eq) goto loc_82DC497C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82dc3728
	ctx.lr = 0x82DC495C;
	sub_82DC3728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC4968;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC4974;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82b75b00
	ctx.lr = 0x82DC497C;
	sub_82B75B00(ctx, base);
loc_82DC497C:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4984"))) PPC_WEAK_FUNC(sub_82DC4984);
PPC_FUNC_IMPL(__imp__sub_82DC4984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4988"))) PPC_WEAK_FUNC(sub_82DC4988);
PPC_FUNC_IMPL(__imp__sub_82DC4988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC4990;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82dc4a0c
	if (!cr6.lt) goto loc_82DC4A0C;
loc_82DC49BC:
	// mulli r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 * 280;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-280
	ctx.r4.s64 = ctx.r3.s64 + -280;
	// bctrl 
	ctx.lr = 0x82DC49D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc49e0
	if (cr6.eq) goto loc_82DC49E0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82DC49E0:
	// mulli r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 * 280;
	// mulli r11,r29,280
	ctx.r11.s64 = ctx.r29.s64 * 280;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC49F4;
	sub_82DC35E0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82dc49bc
	if (cr6.lt) goto loc_82DC49BC;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82DC4A0C:
	// bne cr6,0x82dc4a2c
	if (!cr6.eq) goto loc_82DC4A2C;
	// mulli r11,r28,280
	ctx.r11.s64 = ctx.r28.s64 * 280;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,280
	ctx.r11.s64 = ctx.r29.s64 * 280;
	// addi r4,r10,-280
	ctx.r4.s64 = ctx.r10.s64 + -280;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC4A28;
	sub_82DC35E0(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82DC4A2C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc3fc0
	ctx.lr = 0x82DC4A44;
	sub_82DC3FC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4A4C"))) PPC_WEAK_FUNC(sub_82DC4A4C);
PPC_FUNC_IMPL(__imp__sub_82DC4A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4A50"))) PPC_WEAK_FUNC(sub_82DC4A50);
PPC_FUNC_IMPL(__imp__sub_82DC4A50) {
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
	// bl 0x82dc42e0
	ctx.lr = 0x82DC4A70;
	sub_82DC42E0(ctx, base);
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

__attribute__((alias("__imp__sub_82DC4AA4"))) PPC_WEAK_FUNC(sub_82DC4AA4);
PPC_FUNC_IMPL(__imp__sub_82DC4AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4AA8"))) PPC_WEAK_FUNC(sub_82DC4AA8);
PPC_FUNC_IMPL(__imp__sub_82DC4AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC4AB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc4afc
	if (!cr6.eq) goto loc_82DC4AFC;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc4afc
	if (!cr6.eq) goto loc_82DC4AFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82dc4a50
	ctx.lr = 0x82DC4AE4;
	sub_82DC4A50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC4AFC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82dc4b2c
	if (cr6.eq) goto loc_82DC4B2C;
loc_82DC4B04:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82dc15e0
	ctx.lr = 0x82DC4B10;
	sub_82DC15E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc4348
	ctx.lr = 0x82DC4B20;
	sub_82DC4348(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82dc4b04
	if (!cr6.eq) goto loc_82DC4B04;
loc_82DC4B2C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4B3C"))) PPC_WEAK_FUNC(sub_82DC4B3C);
PPC_FUNC_IMPL(__imp__sub_82DC4B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4B40"))) PPC_WEAK_FUNC(sub_82DC4B40);
PPC_FUNC_IMPL(__imp__sub_82DC4B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC4B48;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc4b84
	if (!cr6.eq) goto loc_82DC4B84;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dc3c48
	ctx.lr = 0x82DC4B78;
	sub_82DC3C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC4B84:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc4bc8
	if (!cr6.eq) goto loc_82DC4BC8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc4cc4
	if (!cr6.lt) goto loc_82DC4CC4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc3c48
	ctx.lr = 0x82DC4BBC;
	sub_82DC3C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC4BC8:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82dc4c04
	if (!cr6.eq) goto loc_82DC4C04;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82dc4cc4
	if (!cr6.lt) goto loc_82DC4CC4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc3c48
	ctx.lr = 0x82DC4BF8;
	sub_82DC3C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC4C04:
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82dc4c68
	if (!cr6.gt) goto loc_82DC4C68;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1420
	ctx.lr = 0x82DC4C20;
	sub_82DC1420(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82dc4c64
	if (!cr6.lt) goto loc_82DC4C64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc4cb0
	if (!cr6.eq) goto loc_82DC4CB0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DC4C50:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dc3c48
	ctx.lr = 0x82DC4C58;
	sub_82DC3C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC4C64:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82DC4C68:
	// bge cr6,0x82dc4cc4
	if (!cr6.lt) goto loc_82DC4CC4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc15e0
	ctx.lr = 0x82DC4C78;
	sub_82DC15E0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82dc4c90
	if (cr6.eq) goto loc_82DC4C90;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82dc4cc4
	if (!cr6.lt) goto loc_82DC4CC4;
loc_82DC4C90:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc4c50
	if (cr6.eq) goto loc_82DC4C50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DC4CB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82dc3c48
	ctx.lr = 0x82DC4CB8;
	sub_82DC3C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC4CC4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc4720
	ctx.lr = 0x82DC4CD8;
	sub_82DC4720(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4CF0"))) PPC_WEAK_FUNC(sub_82DC4CF0);
PPC_FUNC_IMPL(__imp__sub_82DC4CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DC4CF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,280
	ctx.r10.s64 = 280;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82dc4d88
	if (!cr6.gt) goto loc_82DC4D88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,280
	ctx.r29.s64 = ctx.r11.s64 * 280;
	// mulli r26,r11,560
	ctx.r26.s64 = ctx.r11.s64 * 560;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82dc4888
	ctx.lr = 0x82DC4D40;
	sub_82DC4888(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82dc4888
	ctx.lr = 0x82DC4D54;
	sub_82DC4888(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82dc4888
	ctx.lr = 0x82DC4D6C;
	sub_82DC4888(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dc4888
	ctx.lr = 0x82DC4D80;
	sub_82DC4888(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DC4D88:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dc4888
	ctx.lr = 0x82DC4D94;
	sub_82DC4888(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4D9C"))) PPC_WEAK_FUNC(sub_82DC4D9C);
PPC_FUNC_IMPL(__imp__sub_82DC4D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4DA0"))) PPC_WEAK_FUNC(sub_82DC4DA0);
PPC_FUNC_IMPL(__imp__sub_82DC4DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC4DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,280
	ctx.r10.s64 = 280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x82dc4e10
	if (!cr0.gt) goto loc_82DC4E10;
	// mulli r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 * 280;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82DC4DD4:
	// addi r30,r30,-280
	ctx.r30.s64 = ctx.r30.s64 + -280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82dc3728
	ctx.lr = 0x82DC4DE8;
	sub_82DC3728(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc4988
	ctx.lr = 0x82DC4E00;
	sub_82DC4988(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b75b00
	ctx.lr = 0x82DC4E08;
	sub_82B75B00(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x82dc4dd4
	if (cr6.gt) goto loc_82DC4DD4;
loc_82DC4E10:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4E18"))) PPC_WEAK_FUNC(sub_82DC4E18);
PPC_FUNC_IMPL(__imp__sub_82DC4E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DC4E20;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc4f08
	if (cr6.eq) goto loc_82DC4F08;
	// addi r30,r3,280
	ctx.r30.s64 = ctx.r3.s64 + 280;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc4f08
	if (cr6.eq) goto loc_82DC4F08;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r30,-280
	ctx.r28.s64 = ctx.r30.s64 + -280;
loc_82DC4E4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82dc3728
	ctx.lr = 0x82DC4E5C;
	sub_82DC3728(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82DC4E6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc4e94
	if (cr6.eq) goto loc_82DC4E94;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r28,560
	ctx.r5.s64 = ctx.r28.s64 + 560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dc4178
	ctx.lr = 0x82DC4E8C;
	sub_82DC4178(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82dc4ee8
	goto loc_82DC4EE8;
loc_82DC4E94:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82DC4EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc4ee4
	if (cr6.eq) goto loc_82DC4EE4;
loc_82DC4EB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC4EC0;
	sub_82DC35E0(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,-280
	ctx.r31.s64 = ctx.r31.s64 + -280;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82DC4ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc4eb4
	if (!cr6.eq) goto loc_82DC4EB4;
loc_82DC4EE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82DC4EE8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC4EF0;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b75b00
	ctx.lr = 0x82DC4EF8;
	sub_82B75B00(ctx, base);
	// addi r30,r30,280
	ctx.r30.s64 = ctx.r30.s64 + 280;
	// addi r28,r28,280
	ctx.r28.s64 = ctx.r28.s64 + 280;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82dc4e4c
	if (!cr6.eq) goto loc_82DC4E4C;
loc_82DC4F08:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4F10"))) PPC_WEAK_FUNC(sub_82DC4F10);
PPC_FUNC_IMPL(__imp__sub_82DC4F10) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82dc42e0
	ctx.lr = 0x82DC4F44;
	sub_82DC42E0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82DC4F7C;
	sub_831CDCF0(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82dc1800
	ctx.lr = 0x82DC4F8C;
	sub_82DC1800(ctx, base);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82DC4FC0"))) PPC_WEAK_FUNC(sub_82DC4FC0);
PPC_FUNC_IMPL(__imp__sub_82DC4FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC4FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dc4f10
	ctx.lr = 0x82DC4FD4;
	sub_82DC4F10(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82dc2600
	ctx.lr = 0x82DC4FE4;
	sub_82DC2600(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc503c
	if (cr6.eq) goto loc_82DC503C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dc1760
	ctx.lr = 0x82DC5024;
	sub_82DC1760(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82b76760
	ctx.lr = 0x82DC5038;
	sub_82B76760(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82DC503C:
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stb r29,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r29.u8);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// blt cr6,0x82dc506c
	if (cr6.lt) goto loc_82DC506C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC506C:
	// stb r29,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC5078"))) PPC_WEAK_FUNC(sub_82DC5078);
PPC_FUNC_IMPL(__imp__sub_82DC5078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DC5080;
	__savegprlr_22(ctx, base);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,280
	ctx.r10.s64 = 280;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r7,280
	ctx.r11.s64 = ctx.r7.s64 * 280;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-280
	ctx.r5.s64 = ctx.r5.s64 + -280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82dc4cf0
	ctx.lr = 0x82DC50C0;
	sub_82DC4CF0(ctx, base);
	// addi r26,r31,280
	ctx.r26.s64 = ctx.r31.s64 + 280;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x82dc5114
	if (!cr6.lt) goto loc_82DC5114;
loc_82DC50CC:
	// addi r30,r31,-280
	ctx.r30.s64 = ctx.r31.s64 + -280;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82DC50E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc5114
	if (!cr6.eq) goto loc_82DC5114;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82DC50FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc5114
	if (!cr6.eq) goto loc_82DC5114;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// blt cr6,0x82dc50cc
	if (cr6.lt) goto loc_82DC50CC;
loc_82DC5114:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// bge cr6,0x82dc5160
	if (!cr6.lt) goto loc_82DC5160;
loc_82DC511C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82DC512C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc5160
	if (!cr6.eq) goto loc_82DC5160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82DC5148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc5160
	if (!cr6.eq) goto loc_82DC5160;
	// addi r26,r26,280
	ctx.r26.s64 = ctx.r26.s64 + 280;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82dc511c
	if (cr6.lt) goto loc_82DC511C;
loc_82DC5160:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82DC5168:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82dc51e8
	if (!cr6.lt) goto loc_82DC51E8;
loc_82DC5170:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82DC5180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc51dc
	if (!cr6.eq) goto loc_82DC51DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82DC519C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc51e8
	if (!cr6.eq) goto loc_82DC51E8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r26,r26,280
	ctx.r26.s64 = ctx.r26.s64 + 280;
	// bl 0x82dc3728
	ctx.lr = 0x82DC51BC;
	sub_82DC3728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC51C8;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC51D4;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82b75b00
	ctx.lr = 0x82DC51DC;
	sub_82B75B00(ctx, base);
loc_82DC51DC:
	// addi r29,r29,280
	ctx.r29.s64 = ctx.r29.s64 + 280;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82dc5170
	if (cr6.lt) goto loc_82DC5170;
loc_82DC51E8:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// ble cr6,0x82dc5274
	if (!cr6.gt) goto loc_82DC5274;
	// addi r30,r28,-280
	ctx.r30.s64 = ctx.r28.s64 + -280;
loc_82DC51F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82DC5204;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc525c
	if (!cr6.eq) goto loc_82DC525C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82DC5220;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc5270
	if (!cr6.eq) goto loc_82DC5270;
	// addi r31,r31,-280
	ctx.r31.s64 = ctx.r31.s64 + -280;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dc3728
	ctx.lr = 0x82DC523C;
	sub_82DC3728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC5248;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,1520
	ctx.r4.s64 = ctx.r1.s64 + 1520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC5254;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82b75b00
	ctx.lr = 0x82DC525C;
	sub_82B75B00(ctx, base);
loc_82DC525C:
	// addi r11,r28,-280
	ctx.r11.s64 = ctx.r28.s64 + -280;
	// addi r30,r30,-280
	ctx.r30.s64 = ctx.r30.s64 + -280;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dc51f4
	if (cr6.lt) goto loc_82DC51F4;
loc_82DC5270:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
loc_82DC5274:
	// bne cr6,0x82dc52f8
	if (!cr6.eq) goto loc_82DC52F8;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x82dc53b0
	if (cr6.eq) goto loc_82DC53B0;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x82dc52b4
	if (cr6.eq) goto loc_82DC52B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5294;
	sub_82DC3728(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC52A0;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC52AC;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82b75b00
	ctx.lr = 0x82DC52B4;
	sub_82B75B00(ctx, base);
loc_82DC52B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// addi r26,r26,280
	ctx.r26.s64 = ctx.r26.s64 + 280;
	// addi r31,r31,280
	ctx.r31.s64 = ctx.r31.s64 + 280;
	// addi r29,r29,280
	ctx.r29.s64 = ctx.r29.s64 + 280;
	// bl 0x82dc3728
	ctx.lr = 0x82DC52D4;
	sub_82DC3728(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC52E0;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC52EC;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b75b00
	ctx.lr = 0x82DC52F4;
	sub_82B75B00(ctx, base);
	// b 0x82dc5168
	goto loc_82DC5168;
loc_82DC52F8:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bne cr6,0x82dc5374
	if (!cr6.eq) goto loc_82DC5374;
	// addi r11,r28,-280
	ctx.r11.s64 = ctx.r28.s64 + -280;
	// addi r31,r31,-280
	ctx.r31.s64 = ctx.r31.s64 + -280;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82dc5340
	if (cr6.eq) goto loc_82DC5340;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5320;
	sub_82DC3728(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC532C;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC5338;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82b75b00
	ctx.lr = 0x82DC5340;
	sub_82B75B00(ctx, base);
loc_82DC5340:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// addi r26,r26,-280
	ctx.r26.s64 = ctx.r26.s64 + -280;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5350;
	sub_82DC3728(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC535C;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC5368;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82b75b00
	ctx.lr = 0x82DC5370;
	sub_82B75B00(ctx, base);
	// b 0x82dc5168
	goto loc_82DC5168;
loc_82DC5374:
	// addi r30,r28,-280
	ctx.r30.s64 = ctx.r28.s64 + -280;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5388;
	sub_82DC3728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC5394;
	sub_82DC35E0(ctx, base);
	// addi r4,r1,1808
	ctx.r4.s64 = ctx.r1.s64 + 1808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC53A0;
	sub_82DC35E0(ctx, base);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82b75b00
	ctx.lr = 0x82DC53A8;
	sub_82B75B00(ctx, base);
	// addi r29,r29,280
	ctx.r29.s64 = ctx.r29.s64 + 280;
	// b 0x82dc5168
	goto loc_82DC5168;
loc_82DC53B0:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC53C4"))) PPC_WEAK_FUNC(sub_82DC53C4);
PPC_FUNC_IMPL(__imp__sub_82DC53C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC53C8"))) PPC_WEAK_FUNC(sub_82DC53C8);
PPC_FUNC_IMPL(__imp__sub_82DC53C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DC53D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,234
	ctx.r11.s64 = 15335424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,3744
	ctx.r10.u64 = ctx.r11.u64 | 3744;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82dc53f4
	if (!cr6.gt) goto loc_82DC53F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82DC53F4;
	sub_831CC150(ctx, base);
loc_82DC53F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,280
	ctx.r24.s64 = 280;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82dc54b0
	if (!cr6.lt) goto loc_82DC54B0;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,280
	ctx.r26.s64 = ctx.r4.s64 * 280;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC542C;
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
	// beq cr6,0x82dc5468
	if (cr6.eq) goto loc_82DC5468;
loc_82DC5444:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82dc5458
	if (cr6.eq) goto loc_82DC5458;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5458;
	sub_82DC3728(ctx, base);
loc_82DC5458:
	// addi r30,r30,280
	ctx.r30.s64 = ctx.r30.s64 + 280;
	// addi r29,r29,280
	ctx.r29.s64 = ctx.r29.s64 + 280;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82dc5444
	if (!cr6.eq) goto loc_82DC5444;
loc_82DC5468:
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
	// beq cr6,0x82dc5498
	if (cr6.eq) goto loc_82DC5498;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82b75fd0
	ctx.lr = 0x82DC5488;
	sub_82B75FD0(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DC5498;
	sub_825952B8(ctx, base);
loc_82DC5498:
	// mulli r11,r30,280
	ctx.r11.s64 = ctx.r30.s64 * 280;
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
loc_82DC54B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC54B8"))) PPC_WEAK_FUNC(sub_82DC54B8);
PPC_FUNC_IMPL(__imp__sub_82DC54B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC54C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,312
	ctx.r4.s64 = 312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC54E4;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r10.u8);
	// stb r10,305(r3)
	PPC_STORE_U8(ctx.r3.u32 + 305, ctx.r10.u8);
	// beq 0x82dc5528
	if (cr0.eq) goto loc_82DC5528;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82dc3728
	ctx.lr = 0x82DC5528;
	sub_82DC3728(ctx, base);
loc_82DC5528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC5534"))) PPC_WEAK_FUNC(sub_82DC5534);
PPC_FUNC_IMPL(__imp__sub_82DC5534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC5538"))) PPC_WEAK_FUNC(sub_82DC5538);
PPC_FUNC_IMPL(__imp__sub_82DC5538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DC5540;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,280
	ctx.r28.s64 = 280;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r11,r31,r28
	ctx.r11.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82dc55b0
	if (!cr6.gt) goto loc_82DC55B0;
	// addi r27,r3,-280
	ctx.r27.s64 = ctx.r3.s64 + -280;
loc_82DC5564:
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5574;
	sub_82DC3728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc35e0
	ctx.lr = 0x82DC5580;
	sub_82DC35E0(ctx, base);
	// addi r31,r31,-280
	ctx.r31.s64 = ctx.r31.s64 + -280;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r31,r28
	ctx.r5.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc4988
	ctx.lr = 0x82DC559C;
	sub_82DC4988(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b75b00
	ctx.lr = 0x82DC55A4;
	sub_82B75B00(ctx, base);
	// divw r11,r31,r28
	ctx.r11.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x82dc5564
	if (cr6.gt) goto loc_82DC5564;
loc_82DC55B0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC55B8"))) PPC_WEAK_FUNC(sub_82DC55B8);
PPC_FUNC_IMPL(__imp__sub_82DC55B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,234
	ctx.r10.s64 = 15335424;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,280
	ctx.r9.s64 = 280;
	// ori r8,r10,3744
	ctx.r8.u64 = ctx.r10.u64 | 3744;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc55ec
	if (!cr6.lt) goto loc_82DC55EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82DC55EC:
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
	// blt cr6,0x82dc561c
	if (cr6.lt) goto loc_82DC561C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82DC561C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc5628
	if (!cr6.lt) goto loc_82DC5628;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82DC5628:
	// b 0x82dc53c8
	sub_82DC53C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC562C"))) PPC_WEAK_FUNC(sub_82DC562C);
PPC_FUNC_IMPL(__imp__sub_82DC562C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC5630"))) PPC_WEAK_FUNC(sub_82DC5630);
PPC_FUNC_IMPL(__imp__sub_82DC5630) {
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
	// lwz r6,100(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82dc2088
	ctx.lr = 0x82DC565C;
	sub_82DC2088(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC5670;
	sub_825952B8(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82dc4aa8
	ctx.lr = 0x82DC5684;
	sub_82DC4AA8(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x825952b8
	ctx.lr = 0x82DC5694;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_82DC56AC"))) PPC_WEAK_FUNC(sub_82DC56AC);
PPC_FUNC_IMPL(__imp__sub_82DC56AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC56B0"))) PPC_WEAK_FUNC(sub_82DC56B0);
PPC_FUNC_IMPL(__imp__sub_82DC56B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC56B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,156
	ctx.r29.s64 = ctx.r3.s64 + 156;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dc56e4
	if (cr6.lt) goto loc_82DC56E4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DC56E4;
	sub_825952B8(ctx, base);
loc_82DC56E4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r31,r30,128
	ctx.r31.s64 = ctx.r30.s64 + 128;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc5728
	if (cr6.eq) goto loc_82DC5728;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b76760
	ctx.lr = 0x82DC5718;
	sub_82B76760(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DC5728;
	sub_825952B8(ctx, base);
loc_82DC5728:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r6,116(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82dc2fd8
	ctx.lr = 0x82DC5748;
	sub_82DC2FD8(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82DC5758;
	sub_825952B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc5630
	ctx.lr = 0x82DC5760;
	sub_82DC5630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC5768"))) PPC_WEAK_FUNC(sub_82DC5768);
PPC_FUNC_IMPL(__imp__sub_82DC5768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC5770;
	__savegprlr_29(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,305(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc57bc
	if (!cr6.eq) goto loc_82DC57BC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DC5794:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc57a8
	if (!cr6.lt) goto loc_82DC57A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82dc57b0
	goto loc_82DC57B0;
loc_82DC57A8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DC57B0:
	// lbz r9,305(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 305);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc5794
	if (cr6.eq) goto loc_82DC5794;
loc_82DC57BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc57d8
	if (cr6.eq) goto loc_82DC57D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc5828
	if (!cr6.lt) goto loc_82DC5828;
loc_82DC57D8:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82b75c90
	ctx.lr = 0x82DC57E0;
	sub_82B75C90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82dc3728
	ctx.lr = 0x82DC57F4;
	sub_82DC3728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc54b8
	ctx.lr = 0x82DC5800;
	sub_82DC54B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc4b40
	ctx.lr = 0x82DC5814;
	sub_82DC4B40(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b75b00
	ctx.lr = 0x82DC5820;
	sub_82B75B00(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82b75b00
	ctx.lr = 0x82DC5828;
	sub_82B75B00(ctx, base);
loc_82DC5828:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC5834"))) PPC_WEAK_FUNC(sub_82DC5834);
PPC_FUNC_IMPL(__imp__sub_82DC5834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC5838"))) PPC_WEAK_FUNC(sub_82DC5838);
PPC_FUNC_IMPL(__imp__sub_82DC5838) {
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
	// bge cr6,0x82dc5870
	if (!cr6.lt) goto loc_82DC5870;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82dc5874
	if (!cr6.gt) goto loc_82DC5874;
loc_82DC5870:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DC5874:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc58c4
	if (cr6.eq) goto loc_82DC58C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,280
	ctx.r9.s64 = 280;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82dc58a8
	if (!cr6.eq) goto loc_82DC58A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc55b8
	ctx.lr = 0x82DC58A8;
	sub_82DC55B8(ctx, base);
loc_82DC58A8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc58f0
	if (cr6.eq) goto loc_82DC58F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,280
	ctx.r11.s64 = ctx.r30.s64 * 280;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82dc58ec
	goto loc_82DC58EC;
loc_82DC58C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc58dc
	if (!cr6.eq) goto loc_82DC58DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc55b8
	ctx.lr = 0x82DC58DC;
	sub_82DC55B8(ctx, base);
loc_82DC58DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc58f0
	if (cr6.eq) goto loc_82DC58F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DC58EC:
	// bl 0x82dc3728
	ctx.lr = 0x82DC58F0;
	sub_82DC3728(ctx, base);
loc_82DC58F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
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

__attribute__((alias("__imp__sub_82DC5914"))) PPC_WEAK_FUNC(sub_82DC5914);
PPC_FUNC_IMPL(__imp__sub_82DC5914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC5918"))) PPC_WEAK_FUNC(sub_82DC5918);
PPC_FUNC_IMPL(__imp__sub_82DC5918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DC5920;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,280
	ctx.r25.s64 = 280;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82dc59d4
	if (!cr6.gt) goto loc_82DC59D4;
loc_82DC5948:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82dc59f8
	if (!cr6.gt) goto loc_82DC59F8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc5078
	ctx.lr = 0x82DC5964;
	sub_82DC5078(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82dc59b4
	if (!cr6.lt) goto loc_82DC59B4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc5918
	ctx.lr = 0x82DC59AC;
	sub_82DC5918(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82dc59c4
	goto loc_82DC59C4;
loc_82DC59B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dc5918
	ctx.lr = 0x82DC59C0;
	sub_82DC5918(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82DC59C4:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82dc5948
	if (cr6.gt) goto loc_82DC5948;
loc_82DC59D4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82dc59f0
	if (!cr6.gt) goto loc_82DC59F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc4e18
	ctx.lr = 0x82DC59F0;
	sub_82DC4E18(ctx, base);
loc_82DC59F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DC59F8:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82dc59d4
	if (!cr6.gt) goto loc_82DC59D4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82dc5a20
	if (!cr6.gt) goto loc_82DC5A20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc4da0
	ctx.lr = 0x82DC5A20;
	sub_82DC4DA0(ctx, base);
loc_82DC5A20:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc5538
	ctx.lr = 0x82DC5A30;
	sub_82DC5538(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC5A38"))) PPC_WEAK_FUNC(sub_82DC5A38);
PPC_FUNC_IMPL(__imp__sub_82DC5A38) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc18f8
	ctx.lr = 0x82DC5A5C;
	sub_82DC18F8(ctx, base);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82DC5A7C;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1970
	ctx.lr = 0x82DC5A8C;
	sub_82DC1970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc4f10
	ctx.lr = 0x82DC5A94;
	sub_82DC4F10(ctx, base);
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

__attribute__((alias("__imp__sub_82DC5AAC"))) PPC_WEAK_FUNC(sub_82DC5AAC);
PPC_FUNC_IMPL(__imp__sub_82DC5AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC5AB0"))) PPC_WEAK_FUNC(sub_82DC5AB0);
PPC_FUNC_IMPL(__imp__sub_82DC5AB0) {
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
	// bl 0x82dc5a38
	ctx.lr = 0x82DC5AC8;
	sub_82DC5A38(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82dc19e8
	ctx.lr = 0x82DC5AD8;
	sub_82DC19E8(ctx, base);
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82dc5b24
	if (cr6.lt) goto loc_82DC5B24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82DC5B24:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82db84a8
	ctx.lr = 0x82DC5B30;
	sub_82DB84A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc4fc0
	ctx.lr = 0x82DC5B38;
	sub_82DC4FC0(ctx, base);
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

__attribute__((alias("__imp__sub_82DC5B50"))) PPC_WEAK_FUNC(sub_82DC5B50);
PPC_FUNC_IMPL(__imp__sub_82DC5B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DC5B58;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,364
	ctx.r5.s64 = ctx.r1.s64 + 364;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dc24f0
	ctx.lr = 0x82DC5B78;
	sub_82DC24F0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc5cd4
	if (cr6.eq) goto loc_82DC5CD4;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc5768
	ctx.lr = 0x82DC5B94;
	sub_82DC5768(ctx, base);
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc5cd4
	if (!cr6.eq) goto loc_82DC5CD4;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x82dc5c90
	if (cr6.eq) goto loc_82DC5C90;
	// addi r27,r28,112
	ctx.r27.s64 = ctx.r28.s64 + 112;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82DC5BC4:
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x82db7d20
	ctx.lr = 0x82DC5BDC;
	sub_82DB7D20(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc5c9c
	if (cr6.eq) goto loc_82DC5C9C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// bl 0x82db8588
	ctx.lr = 0x82DC5BFC;
	sub_82DB8588(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b74558
	ctx.lr = 0x82DC5C08;
	sub_82B74558(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82DC5C20;
	sub_8259CB28(ctx, base);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lbz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// stb r10,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r10.u8);
	// lbz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// stb r9,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r9.u8);
	// bl 0x82da8e68
	ctx.lr = 0x82DC5C44;
	sub_82DA8E68(ctx, base);
	// lbz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r8,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r8.u8);
	// lbz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// bl 0x82db99b0
	ctx.lr = 0x82DC5C68;
	sub_82DB99B0(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82da8c38
	ctx.lr = 0x82DC5C70;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82DC5C78;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8387beb0
	ctx.lr = 0x82DC5C80;
	sub_8387BEB0(ctx, base);
	// lwz r4,212(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// bne cr6,0x82dc5bc4
	if (!cr6.eq) goto loc_82DC5BC4;
loc_82DC5C90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82DC5C9C:
	// lwz r5,128(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r31,r28,128
	ctx.r31.s64 = ctx.r28.s64 + 128;
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc5cd4
	if (cr6.eq) goto loc_82DC5CD4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dc1760
	ctx.lr = 0x82DC5CBC;
	sub_82DC1760(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b76760
	ctx.lr = 0x82DC5CD0;
	sub_82B76760(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DC5CD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC5CE0"))) PPC_WEAK_FUNC(sub_82DC5CE0);
PPC_FUNC_IMPL(__imp__sub_82DC5CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC5CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc5d24
	if (cr6.eq) goto loc_82DC5D24;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dc3e50
	ctx.lr = 0x82DC5D10;
	sub_82DC3E50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82b75fd0
	ctx.lr = 0x82DC5D20;
	sub_82B75FD0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DC5D24:
	// bl 0x82d86078
	ctx.lr = 0x82DC5D28;
	sub_82D86078(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82dc5e1c
	if (cr6.eq) goto loc_82DC5E1C;
loc_82DC5D44:
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5D50;
	sub_82DC3728(ctx, base);
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc5dfc
	if (!cr6.eq) goto loc_82DC5DFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc1570
	ctx.lr = 0x82DC5D68;
	sub_82DC1570(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc5dfc
	if (cr6.eq) goto loc_82DC5DFC;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc5d98
	if (cr6.eq) goto loc_82DC5D98;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82db9380
	ctx.lr = 0x82DC5D8C;
	sub_82DB9380(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc5dfc
	if (!cr6.eq) goto loc_82DC5DFC;
loc_82DC5D98:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc5dc0
	if (cr6.eq) goto loc_82DC5DC0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82dc5dfc
	if (!cr6.lt) goto loc_82DC5DFC;
	// lbz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc5dfc
	if (!cr6.eq) goto loc_82DC5DFC;
loc_82DC5DC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82dc5ddc
	if (!cr6.eq) goto loc_82DC5DDC;
	// lbz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc5df0
	if (cr6.eq) goto loc_82DC5DF0;
	// b 0x82dc5dfc
	goto loc_82DC5DFC;
loc_82DC5DDC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82dc5df0
	if (!cr6.eq) goto loc_82DC5DF0;
	// lbz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc5dfc
	if (cr6.eq) goto loc_82DC5DFC;
loc_82DC5DF0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc5838
	ctx.lr = 0x82DC5DFC;
	sub_82DC5838(ctx, base);
loc_82DC5DFC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b75b00
	ctx.lr = 0x82DC5E04;
	sub_82B75B00(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dc15e0
	ctx.lr = 0x82DC5E0C;
	sub_82DC15E0(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc5d44
	if (!cr6.eq) goto loc_82DC5D44;
loc_82DC5E1C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,280
	ctx.r30.s64 = 280;
	// addi r6,r11,-4400
	ctx.r6.s64 = ctx.r11.s64 + -4400;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r10,r30
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r30.s32);
	// bl 0x82dc5918
	ctx.lr = 0x82DC5E3C;
	sub_82DC5918(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r30
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw r3,r3,r30
	ctx.r3.s32 = PPCDivide(ctx.r3.s32, ctx.r30.s32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC5E68"))) PPC_WEAK_FUNC(sub_82DC5E68);
PPC_FUNC_IMPL(__imp__sub_82DC5E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82DC5E70;
	__savegprlr_23(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82dc5ce0
	ctx.lr = 0x82DC5E98;
	sub_82DC5CE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc5eb4
	if (!cr6.eq) goto loc_82DC5EB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b76020
	ctx.lr = 0x82DC5EA8;
	sub_82B76020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82DC5EB4:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,280
	ctx.r10.s64 = 280;
	// addi r6,r11,4992
	ctx.r6.s64 = ctx.r11.s64 + 4992;
	// subf r9,r31,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r31.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// divw r5,r9,r10
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// bl 0x82dc5918
	ctx.lr = 0x82DC5EE4;
	sub_82DC5918(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// beq cr6,0x82dc5ff8
	if (cr6.eq) goto loc_82DC5FF8;
loc_82DC5EF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dc3728
	ctx.lr = 0x82DC5EFC;
	sub_82DC3728(ctx, base);
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc5f9c
	if (!cr6.lt) goto loc_82DC5F9C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r25,96
	ctx.r4.s64 = ctx.r25.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dc2578
	ctx.lr = 0x82DC5F1C;
	sub_82DC2578(ctx, base);
	// lwz r10,100(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc5f80
	if (!cr6.eq) goto loc_82DC5F80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r28.u8);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// bl 0x82dc39b8
	ctx.lr = 0x82DC5F48;
	sub_82DC39B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc5f9c
	if (cr6.eq) goto loc_82DC5F9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x82b75b00
	ctx.lr = 0x82DC5F6C;
	sub_82B75B00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b76020
	ctx.lr = 0x82DC5F74;
	sub_82B76020(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82DC5F80:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82dc5f9c
	if (!cr6.eq) goto loc_82DC5F9C;
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc5f9c
	if (cr6.eq) goto loc_82DC5F9C;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82DC5F9C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b75b00
	ctx.lr = 0x82DC5FA4;
	sub_82B75B00(ctx, base);
	// addi r30,r30,280
	ctx.r30.s64 = ctx.r30.s64 + 280;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// bne cr6,0x82dc5ef0
	if (!cr6.eq) goto loc_82DC5EF0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82dc5ff8
	if (cr6.eq) goto loc_82DC5FF8;
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// beq cr6,0x82dc5fec
	if (cr6.eq) goto loc_82DC5FEC;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b75fd0
	ctx.lr = 0x82DC5FD8;
	sub_82B75FD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82DC5FEC;
	sub_825952B8(ctx, base);
loc_82DC5FEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82DC5FF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82dc6024
	if (cr6.eq) goto loc_82DC6024;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b75fd0
	ctx.lr = 0x82DC6010;
	sub_82B75FD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82DC6024;
	sub_825952B8(ctx, base);
loc_82DC6024:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC6030"))) PPC_WEAK_FUNC(sub_82DC6030);
PPC_FUNC_IMPL(__imp__sub_82DC6030) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc608c
	if (!cr6.eq) goto loc_82DC608C;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC6070;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6084
	if (cr6.eq) goto loc_82DC6084;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82dd8288
	ctx.lr = 0x82DC6080;
	sub_82DD8288(ctx, base);
	// b 0x82dc6088
	goto loc_82DC6088;
loc_82DC6084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC6088:
	// stw r3,-26904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26904, ctx.r3.u32);
loc_82DC608C:
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

__attribute__((alias("__imp__sub_82DC60A4"))) PPC_WEAK_FUNC(sub_82DC60A4);
PPC_FUNC_IMPL(__imp__sub_82DC60A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC60A8"))) PPC_WEAK_FUNC(sub_82DC60A8);
PPC_FUNC_IMPL(__imp__sub_82DC60A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,-31456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC60B4"))) PPC_WEAK_FUNC(sub_82DC60B4);
PPC_FUNC_IMPL(__imp__sub_82DC60B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC60B8"))) PPC_WEAK_FUNC(sub_82DC60B8);
PPC_FUNC_IMPL(__imp__sub_82DC60B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,-31456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31456);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_82DC60D8"))) PPC_WEAK_FUNC(sub_82DC60D8);
PPC_FUNC_IMPL(__imp__sub_82DC60D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC60DC"))) PPC_WEAK_FUNC(sub_82DC60DC);
PPC_FUNC_IMPL(__imp__sub_82DC60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC60E0"))) PPC_WEAK_FUNC(sub_82DC60E0);
PPC_FUNC_IMPL(__imp__sub_82DC60E0) {
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
	// bl 0x83103260
	ctx.lr = 0x82DC60F0;
	sub_83103260(ctx, base);
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31456, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC610C"))) PPC_WEAK_FUNC(sub_82DC610C);
PPC_FUNC_IMPL(__imp__sub_82DC610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6110"))) PPC_WEAK_FUNC(sub_82DC6110);
PPC_FUNC_IMPL(__imp__sub_82DC6110) {
	PPC_FUNC_PROLOGUE();
	// ld r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC6118"))) PPC_WEAK_FUNC(sub_82DC6118);
PPC_FUNC_IMPL(__imp__sub_82DC6118) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82db8e08
	sub_82DB8E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC6120"))) PPC_WEAK_FUNC(sub_82DC6120);
PPC_FUNC_IMPL(__imp__sub_82DC6120) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DC6130;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6148
	if (!cr6.eq) goto loc_82DC6148;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DC6148:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC6150;
	sub_8307E040(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82dc6168
	if (cr6.eq) goto loc_82DC6168;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82dc616c
	if (!cr6.eq) goto loc_82DC616C;
loc_82DC6168:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DC616C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC617C"))) PPC_WEAK_FUNC(sub_82DC617C);
PPC_FUNC_IMPL(__imp__sub_82DC617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6180"))) PPC_WEAK_FUNC(sub_82DC6180);
PPC_FUNC_IMPL(__imp__sub_82DC6180) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DC6190;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc61a0
	if (!cr6.eq) goto loc_82DC61A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82dc61c4
	goto loc_82DC61C4;
loc_82DC61A0:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC61A8;
	sub_8307E040(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82dc61c0
	if (cr6.eq) goto loc_82DC61C0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82dc61c4
	if (!cr6.eq) goto loc_82DC61C4;
loc_82DC61C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DC61C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82DC61E0"))) PPC_WEAK_FUNC(sub_82DC61E0);
PPC_FUNC_IMPL(__imp__sub_82DC61E0) {
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
	// bl 0x82e64378
	ctx.lr = 0x82DC61FC;
	sub_82E64378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6224
	if (cr6.eq) goto loc_82DC6224;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82DC6214;
	sub_83103100(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc6224
	if (!cr6.eq) goto loc_82DC6224;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_82DC6224:
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

__attribute__((alias("__imp__sub_82DC623C"))) PPC_WEAK_FUNC(sub_82DC623C);
PPC_FUNC_IMPL(__imp__sub_82DC623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6240"))) PPC_WEAK_FUNC(sub_82DC6240);
PPC_FUNC_IMPL(__imp__sub_82DC6240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC6248;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-19876
	ctx.r9.s64 = ctx.r11.s64 + -19876;
	// li r29,29
	ctx.r29.s64 = 29;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc6294
	if (cr6.eq) goto loc_82DC6294;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DC6280;
	sub_82595150(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82416268
	ctx.lr = 0x82DC6288;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DC6290;
	sub_82595170(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82DC6294:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc62c4
	if (cr6.eq) goto loc_82DC62C4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DC62B0;
	sub_82595150(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82416268
	ctx.lr = 0x82DC62B8;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DC62C0;
	sub_82595170(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82DC62C4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r10,r11,-28780
	ctx.r10.s64 = ctx.r11.s64 + -28780;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC62D8"))) PPC_WEAK_FUNC(sub_82DC62D8);
PPC_FUNC_IMPL(__imp__sub_82DC62D8) {
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
	// bl 0x82dc6240
	ctx.lr = 0x82DC62F8;
	sub_82DC6240(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6310
	if (cr6.eq) goto loc_82DC6310;
	// bl 0x82416268
	ctx.lr = 0x82DC630C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DC6310:
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

__attribute__((alias("__imp__sub_82DC6328"))) PPC_WEAK_FUNC(sub_82DC6328);
PPC_FUNC_IMPL(__imp__sub_82DC6328) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-28780
	ctx.r9.s64 = ctx.r11.s64 + -28780;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82dc635c
	if (cr6.eq) goto loc_82DC635C;
	// bl 0x82416268
	ctx.lr = 0x82DC6358;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DC635C:
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

__attribute__((alias("__imp__sub_82DC6370"))) PPC_WEAK_FUNC(sub_82DC6370);
PPC_FUNC_IMPL(__imp__sub_82DC6370) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,31040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc63a0
	if (cr6.eq) goto loc_82DC63A0;
	// bl 0x82db3120
	ctx.lr = 0x82DC6394;
	sub_82DB3120(ctx, base);
	// lwz r11,31040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 456, ctx.r10.u32);
loc_82DC63A0:
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

__attribute__((alias("__imp__sub_82DC63B4"))) PPC_WEAK_FUNC(sub_82DC63B4);
PPC_FUNC_IMPL(__imp__sub_82DC63B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC63B8"))) PPC_WEAK_FUNC(sub_82DC63B8);
PPC_FUNC_IMPL(__imp__sub_82DC63B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,-31456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31456);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6408
	if (cr6.eq) goto loc_82DC6408;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dc6408
	if (!cr6.eq) goto loc_82DC6408;
	// lbz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc6408
	if (!cr6.eq) goto loc_82DC6408;
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc63fc
	if (cr6.eq) goto loc_82DC63FC;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82dc6400
	if (cr6.eq) goto loc_82DC6400;
loc_82DC63FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DC6400:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82DC6408:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC6410"))) PPC_WEAK_FUNC(sub_82DC6410);
PPC_FUNC_IMPL(__imp__sub_82DC6410) {
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
	// bl 0x82e9b948
	ctx.lr = 0x82DC6428;
	sub_82E9B948(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6450
	if (cr6.eq) goto loc_82DC6450;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC6448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
loc_82DC6450:
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

__attribute__((alias("__imp__sub_82DC6464"))) PPC_WEAK_FUNC(sub_82DC6464);
PPC_FUNC_IMPL(__imp__sub_82DC6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6468"))) PPC_WEAK_FUNC(sub_82DC6468);
PPC_FUNC_IMPL(__imp__sub_82DC6468) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48260
	ctx.lr = 0x82DC6484;
	sub_82D48260(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc64c8
	if (cr6.eq) goto loc_82DC64C8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82dc64d0
	if (cr6.eq) goto loc_82DC64D0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82dc64f4
	if (cr6.eq) goto loc_82DC64F4;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC64B4;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// b 0x82dc657c
	goto loc_82DC657C;
loc_82DC64C8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC64D0:
	// ld r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 392);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82e5af68
	ctx.lr = 0x82DC64EC;
	sub_82E5AF68(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
loc_82DC64F4:
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82e5ac68
	ctx.lr = 0x82DC64FC;
	sub_82E5AC68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dc6544
	if (!cr6.eq) goto loc_82DC6544;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC6528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4373
	ctx.r4.u64 = ctx.r4.u64 | 4373;
	// bl 0x82e64250
	ctx.lr = 0x82DC6538;
	sub_82E64250(ctx, base);
	// lis r8,-32035
	ctx.r8.s64 = -2099445760;
	// addi r7,r8,-27776
	ctx.r7.s64 = ctx.r8.s64 + -27776;
	// b 0x82dc6578
	goto loc_82DC6578;
loc_82DC6544:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc6580
	if (!cr6.eq) goto loc_82DC6580;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC6570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32035
	ctx.r8.s64 = -2099445760;
	// addi r7,r8,-27376
	ctx.r7.s64 = ctx.r8.s64 + -27376;
loc_82DC6578:
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
loc_82DC657C:
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_82DC6580:
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

__attribute__((alias("__imp__sub_82DC6598"))) PPC_WEAK_FUNC(sub_82DC6598);
PPC_FUNC_IMPL(__imp__sub_82DC6598) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc65d8
	if (cr6.eq) goto loc_82DC65D8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82dc65e4
	if (cr6.eq) goto loc_82DC65E4;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC65CC;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// b 0x82dc6644
	goto loc_82DC6644;
loc_82DC65D8:
	// bl 0x82daf868
	ctx.lr = 0x82DC65DC;
	sub_82DAF868(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC65E4:
	// bl 0x82d48260
	ctx.lr = 0x82DC65E8;
	sub_82D48260(ctx, base);
	// bl 0x82daf8c0
	ctx.lr = 0x82DC65EC;
	sub_82DAF8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc6654
	if (cr6.eq) goto loc_82DC6654;
	// bl 0x83a7d958
	ctx.lr = 0x82DC6608;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DC660C;
	sub_83524138(ctx, base);
	// addi r11,r3,1500
	ctx.r11.s64 = ctx.r3.s64 + 1500;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r11.u64);
	// bl 0x82db8e08
	ctx.lr = 0x82DC661C;
	sub_82DB8E08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc662c
	if (cr6.eq) goto loc_82DC662C;
	// bl 0x82e9b8d8
	ctx.lr = 0x82DC662C;
	sub_82E9B8D8(ctx, base);
loc_82DC662C:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4361
	ctx.r4.u64 = ctx.r4.u64 | 4361;
	// bl 0x82e64250
	ctx.lr = 0x82DC663C;
	sub_82E64250(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// addi r9,r10,-27776
	ctx.r9.s64 = ctx.r10.s64 + -27776;
loc_82DC6644:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stb r11,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r11.u8);
loc_82DC6654:
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

__attribute__((alias("__imp__sub_82DC6668"))) PPC_WEAK_FUNC(sub_82DC6668);
PPC_FUNC_IMPL(__imp__sub_82DC6668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC6670;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC6684;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc66a4
	if (!cr6.eq) goto loc_82DC66A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC66A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b74558
	ctx.lr = 0x82DC66AC;
	sub_82B74558(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82db8cb8
	ctx.lr = 0x82DC66B8;
	sub_82DB8CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc66e4
	if (!cr6.eq) goto loc_82DC66E4;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82da8c38
	ctx.lr = 0x82DC66D0;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82DC66D8;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC66E4:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82dc6778
	if (cr6.lt) goto loc_82DC6778;
	// beq cr6,0x82dc67c8
	if (cr6.eq) goto loc_82DC67C8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82dc6724
	if (cr6.lt) goto loc_82DC6724;
loc_82DC6700:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82DC6708:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82da8c38
	ctx.lr = 0x82DC6710;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82DC6718;
	sub_82DA8C38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC6724:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82ddcec8
	ctx.lr = 0x82DC672C;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82dc673c
	if (!cr6.eq) goto loc_82DC673C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82dc6708
	goto loc_82DC6708;
loc_82DC673C:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r9.u8);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6770
	if (cr6.eq) goto loc_82DC6770;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC6768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
loc_82DC6770:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82dc6708
	goto loc_82DC6708;
loc_82DC6778:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC6780;
	sub_8307E040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc6120
	ctx.lr = 0x82DC6788;
	sub_82DC6120(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc67a0
	if (!cr6.eq) goto loc_82DC67A0;
loc_82DC6794:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82DC6798:
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// b 0x82dc6708
	goto loc_82DC6708;
loc_82DC67A0:
	// bl 0x82db7590
	ctx.lr = 0x82DC67A4;
	sub_82DB7590(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x82dc67c4
	if (cr6.lt) goto loc_82DC67C4;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC67B4;
	sub_8307E040(ctx, base);
	// bl 0x82dbac30
	ctx.lr = 0x82DC67B8;
	sub_82DBAC30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc6794
	if (!cr6.eq) goto loc_82DC6794;
loc_82DC67C4:
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_82DC67C8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc67e0
	if (cr6.eq) goto loc_82DC67E0;
	// lbz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc6798
	if (!cr6.eq) goto loc_82DC6798;
loc_82DC67E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db8ea0
	ctx.lr = 0x82DC67F0;
	sub_82DB8EA0(ctx, base);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6700
	if (cr6.eq) goto loc_82DC6700;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dc6708
	goto loc_82DC6708;
}

__attribute__((alias("__imp__sub_82DC680C"))) PPC_WEAK_FUNC(sub_82DC680C);
PPC_FUNC_IMPL(__imp__sub_82DC680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6810"))) PPC_WEAK_FUNC(sub_82DC6810);
PPC_FUNC_IMPL(__imp__sub_82DC6810) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DC682C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6840
	if (!cr6.eq) goto loc_82DC6840;
loc_82DC6838:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82dc6888
	goto loc_82DC6888;
loc_82DC6840:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82db8e08
	ctx.lr = 0x82DC6848;
	sub_82DB8E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6838
	if (cr6.eq) goto loc_82DC6838;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc6120
	ctx.lr = 0x82DC685C;
	sub_82DC6120(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6838
	if (cr6.eq) goto loc_82DC6838;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC6870;
	sub_8307E040(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82dc6838
	if (cr6.lt) goto loc_82DC6838;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC6884;
	sub_8307E040(ctx, base);
	// bl 0x82dbac30
	ctx.lr = 0x82DC6888;
	sub_82DBAC30(ctx, base);
loc_82DC6888:
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

__attribute__((alias("__imp__sub_82DC68A0"))) PPC_WEAK_FUNC(sub_82DC68A0);
PPC_FUNC_IMPL(__imp__sub_82DC68A0) {
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
	// bl 0x82db7590
	ctx.lr = 0x82DC68BC;
	sub_82DB7590(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82dc68ec
	if (!cr6.eq) goto loc_82DC68EC;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,31040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc68ec
	if (cr6.eq) goto loc_82DC68EC;
	// bl 0x82db3120
	ctx.lr = 0x82DC68D8;
	sub_82DB3120(ctx, base);
	// lwz r11,31040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 456, ctx.r10.u32);
	// stb r10,240(r30)
	PPC_STORE_U8(ctx.r30.u32 + 240, ctx.r10.u8);
	// b 0x82dc68f4
	goto loc_82DC68F4;
loc_82DC68EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,240(r30)
	PPC_STORE_U8(ctx.r30.u32 + 240, ctx.r11.u8);
loc_82DC68F4:
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

__attribute__((alias("__imp__sub_82DC690C"))) PPC_WEAK_FUNC(sub_82DC690C);
PPC_FUNC_IMPL(__imp__sub_82DC690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6910"))) PPC_WEAK_FUNC(sub_82DC6910);
PPC_FUNC_IMPL(__imp__sub_82DC6910) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dc6668
	ctx.lr = 0x82DC693C;
	sub_82DC6668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6984
	if (cr6.eq) goto loc_82DC6984;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc6964
	if (cr6.eq) goto loc_82DC6964;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// b 0x82dc6980
	goto loc_82DC6980;
loc_82DC6964:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8168);
	// bl 0x82e64c60
	ctx.lr = 0x82DC6974;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC6980:
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_82DC6984:
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

__attribute__((alias("__imp__sub_82DC699C"))) PPC_WEAK_FUNC(sub_82DC699C);
PPC_FUNC_IMPL(__imp__sub_82DC699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC69A0"))) PPC_WEAK_FUNC(sub_82DC69A0);
PPC_FUNC_IMPL(__imp__sub_82DC69A0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dc6668
	ctx.lr = 0x82DC69CC;
	sub_82DC6668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6a14
	if (cr6.eq) goto loc_82DC6A14;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc69f4
	if (cr6.eq) goto loc_82DC69F4;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// b 0x82dc6a10
	goto loc_82DC6A10;
loc_82DC69F4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8168);
	// bl 0x82e64c60
	ctx.lr = 0x82DC6A04;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC6A10:
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_82DC6A14:
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

__attribute__((alias("__imp__sub_82DC6A2C"))) PPC_WEAK_FUNC(sub_82DC6A2C);
PPC_FUNC_IMPL(__imp__sub_82DC6A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6A30"))) PPC_WEAK_FUNC(sub_82DC6A30);
PPC_FUNC_IMPL(__imp__sub_82DC6A30) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DC6A44;
	sub_82D86078(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31456);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6b8c
	if (cr6.eq) goto loc_82DC6B8C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6b8c
	if (cr6.eq) goto loc_82DC6B8C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DC6A68;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6b8c
	if (cr6.eq) goto loc_82DC6B8C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC6A7C;
	sub_8307E040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82db7320
	ctx.lr = 0x82DC6A84;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6ae0
	if (cr6.eq) goto loc_82DC6AE0;
	// bl 0x82db7408
	ctx.lr = 0x82DC6A94;
	sub_82DB7408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc6ab8
	if (!cr6.eq) goto loc_82DC6AB8;
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_82DC6AB8:
	// bl 0x82db7390
	ctx.lr = 0x82DC6ABC;
	sub_82DB7390(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc6ae0
	if (!cr6.eq) goto loc_82DC6AE0;
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_82DC6AE0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82dc6b04
	if (!cr6.lt) goto loc_82DC6B04;
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
loc_82DC6B04:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc6b30
	if (cr6.eq) goto loc_82DC6B30;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82dc6b30
	if (cr6.eq) goto loc_82DC6B30;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_82DC6B30:
	// bl 0x82dad2e0
	ctx.lr = 0x82DC6B34;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6b54
	if (!cr6.eq) goto loc_82DC6B54;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82DC6B54:
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6b64
	if (cr6.eq) goto loc_82DC6B64;
	// bl 0x82e744c8
	ctx.lr = 0x82DC6B64;
	sub_82E744C8(ctx, base);
loc_82DC6B64:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
loc_82DC6B8C:
	// li r3,6
	ctx.r3.s64 = 6;
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

__attribute__((alias("__imp__sub_82DC6BA4"))) PPC_WEAK_FUNC(sub_82DC6BA4);
PPC_FUNC_IMPL(__imp__sub_82DC6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6BA8"))) PPC_WEAK_FUNC(sub_82DC6BA8);
PPC_FUNC_IMPL(__imp__sub_82DC6BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC6BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC6BBC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6e80
	if (cr6.eq) goto loc_82DC6E80;
	// bl 0x83a7d958
	ctx.lr = 0x82DC6BC8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DC6BCC;
	sub_83524138(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82dc6e80
	if (cr6.gt) goto loc_82DC6E80;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,6
	ctx.r29.s64 = 6;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27644
	ctx.r12.s64 = ctx.r12.s64 + 27644;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82DC6C24;
	case 1:
		goto loc_82DC6E80;
	case 2:
		goto loc_82DC6E80;
	case 3:
		goto loc_82DC6E80;
	case 4:
		goto loc_82DC6E80;
	case 5:
		goto loc_82DC6E80;
	case 6:
		goto loc_82DC6C38;
	case 7:
		goto loc_82DC6CC8;
	case 8:
		goto loc_82DC6D2C;
	case 9:
		goto loc_82DC6DA0;
	default:
		return;
	}
	// lwz r22,27684(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27684);
	// lwz r22,28288(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28288);
	// lwz r22,28288(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28288);
	// lwz r22,28288(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28288);
	// lwz r22,28288(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28288);
	// lwz r22,28288(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28288);
	// lwz r22,27704(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27704);
	// lwz r22,27848(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27848);
	// lwz r22,27948(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27948);
	// lwz r22,28064(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28064);
loc_82DC6C24:
	// bl 0x83a7d958
	ctx.lr = 0x82DC6C28;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DC6C2C;
	sub_83524138(ctx, base);
	// addi r11,r3,10000
	ctx.r11.s64 = ctx.r3.s64 + 10000;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
loc_82DC6C38:
	// bl 0x82d48260
	ctx.lr = 0x82DC6C3C;
	sub_82D48260(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82DC6C40;
	sub_82DAD2E0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6c8c
	if (cr6.eq) goto loc_82DC6C8C;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6c60
	if (!cr6.eq) goto loc_82DC6C60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82dc6c64
	goto loc_82DC6C64;
loc_82DC6C60:
	// bl 0x82e744c8
	ctx.lr = 0x82DC6C64;
	sub_82E744C8(ctx, base);
loc_82DC6C64:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6c8c
	if (cr6.eq) goto loc_82DC6C8C;
loc_82DC6C70:
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// stb r28,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r28.u8);
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC6C8C:
	// bl 0x82db7590
	ctx.lr = 0x82DC6C90;
	sub_82DB7590(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x82dc6c70
	if (cr6.lt) goto loc_82DC6C70;
	// bl 0x82daf8c0
	ctx.lr = 0x82DC6C9C;
	sub_82DAF8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc6e8c
	if (cr6.eq) goto loc_82DC6E8C;
	// ld r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 256);
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// blt cr6,0x82dc6e8c
	if (cr6.lt) goto loc_82DC6E8C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC6CC8:
	// bl 0x82d48260
	ctx.lr = 0x82DC6CCC;
	sub_82D48260(ctx, base);
	// bl 0x82db9d68
	ctx.lr = 0x82DC6CD0;
	sub_82DB9D68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6d14
	if (!cr6.eq) goto loc_82DC6D14;
	// ld r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// bge cr6,0x82dc6d00
	if (!cr6.lt) goto loc_82DC6D00;
	// addi r11,r30,1500
	ctx.r11.s64 = ctx.r30.s64 + 1500;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// std r11,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC6D00:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc95e0
	ctx.lr = 0x82DC6D0C;
	sub_82DC95E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC6D14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82DC6D1C;
	sub_83103100(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC6D2C:
	// bl 0x82d48260
	ctx.lr = 0x82DC6D30;
	sub_82D48260(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6e80
	if (cr6.eq) goto loc_82DC6E80;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bne cr6,0x82dc6e8c
	if (!cr6.eq) goto loc_82DC6E8C;
	// lbz r11,77(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82dc6d90
	if (cr6.eq) goto loc_82DC6D90;
	// bctrl 
	ctx.lr = 0x82DC6D64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r8,248(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpld cr6,r30,r8
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r8.u64, xer);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// bge cr6,0x82dc6d00
	if (!cr6.lt) goto loc_82DC6D00;
	// addi r11,r30,1500
	ctx.r11.s64 = ctx.r30.s64 + 1500;
	// li r10,6
	ctx.r10.s64 = 6;
	// std r11,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r11.u64);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC6D90:
	// bctrl 
	ctx.lr = 0x82DC6D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r28,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r28.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
loc_82DC6DA0:
	// bl 0x82d48260
	ctx.lr = 0x82DC6DA4;
	sub_82D48260(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82DC6DA8;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6e80
	if (cr6.eq) goto loc_82DC6E80;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6dcc
	if (!cr6.eq) goto loc_82DC6DCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82dc6dd0
	goto loc_82DC6DD0;
loc_82DC6DCC:
	// bl 0x82e744e0
	ctx.lr = 0x82DC6DD0;
	sub_82E744E0(ctx, base);
loc_82DC6DD0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6e04
	if (cr6.eq) goto loc_82DC6E04;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc95e0
	ctx.lr = 0x82DC6DE8;
	sub_82DC95E0(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4367
	ctx.r4.u64 = ctx.r4.u64 | 4367;
	// bl 0x82e64250
	ctx.lr = 0x82DC6DF8;
	sub_82E64250(ctx, base);
	// stb r29,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC6E04:
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6e18
	if (!cr6.eq) goto loc_82DC6E18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82dc6e1c
	goto loc_82DC6E1C;
loc_82DC6E18:
	// bl 0x82e744c8
	ctx.lr = 0x82DC6E1C;
	sub_82E744C8(ctx, base);
loc_82DC6E1C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6e8c
	if (cr6.eq) goto loc_82DC6E8C;
	// bl 0x82dad2e0
	ctx.lr = 0x82DC6E2C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6e3c
	if (cr6.eq) goto loc_82DC6E3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82dad3e0
	ctx.lr = 0x82DC6E3C;
	sub_82DAD3E0(ctx, base);
loc_82DC6E3C:
	// stb r28,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r28.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82db8e08
	ctx.lr = 0x82DC6E48;
	sub_82DB8E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6e58
	if (cr6.eq) goto loc_82DC6E58;
	// stb r29,446(r31)
	PPC_STORE_U8(ctx.r31.u32 + 446, ctx.r29.u8);
loc_82DC6E58:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4362
	ctx.r4.u64 = ctx.r4.u64 | 4362;
	// bl 0x82e64250
	ctx.lr = 0x82DC6E68;
	sub_82E64250(ctx, base);
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC6E80:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc95e0
	ctx.lr = 0x82DC6E8C;
	sub_82DC95E0(ctx, base);
loc_82DC6E8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC6E94"))) PPC_WEAK_FUNC(sub_82DC6E94);
PPC_FUNC_IMPL(__imp__sub_82DC6E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6E98"))) PPC_WEAK_FUNC(sub_82DC6E98);
PPC_FUNC_IMPL(__imp__sub_82DC6E98) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DC6EB4;
	sub_82D86078(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6ec8
	if (!cr6.eq) goto loc_82DC6EC8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82dc6eec
	goto loc_82DC6EEC;
loc_82DC6EC8:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC6ED0;
	sub_8307E040(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82dc6ee8
	if (cr6.eq) goto loc_82DC6EE8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x82dc6eec
	if (!cr6.eq) goto loc_82DC6EEC;
loc_82DC6EE8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DC6EEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6f94
	if (cr6.eq) goto loc_82DC6F94;
	// lbz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6f4c
	if (cr6.eq) goto loc_82DC6F4C;
	// bl 0x82dad2e0
	ctx.lr = 0x82DC6F08;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6f40
	if (cr6.eq) goto loc_82DC6F40;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6f24
	if (!cr6.eq) goto loc_82DC6F24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82dc6f28
	goto loc_82DC6F28;
loc_82DC6F24:
	// bl 0x82e744e0
	ctx.lr = 0x82DC6F28;
	sub_82E744E0(ctx, base);
loc_82DC6F28:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc6f40
	if (!cr6.eq) goto loc_82DC6F40;
	// bl 0x82db7590
	ctx.lr = 0x82DC6F38;
	sub_82DB7590(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x82dc6f94
	if (!cr6.lt) goto loc_82DC6F94;
loc_82DC6F40:
	// bl 0x82db7228
	ctx.lr = 0x82DC6F44;
	sub_82DB7228(ctx, base);
	// stb r31,404(r30)
	PPC_STORE_U8(ctx.r30.u32 + 404, ctx.r31.u8);
	// b 0x82dc6f94
	goto loc_82DC6F94;
loc_82DC6F4C:
	// bl 0x82db7590
	ctx.lr = 0x82DC6F50;
	sub_82DB7590(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82dc6f94
	if (!cr6.eq) goto loc_82DC6F94;
	// bl 0x82dad2e0
	ctx.lr = 0x82DC6F5C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc6f94
	if (cr6.eq) goto loc_82DC6F94;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc6f78
	if (!cr6.eq) goto loc_82DC6F78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82dc6f7c
	goto loc_82DC6F7C;
loc_82DC6F78:
	// bl 0x82e744c8
	ctx.lr = 0x82DC6F7C;
	sub_82E744C8(ctx, base);
loc_82DC6F7C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc6f94
	if (cr6.eq) goto loc_82DC6F94;
	// bl 0x82db9eb8
	ctx.lr = 0x82DC6F8C;
	sub_82DB9EB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,404(r30)
	PPC_STORE_U8(ctx.r30.u32 + 404, ctx.r11.u8);
loc_82DC6F94:
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

__attribute__((alias("__imp__sub_82DC6FAC"))) PPC_WEAK_FUNC(sub_82DC6FAC);
PPC_FUNC_IMPL(__imp__sub_82DC6FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC6FB0"))) PPC_WEAK_FUNC(sub_82DC6FB0);
PPC_FUNC_IMPL(__imp__sub_82DC6FB0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dc6fe4
	if (cr6.lt) goto loc_82DC6FE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC6FE4;
	sub_825952B8(ctx, base);
loc_82DC6FE4:
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

__attribute__((alias("__imp__sub_82DC700C"))) PPC_WEAK_FUNC(sub_82DC700C);
PPC_FUNC_IMPL(__imp__sub_82DC700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC7010"))) PPC_WEAK_FUNC(sub_82DC7010);
PPC_FUNC_IMPL(__imp__sub_82DC7010) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// addi r10,r11,-19836
	ctx.r10.s64 = ctx.r11.s64 + -19836;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8344cfa0
	ctx.lr = 0x82DC7038;
	sub_8344CFA0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC704C;
	sub_825952B8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// bl 0x82da8c38
	ctx.lr = 0x82DC705C;
	sub_82DA8C38(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82dc6240
	ctx.lr = 0x82DC7064;
	sub_82DC6240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e65500
	ctx.lr = 0x82DC706C;
	sub_82E65500(ctx, base);
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

__attribute__((alias("__imp__sub_82DC7080"))) PPC_WEAK_FUNC(sub_82DC7080);
PPC_FUNC_IMPL(__imp__sub_82DC7080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC7088;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82dc70b8
	if (!cr6.lt) goto loc_82DC70B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15820
	ctx.r3.s64 = ctx.r11.s64 + 15820;
	// bl 0x831cc150
	ctx.lr = 0x82DC70B8;
	sub_831CC150(ctx, base);
loc_82DC70B8:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x82dc70c8
	if (!cr6.lt) goto loc_82DC70C8;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82DC70C8:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x82dc70e0
	if (!cr6.lt) goto loc_82DC70E0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82dc70e0
	if (cr6.gt) goto loc_82DC70E0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82DC70E0:
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC7100;
	sub_82595718(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82dc7148
	if (cr6.eq) goto loc_82DC7148;
loc_82DC7128:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7138
	if (cr6.eq) goto loc_82DC7138;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82DC7138:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc7128
	if (!cr6.eq) goto loc_82DC7128;
loc_82DC7148:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82dc71cc
	if (cr6.gt) goto loc_82DC71CC;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82dc7180
	if (cr6.eq) goto loc_82DC7180;
loc_82DC7160:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7170
	if (cr6.eq) goto loc_82DC7170;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82DC7170:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc7160
	if (!cr6.eq) goto loc_82DC7160;
loc_82DC7180:
	// subf. r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82dc71a4
	if (cr0.eq) goto loc_82DC71A4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82DC7190:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc719c
	if (cr6.eq) goto loc_82DC719C;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82DC719C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82dc7190
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC7190;
loc_82DC71A4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82dc7258
	if (cr6.eq) goto loc_82DC7258;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_82DC71B4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc71c0
	if (cr6.eq) goto loc_82DC71C0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82DC71C0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82dc71b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC71B4;
	// b 0x82dc7258
	goto loc_82DC7258;
loc_82DC71CC:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82dc71fc
	if (cr6.eq) goto loc_82DC71FC;
loc_82DC71DC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc71ec
	if (cr6.eq) goto loc_82DC71EC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82DC71EC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc71dc
	if (!cr6.eq) goto loc_82DC71DC;
loc_82DC71FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82dc7234
	if (cr6.eq) goto loc_82DC7234;
loc_82DC7214:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7224
	if (cr6.eq) goto loc_82DC7224;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82DC7224:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc7214
	if (!cr6.eq) goto loc_82DC7214;
loc_82DC7234:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82dc7258
	if (cr6.eq) goto loc_82DC7258;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82DC7244:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7250
	if (cr6.eq) goto loc_82DC7250;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82DC7250:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82dc7244
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC7244;
loc_82DC7258:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82dc7270
	if (cr6.eq) goto loc_82DC7270;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DC7270;
	sub_825952B8(ctx, base);
loc_82DC7270:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC7288"))) PPC_WEAK_FUNC(sub_82DC7288);
PPC_FUNC_IMPL(__imp__sub_82DC7288) {
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
	// bl 0x82dc7010
	ctx.lr = 0x82DC72A8;
	sub_82DC7010(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc72c0
	if (cr6.eq) goto loc_82DC72C0;
	// bl 0x82416268
	ctx.lr = 0x82DC72BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DC72C0:
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

__attribute__((alias("__imp__sub_82DC72D8"))) PPC_WEAK_FUNC(sub_82DC72D8);
PPC_FUNC_IMPL(__imp__sub_82DC72D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC72E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82dc7308
	if (cr6.gt) goto loc_82DC7308;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82dc7080
	ctx.lr = 0x82DC7308;
	sub_82DC7080(ctx, base);
loc_82DC7308:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82dc7324
	if (cr6.gt) goto loc_82DC7324;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82DC7324:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82dc7358
	if (!cr6.eq) goto loc_82DC7358;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC7350;
	sub_82595718(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
loc_82DC7358:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc738c
	if (cr6.eq) goto loc_82DC738C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lbz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_82DC738C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC73A0"))) PPC_WEAK_FUNC(sub_82DC73A0);
PPC_FUNC_IMPL(__imp__sub_82DC73A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC73A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,263
	ctx.r11.s64 = 17235968;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,263
	ctx.r10.s64 = 17235968;
	// ori r9,r11,4360
	ctx.r9.u64 = ctx.r11.u64 | 4360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r28,r10,4374
	ctx.r28.u64 = ctx.r10.u64 | 4374;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x82dc73e0
	if (cr6.lt) goto loc_82DC73E0;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bge cr6,0x82dc73e4
	if (!cr6.lt) goto loc_82DC73E4;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// bl 0x82dc72d8
	ctx.lr = 0x82DC73E0;
	sub_82DC72D8(ctx, base);
loc_82DC73E0:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
loc_82DC73E4:
	// bne cr6,0x82dc73fc
	if (!cr6.eq) goto loc_82DC73FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,444(r30)
	PPC_STORE_U8(ctx.r30.u32 + 444, ctx.r11.u8);
	// lbz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC73FC:
	// lis r11,262
	ctx.r11.s64 = 17170432;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82dc7470
	if (!cr6.eq) goto loc_82DC7470;
	// lwz r10,436(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7438
	if (cr6.eq) goto loc_82DC7438;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc7438
	if (!cr6.eq) goto loc_82DC7438;
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r10.u32);
	// b 0x82dc745c
	goto loc_82DC745C;
loc_82DC7438:
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc7470
	if (cr6.eq) goto loc_82DC7470;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dc7470
	if (!cr6.eq) goto loc_82DC7470;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r11.u32);
loc_82DC745C:
	// bne cr6,0x82dc7470
	if (!cr6.eq) goto loc_82DC7470;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,4380
	ctx.r4.u64 = ctx.r4.u64 | 4380;
	// bl 0x82e64200
	ctx.lr = 0x82DC7470;
	sub_82E64200(ctx, base);
loc_82DC7470:
	// lbz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC747C"))) PPC_WEAK_FUNC(sub_82DC747C);
PPC_FUNC_IMPL(__imp__sub_82DC747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC7480"))) PPC_WEAK_FUNC(sub_82DC7480);
PPC_FUNC_IMPL(__imp__sub_82DC7480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC7488;
	__savegprlr_27(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC7494;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc74c8
	if (!cr6.eq) goto loc_82DC74C8;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC74AC;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC74C8:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b74558
	ctx.lr = 0x82DC74D0;
	sub_82B74558(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82db8cb8
	ctx.lr = 0x82DC74DC;
	sub_82DB8CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc756c
	if (!cr6.eq) goto loc_82DC756C;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC74EC;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7530
	if (cr6.eq) goto loc_82DC7530;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,-20868
	ctx.r30.s64 = ctx.r11.s64 + -20868;
	// addi r4,r30,-340
	ctx.r4.s64 = ctx.r30.s64 + -340;
	// bl 0x837b0c10
	ctx.lr = 0x82DC750C;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-1049
	ctx.r4.s64 = ctx.r30.s64 + -1049;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82DC751C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,622
	ctx.r6.s64 = 622;
loc_82DC752C:
	// bl 0x82e7eb70
	ctx.lr = 0x82DC7530;
	sub_82E7EB70(ctx, base);
loc_82DC7530:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7540;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
loc_82DC7548:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
loc_82DC7554:
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82da8c38
	ctx.lr = 0x82DC755C;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82da8c38
	ctx.lr = 0x82DC7564;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC756C:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bgt cr6,0x82dc7530
	if (cr6.gt) goto loc_82DC7530;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30096
	ctx.r12.s64 = ctx.r12.s64 + 30096;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82DC75F0;
	case 1:
		goto loc_82DC775C;
	case 2:
		goto loc_82DC7784;
	case 3:
		goto loc_82DC78B0;
	case 4:
		goto loc_82DC7530;
	case 5:
		goto loc_82DC7530;
	case 6:
		goto loc_82DC7530;
	case 7:
		goto loc_82DC7530;
	case 8:
		goto loc_82DC7530;
	case 9:
		goto loc_82DC7530;
	case 10:
		goto loc_82DC7918;
	case 11:
		goto loc_82DC7A10;
	case 12:
		goto loc_82DC7A50;
	case 13:
		goto loc_82DC7530;
	case 14:
		goto loc_82DC7530;
	case 15:
		goto loc_82DC7530;
	case 16:
		goto loc_82DC7530;
	case 17:
		goto loc_82DC7530;
	case 18:
		goto loc_82DC7530;
	case 19:
		goto loc_82DC7530;
	case 20:
		goto loc_82DC7530;
	case 21:
		goto loc_82DC7530;
	case 22:
		goto loc_82DC77F4;
	case 23:
		goto loc_82DC7840;
	default:
		return;
	}
	// lwz r22,30192(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30192);
	// lwz r22,30556(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30556);
	// lwz r22,30596(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30596);
	// lwz r22,30896(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30896);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,31000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31000);
	// lwz r22,31248(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31248);
	// lwz r22,31312(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31312);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30000(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30000);
	// lwz r22,30708(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30708);
	// lwz r22,30784(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30784);
loc_82DC75F0:
	// bl 0x82db7190
	ctx.lr = 0x82DC75F4;
	sub_82DB7190(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc7674
	if (!cr6.eq) goto loc_82DC7674;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC7604;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7648
	if (cr6.eq) goto loc_82DC7648;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r30,r11,-20868
	ctx.r30.s64 = ctx.r11.s64 + -20868;
	// addi r4,r30,-236
	ctx.r4.s64 = ctx.r30.s64 + -236;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7624;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-1019
	ctx.r4.s64 = ctx.r30.s64 + -1019;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7634;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,632
	ctx.r6.s64 = 632;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC7648;
	sub_82E7EB70(ctx, base);
loc_82DC7648:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8176
	ctx.r10.s64 = ctx.r11.s64 + -8176;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82e64c60
	ctx.lr = 0x82DC765C;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-27376
	ctx.r7.s64 = ctx.r9.s64 + -27376;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC7674:
	// bl 0x82d48260
	ctx.lr = 0x82DC7678;
	sub_82D48260(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,25496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DC769C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82dc769c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DC769C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82e9bbd8
	ctx.lr = 0x82DC76D8;
	sub_82E9BBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82dc76f0
	if (!cr6.eq) goto loc_82DC76F0;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC76F0:
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC76F4;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7738
	if (cr6.eq) goto loc_82DC7738;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r30,r11,-20868
	ctx.r30.s64 = ctx.r11.s64 + -20868;
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7714;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r30,-1018
	ctx.r4.s64 = ctx.r30.s64 + -1018;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7724;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,650
	ctx.r6.s64 = 650;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC7738;
	sub_82E7EB70(ctx, base);
loc_82DC7738:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7748;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC775C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db8ea0
	ctx.lr = 0x82DC776C;
	sub_82DB8EA0(ctx, base);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7530
	if (cr6.eq) goto loc_82DC7530;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC7784:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82ddcec8
	ctx.lr = 0x82DC778C;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc77c8
	if (!cr6.eq) goto loc_82DC77C8;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8176
	ctx.r10.s64 = ctx.r11.s64 + -8176;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e64c60
	ctx.lr = 0x82DC77B4;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// addi r8,r9,-27376
	ctx.r8.s64 = ctx.r9.s64 + -27376;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82dc77d0
	goto loc_82DC77D0;
loc_82DC77C8:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC77D0:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC77EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC77F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82db9570
	ctx.lr = 0x82DC77FC;
	sub_82DB9570(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-20868
	ctx.r11.s64 = ctx.r11.s64 + -20868;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7810;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DC781C;
	sub_82D894E0(ctx, base);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82DC7828;
	sub_8387E8E0(ctx, base);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7530
	if (cr6.eq) goto loc_82DC7530;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC7840:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82ddcec8
	ctx.lr = 0x82DC7848;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc7884
	if (!cr6.eq) goto loc_82DC7884;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8176
	ctx.r10.s64 = ctx.r11.s64 + -8176;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7870;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// addi r8,r9,-27376
	ctx.r8.s64 = ctx.r9.s64 + -27376;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82dc788c
	goto loc_82DC788C;
loc_82DC7884:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC788C:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC78A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC78B0:
	// lbz r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// lbz r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc7554
	if (!cr6.eq) goto loc_82DC7554;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82db8e08
	ctx.lr = 0x82DC78D0;
	sub_82DB8E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc78e0
	if (cr6.eq) goto loc_82DC78E0;
	// bl 0x82e9b8d8
	ctx.lr = 0x82DC78E0;
	sub_82E9B8D8(ctx, base);
loc_82DC78E0:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4361
	ctx.r4.u64 = ctx.r4.u64 | 4361;
	// bl 0x82e64250
	ctx.lr = 0x82DC78F0;
	sub_82E64250(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4375
	ctx.r4.u64 = ctx.r4.u64 | 4375;
	// bl 0x82e64808
	ctx.lr = 0x82DC7900;
	sub_82E64808(ctx, base);
	// bl 0x82dd9bf0
	ctx.lr = 0x82DC7904;
	sub_82DD9BF0(ctx, base);
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r11,-27776
	ctx.r8.s64 = ctx.r11.s64 + -27776;
	// stb r10,447(r31)
	PPC_STORE_U8(ctx.r31.u32 + 447, ctx.r10.u8);
	// b 0x82dc7548
	goto loc_82DC7548;
loc_82DC7918:
	// bl 0x82d48260
	ctx.lr = 0x82DC791C;
	sub_82D48260(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r30,25496(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82dc7974
	if (!cr6.eq) goto loc_82DC7974;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC7930;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7530
	if (cr6.eq) goto loc_82DC7530;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r30,r11,-20868
	ctx.r30.s64 = ctx.r11.s64 + -20868;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7950;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-1017
	ctx.r4.s64 = ctx.r30.s64 + -1017;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7960;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,737
	ctx.r6.s64 = 737;
	// b 0x82dc752c
	goto loc_82DC752C;
loc_82DC7974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e9bca0
	ctx.lr = 0x82DC797C;
	sub_82E9BCA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dc79c0
	if (!cr6.eq) goto loc_82DC79C0;
	// bl 0x82d86078
	ctx.lr = 0x82DC7988;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc79b4
	if (cr6.eq) goto loc_82DC79B4;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82DC79A4;
	sub_831CE980(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x831ce980
	ctx.lr = 0x82DC79B4;
	sub_831CE980(ctx, base);
loc_82DC79B4:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC79C0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc7554
	if (!cr6.eq) goto loc_82DC7554;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC79CC;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7530
	if (cr6.eq) goto loc_82DC7530;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r30,r11,-20868
	ctx.r30.s64 = ctx.r11.s64 + -20868;
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// bl 0x837b0c10
	ctx.lr = 0x82DC79EC;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-999
	ctx.r4.s64 = ctx.r30.s64 + -999;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x837b0c10
	ctx.lr = 0x82DC79FC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,759
	ctx.r6.s64 = 759;
	// b 0x82dc752c
	goto loc_82DC752C;
loc_82DC7A10:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-20868
	ctx.r4.s64 = ctx.r11.s64 + -20868;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7A20;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DC7A2C;
	sub_82D894E0(ctx, base);
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82DC7A38;
	sub_8387E8E0(ctx, base);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7530
	if (cr6.eq) goto loc_82DC7530;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
loc_82DC7A50:
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x82ddcec8
	ctx.lr = 0x82DC7A58;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc7a90
	if (!cr6.eq) goto loc_82DC7A90;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7A7C;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// b 0x82dc7aac
	goto loc_82DC7AAC;
loc_82DC7A90:
	// bl 0x82e5b4c8
	ctx.lr = 0x82DC7A94;
	sub_82E5B4C8(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4373
	ctx.r4.u64 = ctx.r4.u64 | 4373;
	// bl 0x82e64250
	ctx.lr = 0x82DC7AA4;
	sub_82E64250(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC7AAC:
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7554
	if (cr6.eq) goto loc_82DC7554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC7AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r28.u32);
	// b 0x82dc7554
	goto loc_82DC7554;
}

__attribute__((alias("__imp__sub_82DC7AD0"))) PPC_WEAK_FUNC(sub_82DC7AD0);
PPC_FUNC_IMPL(__imp__sub_82DC7AD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC7AEC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc7b20
	if (!cr6.eq) goto loc_82DC7B20;
loc_82DC7AF8:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7B08;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82dc7c40
	goto loc_82DC7C40;
loc_82DC7B20:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DC7B28;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc7af8
	if (cr6.eq) goto loc_82DC7AF8;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82dc7bc0
	if (cr6.lt) goto loc_82DC7BC0;
	// beq cr6,0x82dc7c04
	if (cr6.eq) goto loc_82DC7C04;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82dc7b78
	if (cr6.lt) goto loc_82DC7B78;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8176
	ctx.r10.s64 = ctx.r11.s64 + -8176;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7B60;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-27376
	ctx.r7.s64 = ctx.r9.s64 + -27376;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// b 0x82dc7c40
	goto loc_82DC7C40;
loc_82DC7B78:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82ddcec8
	ctx.lr = 0x82DC7B80;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc7c40
	if (cr6.eq) goto loc_82DC7C40;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// beq cr6,0x82dc7c40
	if (cr6.eq) goto loc_82DC7C40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC7BB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// b 0x82dc7c40
	goto loc_82DC7C40;
loc_82DC7BC0:
	// bl 0x82db7590
	ctx.lr = 0x82DC7BC4;
	sub_82DB7590(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x82dc7be4
	if (!cr6.lt) goto loc_82DC7BE4;
loc_82DC7BCC:
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-27776
	ctx.r9.s64 = ctx.r11.s64 + -27776;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// b 0x82dc7c40
	goto loc_82DC7C40;
loc_82DC7BE4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC7BEC;
	sub_8307E040(ctx, base);
	// bl 0x82dbac30
	ctx.lr = 0x82DC7BF0;
	sub_82DBAC30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc7bcc
	if (cr6.eq) goto loc_82DC7BCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC7C04:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20852
	ctx.r4.s64 = ctx.r11.s64 + -20852;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7C14;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DC7C20;
	sub_82D894E0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82DC7C2C;
	sub_8387E8E0(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7c40
	if (cr6.eq) goto loc_82DC7C40;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC7C40:
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

__attribute__((alias("__imp__sub_82DC7C58"))) PPC_WEAK_FUNC(sub_82DC7C58);
PPC_FUNC_IMPL(__imp__sub_82DC7C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC7C60;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC7C6C;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc7ca4
	if (!cr6.eq) goto loc_82DC7CA4;
loc_82DC7C78:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7C88;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC7CA4:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DC7CAC;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc7c78
	if (cr6.eq) goto loc_82DC7C78;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82dc7e44
	if (cr6.lt) goto loc_82DC7E44;
	// beq cr6,0x82dc7e4c
	if (cr6.eq) goto loc_82DC7E4C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82dc7d00
	if (cr6.lt) goto loc_82DC7D00;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8176
	ctx.r10.s64 = ctx.r11.s64 + -8176;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7CE4;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-27376
	ctx.r7.s64 = ctx.r9.s64 + -27376;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC7D00:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82ddcec8
	ctx.lr = 0x82DC7D08;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc7e88
	if (cr6.eq) goto loc_82DC7E88;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne cr6,0x82dc7d68
	if (!cr6.eq) goto loc_82DC7D68;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7d3c
	if (cr6.eq) goto loc_82DC7D3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC7D38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
loc_82DC7D3C:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8176
	ctx.r10.s64 = ctx.r11.s64 + -8176;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7D50;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r8,r9,-27376
	ctx.r8.s64 = ctx.r9.s64 + -27376;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC7D68:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dc7e0c
	if (!cr6.eq) goto loc_82DC7E0C;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82e21e40
	ctx.lr = 0x82DC7D88;
	sub_82E21E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc7ddc
	if (!cr6.eq) goto loc_82DC7DDC;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7db4
	if (cr6.eq) goto loc_82DC7DB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC7DB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
loc_82DC7DB4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7DC4;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC7DDC:
	// bl 0x83a7d958
	ctx.lr = 0x82DC7DE0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DC7DE4;
	sub_83524138(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8307e040
	ctx.lr = 0x82DC7DFC;
	sub_8307E040(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82dba298
	ctx.lr = 0x82DC7E0C;
	sub_82DBA298(ctx, base);
loc_82DC7E0C:
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// beq cr6,0x82dc7e88
	if (cr6.eq) goto loc_82DC7E88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC7E38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC7E44:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC7E4C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-20520
	ctx.r4.s64 = ctx.r11.s64 + -20520;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7E5C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DC7E68;
	sub_82D894E0(ctx, base);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82DC7E74;
	sub_8387E8E0(ctx, base);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc7c78
	if (cr6.eq) goto loc_82DC7C78;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC7E88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC7E90"))) PPC_WEAK_FUNC(sub_82DC7E90);
PPC_FUNC_IMPL(__imp__sub_82DC7E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC7E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48260
	ctx.lr = 0x82DC7EA4;
	sub_82D48260(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc7ee0
	if (cr6.eq) goto loc_82DC7EE0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82dc7ee8
	if (cr6.eq) goto loc_82DC7EE8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82dc7f0c
	if (cr6.eq) goto loc_82DC7F0C;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7ED4;
	sub_82E64C60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// b 0x82dc7fb0
	goto loc_82DC7FB0;
loc_82DC7EE0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC7EE8:
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82e5aeb0
	ctx.lr = 0x82DC7F04;
	sub_82E5AEB0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
loc_82DC7F0C:
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82e5ac68
	ctx.lr = 0x82DC7F14;
	sub_82E5AC68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dc7f44
	if (!cr6.eq) goto loc_82DC7F44;
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-27776
	ctx.r9.s64 = ctx.r10.s64 + -27776;
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// std r11,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r11.u64);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC7F44:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc7fc0
	if (!cr6.eq) goto loc_82DC7FC0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r29.u32);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC7F5C;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc7fa0
	if (cr6.eq) goto loc_82DC7FA0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-21865
	ctx.r28.s64 = ctx.r11.s64 + -21865;
	// addi r4,r28,1369
	ctx.r4.s64 = ctx.r28.s64 + 1369;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7F7C;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DC7F8C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,1451
	ctx.r6.s64 = 1451;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC7FA0;
	sub_82E7EB70(ctx, base);
loc_82DC7FA0:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC7FB0;
	sub_82E64C60(ctx, base);
loc_82DC7FB0:
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC7FC0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC7FC8"))) PPC_WEAK_FUNC(sub_82DC7FC8);
PPC_FUNC_IMPL(__imp__sub_82DC7FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC7FD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48260
	ctx.lr = 0x82DC7FDC;
	sub_82D48260(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc8018
	if (cr6.eq) goto loc_82DC8018;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82dc8020
	if (cr6.eq) goto loc_82DC8020;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82dc8044
	if (cr6.eq) goto loc_82DC8044;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC800C;
	sub_82E64C60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// b 0x82dc80e4
	goto loc_82DC80E4;
loc_82DC8018:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC8020:
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82e5af68
	ctx.lr = 0x82DC803C;
	sub_82E5AF68(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
loc_82DC8044:
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82e5ac68
	ctx.lr = 0x82DC804C;
	sub_82E5AC68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dc8078
	if (!cr6.eq) goto loc_82DC8078;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// std r30,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r30.u64);
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8078:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc80f4
	if (!cr6.eq) goto loc_82DC80F4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r29.u32);
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC8090;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc80d4
	if (cr6.eq) goto loc_82DC80D4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-21795
	ctx.r28.s64 = ctx.r11.s64 + -21795;
	// addi r4,r28,1403
	ctx.r4.s64 = ctx.r28.s64 + 1403;
	// bl 0x837b0c10
	ctx.lr = 0x82DC80B0;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DC80C0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,1516
	ctx.r6.s64 = 1516;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC80D4;
	sub_82E7EB70(ctx, base);
loc_82DC80D4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC80E4;
	sub_82E64C60(ctx, base);
loc_82DC80E4:
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC80F4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC80FC"))) PPC_WEAK_FUNC(sub_82DC80FC);
PPC_FUNC_IMPL(__imp__sub_82DC80FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC8100"))) PPC_WEAK_FUNC(sub_82DC8100);
PPC_FUNC_IMPL(__imp__sub_82DC8100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC8108;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48260
	ctx.lr = 0x82DC8114;
	sub_82D48260(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc8160
	if (cr6.eq) goto loc_82DC8160;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// beq cr6,0x82dc8168
	if (cr6.eq) goto loc_82DC8168;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// beq cr6,0x82dc81d0
	if (cr6.eq) goto loc_82DC81D0;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC8144;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8160:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC8168:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC8180;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc81b8
	if (cr6.eq) goto loc_82DC81B8;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-19856
	ctx.r9.s64 = ctx.r10.s64 + -19856;
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r30.u8);
	// stb r30,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r30.u8);
	// b 0x82dc81bc
	goto loc_82DC81BC;
loc_82DC81B8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DC81BC:
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc8280
	if (cr6.eq) goto loc_82DC8280;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC81D0:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8280
	if (cr6.eq) goto loc_82DC8280;
	// bl 0x82e5ac68
	ctx.lr = 0x82DC81E0;
	sub_82E5AC68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc82a0
	if (cr6.eq) goto loc_82DC82A0;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8210
	if (cr6.eq) goto loc_82DC8210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC820C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
loc_82DC8210:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82dc8230
	if (!cr6.eq) goto loc_82DC8230;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8230:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC823C;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8280
	if (cr6.eq) goto loc_82DC8280;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-21794
	ctx.r28.s64 = ctx.r11.s64 + -21794;
	// addi r4,r28,1506
	ctx.r4.s64 = ctx.r28.s64 + 1506;
	// bl 0x837b0c10
	ctx.lr = 0x82DC825C;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DC826C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,1585
	ctx.r6.s64 = 1585;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC8280;
	sub_82E7EB70(ctx, base);
loc_82DC8280:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC8290;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC82A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC82A8"))) PPC_WEAK_FUNC(sub_82DC82A8);
PPC_FUNC_IMPL(__imp__sub_82DC82A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DC82B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC82BC;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc842c
	if (cr6.eq) goto loc_82DC842C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DC82D0;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc842c
	if (cr6.eq) goto loc_82DC842C;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC82E4;
	sub_8307E040(ctx, base);
	// bl 0x82dba420
	ctx.lr = 0x82DC82E8;
	sub_82DBA420(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc83fc
	if (cr6.eq) goto loc_82DC83FC;
	// lis r11,263
	ctx.r11.s64 = 17235968;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r25,2
	ctx.r25.s64 = 2;
	// ori r26,r11,4363
	ctx.r26.u64 = ctx.r11.u64 | 4363;
loc_82DC8304:
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC831C;
	sub_8307E040(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82dbb0f8
	ctx.lr = 0x82DC8324;
	sub_82DBB0F8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82dc83d8
	if (cr6.eq) goto loc_82DC83D8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82dc83e8
	if (!cr6.eq) goto loc_82DC83E8;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC8340;
	sub_8307E040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r24,108(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r31,44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x8307e040
	ctx.lr = 0x82DC8354;
	sub_8307E040(ctx, base);
	// stw r24,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r24.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82dc839c
	if (!cr6.eq) goto loc_82DC839C;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// stw r29,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r29.u32);
	// bne cr6,0x82dc83e8
	if (!cr6.eq) goto loc_82DC83E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc68a0
	ctx.lr = 0x82DC8378;
	sub_82DC68A0(ctx, base);
	// bl 0x82db7320
	ctx.lr = 0x82DC837C;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc83a0
	if (cr6.eq) goto loc_82DC83A0;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,4362
	ctx.r4.u64 = ctx.r4.u64 | 4362;
	// bl 0x82e64250
	ctx.lr = 0x82DC8398;
	sub_82E64250(ctx, base);
	// b 0x82dc83a0
	goto loc_82DC83A0;
loc_82DC839C:
	// stw r25,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r25.u32);
loc_82DC83A0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82dc83e8
	if (!cr6.eq) goto loc_82DC83E8;
	// bl 0x82dad2e0
	ctx.lr = 0x82DC83B0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc83c0
	if (cr6.eq) goto loc_82DC83C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82dad3e0
	ctx.lr = 0x82DC83C0;
	sub_82DAD3E0(ctx, base);
loc_82DC83C0:
	// stb r29,240(r30)
	PPC_STORE_U8(ctx.r30.u32 + 240, ctx.r29.u8);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,4376
	ctx.r4.u64 = ctx.r4.u64 | 4376;
	// bl 0x82e64808
	ctx.lr = 0x82DC83D4;
	sub_82E64808(ctx, base);
	// b 0x82dc83e8
	goto loc_82DC83E8;
loc_82DC83D8:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,408
	ctx.r3.s64 = ctx.r30.s64 + 408;
	// bl 0x833d9058
	ctx.lr = 0x82DC83E8;
	sub_833D9058(ctx, base);
loc_82DC83E8:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC83F0;
	sub_8307E040(ctx, base);
	// bl 0x82dba420
	ctx.lr = 0x82DC83F4;
	sub_82DBA420(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc8304
	if (!cr6.eq) goto loc_82DC8304;
loc_82DC83FC:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc842c
	if (cr6.eq) goto loc_82DC842C;
	// lbz r11,445(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 445);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc842c
	if (!cr6.eq) goto loc_82DC842C;
	// lbz r11,447(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 447);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc842c
	if (cr6.eq) goto loc_82DC842C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc61e0
	ctx.lr = 0x82DC8428;
	sub_82DC61E0(ctx, base);
	// stb r29,447(r30)
	PPC_STORE_U8(ctx.r30.u32 + 447, ctx.r29.u8);
loc_82DC842C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC8434"))) PPC_WEAK_FUNC(sub_82DC8434);
PPC_FUNC_IMPL(__imp__sub_82DC8434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC8438"))) PPC_WEAK_FUNC(sub_82DC8438);
PPC_FUNC_IMPL(__imp__sub_82DC8438) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// addi r4,r9,-22544
	ctx.r4.s64 = ctx.r9.s64 + -22544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82DC8488;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82DC84A0"))) PPC_WEAK_FUNC(sub_82DC84A0);
PPC_FUNC_IMPL(__imp__sub_82DC84A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC84A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC84B4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc84d4
	if (cr6.eq) goto loc_82DC84D4;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82dc8578
	if (cr6.lt) goto loc_82DC8578;
	// beq cr6,0x82dc85a8
	if (cr6.eq) goto loc_82DC85A8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82dc8500
	if (cr6.lt) goto loc_82DC8500;
loc_82DC84D4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC84E4;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8500:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82ddcec8
	ctx.lr = 0x82DC8508;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc8708
	if (cr6.eq) goto loc_82DC8708;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc853c
	if (!cr6.eq) goto loc_82DC853C;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8176
	ctx.r10.s64 = ctx.r11.s64 + -8176;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e64c60
	ctx.lr = 0x82DC852C;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// addi r8,r9,-27376
	ctx.r8.s64 = ctx.r9.s64 + -27376;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82dc8548
	goto loc_82DC8548;
loc_82DC853C:
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
loc_82DC8548:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8708
	if (cr6.eq) goto loc_82DC8708;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC856C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8578:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc85a0
	if (cr6.eq) goto loc_82DC85A0;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-27776
	ctx.r9.s64 = ctx.r11.s64 + -27776;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC85A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC85A8:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82db8bb8
	ctx.lr = 0x82DC85C0;
	sub_82DB8BB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc8438
	ctx.lr = 0x82DC85C8;
	sub_82DC8438(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b74558
	ctx.lr = 0x82DC85D0;
	sub_82B74558(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82db8cb8
	ctx.lr = 0x82DC85DC;
	sub_82DB8CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc8658
	if (cr6.eq) goto loc_82DC8658;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lbz r10,416(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 416);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// bl 0x82db7320
	ctx.lr = 0x82DC85FC;
	sub_82DB7320(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc8658
	if (cr6.eq) goto loc_82DC8658;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b76c30
	ctx.lr = 0x82DC8610;
	sub_82B76C30(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82db97a0
	ctx.lr = 0x82DC8618;
	sub_82DB97A0(ctx, base);
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc8650
	if (cr6.eq) goto loc_82DC8650;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC8650;
	sub_8259CB28(ctx, base);
loc_82DC8650:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b74e28
	ctx.lr = 0x82DC8658;
	sub_82B74E28(ctx, base);
loc_82DC8658:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e64ba0
	ctx.lr = 0x82DC8668;
	sub_82E64BA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc8680
	if (cr6.eq) goto loc_82DC8680;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82dc86e8
	goto loc_82DC86E8;
loc_82DC8680:
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC8684;
	sub_82E7E2F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc86c8
	if (cr6.eq) goto loc_82DC86C8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r29,r11,-21918
	ctx.r29.s64 = ctx.r11.s64 + -21918;
	// addi r4,r29,606
	ctx.r4.s64 = ctx.r29.s64 + 606;
	// bl 0x837b0c10
	ctx.lr = 0x82DC86A4;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82DC86B4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,578
	ctx.r6.s64 = 578;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC86C8;
	sub_82E7EB70(ctx, base);
loc_82DC86C8:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC86D8;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC86E8:
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82da8c38
	ctx.lr = 0x82DC86F0;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82da8c38
	ctx.lr = 0x82DC86F8;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dc6fb0
	ctx.lr = 0x82DC8700;
	sub_82DC6FB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x82DC8708;
	sub_82F73D60(ctx, base);
loc_82DC8708:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC8710"))) PPC_WEAK_FUNC(sub_82DC8710);
PPC_FUNC_IMPL(__imp__sub_82DC8710) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82b74558
	ctx.lr = 0x82DC8734;
	sub_82B74558(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82db8cb8
	ctx.lr = 0x82DC8740;
	sub_82DB8CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82dc8760
	if (cr6.eq) goto loc_82DC8760;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// b 0x82dc8768
	goto loc_82DC8768;
loc_82DC8760:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r4,r11,-8060
	ctx.r4.s64 = ctx.r11.s64 + -8060;
loc_82DC8768:
	// bl 0x8259cb28
	ctx.lr = 0x82DC876C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8774;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82DC877C;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_82DC8794"))) PPC_WEAK_FUNC(sub_82DC8794);
PPC_FUNC_IMPL(__imp__sub_82DC8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC8798"))) PPC_WEAK_FUNC(sub_82DC8798);
PPC_FUNC_IMPL(__imp__sub_82DC8798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC87A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC87AC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8900
	if (cr6.eq) goto loc_82DC8900;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253f910
	ctx.lr = 0x82DC87C4;
	sub_8253F910(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8900
	if (cr6.eq) goto loc_82DC8900;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc8438
	ctx.lr = 0x82DC87D4;
	sub_82DC8438(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df9b28
	ctx.lr = 0x82DC87E0;
	sub_82DF9B28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc88f8
	if (cr6.eq) goto loc_82DC88F8;
	// bl 0x83a7d958
	ctx.lr = 0x82DC87F0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DC87F4;
	sub_83524138(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lbz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC8814;
	sub_8307E040(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbb278
	ctx.lr = 0x82DC8820;
	sub_82DBB278(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82dc8838
	if (cr6.eq) goto loc_82DC8838;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC8834;
	sub_8307E040(ctx, base);
	// std r29,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r29.u64);
loc_82DC8838:
	// bl 0x82db7320
	ctx.lr = 0x82DC883C;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc88f8
	if (cr6.eq) goto loc_82DC88F8;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc88f8
	if (cr6.eq) goto loc_82DC88F8;
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82dc88f8
	if (!cr6.eq) goto loc_82DC88F8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b76c30
	ctx.lr = 0x82DC886C;
	sub_82B76C30(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC88A4;
	sub_8259CB28(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC88AC;
	sub_8307E040(ctx, base);
	// lbz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DC88E4;
	sub_8259CB28(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC88EC;
	sub_8307E040(ctx, base);
	// std r29,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r29.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b74e28
	ctx.lr = 0x82DC88F8;
	sub_82B74E28(ctx, base);
loc_82DC88F8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc6fb0
	ctx.lr = 0x82DC8900;
	sub_82DC6FB0(ctx, base);
loc_82DC8900:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC8908"))) PPC_WEAK_FUNC(sub_82DC8908);
PPC_FUNC_IMPL(__imp__sub_82DC8908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC8910;
	__savegprlr_27(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC891C;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8950
	if (cr6.eq) goto loc_82DC8950;
	// bl 0x82d48260
	ctx.lr = 0x82DC892C;
	sub_82D48260(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc897c
	if (cr6.eq) goto loc_82DC897C;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// beq cr6,0x82dc8984
	if (cr6.eq) goto loc_82DC8984;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// beq cr6,0x82dc8a5c
	if (cr6.eq) goto loc_82DC8A5C;
loc_82DC8950:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC8960;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC897C:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC8984:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b75c90
	ctx.lr = 0x82DC898C;
	sub_82B75C90(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC8994;
	sub_8307E040(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82dba220
	ctx.lr = 0x82DC899C;
	sub_82DBA220(ctx, base);
	// lbz r10,249(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 249);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc89b8
	if (!cr6.eq) goto loc_82DC89B8;
	// lbz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 248);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc89bc
	if (cr6.eq) goto loc_82DC89BC;
loc_82DC89B8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DC89BC:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC89D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8a0c
	if (cr6.eq) goto loc_82DC8A0C;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stb r29,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r29.u8);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-19856
	ctx.r9.s64 = ctx.r10.s64 + -19856;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r28,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r28.u8);
	// b 0x82dc8a10
	goto loc_82DC8A10;
loc_82DC8A0C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DC8A10:
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc8a4c
	if (!cr6.eq) goto loc_82DC8A4C;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC8A2C;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// bl 0x82b75b00
	ctx.lr = 0x82DC8A44;
	sub_82B75B00(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8A4C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b75b00
	ctx.lr = 0x82DC8A54;
	sub_82B75B00(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC8A5C:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8b08
	if (cr6.eq) goto loc_82DC8B08;
	// bl 0x82e5ac68
	ctx.lr = 0x82DC8A6C;
	sub_82E5AC68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc8b28
	if (cr6.eq) goto loc_82DC8B28;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8a9c
	if (cr6.eq) goto loc_82DC8A9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC8A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
loc_82DC8A9C:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82dc8abc
	if (!cr6.eq) goto loc_82DC8ABC;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8ABC:
	// stw r28,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC8AC4;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8b08
	if (cr6.eq) goto loc_82DC8B08;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-21793
	ctx.r28.s64 = ctx.r11.s64 + -21793;
	// addi r4,r28,1609
	ctx.r4.s64 = ctx.r28.s64 + 1609;
	// bl 0x837b0c10
	ctx.lr = 0x82DC8AE4;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DC8AF4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,1669
	ctx.r6.s64 = 1669;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC8B08;
	sub_82E7EB70(ctx, base);
loc_82DC8B08:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC8B18;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC8B28:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC8B30"))) PPC_WEAK_FUNC(sub_82DC8B30);
PPC_FUNC_IMPL(__imp__sub_82DC8B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC8B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC8B48;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8bf4
	if (cr6.eq) goto loc_82DC8BF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82db9c40
	ctx.lr = 0x82DC8B68;
	sub_82DB9C40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc8bc8
	if (cr6.eq) goto loc_82DC8BC8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc8bc8
	if (cr6.eq) goto loc_82DC8BC8;
loc_82DC8B88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82db7600
	ctx.lr = 0x82DC8B94;
	sub_82DB7600(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc8c00
	if (!cr6.eq) goto loc_82DC8C00;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8BAC;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8BB4;
	sub_82DA8C38(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc8b88
	if (!cr6.eq) goto loc_82DC8B88;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82DC8BC8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8bf4
	if (cr6.eq) goto loc_82DC8BF4;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82b76760
	ctx.lr = 0x82DC8BE0;
	sub_82B76760(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DC8BF4;
	sub_825952B8(ctx, base);
loc_82DC8BF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DC8C00:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8e68
	ctx.lr = 0x82DC8C0C;
	sub_82DA8E68(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8C14;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8C1C;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b767b8
	ctx.lr = 0x82DC8C24;
	sub_82B767B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC8C30"))) PPC_WEAK_FUNC(sub_82DC8C30);
PPC_FUNC_IMPL(__imp__sub_82DC8C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC8C38;
	__savegprlr_27(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC8C44;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8c88
	if (cr6.eq) goto loc_82DC8C88;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DC8C58;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc8c88
	if (cr6.eq) goto loc_82DC8C88;
	// bl 0x82d48260
	ctx.lr = 0x82DC8C68;
	sub_82D48260(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82dc8ca4
	if (cr6.eq) goto loc_82DC8CA4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82dc8cac
	if (cr6.eq) goto loc_82DC8CAC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82dc8d48
	if (cr6.eq) goto loc_82DC8D48;
loc_82DC8C88:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC8C98;
	sub_82E64C60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// b 0x82dc8dfc
	goto loc_82DC8DFC;
loc_82DC8CA4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC8CAC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8d18
	ctx.lr = 0x82DC8CB4;
	sub_82DA8D18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc8b30
	ctx.lr = 0x82DC8CC0;
	sub_82DC8B30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc8cdc
	if (!cr6.eq) goto loc_82DC8CDC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8CD4;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8CDC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82da8e68
	ctx.lr = 0x82DC8CE8;
	sub_82DA8E68(ctx, base);
	// ld r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 392);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82b75c90
	ctx.lr = 0x82DC8CFC;
	sub_82B75C90(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC8D04;
	sub_8307E040(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82dba220
	ctx.lr = 0x82DC8D0C;
	sub_82DBA220(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc8d20
	if (cr6.eq) goto loc_82DC8D20;
	// lbz r10,297(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 297);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82DC8D20:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b75b00
	ctx.lr = 0x82DC8D28;
	sub_82B75B00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82e5aeb0
	ctx.lr = 0x82DC8D38;
	sub_82E5AEB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8D40;
	sub_82DA8C38(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DC8D48:
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82e5ac68
	ctx.lr = 0x82DC8D50;
	sub_82E5AC68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82dc8d90
	if (!cr6.eq) goto loc_82DC8D90;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r4,r4,4372
	ctx.r4.u64 = ctx.r4.u64 | 4372;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// bl 0x82e64250
	ctx.lr = 0x82DC8D78;
	sub_82E64250(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27776
	ctx.r9.s64 = ctx.r10.s64 + -27776;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC8D90:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82dc8e0c
	if (!cr6.eq) goto loc_82DC8E0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC8DA8;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc8dec
	if (cr6.eq) goto loc_82DC8DEC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r28,r11,-21866
	ctx.r28.s64 = ctx.r11.s64 + -21866;
	// addi r4,r28,1242
	ctx.r4.s64 = ctx.r28.s64 + 1242;
	// bl 0x837b0c10
	ctx.lr = 0x82DC8DC8;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82DC8DD8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,892
	ctx.r6.s64 = 892;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC8DEC;
	sub_82E7EB70(ctx, base);
loc_82DC8DEC:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC8DFC;
	sub_82E64C60(ctx, base);
loc_82DC8DFC:
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DC8E0C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC8E14"))) PPC_WEAK_FUNC(sub_82DC8E14);
PPC_FUNC_IMPL(__imp__sub_82DC8E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC8E18"))) PPC_WEAK_FUNC(sub_82DC8E18);
PPC_FUNC_IMPL(__imp__sub_82DC8E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC8E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DC8E2C;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc91c0
	if (cr6.eq) goto loc_82DC91C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc6180
	ctx.lr = 0x82DC8E40;
	sub_82DC6180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc91c0
	if (cr6.eq) goto loc_82DC91C0;
	// bl 0x82db7590
	ctx.lr = 0x82DC8E50;
	sub_82DB7590(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x82dc8e64
	if (!cr6.lt) goto loc_82DC8E64;
	// stb r29,446(r31)
	PPC_STORE_U8(ctx.r31.u32 + 446, ctx.r29.u8);
loc_82DC8E64:
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc8ea4
	if (!cr6.eq) goto loc_82DC8EA4;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x82dc8e8c
	if (!cr6.lt) goto loc_82DC8E8C;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// ori r4,r4,4364
	ctx.r4.u64 = ctx.r4.u64 | 4364;
	// b 0x82dc8e98
	goto loc_82DC8E98;
loc_82DC8E8C:
	// ble cr6,0x82dc8ea4
	if (!cr6.gt) goto loc_82DC8EA4;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// ori r4,r4,4365
	ctx.r4.u64 = ctx.r4.u64 | 4365;
loc_82DC8E98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e64250
	ctx.lr = 0x82DC8EA0;
	sub_82E64250(ctx, base);
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
loc_82DC8EA4:
	// lbz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc8ed0
	if (cr6.eq) goto loc_82DC8ED0;
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x82dc8f84
	if (!cr6.eq) goto loc_82DC8F84;
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x82dc8f84
	if (!cr6.eq) goto loc_82DC8F84;
	// stb r29,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r29.u8);
	// b 0x82dc8f84
	goto loc_82DC8F84;
loc_82DC8ED0:
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc8f84
	if (!cr6.eq) goto loc_82DC8F84;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82dc8f84
	if (!cr6.eq) goto loc_82DC8F84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b74558
	ctx.lr = 0x82DC8EF0;
	sub_82B74558(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82db8d40
	ctx.lr = 0x82DC8EF8;
	sub_82DB8D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc8f74
	if (cr6.eq) goto loc_82DC8F74;
	// lbz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 196);
	// ld r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc8f28
	if (cr6.eq) goto loc_82DC8F28;
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// beq cr6,0x82dc8f34
	if (cr6.eq) goto loc_82DC8F34;
	// std r10,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r10.u64);
	// b 0x82dc8f30
	goto loc_82DC8F30;
loc_82DC8F28:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82dc8f34
	if (cr6.eq) goto loc_82DC8F34;
loc_82DC8F30:
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
loc_82DC8F34:
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82dc8f54
	if (cr6.eq) goto loc_82DC8F54;
	// stb r30,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r30.u8);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4371
	ctx.r4.u64 = ctx.r4.u64 | 4371;
	// bl 0x82e64250
	ctx.lr = 0x82DC8F54;
	sub_82E64250(ctx, base);
loc_82DC8F54:
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82dc8f74
	if (cr6.eq) goto loc_82DC8F74;
	// stb r30,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r30.u8);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4370
	ctx.r4.u64 = ctx.r4.u64 | 4370;
	// bl 0x82e64250
	ctx.lr = 0x82DC8F74;
	sub_82E64250(ctx, base);
loc_82DC8F74:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8F7C;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82DC8F84;
	sub_82DA8C38(ctx, base);
loc_82DC8F84:
	// lbz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc8f9c
	if (!cr6.eq) goto loc_82DC8F9C;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bge cr6,0x82dc8f9c
	if (!cr6.lt) goto loc_82DC8F9C;
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
loc_82DC8F9C:
	// lbz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc8fb8
	if (!cr6.eq) goto loc_82DC8FB8;
	// lbz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 312);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc8fbc
	if (cr6.eq) goto loc_82DC8FBC;
loc_82DC8FB8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DC8FBC:
	// lbz r10,241(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 241);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc90c4
	if (!cr6.eq) goto loc_82DC90C4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc90c4
	if (!cr6.eq) goto loc_82DC90C4;
	// bl 0x82dad2e0
	ctx.lr = 0x82DC8FD8;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc9090
	if (cr6.eq) goto loc_82DC9090;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc8ff4
	if (!cr6.eq) goto loc_82DC8FF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82dc8ff8
	goto loc_82DC8FF8;
loc_82DC8FF4:
	// bl 0x82e744e0
	ctx.lr = 0x82DC8FF8;
	sub_82E744E0(ctx, base);
loc_82DC8FF8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc903c
	if (cr6.eq) goto loc_82DC903C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// bl 0x82e64290
	ctx.lr = 0x82DC9010;
	sub_82E64290(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC9024;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4367
	ctx.r4.u64 = ctx.r4.u64 | 4367;
	// bl 0x82e64250
	ctx.lr = 0x82DC9034;
	sub_82E64250(ctx, base);
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// b 0x82dc90c0
	goto loc_82DC90C0;
loc_82DC903C:
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bge cr6,0x82dc90c4
	if (!cr6.lt) goto loc_82DC90C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// bl 0x82e64290
	ctx.lr = 0x82DC9050;
	sub_82E64290(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC9064;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x82DC9068;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc9078
	if (cr6.eq) goto loc_82DC9078;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82dad3e0
	ctx.lr = 0x82DC9078;
	sub_82DAD3E0(ctx, base);
loc_82DC9078:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4367
	ctx.r4.u64 = ctx.r4.u64 | 4367;
	// bl 0x82e64250
	ctx.lr = 0x82DC9088;
	sub_82E64250(ctx, base);
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// b 0x82dc90c0
	goto loc_82DC90C0;
loc_82DC9090:
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bne cr6,0x82dc90c4
	if (!cr6.eq) goto loc_82DC90C4;
	// lbz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc90c4
	if (cr6.eq) goto loc_82DC90C4;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc8b30
	ctx.lr = 0x82DC90B0;
	sub_82DC8B30(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4366
	ctx.r4.u64 = ctx.r4.u64 | 4366;
	// bl 0x82e64250
	ctx.lr = 0x82DC90C0;
	sub_82E64250(ctx, base);
loc_82DC90C0:
	// stb r30,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r30.u8);
loc_82DC90C4:
	// lbz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc90f0
	if (cr6.eq) goto loc_82DC90F0;
	// bl 0x82dc6a30
	ctx.lr = 0x82DC90D4;
	sub_82DC6A30(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82dc90f0
	if (cr6.eq) goto loc_82DC90F0;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4381
	ctx.r4.u64 = ctx.r4.u64 | 4381;
	// bl 0x82e64200
	ctx.lr = 0x82DC90EC;
	sub_82E64200(ctx, base);
	// stb r29,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r29.u8);
loc_82DC90F0:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC90F8;
	sub_8307E040(ctx, base);
	// ld r30,184(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// ld r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// ble cr6,0x82dc91c0
	if (!cr6.gt) goto loc_82DC91C0;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC9110;
	sub_8307E040(ctx, base);
	// bl 0x82dbb020
	ctx.lr = 0x82DC9114;
	sub_82DBB020(ctx, base);
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bge cr6,0x82dc9198
	if (!cr6.lt) goto loc_82DC9198;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC9124;
	sub_8307E040(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82dc9168
	if (cr6.eq) goto loc_82DC9168;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC9148;
	sub_8307E040(ctx, base);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4379
	ctx.r4.u64 = ctx.r4.u64 | 4379;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// bl 0x82e64200
	ctx.lr = 0x82DC9168;
	sub_82E64200(ctx, base);
loc_82DC9168:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC9170;
	sub_8307E040(ctx, base);
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82DC9198;
	sub_8259CC28(ctx, base);
loc_82DC9198:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc6810
	ctx.lr = 0x82DC91A0;
	sub_82DC6810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc91bc
	if (cr6.eq) goto loc_82DC91BC;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4368
	ctx.r4.u64 = ctx.r4.u64 | 4368;
	// bl 0x82e64250
	ctx.lr = 0x82DC91BC;
	sub_82E64250(ctx, base);
loc_82DC91BC:
	// std r30,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r30.u64);
loc_82DC91C0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC91C8"))) PPC_WEAK_FUNC(sub_82DC91C8);
PPC_FUNC_IMPL(__imp__sub_82DC91C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82DC91D0;
	__savegprlr_14(ctx, base);
	// lis r11,-32036
	ctx.r11.s64 = -2099511296;
	// std r4,-288(r1)
	PPC_STORE_U64(ctx.r1.u32 + -288, ctx.r4.u64);
	// lis r10,-32036
	ctx.r10.s64 = -2099511296;
	// addi r11,r11,26896
	ctx.r11.s64 = ctx.r11.s64 + 26896;
	// addi r10,r10,27040
	ctx.r10.s64 = ctx.r10.s64 + 27040;
	// lis r8,-32036
	ctx.r8.s64 = -2099511296;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// lis r24,263
	ctx.r24.s64 = 17235968;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r23,263
	ctx.r23.s64 = 17235968;
	// addi r8,r8,29824
	ctx.r8.s64 = ctx.r8.s64 + 29824;
	// ori r11,r24,4362
	ctx.r11.u64 = ctx.r24.u64 | 4362;
	// ori r10,r23,4363
	ctx.r10.u64 = ctx.r23.u64 | 4363;
	// stw r8,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r8.u32);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// stw r11,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r11.u32);
	// lis r7,-32035
	ctx.r7.s64 = -2099445760;
	// stw r10,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r10.u32);
	// lis r6,-32036
	ctx.r6.s64 = -2099511296;
	// lis r22,263
	ctx.r22.s64 = 17235968;
	// addi r9,r9,-31584
	ctx.r9.s64 = ctx.r9.s64 + -31584;
	// lis r5,-32036
	ctx.r5.s64 = -2099511296;
	// addi r10,r7,-29648
	ctx.r10.s64 = ctx.r7.s64 + -29648;
	// stw r9,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r9.u32);
	// addi r8,r6,25704
	ctx.r8.s64 = ctx.r6.s64 + 25704;
	// ori r11,r22,4364
	ctx.r11.u64 = ctx.r22.u64 | 4364;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r21,263
	ctx.r21.s64 = 17235968;
	// stw r8,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r8.u32);
	// lis r20,263
	ctx.r20.s64 = 17235968;
	// stw r11,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r11.u32);
	// lis r19,263
	ctx.r19.s64 = 17235968;
	// lis r31,-32036
	ctx.r31.s64 = -2099511296;
	// lis r18,263
	ctx.r18.s64 = 17235968;
	// lis r17,263
	ctx.r17.s64 = 17235968;
	// addi r6,r5,27560
	ctx.r6.s64 = ctx.r5.s64 + 27560;
	// ori r9,r21,4365
	ctx.r9.u64 = ctx.r21.u64 | 4365;
	// ori r7,r20,4366
	ctx.r7.u64 = ctx.r20.u64 | 4366;
	// stw r6,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r6.u32);
	// ori r5,r19,4367
	ctx.r5.u64 = ctx.r19.u64 | 4367;
	// stw r9,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r9.u32);
	// addi r11,r31,26008
	ctx.r11.s64 = ctx.r31.s64 + 26008;
	// stw r7,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r7.u32);
	// ori r10,r18,4368
	ctx.r10.u64 = ctx.r18.u64 | 4368;
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// ori r8,r17,4369
	ctx.r8.u64 = ctx.r17.u64 | 4369;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// lis r30,-32036
	ctx.r30.s64 = -2099511296;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// lis r29,-32036
	ctx.r29.s64 = -2099511296;
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// lis r28,-32036
	ctx.r28.s64 = -2099511296;
	// lis r16,263
	ctx.r16.s64 = 17235968;
	// lis r27,-32036
	ctx.r27.s64 = -2099511296;
	// lis r26,263
	ctx.r26.s64 = 17235968;
	// lis r25,263
	ctx.r25.s64 = 17235968;
	// lis r15,263
	ctx.r15.s64 = 17235968;
	// lis r14,263
	ctx.r14.s64 = 17235968;
	// addi r9,r30,31440
	ctx.r9.s64 = ctx.r30.s64 + 31440;
	// addi r7,r29,31832
	ctx.r7.s64 = ctx.r29.s64 + 31832;
	// ori r6,r16,4370
	ctx.r6.u64 = ctx.r16.u64 | 4370;
	// stw r9,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// addi r5,r28,32400
	ctx.r5.s64 = ctx.r28.s64 + 32400;
	// stw r7,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r7.u32);
	// lis r4,-32035
	ctx.r4.s64 = -2099445760;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// ori r26,r26,4360
	ctx.r26.u64 = ctx.r26.u64 | 4360;
	// stw r5,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r5.u32);
	// ori r25,r25,4361
	ctx.r25.u64 = ctx.r25.u64 | 4361;
	// ori r11,r15,4371
	ctx.r11.u64 = ctx.r15.u64 | 4371;
	// stw r26,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// addi r10,r27,32712
	ctx.r10.s64 = ctx.r27.s64 + 32712;
	// stw r25,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r25.u32);
	// ori r8,r14,4372
	ctx.r8.u64 = ctx.r14.u64 | 4372;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// lis r7,263
	ctx.r7.s64 = 17235968;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// lis r6,-32035
	ctx.r6.s64 = -2099445760;
	// addi r5,r4,-32512
	ctx.r5.s64 = ctx.r4.s64 + -32512;
	// ori r11,r7,4373
	ctx.r11.u64 = ctx.r7.u64 | 4373;
	// ld r4,-288(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r8,r6,-30456
	ctx.r8.s64 = ctx.r6.s64 + -30456;
	// stw r5,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r5.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r8,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r8.u32);
	// addi r11,r1,-272
	ctx.r11.s64 = ctx.r1.s64 + -272;
	// stw r9,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r9.u32);
	// stw r9,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r9.u32);
loc_82DC933C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc9364
	if (cr6.eq) goto loc_82DC9364;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x82dc933c
	if (cr6.lt) goto loc_82DC933C;
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82DC9364:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC937C"))) PPC_WEAK_FUNC(sub_82DC937C);
PPC_FUNC_IMPL(__imp__sub_82DC937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9380"))) PPC_WEAK_FUNC(sub_82DC9380);
PPC_FUNC_IMPL(__imp__sub_82DC9380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DC9388;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,445(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 445);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc93bc
	if (cr6.eq) goto loc_82DC93BC;
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// bl 0x8344cfa0
	ctx.lr = 0x82DC93A4;
	sub_8344CFA0(ctx, base);
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// bl 0x8308ac30
	ctx.lr = 0x82DC93AC;
	sub_8308AC30(ctx, base);
loc_82DC93AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r27)
	PPC_STORE_U8(ctx.r27.u32 + 100, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DC93BC:
	// bl 0x82d86078
	ctx.lr = 0x82DC93C0;
	sub_82D86078(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc93d4
	if (!cr6.eq) goto loc_82DC93D4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82dc93f8
	goto loc_82DC93F8;
loc_82DC93D4:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DC93DC;
	sub_8307E040(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82dc93f4
	if (cr6.eq) goto loc_82DC93F4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82dc93f8
	if (!cr6.eq) goto loc_82DC93F8;
loc_82DC93F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DC93F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc94a4
	if (cr6.eq) goto loc_82DC94A4;
	// lwz r11,424(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82dc94a4
	if (!cr6.gt) goto loc_82DC94A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r26,408(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 408);
	// lwz r31,420(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// addi r28,r27,408
	ctx.r28.s64 = ctx.r27.s64 + 408;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
loc_82DC9424:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc949c
	if (cr6.eq) goto loc_82DC949C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x82dc9448
	if (cr6.eq) goto loc_82DC9448;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82DC9448:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82dc9460
	if (cr6.gt) goto loc_82DC9460;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82DC9460:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82dc72d8
	ctx.lr = 0x82DC9490;
	sub_82DC72D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x82dc9424
	goto loc_82DC9424;
loc_82DC949C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8344cfa0
	ctx.lr = 0x82DC94A4;
	sub_8344CFA0(ctx, base);
loc_82DC94A4:
	// lwz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82dc93ac
	if (!cr6.gt) goto loc_82DC93AC;
	// stb r29,100(r27)
	PPC_STORE_U8(ctx.r27.u32 + 100, ctx.r29.u8);
	// addi r31,r27,108
	ctx.r31.s64 = ctx.r27.s64 + 108;
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// beq cr6,0x82dc94d0
	if (cr6.eq) goto loc_82DC94D0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DC94D0:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82dc94e4
	if (cr6.gt) goto loc_82DC94E4;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82DC94E4:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82dc91c8
	ctx.lr = 0x82DC94FC;
	sub_82DC91C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308a698
	ctx.lr = 0x82DC9504;
	sub_8308A698(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC950C"))) PPC_WEAK_FUNC(sub_82DC950C);
PPC_FUNC_IMPL(__imp__sub_82DC950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9510"))) PPC_WEAK_FUNC(sub_82DC9510);
PPC_FUNC_IMPL(__imp__sub_82DC9510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC9518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,432(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82dc95c4
	if (cr6.eq) goto loc_82DC95C4;
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc95c4
	if (!cr6.eq) goto loc_82DC95C4;
	// lis r11,1115
	ctx.r11.s64 = 73072640;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r11,16
	ctx.r8.u64 = ctx.r11.u64 | 16;
	// lis r30,507
	ctx.r30.s64 = 33226752;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ori r30,r30,62
	ctx.r30.u64 = ctx.r30.u64 | 62;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82DC9560:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82dc9580
	if (cr6.eq) goto loc_82DC9580;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82dc9560
	if (cr6.lt) goto loc_82DC9560;
	// b 0x82dc958c
	goto loc_82DC958C;
loc_82DC9580:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82DC958C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r3,r11,-20080
	ctx.r3.s64 = ctx.r11.s64 + -20080;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82DC95A4;
	sub_82D2F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82DC95B0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82DC95BC;
	sub_83103100(ctx, base);
	// stw r28,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r28.u32);
	// stw r29,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r29.u32);
loc_82DC95C4:
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// addi r10,r11,-27776
	ctx.r10.s64 = ctx.r11.s64 + -27776;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC95DC"))) PPC_WEAK_FUNC(sub_82DC95DC);
PPC_FUNC_IMPL(__imp__sub_82DC95DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC95E0"))) PPC_WEAK_FUNC(sub_82DC95E0);
PPC_FUNC_IMPL(__imp__sub_82DC95E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC95E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r30.u8);
	// beq cr6,0x82dc961c
	if (cr6.eq) goto loc_82DC961C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC9618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_82DC961C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc96a4
	if (cr6.eq) goto loc_82DC96A4;
	// lis r3,1115
	ctx.r3.s64 = 73072640;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// bl 0x82d86180
	ctx.lr = 0x82DC9634;
	sub_82D86180(ctx, base);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC9638;
	sub_82E7E2F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc967c
	if (cr6.eq) goto loc_82DC967C;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-21783
	ctx.r29.s64 = ctx.r11.s64 + -21783;
	// addi r4,r29,1719
	ctx.r4.s64 = ctx.r29.s64 + 1719;
	// bl 0x837b0c10
	ctx.lr = 0x82DC9658;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82DC9668;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,2353
	ctx.r6.s64 = 2353;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC967C;
	sub_82E7EB70(ctx, base);
loc_82DC967C:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC968C;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r10,-27376
	ctx.r9.s64 = ctx.r10.s64 + -27376;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC96A4:
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// addi r9,r11,-27376
	ctx.r9.s64 = ctx.r11.s64 + -27376;
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC96C8"))) PPC_WEAK_FUNC(sub_82DC96C8);
PPC_FUNC_IMPL(__imp__sub_82DC96C8) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc9714
	if (cr6.eq) goto loc_82DC9714;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e64f98
	ctx.lr = 0x82DC96FC;
	sub_82E64F98(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830f6290
	ctx.lr = 0x82DC9710;
	sub_830F6290(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DC9714:
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

__attribute__((alias("__imp__sub_82DC972C"))) PPC_WEAK_FUNC(sub_82DC972C);
PPC_FUNC_IMPL(__imp__sub_82DC972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9730"))) PPC_WEAK_FUNC(sub_82DC9730);
PPC_FUNC_IMPL(__imp__sub_82DC9730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC9738;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e6f960
	ctx.lr = 0x82DC9744;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc9860
	if (cr6.eq) goto loc_82DC9860;
	// bl 0x82e6f960
	ctx.lr = 0x82DC9750;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82DC9758;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9860
	if (cr6.eq) goto loc_82DC9860;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82dc9860
	if (!cr6.eq) goto loc_82DC9860;
	// bl 0x82d86078
	ctx.lr = 0x82DC9774;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc97d8
	if (cr6.eq) goto loc_82DC97D8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DC9784;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc980c
	if (!cr6.eq) goto loc_82DC980C;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC9794;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc97d8
	if (cr6.eq) goto loc_82DC97D8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-21966
	ctx.r30.s64 = ctx.r11.s64 + -21966;
	// addi r4,r30,446
	ctx.r4.s64 = ctx.r30.s64 + 446;
	// bl 0x837b0c10
	ctx.lr = 0x82DC97B4;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82DC97C4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,333
	ctx.r6.s64 = 333;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC97D8;
	sub_82E7EB70(ctx, base);
loc_82DC97D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC97F0;
	sub_82E64C60(ctx, base);
	// lis r9,-32035
	ctx.r9.s64 = -2099445760;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-27776
	ctx.r7.s64 = ctx.r9.s64 + -27776;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC980C:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc9860
	if (!cr6.eq) goto loc_82DC9860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc82a8
	ctx.lr = 0x82DC9820;
	sub_82DC82A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc8e18
	ctx.lr = 0x82DC9828;
	sub_82DC8E18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc8798
	ctx.lr = 0x82DC9830;
	sub_82DC8798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc6e98
	ctx.lr = 0x82DC9838;
	sub_82DC6E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e65bb0
	ctx.lr = 0x82DC9840;
	sub_82E65BB0(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9858
	if (cr6.eq) goto loc_82DC9858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DC9858;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DC9858:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e64780
	ctx.lr = 0x82DC9860;
	sub_82E64780(ctx, base);
loc_82DC9860:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC9868"))) PPC_WEAK_FUNC(sub_82DC9868);
PPC_FUNC_IMPL(__imp__sub_82DC9868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DC9870;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// bl 0x82db8e08
	ctx.lr = 0x82DC9888;
	sub_82DB8E08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dc989c
	if (cr6.eq) goto loc_82DC989C;
	// bl 0x82e9b8d8
	ctx.lr = 0x82DC9898;
	sub_82E9B8D8(ctx, base);
	// b 0x82dc9948
	goto loc_82DC9948;
loc_82DC989C:
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc8b30
	ctx.lr = 0x82DC98A8;
	sub_82DC8B30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dc9928
	if (!cr6.eq) goto loc_82DC9928;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DC98B8;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc98fc
	if (cr6.eq) goto loc_82DC98FC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-21965
	ctx.r30.s64 = ctx.r11.s64 + -21965;
	// addi r4,r30,549
	ctx.r4.s64 = ctx.r30.s64 + 549;
	// bl 0x837b0c10
	ctx.lr = 0x82DC98D8;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82DC98E8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,441
	ctx.r6.s64 = 441;
	// bl 0x82e7eb70
	ctx.lr = 0x82DC98FC;
	sub_82E7EB70(ctx, base);
loc_82DC98FC:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8176);
	// bl 0x82e64c60
	ctx.lr = 0x82DC990C;
	sub_82E64C60(ctx, base);
	// lis r10,-32035
	ctx.r10.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-27376
	ctx.r8.s64 = ctx.r10.s64 + -27376;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DC9928:
	// bl 0x82db7320
	ctx.lr = 0x82DC992C;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9948
	if (cr6.eq) goto loc_82DC9948;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4362
	ctx.r4.u64 = ctx.r4.u64 | 4362;
	// bl 0x82e64250
	ctx.lr = 0x82DC9948;
	sub_82E64250(ctx, base);
loc_82DC9948:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82dc6030
	ctx.lr = 0x82DC9950;
	sub_82DC6030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc9968
	if (cr6.eq) goto loc_82DC9968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82DC9968;
	sub_83103100(ctx, base);
loc_82DC9968:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4369
	ctx.r4.u64 = ctx.r4.u64 | 4369;
	// bl 0x82e64250
	ctx.lr = 0x82DC9978;
	sub_82E64250(ctx, base);
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-27776
	ctx.r9.s64 = ctx.r11.s64 + -27776;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC9994"))) PPC_WEAK_FUNC(sub_82DC9994);
PPC_FUNC_IMPL(__imp__sub_82DC9994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9998"))) PPC_WEAK_FUNC(sub_82DC9998);
PPC_FUNC_IMPL(__imp__sub_82DC9998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DC99A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e655c8
	ctx.lr = 0x82DC99AC;
	sub_82E655C8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r9,r11,-19836
	ctx.r9.s64 = ctx.r11.s64 + -19836;
	// std r30,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r30.u64);
	// addi r8,r10,-19876
	ctx.r8.s64 = ctx.r10.s64 + -19876;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// stb r30,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r30.u8);
	// std r30,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r30.u64);
	// std r30,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r30.u64);
	// stw r8,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stb r30,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r30.u8);
	// stb r30,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r30.u8);
	// stb r29,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r29.u8);
	// stb r29,275(r31)
	PPC_STORE_U8(ctx.r31.u32 + 275, ctx.r29.u8);
	// stb r30,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r30.u8);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stb r30,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r30.u8);
	// std r30,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r30.u64);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// bl 0x82da8d18
	ctx.lr = 0x82DC9A44;
	sub_82DA8D18(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// bl 0x838a2b30
	ctx.lr = 0x82DC9A58;
	sub_838A2B30(ctx, base);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stb r30,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r30.u8);
	// stb r30,445(r31)
	PPC_STORE_U8(ctx.r31.u32 + 445, ctx.r30.u8);
	// stb r30,446(r31)
	PPC_STORE_U8(ctx.r31.u32 + 446, ctx.r30.u8);
	// stb r30,447(r31)
	PPC_STORE_U8(ctx.r31.u32 + 447, ctx.r30.u8);
	// bl 0x82db8e08
	ctx.lr = 0x82DC9A7C;
	sub_82DB8E08(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r5.u32);
	// bl 0x82db8e08
	ctx.lr = 0x82DC9A98;
	sub_82DB8E08(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82dc9aa8
	if (!cr6.eq) goto loc_82DC9AA8;
	// stb r29,446(r31)
	PPC_STORE_U8(ctx.r31.u32 + 446, ctx.r29.u8);
loc_82DC9AA8:
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-26520
	ctx.r10.s64 = ctx.r11.s64 + -26520;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC9AC4"))) PPC_WEAK_FUNC(sub_82DC9AC4);
PPC_FUNC_IMPL(__imp__sub_82DC9AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9AC8"))) PPC_WEAK_FUNC(sub_82DC9AC8);
PPC_FUNC_IMPL(__imp__sub_82DC9AC8) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-31456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31456);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dc9b24
	if (!cr6.eq) goto loc_82DC9B24;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,448
	ctx.r4.s64 = 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DC9B08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc9b1c
	if (cr6.eq) goto loc_82DC9B1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82dc9998
	ctx.lr = 0x82DC9B18;
	sub_82DC9998(ctx, base);
	// b 0x82dc9b20
	goto loc_82DC9B20;
loc_82DC9B1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DC9B20:
	// stw r3,-31456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31456, ctx.r3.u32);
loc_82DC9B24:
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

__attribute__((alias("__imp__sub_82DC9B3C"))) PPC_WEAK_FUNC(sub_82DC9B3C);
PPC_FUNC_IMPL(__imp__sub_82DC9B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9B40"))) PPC_WEAK_FUNC(sub_82DC9B40);
PPC_FUNC_IMPL(__imp__sub_82DC9B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82DC9B48;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dc9b88
	if (cr6.eq) goto loc_82DC9B88;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e64f98
	ctx.lr = 0x82DC9B70;
	sub_82E64F98(ctx, base);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x830f6290
	ctx.lr = 0x82DC9B84;
	sub_830F6290(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DC9B88:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x82db9c40
	ctx.lr = 0x82DC9BA0;
	sub_82DB9C40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9d10
	if (cr6.eq) goto loc_82DC9D10;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82dc9d10
	if (cr6.eq) goto loc_82DC9D10;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r26,r11,-22544
	ctx.r26.s64 = ctx.r11.s64 + -22544;
loc_82DC9BD4:
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8fd0
	ctx.lr = 0x82DC9BE0;
	sub_82DA8FD0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r4,r31,9
	ctx.r4.s64 = ctx.r31.s64 + 9;
	// addi r3,r1,217
	ctx.r3.s64 = ctx.r1.s64 + 217;
	// li r5,36
	ctx.r5.s64 = 36;
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r9,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x82DC9C08;
	sub_831CE980(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// lbz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// stb r7,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r7.u8);
	// bl 0x82da8d18
	ctx.lr = 0x82DC9C20;
	sub_82DA8D18(ctx, base);
	// lwz r6,264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82DC9C34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82da87d0
	ctx.lr = 0x82DC9C3C;
	sub_82DA87D0(ctx, base);
	// stb r30,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r30.u8);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82da8e68
	ctx.lr = 0x82DC9C4C;
	sub_82DA8E68(ctx, base);
	// lbz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// lwz r3,104(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// stb r4,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r4.u8);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// stb r11,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r11.u8);
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82dc9c7c
	if (cr6.eq) goto loc_82DC9C7C;
	// bl 0x82db7a90
	ctx.lr = 0x82DC9C70;
	sub_82DB7A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9ce8
	if (cr6.eq) goto loc_82DC9CE8;
loc_82DC9C7C:
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82DC9C9C;
	sub_8259CC28(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82DC9CB4;
	sub_8259CB28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f6558
	ctx.lr = 0x82DC9CC0;
	sub_830F6558(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dc9cdc
	if (cr6.lt) goto loc_82DC9CDC;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82DC9CDC;
	sub_825952B8(ctx, base);
loc_82DC9CDC:
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
loc_82DC9CE8:
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82da8c38
	ctx.lr = 0x82DC9CF0;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82DC9CF8;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r31,-48
	ctx.r10.s64 = ctx.r31.s64 + -48;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82dc9bd4
	if (!cr6.eq) goto loc_82DC9BD4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82DC9D10:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82dc9d38
	if (cr6.eq) goto loc_82DC9D38;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82b76760
	ctx.lr = 0x82DC9D28;
	sub_82B76760(ctx, base);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82DC9D38;
	sub_825952B8(ctx, base);
loc_82DC9D38:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC9D40"))) PPC_WEAK_FUNC(sub_82DC9D40);
PPC_FUNC_IMPL(__imp__sub_82DC9D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r9,r10,-19728
	ctx.r9.s64 = ctx.r10.s64 + -19728;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r8,-13652(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13652);
loc_82DC9D58:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82dc9d7c
	if (cr6.eq) goto loc_82DC9D7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x82dc9d58
	if (cr6.lt) goto loc_82DC9D58;
loc_82DC9D74:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_82DC9D7C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9d74
	if (cr6.eq) goto loc_82DC9D74;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC9D94"))) PPC_WEAK_FUNC(sub_82DC9D94);
PPC_FUNC_IMPL(__imp__sub_82DC9D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9D98"))) PPC_WEAK_FUNC(sub_82DC9D98);
PPC_FUNC_IMPL(__imp__sub_82DC9D98) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r9,r10,-19728
	ctx.r9.s64 = ctx.r10.s64 + -19728;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r8,-13652(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13652);
loc_82DC9DBC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82dc9df4
	if (cr6.eq) goto loc_82DC9DF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x82dc9dbc
	if (cr6.lt) goto loc_82DC9DBC;
loc_82DC9DD8:
	// li r3,19
	ctx.r3.s64 = 19;
loc_82DC9DDC:
	// bl 0x835fbc28
	ctx.lr = 0x82DC9DE0;
	sub_835FBC28(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DC9DE4;
	sub_8252E3C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DC9DF4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9dd8
	if (cr6.eq) goto loc_82DC9DD8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82dc9ddc
	goto loc_82DC9DDC;
}

__attribute__((alias("__imp__sub_82DC9E0C"))) PPC_WEAK_FUNC(sub_82DC9E0C);
PPC_FUNC_IMPL(__imp__sub_82DC9E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC9E10"))) PPC_WEAK_FUNC(sub_82DC9E10);
PPC_FUNC_IMPL(__imp__sub_82DC9E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-19728
	ctx.r9.s64 = ctx.r10.s64 + -19728;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82DC9E20:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x82dc9e48
	if (cr6.eq) goto loc_82DC9E48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x82dc9e20
	if (cr6.lt) goto loc_82DC9E20;
loc_82DC9E3C:
	// lis r3,516
	ctx.r3.s64 = 33816576;
	// ori r3,r3,77
	ctx.r3.u64 = ctx.r3.u64 | 77;
	// blr 
	return;
loc_82DC9E48:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9e3c
	if (cr6.eq) goto loc_82DC9E3C;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC9E60"))) PPC_WEAK_FUNC(sub_82DC9E60);
PPC_FUNC_IMPL(__imp__sub_82DC9E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DC9E68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r28,15
	ctx.r28.s64 = 15;
loc_82DC9E80:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
loc_82DC9E90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc9e90
	if (!cr6.eq) goto loc_82DC9E90;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DC9EB8;
	sub_824208C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fbc28
	ctx.lr = 0x82DC9EC0;
	sub_835FBC28(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DC9EC4;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82DC9ECC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dc9ecc
	if (!cr6.eq) goto loc_82DC9ECC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82DC9EF8;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82dc9f30
	if (cr6.eq) goto loc_82DC9F30;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dc9f14
	if (cr6.lt) goto loc_82DC9F14;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82DC9F14;
	sub_8386D088(ctx, base);
loc_82DC9F14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(ctx.r30.s32, 20, xer);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// blt cr6,0x82dc9e80
	if (cr6.lt) goto loc_82DC9E80;
	// b 0x82dc9f44
	goto loc_82DC9F44;
loc_82DC9F30:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dc9f44
	if (cr6.lt) goto loc_82DC9F44;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82DC9F44;
	sub_8386D088(ctx, base);
loc_82DC9F44:
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-19728
	ctx.r9.s64 = ctx.r10.s64 + -19728;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82DC9F54:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// beq cr6,0x82dc9f7c
	if (cr6.eq) goto loc_82DC9F7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x82dc9f54
	if (cr6.lt) goto loc_82DC9F54;
loc_82DC9F70:
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DC9F7C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dc9f70
	if (cr6.eq) goto loc_82DC9F70;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC9F98"))) PPC_WEAK_FUNC(sub_82DC9F98);
PPC_FUNC_IMPL(__imp__sub_82DC9F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC9FB8"))) PPC_WEAK_FUNC(sub_82DC9FB8);
PPC_FUNC_IMPL(__imp__sub_82DC9FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC9FD8"))) PPC_WEAK_FUNC(sub_82DC9FD8);
PPC_FUNC_IMPL(__imp__sub_82DC9FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

