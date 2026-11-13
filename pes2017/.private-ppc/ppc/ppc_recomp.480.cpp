#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83994560"))) PPC_WEAK_FUNC(sub_83994560);
PPC_FUNC_IMPL(__imp__sub_83994560) {
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
	// lis r31,-31742
	ctx.r31.s64 = -2080243712;
	// lwz r11,-26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839945c4
	if (cr6.eq) goto loc_839945C4;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83994594;
	sub_82595150(ctx, base);
	// lwz r3,-26672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26672);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839945b4
	if (cr6.eq) goto loc_839945B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839945B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839945B4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839945BC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26672, ctx.r11.u32);
loc_839945C4:
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

__attribute__((alias("__imp__sub_839945D8"))) PPC_WEAK_FUNC(sub_839945D8);
PPC_FUNC_IMPL(__imp__sub_839945D8) {
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
	// bl 0x83994468
	ctx.lr = 0x839945F0;
	sub_83994468(ctx, base);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994604
	if (cr6.eq) goto loc_83994604;
	// bl 0x82416268
	ctx.lr = 0x83994600;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83994604:
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

__attribute__((alias("__imp__sub_83994618"))) PPC_WEAK_FUNC(sub_83994618);
PPC_FUNC_IMPL(__imp__sub_83994618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83994620;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,35(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994a0c
	if (cr6.eq) goto loc_83994A0C;
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994a0c
	if (cr6.eq) goto loc_83994A0C;
	// lbz r11,8880(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8880);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994668
	if (!cr6.eq) goto loc_83994668;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x83994674
	goto loc_83994674;
loc_83994668:
	// lbz r11,5817(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5817);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83994674:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994a0c
	if (cr6.eq) goto loc_83994A0C;
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// addi r23,r27,4
	ctx.r23.s64 = ctx.r27.s64 + 4;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839946a4
	if (!cr6.eq) goto loc_839946A4;
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994770
	if (cr6.eq) goto loc_83994770;
loc_839946A4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83994750
	if (cr6.eq) goto loc_83994750;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r30,180
	ctx.r30.s64 = 180;
loc_839946B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839946CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83994744
	if (!cr6.eq) goto loc_83994744;
	// lbzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994744
	if (cr6.eq) goto loc_83994744;
	// add r9,r31,r27
	ctx.r9.u64 = ctx.r31.u64 + ctx.r27.u64;
	// li r11,24
	ctx.r11.s64 = 24;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r30,30(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30, ctx.r30.u8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_839946F8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83994708
	if (cr6.lt) goto loc_83994708;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83994708:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83994720
	if (!cr6.eq) goto loc_83994720;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83994728
	goto loc_83994728;
loc_83994720:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83994728:
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x83994738
	if (!cr6.eq) goto loc_83994738;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stb r26,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r26.u8);
loc_83994738:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x839946f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839946F8;
	// stbx r26,r23,r31
	PPC_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r26.u8);
loc_83994744:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x839946b4
	if (cr6.lt) goto loc_839946B4;
loc_83994750:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994760
	if (!cr6.eq) goto loc_83994760;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_83994760:
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r24,r8,r24
	ctx.r24.u64 = ctx.r8.u64 & ctx.r24.u64;
loc_83994770:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r28,r27,6
	ctx.r28.s64 = ctx.r27.s64 + 6;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
loc_83994780:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839947d4
	if (cr6.eq) goto loc_839947D4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8399479c
	if (cr6.lt) goto loc_8399479C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8399479C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839947d4
	if (cr6.eq) goto loc_839947D4;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r19,76(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839947C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r19,r9
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r9.u32, xer);
	// beq cr6,0x839947e4
	if (cr6.eq) goto loc_839947E4;
loc_839947D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83994780
	if (cr6.lt) goto loc_83994780;
	// b 0x839947e8
	goto loc_839947E8;
loc_839947E4:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_839947E8:
	// lbz r11,33(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994888
	if (cr6.eq) goto loc_83994888;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83994a0c
	if (cr6.eq) goto loc_83994A0C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994888
	if (cr6.eq) goto loc_83994888;
	// lbz r11,34(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994a0c
	if (!cr6.eq) goto loc_83994A0C;
	// bl 0x8398e1b8
	ctx.lr = 0x83994818;
	sub_8398E1B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8398fbc0
	ctx.lr = 0x83994838;
	sub_8398FBC0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837409a8
	ctx.lr = 0x83994850;
	sub_837409A8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x825b2e68
	ctx.lr = 0x8399485C;
	sub_825B2E68(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r26,33(r27)
	PPC_STORE_U8(ctx.r27.u32 + 33, ctx.r26.u8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r22,32(r27)
	PPC_STORE_U8(ctx.r27.u32 + 32, ctx.r22.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83994870:
	// stbx r26,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83994870
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83994870;
	// stb r22,34(r27)
	PPC_STORE_U8(ctx.r27.u32 + 34, ctx.r22.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83994888:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839948a0
	if (!cr6.eq) goto loc_839948A0;
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994a0c
	if (cr6.eq) goto loc_83994A0C;
loc_839948A0:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839948b4
	if (!cr6.eq) goto loc_839948B4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825b4878
	ctx.lr = 0x839948B4;
	sub_825B4878(ctx, base);
loc_839948B4:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839948d0
	if (!cr6.eq) goto loc_839948D0;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r10.u32);
loc_839948D0:
	// lwz r31,16(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83994904
	if (cr6.eq) goto loc_83994904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32eb0
	ctx.lr = 0x839948E4;
	sub_82A32EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994904
	if (!cr6.eq) goto loc_83994904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a326d8
	ctx.lr = 0x839948F8;
	sub_82A326D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32eb8
	ctx.lr = 0x83994904;
	sub_82A32EB8(ctx, base);
loc_83994904:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399492c
	if (cr6.eq) goto loc_8399492C;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r5,4332
	ctx.r5.s64 = 4332;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,4336
	ctx.r4.s64 = ctx.r11.s64 + 4336;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x832d24b8
	ctx.lr = 0x83994928;
	sub_832D24B8(ctx, base);
	// stw r26,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r26.u32);
loc_8399492C:
	// bl 0x8398e1b8
	ctx.lr = 0x83994930;
	sub_8398E1B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8398fbc0
	ctx.lr = 0x83994950;
	sub_8398FBC0(ctx, base);
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83994968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x83994988;
	sub_83535150(ctx, base);
	// stb r26,32(r27)
	PPC_STORE_U8(ctx.r27.u32 + 32, ctx.r26.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837409a8
	ctx.lr = 0x839949A4;
	sub_837409A8(ctx, base);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839949C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839949d4
	if (cr6.eq) goto loc_839949D4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x839949D4;
	sub_831CE980(ctx, base);
loc_839949D4:
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r26,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r26.u8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r26,5(r27)
	PPC_STORE_U8(ctx.r27.u32 + 5, ctx.r26.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839949E8:
	// stbx r26,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839949e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839949E8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83994A0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83994A0C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83994A14"))) PPC_WEAK_FUNC(sub_83994A14);
PPC_FUNC_IMPL(__imp__sub_83994A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994A18"))) PPC_WEAK_FUNC(sub_83994A18);
PPC_FUNC_IMPL(__imp__sub_83994A18) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994a80
	if (cr6.eq) goto loc_83994A80;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83994A4C;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83994a6c
	if (cr6.eq) goto loc_83994A6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83994A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83994A6C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83994A74;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83994a84
	goto loc_83994A84;
loc_83994A80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83994A84:
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

__attribute__((alias("__imp__sub_83994A9C"))) PPC_WEAK_FUNC(sub_83994A9C);
PPC_FUNC_IMPL(__imp__sub_83994A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994AA0"))) PPC_WEAK_FUNC(sub_83994AA0);
PPC_FUNC_IMPL(__imp__sub_83994AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83994a18
	sub_83994A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83994AA4"))) PPC_WEAK_FUNC(sub_83994AA4);
PPC_FUNC_IMPL(__imp__sub_83994AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994AA8"))) PPC_WEAK_FUNC(sub_83994AA8);
PPC_FUNC_IMPL(__imp__sub_83994AA8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83994AD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x83994b04
	if (cr6.eq) goto loc_83994B04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r10,r11,-9636
	ctx.r10.s64 = ctx.r11.s64 + -9636;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83994b08
	goto loc_83994B08;
loc_83994B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83994B08:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bl 0x825e1fd8
	ctx.lr = 0x83994B10;
	sub_825E1FD8(ctx, base);
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

__attribute__((alias("__imp__sub_83994B2C"))) PPC_WEAK_FUNC(sub_83994B2C);
PPC_FUNC_IMPL(__imp__sub_83994B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994B30"))) PPC_WEAK_FUNC(sub_83994B30);
PPC_FUNC_IMPL(__imp__sub_83994B30) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994b60
	if (!cr6.eq) goto loc_83994B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1fd8
	ctx.lr = 0x83994B60;
	sub_825E1FD8(ctx, base);
loc_83994B60:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994b7c
	if (!cr6.eq) goto loc_83994B7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,436
	ctx.r10.s64 = ctx.r11.s64 + 436;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83994B7C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82a2b828
	ctx.lr = 0x83994B84;
	sub_82A2B828(ctx, base);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994bb4
	if (cr6.eq) goto loc_83994BB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,432
	ctx.r5.s64 = 432;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,436
	ctx.r4.s64 = ctx.r11.s64 + 436;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x832d24b8
	ctx.lr = 0x83994BAC;
	sub_832D24B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83994BB4:
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

__attribute__((alias("__imp__sub_83994BCC"))) PPC_WEAK_FUNC(sub_83994BCC);
PPC_FUNC_IMPL(__imp__sub_83994BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994BD0"))) PPC_WEAK_FUNC(sub_83994BD0);
PPC_FUNC_IMPL(__imp__sub_83994BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83994BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-22844
	ctx.r10.s64 = ctx.r11.s64 + -22844;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825b4878
	ctx.lr = 0x83994C10;
	sub_825B4878(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83994c2c
	if (!cr6.eq) goto loc_83994C2C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_83994C2C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_83994C30:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x83994c40
	if (cr6.lt) goto loc_83994C40;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83994C40:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83994c70
	if (cr6.eq) goto loc_83994C70;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x83994c70
	if (!cr6.eq) goto loc_83994C70;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83994c80
	if (!cr6.eq) goto loc_83994C80;
loc_83994C70:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x83994c30
	if (cr6.lt) goto loc_83994C30;
	// b 0x83994c84
	goto loc_83994C84;
loc_83994C80:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83994C84:
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-9704
	ctx.r5.s64 = ctx.r7.s64 + -9704;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x83994cd0
	if (cr6.eq) goto loc_83994CD0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83994cd0
	if (cr6.eq) goto loc_83994CD0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83994CC8;
	sub_8353F3B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_83994CD0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// beq cr6,0x83994cf4
	if (cr6.eq) goto loc_83994CF4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83994CF0;
	sub_8353F3B8(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_83994CF4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994d94
	if (cr6.eq) goto loc_83994D94;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994d18
	if (!cr6.eq) goto loc_83994D18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e1fd8
	ctx.lr = 0x83994D18;
	sub_825E1FD8(ctx, base);
loc_83994D18:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994d34
	if (!cr6.eq) goto loc_83994D34;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_83994D34:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b848
	ctx.lr = 0x83994D40;
	sub_82A2B848(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r28,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83994d5c
	if (cr6.eq) goto loc_83994D5C;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_83994D5C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83994D64:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b7d0
	ctx.lr = 0x83994D74;
	sub_82A2B7D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x83994d64
	if (cr6.lt) goto loc_83994D64;
	// bl 0x83987ca0
	ctx.lr = 0x83994D88;
	sub_83987CA0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r6,44
	ctx.r6.s64 = 44;
	// b 0x83994da0
	goto loc_83994DA0;
loc_83994D94:
	// bl 0x83987ca0
	ctx.lr = 0x83994D98;
	sub_83987CA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83994DA0:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83988948
	ctx.lr = 0x83994DA8;
	sub_83988948(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83994DB8"))) PPC_WEAK_FUNC(sub_83994DB8);
PPC_FUNC_IMPL(__imp__sub_83994DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83994DC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83995354
	if (cr6.eq) goto loc_83995354;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83994f6c
	if (cr6.eq) goto loc_83994F6C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83995354
	if (!cr6.eq) goto loc_83995354;
	// bl 0x83987ca0
	ctx.lr = 0x83994DEC;
	sub_83987CA0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x839889c0
	ctx.lr = 0x83994DF4;
	sub_839889C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995354
	if (cr6.eq) goto loc_83995354;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,-9636
	ctx.r10.s64 = ctx.r11.s64 + -9636;
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x826347a8
	ctx.lr = 0x83994E28;
	sub_826347A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2b848
	ctx.lr = 0x83994E30;
	sub_82A2B848(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// subfe r28,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x83994eb8
	if (cr6.eq) goto loc_83994EB8;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r8,r27,r9
	ctx.r8.u64 = ctx.r27.u64 + ctx.r9.u64;
loc_83994E58:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83994e7c
	if (!cr6.eq) goto loc_83994E7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x83994e58
	if (cr6.lt) goto loc_83994E58;
	// b 0x83994eb8
	goto loc_83994EB8;
loc_83994E7C:
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994eb8
	if (cr6.eq) goto loc_83994EB8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83994E98:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b800
	ctx.lr = 0x83994EAC;
	sub_82A2B800(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x83994e98
	if (cr6.lt) goto loc_83994E98;
loc_83994EB8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994ed0
	if (cr6.eq) goto loc_83994ED0;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825df3b8
	ctx.lr = 0x83994ECC;
	sub_825DF3B8(ctx, base);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
loc_83994ED0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x83994f10
	if (cr6.eq) goto loc_83994F10;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83994f10
	if (cr6.eq) goto loc_83994F10;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83994F08;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
loc_83994F10:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// beq cr6,0x83994f34
	if (cr6.eq) goto loc_83994F34;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83994F30;
	sub_8353F3B8(ctx, base);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
loc_83994F34:
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x83994F44;
	sub_82595150(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838331e8
	ctx.lr = 0x83994F4C;
	sub_838331E8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x83994F54;
	sub_82416268(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x83994F5C;
	sub_82595170(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83994F6C:
	// bl 0x83987ca0
	ctx.lr = 0x83994F70;
	sub_83987CA0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x839889c0
	ctx.lr = 0x83994F78;
	sub_839889C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995354
	if (cr6.eq) goto loc_83995354;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-9636
	ctx.r25.s64 = ctx.r11.s64 + -9636;
	// stb r27,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r27.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// bl 0x826347a8
	ctx.lr = 0x83994FAC;
	sub_826347A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2b848
	ctx.lr = 0x83994FB4;
	sub_82A2B848(ctx, base);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// subfe r28,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x83995038
	if (cr6.eq) goto loc_83995038;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r7,r27,r9
	ctx.r7.u64 = ctx.r27.u64 + ctx.r9.u64;
loc_83994FD8:
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83994ffc
	if (!cr6.eq) goto loc_83994FFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x83994fd8
	if (cr6.lt) goto loc_83994FD8;
	// b 0x83995038
	goto loc_83995038;
loc_83994FFC:
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995038
	if (cr6.eq) goto loc_83995038;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83995018:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b800
	ctx.lr = 0x8399502C;
	sub_82A2B800(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x83995018
	if (cr6.lt) goto loc_83995018;
loc_83995038:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995050
	if (cr6.eq) goto loc_83995050;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825df3b8
	ctx.lr = 0x8399504C;
	sub_825DF3B8(ctx, base);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
loc_83995050:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r24,r11,-24712
	ctx.r24.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// beq cr6,0x83995090
	if (cr6.eq) goto loc_83995090;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83995090
	if (cr6.eq) goto loc_83995090;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83995088;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
loc_83995090:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r27.u8);
	// beq cr6,0x839950b4
	if (cr6.eq) goto loc_839950B4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839950B0;
	sub_8353F3B8(ctx, base);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
loc_839950B4:
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x839950C4;
	sub_82595150(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838331e8
	ctx.lr = 0x839950CC;
	sub_838331E8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x839950D4;
	sub_82416268(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x839950DC;
	sub_82595170(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r27,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r27.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r10,r11,-22844
	ctx.r10.s64 = ctx.r11.s64 + -22844;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// bl 0x825b4878
	ctx.lr = 0x83995104;
	sub_825B4878(ctx, base);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83995120
	if (!cr6.eq) goto loc_83995120;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
loc_83995120:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_83995124:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x83995134
	if (cr6.lt) goto loc_83995134;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83995134:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83995164
	if (cr6.eq) goto loc_83995164;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r7,r23,24
	ctx.r7.u64 = ctx.r23.u32 & 0xFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x83995164
	if (!cr6.eq) goto loc_83995164;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83995174
	if (!cr6.eq) goto loc_83995174;
loc_83995164:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x83995124
	if (cr6.lt) goto loc_83995124;
	// b 0x83995178
	goto loc_83995178;
loc_83995174:
	// li r31,1
	ctx.r31.s64 = 1;
loc_83995178:
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lbz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-9704
	ctx.r5.s64 = ctx.r7.s64 + -9704;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// beq cr6,0x839951c4
	if (cr6.eq) goto loc_839951C4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839951c4
	if (cr6.eq) goto loc_839951C4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839951BC;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
loc_839951C4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r27.u8);
	// beq cr6,0x839951e8
	if (cr6.eq) goto loc_839951E8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839951E4;
	sub_8353F3B8(ctx, base);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
loc_839951E8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995338
	if (cr6.eq) goto loc_83995338;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83995218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83995230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825e1a50
	ctx.lr = 0x83995240;
	sub_825E1A50(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// bne cr6,0x83995264
	if (!cr6.eq) goto loc_83995264;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_83995264:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2b848
	ctx.lr = 0x8399526C;
	sub_82A2B848(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subfe r28,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
loc_83995298:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b7d0
	ctx.lr = 0x839952A8;
	sub_82A2B7D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x83995298
	if (cr6.lt) goto loc_83995298;
	// bl 0x83987ca0
	ctx.lr = 0x839952BC;
	sub_83987CA0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x83988948
	ctx.lr = 0x839952CC;
	sub_83988948(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83995304
	if (cr6.eq) goto loc_83995304;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83995304
	if (cr6.eq) goto loc_83995304;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839952FC;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_83995304:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// beq cr6,0x8399534c
	if (cr6.eq) goto loc_8399534C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83995324;
	sub_8353F3B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83995338:
	// bl 0x83987ca0
	ctx.lr = 0x8399533C;
	sub_83987CA0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83988948
	ctx.lr = 0x8399534C;
	sub_83988948(ctx, base);
loc_8399534C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_83995354:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83995360"))) PPC_WEAK_FUNC(sub_83995360);
PPC_FUNC_IMPL(__imp__sub_83995360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83995368;
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
	// bl 0x830ff290
	ctx.lr = 0x8399537C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839953b0
	if (cr6.eq) goto loc_839953B0;
	// bl 0x830ff290
	ctx.lr = 0x83995388;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x839953bc
	if (!cr6.eq) goto loc_839953BC;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// bge cr6,0x839953b0
	if (!cr6.lt) goto loc_839953B0;
	// mulli r11,r29,112
	ctx.r11.s64 = ctx.r29.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839955c0
	if (!cr6.eq) goto loc_839955C0;
loc_839953B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839953BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r8,2
	ctx.r8.s64 = 2;
loc_839953CC:
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839953dc
	if (cr6.lt) goto loc_839953DC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839953DC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839953f8
	if (!cr6.eq) goto loc_839953F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83995400
	goto loc_83995400;
loc_839953F8:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83995400:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x83995430
	if (!cr6.eq) goto loc_83995430;
	// lbz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995430
	if (cr6.eq) goto loc_83995430;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995428
	if (cr6.eq) goto loc_83995428;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// b 0x8399542c
	goto loc_8399542C;
loc_83995428:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8399542C:
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
loc_83995430:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83995440
	if (cr6.lt) goto loc_83995440;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83995440:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8399545c
	if (!cr6.eq) goto loc_8399545C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83995464
	goto loc_83995464;
loc_8399545C:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83995464:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x83995494
	if (!cr6.eq) goto loc_83995494;
	// lbz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995494
	if (cr6.eq) goto loc_83995494;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399548c
	if (cr6.eq) goto loc_8399548C;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// b 0x83995490
	goto loc_83995490;
loc_8399548C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_83995490:
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
loc_83995494:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// blt cr6,0x839954a4
	if (cr6.lt) goto loc_839954A4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839954A4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839954c0
	if (!cr6.eq) goto loc_839954C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x839954c8
	goto loc_839954C8;
loc_839954C0:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_839954C8:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x839954f8
	if (!cr6.eq) goto loc_839954F8;
	// lbz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839954f8
	if (cr6.eq) goto loc_839954F8;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839954f0
	if (cr6.eq) goto loc_839954F0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x839954f4
	goto loc_839954F4;
loc_839954F0:
	// li r5,1
	ctx.r5.s64 = 1;
loc_839954F4:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_839954F8:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x8399550c
	if (cr6.lt) goto loc_8399550C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8399550C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83995528
	if (!cr6.eq) goto loc_83995528;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83995530
	goto loc_83995530;
loc_83995528:
	// addic r4,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// subfe r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83995530:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x83995560
	if (!cr6.eq) goto loc_83995560;
	// lbz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995560
	if (cr6.eq) goto loc_83995560;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995558
	if (cr6.eq) goto loc_83995558;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8399555c
	goto loc_8399555C;
loc_83995558:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8399555C:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_83995560:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839953cc
	if (cr6.lt) goto loc_839953CC;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x839955cc
	if (cr6.lt) goto loc_839955CC;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839955cc
	if (!cr6.eq) goto loc_839955CC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x83995594
	if (cr6.lt) goto loc_83995594;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83995594:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839955cc
	if (cr6.eq) goto loc_839955CC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x839955b8
	if (cr6.lt) goto loc_839955B8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839955B8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_839955C0:
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839955CC:
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// bge cr6,0x839955e8
	if (!cr6.lt) goto loc_839955E8;
	// mulli r11,r29,112
	ctx.r11.s64 = ctx.r29.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839955c0
	if (!cr6.eq) goto loc_839955C0;
loc_839955E8:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x839953b0
	if (cr6.lt) goto loc_839953B0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,24
	cr6.compare<uint32_t>(ctx.r7.u32, 24, xer);
	// blt cr6,0x83995600
	if (cr6.lt) goto loc_83995600;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83995600:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839953b0
	if (cr6.eq) goto loc_839953B0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,24
	cr6.compare<uint32_t>(ctx.r7.u32, 24, xer);
	// blt cr6,0x839955b8
	if (cr6.lt) goto loc_839955B8;
	// li r11,23
	ctx.r11.s64 = 23;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83995638"))) PPC_WEAK_FUNC(sub_83995638);
PPC_FUNC_IMPL(__imp__sub_83995638) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399565C"))) PPC_WEAK_FUNC(sub_8399565C);
PPC_FUNC_IMPL(__imp__sub_8399565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83995660"))) PPC_WEAK_FUNC(sub_83995660);
PPC_FUNC_IMPL(__imp__sub_83995660) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r30,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r30.u8);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// beq cr6,0x839956e0
	if (cr6.eq) goto loc_839956E0;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839956B4;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839956d4
	if (cr6.eq) goto loc_839956D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839956D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839956D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839956DC;
	sub_82595170(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_839956E0:
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

__attribute__((alias("__imp__sub_839956F8"))) PPC_WEAK_FUNC(sub_839956F8);
PPC_FUNC_IMPL(__imp__sub_839956F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83995660
	sub_83995660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839956FC"))) PPC_WEAK_FUNC(sub_839956FC);
PPC_FUNC_IMPL(__imp__sub_839956FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83995700"))) PPC_WEAK_FUNC(sub_83995700);
PPC_FUNC_IMPL(__imp__sub_83995700) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// li r4,20
	ctx.r4.s64 = 20;
	// stb r31,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82595718
	ctx.lr = 0x8399574C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995774
	if (cr6.eq) goto loc_83995774;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83995778
	goto loc_83995778;
loc_83995774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83995778:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bl 0x825b4da8
	ctx.lr = 0x83995780;
	sub_825B4DA8(ctx, base);
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

__attribute__((alias("__imp__sub_83995798"))) PPC_WEAK_FUNC(sub_83995798);
PPC_FUNC_IMPL(__imp__sub_83995798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x839957A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2864(r1)
	ea = -2864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// bl 0x82e765e8
	ctx.lr = 0x839957BC;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995fe4
	if (cr6.eq) goto loc_83995FE4;
	// lwz r31,12(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839957dc
	if (!cr6.eq) goto loc_839957DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4da8
	ctx.lr = 0x839957DC;
	sub_825B4DA8(ctx, base);
loc_839957DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839957f8
	if (!cr6.eq) goto loc_839957F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839957F8:
	// lbz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r22,12(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r16,3
	ctx.r16.s64 = 3;
	// li r19,4
	ctx.r19.s64 = 4;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995834
	if (cr6.eq) goto loc_83995834;
	// stb r29,4(r17)
	PPC_STORE_U8(ctx.r17.u32 + 4, ctx.r29.u8);
	// stw r16,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r16.u32);
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r19,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r19.u32);
	// bl 0x82e765e8
	ctx.lr = 0x8399582C;
	sub_82E765E8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82e76b28
	ctx.lr = 0x83995834;
	sub_82E76B28(ctx, base);
loc_83995834:
	// li r24,2
	ctx.r24.s64 = 2;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lis r15,-31778
	ctx.r15.s64 = -2082603008;
loc_83995844:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83995854
	if (cr6.lt) goto loc_83995854;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83995854:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839958b0
	if (cr6.eq) goto loc_839958B0;
	// lwz r3,2056(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2056);
	// lwz r28,76(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83995880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// bne cr6,0x839958b0
	if (!cr6.eq) goto loc_839958B0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839958a0
	if (!cr6.eq) goto loc_839958A0;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// b 0x839958b0
	goto loc_839958B0;
loc_839958A0:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r23,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r23.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(ctx.r23.s32, 2, xer);
	// bne cr6,0x839958bc
	if (!cr6.eq) goto loc_839958BC;
loc_839958B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83995844
	if (cr6.lt) goto loc_83995844;
loc_839958BC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x82a22860
	ctx.lr = 0x839958C8;
	sub_82A22860(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r18,r11,19694
	ctx.r18.s64 = ctx.r11.s64 + 19694;
	// ble cr6,0x83995c88
	if (!cr6.gt) goto loc_83995C88;
loc_839958DC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a236f8
	ctx.lr = 0x839958E8;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// beq cr6,0x83995aa4
	if (cr6.eq) goto loc_83995AA4;
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// beq cr6,0x83995964
	if (cr6.eq) goto loc_83995964;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// bne cr6,0x83995c74
	if (!cr6.eq) goto loc_83995C74;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// bne cr6,0x83995c74
	if (!cr6.eq) goto loc_83995C74;
	// stw r19,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r19.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x8399591C;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995958
	if (cr6.eq) goto loc_83995958;
	// addi r4,r18,274
	ctx.r4.s64 = ctx.r18.s64 + 274;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x83995934;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r18,-12
	ctx.r4.s64 = ctx.r18.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x83995944;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,180
	ctx.r6.s64 = 180;
	// bl 0x82e7eb70
	ctx.lr = 0x83995958;
	sub_82E7EB70(ctx, base);
loc_83995958:
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// b 0x83995c5c
	goto loc_83995C5C;
loc_83995964:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// stw r29,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r29.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r10,4472(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4472);
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// lwz r30,276(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x839959c8
	if (cr6.lt) goto loc_839959C8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x839959c8
	if (!cr6.lt) goto loc_839959C8;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x839959c8
	if (cr6.lt) goto loc_839959C8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x839959cc
	if (cr6.lt) goto loc_839959CC;
loc_839959C8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_839959CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995a28
	if (cr6.eq) goto loc_83995A28;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82a16248
	ctx.lr = 0x839959E8;
	sub_82A16248(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x839959F0;
	sub_82A16C18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83995a28
	if (cr6.eq) goto loc_83995A28;
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82be4eb8
	ctx.lr = 0x83995A0C;
	sub_82BE4EB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83995360
	ctx.lr = 0x83995A24;
	sub_83995360(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
loc_83995A28:
	// lwz r30,284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x83995a54
	if (cr6.lt) goto loc_83995A54;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x83995a54
	if (!cr6.lt) goto loc_83995A54;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83995a54
	if (cr6.lt) goto loc_83995A54;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x83995a58
	if (cr6.lt) goto loc_83995A58;
loc_83995A54:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83995A58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995c5c
	if (cr6.eq) goto loc_83995C5C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82a16248
	ctx.lr = 0x83995A74;
	sub_82A16248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x83995A7C;
	sub_82A16C18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83995c5c
	if (cr6.eq) goto loc_83995C5C;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82be4eb8
	ctx.lr = 0x83995A98;
	sub_82BE4EB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// b 0x83995c5c
	goto loc_83995C5C;
loc_83995AA4:
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// stw r29,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r29.u32);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// lwz r11,4472(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4472);
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// stw r24,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x83995b18
	if (cr6.lt) goto loc_83995B18;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x83995b18
	if (!cr6.lt) goto loc_83995B18;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83995b18
	if (cr6.lt) goto loc_83995B18;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x83995b1c
	if (cr6.lt) goto loc_83995B1C;
loc_83995B18:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83995B1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995b74
	if (cr6.eq) goto loc_83995B74;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82a16248
	ctx.lr = 0x83995B34;
	sub_82A16248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x83995B3C;
	sub_82A16C18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83995b74
	if (cr6.eq) goto loc_83995B74;
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82be4eb8
	ctx.lr = 0x83995B58;
	sub_82BE4EB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83995360
	ctx.lr = 0x83995B70;
	sub_83995360(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
loc_83995B74:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83995bac
	if (cr6.gt) goto loc_83995BAC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83995b98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83995B98;
	// bdzf 4*cr6+eq,0x83995ba0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83995BA0;
	// bne cr6,0x83995ba8
	if (!cr6.eq) goto loc_83995BA8;
loc_83995B98:
	// stw r24,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// b 0x83995bac
	goto loc_83995BAC;
loc_83995BA0:
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// b 0x83995bac
	goto loc_83995BAC;
loc_83995BA8:
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
loc_83995BAC:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// blt cr6,0x83995be0
	if (cr6.lt) goto loc_83995BE0;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x83995be0
	if (!cr6.lt) goto loc_83995BE0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83995be0
	if (cr6.lt) goto loc_83995BE0;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x83995be4
	if (cr6.lt) goto loc_83995BE4;
loc_83995BE0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83995BE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995c5c
	if (cr6.eq) goto loc_83995C5C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82a16248
	ctx.lr = 0x83995BFC;
	sub_82A16248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x83995C04;
	sub_82A16C18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83995c5c
	if (cr6.eq) goto loc_83995C5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83767d18
	ctx.lr = 0x83995C18;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83995c5c
	if (cr6.eq) goto loc_83995C5C;
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82be4eb8
	ctx.lr = 0x83995C38;
	sub_82BE4EB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r27.u32);
	// stw r8,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
loc_83995C5C:
	// bl 0x82e765e8
	ctx.lr = 0x83995C60;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995c74
	if (cr6.eq) goto loc_83995C74;
	// bl 0x82e765e8
	ctx.lr = 0x83995C6C;
	sub_82E765E8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82e76b28
	ctx.lr = 0x83995C74;
	sub_82E76B28(ctx, base);
loc_83995C74:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x82a22860
	ctx.lr = 0x83995C80;
	sub_82A22860(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x839958dc
	if (cr6.lt) goto loc_839958DC;
loc_83995C88:
	// lwz r31,4456(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4456);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r30,15
	ctx.r30.s64 = 15;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// beq cr6,0x83995dcc
	if (cr6.eq) goto loc_83995DCC;
	// lwz r8,4472(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4472);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r16,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r16.u32);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// stw r8,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// bgt cr6,0x83995da0
	if (cr6.gt) goto loc_83995DA0;
	// lis r12,-31847
	ctx.r12.s64 = -2087124992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23764
	ctx.r12.s64 = ctx.r12.s64 + 23764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83995CFC;
	case 1:
		goto loc_83995D18;
	case 2:
		goto loc_83995D24;
	case 3:
		goto loc_83995D30;
	case 4:
		goto loc_83995D3C;
	case 5:
		goto loc_83995DA0;
	case 6:
		goto loc_83995D48;
	case 7:
		goto loc_83995D88;
	case 8:
		goto loc_83995D94;
	case 9:
		goto loc_83995DA0;
	default:
		return;
	}
	// lwz r28,23804(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23804);
	// lwz r28,23832(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23832);
	// lwz r28,23844(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23844);
	// lwz r28,23856(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23856);
	// lwz r28,23868(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23868);
	// lwz r28,23968(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23968);
	// lwz r28,23880(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23880);
	// lwz r28,23944(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23944);
	// lwz r28,23956(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23956);
	// lwz r28,23968(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23968);
loc_83995CFC:
	// lbz r11,5(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995da4
	if (cr6.eq) goto loc_83995DA4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r29,5(r17)
	PPC_STORE_U8(ctx.r17.u32 + 5, ctx.r29.u8);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D18:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D24:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D30:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D3C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D48:
	// lwz r11,4460(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83995d80
	if (!cr6.eq) goto loc_83995D80;
	// lbz r11,6(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83995d74
	if (!cr6.eq) goto loc_83995D74;
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r27,6(r17)
	PPC_STORE_U8(ctx.r17.u32 + 6, ctx.r27.u8);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D74:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D80:
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D88:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995D94:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x83995da4
	goto loc_83995DA4;
loc_83995DA0:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_83995DA4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83995dcc
	if (cr6.eq) goto loc_83995DCC;
	// bl 0x82e765e8
	ctx.lr = 0x83995DB8;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995dcc
	if (cr6.eq) goto loc_83995DCC;
	// bl 0x82e765e8
	ctx.lr = 0x83995DC4;
	sub_82E765E8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82e76b28
	ctx.lr = 0x83995DCC;
	sub_82E76B28(ctx, base);
loc_83995DCC:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,4464(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a290c8
	ctx.lr = 0x83995DE4;
	sub_82A290C8(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x83995e58
	if (cr6.eq) goto loc_83995E58;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x83995ee0
	if (!cr6.eq) goto loc_83995EE0;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bge cr6,0x83995e38
	if (!cr6.lt) goto loc_83995E38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x83995e38
	if (cr6.lt) goto loc_83995E38;
	// lwz r11,4472(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4472);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r16,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r16.u32);
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x83995E24;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995e38
	if (cr6.eq) goto loc_83995E38;
	// bl 0x82e765e8
	ctx.lr = 0x83995E30;
	sub_82E765E8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82e76b28
	ctx.lr = 0x83995E38;
	sub_82E76B28(ctx, base);
loc_83995E38:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bge cr6,0x83995ee0
	if (!cr6.lt) goto loc_83995EE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x83995ee0
	if (cr6.lt) goto loc_83995EE0;
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x83995eb8
	goto loc_83995EB8;
loc_83995E58:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bge cr6,0x83995e9c
	if (!cr6.lt) goto loc_83995E9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x83995e9c
	if (cr6.lt) goto loc_83995E9C;
	// lwz r11,4472(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4472);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r16,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r16.u32);
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x83995E88;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995e9c
	if (cr6.eq) goto loc_83995E9C;
	// bl 0x82e765e8
	ctx.lr = 0x83995E94;
	sub_82E765E8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82e76b28
	ctx.lr = 0x83995E9C;
	sub_82E76B28(ctx, base);
loc_83995E9C:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bge cr6,0x83995ee0
	if (!cr6.lt) goto loc_83995EE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x83995ee0
	if (cr6.lt) goto loc_83995EE0;
	// li r10,7
	ctx.r10.s64 = 7;
loc_83995EB8:
	// lwz r11,4472(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4472);
	// stw r16,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r16.u32);
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x83995ECC;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995ee0
	if (cr6.eq) goto loc_83995EE0;
	// bl 0x82e765e8
	ctx.lr = 0x83995ED8;
	sub_82E765E8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82e76b28
	ctx.lr = 0x83995EE0;
	sub_82E76B28(ctx, base);
loc_83995EE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(ctx.r14.u32, 0, xer);
	// stw r11,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r11.u32);
	// beq cr6,0x83995fd0
	if (cr6.eq) goto loc_83995FD0;
	// lwz r11,112(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83995fd0
	if (cr6.eq) goto loc_83995FD0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83995f54
	if (cr6.eq) goto loc_83995F54;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83995fd0
	if (!cr6.eq) goto loc_83995FD0;
	// bl 0x82e7e2f8
	ctx.lr = 0x83995F10;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995f4c
	if (cr6.eq) goto loc_83995F4C;
	// addi r4,r18,498
	ctx.r4.s64 = ctx.r18.s64 + 498;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x83995F28;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x83995F38;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,482
	ctx.r6.s64 = 482;
	// bl 0x82e7eb70
	ctx.lr = 0x83995F4C;
	sub_82E7EB70(ctx, base);
loc_83995F4C:
	// li r6,14
	ctx.r6.s64 = 14;
	// b 0x83995fb4
	goto loc_83995FB4;
loc_83995F54:
	// bl 0x82e7e2f8
	ctx.lr = 0x83995F58;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83995fb0
	if (cr6.eq) goto loc_83995FB0;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r4,r18,386
	ctx.r4.s64 = ctx.r18.s64 + 386;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,97
	ctx.r5.s64 = 97;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x83995F80;
	sub_8259CC28(ctx, base);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r18,-11
	ctx.r4.s64 = ctx.r18.s64 + -11;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x83995F9C;
	sub_8259CC28(ctx, base);
	// li r6,477
	ctx.r6.s64 = 477;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7eb70
	ctx.lr = 0x83995FB0;
	sub_82E7EB70(ctx, base);
loc_83995FB0:
	// li r6,24
	ctx.r6.s64 = 24;
loc_83995FB4:
	// lwz r3,2056(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2056);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83995FD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83995FD0:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83995fe4
	if (cr6.eq) goto loc_83995FE4;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_83995FE4:
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83995FEC"))) PPC_WEAK_FUNC(sub_83995FEC);
PPC_FUNC_IMPL(__imp__sub_83995FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83995FF0"))) PPC_WEAK_FUNC(sub_83995FF0);
PPC_FUNC_IMPL(__imp__sub_83995FF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399601C"))) PPC_WEAK_FUNC(sub_8399601C);
PPC_FUNC_IMPL(__imp__sub_8399601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996020"))) PPC_WEAK_FUNC(sub_83996020);
PPC_FUNC_IMPL(__imp__sub_83996020) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,20968
	ctx.r9.s64 = ctx.r11.s64 + 20968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83996054
	if (cr6.eq) goto loc_83996054;
	// bl 0x82416268
	ctx.lr = 0x83996050;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83996054:
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

__attribute__((alias("__imp__sub_83996068"))) PPC_WEAK_FUNC(sub_83996068);
PPC_FUNC_IMPL(__imp__sub_83996068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83996070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// li r29,24
	ctx.r29.s64 = 24;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83996080:
	// li r5,176
	ctx.r5.s64 = 176;
	// sth r30,5(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r30.u8);
	// addi r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 7;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// sth r30,3(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3, ctx.r30.u16);
	// bl 0x831cdcf0
	ctx.lr = 0x839960A4;
	sub_831CDCF0(ctx, base);
	// sth r30,183(r31)
	PPC_STORE_U16(ctx.r31.u32 + 183, ctx.r30.u16);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// sth r30,185(r31)
	PPC_STORE_U16(ctx.r31.u32 + 185, ctx.r30.u16);
	// sth r30,187(r31)
	PPC_STORE_U16(ctx.r31.u32 + 187, ctx.r30.u16);
	// sth r30,189(r31)
	PPC_STORE_U16(ctx.r31.u32 + 189, ctx.r30.u16);
	// sth r30,191(r31)
	PPC_STORE_U16(ctx.r31.u32 + 191, ctx.r30.u16);
	// stb r30,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r30.u8);
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// bne 0x83996080
	if (!cr0.eq) goto loc_83996080;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839960D0"))) PPC_WEAK_FUNC(sub_839960D0);
PPC_FUNC_IMPL(__imp__sub_839960D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_839960D8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8399610c
	if (cr6.eq) goto loc_8399610C;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83996124
	if (cr6.eq) goto loc_83996124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839960d8
	if (cr6.lt) goto loc_839960D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399610C:
	// mulli r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 * 196;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// blr 
	return;
loc_83996124:
	// mulli r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 * 196;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996130"))) PPC_WEAK_FUNC(sub_83996130);
PPC_FUNC_IMPL(__imp__sub_83996130) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,21144
	ctx.r10.s64 = ctx.r11.s64 + 21144;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596fa8
	ctx.lr = 0x8399616C;
	sub_82596FA8(ctx, base);
	// li r9,600
	ctx.r9.s64 = 600;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83996180:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83996180
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83996180;
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r30,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839961AC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839961ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839961AC;
	// li r10,600
	ctx.r10.s64 = 600;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,2464
	ctx.r9.s64 = ctx.r31.s64 + 2464;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839961C4:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839961c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839961C4;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3064
	ctx.r3.s64 = ctx.r31.s64 + 3064;
	// bl 0x831cdcf0
	ctx.lr = 0x839961E0;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,3226
	ctx.r3.s64 = ctx.r31.s64 + 3226;
	// stw r30,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r30.u32);
	// stb r11,3196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3196, ctx.r11.u8);
	// stb r11,3197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3197, ctx.r11.u8);
	// stw r30,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r30.u32);
	// stb r30,3204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3204, ctx.r30.u8);
	// stb r30,3205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3205, ctx.r30.u8);
	// stb r30,3206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3206, ctx.r30.u8);
	// stb r30,3207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3207, ctx.r30.u8);
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r30,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r30.u32);
	// stb r30,3216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3216, ctx.r30.u8);
	// stb r30,3217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3217, ctx.r30.u8);
	// stw r30,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r30.u32);
	// stb r30,3224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3224, ctx.r30.u8);
	// bl 0x83996068
	ctx.lr = 0x83996224;
	sub_83996068(ctx, base);
	// stb r30,7930(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7930, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,7931(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7931, ctx.r30.u8);
	// stb r30,7932(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7932, ctx.r30.u8);
	// stw r30,7936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7936, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83996250"))) PPC_WEAK_FUNC(sub_83996250);
PPC_FUNC_IMPL(__imp__sub_83996250) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399629c
	if (cr6.eq) goto loc_8399629C;
	// bl 0x8398a7f0
	ctx.lr = 0x83996274;
	sub_8398A7F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399629c
	if (cr6.eq) goto loc_8399629C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8398a668
	ctx.lr = 0x8399628C;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839962a0
	if (!cr6.eq) goto loc_839962A0;
loc_8399629C:
	// li r3,255
	ctx.r3.s64 = 255;
loc_839962A0:
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

__attribute__((alias("__imp__sub_839962B4"))) PPC_WEAK_FUNC(sub_839962B4);
PPC_FUNC_IMPL(__imp__sub_839962B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839962B8"))) PPC_WEAK_FUNC(sub_839962B8);
PPC_FUNC_IMPL(__imp__sub_839962B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3196, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839962C4"))) PPC_WEAK_FUNC(sub_839962C4);
PPC_FUNC_IMPL(__imp__sub_839962C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839962C8"))) PPC_WEAK_FUNC(sub_839962C8);
PPC_FUNC_IMPL(__imp__sub_839962C8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996330
	if (cr6.eq) goto loc_83996330;
	// bl 0x8398a888
	ctx.lr = 0x839962EC;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83996330
	if (!cr6.eq) goto loc_83996330;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8398a668
	ctx.lr = 0x83996304;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996330
	if (cr6.eq) goto loc_83996330;
	// lbz r11,3196(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3196);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_83996330:
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

__attribute__((alias("__imp__sub_83996348"))) PPC_WEAK_FUNC(sub_83996348);
PPC_FUNC_IMPL(__imp__sub_83996348) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3204(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996350"))) PPC_WEAK_FUNC(sub_83996350);
PPC_FUNC_IMPL(__imp__sub_83996350) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3204, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399635C"))) PPC_WEAK_FUNC(sub_8399635C);
PPC_FUNC_IMPL(__imp__sub_8399635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996360"))) PPC_WEAK_FUNC(sub_83996360);
PPC_FUNC_IMPL(__imp__sub_83996360) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3205(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3205, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399636C"))) PPC_WEAK_FUNC(sub_8399636C);
PPC_FUNC_IMPL(__imp__sub_8399636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996370"))) PPC_WEAK_FUNC(sub_83996370);
PPC_FUNC_IMPL(__imp__sub_83996370) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3205(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3205, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399637C"))) PPC_WEAK_FUNC(sub_8399637C);
PPC_FUNC_IMPL(__imp__sub_8399637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996380"))) PPC_WEAK_FUNC(sub_83996380);
PPC_FUNC_IMPL(__imp__sub_83996380) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3205(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3205);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996388"))) PPC_WEAK_FUNC(sub_83996388);
PPC_FUNC_IMPL(__imp__sub_83996388) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839963b8
	if (cr6.eq) goto loc_839963B8;
	// bl 0x8398a888
	ctx.lr = 0x839963AC;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839963c0
	if (!cr6.eq) goto loc_839963C0;
loc_839963B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3207, ctx.r11.u8);
loc_839963C0:
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

__attribute__((alias("__imp__sub_839963D4"))) PPC_WEAK_FUNC(sub_839963D4);
PPC_FUNC_IMPL(__imp__sub_839963D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839963D8"))) PPC_WEAK_FUNC(sub_839963D8);
PPC_FUNC_IMPL(__imp__sub_839963D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839963E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4460(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4460);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,4472(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4472);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// bl 0x8399b570
	ctx.lr = 0x83996418;
	sub_8399B570(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r24,r31,r3
	ctx.r24.s64 = ctx.r3.s64 - ctx.r31.s64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8398a668
	ctx.lr = 0x83996428;
	sub_8398A668(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8399654c
	if (cr6.eq) goto loc_8399654C;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8399b670
	ctx.lr = 0x8399643C;
	sub_8399B670(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x83996454
	if (!cr6.gt) goto loc_83996454;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_83996454:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8399646c
	if (cr6.eq) goto loc_8399646C;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8399b6b0
	ctx.lr = 0x83996468;
	sub_8399B6B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8399646C:
	// li r25,0
	ctx.r25.s64 = 0;
loc_83996470:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,24
	cr6.compare<uint32_t>(ctx.r25.u32, 24, xer);
	// blt cr6,0x83996480
	if (cr6.lt) goto loc_83996480;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83996480:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r7,76(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83996540
	if (!cr6.eq) goto loc_83996540;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a31458
	ctx.lr = 0x839964A4;
	sub_82A31458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996540
	if (cr6.eq) goto loc_83996540;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839964B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x839964cc
	if (cr6.lt) goto loc_839964CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_839964CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// bl 0x8398a978
	ctx.lr = 0x839964E8;
	sub_8398A978(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83996520
	if (!cr6.eq) goto loc_83996520;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8398af20
	ctx.lr = 0x83996510;
	sub_8398AF20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83996524
	if (cr6.eq) goto loc_83996524;
loc_83996520:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83996524:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996558
	if (cr6.eq) goto loc_83996558;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x839964b8
	if (cr6.lt) goto loc_839964B8;
loc_83996540:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,24
	cr6.compare<uint32_t>(ctx.r25.u32, 24, xer);
	// blt cr6,0x83996470
	if (cr6.lt) goto loc_83996470;
loc_8399654C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83996558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83996564"))) PPC_WEAK_FUNC(sub_83996564);
PPC_FUNC_IMPL(__imp__sub_83996564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996568"))) PPC_WEAK_FUNC(sub_83996568);
PPC_FUNC_IMPL(__imp__sub_83996568) {
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
	// lwz r11,3192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x839965bc
	if (!cr6.eq) goto loc_839965BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839965c0
	if (cr6.eq) goto loc_839965C0;
	// addi r10,r3,3064
	ctx.r10.s64 = ctx.r3.s64 + 3064;
loc_8399659C:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x839965bc
	if (!cr6.eq) goto loc_839965BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x8399659c
	if (cr6.lt) goto loc_8399659C;
	// b 0x839965c0
	goto loc_839965C0;
loc_839965BC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_839965C0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996608
	if (cr6.eq) goto loc_83996608;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83572958
	ctx.lr = 0x839965D4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839965f8
	if (cr6.eq) goto loc_839965F8;
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
loc_839965F8:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,22840
	ctx.r4.s64 = ctx.r11.s64 + 22840;
	// b 0x83996630
	goto loc_83996630;
loc_83996608:
	// stw r5,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83996630
	if (cr6.eq) goto loc_83996630;
	// addi r10,r31,3064
	ctx.r10.s64 = ctx.r31.s64 + 3064;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_83996620:
	// lbzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83996620
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83996620;
loc_83996630:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8398a730
	ctx.lr = 0x83996638;
	sub_8398A730(ctx, base);
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

__attribute__((alias("__imp__sub_83996658"))) PPC_WEAK_FUNC(sub_83996658);
PPC_FUNC_IMPL(__imp__sub_83996658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83996660;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83996680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83996760
	if (!cr6.eq) goto loc_83996760;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839966A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83996760
	if (cr6.eq) goto loc_83996760;
	// li r28,0
	ctx.r28.s64 = 0;
loc_839966B0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x839966c0
	if (cr6.lt) goto loc_839966C0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839966C0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996754
	if (cr6.eq) goto loc_83996754;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839966EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x83996754
	if (!cr6.eq) goto loc_83996754;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996754
	if (cr6.eq) goto loc_83996754;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a31458
	ctx.lr = 0x83996710;
	sub_82A31458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996754
	if (cr6.eq) goto loc_83996754;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x83996724;
	sub_82A30088(ctx, base);
	// li r4,103
	ctx.r4.s64 = 103;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82a307e8
	ctx.lr = 0x83996734;
	sub_82A307E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x83996740;
	sub_828FF2D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83996754;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83996754:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x839966b0
	if (cr6.lt) goto loc_839966B0;
loc_83996760:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83996768"))) PPC_WEAK_FUNC(sub_83996768);
PPC_FUNC_IMPL(__imp__sub_83996768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83996770;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3206);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996820
	if (cr6.eq) goto loc_83996820;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,3206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3206, ctx.r30.u8);
loc_83996794:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x839967a4
	if (cr6.lt) goto loc_839967A4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839967A4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83996814
	if (cr6.eq) goto loc_83996814;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839967D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x83996814
	if (!cr6.eq) goto loc_83996814;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a31458
	ctx.lr = 0x839967E8;
	sub_82A31458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996814
	if (cr6.eq) goto loc_83996814;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x839967FC;
	sub_82A30088(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a300b0
	ctx.lr = 0x83996808;
	sub_82A300B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x83996814;
	sub_828FF2D0(ctx, base);
loc_83996814:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83996794
	if (cr6.lt) goto loc_83996794;
loc_83996820:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83996828"))) PPC_WEAK_FUNC(sub_83996828);
PPC_FUNC_IMPL(__imp__sub_83996828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83996830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83996844:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// blt cr6,0x83996854
	if (cr6.lt) goto loc_83996854;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83996854:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83996878
	if (cr6.eq) goto loc_83996878;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83996890
	if (cr6.eq) goto loc_83996890;
loc_83996878:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// blt cr6,0x83996844
	if (cr6.lt) goto loc_83996844;
loc_83996884:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83996890:
	// bl 0x82a31458
	ctx.lr = 0x83996894;
	sub_82A31458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996884
	if (cr6.eq) goto loc_83996884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x839968A8;
	sub_82A30088(ctx, base);
	// lbz r11,3207(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3207);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996884
	if (cr6.eq) goto loc_83996884;
	// stb r29,3207(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3207, ctx.r29.u8);
	// li r4,99
	ctx.r4.s64 = 99;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a300b0
	ctx.lr = 0x839968C4;
	sub_82A300B0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x839968d8
	if (cr6.lt) goto loc_839968D8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_839968D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a311f0
	ctx.lr = 0x839968E0;
	sub_82A311F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83996918"))) PPC_WEAK_FUNC(sub_83996918);
PPC_FUNC_IMPL(__imp__sub_83996918) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,3216(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3216);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3216(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3216, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399692C"))) PPC_WEAK_FUNC(sub_8399692C);
PPC_FUNC_IMPL(__imp__sub_8399692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996930"))) PPC_WEAK_FUNC(sub_83996930);
PPC_FUNC_IMPL(__imp__sub_83996930) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3216, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399693C"))) PPC_WEAK_FUNC(sub_8399693C);
PPC_FUNC_IMPL(__imp__sub_8399693C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996940"))) PPC_WEAK_FUNC(sub_83996940);
PPC_FUNC_IMPL(__imp__sub_83996940) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3217(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3217, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399694C"))) PPC_WEAK_FUNC(sub_8399694C);
PPC_FUNC_IMPL(__imp__sub_8399694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996950"))) PPC_WEAK_FUNC(sub_83996950);
PPC_FUNC_IMPL(__imp__sub_83996950) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,3217(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3217);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3217(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3217, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996964"))) PPC_WEAK_FUNC(sub_83996964);
PPC_FUNC_IMPL(__imp__sub_83996964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996968"))) PPC_WEAK_FUNC(sub_83996968);
PPC_FUNC_IMPL(__imp__sub_83996968) {
	PPC_FUNC_PROLOGUE();
	// stb r4,7932(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7932, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996970"))) PPC_WEAK_FUNC(sub_83996970);
PPC_FUNC_IMPL(__imp__sub_83996970) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,7932(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7932);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,7932(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7932, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996984"))) PPC_WEAK_FUNC(sub_83996984);
PPC_FUNC_IMPL(__imp__sub_83996984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996988"))) PPC_WEAK_FUNC(sub_83996988);
PPC_FUNC_IMPL(__imp__sub_83996988) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3197(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3197, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996994"))) PPC_WEAK_FUNC(sub_83996994);
PPC_FUNC_IMPL(__imp__sub_83996994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996998"))) PPC_WEAK_FUNC(sub_83996998);
PPC_FUNC_IMPL(__imp__sub_83996998) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996a28
	if (cr6.eq) goto loc_83996A28;
	// bl 0x8398a888
	ctx.lr = 0x839969BC;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83996a28
	if (!cr6.eq) goto loc_83996A28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8398a668
	ctx.lr = 0x839969D4;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996a28
	if (cr6.eq) goto loc_83996A28;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996a28
	if (cr6.eq) goto loc_83996A28;
	// lbz r11,3197(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3197);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83996a0c
	if (!cr6.eq) goto loc_83996A0C;
	// bl 0x8399b950
	ctx.lr = 0x839969FC;
	sub_8399B950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83996a10
	if (!cr6.eq) goto loc_83996A10;
loc_83996A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83996A10:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_83996A28:
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

__attribute__((alias("__imp__sub_83996A40"))) PPC_WEAK_FUNC(sub_83996A40);
PPC_FUNC_IMPL(__imp__sub_83996A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3220);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996A50"))) PPC_WEAK_FUNC(sub_83996A50);
PPC_FUNC_IMPL(__imp__sub_83996A50) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,7931(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7931);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996A58"))) PPC_WEAK_FUNC(sub_83996A58);
PPC_FUNC_IMPL(__imp__sub_83996A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996A60"))) PPC_WEAK_FUNC(sub_83996A60);
PPC_FUNC_IMPL(__imp__sub_83996A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r10,3200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3200);
	// li r11,4
	ctx.r11.s64 = 4;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
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

__attribute__((alias("__imp__sub_83996A80"))) PPC_WEAK_FUNC(sub_83996A80);
PPC_FUNC_IMPL(__imp__sub_83996A80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3224(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83996A88"))) PPC_WEAK_FUNC(sub_83996A88);
PPC_FUNC_IMPL(__imp__sub_83996A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83996A90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83996AA8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83996ab8
	if (cr6.lt) goto loc_83996AB8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83996AB8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996ae8
	if (cr6.eq) goto loc_83996AE8;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83996ae8
	if (!cr6.eq) goto loc_83996AE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8399b3c0
	ctx.lr = 0x83996AE4;
	sub_8399B3C0(ctx, base);
	// stb r27,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r27.u8);
loc_83996AE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83996aa8
	if (cr6.lt) goto loc_83996AA8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83996AFC"))) PPC_WEAK_FUNC(sub_83996AFC);
PPC_FUNC_IMPL(__imp__sub_83996AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996B00"))) PPC_WEAK_FUNC(sub_83996B00);
PPC_FUNC_IMPL(__imp__sub_83996B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83996B08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// blt cr6,0x83996b28
	if (cr6.lt) goto loc_83996B28;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83996B28:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x83996b48
	if (!cr6.eq) goto loc_83996B48;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83996b50
	goto loc_83996B50;
loc_83996B48:
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r11,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83996B50:
	// lwz r6,4460(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4460);
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x83996b8c
	if (!cr6.eq) goto loc_83996B8C;
	// lwz r6,5756(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5756);
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// bne cr6,0x83996b8c
	if (!cr6.eq) goto loc_83996B8C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83996b8c
	if (cr6.eq) goto loc_83996B8C;
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83996b8c
	if (!cr6.eq) goto loc_83996B8C;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_83996B8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32270
	ctx.lr = 0x83996B94;
	sub_82A32270(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32218
	ctx.lr = 0x83996BA0;
	sub_82A32218(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a330f8
	ctx.lr = 0x83996BA8;
	sub_82A330F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8399b290
	ctx.lr = 0x83996BB4;
	sub_8399B290(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83996BBC"))) PPC_WEAK_FUNC(sub_83996BBC);
PPC_FUNC_IMPL(__imp__sub_83996BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996BC0"))) PPC_WEAK_FUNC(sub_83996BC0);
PPC_FUNC_IMPL(__imp__sub_83996BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83996BC8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,128(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 128);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x83996bfc
	if (cr6.lt) goto loc_83996BFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83996BFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83996cc4
	if (cr6.gt) goto loc_83996CC4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83996c84
	if (cr6.eq) goto loc_83996C84;
	// bdz 0x83996cc4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83996CC4;
	// bdz 0x83996c28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83996C28;
	// bdz 0x83996c54
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83996C54;
	// b 0x83996cb0
	goto loc_83996CB0;
loc_83996C28:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83996b00
	ctx.lr = 0x83996C48;
	sub_83996B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83996C54:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,24
	cr6.compare<uint32_t>(ctx.r20.u32, 24, xer);
	// blt cr6,0x83996c64
	if (cr6.lt) goto loc_83996C64;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83996C64:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x83996a88
	ctx.lr = 0x83996C80;
	sub_83996A88(ctx, base);
	// b 0x83996cc4
	goto loc_83996CC4;
loc_83996C84:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,47
	ctx.r4.u64 = ctx.r4.u64 | 47;
	// bl 0x83535150
	ctx.lr = 0x83996CA4;
	sub_83535150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83994b30
	ctx.lr = 0x83996CAC;
	sub_83994B30(ctx, base);
	// b 0x83996cc4
	goto loc_83996CC4;
loc_83996CB0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83996CC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83996CC4:
	// bl 0x839943e0
	ctx.lr = 0x83996CC8;
	sub_839943E0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83996de4
	if (cr6.eq) goto loc_83996DE4;
	// lbz r11,80(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 80);
	// addi r23,r22,80
	ctx.r23.s64 = ctx.r22.s64 + 80;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x83996de4
	if (!cr6.lt) goto loc_83996DE4;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83996de4
	if (cr6.eq) goto loc_83996DE4;
	// lwz r11,4460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83996dac
	if (!cr6.eq) goto loc_83996DAC;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// lwz r29,-3564(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83996dac
	if (cr6.eq) goto loc_83996DAC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r30,5756
	ctx.r30.s64 = ctx.r30.s64 + 5756;
loc_83996D18:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83996d30
	if (cr6.lt) goto loc_83996D30;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83996d34
	if (cr6.lt) goto loc_83996D34;
loc_83996D30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83996D34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996d94
	if (cr6.eq) goto loc_83996D94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x83996D4C;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// beq cr6,0x83996d94
	if (cr6.eq) goto loc_83996D94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x83996D60;
	sub_82A0C7B0(ctx, base);
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83996da8
	if (!cr6.eq) goto loc_83996DA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x83996D78;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x83996D84;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83996da8
	if (cr6.eq) goto loc_83996DA8;
	// lwz r29,-3564(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
loc_83996D94:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x83996d18
	if (cr6.lt) goto loc_83996D18;
	// b 0x83996dac
	goto loc_83996DAC;
loc_83996DA8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_83996DAC:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996de4
	if (cr6.eq) goto loc_83996DE4;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83996DD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a31410
	ctx.lr = 0x83996DE4;
	sub_82A31410(ctx, base);
loc_83996DE4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83996DFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83996e20
	if (cr6.eq) goto loc_83996E20;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,3968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3968);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83996E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83996E20:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,24
	cr6.compare<uint32_t>(ctx.r20.u32, 24, xer);
	// blt cr6,0x83996e30
	if (cr6.lt) goto loc_83996E30;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83996E30:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r4,r7,20732
	ctx.r4.s64 = ctx.r7.s64 + 20732;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bctrl 
	ctx.lr = 0x83996E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83996E6C"))) PPC_WEAK_FUNC(sub_83996E6C);
PPC_FUNC_IMPL(__imp__sub_83996E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83996E70"))) PPC_WEAK_FUNC(sub_83996E70);
PPC_FUNC_IMPL(__imp__sub_83996E70) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a301e0
	ctx.lr = 0x83996E94;
	sub_82A301E0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83996f74
	if (cr6.gt) goto loc_83996F74;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83996f54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83996F54;
	// bdzf 4*cr6+eq,0x83996f74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83996F74;
	// bdzf 4*cr6+eq,0x83996f74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83996F74;
	// bdzf 4*cr6+eq,0x83996ee8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83996EE8;
	// bdzf 4*cr6+eq,0x83996f74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83996F74;
	// bdzf 4*cr6+eq,0x83996f0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83996F0C;
	// bne cr6,0x83996f30
	if (!cr6.eq) goto loc_83996F30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a308d0
	ctx.lr = 0x83996ED4;
	sub_82A308D0(ctx, base);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x83996f74
	if (cr6.eq) goto loc_83996F74;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83996f78
	goto loc_83996F78;
loc_83996EE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a30b40
	ctx.lr = 0x83996EF8;
	sub_82A30B40(ctx, base);
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x83996f74
	if (cr6.eq) goto loc_83996F74;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83996f78
	goto loc_83996F78;
loc_83996F0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a30860
	ctx.lr = 0x83996F1C;
	sub_82A30860(ctx, base);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x83996f74
	if (cr6.eq) goto loc_83996F74;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83996f78
	goto loc_83996F78;
loc_83996F30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a308b8
	ctx.lr = 0x83996F40;
	sub_82A308B8(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x83996f74
	if (cr6.eq) goto loc_83996F74;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83996f78
	goto loc_83996F78;
loc_83996F54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a30a70
	ctx.lr = 0x83996F64;
	sub_82A30A70(ctx, base);
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x83996f78
	if (!cr6.eq) goto loc_83996F78;
loc_83996F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83996F78:
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

__attribute__((alias("__imp__sub_83996F90"))) PPC_WEAK_FUNC(sub_83996F90);
PPC_FUNC_IMPL(__imp__sub_83996F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83996F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x83996fe0
	if (!cr6.lt) goto loc_83996FE0;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83996fe0
	if (cr6.eq) goto loc_83996FE0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83996e70
	ctx.lr = 0x83996FC8;
	sub_83996E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83996fe0
	if (cr6.eq) goto loc_83996FE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a31410
	ctx.lr = 0x83996FE0;
	sub_82A31410(ctx, base);
loc_83996FE0:
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x83997028
	if (!cr6.lt) goto loc_83997028;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83997028
	if (cr6.eq) goto loc_83997028;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x83997010
	if (cr6.lt) goto loc_83997010;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83997010:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bne cr6,0x83997028
	if (!cr6.eq) goto loc_83997028;
	// bl 0x831f8200
	ctx.lr = 0x83997020;
	sub_831F8200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a33468
	ctx.lr = 0x83997028;
	sub_82A33468(ctx, base);
loc_83997028:
	// li r5,180
	ctx.r5.s64 = 180;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83997038;
	sub_831CE980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997040"))) PPC_WEAK_FUNC(sub_83997040);
PPC_FUNC_IMPL(__imp__sub_83997040) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839970c0
	if (cr6.eq) goto loc_839970C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398aa28
	ctx.lr = 0x8399706C;
	sub_8398AA28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839970c0
	if (cr6.eq) goto loc_839970C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839970c0
	if (!cr6.eq) goto loc_839970C0;
	// bl 0x83989720
	ctx.lr = 0x83997088;
	sub_83989720(ctx, base);
	// addi r30,r3,112
	ctx.r30.s64 = ctx.r3.s64 + 112;
	// bl 0x83989720
	ctx.lr = 0x83997090;
	sub_83989720(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x839970c0
	if (!cr6.gt) goto loc_839970C0;
	// lbz r11,7931(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7931);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839970c0
	if (!cr6.eq) goto loc_839970C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839970C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839970C0:
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

__attribute__((alias("__imp__sub_839970D8"))) PPC_WEAK_FUNC(sub_839970D8);
PPC_FUNC_IMPL(__imp__sub_839970D8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
loc_839970F4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x83997124
	if (!cr6.lt) goto loc_83997124;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83997124
	if (cr6.eq) goto loc_83997124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a301e0
	ctx.lr = 0x83997114;
	sub_82A301E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x83997124
	if (cr6.lt) goto loc_83997124;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// ble cr6,0x83997150
	if (!cr6.gt) goto loc_83997150;
loc_83997124:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x839970f4
	if (cr6.lt) goto loc_839970F4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83997138:
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
loc_83997150:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83997138
	goto loc_83997138;
}

__attribute__((alias("__imp__sub_83997158"))) PPC_WEAK_FUNC(sub_83997158);
PPC_FUNC_IMPL(__imp__sub_83997158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83997160;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x839943e0
	ctx.lr = 0x83997174;
	sub_839943E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399726c
	if (cr6.eq) goto loc_8399726C;
	// lwz r11,4460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8399726c
	if (!cr6.eq) goto loc_8399726C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399719C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8399726c
	if (cr6.eq) goto loc_8399726C;
	// lwz r31,4492(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4492);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839971fc
	if (cr6.eq) goto loc_839971FC;
	// bl 0x82a1a558
	ctx.lr = 0x839971BC;
	sub_82A1A558(ctx, base);
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 & ctx.r10.u64;
	// bl 0x83740858
	ctx.lr = 0x839971D0;
	sub_83740858(ctx, base);
	// divwu r8,r31,r3
	ctx.r8.u32 = PPCDivide(ctx.r31.u32, ctx.r3.u32);
	// twllei r3,0
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bgt cr6,0x839971fc
	if (cr6.gt) goto loc_839971FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839971F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_839971FC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399726c
	if (!cr6.eq) goto loc_8399726C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8399720C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a31458
	ctx.lr = 0x83997218;
	sub_82A31458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83997254
	if (cr6.eq) goto loc_83997254;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839970d8
	ctx.lr = 0x8399722C;
	sub_839970D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997254
	if (cr6.eq) goto loc_83997254;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83997250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_83997254:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399726c
	if (!cr6.eq) goto loc_8399726C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8399720c
	if (cr6.lt) goto loc_8399720C;
loc_8399726C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997274"))) PPC_WEAK_FUNC(sub_83997274);
PPC_FUNC_IMPL(__imp__sub_83997274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997278"))) PPC_WEAK_FUNC(sub_83997278);
PPC_FUNC_IMPL(__imp__sub_83997278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83997280;
	__savegprlr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r21,r5,8
	ctx.r21.s64 = ctx.r5.s64 + 8;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r25,r5,184
	ctx.r25.s64 = ctx.r5.s64 + 184;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r28,r11,-25768
	ctx.r28.s64 = ctx.r11.s64 + -25768;
loc_839972B4:
	// lbzx r5,r25,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r31.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839972e8
	if (cr6.eq) goto loc_839972E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x839972CC;
	sub_831CE980(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x839972e0
	if (cr6.lt) goto loc_839972E0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_839972E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a30100
	ctx.lr = 0x839972E8;
	sub_82A30100(ctx, base);
loc_839972E8:
	// lbzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r31.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x839972b4
	if (cr6.lt) goto loc_839972B4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r31,10
	ctx.r31.s64 = 10;
loc_83997308:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a30088
	ctx.lr = 0x83997310;
	sub_82A30088(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x83997308
	if (!cr0.lt) goto loc_83997308;
	// stb r23,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r23.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a31798
	ctx.lr = 0x8399732C;
	sub_82A31798(ctx, base);
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x83997340
	if (cr6.lt) goto loc_83997340;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83997340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83997404
	if (cr6.gt) goto loc_83997404;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8399736c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399736C;
	// bdzf 4*cr6+eq,0x83997404
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83997404;
	// bdzf 4*cr6+eq,0x83997404
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83997404;
	// bdzf 4*cr6+eq,0x839973b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839973B8;
	// bne cr6,0x8399736c
	if (!cr6.eq) goto loc_8399736C;
loc_8399736C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
loc_83997374:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83997384
	if (cr6.lt) goto loc_83997384;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997384:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x839973a8
	if (!cr6.eq) goto loc_839973A8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399b2b0
	ctx.lr = 0x839973A8;
	sub_8399B2B0(ctx, base);
loc_839973A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83997374
	if (cr6.lt) goto loc_83997374;
	// b 0x8399759c
	goto loc_8399759C;
loc_839973B8:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
loc_839973C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x839973d0
	if (cr6.lt) goto loc_839973D0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839973D0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x839973f4
	if (!cr6.eq) goto loc_839973F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399b2b0
	ctx.lr = 0x839973F4;
	sub_8399B2B0(ctx, base);
loc_839973F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x839973c0
	if (cr6.lt) goto loc_839973C0;
	// b 0x8399759c
	goto loc_8399759C;
loc_83997404:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83997410:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83997420
	if (cr6.lt) goto loc_83997420;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997420:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x83997438
	if (!cr6.eq) goto loc_83997438;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_83997438:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83997448
	if (cr6.lt) goto loc_83997448;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997448:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x83997460
	if (!cr6.eq) goto loc_83997460;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_83997460:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83997470
	if (cr6.lt) goto loc_83997470;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997470:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x83997488
	if (!cr6.eq) goto loc_83997488;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_83997488:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83997498
	if (cr6.lt) goto loc_83997498;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997498:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x839974b0
	if (!cr6.eq) goto loc_839974B0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_839974B0:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839974c0
	if (cr6.lt) goto loc_839974C0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839974C0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x839974d8
	if (!cr6.eq) goto loc_839974D8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_839974D8:
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839974e8
	if (cr6.lt) goto loc_839974E8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839974E8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x83997500
	if (!cr6.eq) goto loc_83997500;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_83997500:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83997410
	if (cr6.lt) goto loc_83997410;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_83997518:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// blt cr6,0x83997528
	if (cr6.lt) goto loc_83997528;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997528:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x8399756c
	if (!cr6.eq) goto loc_8399756C;
	// lbz r7,2(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// twllei r8,0
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// andc r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// twlgei r7,-1
	// beq cr6,0x8399757c
	if (cr6.eq) goto loc_8399757C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8399756C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// blt cr6,0x83997518
	if (cr6.lt) goto loc_83997518;
	// b 0x8399759c
	goto loc_8399759C;
loc_8399757C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8399759c
	if (cr6.lt) goto loc_8399759C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// bl 0x8399b2b0
	ctx.lr = 0x83997590;
	sub_8399B2B0(ctx, base);
	// lbz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2(r24)
	PPC_STORE_U8(ctx.r24.u32 + 2, ctx.r11.u8);
loc_8399759C:
	// li r5,176
	ctx.r5.s64 = 176;
	// sth r23,6(r24)
	PPC_STORE_U16(ctx.r24.u32 + 6, ctx.r23.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x839975B0;
	sub_831CDCF0(ctx, base);
	// sth r23,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r23.u16);
	// sth r23,2(r25)
	PPC_STORE_U16(ctx.r25.u32 + 2, ctx.r23.u16);
	// sth r23,4(r25)
	PPC_STORE_U16(ctx.r25.u32 + 4, ctx.r23.u16);
	// sth r23,6(r25)
	PPC_STORE_U16(ctx.r25.u32 + 6, ctx.r23.u16);
	// sth r23,8(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8, ctx.r23.u16);
	// stb r23,10(r25)
	PPC_STORE_U8(ctx.r25.u32 + 10, ctx.r23.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839975D0"))) PPC_WEAK_FUNC(sub_839975D0);
PPC_FUNC_IMPL(__imp__sub_839975D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x839975D8;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r11,-25252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25252);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lis r18,-31742
	ctx.r18.s64 = -2080243712;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83997618
	if (!cr6.eq) goto loc_83997618;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,225
	ctx.r9.s64 = 225;
	// stw r11,-25252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25252, ctx.r11.u32);
	// stb r9,-25253(r18)
	PPC_STORE_U8(ctx.r18.u32 + -25253, ctx.r9.u8);
loc_83997618:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r15,-31742
	ctx.r15.s64 = -2080243712;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83997638
	if (!cr6.eq) goto loc_83997638;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// li r9,226
	ctx.r9.s64 = 226;
	// stw r11,-25252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25252, ctx.r11.u32);
	// stb r9,-25254(r15)
	PPC_STORE_U8(ctx.r15.u32 + -25254, ctx.r9.u8);
loc_83997638:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r16,-31742
	ctx.r16.s64 = -2080243712;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83997658
	if (!cr6.eq) goto loc_83997658;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// li r9,229
	ctx.r9.s64 = 229;
	// stw r11,-25252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25252, ctx.r11.u32);
	// stb r9,-25255(r16)
	PPC_STORE_U8(ctx.r16.u32 + -25255, ctx.r9.u8);
loc_83997658:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r17,-31742
	ctx.r17.s64 = -2080243712;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83997678
	if (!cr6.eq) goto loc_83997678;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r9,230
	ctx.r9.s64 = 230;
	// stw r11,-25252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25252, ctx.r11.u32);
	// stb r9,-25256(r17)
	PPC_STORE_U8(ctx.r17.u32 + -25256, ctx.r9.u8);
loc_83997678:
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r24,3226
	ctx.r3.s64 = ctx.r24.s64 + 3226;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// bl 0x839960d0
	ctx.lr = 0x8399768C;
	sub_839960D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839977b4
	if (cr6.eq) goto loc_839977B4;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x839977b4
	if (cr6.eq) goto loc_839977B4;
loc_839976A0:
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// subf r31,r25,r19
	ctx.r31.s64 = ctx.r19.s64 - ctx.r25.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83997704
	if (!cr6.eq) goto loc_83997704;
	// lbzx r26,r25,r21
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r21.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,250
	cr6.compare<uint32_t>(ctx.r26.u32, 250, xer);
	// bne cr6,0x839977bc
	if (!cr6.eq) goto loc_839977BC;
	// lbz r26,-25255(r16)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r16.u32 + -25255);
loc_839976C4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x839976d8
	if (cr6.lt) goto loc_839976D8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_839976D8:
	// bl 0x82a311f0
	ctx.lr = 0x839976DC;
	sub_82A311F0(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// rlwinm r11,r10,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0;
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stb r26,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r26.u8);
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r9.u16);
loc_83997704:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// lbz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r27,248
	cr6.compare<uint32_t>(ctx.r27.u32, 248, xer);
	// clrlwi r11,r27,25
	ctx.r11.u64 = ctx.r27.u32 & 0x7F;
	// blt cr6,0x83997728
	if (cr6.lt) goto loc_83997728;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83997728:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a30100
	ctx.lr = 0x83997730;
	sub_82A30100(ctx, base);
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// ble cr6,0x83997748
	if (!cr6.gt) goto loc_83997748;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_83997748:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r25,r21
	ctx.r4.u64 = ctx.r25.u64 + ctx.r21.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83997758;
	sub_831CE980(ctx, base);
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r10.u16);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x839977ac
	if (!cr6.eq) goto loc_839977AC;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r27,248
	cr6.compare<uint32_t>(ctx.r27.u32, 248, xer);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r30,184(r9)
	PPC_STORE_U8(ctx.r9.u32 + 184, ctx.r30.u8);
	// sth r23,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r23.u16);
	// bge cr6,0x839977ac
	if (!cr6.lt) goto loc_839977AC;
	// rlwinm r11,r27,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 25) & 0x1FFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839977ac
	if (cr6.eq) goto loc_839977AC;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83997278
	ctx.lr = 0x839977AC;
	sub_83997278(ctx, base);
loc_839977AC:
	// cmplw cr6,r25,r19
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, xer);
	// blt cr6,0x839976a0
	if (cr6.lt) goto loc_839976A0;
loc_839977B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_839977BC:
	// cmplwi cr6,r11,249
	cr6.compare<uint32_t>(ctx.r11.u32, 249, xer);
	// bne cr6,0x839977cc
	if (!cr6.eq) goto loc_839977CC;
	// lbz r26,-25256(r17)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r17.u32 + -25256);
	// b 0x839976c4
	goto loc_839976C4;
loc_839977CC:
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(ctx.r11.u32, 254, xer);
	// bne cr6,0x8399786c
	if (!cr6.eq) goto loc_8399786C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r26,-25253(r18)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r18.u32 + -25253);
	// clrlwi r27,r20,24
	ctx.r27.u64 = ctx.r20.u32 & 0xFF;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839977F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bne cr6,0x83997818
	if (!cr6.eq) goto loc_83997818;
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// lwz r10,48(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r11.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83989720
	ctx.lr = 0x83997814;
	sub_83989720(ctx, base);
	// stw r30,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r30.u32);
loc_83997818:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r30,364
	ctx.r30.s64 = 364;
loc_83997820:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x83997830
	if (cr6.lt) goto loc_83997830;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997830:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x83997858
	if (!cr6.eq) goto loc_83997858;
	// bl 0x83989720
	ctx.lr = 0x83997848;
	sub_83989720(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83997858:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r30,460
	cr6.compare<uint32_t>(ctx.r30.u32, 460, xer);
	// blt cr6,0x83997820
	if (cr6.lt) goto loc_83997820;
	// b 0x839976c4
	goto loc_839976C4;
loc_8399786C:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x8399787c
	if (!cr6.eq) goto loc_8399787C;
	// lbz r26,-25254(r15)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r15.u32 + -25254);
	// b 0x839976c4
	goto loc_839976C4;
loc_8399787C:
	// cmplwi cr6,r11,252
	cr6.compare<uint32_t>(ctx.r11.u32, 252, xer);
	// bne cr6,0x8399788c
	if (!cr6.eq) goto loc_8399788C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x839977ac
	goto loc_839977AC;
loc_8399788C:
	// cmplwi cr6,r11,251
	cr6.compare<uint32_t>(ctx.r11.u32, 251, xer);
	// bne cr6,0x8399789c
	if (!cr6.eq) goto loc_8399789C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x839977ac
	goto loc_839977AC;
loc_8399789C:
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x839976c4
	if (!cr6.lt) goto loc_839976C4;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(ctx.r11.s32, 95, xer);
	// bne cr6,0x839976c4
	if (!cr6.eq) goto loc_839976C4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839978C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x839977ac
	goto loc_839977AC;
}

__attribute__((alias("__imp__sub_839978D0"))) PPC_WEAK_FUNC(sub_839978D0);
PPC_FUNC_IMPL(__imp__sub_839978D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839978D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,-25912
	ctx.r29.s64 = ctx.r11.s64 + -25912;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8398a778
	ctx.lr = 0x83997900;
	sub_8398A778(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839979b0
	if (cr6.eq) goto loc_839979B0;
loc_83997908:
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83997914:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83997924
	if (cr6.lt) goto loc_83997924;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997924:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83997960
	if (cr6.eq) goto loc_83997960;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83997948
	if (cr6.lt) goto loc_83997948;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997948:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83997970
	if (cr6.eq) goto loc_83997970;
loc_83997960:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83997914
	if (cr6.lt) goto loc_83997914;
	// b 0x83997974
	goto loc_83997974;
loc_83997970:
	// li r9,1
	ctx.r9.s64 = 1;
loc_83997974:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997994
	if (cr6.eq) goto loc_83997994;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839975d0
	ctx.lr = 0x83997994;
	sub_839975D0(ctx, base);
loc_83997994:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398a778
	ctx.lr = 0x839979A8;
	sub_8398A778(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83997908
	if (!cr6.eq) goto loc_83997908;
loc_839979B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839979B8"))) PPC_WEAK_FUNC(sub_839979B8);
PPC_FUNC_IMPL(__imp__sub_839979B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839979C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83997a20
	if (cr6.gt) goto loc_83997A20;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x83a7d958
	ctx.lr = 0x839979E4;
	sub_83A7D958(ctx, base);
	// lis r11,6990
	ctx.r11.s64 = 458096640;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r9,r11,33205
	ctx.r9.u64 = ctx.r11.u64 | 33205;
	// li r3,1
	ctx.r3.s64 = 1;
	// mulhwu r8,r29,r9
	ctx.r8.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// mulli r6,r7,600
	ctx.r6.s64 = ctx.r7.s64 * 600;
	// subf r11,r6,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r6.s64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83997A20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997A2C"))) PPC_WEAK_FUNC(sub_83997A2C);
PPC_FUNC_IMPL(__imp__sub_83997A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997A30"))) PPC_WEAK_FUNC(sub_83997A30);
PPC_FUNC_IMPL(__imp__sub_83997A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,7931(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7931);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,3206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3206);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3206, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83997A54"))) PPC_WEAK_FUNC(sub_83997A54);
PPC_FUNC_IMPL(__imp__sub_83997A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997A58"))) PPC_WEAK_FUNC(sub_83997A58);
PPC_FUNC_IMPL(__imp__sub_83997A58) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8399b570
	ctx.lr = 0x83997A74;
	sub_8399B570(ctx, base);
	// lwz r11,3212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3212);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
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

__attribute__((alias("__imp__sub_83997A90"))) PPC_WEAK_FUNC(sub_83997A90);
PPC_FUNC_IMPL(__imp__sub_83997A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83997A98"))) PPC_WEAK_FUNC(sub_83997A98);
PPC_FUNC_IMPL(__imp__sub_83997A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83997AA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83997ac8
	if (cr6.eq) goto loc_83997AC8;
	// bl 0x8398a888
	ctx.lr = 0x83997ABC;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83997b4c
	if (!cr6.eq) goto loc_83997B4C;
loc_83997AC8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83997b44
	if (cr6.eq) goto loc_83997B44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398a668
	ctx.lr = 0x83997ADC;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997b4c
	if (cr6.eq) goto loc_83997B4C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83997AEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83997afc
	if (cr6.lt) goto loc_83997AFC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997AFC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997b38
	if (cr6.eq) goto loc_83997B38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8399b250
	ctx.lr = 0x83997B1C;
	sub_8399B250(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83997b38
	if (!cr6.eq) goto loc_83997B38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8399b270
	ctx.lr = 0x83997B38;
	sub_8399B270(ctx, base);
loc_83997B38:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83997aec
	if (cr6.lt) goto loc_83997AEC;
loc_83997B44:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8399b240
	ctx.lr = 0x83997B4C;
	sub_8399B240(ctx, base);
loc_83997B4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997B54"))) PPC_WEAK_FUNC(sub_83997B54);
PPC_FUNC_IMPL(__imp__sub_83997B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997B58"))) PPC_WEAK_FUNC(sub_83997B58);
PPC_FUNC_IMPL(__imp__sub_83997B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8398cba0
	sub_8398CBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997B68"))) PPC_WEAK_FUNC(sub_83997B68);
PPC_FUNC_IMPL(__imp__sub_83997B68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83997B6C"))) PPC_WEAK_FUNC(sub_83997B6C);
PPC_FUNC_IMPL(__imp__sub_83997B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997B70"))) PPC_WEAK_FUNC(sub_83997B70);
PPC_FUNC_IMPL(__imp__sub_83997B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8398cbe8
	sub_8398CBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997B80"))) PPC_WEAK_FUNC(sub_83997B80);
PPC_FUNC_IMPL(__imp__sub_83997B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83997B84"))) PPC_WEAK_FUNC(sub_83997B84);
PPC_FUNC_IMPL(__imp__sub_83997B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997B88"))) PPC_WEAK_FUNC(sub_83997B88);
PPC_FUNC_IMPL(__imp__sub_83997B88) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8399b870
	ctx.lr = 0x83997BA4;
	sub_8399B870(ctx, base);
	// lwz r11,3212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3212);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
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

__attribute__((alias("__imp__sub_83997BC0"))) PPC_WEAK_FUNC(sub_83997BC0);
PPC_FUNC_IMPL(__imp__sub_83997BC0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,7936
	ctx.r3.s64 = ctx.r3.s64 + 7936;
	// b 0x825749c0
	sub_825749C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997BCC"))) PPC_WEAK_FUNC(sub_83997BCC);
PPC_FUNC_IMPL(__imp__sub_83997BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997BD0"))) PPC_WEAK_FUNC(sub_83997BD0);
PPC_FUNC_IMPL(__imp__sub_83997BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83997be0
	if (!cr6.eq) goto loc_83997BE0;
	// blr 
	return;
loc_83997BE0:
	// b 0x8398a718
	sub_8398A718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997BE4"))) PPC_WEAK_FUNC(sub_83997BE4);
PPC_FUNC_IMPL(__imp__sub_83997BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997BE8"))) PPC_WEAK_FUNC(sub_83997BE8);
PPC_FUNC_IMPL(__imp__sub_83997BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83997BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997c68
	if (cr6.eq) goto loc_83997C68;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// li r31,10
	ctx.r31.s64 = 10;
loc_83997C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a30088
	ctx.lr = 0x83997C14;
	sub_82A30088(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x83997c0c
	if (!cr0.lt) goto loc_83997C0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r11.u8);
	// bl 0x82a30088
	ctx.lr = 0x83997C30;
	sub_82A30088(ctx, base);
	// li r4,95
	ctx.r4.s64 = 95;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a300b0
	ctx.lr = 0x83997C3C;
	sub_82A300B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828ff2d0
	ctx.lr = 0x83997C48;
	sub_828FF2D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a31648
	ctx.lr = 0x83997C58;
	sub_82A31648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8398a730
	ctx.lr = 0x83997C68;
	sub_8398A730(ctx, base);
loc_83997C68:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997C70"))) PPC_WEAK_FUNC(sub_83997C70);
PPC_FUNC_IMPL(__imp__sub_83997C70) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,7940
	ctx.r4.s64 = 7940;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83997C94;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83997cb0
	if (cr6.eq) goto loc_83997CB0;
	// bl 0x83996130
	ctx.lr = 0x83997CA0;
	sub_83996130(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83997CB0:
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

__attribute__((alias("__imp__sub_83997CC4"))) PPC_WEAK_FUNC(sub_83997CC4);
PPC_FUNC_IMPL(__imp__sub_83997CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997CC8"))) PPC_WEAK_FUNC(sub_83997CC8);
PPC_FUNC_IMPL(__imp__sub_83997CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83997CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997d28
	if (cr6.eq) goto loc_83997D28;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83997D00;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83997d20
	if (cr6.eq) goto loc_83997D20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83997D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83997D20:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83997D28;
	sub_82595170(ctx, base);
loc_83997D28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997d6c
	if (cr6.eq) goto loc_83997D6C;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83997D48;
	sub_82595150(ctx, base);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83997d64
	if (cr6.eq) goto loc_83997D64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399bf48
	ctx.lr = 0x83997D5C;
	sub_8399BF48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x83997D64;
	sub_82416268(ctx, base);
loc_83997D64:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83997D6C;
	sub_82595170(ctx, base);
loc_83997D6C:
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83997D94:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83997d94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83997D94;
	// li r10,600
	ctx.r10.s64 = 600;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,2464
	ctx.r9.s64 = ctx.r31.s64 + 2464;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83997DAC:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83997dac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83997DAC;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3064
	ctx.r3.s64 = ctx.r31.s64 + 3064;
	// bl 0x831cdcf0
	ctx.lr = 0x83997DC8;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,3226
	ctx.r3.s64 = ctx.r31.s64 + 3226;
	// stw r30,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r30.u32);
	// stb r11,3196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3196, ctx.r11.u8);
	// stb r11,3197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3197, ctx.r11.u8);
	// stw r30,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r30.u32);
	// stb r30,3204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3204, ctx.r30.u8);
	// stb r30,3205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3205, ctx.r30.u8);
	// stb r30,3206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3206, ctx.r30.u8);
	// stb r30,3207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3207, ctx.r30.u8);
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r30,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r30.u32);
	// stb r30,3216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3216, ctx.r30.u8);
	// stb r30,3217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3217, ctx.r30.u8);
	// stw r30,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r30.u32);
	// stb r30,3224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3224, ctx.r30.u8);
	// bl 0x83996068
	ctx.lr = 0x83997E0C;
	sub_83996068(ctx, base);
	// lbz r11,7930(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7930);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83997e1c
	if (cr6.eq) goto loc_83997E1C;
	// bl 0x82d47978
	ctx.lr = 0x83997E1C;
	sub_82D47978(ctx, base);
loc_83997E1C:
	// stb r30,7930(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7930, ctx.r30.u8);
	// stb r30,7931(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7931, ctx.r30.u8);
	// stb r30,7932(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7932, ctx.r30.u8);
	// stw r30,7936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7936, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83997E34"))) PPC_WEAK_FUNC(sub_83997E34);
PPC_FUNC_IMPL(__imp__sub_83997E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997E38"))) PPC_WEAK_FUNC(sub_83997E38);
PPC_FUNC_IMPL(__imp__sub_83997E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83997E40;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x8398a668
	ctx.lr = 0x83997E60;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83997e78
	if (!cr6.eq) goto loc_83997E78;
loc_83997E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83997E78:
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83997E88:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83997e88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83997E88;
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-25248
	ctx.r27.s64 = ctx.r11.s64 + -25248;
	// lwz r11,-25068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25068);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83997ee8
	if (!cr6.eq) goto loc_83997EE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r11,-25068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25068, ctx.r11.u32);
	// li r31,10
	ctx.r31.s64 = 10;
loc_83997EC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a30088
	ctx.lr = 0x83997EC8;
	sub_82A30088(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x83997ec0
	if (!cr0.lt) goto loc_83997EC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// stb r11,176(r27)
	PPC_STORE_U8(ctx.r27.u32 + 176, ctx.r11.u8);
	// addi r3,r10,3112
	ctx.r3.s64 = ctx.r10.s64 + 3112;
	// bl 0x831cdcc8
	ctx.lr = 0x83997EE8;
	sub_831CDCC8(ctx, base);
loc_83997EE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83997EF8;
	sub_831CDCF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_83997EFC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x83997f0c
	if (cr6.lt) goto loc_83997F0C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997F0C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83997f78
	if (cr6.eq) goto loc_83997F78;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83997f78
	if (!cr6.eq) goto loc_83997F78;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83997f94
	if (cr6.eq) goto loc_83997F94;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a31458
	ctx.lr = 0x83997F44;
	sub_82A31458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83997f78
	if (cr6.eq) goto loc_83997F78;
loc_83997F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a31848
	ctx.lr = 0x83997F58;
	sub_82A31848(ctx, base);
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplwi cr6,r30,128
	cr6.compare<uint32_t>(ctx.r30.u32, 128, xer);
	// bge cr6,0x83997e6c
	if (!cr6.lt) goto loc_83997E6C;
	// subfic r5,r29,128
	xer.ca = ctx.r29.u32 <= 128;
	ctx.r5.s64 = 128 - ctx.r29.s64;
	// add r4,r29,r26
	ctx.r4.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a31648
	ctx.lr = 0x83997F74;
	sub_82A31648(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83997F78:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x83997efc
	if (cr6.lt) goto loc_83997EFC;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83997F94:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x83997f50
	goto loc_83997F50;
}

__attribute__((alias("__imp__sub_83997F9C"))) PPC_WEAK_FUNC(sub_83997F9C);
PPC_FUNC_IMPL(__imp__sub_83997F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83997FA0"))) PPC_WEAK_FUNC(sub_83997FA0);
PPC_FUNC_IMPL(__imp__sub_83997FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83997FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83997FBC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83997fcc
	if (cr6.lt) goto loc_83997FCC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83997FCC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83997fe8
	if (!cr6.eq) goto loc_83997FE8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83997ff0
	goto loc_83997FF0;
loc_83997FE8:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83997FF0:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83998078
	if (!cr6.eq) goto loc_83998078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a322f0
	ctx.lr = 0x83998004;
	sub_82A322F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83998078
	if (cr6.eq) goto loc_83998078;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83998024
	if (cr6.eq) goto loc_83998024;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83998044
	goto loc_83998044;
loc_83998024:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8399803c
	if (cr6.lt) goto loc_8399803C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83998040
	if (cr6.lt) goto loc_83998040;
loc_8399803C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83998040:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83998044:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83998078
	if (cr6.eq) goto loc_83998078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x83998058;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x8399805C;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83998078
	if (cr6.eq) goto loc_83998078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8399806C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x83998070;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8399808c
	if (!cr6.eq) goto loc_8399808C;
loc_83998078:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83997fbc
	if (cr6.lt) goto loc_83997FBC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8399808C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a321c8
	ctx.lr = 0x83998098;
	sub_82A321C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839980A0"))) PPC_WEAK_FUNC(sub_839980A0);
PPC_FUNC_IMPL(__imp__sub_839980A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839980A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x839980c8
	if (cr6.lt) goto loc_839980C8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_839980C8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,97
	cr6.compare<uint32_t>(ctx.r10.u32, 97, xer);
	// beq cr6,0x83998168
	if (cr6.eq) goto loc_83998168;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x839980e4
	if (cr6.lt) goto loc_839980E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_839980E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(ctx.r11.u32, 98, xer);
	// beq cr6,0x83998168
	if (cr6.eq) goto loc_83998168;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x839980FC;
	sub_82596FE8(ctx, base);
	// lis r11,6990
	ctx.r11.s64 = 458096640;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,33205
	ctx.r10.u64 = ctx.r11.u64 | 33205;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulhwu r8,r9,r10
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r7,r8,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// mulli r6,r7,600
	ctx.r6.s64 = ctx.r7.s64 * 600;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r29,2464(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2464, ctx.r29.u8);
	// bl 0x839979b8
	ctx.lr = 0x83998130;
	sub_839979B8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83998158
	if (cr6.eq) goto loc_83998158;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83524138
	ctx.lr = 0x83998144;
	sub_83524138(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83989720
	ctx.lr = 0x8399814C;
	sub_83989720(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// bl 0x83989720
	ctx.lr = 0x83998154;
	sub_83989720(ctx, base);
	// b 0x839981a8
	goto loc_839981A8;
loc_83998158:
	// bl 0x83989720
	ctx.lr = 0x8399815C;
	sub_83989720(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x839981a8
	goto loc_839981A8;
loc_83998168:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83998174;
	sub_82596FE8(ctx, base);
	// lis r11,6990
	ctx.r11.s64 = 458096640;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,33205
	ctx.r9.u64 = ctx.r11.u64 | 33205;
	// mulhwu r7,r8,r9
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r6,r7,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// mulli r5,r6,600
	ctx.r5.s64 = ctx.r6.s64 * 600;
	// subf r11,r5,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,2464(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2464, ctx.r10.u8);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_839981A8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x83989720
	ctx.lr = 0x839981B8;
	sub_83989720(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x839981C8;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839981D0"))) PPC_WEAK_FUNC(sub_839981D0);
PPC_FUNC_IMPL(__imp__sub_839981D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839981D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-25912
	ctx.r29.s64 = ctx.r11.s64 + -25912;
loc_839981F0:
	// lwz r4,3212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3212);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8399b800
	ctx.lr = 0x839981FC;
	sub_8399B800(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83998234
	if (cr6.eq) goto loc_83998234;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bge cr6,0x839982e4
	if (!cr6.lt) goto loc_839982E4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8399b3e0
	ctx.lr = 0x8399821C;
	sub_8399B3E0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,3212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3212);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x839982e4
	if (!cr6.lt) goto loc_839982E4;
loc_83998234:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398a778
	ctx.lr = 0x83998248;
	sub_8398A778(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839982e4
	if (cr6.eq) goto loc_839982E4;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83998264:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83998274
	if (cr6.lt) goto loc_83998274;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998274:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839982b0
	if (cr6.eq) goto loc_839982B0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83998298
	if (cr6.lt) goto loc_83998298;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998298:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x839982c0
	if (cr6.eq) goto loc_839982C0;
loc_839982B0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83998264
	if (cr6.lt) goto loc_83998264;
	// b 0x839982c4
	goto loc_839982C4;
loc_839982C0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_839982C4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839981f0
	if (cr6.eq) goto loc_839981F0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839975d0
	ctx.lr = 0x839982E0;
	sub_839975D0(ctx, base);
	// b 0x839981f0
	goto loc_839981F0;
loc_839982E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839982EC"))) PPC_WEAK_FUNC(sub_839982EC);
PPC_FUNC_IMPL(__imp__sub_839982EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839982F0"))) PPC_WEAK_FUNC(sub_839982F0);
PPC_FUNC_IMPL(__imp__sub_839982F0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399831c
	if (cr6.eq) goto loc_8399831C;
	// bl 0x839978d0
	ctx.lr = 0x83998318;
	sub_839978D0(ctx, base);
	// b 0x83998320
	goto loc_83998320;
loc_8399831C:
	// bl 0x839981d0
	ctx.lr = 0x83998320;
	sub_839981D0(ctx, base);
loc_83998320:
	// bl 0x83989720
	ctx.lr = 0x83998324;
	sub_83989720(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,3212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3212);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8399b990
	ctx.lr = 0x83998334;
	sub_8399B990(ctx, base);
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

__attribute__((alias("__imp__sub_83998348"))) PPC_WEAK_FUNC(sub_83998348);
PPC_FUNC_IMPL(__imp__sub_83998348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83998350;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,7936
	ctx.r3.s64 = ctx.r3.s64 + 7936;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x825749e0
	ctx.lr = 0x83998368;
	sub_825749E0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8399851c
	if (!cr6.eq) goto loc_8399851C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83998388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83998508
	if (!cr6.eq) goto loc_83998508;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lis r8,6990
	ctx.r8.s64 = 458096640;
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// lis r9,-31742
	ctx.r9.s64 = -2080243712;
	// ori r27,r8,33205
	ctx.r27.u64 = ctx.r8.u64 | 33205;
	// lis r24,-31742
	ctx.r24.s64 = -2080243712;
	// addi r26,r11,22841
	ctx.r26.s64 = ctx.r11.s64 + 22841;
	// addi r25,r10,-20568
	ctx.r25.s64 = ctx.r10.s64 + -20568;
	// addi r28,r9,-25056
	ctx.r28.s64 = ctx.r9.s64 + -25056;
loc_839983B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839983CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83998508
	if (!cr6.eq) goto loc_83998508;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839983EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8398b188
	ctx.lr = 0x839983F8;
	sub_8398B188(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998508
	if (cr6.eq) goto loc_83998508;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83998508
	if (!cr6.eq) goto loc_83998508;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83998508
	if (!cr6.eq) goto loc_83998508;
	// lwz r11,-25064(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -25064);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399844c
	if (!cr6.eq) goto loc_8399844C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,-25064(r24)
	PPC_STORE_U32(ctx.r24.u32 + -25064, ctx.r11.u32);
	// bl 0x825b2ec8
	ctx.lr = 0x83998440;
	sub_825B2EC8(ctx, base);
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3120
	ctx.r3.s64 = ctx.r11.s64 + 3120;
	// bl 0x831cdcc8
	ctx.lr = 0x8399844C;
	sub_831CDCC8(ctx, base);
loc_8399844C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83997e38
	ctx.lr = 0x83998468;
	sub_83997E38(ctx, base);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83998474;
	sub_82596FE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83996568
	ctx.lr = 0x83998484;
	sub_83996568(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839984dc
	if (cr6.eq) goto loc_839984DC;
	// lwz r11,3208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// bl 0x83a7d958
	ctx.lr = 0x8399849C;
	sub_83A7D958(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mulhwu r9,r10,r27
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// mulli r7,r8,600
	ctx.r7.s64 = ctx.r8.s64 * 600;
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83989720
	ctx.lr = 0x839984D4;
	sub_83989720(ctx, base);
	// stw r30,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r30.u32);
	// b 0x839984e0
	goto loc_839984E0;
loc_839984DC:
	// li r21,1
	ctx.r21.s64 = 1;
loc_839984E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x839984E8;
	sub_82597088(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839984FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839983b8
	if (cr6.eq) goto loc_839983B8;
loc_83998508:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399851C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8399851C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83998524"))) PPC_WEAK_FUNC(sub_83998524);
PPC_FUNC_IMPL(__imp__sub_83998524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83998528"))) PPC_WEAK_FUNC(sub_83998528);
PPC_FUNC_IMPL(__imp__sub_83998528) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8399854C;
	sub_82596FE8(ctx, base);
	// li r11,251
	ctx.r11.s64 = 251;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398a730
	ctx.lr = 0x83998564;
	sub_8398A730(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83998580
	if (!cr6.eq) goto loc_83998580;
	// bl 0x82597088
	ctx.lr = 0x83998578;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83998594
	goto loc_83998594;
loc_83998580:
	// lwz r11,3208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x83998590;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83998594:
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

__attribute__((alias("__imp__sub_839985AC"))) PPC_WEAK_FUNC(sub_839985AC);
PPC_FUNC_IMPL(__imp__sub_839985AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839985B0"))) PPC_WEAK_FUNC(sub_839985B0);
PPC_FUNC_IMPL(__imp__sub_839985B0) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,21144
	ctx.r10.s64 = ctx.r11.s64 + 21144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83997cc8
	ctx.lr = 0x839985DC;
	sub_83997CC8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82596f90
	ctx.lr = 0x839985E4;
	sub_82596F90(ctx, base);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,20968
	ctx.r7.s64 = ctx.r9.s64 + 20968;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83998608
	if (cr6.eq) goto loc_83998608;
	// bl 0x82416268
	ctx.lr = 0x83998604;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83998608:
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

__attribute__((alias("__imp__sub_83998620"))) PPC_WEAK_FUNC(sub_83998620);
PPC_FUNC_IMPL(__imp__sub_83998620) {
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
	// lwz r11,4460(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4460);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x839986b8
	if (!cr6.eq) goto loc_839986B8;
	// lwz r31,4492(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4492);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839986d8
	if (cr6.eq) goto loc_839986D8;
	// bl 0x82a1a558
	ctx.lr = 0x83998654;
	sub_82A1A558(ctx, base);
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 & ctx.r10.u64;
	// bl 0x83740858
	ctx.lr = 0x83998668;
	sub_83740858(ctx, base);
	// divwu r8,r31,r3
	ctx.r8.u32 = PPCDivide(ctx.r31.u32, ctx.r3.u32);
	// twllei r3,0
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bgt cr6,0x839986d8
	if (cr6.gt) goto loc_839986D8;
	// lbz r11,7930(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7930);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83998698
	if (!cr6.eq) goto loc_83998698;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20535
	ctx.r4.s64 = ctx.r11.s64 + 20535;
	// bl 0x837b0c10
	ctx.lr = 0x83998694;
	sub_837B0C10(ctx, base);
	// bl 0x82d47bb8
	ctx.lr = 0x83998698;
	sub_82D47BB8(ctx, base);
loc_83998698:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,7930(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7930, ctx.r11.u8);
	// bl 0x83740858
	ctx.lr = 0x839986A4;
	sub_83740858(ctx, base);
	// twllei r3,0
	// divwu r3,r31,r3
	ctx.r3.u32 = PPCDivide(ctx.r31.u32, ctx.r3.u32);
	// bl 0x82d47a58
	ctx.lr = 0x839986B0;
	sub_82D47A58(ctx, base);
	// bl 0x82d47830
	ctx.lr = 0x839986B4;
	sub_82D47830(ctx, base);
	// b 0x839986d8
	goto loc_839986D8;
loc_839986B8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839986d8
	if (!cr6.eq) goto loc_839986D8;
	// lbz r11,7930(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7930);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839986d8
	if (cr6.eq) goto loc_839986D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,7930(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7930, ctx.r11.u8);
	// bl 0x82d47978
	ctx.lr = 0x839986D8;
	sub_82D47978(ctx, base);
loc_839986D8:
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

__attribute__((alias("__imp__sub_839986F0"))) PPC_WEAK_FUNC(sub_839986F0);
PPC_FUNC_IMPL(__imp__sub_839986F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839986F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,7931(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7931);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839987c0
	if (!cr6.eq) goto loc_839987C0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stb r10,7931(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7931, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,20566
	ctx.r30.s64 = ctx.r11.s64 + 20566;
	// addi r3,r30,198
	ctx.r3.s64 = ctx.r30.s64 + 198;
	// bl 0x83523fd8
	ctx.lr = 0x83998724;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83998760
	if (cr6.eq) goto loc_83998760;
	// lis r31,-31778
	ctx.r31.s64 = -2082603008;
	// lwz r3,3968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3968);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83998760
	if (cr6.eq) goto loc_83998760;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399874C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,3968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3968);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83998760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83998760:
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x83992508
	ctx.lr = 0x83998774;
	sub_83992508(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839987c0
	if (cr6.eq) goto loc_839987C0;
	// bl 0x82e7e2f8
	ctx.lr = 0x83998784;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839987c0
	if (cr6.eq) goto loc_839987C0;
	// addi r4,r30,218
	ctx.r4.s64 = ctx.r30.s64 + 218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8399879C;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x839987AC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2590
	ctx.r6.s64 = 2590;
	// bl 0x82e7eb70
	ctx.lr = 0x839987C0;
	sub_82E7EB70(ctx, base);
loc_839987C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839987C8"))) PPC_WEAK_FUNC(sub_839987C8);
PPC_FUNC_IMPL(__imp__sub_839987C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839987D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839987F4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x83998820
	if (cr6.eq) goto loc_83998820;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r10,r11,-22892
	ctx.r10.s64 = ctx.r11.s64 + -22892;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83998824
	goto loc_83998824;
loc_83998820:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83998824:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x825b4748
	ctx.lr = 0x8399882C;
	sub_825B4748(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9032
	ctx.r4.s64 = 9032;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83998840;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83998858
	if (cr6.eq) goto loc_83998858;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8399b180
	ctx.lr = 0x83998854;
	sub_8399B180(ctx, base);
	// b 0x8399885c
	goto loc_8399885C;
loc_83998858:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8399885C:
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83998884:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83998884
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83998884;
	// li r10,600
	ctx.r10.s64 = 600;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,2464
	ctx.r9.s64 = ctx.r31.s64 + 2464;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8399889C:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8399889c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399889C;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3064
	ctx.r3.s64 = ctx.r31.s64 + 3064;
	// bl 0x831cdcf0
	ctx.lr = 0x839988B8;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,3226
	ctx.r3.s64 = ctx.r31.s64 + 3226;
	// stw r30,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r30.u32);
	// stb r11,3196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3196, ctx.r11.u8);
	// stb r11,3197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3197, ctx.r11.u8);
	// stw r30,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r30.u32);
	// stb r30,3204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3204, ctx.r30.u8);
	// stb r30,3205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3205, ctx.r30.u8);
	// stb r30,3206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3206, ctx.r30.u8);
	// stb r30,3207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3207, ctx.r30.u8);
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r30,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r30.u32);
	// stb r30,3216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3216, ctx.r30.u8);
	// stb r30,3217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3217, ctx.r30.u8);
	// stw r30,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r30.u32);
	// stb r30,3224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3224, ctx.r30.u8);
	// bl 0x83996068
	ctx.lr = 0x839988FC;
	sub_83996068(ctx, base);
	// stb r30,7930(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7930, ctx.r30.u8);
	// stb r30,7931(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7931, ctx.r30.u8);
	// stb r30,7932(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7932, ctx.r30.u8);
	// stw r30,7936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7936, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83998914"))) PPC_WEAK_FUNC(sub_83998914);
PPC_FUNC_IMPL(__imp__sub_83998914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83998918"))) PPC_WEAK_FUNC(sub_83998918);
PPC_FUNC_IMPL(__imp__sub_83998918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83998920;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3200);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x839990cc
	if (cr6.gt) goto loc_839990CC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83998a34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83998A34;
	// bdzf 4*cr6+eq,0x83998dd4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83998DD4;
	// bne cr6,0x839990a8
	if (!cr6.eq) goto loc_839990A8;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,191
	ctx.r11.s64 = ctx.r1.s64 + 191;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83998968:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83998968
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83998968;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8398c960
	ctx.lr = 0x83998988;
	sub_8398C960(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83998a20
	if (cr6.eq) goto loc_83998A20;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// bgt cr6,0x83998a20
	if (cr6.gt) goto loc_83998A20;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839989d8
	if (cr6.eq) goto loc_839989D8;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_839989C0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// bdnz 0x839989c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839989C0;
loc_839989D8:
	// bl 0x83987ca0
	ctx.lr = 0x839989DC;
	sub_83987CA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83988948
	ctx.lr = 0x839989EC;
	sub_83988948(ctx, base);
	// lwz r11,3200(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3200);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,3200(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3200, ctx.r11.u32);
	// beq cr6,0x839990d0
	if (cr6.eq) goto loc_839990D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83998A14;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83998A20:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x83998A28;
	sub_82F73D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83998A34:
	// bl 0x83987ca0
	ctx.lr = 0x83998A38;
	sub_83987CA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x839889c0
	ctx.lr = 0x83998A40;
	sub_839889C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83998dc4
	if (cr6.eq) goto loc_83998DC4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825b4950
	ctx.lr = 0x83998A54;
	sub_825B4950(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83998A60:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x83998a70
	if (cr6.lt) goto loc_83998A70;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998A70:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83998b24
	if (cr6.eq) goto loc_83998B24;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83998af8
	if (cr6.eq) goto loc_83998AF8;
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83998AA4:
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998adc
	if (cr6.eq) goto loc_83998ADC;
loc_83998ABC:
	// lbzx r23,r11,r10
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r23,r5
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r5.u32, xer);
	// beq cr6,0x83998ad8
	if (cr6.eq) goto loc_83998AD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83998abc
	if (cr6.lt) goto loc_83998ABC;
	// b 0x83998adc
	goto loc_83998ADC;
loc_83998AD8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83998ADC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83998af8
	if (!cr6.eq) goto loc_83998AF8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// blt cr6,0x83998aa4
	if (cr6.lt) goto loc_83998AA4;
loc_83998AF8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83998b24
	if (!cr6.eq) goto loc_83998B24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32270
	ctx.lr = 0x83998B0C;
	sub_82A32270(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32218
	ctx.lr = 0x83998B18;
	sub_82A32218(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x8399b290
	ctx.lr = 0x83998B24;
	sub_8399B290(ctx, base);
loc_83998B24:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x83998a60
	if (cr6.lt) goto loc_83998A60;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83998B38:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998b48
	if (cr6.lt) goto loc_83998B48;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998B48:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998b70
	if (cr6.eq) goto loc_83998B70;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83998b70
	if (!cr6.eq) goto loc_83998B70;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83998B70:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998b80
	if (cr6.lt) goto loc_83998B80;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998B80:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998ba8
	if (cr6.eq) goto loc_83998BA8;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83998ba8
	if (!cr6.eq) goto loc_83998BA8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83998BA8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83998bb8
	if (cr6.lt) goto loc_83998BB8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998BB8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998be0
	if (cr6.eq) goto loc_83998BE0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83998be0
	if (!cr6.eq) goto loc_83998BE0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83998BE0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998bf0
	if (cr6.lt) goto loc_83998BF0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998BF0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998c18
	if (cr6.eq) goto loc_83998C18;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83998c18
	if (!cr6.eq) goto loc_83998C18;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83998C18:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998c28
	if (cr6.lt) goto loc_83998C28;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998C28:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998c50
	if (cr6.eq) goto loc_83998C50;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83998c50
	if (!cr6.eq) goto loc_83998C50;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83998C50:
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998c60
	if (cr6.lt) goto loc_83998C60;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998C60:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83998c88
	if (cr6.eq) goto loc_83998C88;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83998c88
	if (!cr6.eq) goto loc_83998C88;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83998C88:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998b38
	if (cr6.lt) goto loc_83998B38;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83998d00
	if (cr6.eq) goto loc_83998D00;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_83998CB0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83998cb0
	if (!cr0.eq) goto loc_83998CB0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83998cfc
	if (!cr6.eq) goto loc_83998CFC;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x83998CDC;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,12320
	ctx.r5.s64 = ctx.r11.s64 + 12320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83998CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83998CFC:
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
loc_83998D00:
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595150
	ctx.lr = 0x83998D10;
	sub_82595150(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838331e8
	ctx.lr = 0x83998D18;
	sub_838331E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82416268
	ctx.lr = 0x83998D20;
	sub_82416268(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595170
	ctx.lr = 0x83998D28;
	sub_82595170(ctx, base);
	// lwz r11,3200(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3200);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,3200(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3200, ctx.r9.u32);
	// bne cr6,0x839990d0
	if (!cr6.eq) goto loc_839990D0;
	// bl 0x82e7e2f8
	ctx.lr = 0x83998D44;
	sub_82E7E2F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83998da8
	if (cr6.eq) goto loc_83998DA8;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// li r5,94
	ctx.r5.s64 = 94;
	// addi r30,r11,20534
	ctx.r30.s64 = ctx.r11.s64 + 20534;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,74
	ctx.r4.s64 = ctx.r30.s64 + 74;
	// bl 0x8259cc28
	ctx.lr = 0x83998D78;
	sub_8259CC28(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x83998D94;
	sub_8259CC28(ctx, base);
	// li r6,875
	ctx.r6.s64 = 875;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e7eb70
	ctx.lr = 0x83998DA8;
	sub_82E7EB70(ctx, base);
loc_83998DA8:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x83992548
	ctx.lr = 0x83998DB8;
	sub_83992548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83998DC4:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83998DD4:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
loc_83998DE0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83998df0
	if (cr6.lt) goto loc_83998DF0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998DF0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83998e14
	if (!cr6.eq) goto loc_83998E14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83998de0
	if (cr6.lt) goto loc_83998DE0;
	// b 0x83998e2c
	goto loc_83998E2C;
loc_83998E14:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
loc_83998E2C:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399907c
	if (cr6.eq) goto loc_8399907C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8398aea8
	ctx.lr = 0x83998E44;
	sub_8398AEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839990d0
	if (cr6.eq) goto loc_839990D0;
	// li r9,38
	ctx.r9.s64 = 38;
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83998E60:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83998e60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83998E60;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// lbz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
loc_83998E74:
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998e84
	if (cr6.lt) goto loc_83998E84;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998E84:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83998eb8
	if (cr6.eq) goto loc_83998EB8;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r1,225
	ctx.r8.s64 = ctx.r1.s64 + 225;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
loc_83998EB8:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998ec8
	if (cr6.lt) goto loc_83998EC8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998EC8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83998efc
	if (cr6.eq) goto loc_83998EFC;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r1,225
	ctx.r8.s64 = ctx.r1.s64 + 225;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
loc_83998EFC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x83998f0c
	if (cr6.lt) goto loc_83998F0C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998F0C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83998f40
	if (cr6.eq) goto loc_83998F40;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r1,225
	ctx.r8.s64 = ctx.r1.s64 + 225;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
loc_83998F40:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998f50
	if (cr6.lt) goto loc_83998F50;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998F50:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83998f84
	if (cr6.eq) goto loc_83998F84;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r1,225
	ctx.r8.s64 = ctx.r1.s64 + 225;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
loc_83998F84:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998f94
	if (cr6.lt) goto loc_83998F94;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998F94:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83998fc8
	if (cr6.eq) goto loc_83998FC8;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r1,225
	ctx.r8.s64 = ctx.r1.s64 + 225;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
loc_83998FC8:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998fd8
	if (cr6.lt) goto loc_83998FD8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83998FD8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8399900c
	if (cr6.eq) goto loc_8399900C;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r1,225
	ctx.r8.s64 = ctx.r1.s64 + 225;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
loc_8399900C:
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83998e74
	if (cr6.lt) goto loc_83998E74;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83999020:
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82a30100
	ctx.lr = 0x83999028;
	sub_82A30100(ctx, base);
	// lbz r9,249(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 249);
	// addi r10,r1,250
	ctx.r10.s64 = ctx.r1.s64 + 250;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,111
	cr6.compare<uint32_t>(ctx.r30.u32, 111, xer);
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbz r7,249(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 249);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stb r5,249(r1)
	PPC_STORE_U8(ctx.r1.u32 + 249, ctx.r5.u8);
	// blt cr6,0x83999020
	if (cr6.lt) goto loc_83999020;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399907c
	if (cr6.eq) goto loc_8399907C;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8398cfb8
	ctx.lr = 0x83999070;
	sub_8398CFB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839990d0
	if (cr6.eq) goto loc_839990D0;
loc_8399907C:
	// bl 0x83987ca0
	ctx.lr = 0x83999080;
	sub_83987CA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83988948
	ctx.lr = 0x83999090;
	sub_83988948(ctx, base);
	// lwz r11,3200(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3200(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3200, ctx.r11.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839990A8:
	// bl 0x83987ca0
	ctx.lr = 0x839990AC;
	sub_83987CA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x839889c0
	ctx.lr = 0x839990B4;
	sub_839889C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83998dc4
	if (cr6.eq) goto loc_83998DC4;
	// bl 0x838336b8
	ctx.lr = 0x839990C0;
	sub_838336B8(ctx, base);
	// lwz r11,3200(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3200(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3200, ctx.r11.u32);
loc_839990CC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_839990D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839990DC"))) PPC_WEAK_FUNC(sub_839990DC);
PPC_FUNC_IMPL(__imp__sub_839990DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839990E0"))) PPC_WEAK_FUNC(sub_839990E0);
PPC_FUNC_IMPL(__imp__sub_839990E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839990E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83999114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839992fc
	if (!cr6.eq) goto loc_839992FC;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// bl 0x83523fd8
	ctx.lr = 0x83999130;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83999148
	if (cr6.eq) goto loc_83999148;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8399b670
	ctx.lr = 0x83999140;
	sub_8399B670(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x839992fc
	if (cr6.gt) goto loc_839992FC;
loc_83999148:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8398a668
	ctx.lr = 0x83999154;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839992fc
	if (cr6.eq) goto loc_839992FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83999174;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83998918
	ctx.lr = 0x8399918C;
	sub_83998918(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839992fc
	if (cr6.eq) goto loc_839992FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83996658
	ctx.lr = 0x839991A8;
	sub_83996658(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83996768
	ctx.lr = 0x839991B8;
	sub_83996768(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83996828
	ctx.lr = 0x839991CC;
	sub_83996828(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839991EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839992fc
	if (!cr6.eq) goto loc_839992FC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839963d8
	ctx.lr = 0x8399920C;
	sub_839963D8(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83999234
	if (cr6.eq) goto loc_83999234;
	// bl 0x83989720
	ctx.lr = 0x8399921C;
	sub_83989720(ctx, base);
	// addi r10,r3,460
	ctx.r10.s64 = ctx.r3.s64 + 460;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bne cr6,0x83999254
	if (!cr6.eq) goto loc_83999254;
loc_83999234:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83997e38
	ctx.lr = 0x83999250;
	sub_83997E38(ctx, base);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83999254:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999274
	if (cr6.eq) goto loc_83999274;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83999274;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83999274:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x839992fc
	if (cr6.eq) goto loc_839992FC;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83999288;
	sub_82596FE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83996568
	ctx.lr = 0x83999298;
	sub_83996568(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x839992f4
	if (!cr6.eq) goto loc_839992F4;
	// lwz r11,3208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// bl 0x83a7d958
	ctx.lr = 0x839992B0;
	sub_83A7D958(ctx, base);
	// lis r10,6990
	ctx.r10.s64 = 458096640;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ori r8,r10,33205
	ctx.r8.u64 = ctx.r10.u64 | 33205;
	// mulhwu r7,r9,r8
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r7,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// mulli r5,r6,600
	ctx.r5.s64 = ctx.r6.s64 * 600;
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83989720
	ctx.lr = 0x839992F0;
	sub_83989720(ctx, base);
	// stw r31,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r31.u32);
loc_839992F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x839992FC;
	sub_82597088(ctx, base);
loc_839992FC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83999304"))) PPC_WEAK_FUNC(sub_83999304);
PPC_FUNC_IMPL(__imp__sub_83999304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83999308"))) PPC_WEAK_FUNC(sub_83999308);
PPC_FUNC_IMPL(__imp__sub_83999308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83999310;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83999340
	if (!cr6.eq) goto loc_83999340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4748
	ctx.lr = 0x83999340;
	sub_825B4748(ctx, base);
loc_83999340:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399935c
	if (!cr6.eq) goto loc_8399935C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8399935C:
	// lbz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 4);
	// lwz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83999374
	if (!cr6.eq) goto loc_83999374;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x825b4878
	ctx.lr = 0x83999374;
	sub_825B4878(ctx, base);
loc_83999374:
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83999390
	if (!cr6.eq) goto loc_83999390;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r10.u32);
loc_83999390:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,16(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b2660
	ctx.lr = 0x839993A0;
	sub_825B2660(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839993B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// clrlwi r23,r3,24
	ctx.r23.u64 = ctx.r3.u32 & 0xFF;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// addi r25,r11,20748
	ctx.r25.s64 = ctx.r11.s64 + 20748;
loc_839993CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x839993dc
	if (cr6.lt) goto loc_839993DC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839993DC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82a31458
	ctx.lr = 0x839993F0;
	sub_82A31458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999460
	if (cr6.eq) goto loc_83999460;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,3212(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3212);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8399bfb0
	ctx.lr = 0x8399940C;
	sub_8399BFB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83996f90
	ctx.lr = 0x83999424;
	sub_83996F90(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83999434
	if (cr6.lt) goto loc_83999434;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83999434:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bctrl 
	ctx.lr = 0x83999460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83999460:
	// lbz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839994b4
	if (cr6.eq) goto loc_839994B4;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// bne cr6,0x839994b4
	if (!cr6.eq) goto loc_839994B4;
	// lbz r11,94(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 94);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839994b4
	if (!cr6.eq) goto loc_839994B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a31458
	ctx.lr = 0x83999490;
	sub_82A31458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839994b4
	if (cr6.eq) goto loc_839994B4;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839994b4
	if (!cr6.eq) goto loc_839994B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839980a0
	ctx.lr = 0x839994B0;
	sub_839980A0(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_839994B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x839993cc
	if (cr6.lt) goto loc_839993CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83997040
	ctx.lr = 0x839994C8;
	sub_83997040(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83997158
	ctx.lr = 0x839994DC;
	sub_83997158(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r18,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r18.u8);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_839994F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a31458
	ctx.lr = 0x83999504;
	sub_82A31458(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999550
	if (cr6.eq) goto loc_83999550;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83996bc0
	ctx.lr = 0x83999540;
	sub_83996BC0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83999550
	if (cr6.eq) goto loc_83999550;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83999550:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x839994f8
	if (cr6.lt) goto loc_839994F8;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839995b0
	if (cr6.eq) goto loc_839995B0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83999580
	if (cr6.lt) goto loc_83999580;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83999584
	if (cr6.lt) goto loc_83999584;
loc_83999580:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_83999584:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839995b0
	if (cr6.eq) goto loc_839995B0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839995b0
	if (cr6.eq) goto loc_839995B0;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83997fa0
	ctx.lr = 0x839995B0;
	sub_83997FA0(ctx, base);
loc_839995B0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999604
	if (cr6.eq) goto loc_83999604;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8399b950
	ctx.lr = 0x839995C4;
	sub_8399B950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999604
	if (cr6.eq) goto loc_83999604;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839995E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83999604
	if (!cr6.eq) goto loc_83999604;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83999604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83999604:
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399966c
	if (cr6.eq) goto loc_8399966C;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8399961C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8399961c
	if (!cr0.eq) goto loc_8399961C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83999668
	if (!cr6.eq) goto loc_83999668;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x83999648;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12320
	ctx.r5.s64 = ctx.r11.s64 + 12320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83999668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83999668:
	// stw r18,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r18.u32);
loc_8399966C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83999680
	if (cr6.eq) goto loc_83999680;
	// stw r18,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r18.u32);
loc_83999680:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83999688"))) PPC_WEAK_FUNC(sub_83999688);
PPC_FUNC_IMPL(__imp__sub_83999688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83999690;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839996e4
	if (cr6.eq) goto loc_839996E4;
	// bl 0x8398a888
	ctx.lr = 0x839996B8;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839996e4
	if (cr6.eq) goto loc_839996E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839996D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83999814
	if (cr6.eq) goto loc_83999814;
loc_839996E4:
	// lwz r4,3212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3212);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8399b800
	ctx.lr = 0x839996F0;
	sub_8399B800(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8399977c
	if (cr6.lt) goto loc_8399977C;
	// beq cr6,0x83999718
	if (cr6.eq) goto loc_83999718;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x83999740
	if (!cr6.lt) goto loc_83999740;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,3224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3224, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83999718:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399972C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83999814
	if (!cr6.eq) goto loc_83999814;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
loc_83999740:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83999308
	ctx.lr = 0x83999758;
	sub_83999308(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83998620
	ctx.lr = 0x83999764;
	sub_83998620(ctx, base);
	// lwz r11,3212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3212);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8399977C:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r29.u32);
	// bl 0x83989720
	ctx.lr = 0x83999788;
	sub_83989720(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8399b570
	ctx.lr = 0x839997A0;
	sub_8399B570(ctx, base);
	// lwz r8,3212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3212);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bgt cr6,0x839997c0
	if (cr6.gt) goto loc_839997C0;
	// bl 0x83989720
	ctx.lr = 0x839997B0;
	sub_83989720(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_839997C0:
	// li r30,12
	ctx.r30.s64 = 12;
loc_839997C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8399b638
	ctx.lr = 0x839997D4;
	sub_8399B638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999804
	if (cr6.eq) goto loc_83999804;
	// lwz r11,3212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3212);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83999804
	if (cr6.gt) goto loc_83999804;
	// bl 0x83989720
	ctx.lr = 0x839997F4;
	sub_83989720(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83999804:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,108
	cr6.compare<uint32_t>(ctx.r30.u32, 108, xer);
	// blt cr6,0x839997c4
	if (cr6.lt) goto loc_839997C4;
loc_83999814:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83999820"))) PPC_WEAK_FUNC(sub_83999820);
PPC_FUNC_IMPL(__imp__sub_83999820) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r11,21456
	ctx.r9.s64 = ctx.r11.s64 + 21456;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8399985C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x83999888
	if (cr6.eq) goto loc_83999888;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r10,r11,-22824
	ctx.r10.s64 = ctx.r11.s64 + -22824;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8399988c
	goto loc_8399988C;
loc_83999888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399988C:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bl 0x825b4670
	ctx.lr = 0x83999894;
	sub_825B4670(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_839998B4"))) PPC_WEAK_FUNC(sub_839998B4);
PPC_FUNC_IMPL(__imp__sub_839998B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839998B8"))) PPC_WEAK_FUNC(sub_839998B8);
PPC_FUNC_IMPL(__imp__sub_839998B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,3092(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3092, ctx.r4.u8);
	// stb r5,3093(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3093, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839998D0"))) PPC_WEAK_FUNC(sub_839998D0);
PPC_FUNC_IMPL(__imp__sub_839998D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r8,180
	ctx.r8.s64 = 180;
	// subfc r7,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r10,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// and r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 & ctx.r4.u64;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// and r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 & ctx.r4.u64;
	// addi r3,r10,387
	ctx.r3.s64 = ctx.r10.s64 + 387;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,387
	ctx.r7.s64 = ctx.r10.s64 + 387;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stb r5,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r5.u8);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stdx r3,r6,r11
	PPC_STORE_U64(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83999934"))) PPC_WEAK_FUNC(sub_83999934);
PPC_FUNC_IMPL(__imp__sub_83999934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83999938"))) PPC_WEAK_FUNC(sub_83999938);
PPC_FUNC_IMPL(__imp__sub_83999938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r9,24
	ctx.r9.s64 = 24;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 & ctx.r4.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// addi r10,r10,387
	ctx.r10.s64 = ctx.r10.s64 + 387;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83999984
	if (cr6.eq) goto loc_83999984;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83999984:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399999C"))) PPC_WEAK_FUNC(sub_8399999C);
PPC_FUNC_IMPL(__imp__sub_8399999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839999A0"))) PPC_WEAK_FUNC(sub_839999A0);
PPC_FUNC_IMPL(__imp__sub_839999A0) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,21456
	ctx.r9.s64 = ctx.r11.s64 + 21456;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83999a08
	if (cr6.eq) goto loc_83999A08;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839999E0;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999a00
	if (cr6.eq) goto loc_83999A00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83999A00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83999A00:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83999A08;
	sub_82595170(ctx, base);
loc_83999A08:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-11284
	ctx.r9.s64 = ctx.r11.s64 + -11284;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83999A30"))) PPC_WEAK_FUNC(sub_83999A30);
PPC_FUNC_IMPL(__imp__sub_83999A30) {
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
	// bl 0x839999a0
	ctx.lr = 0x83999A50;
	sub_839999A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999a68
	if (cr6.eq) goto loc_83999A68;
	// bl 0x82416268
	ctx.lr = 0x83999A64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83999A68:
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

__attribute__((alias("__imp__sub_83999A80"))) PPC_WEAK_FUNC(sub_83999A80);
PPC_FUNC_IMPL(__imp__sub_83999A80) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999ab8
	if (cr6.eq) goto loc_83999AB8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x83999AB4;
	sub_825B33F0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83999AB8:
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

__attribute__((alias("__imp__sub_83999AD0"))) PPC_WEAK_FUNC(sub_83999AD0);
PPC_FUNC_IMPL(__imp__sub_83999AD0) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83999b00
	if (!cr6.eq) goto loc_83999B00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x83999B00;
	sub_825B4670(ctx, base);
loc_83999B00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83999b28
	if (!cr6.eq) goto loc_83999B28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// b 0x83999b30
	goto loc_83999B30;
loc_83999B28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_83999B30:
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

__attribute__((alias("__imp__sub_83999B48"))) PPC_WEAK_FUNC(sub_83999B48);
PPC_FUNC_IMPL(__imp__sub_83999B48) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83999B6C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999b88
	if (cr6.eq) goto loc_83999B88;
	// bl 0x83999820
	ctx.lr = 0x83999B78;
	sub_83999820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83999B88:
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

__attribute__((alias("__imp__sub_83999B9C"))) PPC_WEAK_FUNC(sub_83999B9C);
PPC_FUNC_IMPL(__imp__sub_83999B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83999BA0"))) PPC_WEAK_FUNC(sub_83999BA0);
PPC_FUNC_IMPL(__imp__sub_83999BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,111
	cr6.compare<int32_t>(ctx.r5.s32, 111, xer);
	// bge cr6,0x83999bd8
	if (!cr6.lt) goto loc_83999BD8;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999bd8
	if (cr6.eq) goto loc_83999BD8;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83999bd8
	if (cr6.eq) goto loc_83999BD8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83999BD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83999BE0"))) PPC_WEAK_FUNC(sub_83999BE0);
PPC_FUNC_IMPL(__imp__sub_83999BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83999BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999c94
	if (cr6.eq) goto loc_83999C94;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8c428
	ctx.lr = 0x83999C14;
	sub_82A8C428(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82474050
	ctx.lr = 0x83999C20;
	sub_82474050(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a79bf8
	ctx.lr = 0x83999C2C;
	sub_82A79BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83999c40
	if (!cr6.lt) goto loc_83999C40;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83999C40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c258
	ctx.lr = 0x83999C4C;
	sub_82E8C258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x83999c6c
	if (cr6.lt) goto loc_83999C6C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83999C6C;
	sub_82416268(ctx, base);
loc_83999C6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x83999ca0
	if (cr6.eq) goto loc_83999CA0;
	// bl 0x82a795b8
	ctx.lr = 0x83999C94;
	sub_82A795B8(ctx, base);
loc_83999C94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83999CA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82a795b8
	ctx.lr = 0x83999CAC;
	sub_82A795B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83999CB8"))) PPC_WEAK_FUNC(sub_83999CB8);
PPC_FUNC_IMPL(__imp__sub_83999CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83999CC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x83999cfc
	if (cr6.eq) goto loc_83999CFC;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x83999CFC;
	sub_825749E0(ctx, base);
loc_83999CFC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x83999D08;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83999d34
	if (cr6.eq) goto loc_83999D34;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x83999D18;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x83999d34
	if (!cr6.eq) goto loc_83999D34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83999D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83999D34:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999db4
	if (cr6.eq) goto loc_83999DB4;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83999d60
	if (cr6.eq) goto loc_83999D60;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x83999D60;
	sub_825749E0(ctx, base);
loc_83999D60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b80748
	ctx.lr = 0x83999D6C;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83999d98
	if (cr6.eq) goto loc_83999D98;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x83999D7C;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x83999d98
	if (!cr6.eq) goto loc_83999D98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83999D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83999D98:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83999dd0
	if (!cr6.eq) goto loc_83999DD0;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999db4
	if (cr6.eq) goto loc_83999DB4;
	// bl 0x8259b510
	ctx.lr = 0x83999DB4;
	sub_8259B510(ctx, base);
loc_83999DB4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999dc4
	if (cr6.eq) goto loc_83999DC4;
	// bl 0x8259b510
	ctx.lr = 0x83999DC4;
	sub_8259B510(ctx, base);
loc_83999DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83999DD0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e9e4f0
	ctx.lr = 0x83999DD8;
	sub_82E9E4F0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9edf0
	ctx.lr = 0x83999DEC;
	sub_82E9EDF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83999e38
	if (!cr6.eq) goto loc_83999E38;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r10,r11,12496
	ctx.r10.s64 = ctx.r11.s64 + 12496;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82535aa0
	ctx.lr = 0x83999E0C;
	sub_82535AA0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999e1c
	if (cr6.eq) goto loc_83999E1C;
	// bl 0x8259b510
	ctx.lr = 0x83999E1C;
	sub_8259B510(ctx, base);
loc_83999E1C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999dc4
	if (cr6.eq) goto loc_83999DC4;
	// bl 0x8259b510
	ctx.lr = 0x83999E2C;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83999E38:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83999E4C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83999be0
	ctx.lr = 0x83999E5C;
	sub_83999BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83999e70
	if (!cr6.eq) goto loc_83999E70;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// b 0x83999e80
	goto loc_83999E80;
loc_83999E70:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83999E80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpwi cr6,r30,111
	cr6.compare<int32_t>(ctx.r30.s32, 111, xer);
	// blt cr6,0x83999e4c
	if (cr6.lt) goto loc_83999E4C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,12496
	ctx.r10.s64 = ctx.r11.s64 + 12496;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bne cr6,0x83999edc
	if (!cr6.eq) goto loc_83999EDC;
	// bl 0x82535aa0
	ctx.lr = 0x83999EB0;
	sub_82535AA0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999ec0
	if (cr6.eq) goto loc_83999EC0;
	// bl 0x8259b510
	ctx.lr = 0x83999EC0;
	sub_8259B510(ctx, base);
loc_83999EC0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999dc4
	if (cr6.eq) goto loc_83999DC4;
	// bl 0x8259b510
	ctx.lr = 0x83999ED0;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83999EDC:
	// stb r28,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r28.u8);
	// bl 0x82535aa0
	ctx.lr = 0x83999EE4;
	sub_82535AA0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999ef4
	if (cr6.eq) goto loc_83999EF4;
	// bl 0x8259b510
	ctx.lr = 0x83999EF4;
	sub_8259B510(ctx, base);
loc_83999EF4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83999f04
	if (cr6.eq) goto loc_83999F04;
	// bl 0x8259b510
	ctx.lr = 0x83999F04;
	sub_8259B510(ctx, base);
loc_83999F04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83999F10"))) PPC_WEAK_FUNC(sub_83999F10);
PPC_FUNC_IMPL(__imp__sub_83999F10) {
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
	// li r11,111
	ctx.r11.s64 = 111;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83999F44:
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83999f44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83999F44;
	// li r8,111
	ctx.r8.s64 = 111;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83999F60:
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83999f60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83999F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83999cb8
	ctx.lr = 0x83999F74;
	sub_83999CB8(ctx, base);
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

__attribute__((alias("__imp__sub_83999F8C"))) PPC_WEAK_FUNC(sub_83999F8C);
PPC_FUNC_IMPL(__imp__sub_83999F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83999F90"))) PPC_WEAK_FUNC(sub_83999F90);
PPC_FUNC_IMPL(__imp__sub_83999F90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83999FAC"))) PPC_WEAK_FUNC(sub_83999FAC);
PPC_FUNC_IMPL(__imp__sub_83999FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83999FB0"))) PPC_WEAK_FUNC(sub_83999FB0);
PPC_FUNC_IMPL(__imp__sub_83999FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83999ff8
	if (cr6.eq) goto loc_83999FF8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83999fd0
	if (cr6.lt) goto loc_83999FD0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83999FD0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83999FD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83999fd4
	if (!cr6.eq) goto loc_83999FD4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399a000
	if (!cr6.eq) goto loc_8399A000;
loc_83999FF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399A000:
	// lbz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83999ff8
	if (cr6.eq) goto loc_83999FF8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// subf. r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83999ff8
	if (cr0.eq) goto loc_83999FF8;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lwz r10,23272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23272);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399A030"))) PPC_WEAK_FUNC(sub_8399A030);
PPC_FUNC_IMPL(__imp__sub_8399A030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// ble cr6,0x8399a044
	if (!cr6.gt) goto loc_8399A044;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399A044:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r4,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r4.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399A058"))) PPC_WEAK_FUNC(sub_8399A058);
PPC_FUNC_IMPL(__imp__sub_8399A058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// ble cr6,0x8399a06c
	if (!cr6.gt) goto loc_8399A06C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399A06C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r4,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r4.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399A080"))) PPC_WEAK_FUNC(sub_8399A080);
PPC_FUNC_IMPL(__imp__sub_8399A080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2047
	cr6.compare<uint32_t>(ctx.r4.u32, 2047, xer);
	// ble cr6,0x8399a094
	if (!cr6.gt) goto loc_8399A094;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399A094:
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r4,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r4.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399A0A8"))) PPC_WEAK_FUNC(sub_8399A0A8);
PPC_FUNC_IMPL(__imp__sub_8399A0A8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399a0fc
	if (cr6.eq) goto loc_8399A0FC;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bgt cr6,0x8399a0fc
	if (cr6.gt) goto loc_8399A0FC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x831ce420
	ctx.lr = 0x8399A0E8;
	sub_831CE420(ctx, base);
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
loc_8399A0FC:
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

__attribute__((alias("__imp__sub_8399A110"))) PPC_WEAK_FUNC(sub_8399A110);
PPC_FUNC_IMPL(__imp__sub_8399A110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a144
	if (cr6.eq) goto loc_8399A144;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a144
	if (cr6.eq) goto loc_8399A144;
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a144
	if (cr6.eq) goto loc_8399A144;
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8399a148
	if (!cr6.eq) goto loc_8399A148;
loc_8399A144:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399A148:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399a15c
	if (!cr6.eq) goto loc_8399A15C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399A15C:
	// b 0x83999fb0
	sub_83999FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A160"))) PPC_WEAK_FUNC(sub_8399A160);
PPC_FUNC_IMPL(__imp__sub_8399A160) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399a194
	if (!cr6.eq) goto loc_8399A194;
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
loc_8399A194:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x8399A1A4;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_8399A1B8"))) PPC_WEAK_FUNC(sub_8399A1B8);
PPC_FUNC_IMPL(__imp__sub_8399A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8399A1C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8399a3bc
	if (cr6.eq) goto loc_8399A3BC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8399a3bc
	if (cr6.eq) goto loc_8399A3BC;
	// bl 0x8399a110
	ctx.lr = 0x8399A1E4;
	sub_8399A110(ctx, base);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bgt cr6,0x8399a3bc
	if (cr6.gt) goto loc_8399A3BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x8399a160
	ctx.lr = 0x8399A20C;
	sub_8399A160(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399a22c
	if (!cr6.eq) goto loc_8399A22C;
loc_8399A218:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8399A220;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8399A22C:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bge cr6,0x8399a244
	if (!cr6.lt) goto loc_8399A244;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_8399A244:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8399A248:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8399a248
	if (!cr6.eq) goto loc_8399A248;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bgt cr6,0x8399a218
	if (cr6.gt) goto loc_8399A218;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// blt cr6,0x8399a218
	if (cr6.lt) goto loc_8399A218;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8399a290
	if (!cr6.lt) goto loc_8399A290;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8399A290:
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// bl 0x831ce980
	ctx.lr = 0x8399A298;
	sub_831CE980(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8399A2A0;
	sub_8387E8E0(ctx, base);
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399a2b8
	if (!cr6.eq) goto loc_8399A2B8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8399a2c0
	goto loc_8399A2C0;
loc_8399A2B8:
	// lbz r9,33(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8399A2C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a3bc
	if (cr6.eq) goto loc_8399A3BC;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bgt cr6,0x8399a3bc
	if (cr6.gt) goto loc_8399A3BC;
	// lbz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399a2ec
	if (!cr6.eq) goto loc_8399A2EC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8399a2f4
	goto loc_8399A2F4;
loc_8399A2EC:
	// lbz r10,35(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 35);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8399A2F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a3bc
	if (cr6.eq) goto loc_8399A3BC;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bgt cr6,0x8399a3bc
	if (cr6.gt) goto loc_8399A3BC;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8399a3bc
	if (cr6.lt) goto loc_8399A3BC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stbx r9,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// subf r8,r11,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x8399a3bc
	if (cr6.lt) goto loc_8399A3BC;
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8399a348
	if (!cr6.eq) goto loc_8399A348;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8399a350
	goto loc_8399A350;
loc_8399A348:
	// lhz r9,38(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 38);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8399A350:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399a3bc
	if (cr6.eq) goto loc_8399A3BC;
	// subf r8,r11,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r10,r9,5,16,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFE0;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// blt cr6,0x8399a3bc
	if (cr6.lt) goto loc_8399A3BC;
	// sthx r10,r11,r28
	PPC_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// lbz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a3bc
	if (cr6.eq) goto loc_8399A3BC;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// subf. r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8399a3bc
	if (cr0.eq) goto loc_8399A3BC;
	// subf r11,r30,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x8399a3bc
	if (cr6.lt) goto loc_8399A3BC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399a0a8
	ctx.lr = 0x8399A3AC;
	sub_8399A0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399a3c0
	if (!cr6.eq) goto loc_8399A3C0;
loc_8399A3BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8399A3C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A3C8"))) PPC_WEAK_FUNC(sub_8399A3C8);
PPC_FUNC_IMPL(__imp__sub_8399A3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a3fc
	if (cr6.eq) goto loc_8399A3FC;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a3fc
	if (cr6.eq) goto loc_8399A3FC;
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a3fc
	if (cr6.eq) goto loc_8399A3FC;
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8399a400
	if (!cr6.eq) goto loc_8399A400;
loc_8399A3FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399A400:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399a414
	if (!cr6.eq) goto loc_8399A414;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399A414:
	// b 0x8399a1b8
	sub_8399A1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A418"))) PPC_WEAK_FUNC(sub_8399A418);
PPC_FUNC_IMPL(__imp__sub_8399A418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8399A420;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8399A45C;
	sub_8259CB28(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8399A480;
	sub_8259CB28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8399a4a0
	if (cr6.lt) goto loc_8399A4A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8399A4A0;
	sub_825952B8(ctx, base);
loc_8399A4A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A4AC"))) PPC_WEAK_FUNC(sub_8399A4AC);
PPC_FUNC_IMPL(__imp__sub_8399A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399A4B0"))) PPC_WEAK_FUNC(sub_8399A4B0);
PPC_FUNC_IMPL(__imp__sub_8399A4B0) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x8399a4ec
	if (!cr6.gt) goto loc_8399A4EC;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8399A4EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399a418
	ctx.lr = 0x8399A500;
	sub_8399A418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// bl 0x8259cb28
	ctx.lr = 0x8399A520;
	sub_8259CB28(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8399a540
	if (cr6.lt) goto loc_8399A540;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8399A540;
	sub_825952B8(ctx, base);
loc_8399A540:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8399A558"))) PPC_WEAK_FUNC(sub_8399A558);
PPC_FUNC_IMPL(__imp__sub_8399A558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399A560;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8399a59c
	if (cr6.eq) goto loc_8399A59C;
	// subf r27,r4,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x831ce420
	ctx.lr = 0x8399A594;
	sub_831CE420(ctx, base);
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8399A59C:
	// add r6,r28,r26
	ctx.r6.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838c8db0
	ctx.lr = 0x8399A5B4;
	sub_838C8DB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,40(r29)
	PPC_STORE_U8(ctx.r29.u32 + 40, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A5C8"))) PPC_WEAK_FUNC(sub_8399A5C8);
PPC_FUNC_IMPL(__imp__sub_8399A5C8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399A5D0"))) PPC_WEAK_FUNC(sub_8399A5D0);
PPC_FUNC_IMPL(__imp__sub_8399A5D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399A5D8"))) PPC_WEAK_FUNC(sub_8399A5D8);
PPC_FUNC_IMPL(__imp__sub_8399A5D8) {
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
	// bl 0x830fe8a0
	ctx.lr = 0x8399A5F0;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x8399A5F4;
	sub_835240D8(ctx, base);
	// ld r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 208);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,500
	cr6.compare<uint64_t>(ctx.r10.u64, 500, xer);
	// blt cr6,0x8399a610
	if (cr6.lt) goto loc_8399A610;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r3.u64);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_8399A610:
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

__attribute__((alias("__imp__sub_8399A624"))) PPC_WEAK_FUNC(sub_8399A624);
PPC_FUNC_IMPL(__imp__sub_8399A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399A628"))) PPC_WEAK_FUNC(sub_8399A628);
PPC_FUNC_IMPL(__imp__sub_8399A628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8399A630;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r30,r3,216
	ctx.r30.s64 = ctx.r3.s64 + 216;
	// addi r10,r11,22028
	ctx.r10.s64 = ctx.r11.s64 + 22028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e62630
	ctx.lr = 0x8399A650;
	sub_82E62630(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
	// addi r8,r9,-24712
	ctx.r8.s64 = ctx.r9.s64 + -24712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8399A668;
	sub_825E0CF8(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8399a694
	if (cr6.eq) goto loc_8399A694;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8399A68C;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_8399A694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e62630
	ctx.lr = 0x8399A69C;
	sub_82E62630(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8399A6B0;
	sub_825952B8(ctx, base);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// li r29,10
	ctx.r29.s64 = 10;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8399A6BC:
	// lwzu r3,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399a6cc
	if (cr6.eq) goto loc_8399A6CC;
	// bl 0x8259b510
	ctx.lr = 0x8399A6CC;
	sub_8259B510(ctx, base);
loc_8399A6CC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8399a6bc
	if (!cr0.lt) goto loc_8399A6BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x8399A6DC;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A6E4"))) PPC_WEAK_FUNC(sub_8399A6E4);
PPC_FUNC_IMPL(__imp__sub_8399A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399A6E8"))) PPC_WEAK_FUNC(sub_8399A6E8);
PPC_FUNC_IMPL(__imp__sub_8399A6E8) {
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
	// bl 0x8399a628
	ctx.lr = 0x8399A708;
	sub_8399A628(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399a720
	if (cr6.eq) goto loc_8399A720;
	// bl 0x82416268
	ctx.lr = 0x8399A71C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399A720:
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

__attribute__((alias("__imp__sub_8399A738"))) PPC_WEAK_FUNC(sub_8399A738);
PPC_FUNC_IMPL(__imp__sub_8399A738) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8399a748
	sub_8399A748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A740"))) PPC_WEAK_FUNC(sub_8399A740);
PPC_FUNC_IMPL(__imp__sub_8399A740) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8399a748
	sub_8399A748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399A748"))) PPC_WEAK_FUNC(sub_8399A748);
PPC_FUNC_IMPL(__imp__sub_8399A748) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r8,r11,22076
	ctx.r8.s64 = ctx.r11.s64 + 22076;
	// addi r7,r10,22064
	ctx.r7.s64 = ctx.r10.s64 + 22064;
	// addi r6,r9,22060
	ctx.r6.s64 = ctx.r9.s64 + 22060;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b6a590
	ctx.lr = 0x8399A78C;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8399a7a4
	if (cr6.eq) goto loc_8399A7A4;
	// bl 0x82416268
	ctx.lr = 0x8399A7A0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399A7A4:
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

__attribute__((alias("__imp__sub_8399A7BC"))) PPC_WEAK_FUNC(sub_8399A7BC);
PPC_FUNC_IMPL(__imp__sub_8399A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399A7C0"))) PPC_WEAK_FUNC(sub_8399A7C0);
PPC_FUNC_IMPL(__imp__sub_8399A7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8399A7C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,21924
	ctx.r4.s64 = ctx.r11.s64 + 21924;
	// bl 0x83103328
	ctx.lr = 0x8399A7DC;
	sub_83103328(ctx, base);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r8,r9,22028
	ctx.r8.s64 = ctx.r9.s64 + 22028;
	// addi r11,r28,68
	ctx.r11.s64 = ctx.r28.s64 + 68;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8399A7F8:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8399a7f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399A7F8;
	// li r19,2
	ctx.r19.s64 = 2;
	// std r30,208(r28)
	PPC_STORE_U64(ctx.r28.u32 + 208, ctx.r30.u64);
	// stw r30,220(r28)
	PPC_STORE_U32(ctx.r28.u32 + 220, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r25,r28,216
	ctx.r25.s64 = ctx.r28.s64 + 216;
	// bl 0x82595718
	ctx.lr = 0x8399A828;
	sub_82595718(ctx, base);
	// stw r3,216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 216, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,216(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r11,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// addi r8,r10,-22824
	ctx.r8.s64 = ctx.r10.s64 + -22824;
	// stb r24,232(r28)
	PPC_STORE_U8(ctx.r28.u32 + 232, ctx.r24.u8);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stb r30,240(r28)
	PPC_STORE_U8(ctx.r28.u32 + 240, ctx.r30.u8);
	// stw r30,244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 244, ctx.r30.u32);
	// addi r26,r28,236
	ctx.r26.s64 = ctx.r28.s64 + 236;
	// addi r22,r28,156
	ctx.r22.s64 = ctx.r28.s64 + 156;
	// stw r30,248(r28)
	PPC_STORE_U32(ctx.r28.u32 + 248, ctx.r30.u32);
	// addi r27,r28,76
	ctx.r27.s64 = ctx.r28.s64 + 76;
	// stw r30,252(r28)
	PPC_STORE_U32(ctx.r28.u32 + 252, ctx.r30.u32);
	// li r23,11
	ctx.r23.s64 = 11;
	// stw r8,236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 236, ctx.r8.u32);
	// li r18,29
	ctx.r18.s64 = 29;
	// addi r21,r11,17524
	ctx.r21.s64 = ctx.r11.s64 + 17524;
	// addi r20,r10,272
	ctx.r20.s64 = ctx.r10.s64 + 272;
loc_8399A888:
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8399A89C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399a8b4
	if (cr6.eq) goto loc_8399A8B4;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x839efe78
	ctx.lr = 0x8399A8AC;
	sub_839EFE78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8399a8b8
	goto loc_8399A8B8;
loc_8399A8B4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8399A8B8:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8399A8CC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399a8f8
	if (cr6.eq) goto loc_8399A8F8;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// bl 0x8257fa88
	ctx.lr = 0x8399A8E8;
	sub_8257FA88(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// b 0x8399a8fc
	goto loc_8399A8FC;
loc_8399A8F8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8399A8FC:
	// stw r29,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r29.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x8399a960
	if (cr6.eq) goto loc_8399A960;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8399a94c
	if (cr6.eq) goto loc_8399A94C;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8399A924;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8399a94c
	if (cr6.lt) goto loc_8399A94C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8257fb60
	ctx.lr = 0x8399A948;
	sub_8257FB60(ctx, base);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_8399A94C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399a95c
	if (cr6.eq) goto loc_8399A95C;
	// bl 0x8259b510
	ctx.lr = 0x8399A95C;
	sub_8259B510(ctx, base);
loc_8399A95C:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_8399A960:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8399a970
	if (cr6.eq) goto loc_8399A970;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x8399A970;
	sub_8259B510(ctx, base);
loc_8399A970:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stwu r30,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r22.u32 = ea;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x8399a888
	if (!cr0.eq) goto loc_8399A888;
	// stw r30,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r30.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// stw r30,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
	// beq cr6,0x8399a9c8
	if (cr6.eq) goto loc_8399A9C8;
loc_8399A9A8:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// bl 0x825952b8
	ctx.lr = 0x8399A9B8;
	sub_825952B8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8399a9a8
	if (!cr6.eq) goto loc_8399A9A8;
loc_8399A9C8:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399aa14
	if (!cr6.eq) goto loc_8399AA14;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399A9E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8399AA00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825b4138
	ctx.lr = 0x8399AA10;
	sub_825B4138(ctx, base);
	// stb r24,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r24.u8);
loc_8399AA14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399AA20"))) PPC_WEAK_FUNC(sub_8399AA20);
PPC_FUNC_IMPL(__imp__sub_8399AA20) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8399AA44;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399aa60
	if (cr6.eq) goto loc_8399AA60;
	// bl 0x8399a7c0
	ctx.lr = 0x8399AA50;
	sub_8399A7C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399AA60:
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

__attribute__((alias("__imp__sub_8399AA74"))) PPC_WEAK_FUNC(sub_8399AA74);
PPC_FUNC_IMPL(__imp__sub_8399AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399AA78"))) PPC_WEAK_FUNC(sub_8399AA78);
PPC_FUNC_IMPL(__imp__sub_8399AA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399AA80;
	__savegprlr_26(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8399aae4
	if (cr6.eq) goto loc_8399AAE4;
	// bl 0x82dad2e0
	ctx.lr = 0x8399AA98;
	sub_82DAD2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399aae4
	if (cr6.eq) goto loc_8399AAE4;
	// lbz r11,232(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399aae4
	if (cr6.eq) goto loc_8399AAE4;
	// bl 0x825d8390
	ctx.lr = 0x8399AAB4;
	sub_825D8390(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8399AAC8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x8399aaf0
	if (cr6.eq) goto loc_8399AAF0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8399aac8
	if (cr6.lt) goto loc_8399AAC8;
loc_8399AAE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399AAF0:
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// bge cr6,0x8399aae4
	if (!cr6.lt) goto loc_8399AAE4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,387
	ctx.r5.s64 = ctx.r11.s64 + 387;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// extsb r26,r10
	ctx.r26.s64 = ctx.r10.s8;
	// bctrl 
	ctx.lr = 0x8399AB3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, xer);
	// beq cr6,0x8399aae4
	if (cr6.eq) goto loc_8399AAE4;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8399aae4
	if (cr6.eq) goto loc_8399AAE4;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839efdd0
	ctx.lr = 0x8399AB58;
	sub_839EFDD0(ctx, base);
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// lwz r10,216(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8399aba0
	if (cr6.eq) goto loc_8399ABA0;
loc_8399AB74:
	// lwz r3,564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399ab90
	if (cr6.eq) goto loc_8399AB90;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82e74480
	ctx.lr = 0x8399AB90;
	sub_82E74480(ctx, base);
loc_8399AB90:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8399ab74
	if (!cr6.eq) goto loc_8399AB74;
loc_8399ABA0:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// li r10,180
	ctx.r10.s64 = 180;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8399ABC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// addi r3,r6,22076
	ctx.r3.s64 = ctx.r6.s64 + 22076;
	// addi r11,r5,22064
	ctx.r11.s64 = ctx.r5.s64 + 22064;
	// addi r10,r4,22060
	ctx.r10.s64 = ctx.r4.s64 + 22060;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// bl 0x82b6a590
	ctx.lr = 0x8399ABF4;
	sub_82B6A590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399AC00"))) PPC_WEAK_FUNC(sub_8399AC00);
PPC_FUNC_IMPL(__imp__sub_8399AC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8399AC08;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r22,r3,236
	ctx.r22.s64 = ctx.r3.s64 + 236;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399ac28
	if (!cr6.eq) goto loc_8399AC28;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825b4670
	ctx.lr = 0x8399AC28;
	sub_825B4670(ctx, base);
loc_8399AC28:
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399ac44
	if (!cr6.eq) goto loc_8399AC44;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r10.u32);
loc_8399AC44:
	// lwz r28,16(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8399adc8
	if (cr6.eq) goto loc_8399ADC8;
	// lbz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399ad7c
	if (cr6.eq) goto loc_8399AD7C;
	// bl 0x82dad2e0
	ctx.lr = 0x8399AC64;
	sub_82DAD2E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399adc8
	if (cr6.eq) goto loc_8399ADC8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8399aca0
	if (cr6.lt) goto loc_8399ACA0;
	// bne cr6,0x8399aca8
	if (!cr6.eq) goto loc_8399ACA8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399aa78
	ctx.lr = 0x8399AC8C;
	sub_8399AA78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399aca8
	if (cr6.eq) goto loc_8399ACA8;
	// stw r25,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r25.u32);
	// b 0x8399aca8
	goto loc_8399ACA8;
loc_8399ACA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399a5d8
	ctx.lr = 0x8399ACA8;
	sub_8399A5D8(ctx, base);
loc_8399ACA8:
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// li r27,11
	ctx.r27.s64 = 11;
	// li r26,180
	ctx.r26.s64 = 180;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8399ACBC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399ad68
	if (cr6.eq) goto loc_8399AD68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8399ad18
	if (cr6.lt) goto loc_8399AD18;
	// bne cr6,0x8399ad68
	if (!cr6.eq) goto loc_8399AD68;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399ad68
	if (cr6.eq) goto loc_8399AD68;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x8399ad10
	if (!cr6.lt) goto loc_8399AD10;
	// addi r11,r11,387
	ctx.r11.s64 = ctx.r11.s64 + 387;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_8399AD10:
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// b 0x8399ad68
	goto loc_8399AD68;
loc_8399AD18:
	// bl 0x82e744f8
	ctx.lr = 0x8399AD1C;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8399AD30;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b66948
	ctx.lr = 0x8399AD3C;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x8399ad58
	if (cr6.eq) goto loc_8399AD58;
	// bl 0x8259b510
	ctx.lr = 0x8399AD58;
	sub_8259B510(ctx, base);
loc_8399AD58:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399ad68
	if (!cr6.eq) goto loc_8399AD68;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_8399AD68:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8399acbc
	if (!cr0.eq) goto loc_8399ACBC;
	// b 0x8399adc8
	goto loc_8399ADC8;
loc_8399AD7C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8399AD8C:
	// subfc r9,r7,r10
	xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 & ctx.r11.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,387
	ctx.r9.s64 = ctx.r9.s64 + 387;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stb r8,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r8.u8);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// blt cr6,0x8399ad8c
	if (cr6.lt) goto loc_8399AD8C;
	// stw r8,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r8.u32);
loc_8399ADC8:
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399ade0
	if (cr6.eq) goto loc_8399ADE0;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x8399ADDC;
	sub_825B33F0(ctx, base);
	// stw r25,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r25.u32);
loc_8399ADE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399ADE8"))) PPC_WEAK_FUNC(sub_8399ADE8);
PPC_FUNC_IMPL(__imp__sub_8399ADE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8399ADF0;
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
	// bne cr6,0x8399ae2c
	if (!cr6.eq) goto loc_8399AE2C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82db2a50
	ctx.lr = 0x8399AE20;
	sub_82DB2A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8399AE2C:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8399ae70
	if (!cr6.eq) goto loc_8399AE70;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8399af6c
	if (!cr6.lt) goto loc_8399AF6C;
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
	// bl 0x82db2a50
	ctx.lr = 0x8399AE64;
	sub_82DB2A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8399AE70:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x8399aeac
	if (!cr6.eq) goto loc_8399AEAC;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399af6c
	if (!cr6.lt) goto loc_8399AF6C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db2a50
	ctx.lr = 0x8399AEA0;
	sub_82DB2A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8399AEAC:
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x8399af10
	if (!cr6.gt) goto loc_8399AF10;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0ad0
	ctx.lr = 0x8399AEC8;
	sub_82DB0AD0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x8399af0c
	if (!cr6.lt) goto loc_8399AF0C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399af58
	if (!cr6.eq) goto loc_8399AF58;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8399AEF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82db2a50
	ctx.lr = 0x8399AF00;
	sub_82DB2A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8399AF0C:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_8399AF10:
	// bge cr6,0x8399af6c
	if (!cr6.lt) goto loc_8399AF6C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ba08
	ctx.lr = 0x8399AF20;
	sub_82C5BA08(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x8399af38
	if (cr6.eq) goto loc_8399AF38;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399af6c
	if (!cr6.lt) goto loc_8399AF6C;
loc_8399AF38:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399aef8
	if (cr6.eq) goto loc_8399AEF8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8399AF58:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db2a50
	ctx.lr = 0x8399AF60;
	sub_82DB2A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8399AF6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db2c58
	ctx.lr = 0x8399AF80;
	sub_82DB2C58(ctx, base);
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

__attribute__((alias("__imp__sub_8399AF98"))) PPC_WEAK_FUNC(sub_8399AF98);
PPC_FUNC_IMPL(__imp__sub_8399AF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8399AFA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
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
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399afec
	if (!cr6.eq) goto loc_8399AFEC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8399AFC4:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8399afd8
	if (!cr6.lt) goto loc_8399AFD8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8399afe0
	goto loc_8399AFE0;
loc_8399AFD8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8399AFE0:
	// lbz r9,297(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8399afc4
	if (cr6.eq) goto loc_8399AFC4;
loc_8399AFEC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8399b008
	if (cr6.eq) goto loc_8399B008;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8399b058
	if (!cr6.lt) goto loc_8399B058;
loc_8399B008:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82b6b738
	ctx.lr = 0x8399B010;
	sub_82B6B738(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82c5cb88
	ctx.lr = 0x8399B024;
	sub_82C5CB88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db30a0
	ctx.lr = 0x8399B030;
	sub_82DB30A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ade8
	ctx.lr = 0x8399B044;
	sub_8399ADE8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b6a860
	ctx.lr = 0x8399B050;
	sub_82B6A860(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82b6a860
	ctx.lr = 0x8399B058;
	sub_82B6A860(ctx, base);
loc_8399B058:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399B064"))) PPC_WEAK_FUNC(sub_8399B064);
PPC_FUNC_IMPL(__imp__sub_8399B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B068"))) PPC_WEAK_FUNC(sub_8399B068);
PPC_FUNC_IMPL(__imp__sub_8399B068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8399B070;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x8399B07C;
	sub_82DAD2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399b174
	if (cr6.eq) goto loc_8399B174;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c5bc60
	ctx.lr = 0x8399B098;
	sub_82C5BC60(ctx, base);
	// addi r30,r31,344
	ctx.r30.s64 = ctx.r31.s64 + 344;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// lwz r28,60(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// beq cr6,0x8399b0d0
	if (cr6.eq) goto loc_8399B0D0;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c5d148
	ctx.lr = 0x8399B0C4;
	sub_82C5D148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c5d268
	ctx.lr = 0x8399B0D0;
	sub_82C5D268(ctx, base);
loc_8399B0D0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399af98
	ctx.lr = 0x8399B0DC;
	sub_8399AF98(ctx, base);
	// addi r31,r29,216
	ctx.r31.s64 = ctx.r29.s64 + 216;
	// lwz r29,156(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e62630
	ctx.lr = 0x8399B0EC;
	sub_82E62630(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8399b14c
	if (cr6.eq) goto loc_8399B14C;
loc_8399B100:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// beq cr6,0x8399b138
	if (cr6.eq) goto loc_8399B138;
	// lbz r10,189(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399b138
	if (!cr6.eq) goto loc_8399B138;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x8399b138
	if (!cr6.eq) goto loc_8399B138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8378d870
	ctx.lr = 0x8399B134;
	sub_8378D870(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8399B138:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c5ba08
	ctx.lr = 0x8399B140;
	sub_82C5BA08(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x8399b100
	if (!cr6.eq) goto loc_8399B100;
loc_8399B14C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82c5d148
	ctx.lr = 0x8399B160;
	sub_82C5D148(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8399B174;
	sub_825952B8(ctx, base);
loc_8399B174:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399B17C"))) PPC_WEAK_FUNC(sub_8399B17C);
PPC_FUNC_IMPL(__imp__sub_8399B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B180"))) PPC_WEAK_FUNC(sub_8399B180);
PPC_FUNC_IMPL(__imp__sub_8399B180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399B188;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,388
	ctx.r26.s64 = ctx.r3.s64 + 388;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,23
	ctx.r30.s64 = 23;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8399B1A4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r11,9776
	ctx.r6.s64 = ctx.r11.s64 + 9776;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fca98
	ctx.lr = 0x8399B1BC;
	sub_823FCA98(ctx, base);
	// stb r28,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r28.u8);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// bge 0x8399b1a4
	if (!cr0.lt) goto loc_8399B1A4;
	// addi r27,r29,4708
	ctx.r27.s64 = ctx.r29.s64 + 4708;
	// li r30,23
	ctx.r30.s64 = 23;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8399B1D8:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r11,9776
	ctx.r6.s64 = ctx.r11.s64 + 9776;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fca98
	ctx.lr = 0x8399B1F0;
	sub_823FCA98(ctx, base);
	// stb r28,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r28.u8);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// bge 0x8399b1d8
	if (!cr0.lt) goto loc_8399B1D8;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x831cdcf0
	ctx.lr = 0x8399B210;
	sub_831CDCF0(ctx, base);
	// li r5,4320
	ctx.r5.s64 = 4320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8399B220;
	sub_831CDCF0(ctx, base);
	// li r5,4320
	ctx.r5.s64 = 4320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8399B230;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,9028(r29)
	PPC_STORE_U8(ctx.r29.u32 + 9028, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399B240"))) PPC_WEAK_FUNC(sub_8399B240);
PPC_FUNC_IMPL(__imp__sub_8399B240) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,9028(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9028, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B24C"))) PPC_WEAK_FUNC(sub_8399B24C);
PPC_FUNC_IMPL(__imp__sub_8399B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B250"))) PPC_WEAK_FUNC(sub_8399B250);
PPC_FUNC_IMPL(__imp__sub_8399B250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B26C"))) PPC_WEAK_FUNC(sub_8399B26C);
PPC_FUNC_IMPL(__imp__sub_8399B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B270"))) PPC_WEAK_FUNC(sub_8399B270);
PPC_FUNC_IMPL(__imp__sub_8399B270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B28C"))) PPC_WEAK_FUNC(sub_8399B28C);
PPC_FUNC_IMPL(__imp__sub_8399B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B290"))) PPC_WEAK_FUNC(sub_8399B290);
PPC_FUNC_IMPL(__imp__sub_8399B290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B2AC"))) PPC_WEAK_FUNC(sub_8399B2AC);
PPC_FUNC_IMPL(__imp__sub_8399B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B2B0"))) PPC_WEAK_FUNC(sub_8399B2B0);
PPC_FUNC_IMPL(__imp__sub_8399B2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8399B2B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bge cr6,0x8399b3b8
	if (!cr6.lt) goto loc_8399B3B8;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399b37c
	if (!cr6.eq) goto loc_8399B37C;
	// lis r11,364
	ctx.r11.s64 = 23855104;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,5825
	ctx.r10.u64 = ctx.r11.u64 | 5825;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8399b30c
	if (cr6.gt) goto loc_8399B30C;
	// mulli r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 * 180;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8399b310
	if (!cr6.gt) goto loc_8399B310;
loc_8399B30C:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_8399B310:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8399B324;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399b374
	if (cr6.eq) goto loc_8399B374;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r30,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// blt 0x8399b36c
	if (cr0.lt) goto loc_8399B36C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8399B344:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r11,9776
	ctx.r6.s64 = ctx.r11.s64 + 9776;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fca98
	ctx.lr = 0x8399B35C;
	sub_823FCA98(ctx, base);
	// stb r28,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r28.u8);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// bge 0x8399b344
	if (!cr0.lt) goto loc_8399B344;
loc_8399B36C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8399b378
	goto loc_8399B378;
loc_8399B374:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399B378:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8399B37C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,180
	ctx.r5.s64 = 180;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// divwu r8,r11,r9
	ctx.r8.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// twllei r9,0
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mulli r11,r6,180
	ctx.r11.s64 = ctx.r6.s64 * 180;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8399B3AC;
	sub_831CE980(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r5.u32);
loc_8399B3B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399B3C0"))) PPC_WEAK_FUNC(sub_8399B3C0);
PPC_FUNC_IMPL(__imp__sub_8399B3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B3DC"))) PPC_WEAK_FUNC(sub_8399B3DC);
PPC_FUNC_IMPL(__imp__sub_8399B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B3E0"))) PPC_WEAK_FUNC(sub_8399B3E0);
PPC_FUNC_IMPL(__imp__sub_8399B3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8399B3F0:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b40c
	if (cr6.eq) goto loc_8399B40C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b40c
	if (!cr6.lt) goto loc_8399B40C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B40C:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b428
	if (cr6.eq) goto loc_8399B428;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b428
	if (!cr6.lt) goto loc_8399B428;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B428:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b444
	if (cr6.eq) goto loc_8399B444;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b444
	if (!cr6.lt) goto loc_8399B444;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B444:
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b460
	if (cr6.eq) goto loc_8399B460;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b460
	if (!cr6.lt) goto loc_8399B460;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B460:
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b47c
	if (cr6.eq) goto loc_8399B47C;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b47c
	if (!cr6.lt) goto loc_8399B47C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B47C:
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b498
	if (cr6.eq) goto loc_8399B498;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b498
	if (!cr6.lt) goto loc_8399B498;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B498:
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bdnz 0x8399b3f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B3F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B4A8"))) PPC_WEAK_FUNC(sub_8399B4A8);
PPC_FUNC_IMPL(__imp__sub_8399B4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8399B4B8:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b4d4
	if (cr6.eq) goto loc_8399B4D4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399b4d4
	if (!cr6.gt) goto loc_8399B4D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B4D4:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b4f0
	if (cr6.eq) goto loc_8399B4F0;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399b4f0
	if (!cr6.gt) goto loc_8399B4F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B4F0:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b50c
	if (cr6.eq) goto loc_8399B50C;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399b50c
	if (!cr6.gt) goto loc_8399B50C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B50C:
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b528
	if (cr6.eq) goto loc_8399B528;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399b528
	if (!cr6.gt) goto loc_8399B528;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B528:
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b544
	if (cr6.eq) goto loc_8399B544;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399b544
	if (!cr6.gt) goto loc_8399B544;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B544:
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b560
	if (cr6.eq) goto loc_8399B560;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399b560
	if (!cr6.gt) goto loc_8399B560;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B560:
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bdnz 0x8399b4b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B4B8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B570"))) PPC_WEAK_FUNC(sub_8399B570);
PPC_FUNC_IMPL(__imp__sub_8399B570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8399B580:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8399b59c
	if (!cr6.eq) goto loc_8399B59C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b59c
	if (!cr6.lt) goto loc_8399B59C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B59C:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8399b5b8
	if (!cr6.eq) goto loc_8399B5B8;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b5b8
	if (!cr6.lt) goto loc_8399B5B8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B5B8:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8399b5d4
	if (!cr6.eq) goto loc_8399B5D4;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b5d4
	if (!cr6.lt) goto loc_8399B5D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B5D4:
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8399b5f0
	if (!cr6.eq) goto loc_8399B5F0;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b5f0
	if (!cr6.lt) goto loc_8399B5F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B5F0:
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8399b60c
	if (!cr6.eq) goto loc_8399B60C;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b60c
	if (!cr6.lt) goto loc_8399B60C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B60C:
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8399b628
	if (!cr6.eq) goto loc_8399B628;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399b628
	if (!cr6.lt) goto loc_8399B628;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B628:
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bdnz 0x8399b580
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B580;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B638"))) PPC_WEAK_FUNC(sub_8399B638);
PPC_FUNC_IMPL(__imp__sub_8399B638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// blt cr6,0x8399b648
	if (cr6.lt) goto loc_8399B648;
loc_8399B640:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399B648:
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8399b640
	if (cr6.eq) goto loc_8399B640;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B66C"))) PPC_WEAK_FUNC(sub_8399B66C);
PPC_FUNC_IMPL(__imp__sub_8399B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399B670"))) PPC_WEAK_FUNC(sub_8399B670);
PPC_FUNC_IMPL(__imp__sub_8399B670) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x8399b570
	ctx.lr = 0x8399B684;
	sub_8399B570(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8399b4a8
	ctx.lr = 0x8399B690;
	sub_8399B4A8(ctx, base);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// bgt cr6,0x8399b6a0
	if (cr6.gt) goto loc_8399B6A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8399B6A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B6B0"))) PPC_WEAK_FUNC(sub_8399B6B0);
PPC_FUNC_IMPL(__imp__sub_8399B6B0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x8399b570
	ctx.lr = 0x8399B6C4;
	sub_8399B570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8399b4a8
	ctx.lr = 0x8399B6D0;
	sub_8399B4A8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x8399b7ec
	if (!cr6.gt) goto loc_8399B7EC;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r7,r6,20
	ctx.r7.s64 = ctx.r6.s64 + 20;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8399B6F0:
	// lwz r8,-16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -16);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8399b700
	if (!cr6.eq) goto loc_8399B700;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
loc_8399B700:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8399b710
	if (!cr6.eq) goto loc_8399B710;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_8399B710:
	// lwz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8399b720
	if (!cr6.eq) goto loc_8399B720;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8399B720:
	// lwz r8,32(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8399b730
	if (!cr6.eq) goto loc_8399B730;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8399B730:
	// lwz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8399b740
	if (!cr6.eq) goto loc_8399B740;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
loc_8399B740:
	// lwz r8,64(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8399b750
	if (!cr6.eq) goto loc_8399B750;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_8399B750:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r7,r7,96
	ctx.r7.s64 = ctx.r7.s64 + 96;
	// bdnz 0x8399b6f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B6F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8399b7d8
	if (cr6.lt) goto loc_8399B7D8;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8399b7d8
	if (cr6.eq) goto loc_8399B7D8;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x8399b7d8
	if (!cr6.lt) goto loc_8399B7D8;
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8399B790:
	// divwu r11,r9,r8
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r8.u32);
	// twllei r8,0
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulli r11,r6,180
	ctx.r11.s64 = ctx.r6.s64 * 180;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// lbz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x8399b7c0
	if (cr6.lt) goto loc_8399B7C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399B7C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// bne cr6,0x8399b7d0
	if (!cr6.eq) goto loc_8399B7D0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8399B7D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8399b790
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B790;
loc_8399B7D8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399B7EC:
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

__attribute__((alias("__imp__sub_8399B800"))) PPC_WEAK_FUNC(sub_8399B800);
PPC_FUNC_IMPL(__imp__sub_8399B800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,9028(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9028);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399b814
	if (!cr6.eq) goto loc_8399B814;
loc_8399B80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399B814:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8399B81C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8399b850
	if (cr6.eq) goto loc_8399B850;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bgt cr6,0x8399b840
	if (cr6.gt) goto loc_8399B840;
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8399b80c
	if (cr6.eq) goto loc_8399B80C;
loc_8399B840:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8399b868
	if (cr6.gt) goto loc_8399B868;
loc_8399B850:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// blt cr6,0x8399b81c
	if (cr6.lt) goto loc_8399B81C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8399B868:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B870"))) PPC_WEAK_FUNC(sub_8399B870);
PPC_FUNC_IMPL(__imp__sub_8399B870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8399B880:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b8a0
	if (cr6.eq) goto loc_8399B8A0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399b8a0
	if (!cr6.lt) goto loc_8399B8A0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B8A0:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b8c0
	if (cr6.eq) goto loc_8399B8C0;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399b8c0
	if (!cr6.lt) goto loc_8399B8C0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B8C0:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b8e0
	if (cr6.eq) goto loc_8399B8E0;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399b8e0
	if (!cr6.lt) goto loc_8399B8E0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B8E0:
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b900
	if (cr6.eq) goto loc_8399B900;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399b900
	if (!cr6.lt) goto loc_8399B900;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B900:
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b920
	if (cr6.eq) goto loc_8399B920;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399b920
	if (!cr6.lt) goto loc_8399B920;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B920:
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b940
	if (cr6.eq) goto loc_8399B940;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8399b940
	if (!cr6.lt) goto loc_8399B940;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399B940:
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bdnz 0x8399b880
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B880;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B950"))) PPC_WEAK_FUNC(sub_8399B950);
PPC_FUNC_IMPL(__imp__sub_8399B950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_8399B958:
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8399b970
	if (cr6.eq) goto loc_8399B970;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8399b988
	if (cr6.eq) goto loc_8399B988;
loc_8399B970:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x8399b958
	if (cr6.lt) goto loc_8399B958;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8399B988:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399B990"))) PPC_WEAK_FUNC(sub_8399B990);
PPC_FUNC_IMPL(__imp__sub_8399B990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8399B998;
	__savegprlr_21(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r11,r1,-200
	ctx.r11.s64 = ctx.r1.s64 + -200;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8399B9AC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8399b9ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B9AC;
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8399B9C4:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8399ba74
	if (cr6.eq) goto loc_8399BA74;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8399ba74
	if (cr6.eq) goto loc_8399BA74;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x8399ba74
	if (!cr6.lt) goto loc_8399BA74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8399B9F8:
	// divw r10,r9,r8
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r8.s32);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mulli r11,r10,180
	ctx.r11.s64 = ctx.r10.s64 * 180;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// andc r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ~ctx.r29.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// twllei r8,0
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lbz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// twlgei r29,-1
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x8399ba3c
	if (cr6.lt) goto loc_8399BA3C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8399BA3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x8399ba50
	if (cr6.eq) goto loc_8399BA50;
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(ctx.r11.u32, 98, xer);
	// bne cr6,0x8399ba54
	if (!cr6.eq) goto loc_8399BA54;
loc_8399BA50:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8399BA54:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399ba6c
	if (cr6.eq) goto loc_8399BA6C;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8399BA6C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8399b9f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399B9F8;
loc_8399BA74:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x8399b9c4
	if (!cr0.eq) goto loc_8399B9C4;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// li r24,2
	ctx.r24.s64 = 2;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r30,r1,-188
	ctx.r30.s64 = ctx.r1.s64 + -188;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8399BAC0:
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8399bb28
	if (!cr6.eq) goto loc_8399BB28;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bae0
	if (!cr6.gt) goto loc_8399BAE0;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r26,r10,-2
	ctx.r26.s64 = ctx.r10.s64 + -2;
loc_8399BAE0:
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399baf0
	if (cr6.lt) goto loc_8399BAF0;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x8399baf8
	if (!cr6.eq) goto loc_8399BAF8;
loc_8399BAF0:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r28,r10,-2
	ctx.r28.s64 = ctx.r10.s64 + -2;
loc_8399BAF8:
	// lwz r21,-4(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// subf r9,r21,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r21.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bb10
	if (!cr6.gt) goto loc_8399BB10;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r25,r10,-2
	ctx.r25.s64 = ctx.r10.s64 + -2;
loc_8399BB10:
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399bb20
	if (cr6.lt) goto loc_8399BB20;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x8399bb28
	if (!cr6.eq) goto loc_8399BB28;
loc_8399BB20:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r27,r10,-2
	ctx.r27.s64 = ctx.r10.s64 + -2;
loc_8399BB28:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8399bb90
	if (!cr6.eq) goto loc_8399BB90;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bb48
	if (!cr6.gt) goto loc_8399BB48;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
loc_8399BB48:
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399bb58
	if (cr6.lt) goto loc_8399BB58;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x8399bb60
	if (!cr6.eq) goto loc_8399BB60;
loc_8399BB58:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
loc_8399BB60:
	// lwz r21,0(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r21,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r21.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bb78
	if (!cr6.gt) goto loc_8399BB78;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r25,r10,-1
	ctx.r25.s64 = ctx.r10.s64 + -1;
loc_8399BB78:
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399bb88
	if (cr6.lt) goto loc_8399BB88;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x8399bb90
	if (!cr6.eq) goto loc_8399BB90;
loc_8399BB88:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
loc_8399BB90:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8399bbf8
	if (!cr6.eq) goto loc_8399BBF8;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bbb0
	if (!cr6.gt) goto loc_8399BBB0;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_8399BBB0:
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399bbc0
	if (cr6.lt) goto loc_8399BBC0;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x8399bbc8
	if (!cr6.eq) goto loc_8399BBC8;
loc_8399BBC0:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8399BBC8:
	// lwz r21,4(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r21,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r21.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bbe0
	if (!cr6.gt) goto loc_8399BBE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8399BBE0:
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399bbf0
	if (cr6.lt) goto loc_8399BBF0;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x8399bbf8
	if (!cr6.eq) goto loc_8399BBF8;
loc_8399BBF0:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_8399BBF8:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8399bc60
	if (!cr6.eq) goto loc_8399BC60;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bc18
	if (!cr6.gt) goto loc_8399BC18;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
loc_8399BC18:
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399bc28
	if (cr6.lt) goto loc_8399BC28;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x8399bc30
	if (!cr6.eq) goto loc_8399BC30;
loc_8399BC28:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
loc_8399BC30:
	// lwz r21,8(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r21,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r21.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8399bc48
	if (!cr6.gt) goto loc_8399BC48;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
loc_8399BC48:
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x8399bc58
	if (cr6.lt) goto loc_8399BC58;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x8399bc60
	if (!cr6.eq) goto loc_8399BC60;
loc_8399BC58:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
loc_8399BC60:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bdnz 0x8399bac0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399BAC0;
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r6,r5,116
	ctx.r6.s64 = ctx.r5.s64 + 116;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r8,r5,236
	ctx.r8.s64 = ctx.r5.s64 + 236;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8399BC8C:
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8399bcc4
	if (cr6.eq) goto loc_8399BCC4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x8399bca8
	if (cr6.eq) goto loc_8399BCA8;
	// stbx r24,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r24.u8);
	// b 0x8399bcac
	goto loc_8399BCAC;
loc_8399BCA8:
	// stbx r23,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r23.u8);
loc_8399BCAC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r10,-96(r8)
	PPC_STORE_U32(ctx.r8.u32 + -96, ctx.r10.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// b 0x8399bcc8
	goto loc_8399BCC8;
loc_8399BCC4:
	// stbx r22,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r22.u8);
loc_8399BCC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8399bc8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399BC8C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x8399bcec
	if (!cr6.lt) goto loc_8399BCEC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8399bcfc
	goto loc_8399BCFC;
loc_8399BCEC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8399BCFC:
	// stw r11,332(r5)
	PPC_STORE_U32(ctx.r5.u32 + 332, ctx.r11.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x8399bd10
	if (!cr6.lt) goto loc_8399BD10;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8399bd1c
	goto loc_8399BD1C;
loc_8399BD10:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8399BD1C:
	// stw r11,336(r5)
	PPC_STORE_U32(ctx.r5.u32 + 336, ctx.r11.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge cr6,0x8399bd30
	if (!cr6.lt) goto loc_8399BD30;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8399bd40
	goto loc_8399BD40;
loc_8399BD30:
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8399BD40:
	// stw r11,340(r5)
	PPC_STORE_U32(ctx.r5.u32 + 340, ctx.r11.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge cr6,0x8399bd54
	if (!cr6.lt) goto loc_8399BD54;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8399bd60
	goto loc_8399BD60;
loc_8399BD54:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8399BD60:
	// stw r11,344(r5)
	PPC_STORE_U32(ctx.r5.u32 + 344, ctx.r11.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge cr6,0x8399bd74
	if (!cr6.lt) goto loc_8399BD74;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8399bd84
	goto loc_8399BD84;
loc_8399BD74:
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8399BD84:
	// stw r11,348(r5)
	PPC_STORE_U32(ctx.r5.u32 + 348, ctx.r11.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge cr6,0x8399bd98
	if (!cr6.lt) goto loc_8399BD98;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8399bda4
	goto loc_8399BDA4;
loc_8399BD98:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8399BDA4:
	// stw r11,352(r5)
	PPC_STORE_U32(ctx.r5.u32 + 352, ctx.r11.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x8399bdb8
	if (!cr6.lt) goto loc_8399BDB8;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8399bdc8
	goto loc_8399BDC8;
loc_8399BDB8:
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8399BDC8:
	// stw r11,356(r5)
	PPC_STORE_U32(ctx.r5.u32 + 356, ctx.r11.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x8399bde0
	if (!cr6.lt) goto loc_8399BDE0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r22,360(r5)
	PPC_STORE_U32(ctx.r5.u32 + 360, ctx.r22.u32);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8399BDE0:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,360(r5)
	PPC_STORE_U32(ctx.r5.u32 + 360, ctx.r9.u32);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399BDF4"))) PPC_WEAK_FUNC(sub_8399BDF4);
PPC_FUNC_IMPL(__imp__sub_8399BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399BDF8"))) PPC_WEAK_FUNC(sub_8399BDF8);
PPC_FUNC_IMPL(__imp__sub_8399BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8399BE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// li r28,0
	ctx.r28.s64 = 0;
	// mulhwu r9,r4,r10
	ctx.r9.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r9,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// li r30,3
	ctx.r30.s64 = 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// mulli r11,r6,180
	ctx.r11.s64 = ctx.r6.s64 * 180;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r11,4708
	ctx.r29.s64 = ctx.r11.s64 + 4708;
loc_8399BE3C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,248
	cr6.compare<uint32_t>(ctx.r10.u32, 248, xer);
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// blt cr6,0x8399be50
	if (cr6.lt) goto loc_8399BE50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399BE50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399be60
	if (cr6.eq) goto loc_8399BE60;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8399BE60:
	// cmpwi cr6,r11,71
	cr6.compare<int32_t>(ctx.r11.s32, 71, xer);
	// bgt cr6,0x8399bec0
	if (cr6.gt) goto loc_8399BEC0;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// bge cr6,0x8399be80
	if (!cr6.lt) goto loc_8399BE80;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// blt cr6,0x8399bec0
	if (cr6.lt) goto loc_8399BEC0;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// bgt cr6,0x8399bec0
	if (cr6.gt) goto loc_8399BEC0;
loc_8399BE80:
	// cmplwi cr6,r10,248
	cr6.compare<uint32_t>(ctx.r10.u32, 248, xer);
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// blt cr6,0x8399be90
	if (cr6.lt) goto loc_8399BE90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399BE90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a311f0
	ctx.lr = 0x8399BE98;
	sub_82A311F0(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
loc_8399BEC0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8399be3c
	if (!cr0.eq) goto loc_8399BE3C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399bee4
	if (!cr6.eq) goto loc_8399BEE4;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a31410
	ctx.lr = 0x8399BEE4;
	sub_82A31410(ctx, base);
loc_8399BEE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x8399BEEC;
	sub_82A30088(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a300b0
	ctx.lr = 0x8399BEF8;
	sub_82A300B0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x8399bf0c
	if (cr6.lt) goto loc_8399BF0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399BF0C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a311f0
	ctx.lr = 0x8399BF14;
	sub_82A311F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399BF48"))) PPC_WEAK_FUNC(sub_8399BF48);
PPC_FUNC_IMPL(__imp__sub_8399BF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8399BF50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r28,32
	ctx.r28.s64 = 32;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8399BF64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399bf9c
	if (cr6.eq) goto loc_8399BF9C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8399BF80;
	sub_82595150(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399bf94
	if (cr6.eq) goto loc_8399BF94;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82416268
	ctx.lr = 0x8399BF94;
	sub_82416268(ctx, base);
loc_8399BF94:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8399BF9C;
	sub_82595170(ctx, base);
loc_8399BF9C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r29,16(r31)
	ea = 16 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x8399bf64
	if (!cr0.eq) goto loc_8399BF64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399BFB0"))) PPC_WEAK_FUNC(sub_8399BFB0);
PPC_FUNC_IMPL(__imp__sub_8399BFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8399BFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulhwu r9,r5,r10
	ctx.r9.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r9,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r7,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399c010
	if (!cr6.eq) goto loc_8399C010;
	// mulli r11,r27,180
	ctx.r11.s64 = ctx.r27.s64 * 180;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4708
	ctx.r3.s64 = ctx.r11.s64 + 4708;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8399C010:
	// lbz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399c040
	if (cr6.eq) goto loc_8399C040;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// divwu r9,r30,r10
	ctx.r9.u32 = PPCDivide(ctx.r30.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// mulli r10,r7,180
	ctx.r10.s64 = ctx.r7.s64 * 180;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a31410
	ctx.lr = 0x8399C040;
	sub_82A31410(ctx, base);
loc_8399C040:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// divwu r9,r30,r11
	ctx.r9.u32 = PPCDivide(ctx.r30.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// mulli r11,r7,180
	ctx.r11.s64 = ctx.r7.s64 * 180;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x8399c074
	if (cr6.lt) goto loc_8399C074;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399C074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8399c0d0
	if (cr6.gt) goto loc_8399C0D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8399c0f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C0F8;
	// bdzf 4*cr6+eq,0x8399c0d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C0D0;
	// bdzf 4*cr6+eq,0x8399c0d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C0D0;
	// bdzf 4*cr6+eq,0x8399c0b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C0B8;
	// bne cr6,0x8399c0a0
	if (!cr6.eq) goto loc_8399C0A0;
loc_8399C0A0:
	// mulli r11,r27,180
	ctx.r11.s64 = ctx.r27.s64 * 180;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,4708
	ctx.r30.s64 = ctx.r11.s64 + 4708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8399C0B8:
	// mulli r11,r27,180
	ctx.r11.s64 = ctx.r27.s64 * 180;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,388
	ctx.r30.s64 = ctx.r11.s64 + 388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8399C0D0:
	// mulli r11,r27,180
	ctx.r11.s64 = ctx.r27.s64 * 180;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,180
	ctx.r5.s64 = 180;
	// addi r3,r11,388
	ctx.r3.s64 = ctx.r11.s64 + 388;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x8399C0E8;
	sub_831CE980(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399bdf8
	ctx.lr = 0x8399C0F8;
	sub_8399BDF8(ctx, base);
loc_8399C0F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399C104"))) PPC_WEAK_FUNC(sub_8399C104);
PPC_FUNC_IMPL(__imp__sub_8399C104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399C108"))) PPC_WEAK_FUNC(sub_8399C108);
PPC_FUNC_IMPL(__imp__sub_8399C108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d19a68
	ctx.lr = 0x8399C118;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,22836
	ctx.r4.s64 = ctx.r11.s64 + 22836;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8399C134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8399C148"))) PPC_WEAK_FUNC(sub_8399C148);
PPC_FUNC_IMPL(__imp__sub_8399C148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8399C150;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x8399C15C;
	sub_82D35198(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d355a0
	ctx.lr = 0x8399C164;
	sub_82D355A0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x8399C168;
	sub_8399F8B8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c1d8
	if (cr6.eq) goto loc_8399C1D8;
	// li r29,2128
	ctx.r29.s64 = 2128;
	// li r30,8
	ctx.r30.s64 = 8;
loc_8399C17C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8399C180:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C184;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// bl 0x8399ee78
	ctx.lr = 0x8399C190;
	sub_8399EE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399c1b0
	if (cr6.eq) goto loc_8399C1B0;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C1A0;
	sub_8399F8B8(ctx, base);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// bl 0x835d3178
	ctx.lr = 0x8399C1A8;
	sub_835D3178(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8399c1c0
	if (!cr6.eq) goto loc_8399C1C0;
loc_8399C1B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x8399c180
	if (cr6.lt) goto loc_8399C180;
	// b 0x8399c1c8
	goto loc_8399C1C8;
loc_8399C1C0:
	// li r4,825
	ctx.r4.s64 = 825;
	// bl 0x839ab720
	ctx.lr = 0x8399C1C8;
	sub_839AB720(ctx, base);
loc_8399C1C8:
	// addi r30,r30,532
	ctx.r30.s64 = ctx.r30.s64 + 532;
	// addi r29,r29,460
	ctx.r29.s64 = ctx.r29.s64 + 460;
	// cmpwi cr6,r30,1072
	cr6.compare<int32_t>(ctx.r30.s32, 1072, xer);
	// blt cr6,0x8399c17c
	if (cr6.lt) goto loc_8399C17C;
loc_8399C1D8:
	// lwz r3,108(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c1e8
	if (cr6.eq) goto loc_8399C1E8;
	// bl 0x82d49a78
	ctx.lr = 0x8399C1E8;
	sub_82D49A78(ctx, base);
loc_8399C1E8:
	// stw r28,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r28.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x8399C1F0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c240
	if (cr6.eq) goto loc_8399C240;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C1FC;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8399c240
	if (cr6.gt) goto loc_8399C240;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8399c230
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C230;
	// bdzf 4*cr6+eq,0x8399c240
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C240;
	// bdzf 4*cr6+eq,0x8399c230
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C230;
	// bdzf 4*cr6+eq,0x8399c230
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C230;
	// bdzf 4*cr6+eq,0x8399c240
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C240;
	// bdzf 4*cr6+eq,0x8399c240
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C240;
	// bdzf 4*cr6+eq,0x8399c240
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399C240;
	// bne cr6,0x8399c230
	if (!cr6.eq) goto loc_8399C230;
loc_8399C230:
	// bl 0x82d14ce8
	ctx.lr = 0x8399C234;
	sub_82D14CE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c240
	if (cr6.eq) goto loc_8399C240;
	// bl 0x82d130b8
	ctx.lr = 0x8399C240;
	sub_82D130B8(ctx, base);
loc_8399C240:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d39190
	ctx.lr = 0x8399C248;
	sub_82D39190(ctx, base);
	// bl 0x839a9e60
	ctx.lr = 0x8399C24C;
	sub_839A9E60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399c260
	if (cr6.eq) goto loc_8399C260;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x839e42d0
	ctx.lr = 0x8399C260;
	sub_839E42D0(ctx, base);
loc_8399C260:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C264;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c288
	if (cr6.eq) goto loc_8399C288;
	// bl 0x839a9af8
	ctx.lr = 0x8399C270;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399c288
	if (cr6.eq) goto loc_8399C288;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C280;
	sub_8399F8B8(ctx, base);
	// bl 0x839a0648
	ctx.lr = 0x8399C284;
	sub_839A0648(ctx, base);
	// b 0x8399c2a0
	goto loc_8399C2A0;
loc_8399C288:
	// bl 0x82d14ce8
	ctx.lr = 0x8399C28C;
	sub_82D14CE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d12e58
	ctx.lr = 0x8399C294;
	sub_82D12E58(ctx, base);
	// bl 0x82d14ce8
	ctx.lr = 0x8399C298;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12de0
	ctx.lr = 0x8399C2A0;
	sub_82D12DE0(ctx, base);
loc_8399C2A0:
	// bl 0x831156e8
	ctx.lr = 0x8399C2A4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c2cc
	if (cr6.eq) goto loc_8399C2CC;
	// bl 0x831156e8
	ctx.lr = 0x8399C2B0;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399c2cc
	if (cr6.eq) goto loc_8399C2CC;
	// bl 0x831156e8
	ctx.lr = 0x8399C2C0;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9b8
	ctx.lr = 0x8399C2CC;
	sub_8312B9B8(ctx, base);
loc_8399C2CC:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C2D0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c2f0
	if (cr6.eq) goto loc_8399C2F0;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C2DC;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8399c2f0
	if (!cr6.eq) goto loc_8399C2F0;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C2EC;
	sub_8399F8B8(ctx, base);
	// bl 0x839a0240
	ctx.lr = 0x8399C2F0;
	sub_839A0240(ctx, base);
loc_8399C2F0:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C2F4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c344
	if (cr6.eq) goto loc_8399C344;
	// bl 0x830ff290
	ctx.lr = 0x8399C300;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399C304;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x8399c344
	if (!cr6.eq) goto loc_8399C344;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8399C310:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C314;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399ee20
	ctx.lr = 0x8399C328;
	sub_8399EE20(ctx, base);
	// stb r28,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399ee10
	ctx.lr = 0x8399C338;
	sub_8399EE10(ctx, base);
	// addi r31,r31,532
	ctx.r31.s64 = ctx.r31.s64 + 532;
	// cmpwi cr6,r31,1064
	cr6.compare<int32_t>(ctx.r31.s32, 1064, xer);
	// blt cr6,0x8399c310
	if (cr6.lt) goto loc_8399C310;
loc_8399C344:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399C350"))) PPC_WEAK_FUNC(sub_8399C350);
PPC_FUNC_IMPL(__imp__sub_8399C350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399C358;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r26,8(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,12305
	ctx.r9.u64 = ctx.r11.u64 | 12305;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// bgt cr6,0x8399c634
	if (cr6.gt) goto loc_8399C634;
	// ori r9,r11,12304
	ctx.r9.u64 = ctx.r11.u64 | 12304;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399c5f4
	if (!cr6.lt) goto loc_8399C5F4;
	// addis r11,r10,-264
	ctx.r11.s64 = ctx.r10.s64 + -17301504;
	// addi r11,r11,-12288
	ctx.r11.s64 = ctx.r11.s64 + -12288;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8399c794
	if (cr6.gt) goto loc_8399C794;
	// lis r12,-31846
	ctx.r12.s64 = -2087059456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15436
	ctx.r12.s64 = ctx.r12.s64 + -15436;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8399C3EC;
	case 1:
		goto loc_8399C434;
	case 2:
		goto loc_8399C794;
	case 3:
		goto loc_8399C794;
	case 4:
		goto loc_8399C794;
	case 5:
		goto loc_8399C794;
	case 6:
		goto loc_8399C794;
	case 7:
		goto loc_8399C794;
	case 8:
		goto loc_8399C794;
	case 9:
		goto loc_8399C794;
	case 10:
		goto loc_8399C794;
	case 11:
		goto loc_8399C794;
	case 12:
		goto loc_8399C56C;
	case 13:
		goto loc_8399C56C;
	default:
		return;
	}
	// lwz r28,-15380(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15380);
	// lwz r28,-15308(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15308);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14444(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14444);
	// lwz r28,-14996(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14996);
	// lwz r28,-14996(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + -14996);
loc_8399C3EC:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
loc_8399C3F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8399c418
	if (!cr6.eq) goto loc_8399C418;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C408;
	sub_8399F8B8(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399C418;
	sub_8399F7A0(ctx, base);
loc_8399C418:
	// addi r30,r30,460
	ctx.r30.s64 = ctx.r30.s64 + 460;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,920
	cr6.compare<int32_t>(ctx.r30.s32, 920, xer);
	// blt cr6,0x8399c3f4
	if (cr6.lt) goto loc_8399C3F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C434:
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8399C440:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8399c460
	if (cr6.eq) goto loc_8399C460;
	// bl 0x830ff290
	ctx.lr = 0x8399C454;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399C458;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x8399c474
	if (!cr6.eq) goto loc_8399C474;
loc_8399C460:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C464;
	sub_8399F8B8(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399C474;
	sub_8399F7A0(ctx, base);
loc_8399C474:
	// addi r30,r30,460
	ctx.r30.s64 = ctx.r30.s64 + 460;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,920
	cr6.compare<int32_t>(ctx.r30.s32, 920, xer);
	// blt cr6,0x8399c440
	if (cr6.lt) goto loc_8399C440;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C488;
	sub_8399F8B8(ctx, base);
	// bl 0x8399fd08
	ctx.lr = 0x8399C48C;
	sub_8399FD08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399c794
	if (cr6.eq) goto loc_8399C794;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c4a8
	if (cr6.eq) goto loc_8399C4A8;
	// bl 0x839abb78
	ctx.lr = 0x8399C4A8;
	sub_839ABB78(ctx, base);
loc_8399C4A8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c4b8
	if (cr6.eq) goto loc_8399C4B8;
	// bl 0x839abb78
	ctx.lr = 0x8399C4B8;
	sub_839ABB78(ctx, base);
loc_8399C4B8:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C4BC;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8399c4fc
	if (!cr6.eq) goto loc_8399C4FC;
	// bl 0x830ff290
	ctx.lr = 0x8399C4CC;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8399C4D0;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,22864
	ctx.r11.s64 = ctx.r11.s64 + 22864;
	// beq cr6,0x8399c4f4
	if (cr6.eq) goto loc_8399C4F4;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// b 0x8399c50c
	goto loc_8399C50C;
loc_8399C4F4:
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x8399c50c
	goto loc_8399C50C;
loc_8399C4FC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,22864
	ctx.r5.s64 = ctx.r11.s64 + 22864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399C50C:
	// bl 0x82d20da8
	ctx.lr = 0x8399C510;
	sub_82D20DA8(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x8399C514;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8399C51C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399c554
	if (cr6.eq) goto loc_8399C554;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8399c554
	if (cr6.eq) goto loc_8399C554;
	// bl 0x831156e8
	ctx.lr = 0x8399C534;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312d788
	ctx.lr = 0x8399C548;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x8399C554;
	sub_8312B9C8(ctx, base);
loc_8399C554:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x8399C560;
	sub_83103068(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C56C:
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8399c584
	if (!cr6.eq) goto loc_8399C584;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8399C584:
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// ori r8,r9,12300
	ctx.r8.u64 = ctx.r9.u64 | 12300;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// bne cr6,0x8399c5a0
	if (!cr6.eq) goto loc_8399C5A0;
	// ori r10,r10,12309
	ctx.r10.u64 = ctx.r10.u64 | 12309;
	// b 0x8399c5a4
	goto loc_8399C5A4;
loc_8399C5A0:
	// ori r10,r10,12308
	ctx.r10.u64 = ctx.r10.u64 | 12308;
loc_8399C5A4:
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,21716
	ctx.r7.s64 = ctx.r8.s64 + 21716;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stb r5,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r5.u8);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8399c794
	if (cr6.eq) goto loc_8399C794;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x83102fe0
	ctx.lr = 0x8399C5E8;
	sub_83102FE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C5F4:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8399c60c
	if (!cr6.eq) goto loc_8399C60C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8399C60C:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c794
	if (cr6.eq) goto loc_8399C794;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83102fe0
	ctx.lr = 0x8399C628;
	sub_83102FE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C634:
	// ori r9,r11,12309
	ctx.r9.u64 = ctx.r11.u64 | 12309;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8399c720
	if (cr6.gt) goto loc_8399C720;
	// ori r9,r11,12308
	ctx.r9.u64 = ctx.r11.u64 | 12308;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8399c6ec
	if (!cr6.lt) goto loc_8399C6EC;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,12306
	ctx.r9.u64 = ctx.r11.u64 | 12306;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8399c794
	if (!cr6.eq) goto loc_8399C794;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// ori r7,r9,12307
	ctx.r7.u64 = ctx.r9.u64 | 12307;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r5,r11,30
	ctx.r5.s64 = ctx.r11.s64 + 30;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// blt cr6,0x8399c6b4
	if (cr6.lt) goto loc_8399C6B4;
	// bne cr6,0x8399c6cc
	if (!cr6.eq) goto loc_8399C6CC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8399c6bc
	goto loc_8399C6BC;
loc_8399C6B4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r30,1
	ctx.r30.s64 = 1;
loc_8399C6BC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c6cc
	if (cr6.eq) goto loc_8399C6CC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83102fe0
	ctx.lr = 0x8399C6CC;
	sub_83102FE0(ctx, base);
loc_8399C6CC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C6EC:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8399c794
	if (cr6.eq) goto loc_8399C794;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83102fe0
	ctx.lr = 0x8399C714;
	sub_83102FE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C720:
	// ori r9,r11,12355
	ctx.r9.u64 = ctx.r11.u64 | 12355;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8399c794
	if (!cr6.eq) goto loc_8399C794;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8399c770
	if (cr6.lt) goto loc_8399C770;
	// bne cr6,0x8399c794
	if (!cr6.eq) goto loc_8399C794;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c794
	if (cr6.eq) goto loc_8399C794;
	// bl 0x82927100
	ctx.lr = 0x8399C750;
	sub_82927100(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8399c794
	if (!cr6.eq) goto loc_8399C794;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83102fe0
	ctx.lr = 0x8399C764;
	sub_83102FE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C770:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399c794
	if (cr6.eq) goto loc_8399C794;
	// bl 0x82927100
	ctx.lr = 0x8399C780;
	sub_82927100(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8399c794
	if (!cr6.eq) goto loc_8399C794;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83102fe0
	ctx.lr = 0x8399C794;
	sub_83102FE0(ctx, base);
loc_8399C794:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399C7A0"))) PPC_WEAK_FUNC(sub_8399C7A0);
PPC_FUNC_IMPL(__imp__sub_8399C7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399C7A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x839a9dd0
	ctx.lr = 0x8399C7C4;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399c808
	if (cr6.eq) goto loc_8399C808;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x8399c8a8
	if (!cr6.eq) goto loc_8399C8A8;
	// bl 0x8308e078
	ctx.lr = 0x8399C7DC;
	sub_8308E078(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x839ad400
	ctx.lr = 0x8399C7F0;
	sub_839AD400(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bl 0x8308e078
	ctx.lr = 0x8399C7F8;
	sub_8308E078(ctx, base);
	// stw r3,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C808:
	// bl 0x82dad2e0
	ctx.lr = 0x8399C80C;
	sub_82DAD2E0(ctx, base);
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// beq cr6,0x8399c864
	if (cr6.eq) goto loc_8399C864;
	// bl 0x8399f8b8
	ctx.lr = 0x8399C81C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399C830;
	sub_8399F7A0(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839ad400
	ctx.lr = 0x8399C848;
	sub_839AD400(ctx, base);
	// addi r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 + 30;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399C864:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C868;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399C87C;
	sub_8399F7A0(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x8399C880;
	sub_8308E078(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x839ad400
	ctx.lr = 0x8399C894;
	sub_839AD400(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bl 0x8308e078
	ctx.lr = 0x8399C89C;
	sub_8308E078(ctx, base);
	// addi r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 + 30;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r3.u32);
loc_8399C8A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399C8B4"))) PPC_WEAK_FUNC(sub_8399C8B4);
PPC_FUNC_IMPL(__imp__sub_8399C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399C8B8"))) PPC_WEAK_FUNC(sub_8399C8B8);
PPC_FUNC_IMPL(__imp__sub_8399C8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8399C8C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x8399C8E0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,6
	ctx.r4.s64 = ctx.r10.s64 + 393216;
	// addi r4,r4,-30316
	ctx.r4.s64 = ctx.r4.s64 + -30316;
	// bl 0x831ce980
	ctx.lr = 0x8399C8FC;
	sub_831CE980(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x8399C900;
	sub_8399F8B8(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,7
	cr6.compare<int32_t>(ctx.r9.s32, 7, xer);
	// bne cr6,0x8399c948
	if (!cr6.eq) goto loc_8399C948;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8399c948
	if (!cr6.eq) goto loc_8399C948;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399c93c
	if (!cr6.eq) goto loc_8399C93C;
	// bl 0x8308e078
	ctx.lr = 0x8399C924;
	sub_8308E078(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x839ad400
	ctx.lr = 0x8399C938;
	sub_839AD400(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_8399C93C:
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8308e078
	ctx.lr = 0x8399C944;
	sub_8308E078(ctx, base);
	// stw r3,120(r23)
	PPC_STORE_U32(ctx.r23.u32 + 120, ctx.r3.u32);
loc_8399C948:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8399C94C:
	// bl 0x8311e3d0
	ctx.lr = 0x8399C950;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x8399C958;
	sub_8311D680(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bne cr6,0x8399c990
	if (!cr6.eq) goto loc_8399C990;
	// addi r11,r1,141
	ctx.r11.s64 = ctx.r1.s64 + 141;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x839a9d98
	ctx.lr = 0x8399C970;
	sub_839A9D98(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399c990
	if (cr6.eq) goto loc_8399C990;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8353b168
	ctx.lr = 0x8399C988;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399c9a4
	if (!cr6.eq) goto loc_8399C9A4;
loc_8399C990:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8399c94c
	if (cr6.lt) goto loc_8399C94C;
	// b 0x8399c9f0
	goto loc_8399C9F0;
loc_8399C9A4:
	// bl 0x8399f8b8
	ctx.lr = 0x8399C9A8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399C9BC;
	sub_8399F7A0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399c9e0
	if (!cr6.eq) goto loc_8399C9E0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x839ad400
	ctx.lr = 0x8399C9DC;
	sub_839AD400(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_8399C9E0:
	// addi r11,r29,30
	ctx.r11.s64 = ctx.r29.s64 + 30;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r31.u32);
loc_8399C9F0:
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r28,r27,24
	ctx.r28.u64 = ctx.r27.u32 & 0xFF;
loc_8399C9F8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8399ca34
	if (!cr6.eq) goto loc_8399CA34;
	// addi r11,r1,141
	ctx.r11.s64 = ctx.r1.s64 + 141;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x839a9d98
	ctx.lr = 0x8399CA14;
	sub_839A9D98(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399ca34
	if (cr6.eq) goto loc_8399CA34;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x8399CA2C;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399ca4c
	if (!cr6.eq) goto loc_8399CA4C;
loc_8399CA34:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x8399c9f8
	if (cr6.lt) goto loc_8399C9F8;
	// b 0x8399ca98
	goto loc_8399CA98;
loc_8399CA4C:
	// bl 0x8399f8b8
	ctx.lr = 0x8399CA50;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399CA64;
	sub_8399F7A0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399ca88
	if (!cr6.eq) goto loc_8399CA88;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x839ad400
	ctx.lr = 0x8399CA84;
	sub_839AD400(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_8399CA88:
	// addi r11,r29,30
	ctx.r11.s64 = ctx.r29.s64 + 30;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r31.u32);
loc_8399CA98:
	// bl 0x839a9dd0
	ctx.lr = 0x8399CA9C;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399cb0c
	if (cr6.eq) goto loc_8399CB0C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8399cb0c
	if (!cr6.eq) goto loc_8399CB0C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399cad8
	if (!cr6.eq) goto loc_8399CAD8;
	// bl 0x8308e078
	ctx.lr = 0x8399CAC0;
	sub_8308E078(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x839ad400
	ctx.lr = 0x8399CAD4;
	sub_839AD400(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_8399CAD8:
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8353b230
	ctx.lr = 0x8399CAE0;
	sub_8353B230(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8399CAE8:
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8399cb08
	if (!cr6.eq) goto loc_8399CB08;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x8399cae8
	if (cr6.lt) goto loc_8399CAE8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8399CB08:
	// stw r10,120(r23)
	PPC_STORE_U32(ctx.r23.u32 + 120, ctx.r10.u32);
loc_8399CB0C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399cb64
	if (!cr6.eq) goto loc_8399CB64;
	// bl 0x8399f8b8
	ctx.lr = 0x8399CB1C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399CB30;
	sub_8399F7A0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399cb58
	if (!cr6.eq) goto loc_8399CB58;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x839ad400
	ctx.lr = 0x8399CB54;
	sub_839AD400(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_8399CB58:
	// addi r11,r29,30
	ctx.r11.s64 = ctx.r29.s64 + 30;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r31.u32);
loc_8399CB64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399CB70"))) PPC_WEAK_FUNC(sub_8399CB70);
PPC_FUNC_IMPL(__imp__sub_8399CB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8399CB78;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x8399CB94;
	sub_8399F8B8(ctx, base);
	// addi r11,r29,1028
	ctx.r11.s64 = ctx.r29.s64 + 1028;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,23592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23592);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8399cbcc
	if (!cr6.eq) goto loc_8399CBCC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399cbd0
	if (cr6.eq) goto loc_8399CBD0;
loc_8399CBCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399CBD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399cc00
	if (cr6.eq) goto loc_8399CC00;
	// bl 0x8399f8b8
	ctx.lr = 0x8399CBE0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a0
	ctx.lr = 0x8399CBF4;
	sub_8399F7A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8399CC00:
	// bl 0x830ff290
	ctx.lr = 0x8399CC04;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8399CC08;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399cc24
	if (cr6.eq) goto loc_8399CC24;
	// bl 0x82dad2e0
	ctx.lr = 0x8399CC18;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8399cc28
	if (!cr6.eq) goto loc_8399CC28;
loc_8399CC24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399CC28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8399cc50
	if (cr6.eq) goto loc_8399CC50;
	// bl 0x8399c7a0
	ctx.lr = 0x8399CC4C;
	sub_8399C7A0(ctx, base);
	// b 0x8399cc54
	goto loc_8399CC54;
loc_8399CC50:
	// bl 0x8399c8b8
	ctx.lr = 0x8399CC54;
	sub_8399C8B8(ctx, base);
loc_8399CC54:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,116
	ctx.r30.s64 = ctx.r28.s64 + 116;
loc_8399CC60:
	// lwz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8399f8b8
	ctx.lr = 0x8399CC68;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8399fd30
	ctx.lr = 0x8399CC74;
	sub_8399FD30(ctx, base);
	// li r4,801
	ctx.r4.s64 = 801;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x839ab720
	ctx.lr = 0x8399CC80;
	sub_839AB720(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x8399cc60
	if (cr6.lt) goto loc_8399CC60;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x839a9dd0
	ctx.lr = 0x8399CCA0;
	sub_839A9DD0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8399ccb4
	if (cr6.eq) goto loc_8399CCB4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8399ccc0
	goto loc_8399CCC0;
loc_8399CCB4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8399CCC0:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8399cce8
	if (cr6.eq) goto loc_8399CCE8;
	// bl 0x839affb8
	ctx.lr = 0x8399CCD0;
	sub_839AFFB8(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,23500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// bl 0x82d23900
	ctx.lr = 0x8399CCE8;
	sub_82D23900(ctx, base);
loc_8399CCE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399CCF4"))) PPC_WEAK_FUNC(sub_8399CCF4);
PPC_FUNC_IMPL(__imp__sub_8399CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399CCF8"))) PPC_WEAK_FUNC(sub_8399CCF8);
PPC_FUNC_IMPL(__imp__sub_8399CCF8) {
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
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399cd34
	if (!cr6.eq) goto loc_8399CD34;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bl 0x839b04a0
	ctx.lr = 0x8399CD20;
	sub_839B04A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399cd34
	if (cr6.eq) goto loc_8399CD34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
loc_8399CD34:
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

__attribute__((alias("__imp__sub_8399CD48"))) PPC_WEAK_FUNC(sub_8399CD48);
PPC_FUNC_IMPL(__imp__sub_8399CD48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x839b0560
	sub_839B0560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399CD50"))) PPC_WEAK_FUNC(sub_8399CD50);
PPC_FUNC_IMPL(__imp__sub_8399CD50) {
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
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x8399CD74;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x8399CD7C;
	sub_831032A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399cd94
	if (cr6.eq) goto loc_8399CD94;
	// bl 0x82416268
	ctx.lr = 0x8399CD90;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399CD94:
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

__attribute__((alias("__imp__sub_8399CDAC"))) PPC_WEAK_FUNC(sub_8399CDAC);
PPC_FUNC_IMPL(__imp__sub_8399CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399CDB0"))) PPC_WEAK_FUNC(sub_8399CDB0);
PPC_FUNC_IMPL(__imp__sub_8399CDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399CDB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x8399CDCC;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x8399CDE4;
	sub_82D253F8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r9,r11,23048
	ctx.r9.s64 = ctx.r11.s64 + 23048;
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r29,r7,23496
	ctx.r29.s64 = ctx.r7.s64 + 23496;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lwz r4,23496(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23496);
	// bl 0x82d20ae0
	ctx.lr = 0x8399CE28;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x8399CE38;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x8399CE44;
	sub_82D20AE0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8399CE50:
	// stw r26,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r26.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8399ce50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399CE50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x8399CE68;
	sub_82D195D8(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
loc_8399CE70:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399cb70
	ctx.lr = 0x8399CE88;
	sub_8399CB70(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x8399ce70
	if (cr6.lt) goto loc_8399CE70;
	// bl 0x8399f8b8
	ctx.lr = 0x8399CE9C;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399ceb8
	if (cr6.eq) goto loc_8399CEB8;
	// bl 0x8399f8b8
	ctx.lr = 0x8399CEA8;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8399cebc
	if (cr6.eq) goto loc_8399CEBC;
loc_8399CEB8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8399CEBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399ced0
	if (cr6.eq) goto loc_8399CED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x8399CED0;
	sub_82D191F8(ctx, base);
loc_8399CED0:
	// bl 0x839a9af8
	ctx.lr = 0x8399CED4;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399ceec
	if (!cr6.eq) goto loc_8399CEEC;
	// bl 0x82d14ce8
	ctx.lr = 0x8399CEE4;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12e58
	ctx.lr = 0x8399CEEC;
	sub_82D12E58(ctx, base);
loc_8399CEEC:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399cf78
	if (!cr6.eq) goto loc_8399CF78;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8399CF10;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399cf60
	if (cr6.eq) goto loc_8399CF60;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,23008
	ctx.r4.s64 = ctx.r11.s64 + 23008;
	// bl 0x83103328
	ctx.lr = 0x8399CF28;
	sub_83103328(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r29,r30,72
	ctx.r29.s64 = ctx.r30.s64 + 72;
	// addi r9,r10,22984
	ctx.r9.s64 = ctx.r10.s64 + 22984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x839b0650
	ctx.lr = 0x8399CF40;
	sub_839B0650(ctx, base);
	// stb r26,108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 108, ctx.r26.u8);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r8,22976
	ctx.r4.s64 = ctx.r8.s64 + 22976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8399CF58;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8399cf64
	goto loc_8399CF64;
loc_8399CF60:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8399CF64:
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8399cf7c
	if (cr6.eq) goto loc_8399CF7C;
	// bl 0x83103100
	ctx.lr = 0x8399CF78;
	sub_83103100(ctx, base);
loc_8399CF78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399CF7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399CF84"))) PPC_WEAK_FUNC(sub_8399CF84);
PPC_FUNC_IMPL(__imp__sub_8399CF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399CF88"))) PPC_WEAK_FUNC(sub_8399CF88);
PPC_FUNC_IMPL(__imp__sub_8399CF88) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,23048
	ctx.r9.s64 = ctx.r11.s64 + 23048;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x8399CFC0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8399cfd8
	if (cr6.eq) goto loc_8399CFD8;
	// bl 0x82416268
	ctx.lr = 0x8399CFD4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399CFD8:
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

__attribute__((alias("__imp__sub_8399CFF0"))) PPC_WEAK_FUNC(sub_8399CFF0);
PPC_FUNC_IMPL(__imp__sub_8399CFF0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8399D024;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399d03c
	if (cr6.eq) goto loc_8399D03C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399cdb0
	ctx.lr = 0x8399D038;
	sub_8399CDB0(ctx, base);
	// b 0x8399d040
	goto loc_8399D040;
loc_8399D03C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8399D040:
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

__attribute__((alias("__imp__sub_8399D058"))) PPC_WEAK_FUNC(sub_8399D058);
PPC_FUNC_IMPL(__imp__sub_8399D058) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8399d080
	if (cr6.lt) goto loc_8399D080;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8399d084
	goto loc_8399D084;
loc_8399D080:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8399D084:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8399D0A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399d0bc
	if (cr6.eq) goto loc_8399D0BC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399cdb0
	ctx.lr = 0x8399D0B4;
	sub_8399CDB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399d0c0
	if (!cr6.eq) goto loc_8399D0C0;
loc_8399D0BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8399D0C0:
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

__attribute__((alias("__imp__sub_8399D0D8"))) PPC_WEAK_FUNC(sub_8399D0D8);
PPC_FUNC_IMPL(__imp__sub_8399D0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8399D0E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x8399D12C;
	sub_82D042A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x8399D13C;
	sub_82D042A8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,22888
	ctx.r5.s64 = ctx.r11.s64 + 22888;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ab6970
	ctx.lr = 0x8399D150;
	sub_82AB6970(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1da8
	ctx.lr = 0x8399D164;
	sub_825A1DA8(ctx, base);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292a448
	ctx.lr = 0x8399D17C;
	sub_8292A448(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x8399D190;
	sub_8259CB28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8399d1b0
	if (cr6.lt) goto loc_8399D1B0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8399D1B0;
	sub_825952B8(ctx, base);
loc_8399D1B0:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x8399d1d8
	if (cr6.lt) goto loc_8399D1D8;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8399D1D8;
	sub_825952B8(ctx, base);
loc_8399D1D8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x8399d1f8
	if (cr6.lt) goto loc_8399D1F8;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8399d1fc
	goto loc_8399D1FC;
loc_8399D1F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8399D1FC:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399D214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82d291e0
	ctx.lr = 0x8399D224;
	sub_82D291E0(ctx, base);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8399d240
	if (cr6.lt) goto loc_8399D240;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8399D240;
	sub_825952B8(ctx, base);
loc_8399D240:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x8399d268
	if (cr6.lt) goto loc_8399D268;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8399D268;
	sub_825952B8(ctx, base);
loc_8399D268:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x8399d290
	if (cr6.lt) goto loc_8399D290;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8399D290;
	sub_825952B8(ctx, base);
loc_8399D290:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8399d2b8
	if (cr6.lt) goto loc_8399D2B8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8399D2B8;
	sub_825952B8(ctx, base);
loc_8399D2B8:
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399D2CC"))) PPC_WEAK_FUNC(sub_8399D2CC);
PPC_FUNC_IMPL(__imp__sub_8399D2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399D2D0"))) PPC_WEAK_FUNC(sub_8399D2D0);
PPC_FUNC_IMPL(__imp__sub_8399D2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8399D2D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8399D2E4;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d3fc
	if (cr6.eq) goto loc_8399D3FC;
	// bl 0x8399f8b8
	ctx.lr = 0x8399D2F4;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8399d3fc
	if (cr6.eq) goto loc_8399D3FC;
	// bl 0x82dad2e0
	ctx.lr = 0x8399D304;
	sub_82DAD2E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399d3fc
	if (cr6.eq) goto loc_8399D3FC;
	// bl 0x831156e8
	ctx.lr = 0x8399D314;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312c748
	ctx.lr = 0x8399D324;
	sub_8312C748(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8312c748
	ctx.lr = 0x8399D334;
	sub_8312C748(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x8399D340;
	sub_8312B9D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399d34c
	if (!cr6.eq) goto loc_8399D34C;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
loc_8399D34C:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r11,22880
	ctx.r28.s64 = ctx.r11.s64 + 22880;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x8399d3a8
	if (cr6.eq) goto loc_8399D3A8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8399d374
	if (!cr6.eq) goto loc_8399D374;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8399D374:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x8399D37C;
	sub_82B85FF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8399D38C;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x8399d0d8
	ctx.lr = 0x8399D3A4;
	sub_8399D0D8(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_8399D3A8:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x8399d3fc
	if (cr6.eq) goto loc_8399D3FC;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8399d3c8
	if (!cr6.eq) goto loc_8399D3C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8399D3C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x8399D3D0;
	sub_82B85FF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8399D3E0;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8399d0d8
	ctx.lr = 0x8399D3F8;
	sub_8399D0D8(ctx, base);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
loc_8399D3FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399D404"))) PPC_WEAK_FUNC(sub_8399D404);
PPC_FUNC_IMPL(__imp__sub_8399D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399D408"))) PPC_WEAK_FUNC(sub_8399D408);
PPC_FUNC_IMPL(__imp__sub_8399D408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8399D410;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d26640
	ctx.lr = 0x8399D41C;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x8399D420;
	sub_82D25AB8(ctx, base);
	// bl 0x839a9e60
	ctx.lr = 0x8399D424;
	sub_839A9E60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d438
	if (cr6.eq) goto loc_8399D438;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x839e42d0
	ctx.lr = 0x8399D438;
	sub_839E42D0(ctx, base);
loc_8399D438:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x839a9ec0
	ctx.lr = 0x8399D440;
	sub_839A9EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d454
	if (cr6.eq) goto loc_8399D454;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d39190
	ctx.lr = 0x8399D454;
	sub_82D39190(ctx, base);
loc_8399D454:
	// bl 0x831156e8
	ctx.lr = 0x8399D458;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d474
	if (cr6.eq) goto loc_8399D474;
	// bl 0x831156e8
	ctx.lr = 0x8399D468;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9b8
	ctx.lr = 0x8399D474;
	sub_8312B9B8(ctx, base);
loc_8399D474:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x8399D47C;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,22828
	ctx.r31.s64 = ctx.r11.s64 + 22828;
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// bl 0x82d2e228
	ctx.lr = 0x8399D490;
	sub_82D2E228(ctx, base);
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83545640
	ctx.lr = 0x8399D49C;
	sub_83545640(ctx, base);
	// bl 0x839a9af8
	ctx.lr = 0x8399D4A0;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x8399d4bc
	if (!cr6.eq) goto loc_8399D4BC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8399D4BC:
	// bl 0x82d2aec8
	ctx.lr = 0x8399D4C0;
	sub_82D2AEC8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x8399D4C4;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8399D4C8;
	sub_830FF988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x8399D4D0;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r9,r11,-3
	ctx.r9.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x8399d514
	if (cr6.eq) goto loc_8399D514;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d514
	if (cr6.eq) goto loc_8399D514;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82d47a58
	ctx.lr = 0x8399D500;
	sub_82D47A58(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8399D50C;
	sub_837B0C10(ctx, base);
	// bl 0x82d47bb8
	ctx.lr = 0x8399D510;
	sub_82D47BB8(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x8399D514;
	sub_82D476F0(ctx, base);
loc_8399D514:
	// bl 0x830ff290
	ctx.lr = 0x8399D518;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8399D51C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d6b8
	if (cr6.eq) goto loc_8399D6B8;
	// bl 0x839a9a80
	ctx.lr = 0x8399D52C;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d6b8
	if (cr6.eq) goto loc_8399D6B8;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399d6b8
	if (!cr6.eq) goto loc_8399D6B8;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,23508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23508);
	// bl 0x83815a48
	ctx.lr = 0x8399D550;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399d6b8
	if (cr6.eq) goto loc_8399D6B8;
	// bl 0x82d4b8e0
	ctx.lr = 0x8399D55C;
	sub_82D4B8E0(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// bl 0x82d2bbb8
	ctx.lr = 0x8399D564;
	sub_82D2BBB8(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399D580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x8399D584;
	sub_82DAD2E0(ctx, base);
	// lwz r9,228(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8399d5a0
	if (!cr6.eq) goto loc_8399D5A0;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8399D5A0:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399D5B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d35198
	ctx.lr = 0x8399D5BC;
	sub_82D35198(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d355a0
	ctx.lr = 0x8399D5C4;
	sub_82D355A0(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8399D5E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8399D5E8;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9d8
	ctx.lr = 0x8399D5F0;
	sub_8312B9D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399d604
	if (!cr6.eq) goto loc_8399D604;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// ori r4,r4,134
	ctx.r4.u64 = ctx.r4.u64 | 134;
	// b 0x8399d62c
	goto loc_8399D62C;
loc_8399D604:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r4,10
	ctx.r4.s64 = 655360;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x8399d628
	if (!cr6.eq) goto loc_8399D628;
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// b 0x8399d62c
	goto loc_8399D62C;
loc_8399D628:
	// ori r4,r4,277
	ctx.r4.u64 = ctx.r4.u64 | 277;
loc_8399D62C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x8399D634;
	sub_82D29598(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d31b0
	ctx.lr = 0x8399D63C;
	sub_835D31B0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8399D654;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8399D670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d29598
	ctx.lr = 0x8399D680;
	sub_82D29598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d31b0
	ctx.lr = 0x8399D688;
	sub_835D31B0(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8399D69C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x830ff290
	ctx.lr = 0x8399D6A0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8399D6A4;
	sub_830FF988(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8399d6b8
	if (cr6.eq) goto loc_8399D6B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399d2d0
	ctx.lr = 0x8399D6B8;
	sub_8399D2D0(ctx, base);
loc_8399D6B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399D6C4"))) PPC_WEAK_FUNC(sub_8399D6C4);
PPC_FUNC_IMPL(__imp__sub_8399D6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399D6C8"))) PPC_WEAK_FUNC(sub_8399D6C8);
PPC_FUNC_IMPL(__imp__sub_8399D6C8) {
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
	// bl 0x830ff290
	ctx.lr = 0x8399D6E0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8399D6E4;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d6f8
	if (cr6.eq) goto loc_8399D6F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399d2d0
	ctx.lr = 0x8399D6F8;
	sub_8399D2D0(ctx, base);
loc_8399D6F8:
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

__attribute__((alias("__imp__sub_8399D70C"))) PPC_WEAK_FUNC(sub_8399D70C);
PPC_FUNC_IMPL(__imp__sub_8399D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399D710"))) PPC_WEAK_FUNC(sub_8399D710);
PPC_FUNC_IMPL(__imp__sub_8399D710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// blt cr6,0x8399d720
	if (cr6.lt) goto loc_8399D720;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399D720:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,23624
	ctx.r9.s64 = ctx.r11.s64 + 23624;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399D734"))) PPC_WEAK_FUNC(sub_8399D734);
PPC_FUNC_IMPL(__imp__sub_8399D734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399D738"))) PPC_WEAK_FUNC(sub_8399D738);
PPC_FUNC_IMPL(__imp__sub_8399D738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// blt cr6,0x8399d748
	if (cr6.lt) goto loc_8399D748;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399D748:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,23692
	ctx.r9.s64 = ctx.r11.s64 + 23692;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399D75C"))) PPC_WEAK_FUNC(sub_8399D75C);
PPC_FUNC_IMPL(__imp__sub_8399D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399D760"))) PPC_WEAK_FUNC(sub_8399D760);
PPC_FUNC_IMPL(__imp__sub_8399D760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// blt cr6,0x8399d770
	if (cr6.lt) goto loc_8399D770;
loc_8399D768:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399D770:
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bge cr6,0x8399d768
	if (!cr6.lt) goto loc_8399D768;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mulli r11,r3,13
	ctx.r11.s64 = ctx.r3.s64 * 13;
	// addi r10,r10,23744
	ctx.r10.s64 = ctx.r10.s64 + 23744;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399D790"))) PPC_WEAK_FUNC(sub_8399D790);
PPC_FUNC_IMPL(__imp__sub_8399D790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399D798;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r27,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x8399D7BC;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8399D7CC;
	sub_8311BF98(ctx, base);
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399D7DC:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, xer);
	// beq cr6,0x8399d8d4
	if (cr6.eq) goto loc_8399D8D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x8399d7dc
	if (cr6.lt) goto loc_8399D7DC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8399D7FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d8cc
	if (cr6.eq) goto loc_8399D8CC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8399D810:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, xer);
	// beq cr6,0x8399d8dc
	if (cr6.eq) goto loc_8399D8DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x8399d810
	if (cr6.lt) goto loc_8399D810;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8399D830:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,27,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xF;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8399d8cc
	if (cr6.eq) goto loc_8399D8CC;
	// bl 0x8314f578
	ctx.lr = 0x8399D848;
	sub_8314F578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d8f4
	if (cr6.eq) goto loc_8399D8F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8399D860;
	sub_8311BF98(ctx, base);
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8399D86C:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8399d8ec
	if (cr6.eq) goto loc_8399D8EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x8399d86c
	if (cr6.lt) goto loc_8399D86C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8399D88C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399d8cc
	if (cr6.eq) goto loc_8399D8CC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8399D8A0:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8399d930
	if (cr6.eq) goto loc_8399D930;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x8399d8a0
	if (cr6.lt) goto loc_8399D8A0;
loc_8399D8BC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// stb r10,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
loc_8399D8CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8399D8D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8399d7fc
	goto loc_8399D7FC;
loc_8399D8DC:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8399d830
	goto loc_8399D830;
loc_8399D8EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8399d88c
	goto loc_8399D88C;
loc_8399D8F4:
	// bl 0x831156e8
	ctx.lr = 0x8399D8F8;
	sub_831156E8(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x8399D904;
	sub_8311BF98(ctx, base);
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8399D910:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, xer);
	// beq cr6,0x8399d930
	if (cr6.eq) goto loc_8399D930;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x8399d910
	if (cr6.lt) goto loc_8399D910;
	// b 0x8399d8bc
	goto loc_8399D8BC;
loc_8399D930:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// stb r10,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399D950"))) PPC_WEAK_FUNC(sub_8399D950);
PPC_FUNC_IMPL(__imp__sub_8399D950) {
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
	// addi r11,r5,-23
	ctx.r11.s64 = ctx.r5.s64 + -23;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8399d9a4
	if (cr6.gt) goto loc_8399D9A4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8399d98c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399D98C;
	// bdzf 4*cr6+eq,0x8399d994
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8399D994;
	// bne cr6,0x8399d99c
	if (!cr6.eq) goto loc_8399D99C;
loc_8399D98C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8399d9a8
	goto loc_8399D9A8;
loc_8399D994:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8399d9a8
	goto loc_8399D9A8;
loc_8399D99C:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8399d9a8
	goto loc_8399D9A8;
loc_8399D9A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8399D9A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d45d08
	ctx.lr = 0x8399D9B0;
	sub_82D45D08(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8399d9c8
	if (!cr6.eq) goto loc_8399D9C8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// clrldi r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 & 0x7FFFFFFFFFFFFFFF;
	// b 0x8399d9cc
	goto loc_8399D9CC;
loc_8399D9C8:
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
loc_8399D9CC:
	// bl 0x82d45d88
	ctx.lr = 0x8399D9D0;
	sub_82D45D88(ctx, base);
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

__attribute__((alias("__imp__sub_8399D9E8"))) PPC_WEAK_FUNC(sub_8399D9E8);
PPC_FUNC_IMPL(__imp__sub_8399D9E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x8399DA08;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399da18
	if (!cr6.eq) goto loc_8399DA18;
loc_8399DA10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8399da58
	goto loc_8399DA58;
loc_8399DA18:
	// bl 0x8399f8b8
	ctx.lr = 0x8399DA1C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x8399DA34;
	sub_8399F6E8(ctx, base);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x8399da54
	if (!cr6.eq) goto loc_8399DA54;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8399da10
	if (cr6.eq) goto loc_8399DA10;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x8399da10
	if (cr6.eq) goto loc_8399DA10;
loc_8399DA54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8399DA58:
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

__attribute__((alias("__imp__sub_8399DA70"))) PPC_WEAK_FUNC(sub_8399DA70);
PPC_FUNC_IMPL(__imp__sub_8399DA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8399DA78;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stb r27,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x839a9af8
	ctx.lr = 0x8399DA9C;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399dadc
	if (cr6.eq) goto loc_8399DADC;
	// bl 0x831156e8
	ctx.lr = 0x8399DAAC;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8312b790
	ctx.lr = 0x8399DAC0;
	sub_8312B790(ctx, base);
	// stb r3,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r3.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b7d0
	ctx.lr = 0x8399DAD4;
	sub_8312B7D0(ctx, base);
	// stb r3,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r3.u8);
	// b 0x8399dcac
	goto loc_8399DCAC;
loc_8399DADC:
	// bl 0x8399f8b8
	ctx.lr = 0x8399DAE0;
	sub_8399F8B8(ctx, base);
	// addi r11,r30,1028
	ctx.r11.s64 = ctx.r30.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r3
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839aa5d8
	ctx.lr = 0x8399DAF4;
	sub_839AA5D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8399DAFC;
	sub_831156E8(ctx, base);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r11,23696(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23696);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r8,808(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x8399db2c
	if (!cr6.lt) goto loc_8399DB2C;
	// addi r11,r31,31
	ctx.r11.s64 = ctx.r31.s64 + 31;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_8399DB2C:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x830ff290
	ctx.lr = 0x8399DB34;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399DB38;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// blt cr6,0x8399db64
	if (cr6.lt) goto loc_8399DB64;
	// bl 0x830ff290
	ctx.lr = 0x8399DB44;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399DB48;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x8399db64
	if (cr6.gt) goto loc_8399DB64;
	// addis r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x8399DB5C;
	sub_83126788(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x8399db90
	goto loc_8399DB90;
loc_8399DB64:
	// bl 0x8314f578
	ctx.lr = 0x8399DB68;
	sub_8314F578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399db90
	if (cr6.eq) goto loc_8399DB90;
	// bl 0x831156e8
	ctx.lr = 0x8399DB78;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x8399DB88;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8399DB90:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399dcac
	if (cr6.eq) goto loc_8399DCAC;
	// bl 0x8399f8b8
	ctx.lr = 0x8399DBA0;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x8399dbd0
	if (cr6.eq) goto loc_8399DBD0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831538b0
	ctx.lr = 0x8399DBB8;
	sub_831538B0(ctx, base);
	// stb r3,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r3.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83153618
	ctx.lr = 0x8399DBC8;
	sub_83153618(ctx, base);
	// stb r3,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r3.u8);
	// b 0x8399dcac
	goto loc_8399DCAC;
loc_8399DBD0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x8399DBE0;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// bl 0x8314e340
	ctx.lr = 0x8399DBF4;
	sub_8314E340(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8399DC04;
	sub_8311C338(ctx, base);
	// lwz r8,540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// rlwinm r8,r8,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8399dcac
	if (cr6.eq) goto loc_8399DCAC;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r7,r28,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
	// addi r6,r11,23744
	ctx.r6.s64 = ctx.r11.s64 + 23744;
loc_8399DC28:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8399dc38
	if (cr6.lt) goto loc_8399DC38;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8399DC38:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x8399dc5c
	if (!cr6.eq) goto loc_8399DC5C;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8399dc60
	if (cr6.eq) goto loc_8399DC60;
loc_8399DC5C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8399DC60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399dc80
	if (!cr6.eq) goto loc_8399DC80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8399dc28
	if (cr6.lt) goto loc_8399DC28;
	// b 0x8399dcac
	goto loc_8399DCAC;
loc_8399DC80:
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399d790
	ctx.lr = 0x8399DC9C;
	sub_8399D790(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// stb r10,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
loc_8399DCAC:
	// bl 0x830ff290
	ctx.lr = 0x8399DCB0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399DCB4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x8399dcfc
	if (!cr6.eq) goto loc_8399DCFC;
	// bl 0x830ff290
	ctx.lr = 0x8399DCC0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-54
	ctx.r11.s64 = ctx.r11.s64 + -54;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8399dcf4
	if (cr6.gt) goto loc_8399DCF4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8399dcfc
	if (cr6.eq) goto loc_8399DCFC;
	// bdz 0x8399dcfc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399DCFC;
	// bdz 0x8399dcfc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399DCFC;
	// bdz 0x8399dcf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399DCF4;
	// bdz 0x8399dcf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399DCF4;
	// bdz 0x8399dcfc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399DCFC;
	// bdnz 0x8399dcfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399DCFC;
loc_8399DCF4:
	// stb r27,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r27.u8);
	// stb r27,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r27.u8);
loc_8399DCFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399DD04"))) PPC_WEAK_FUNC(sub_8399DD04);
PPC_FUNC_IMPL(__imp__sub_8399DD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399DD08"))) PPC_WEAK_FUNC(sub_8399DD08);
PPC_FUNC_IMPL(__imp__sub_8399DD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8399DD10;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r10,23980
	ctx.r31.s64 = ctx.r10.s64 + 23980;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8399DD40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r26,48(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// bl 0x83815d38
	ctx.lr = 0x8399DD58;
	sub_83815D38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815b28
	ctx.lr = 0x8399DD64;
	sub_83815B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815bc8
	ctx.lr = 0x8399DD74;
	sub_83815BC8(ctx, base);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// li r29,6
	ctx.r29.s64 = 6;
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_8399DDA8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x8399DDB4;
	sub_83815B68(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// bne 0x8399dda8
	if (!cr0.eq) goto loc_8399DDA8;
	// bl 0x8399f8b8
	ctx.lr = 0x8399DDC4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399ddd4
	if (!cr6.eq) goto loc_8399DDD4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8399de1c
	goto loc_8399DE1C;
loc_8399DDD4:
	// bl 0x8399f8b8
	ctx.lr = 0x8399DDD8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f6e8
	ctx.lr = 0x8399DDF0;
	sub_8399F6E8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x8399de18
	if (!cr6.eq) goto loc_8399DE18;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8399de10
	if (cr6.eq) goto loc_8399DE10;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x8399de18
	if (!cr6.eq) goto loc_8399DE18;
loc_8399DE10:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8399de1c
	goto loc_8399DE1C;
loc_8399DE18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8399DE1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399dee8
	if (cr6.eq) goto loc_8399DEE8;
	// bl 0x8399f8b8
	ctx.lr = 0x8399DE2C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8399f6e8
	ctx.lr = 0x8399DE44;
	sub_8399F6E8(ctx, base);
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8399f8b8
	ctx.lr = 0x8399DE4C;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x8399DE54;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x8399DE6C;
	sub_8399EA10(ctx, base);
	// mulli r11,r29,528
	ctx.r11.s64 = ctx.r29.s64 * 528;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x8399DE84;
	sub_839A0478(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// lfs f31,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f31.f64 = double(temp.f32);
loc_8399DE90:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832d8
	ctx.lr = 0x8399DE98;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399ded8
	if (cr6.eq) goto loc_8399DED8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8315ecb0
	ctx.lr = 0x8399DEB0;
	sub_8315ECB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x83815be8
	ctx.lr = 0x8399DED8;
	sub_83815BE8(ctx, base);
loc_8399DED8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x8399de90
	if (cr6.lt) goto loc_8399DE90;
loc_8399DEE8:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838153c8
	ctx.lr = 0x8399DEF4;
	sub_838153C8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815cb8
	ctx.lr = 0x8399DEFC;
	sub_83815CB8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399DF08"))) PPC_WEAK_FUNC(sub_8399DF08);
PPC_FUNC_IMPL(__imp__sub_8399DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8399DF10;
	__savegprlr_23(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r26,r11,24360
	ctx.r26.s64 = ctx.r11.s64 + 24360;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8399DF44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399e240
	if (cr6.eq) goto loc_8399E240;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8399DF5C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r26,-64
	ctx.r4.s64 = ctx.r26.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399DF74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399e240
	if (cr6.eq) goto loc_8399E240;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8399DF8C;
	sub_82D2AEC8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r25,255
	cr6.compare<int32_t>(ctx.r25.s32, 255, xer);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// beq cr6,0x8399e240
	if (cr6.eq) goto loc_8399E240;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// beq cr6,0x8399e240
	if (cr6.eq) goto loc_8399E240;
	// bl 0x8399f8b8
	ctx.lr = 0x8399DFA8;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x8399DFB0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r27,532
	ctx.r11.s64 = ctx.r27.s64 * 532;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x8399DFC8;
	sub_8399EA10(ctx, base);
	// mulli r11,r27,528
	ctx.r11.s64 = ctx.r27.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x8399DFE0;
	sub_839A0478(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825832e0
	ctx.lr = 0x8399DFE8;
	sub_825832E0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8399e234
	if (cr6.gt) goto loc_8399E234;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8399e064
	if (cr6.eq) goto loc_8399E064;
	// bdz 0x8399e234
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399E234;
	// bdz 0x8399e234
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399E234;
	// bdz 0x8399e0f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399E0F4;
	// bdz 0x8399e0f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399E0F4;
	// bdz 0x8399e234
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8399E234;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-52
	ctx.r4.s64 = ctx.r26.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E038;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E048;
	sub_82D2AEC8(ctx, base);
	// lis r4,66
	ctx.r4.s64 = 4325376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,75
	ctx.r4.u64 = ctx.r4.u64 | 75;
	// bl 0x82d29598
	ctx.lr = 0x8399E058;
	sub_82D29598(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8399E064:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E078;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d526b8
	ctx.lr = 0x8399E084;
	sub_82D526B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E0A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E0B0;
	sub_82D2AEC8(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r24,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r24.u8);
	// bl 0x839a9f50
	ctx.lr = 0x8399E0CC;
	sub_839A9F50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8399E0E0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E0E8;
	sub_8387E8E0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8399E0F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E124;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E134;
	sub_82D2AEC8(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// beq cr6,0x8399e148
	if (cr6.eq) goto loc_8399E148;
	// li r4,5
	ctx.r4.s64 = 5;
loc_8399E148:
	// bl 0x82d526b8
	ctx.lr = 0x8399E14C;
	sub_82D526B8(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// lis r4,63
	ctx.r4.s64 = 4128768;
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// bl 0x82d042a8
	ctx.lr = 0x8399E16C;
	sub_82D042A8(ctx, base);
	// bl 0x839a9af8
	ctx.lr = 0x8399E170;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399e22c
	if (!cr6.eq) goto loc_8399E22C;
	// bl 0x831156e8
	ctx.lr = 0x8399E180;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x8399E190;
	sub_83126788(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// bl 0x8399f3d0
	ctx.lr = 0x8399E1AC;
	sub_8399F3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831533a0
	ctx.lr = 0x8399E1B8;
	sub_831533A0(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x8399E1CC;
	sub_82D042A8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82ab6970
	ctx.lr = 0x8399E1DC;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82ac8718
	ctx.lr = 0x8399E1EC;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292a3f8
	ctx.lr = 0x8399E1F8;
	sub_8292A3F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8399E20C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E214;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E21C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E224;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E22C;
	sub_8387E8E0(ctx, base);
loc_8399E22C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E234;
	sub_8387E8E0(ctx, base);
loc_8399E234:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8399E240:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399E24C"))) PPC_WEAK_FUNC(sub_8399E24C);
PPC_FUNC_IMPL(__imp__sub_8399E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399E250"))) PPC_WEAK_FUNC(sub_8399E250);
PPC_FUNC_IMPL(__imp__sub_8399E250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8399E258;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399e994
	if (cr6.eq) goto loc_8399E994;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,23800
	ctx.r9.s64 = ctx.r11.s64 + 23800;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d2e228
	ctx.lr = 0x8399E28C;
	sub_82D2E228(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r30,r11,24268
	ctx.r30.s64 = ctx.r11.s64 + 24268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r4,r30,-244
	ctx.r4.s64 = ctx.r30.s64 + -244;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8399E2B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,100(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-228
	ctx.r4.s64 = ctx.r30.s64 + -228;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8399E2D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-216
	ctx.r4.s64 = ctx.r30.s64 + -216;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E2EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8399E308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lis r6,-31768
	ctx.r6.s64 = -2081947648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,23660(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23660);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8399E32C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E34C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399e374
	if (!cr6.eq) goto loc_8399E374;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_8399E374:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x839a9ec0
	ctx.lr = 0x8399E37C;
	sub_839A9EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399e3a8
	if (cr6.eq) goto loc_8399E3A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x8399E394;
	sub_8337F1E0(ctx, base);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x8399e3a8
	if (cr6.eq) goto loc_8399E3A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x8399E3A8;
	sub_8337F1E0(ctx, base);
loc_8399E3A8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E3B8;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E3C8;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E3D8;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E3E8;
	sub_82D2AEC8(ctx, base);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x8399e400
	if (cr6.eq) goto loc_8399E400;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E400;
	sub_82D2AEC8(ctx, base);
loc_8399E400:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E410;
	sub_82D2AEC8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8399dd08
	ctx.lr = 0x8399E420;
	sub_8399DD08(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8399d9e8
	ctx.lr = 0x8399E42C;
	sub_8399D9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x8399e98c
	if (cr6.eq) goto loc_8399E98C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E448;
	sub_82D2AEC8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x8399E44C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r21,460
	ctx.r11.s64 = ctx.r21.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399f6e8
	ctx.lr = 0x8399E464;
	sub_8399F6E8(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r24,144(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8399f8b8
	ctx.lr = 0x8399E470;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x8399E480;
	sub_8399F8B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mulli r26,r29,528
	ctx.r26.s64 = ctx.r29.s64 * 528;
	// bl 0x8399ea10
	ctx.lr = 0x8399E494;
	sub_8399EA10(ctx, base);
	// add r11,r27,r26
	ctx.r11.u64 = ctx.r27.u64 + ctx.r26.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x839a0478
	ctx.lr = 0x8399E4A8;
	sub_839A0478(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8399E4C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r30,-148
	ctx.r4.s64 = ctx.r30.s64 + -148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8399E4DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f3d0
	ctx.lr = 0x8399E4EC;
	sub_8399F3D0(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d457e8
	ctx.lr = 0x8399E500;
	sub_82D457E8(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// li r15,15
	ctx.r15.s64 = 15;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r15,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r19,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r19.u8);
	// bl 0x8399ea10
	ctx.lr = 0x8399E520;
	sub_8399EA10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x839ab078
	ctx.lr = 0x8399E534;
	sub_839AB078(ctx, base);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// bge cr6,0x8399e548
	if (!cr6.lt) goto loc_8399E548;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_8399E548:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x8399E550;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8399E564;
	sub_82D291E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E56C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E574;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E58C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399e674
	if (cr6.eq) goto loc_8399E674;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ea10
	ctx.lr = 0x8399E5A4;
	sub_8399EA10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399da70
	ctx.lr = 0x8399E5B8;
	sub_8399DA70(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r27,81(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8399e66c
	if (cr6.eq) goto loc_8399E66C;
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// bctrl 
	ctx.lr = 0x8399E5E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x8399E5E4;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ea10
	ctx.lr = 0x8399E5F4;
	sub_8399EA10(ctx, base);
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x8399E608;
	sub_839A0478(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a47de0
	ctx.lr = 0x8399E610;
	sub_82A47DE0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8399e628
	if (!cr6.eq) goto loc_8399E628;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_8399E628:
	// stw r15,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r15.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r19,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r19.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r19,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r19.u8);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82d042a8
	ctx.lr = 0x8399E64C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8399E660;
	sub_82D291E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E668;
	sub_8387E8E0(ctx, base);
	// b 0x8399e674
	goto loc_8399E674;
loc_8399E66C:
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// bctrl 
	ctx.lr = 0x8399E674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8399E674:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r21,r29
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r29.s32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8399e698
	if (cr6.eq) goto loc_8399E698;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
loc_8399E698:
	// bctrl 
	ctx.lr = 0x8399E69C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8399E6B4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399e760
	if (cr6.eq) goto loc_8399E760;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// bl 0x83815d38
	ctx.lr = 0x8399E6C4;
	sub_83815D38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399e760
	if (cr6.eq) goto loc_8399E760;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x83815b28
	ctx.lr = 0x8399E6D8;
	sub_83815B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x8399E6EC;
	sub_83815B68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8399f498
	ctx.lr = 0x8399E6F8;
	sub_8399F498(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r28,48(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// beq cr6,0x8399e750
	if (cr6.eq) goto loc_8399E750;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83815bc8
	ctx.lr = 0x8399E734;
	sub_83815BC8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815be8
	ctx.lr = 0x8399E744;
	sub_83815BE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838153c8
	ctx.lr = 0x8399E750;
	sub_838153C8(ctx, base);
loc_8399E750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83815cb8
	ctx.lr = 0x8399E758;
	sub_83815CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8399E760;
	sub_82416268(ctx, base);
loc_8399E760:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8399df08
	ctx.lr = 0x8399E770;
	sub_8399DF08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399e994
	if (!cr6.eq) goto loc_8399E994;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f0f0
	ctx.lr = 0x8399E7A8;
	sub_8399F0F0(ctx, base);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// bge cr6,0x8399e7d0
	if (!cr6.lt) goto loc_8399E7D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d39310
	ctx.lr = 0x8399E7C0;
	sub_82D39310(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E7D0;
	sub_82D2AEC8(ctx, base);
loc_8399E7D0:
	// clrldi r4,r26,32
	ctx.r4.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d294d0
	ctx.lr = 0x8399E7DC;
	sub_82D294D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E7EC;
	sub_82D2AEC8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x8399E7F0;
	sub_8399F8B8(ctx, base);
	// mulli r31,r29,460
	ctx.r31.s64 = ctx.r29.s64 * 460;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8399f6e8
	ctx.lr = 0x8399E808;
	sub_8399F6E8(ctx, base);
	// lwz r28,240(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x8399f8b8
	ctx.lr = 0x8399E810;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f6e8
	ctx.lr = 0x8399E824;
	sub_8399F6E8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r31,13
	ctx.r31.s64 = 13;
	// li r27,255
	ctx.r27.s64 = 255;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x8399e840
	if (!cr6.lt) goto loc_8399E840;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x8399e88c
	if (!cr6.eq) goto loc_8399E88C;
loc_8399E840:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x8399e88c
	if (cr6.eq) goto loc_8399E88C;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bne cr6,0x8399e864
	if (!cr6.eq) goto loc_8399E864;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x8399e88c
	if (cr6.eq) goto loc_8399E88C;
loc_8399E864:
	// lbz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x8399e888
	if (cr6.eq) goto loc_8399E888;
	// lbz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8399e888
	if (cr6.eq) goto loc_8399E888;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x8399e88c
	if (cr6.eq) goto loc_8399E88C;
loc_8399E888:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8399E88C:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E89C;
	sub_82D2AEC8(ctx, base);
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// bge cr6,0x8399e91c
	if (!cr6.lt) goto loc_8399E91C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d39310
	ctx.lr = 0x8399E8B0;
	sub_82D39310(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E8C0;
	sub_82D2AEC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8399f0f0
	ctx.lr = 0x8399E8CC;
	sub_8399F0F0(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x8399e91c
	if (cr6.eq) goto loc_8399E91C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E8E8;
	sub_82D2AEC8(ctx, base);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x8399e8f8
	if (!cr6.gt) goto loc_8399E8F8;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// b 0x8399e904
	goto loc_8399E904;
loc_8399E8F8:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// blt cr6,0x8399e904
	if (cr6.lt) goto loc_8399E904;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8399E904:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399E91C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8399E91C:
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r19,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r19.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r19,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r19.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x8399E938;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r27,255
	cr6.compare<uint32_t>(ctx.r27.u32, 255, xer);
	// bne cr6,0x8399e950
	if (!cr6.eq) goto loc_8399E950;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,61
	ctx.r4.u64 = ctx.r4.u64 | 61;
	// bl 0x82d042a8
	ctx.lr = 0x8399E950;
	sub_82D042A8(ctx, base);
loc_8399E950:
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82d291e0
	ctx.lr = 0x8399E968;
	sub_82D291E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E978;
	sub_82D2AEC8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8399E980;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8399E98C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8399E994;
	sub_82D2AEC8(ctx, base);
loc_8399E994:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399E9A0"))) PPC_WEAK_FUNC(sub_8399E9A0);
PPC_FUNC_IMPL(__imp__sub_8399E9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,484(r11)
	PPC_STORE_U8(ctx.r11.u32 + 484, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399E9B4"))) PPC_WEAK_FUNC(sub_8399E9B4);
PPC_FUNC_IMPL(__imp__sub_8399E9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399E9B8"))) PPC_WEAK_FUNC(sub_8399E9B8);
PPC_FUNC_IMPL(__imp__sub_8399E9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x8399e9cc
	if (!cr6.lt) goto loc_8399E9CC;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// b 0x8399e9d0
	goto loc_8399E9D0;
loc_8399E9CC:
	// li r10,255
	ctx.r10.s64 = 255;
loc_8399E9D0:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x8399e9e4
	if (!cr6.lt) goto loc_8399E9E4;
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// b 0x8399e9e8
	goto loc_8399E9E8;
loc_8399E9E4:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8399E9E8:
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x8399e9f8
	if (!cr6.lt) goto loc_8399E9F8;
	// add r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r11,484(r9)
	PPC_STORE_U8(ctx.r9.u32 + 484, ctx.r11.u8);
loc_8399E9F8:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stb r10,484(r11)
	PPC_STORE_U8(ctx.r11.u32 + 484, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EA0C"))) PPC_WEAK_FUNC(sub_8399EA0C);
PPC_FUNC_IMPL(__imp__sub_8399EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EA10"))) PPC_WEAK_FUNC(sub_8399EA10);
PPC_FUNC_IMPL(__imp__sub_8399EA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x8399ea24
	if (!cr6.lt) goto loc_8399EA24;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,484(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// blr 
	return;
loc_8399EA24:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

