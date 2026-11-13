#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A32690"))) PPC_WEAK_FUNC(sub_82A32690);
PPC_FUNC_IMPL(__imp__sub_82A32690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A32694:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a326a4
	if (cr6.lt) goto loc_82A326A4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A326A4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a326cc
	if (!cr6.eq) goto loc_82A326CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a32694
	if (cr6.lt) goto loc_82A32694;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A326CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A326D4"))) PPC_WEAK_FUNC(sub_82A326D4);
PPC_FUNC_IMPL(__imp__sub_82A326D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A326D8"))) PPC_WEAK_FUNC(sub_82A326D8);
PPC_FUNC_IMPL(__imp__sub_82A326D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A326E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82A326EC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82a326fc
	if (cr6.lt) goto loc_82A326FC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A326FC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82a32714
	if (cr6.lt) goto loc_82A32714;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A32714:
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// addi r29,r31,2688
	ctx.r29.s64 = ctx.r31.s64 + 2688;
	// bl 0x82a47d40
	ctx.lr = 0x82A3272C;
	sub_82A47D40(ctx, base);
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r26,2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2688, ctx.r26.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r3.u32);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// stw r7,2740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2740, ctx.r7.u32);
	// stw r6,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r6.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82A32758:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a32770
	if (cr6.lt) goto loc_82A32770;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a32770
	if (!cr6.lt) goto loc_82A32770;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82A32770:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a32758
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A32758;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82a326ec
	if (cr6.lt) goto loc_82A326EC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32794"))) PPC_WEAK_FUNC(sub_82A32794);
PPC_FUNC_IMPL(__imp__sub_82A32794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A32798"))) PPC_WEAK_FUNC(sub_82A32798);
PPC_FUNC_IMPL(__imp__sub_82A32798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A327A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82A327B8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82a327c8
	if (cr6.lt) goto loc_82A327C8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A327C8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bne cr6,0x82a327e8
	if (!cr6.eq) goto loc_82A327E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a327f0
	goto loc_82A327F0;
loc_82A327E8:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A327F0:
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// bge cr6,0x82a3284c
	if (!cr6.lt) goto loc_82A3284C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a32808
	if (cr6.eq) goto loc_82A32808;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a3284c
	if (!cr6.eq) goto loc_82A3284C;
loc_82A32808:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3284c
	if (!cr6.eq) goto loc_82A3284C;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82a47d40
	ctx.lr = 0x82A3281C;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a3284c
	if (!cr6.eq) goto loc_82A3284C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a32838
	if (cr6.eq) goto loc_82A32838;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
loc_82A32838:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// slw r11,r26,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82A3284C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82a327b8
	if (cr6.lt) goto loc_82A327B8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32860"))) PPC_WEAK_FUNC(sub_82A32860);
PPC_FUNC_IMPL(__imp__sub_82A32860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A32868;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a32a38
	if (cr6.eq) goto loc_82A32A38;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82A3288C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x82a3289c
	if (cr6.lt) goto loc_82A3289C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A3289C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x82a328b4
	if (cr6.lt) goto loc_82A328B4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A328B4:
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a328d0
	if (!cr6.eq) goto loc_82A328D0;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82a328d8
	goto loc_82A328D8;
loc_82A328D0:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A328D8:
	// lwz r30,2688(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2688);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a328f0
	if (cr6.lt) goto loc_82A328F0;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// blt cr6,0x82a328f4
	if (cr6.lt) goto loc_82A328F4;
loc_82A328F0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A328F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32a2c
	if (cr6.eq) goto loc_82A32A2C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82a32910
	if (!cr6.lt) goto loc_82A32910;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82a32938
	goto loc_82A32938;
loc_82A32910:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a32920
	if (!cr6.lt) goto loc_82A32920;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82a32938
	goto loc_82A32938;
loc_82A32920:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r8,r11,r30
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
loc_82A32938:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// blt cr6,0x82a32954
	if (cr6.lt) goto loc_82A32954;
	// lbz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a32958
	if (cr6.eq) goto loc_82A32958;
loc_82A32954:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A32958:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32a2c
	if (cr6.eq) goto loc_82A32A2C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a32978
	if (cr6.lt) goto loc_82A32978;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// blt cr6,0x82a3297c
	if (cr6.lt) goto loc_82A3297C;
loc_82A32978:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A3297C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3299c
	if (cr6.eq) goto loc_82A3299C;
	// add r11,r30,r23
	ctx.r11.u64 = ctx.r30.u64 + ctx.r23.u64;
	// lbz r8,5768(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a329a0
	goto loc_82A329A0;
loc_82A3299C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A329A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a32a2c
	if (!cr6.eq) goto loc_82A32A2C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a329bc
	if (cr6.eq) goto loc_82A329BC;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82a32a2c
	if (!cr6.eq) goto loc_82A32A2C;
loc_82A329BC:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a32a2c
	if (!cr6.eq) goto loc_82A32A2C;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a32a2c
	if (!cr6.eq) goto loc_82A32A2C;
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A329DC;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a32a2c
	if (cr6.eq) goto loc_82A32A2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A329EC;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82a32a2c
	if (cr6.eq) goto loc_82A32A2C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// sraw r10,r11,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a32a2c
	if (!cr6.eq) goto loc_82A32A2C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a32a1c
	if (cr6.eq) goto loc_82A32A1C;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r26,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r26.u32);
loc_82A32A1C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// slw r10,r25,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r30.u8 & 0x3F));
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
loc_82A32A2C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x82a3288c
	if (cr6.lt) goto loc_82A3288C;
loc_82A32A38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32A40"))) PPC_WEAK_FUNC(sub_82A32A40);
PPC_FUNC_IMPL(__imp__sub_82A32A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A32A48;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a32ea8
	if (cr6.eq) goto loc_82A32EA8;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82A32A74:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r22,24
	cr6.compare<uint32_t>(ctx.r22.u32, 24, xer);
	// blt cr6,0x82a32a84
	if (cr6.lt) goto loc_82A32A84;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A32A84:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lbzx r11,r11,r21
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a32aa0
	if (!cr6.eq) goto loc_82A32AA0;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82a32aa8
	goto loc_82A32AA8;
loc_82A32AA0:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A32AA8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x82a32e9c
	if (!cr6.eq) goto loc_82A32E9C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a32ad0
	if (cr6.lt) goto loc_82A32AD0;
	// lbz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a32ad4
	if (cr6.eq) goto loc_82A32AD4;
loc_82A32AD0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A32AD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32e9c
	if (cr6.eq) goto loc_82A32E9C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x82a32af0
	if (cr6.eq) goto loc_82A32AF0;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82a32e9c
	if (!cr6.eq) goto loc_82A32E9C;
loc_82A32AF0:
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a32e9c
	if (!cr6.eq) goto loc_82A32E9C;
	// addi r31,r27,64
	ctx.r31.s64 = ctx.r27.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A32B08;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a32e9c
	if (cr6.eq) goto loc_82A32E9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A32B18;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82a32e9c
	if (cr6.eq) goto loc_82A32E9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A32B30;
	sub_82A2B4E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a32b4c
	if (cr6.lt) goto loc_82A32B4C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32b50
	if (cr6.lt) goto loc_82A32B50;
loc_82A32B4C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32bfc
	if (cr6.eq) goto loc_82A32BFC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a32b70
	if (cr6.lt) goto loc_82A32B70;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32b74
	if (cr6.lt) goto loc_82A32B74;
loc_82A32B70:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32B74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32b94
	if (cr6.eq) goto loc_82A32B94;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r9,5768(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a32b98
	goto loc_82A32B98;
loc_82A32B94:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32B98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32bfc
	if (cr6.eq) goto loc_82A32BFC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a32bb4
	if (!cr6.lt) goto loc_82A32BB4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a32bdc
	goto loc_82A32BDC;
loc_82A32BB4:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a32bc4
	if (!cr6.lt) goto loc_82A32BC4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a32bdc
	goto loc_82A32BDC;
loc_82A32BC4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r8,r11,r31
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A32BDC:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a32bfc
	if (!cr6.eq) goto loc_82A32BFC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// sraw r9,r11,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82a32bfc
	if (!cr6.eq) goto loc_82A32BFC;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82A32BFC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a32dd4
	if (!cr6.eq) goto loc_82A32DD4;
	// lwz r11,4460(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a32cdc
	if (cr6.eq) goto loc_82A32CDC;
	// ble cr6,0x82a32dd4
	if (!cr6.gt) goto loc_82A32DD4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgt cr6,0x82a32dd4
	if (cr6.gt) goto loc_82A32DD4;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r9,r26,5756
	ctx.r9.s64 = ctx.r26.s64 + 5756;
loc_82A32C28:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a32c40
	if (cr6.lt) goto loc_82A32C40;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32c44
	if (cr6.lt) goto loc_82A32C44;
loc_82A32C40:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32C44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32c64
	if (cr6.eq) goto loc_82A32C64;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r7,5768(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a32c68
	goto loc_82A32C68;
loc_82A32C64:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32C68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32cc8
	if (cr6.eq) goto loc_82A32CC8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a32c84
	if (!cr6.lt) goto loc_82A32C84;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a32cac
	goto loc_82A32CAC;
loc_82A32C84:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82a32c94
	if (!cr6.lt) goto loc_82A32C94;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a32cac
	goto loc_82A32CAC;
loc_82A32C94:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r6,r11,r10
	ctx.r6.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
loc_82A32CAC:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a32cc8
	if (!cr6.eq) goto loc_82A32CC8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// sraw r7,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r7.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82a32dd0
	if (cr6.eq) goto loc_82A32DD0;
loc_82A32CC8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// blt cr6,0x82a32c28
	if (cr6.lt) goto loc_82A32C28;
	// b 0x82a32dd4
	goto loc_82A32DD4;
loc_82A32CDC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a32cf0
	if (cr6.lt) goto loc_82A32CF0;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32cf4
	if (cr6.lt) goto loc_82A32CF4;
loc_82A32CF0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32CF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a32dd4
	if (!cr6.eq) goto loc_82A32DD4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A32D0C;
	sub_82A0C710(ctx, base);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a32d24
	if (cr6.lt) goto loc_82A32D24;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32d28
	if (cr6.lt) goto loc_82A32D28;
loc_82A32D24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32D28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32dd4
	if (cr6.eq) goto loc_82A32DD4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a32d48
	if (cr6.lt) goto loc_82A32D48;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32d4c
	if (cr6.lt) goto loc_82A32D4C;
loc_82A32D48:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32D4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32d6c
	if (cr6.eq) goto loc_82A32D6C;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r9,5768(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a32d70
	goto loc_82A32D70;
loc_82A32D6C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32D70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32dd4
	if (cr6.eq) goto loc_82A32DD4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a32d8c
	if (!cr6.lt) goto loc_82A32D8C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a32db4
	goto loc_82A32DB4;
loc_82A32D8C:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82a32d9c
	if (!cr6.lt) goto loc_82A32D9C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a32db4
	goto loc_82A32DB4;
loc_82A32D9C:
	// li r11,22
	ctx.r11.s64 = 22;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A32DB4:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a32dd4
	if (!cr6.eq) goto loc_82A32DD4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// sraw r9,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82a32dd4
	if (!cr6.eq) goto loc_82A32DD4;
loc_82A32DD0:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82A32DD4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a32e78
	if (!cr6.eq) goto loc_82A32E78;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,10
	ctx.r9.s64 = 10;
	// mulli r7,r29,11
	ctx.r7.s64 = ctx.r29.s64 * 11;
loc_82A32DEC:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// sraw r11,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82a32e6c
	if (!cr6.eq) goto loc_82A32E6C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a32e14
	if (cr6.lt) goto loc_82A32E14;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32e18
	if (cr6.lt) goto loc_82A32E18;
loc_82A32E14:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32E18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32e6c
	if (cr6.eq) goto loc_82A32E6C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a32e38
	if (cr6.lt) goto loc_82A32E38;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82a32e3c
	if (cr6.lt) goto loc_82A32E3C;
loc_82A32E38:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32E3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32e5c
	if (cr6.eq) goto loc_82A32E5C;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r6,5768(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a32e60
	goto loc_82A32E60;
loc_82A32E5C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A32E60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a32e78
	if (cr6.eq) goto loc_82A32E78;
loc_82A32E6C:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82a32dec
	if (!cr0.lt) goto loc_82A32DEC;
	// b 0x82a32e9c
	goto loc_82A32E9C;
loc_82A32E78:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82a32e8c
	if (cr6.eq) goto loc_82A32E8C;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// stw r28,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r28.u32);
loc_82A32E8C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// slw r10,r24,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_82A32E9C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,24
	cr6.compare<uint32_t>(ctx.r22.u32, 24, xer);
	// blt cr6,0x82a32a74
	if (cr6.lt) goto loc_82A32A74;
loc_82A32EA8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A32EB0"))) PPC_WEAK_FUNC(sub_82A32EB0);
PPC_FUNC_IMPL(__imp__sub_82A32EB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4128(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32EB8"))) PPC_WEAK_FUNC(sub_82A32EB8);
PPC_FUNC_IMPL(__imp__sub_82A32EB8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4128, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32EC0"))) PPC_WEAK_FUNC(sub_82A32EC0);
PPC_FUNC_IMPL(__imp__sub_82A32EC0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x82A32EE0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A32EE4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82a32f34
	if (cr6.eq) goto loc_82A32F34;
	// bl 0x830ff290
	ctx.lr = 0x82A32EF0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A32EF4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// beq cr6,0x82a32f34
	if (cr6.eq) goto loc_82A32F34;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A32F00:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a32f14
	if (!cr6.eq) goto loc_82A32F14;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a32f1c
	goto loc_82A32F1C;
loc_82A32F14:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A32F1C:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a32f50
	if (cr6.eq) goto loc_82A32F50;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a32f00
	if (cr6.lt) goto loc_82A32F00;
loc_82A32F34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A32F38:
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
loc_82A32F50:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a32f38
	goto loc_82A32F38;
}

__attribute__((alias("__imp__sub_82A32F58"))) PPC_WEAK_FUNC(sub_82A32F58);
PPC_FUNC_IMPL(__imp__sub_82A32F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a32f68
	if (cr6.eq) goto loc_82A32F68;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82a32fe0
	if (!cr6.eq) goto loc_82A32FE0;
loc_82A32F68:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A32F6C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a32f7c
	if (cr6.lt) goto loc_82A32F7C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A32F7C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// blt cr6,0x82a32fa0
	if (cr6.lt) goto loc_82A32FA0;
	// lbz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a32fa4
	if (cr6.eq) goto loc_82A32FA4;
loc_82A32FA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A32FA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a32fd4
	if (cr6.eq) goto loc_82A32FD4;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a32fc4
	if (!cr6.eq) goto loc_82A32FC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a32fcc
	goto loc_82A32FCC;
loc_82A32FC4:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A32FCC:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a32fe8
	if (cr6.eq) goto loc_82A32FE8;
loc_82A32FD4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a32f6c
	if (cr6.lt) goto loc_82A32F6C;
loc_82A32FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A32FE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A32FF0"))) PPC_WEAK_FUNC(sub_82A32FF0);
PPC_FUNC_IMPL(__imp__sub_82A32FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f13,19084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19084);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82a3301c
	if (cr6.eq) goto loc_82A3301C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12892);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
loc_82A3301C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,12892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12892);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3302C"))) PPC_WEAK_FUNC(sub_82A3302C);
PPC_FUNC_IMPL(__imp__sub_82A3302C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33030"))) PPC_WEAK_FUNC(sub_82A33030);
PPC_FUNC_IMPL(__imp__sub_82A33030) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1058
	ctx.r11.s64 = ctx.r4.s64 + 1058;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A33040"))) PPC_WEAK_FUNC(sub_82A33040);
PPC_FUNC_IMPL(__imp__sub_82A33040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,1058
	ctx.r11.s64 = ctx.r4.s64 + 1058;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// blt cr6,0x82a33068
	if (cr6.lt) goto loc_82A33068;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33068:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x82a47d40
	sub_82A47D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33078"))) PPC_WEAK_FUNC(sub_82A33078);
PPC_FUNC_IMPL(__imp__sub_82A33078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3307C"))) PPC_WEAK_FUNC(sub_82A3307C);
PPC_FUNC_IMPL(__imp__sub_82A3307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33080"))) PPC_WEAK_FUNC(sub_82A33080);
PPC_FUNC_IMPL(__imp__sub_82A33080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,1058
	ctx.r11.s64 = ctx.r4.s64 + 1058;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A33098"))) PPC_WEAK_FUNC(sub_82A33098);
PPC_FUNC_IMPL(__imp__sub_82A33098) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4129, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A330A0"))) PPC_WEAK_FUNC(sub_82A330A0);
PPC_FUNC_IMPL(__imp__sub_82A330A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4129(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4129);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A330A8"))) PPC_WEAK_FUNC(sub_82A330A8);
PPC_FUNC_IMPL(__imp__sub_82A330A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r4,1033
	ctx.r11.s64 = ctx.r4.s64 + 1033;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A330D0"))) PPC_WEAK_FUNC(sub_82A330D0);
PPC_FUNC_IMPL(__imp__sub_82A330D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a330f0
	if (cr6.lt) goto loc_82A330F0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bge cr6,0x82a330f0
	if (!cr6.lt) goto loc_82A330F0;
	// addi r11,r4,1033
	ctx.r11.s64 = ctx.r4.s64 + 1033;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A330F0:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A330F8"))) PPC_WEAK_FUNC(sub_82A330F8);
PPC_FUNC_IMPL(__imp__sub_82A330F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82A3310C:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a3311c
	if (cr6.lt) goto loc_82A3311C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A3311C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33190
	if (cr6.eq) goto loc_82A33190;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82a33190
	if (cr6.eq) goto loc_82A33190;
	// addic r4,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82a33160
	if (!cr0.eq) goto loc_82A33160;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a33190
	if (!cr6.eq) goto loc_82A33190;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// b 0x82a33194
	goto loc_82A33194;
loc_82A33160:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a33190
	if (!cr6.eq) goto loc_82A33190;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33180
	if (cr6.eq) goto loc_82A33180;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a33198
	goto loc_82A33198;
loc_82A33180:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a33198
	goto loc_82A33198;
loc_82A33190:
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
loc_82A33194:
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_82A33198:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a331a8
	if (cr6.lt) goto loc_82A331A8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A331A8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3321c
	if (cr6.eq) goto loc_82A3321C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82a3321c
	if (cr6.eq) goto loc_82A3321C;
	// addic r4,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82a331ec
	if (!cr0.eq) goto loc_82A331EC;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a3321c
	if (!cr6.eq) goto loc_82A3321C;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// b 0x82a33220
	goto loc_82A33220;
loc_82A331EC:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a3321c
	if (!cr6.eq) goto loc_82A3321C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3320c
	if (cr6.eq) goto loc_82A3320C;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a33224
	goto loc_82A33224;
loc_82A3320C:
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a33224
	goto loc_82A33224;
loc_82A3321C:
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
loc_82A33220:
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_82A33224:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x82a33234
	if (cr6.lt) goto loc_82A33234;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33234:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a332a8
	if (cr6.eq) goto loc_82A332A8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82a332a8
	if (cr6.eq) goto loc_82A332A8;
	// addic r4,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82a33278
	if (!cr0.eq) goto loc_82A33278;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a332a8
	if (!cr6.eq) goto loc_82A332A8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// b 0x82a332ac
	goto loc_82A332AC;
loc_82A33278:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a332a8
	if (!cr6.eq) goto loc_82A332A8;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33298
	if (cr6.eq) goto loc_82A33298;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a332b0
	goto loc_82A332B0;
loc_82A33298:
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a332b0
	goto loc_82A332B0;
loc_82A332A8:
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
loc_82A332AC:
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_82A332B0:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a332c0
	if (cr6.lt) goto loc_82A332C0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A332C0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33334
	if (cr6.eq) goto loc_82A33334;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82a33334
	if (cr6.eq) goto loc_82A33334;
	// addic r4,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82a33304
	if (!cr0.eq) goto loc_82A33304;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a33334
	if (!cr6.eq) goto loc_82A33334;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// b 0x82a33338
	goto loc_82A33338;
loc_82A33304:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a33334
	if (!cr6.eq) goto loc_82A33334;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33324
	if (cr6.eq) goto loc_82A33324;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a3333c
	goto loc_82A3333C;
loc_82A33324:
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// b 0x82a3333c
	goto loc_82A3333C;
loc_82A33334:
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
loc_82A33338:
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_82A3333C:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a3310c
	if (cr6.lt) goto loc_82A3310C;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a333a0
	if (!cr6.eq) goto loc_82A333A0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A3335C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a3336c
	if (cr6.lt) goto loc_82A3336C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A3336C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a3338c
	if (cr6.eq) goto loc_82A3338C;
	// lbz r8,93(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a3339c
	if (cr6.eq) goto loc_82A3339C;
loc_82A3338C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a3335c
	if (cr6.lt) goto loc_82A3335C;
	// b 0x82a333a0
	goto loc_82A333A0;
loc_82A3339C:
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
loc_82A333A0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A333B0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a333c0
	if (cr6.lt) goto loc_82A333C0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A333C0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a333e0
	if (cr6.eq) goto loc_82A333E0;
	// lbz r9,93(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a333f0
	if (cr6.eq) goto loc_82A333F0;
loc_82A333E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a333b0
	if (cr6.lt) goto loc_82A333B0;
	// blr 
	return;
loc_82A333F0:
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A333F8"))) PPC_WEAK_FUNC(sub_82A333F8);
PPC_FUNC_IMPL(__imp__sub_82A333F8) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82a47fd0
	ctx.lr = 0x82A33414;
	sub_82A47FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82A33424;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32270
	ctx.lr = 0x82A3342C;
	sub_82A32270(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r11,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82A33464"))) PPC_WEAK_FUNC(sub_82A33464);
PPC_FUNC_IMPL(__imp__sub_82A33464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33468"))) PPC_WEAK_FUNC(sub_82A33468);
PPC_FUNC_IMPL(__imp__sub_82A33468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// stb r11,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A33494"))) PPC_WEAK_FUNC(sub_82A33494);
PPC_FUNC_IMPL(__imp__sub_82A33494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33498"))) PPC_WEAK_FUNC(sub_82A33498);
PPC_FUNC_IMPL(__imp__sub_82A33498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A334A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a334c8
	if (cr6.lt) goto loc_82A334C8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a334cc
	if (cr6.lt) goto loc_82A334CC;
loc_82A334C8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A334CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33554
	if (cr6.eq) goto loc_82A33554;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a33554
	if (!cr6.eq) goto loc_82A33554;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82a47d40
	ctx.lr = 0x82A334EC;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a33500
	if (!cr6.eq) goto loc_82A33500;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x82a33554
	if (!cr6.eq) goto loc_82A33554;
	// b 0x82a33508
	goto loc_82A33508;
loc_82A33500:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x82a33554
	if (cr6.eq) goto loc_82A33554;
loc_82A33508:
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
loc_82A3352C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33544
	if (cr6.lt) goto loc_82A33544;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a33544
	if (!cr6.lt) goto loc_82A33544;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82A33544:
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a3352c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3352C;
loc_82A33554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3355C"))) PPC_WEAK_FUNC(sub_82A3355C);
PPC_FUNC_IMPL(__imp__sub_82A3355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33560"))) PPC_WEAK_FUNC(sub_82A33560);
PPC_FUNC_IMPL(__imp__sub_82A33560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A33568;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,24
	ctx.r21.s64 = 24;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,2740
	ctx.r29.s64 = ctx.r3.s64 + 2740;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r28,255
	ctx.r28.s64 = 255;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r23,4
	ctx.r23.s64 = 4;
loc_82A33598:
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r27,-8(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8, ctx.r27.u8);
	// stb r30,-7(r31)
	PPC_STORE_U8(ctx.r31.u32 + -7, ctx.r30.u8);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A335BC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a335bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A335BC;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82a47fd0
	ctx.lr = 0x82A335CC;
	sub_82A47FD0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r9,r29,-48
	ctx.r9.s64 = ctx.r29.s64 + -48;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stb r27,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r27.u8);
	// stw r28,-52(r29)
	PPC_STORE_U32(ctx.r29.u32 + -52, ctx.r28.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r23,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r23.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82A335FC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a33610
	if (cr6.lt) goto loc_82A33610;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82a33610
	if (!cr6.lt) goto loc_82A33610;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
loc_82A33610:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a335fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A335FC;
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// bne 0x82a33598
	if (!cr0.eq) goto loc_82A33598;
	// li r9,22
	ctx.r9.s64 = 22;
	// stb r30,4128(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4128, ctx.r30.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,4129(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4129, ctx.r30.u8);
	// addi r10,r24,4132
	ctx.r10.s64 = ctx.r24.s64 + 4132;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A33644:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33658
	if (cr6.lt) goto loc_82A33658;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82a33658
	if (!cr6.lt) goto loc_82A33658;
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
loc_82A33658:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a33644
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A33644;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,4224(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4224, ctx.r30.u32);
	// addi r11,r24,4232
	ctx.r11.s64 = ctx.r24.s64 + 4232;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// sth r9,4220(r24)
	PPC_STORE_U16(ctx.r24.u32 + 4220, ctx.r9.u16);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82A33684:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a33684
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A33684;
	// stb r21,4228(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4228, ctx.r21.u8);
	// stb r21,4229(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4229, ctx.r21.u8);
	// stw r21,4328(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4328, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A336A0"))) PPC_WEAK_FUNC(sub_82A336A0);
PPC_FUNC_IMPL(__imp__sub_82A336A0) {
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
loc_82A336BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a336cc
	if (cr6.lt) goto loc_82A336CC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A336CC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a336e4
	if (cr6.lt) goto loc_82A336E4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A336E4:
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,2688
	ctx.r4.s64 = ctx.r11.s64 + 2688;
	// bl 0x82a33498
	ctx.lr = 0x82A336F4;
	sub_82A33498(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a336bc
	if (cr6.lt) goto loc_82A336BC;
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

__attribute__((alias("__imp__sub_82A33718"))) PPC_WEAK_FUNC(sub_82A33718);
PPC_FUNC_IMPL(__imp__sub_82A33718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A33720;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r3,4232
	ctx.r28.s64 = ctx.r3.s64 + 4232;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
loc_82A3373C:
	// lbz r10,-11(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33750
	if (cr6.eq) goto loc_82A33750;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33770
	goto loc_82A33770;
loc_82A33750:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33768
	if (cr6.lt) goto loc_82A33768;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3376c
	if (cr6.lt) goto loc_82A3376C;
loc_82A33768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3376C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A33770:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a337f4
	if (cr6.eq) goto loc_82A337F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a33790
	if (!cr6.lt) goto loc_82A33790;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a337b8
	goto loc_82A337B8;
loc_82A33790:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a337a0
	if (!cr6.lt) goto loc_82A337A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a337b8
	goto loc_82A337B8;
loc_82A337A0:
	// li r10,22
	ctx.r10.s64 = 22;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A337B8:
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a337f4
	if (!cr6.eq) goto loc_82A337F4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82a337ec
	if (!cr6.eq) goto loc_82A337EC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a337dc
	if (cr6.lt) goto loc_82A337DC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A337DC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82a47d40
	ctx.lr = 0x82A337EC;
	sub_82A47D40(ctx, base);
loc_82A337EC:
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, xer);
	// ble cr6,0x82a33814
	if (!cr6.gt) goto loc_82A33814;
loc_82A337F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a3373c
	if (cr6.lt) goto loc_82A3373C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A33814:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A33820"))) PPC_WEAK_FUNC(sub_82A33820);
PPC_FUNC_IMPL(__imp__sub_82A33820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A33828;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r3,4232
	ctx.r28.s64 = ctx.r3.s64 + 4232;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
loc_82A33844:
	// lbz r11,-11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33858
	if (cr6.eq) goto loc_82A33858;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33878
	goto loc_82A33878;
loc_82A33858:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33870
	if (cr6.lt) goto loc_82A33870;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a33874
	if (cr6.lt) goto loc_82A33874;
loc_82A33870:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A33874:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A33878:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33910
	if (cr6.eq) goto loc_82A33910;
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x825b2f28
	ctx.lr = 0x82A3388C;
	sub_825B2F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a33910
	if (!cr6.eq) goto loc_82A33910;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a338ac
	if (!cr6.lt) goto loc_82A338AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a338d4
	goto loc_82A338D4;
loc_82A338AC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a338bc
	if (!cr6.lt) goto loc_82A338BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a338d4
	goto loc_82A338D4;
loc_82A338BC:
	// li r10,22
	ctx.r10.s64 = 22;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A338D4:
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a33910
	if (!cr6.eq) goto loc_82A33910;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82a33908
	if (!cr6.eq) goto loc_82A33908;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a338f8
	if (cr6.lt) goto loc_82A338F8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A338F8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82a47d40
	ctx.lr = 0x82A33908;
	sub_82A47D40(ctx, base);
loc_82A33908:
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, xer);
	// ble cr6,0x82a33930
	if (!cr6.gt) goto loc_82A33930;
loc_82A33910:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a33844
	if (cr6.lt) goto loc_82A33844;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A33930:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3393C"))) PPC_WEAK_FUNC(sub_82A3393C);
PPC_FUNC_IMPL(__imp__sub_82A3393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33940"))) PPC_WEAK_FUNC(sub_82A33940);
PPC_FUNC_IMPL(__imp__sub_82A33940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r7,r11,35747
	ctx.r7.u64 = ctx.r11.u64 | 35747;
loc_82A3395C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x82a3396c
	if (cr6.lt) goto loc_82A3396C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A3396C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a33988
	if (cr6.eq) goto loc_82A33988;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a339a8
	goto loc_82A339A8;
loc_82A33988:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a339a0
	if (cr6.lt) goto loc_82A339A0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82a339a4
	if (cr6.lt) goto loc_82A339A4;
loc_82A339A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A339A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A339A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33a48
	if (cr6.eq) goto loc_82A33A48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x82a339c4
	if (cr6.lt) goto loc_82A339C4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A339C4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a339f4
	if (cr6.lt) goto loc_82A339F4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82a339f4
	if (!cr6.lt) goto loc_82A339F4;
	// mulhwu r10,r11,r7
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r10,r9,11
	ctx.r10.s64 = ctx.r9.s64 * 11;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82a339f8
	goto loc_82A339F8;
loc_82A339F4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A339F8:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a33a0c
	if (!cr6.lt) goto loc_82A33A0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33a34
	goto loc_82A33A34;
loc_82A33A0C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a33a1c
	if (!cr6.lt) goto loc_82A33A1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33a34
	goto loc_82A33A34;
loc_82A33A1C:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r31,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_82A33A34:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a33a48
	if (!cr6.eq) goto loc_82A33A48;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
loc_82A33A48:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a33a5c
	if (cr6.lt) goto loc_82A33A5C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33A5C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a33a78
	if (cr6.eq) goto loc_82A33A78;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33a98
	goto loc_82A33A98;
loc_82A33A78:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33a90
	if (cr6.lt) goto loc_82A33A90;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82a33a94
	if (cr6.lt) goto loc_82A33A94;
loc_82A33A90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A33A94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A33A98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33b38
	if (cr6.eq) goto loc_82A33B38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a33ab4
	if (cr6.lt) goto loc_82A33AB4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33AB4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33ae4
	if (cr6.lt) goto loc_82A33AE4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82a33ae4
	if (!cr6.lt) goto loc_82A33AE4;
	// mulhwu r10,r11,r7
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r10,r9,11
	ctx.r10.s64 = ctx.r9.s64 * 11;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82a33ae8
	goto loc_82A33AE8;
loc_82A33AE4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A33AE8:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a33afc
	if (!cr6.lt) goto loc_82A33AFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33b24
	goto loc_82A33B24;
loc_82A33AFC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a33b0c
	if (!cr6.lt) goto loc_82A33B0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33b24
	goto loc_82A33B24;
loc_82A33B0C:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r31,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_82A33B24:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a33b38
	if (!cr6.eq) goto loc_82A33B38;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
loc_82A33B38:
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a33b4c
	if (cr6.lt) goto loc_82A33B4C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33B4C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a33b68
	if (cr6.eq) goto loc_82A33B68;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33b88
	goto loc_82A33B88;
loc_82A33B68:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33b80
	if (cr6.lt) goto loc_82A33B80;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82a33b84
	if (cr6.lt) goto loc_82A33B84;
loc_82A33B80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A33B84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A33B88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33c28
	if (cr6.eq) goto loc_82A33C28;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a33ba4
	if (cr6.lt) goto loc_82A33BA4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33BA4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33bd4
	if (cr6.lt) goto loc_82A33BD4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82a33bd4
	if (!cr6.lt) goto loc_82A33BD4;
	// mulhwu r10,r11,r7
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r10,r9,11
	ctx.r10.s64 = ctx.r9.s64 * 11;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82a33bd8
	goto loc_82A33BD8;
loc_82A33BD4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A33BD8:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a33bec
	if (!cr6.lt) goto loc_82A33BEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33c14
	goto loc_82A33C14;
loc_82A33BEC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a33bfc
	if (!cr6.lt) goto loc_82A33BFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33c14
	goto loc_82A33C14;
loc_82A33BFC:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r31,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_82A33C14:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a33c28
	if (!cr6.eq) goto loc_82A33C28;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
loc_82A33C28:
	// addi r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 3;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a33c3c
	if (cr6.lt) goto loc_82A33C3C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33C3C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a33c58
	if (cr6.eq) goto loc_82A33C58;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33c78
	goto loc_82A33C78;
loc_82A33C58:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33c70
	if (cr6.lt) goto loc_82A33C70;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82a33c74
	if (cr6.lt) goto loc_82A33C74;
loc_82A33C70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A33C74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A33C78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33d18
	if (cr6.eq) goto loc_82A33D18;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a33c94
	if (cr6.lt) goto loc_82A33C94;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A33C94:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a33cc4
	if (cr6.lt) goto loc_82A33CC4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82a33cc4
	if (!cr6.lt) goto loc_82A33CC4;
	// mulhwu r10,r11,r7
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r10,r9,11
	ctx.r10.s64 = ctx.r9.s64 * 11;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82a33cc8
	goto loc_82A33CC8;
loc_82A33CC4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A33CC8:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a33cdc
	if (!cr6.lt) goto loc_82A33CDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33d04
	goto loc_82A33D04;
loc_82A33CDC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a33cec
	if (!cr6.lt) goto loc_82A33CEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a33d04
	goto loc_82A33D04;
loc_82A33CEC:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r31,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_82A33D04:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a33d18
	if (!cr6.eq) goto loc_82A33D18;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
loc_82A33D18:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x82a3395c
	if (cr6.lt) goto loc_82A3395C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A33D2C"))) PPC_WEAK_FUNC(sub_82A33D2C);
PPC_FUNC_IMPL(__imp__sub_82A33D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A33D30"))) PPC_WEAK_FUNC(sub_82A33D30);
PPC_FUNC_IMPL(__imp__sub_82A33D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82A33D38;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce75c
	ctx.lr = 0x82A33D40;
	__savefpr_21(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// addi r20,r11,19056
	ctx.r20.s64 = ctx.r11.s64 + 19056;
	// li r31,255
	ctx.r31.s64 = 255;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lfs f12,9008(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// lfs f0,-4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82a33d8c
	if (!cr6.lt) goto loc_82A33D8C;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82a33d98
	goto loc_82A33D98;
loc_82A33D8C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a33d9c
	if (cr6.lt) goto loc_82A33D9C;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_82A33D98:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A33D9C:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// blt cr6,0x82a33db0
	if (cr6.lt) goto loc_82A33DB0;
	// cmpwi cr6,r19,22
	cr6.compare<int32_t>(ctx.r19.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a33db4
	if (cr6.lt) goto loc_82A33DB4;
loc_82A33DB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A33DB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r28,r11,-3564
	ctx.r28.s64 = ctx.r11.s64 + -3564;
	// beq cr6,0x82a33df0
	if (cr6.eq) goto loc_82A33DF0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A33DD4;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f12,9008(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f24,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f23,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// b 0x82a33e04
	goto loc_82A33E04;
loc_82A33DF0:
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f24,8144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	ctx.f24.f64 = double(temp.f32);
	// lfs f0,8148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f23,8152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8152);
	ctx.f23.f64 = double(temp.f32);
loc_82A33E04:
	// lwz r21,292(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stfs f23,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f24,88(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,4460(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4460);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82a33e28
	if (!cr6.eq) goto loc_82A33E28;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A33E28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,28(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33e3c
	if (cr6.eq) goto loc_82A33E3C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82A33E3C:
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f24,104(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f23,112(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f0,12892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12892);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f26,f31,f0,f13
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82a5a710
	ctx.lr = 0x82A33E64;
	sub_82A5A710(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a0c710
	ctx.lr = 0x82A33E70;
	sub_82A0C710(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,9008(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mulli r30,r29,11
	ctx.r30.s64 = ctx.r29.s64 * 11;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f21,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f21.f64 = double(temp.f32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lfs f25,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f25.f64 = double(temp.f32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lfs f28,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lfs f22,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f22.f64 = double(temp.f32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// li r27,15304
	ctx.r27.s64 = 15304;
	// lis r23,-32251
	ctx.r23.s64 = -2113601536;
	// lis r22,-32251
	ctx.r22.s64 = -2113601536;
loc_82A33F08:
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a33f20
	if (cr6.lt) goto loc_82A33F20;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a33f24
	if (cr6.lt) goto loc_82A33F24;
loc_82A33F20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A33F24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a33f44
	if (cr6.eq) goto loc_82A33F44;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r9,5768(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a33f48
	goto loc_82A33F48;
loc_82A33F44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A33F48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34114
	if (cr6.eq) goto loc_82A34114;
	// cmpw cr6,r30,r19
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, xer);
	// beq cr6,0x82a34114
	if (cr6.eq) goto loc_82A34114;
	// sraw r11,r17,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r17.s32 < 0) & (((ctx.r17.s32 >> temp.u32) << temp.u32) != ctx.r17.s32);
	ctx.r11.s64 = ctx.r17.s32 >> temp.u32;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a34114
	if (!cr6.eq) goto loc_82A34114;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a33f98
	if (!cr6.eq) goto loc_82A33F98;
	// addi r11,r24,3612
	ctx.r11.s64 = ctx.r24.s64 + 3612;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// bge cr6,0x82a33f8c
	if (!cr6.lt) goto loc_82A33F8C;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x82a33f90
	goto loc_82A33F90;
loc_82A33F8C:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A33F90:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a34114
	if (cr6.eq) goto loc_82A34114;
loc_82A33F98:
	// lwz r11,4460(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a33fbc
	if (!cr6.eq) goto loc_82A33FBC;
	// lwz r11,5356(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a33fbc
	if (!cr6.eq) goto loc_82A33FBC;
	// lwz r11,5760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5760);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a34114
	if (cr6.eq) goto loc_82A34114;
loc_82A33FBC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82A33FC4;
	sub_82A0C788(ctx, base);
	// addi r31,r3,1280
	ctx.r31.s64 = ctx.r3.s64 + 1280;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f23,f12
	ctx.f11.f64 = double(float(ctx.f23.f64 - ctx.f12.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f31,f9
	ctx.f31.f64 = double(float(sqrt(ctx.f9.f64)));
	// fsubs f8,f31,f26
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// fabs f27,f8
	ctx.f27.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// bl 0x825ca9d8
	ctx.lr = 0x82A33FFC;
	sub_825CA9D8(ctx, base);
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f13,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f5,f0
	ctx.f5.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f13
	cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// ble cr6,0x82a34024
	if (!cr6.gt) goto loc_82A34024;
	// fsel f12,f0,f28,f22
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f22.f64;
	// lfs f13,-4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A34024:
	// fabs f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f1,19176(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 19176);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f29,f1
	cr6.compare(ctx.f29.f64, ctx.f1.f64);
	// bgt cr6,0x82a34058
	if (cr6.gt) goto loc_82A34058;
	// lfs f0,19180(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 19180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82a34044
	if (cr6.gt) goto loc_82A34044;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82A34044:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A34050;
	sub_82A5AA98(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x82a340bc
	goto loc_82A340BC;
loc_82A34058:
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// bgt cr6,0x82a34098
	if (cr6.gt) goto loc_82A34098;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A34068;
	sub_82A5AA98(ctx, base);
	// lfs f13,32(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19180(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 19180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f13
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82a34080
	if (cr6.gt) goto loc_82A34080;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82A34080:
	// lfs f0,19176(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fsubs f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A34090;
	sub_82A5AA98(ctx, base);
	// fmadds f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f30.f64));
	// b 0x82a340bc
	goto loc_82A340BC;
loc_82A34098:
	// lfs f0,19180(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 19180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82a340a8
	if (cr6.gt) goto loc_82A340A8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82A340A8:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fsubs f1,f29,f25
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f25.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A340B4;
	sub_82A5AA98(ctx, base);
	// lfs f0,32(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f31,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f0.f64));
loc_82A340BC:
	// lwz r11,4460(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4460);
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a34100
	if (cr6.eq) goto loc_82A34100;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,6112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82a340fc
	if (cr6.lt) goto loc_82A340FC;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a34100
	if (!cr6.lt) goto loc_82A34100;
loc_82A340FC:
	// fadds f0,f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f21.f64));
loc_82A34100:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82A34114:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r27,15348
	cr6.compare<int32_t>(ctx.r27.s32, 15348, xer);
	// blt cr6,0x82a33f08
	if (cr6.lt) goto loc_82A33F08;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x82a34144
	if (!cr6.eq) goto loc_82A34144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce7a8
	ctx.lr = 0x82A34140;
	__restfpr_21(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82A34144:
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-16248
	ctx.r6.s64 = ctx.r11.s64 + -16248;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d88b0
	ctx.lr = 0x82A3415C;
	sub_831D88B0(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce7a8
	ctx.lr = 0x82A34174;
	__restfpr_21(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A34178"))) PPC_WEAK_FUNC(sub_82A34178);
PPC_FUNC_IMPL(__imp__sub_82A34178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A34180;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r26,23
	ctx.r26.s64 = 23;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r25,255
	ctx.r25.s64 = 255;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82A341A4:
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a47fd0
	ctx.lr = 0x82A341B0;
	sub_82A47FD0(ctx, base);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82A341C0;
	sub_831CDCF0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r27,-8(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8, ctx.r27.u8);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stb r30,-7(r31)
	PPC_STORE_U8(ctx.r31.u32 + -7, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A341E4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a341e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A341E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a47fd0
	ctx.lr = 0x82A341F4;
	sub_82A47FD0(ctx, base);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stb r27,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r27.u8);
	// stb r30,103(r31)
	PPC_STORE_U8(ctx.r31.u32 + 103, ctx.r30.u8);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// stb r30,-5(r31)
	PPC_STORE_U8(ctx.r31.u32 + -5, ctx.r30.u8);
	// stb r30,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r30.u8);
	// stb r30,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r30.u8);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bge 0x82a341a4
	if (!cr0.lt) goto loc_82A341A4;
	// addi r11,r23,2688
	ctx.r11.s64 = ctx.r23.s64 + 2688;
	// li r6,23
	ctx.r6.s64 = 23;
	// li r7,4
	ctx.r7.s64 = 4;
loc_82A34234:
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82A34254:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a34268
	if (cr6.lt) goto loc_82A34268;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82a34268
	if (!cr6.lt) goto loc_82A34268;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
loc_82A34268:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82a34254
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A34254;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// bge 0x82a34234
	if (!cr0.lt) goto loc_82A34234;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4224(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4224, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// sth r11,4220(r23)
	PPC_STORE_U16(ctx.r23.u32 + 4220, ctx.r11.u16);
	// bl 0x82a33560
	ctx.lr = 0x82A34294;
	sub_82A33560(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A342A0"))) PPC_WEAK_FUNC(sub_82A342A0);
PPC_FUNC_IMPL(__imp__sub_82A342A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A342A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r3,4232
	ctx.r26.s64 = ctx.r3.s64 + 4232;
	// addi r25,r3,12
	ctx.r25.s64 = ctx.r3.s64 + 12;
loc_82A342BC:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82A342C8:
	// lbz r10,-11(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a342dc
	if (cr6.eq) goto loc_82A342DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a342fc
	goto loc_82A342FC;
loc_82A342DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a342f4
	if (cr6.lt) goto loc_82A342F4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a342f8
	if (cr6.lt) goto loc_82A342F8;
loc_82A342F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A342F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A342FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34380
	if (cr6.eq) goto loc_82A34380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a3431c
	if (!cr6.lt) goto loc_82A3431C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a34344
	goto loc_82A34344;
loc_82A3431C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a3432c
	if (!cr6.lt) goto loc_82A3432C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a34344
	goto loc_82A34344;
loc_82A3432C:
	// li r10,22
	ctx.r10.s64 = 22;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A34344:
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a34380
	if (!cr6.eq) goto loc_82A34380;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82a34378
	if (!cr6.eq) goto loc_82A34378;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a34368
	if (cr6.lt) goto loc_82A34368;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34368:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82a47d40
	ctx.lr = 0x82A34378;
	sub_82A47D40(ctx, base);
loc_82A34378:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// ble cr6,0x82a343d0
	if (!cr6.gt) goto loc_82A343D0;
loc_82A34380:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a342c8
	if (cr6.lt) goto loc_82A342C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A34398:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r11,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// blt cr6,0x82a342bc
	if (cr6.lt) goto loc_82A342BC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// bne cr6,0x82a343d8
	if (!cr6.eq) goto loc_82A343D8;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A343D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a34398
	goto loc_82A34398;
loc_82A343D8:
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A343E4"))) PPC_WEAK_FUNC(sub_82A343E4);
PPC_FUNC_IMPL(__imp__sub_82A343E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A343E8"))) PPC_WEAK_FUNC(sub_82A343E8);
PPC_FUNC_IMPL(__imp__sub_82A343E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A343F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a344d8
	if (cr6.eq) goto loc_82A344D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d10
	ctx.lr = 0x82A34420;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a344d8
	if (cr6.eq) goto loc_82A344D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82A34434;
	sub_82A181B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a2e820
	ctx.lr = 0x82A3443C;
	sub_82A2E820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a344d8
	if (cr6.eq) goto loc_82A344D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82A34450;
	sub_82A2E7E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82A34458:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x82a34468
	if (cr6.lt) goto loc_82A34468;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34468:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a344cc
	if (cr6.eq) goto loc_82A344CC;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a344cc
	if (!cr0.eq) goto loc_82A344CC;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831ce980
	ctx.lr = 0x82A3449C;
	sub_831CE980(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a47d48
	ctx.lr = 0x82A344A8;
	sub_82A47D48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47eb0
	ctx.lr = 0x82A344B4;
	sub_82A47EB0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a344c8
	if (cr6.eq) goto loc_82A344C8;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r21,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r21.u32);
loc_82A344C8:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_82A344CC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x82a34458
	if (cr6.lt) goto loc_82A34458;
loc_82A344D8:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r27,255
	ctx.r27.s64 = 255;
loc_82A344E0:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a344f0
	if (cr6.lt) goto loc_82A344F0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A344F0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x82a3450c
	if (cr6.eq) goto loc_82A3450C;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r21,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r21.u32);
loc_82A3450C:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a3451c
	if (cr6.lt) goto loc_82A3451C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A3451C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x82a34538
	if (cr6.eq) goto loc_82A34538;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r21,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r21.u32);
loc_82A34538:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a34548
	if (cr6.lt) goto loc_82A34548;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34548:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x82a34564
	if (cr6.eq) goto loc_82A34564;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r21,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r21.u32);
loc_82A34564:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34574
	if (cr6.lt) goto loc_82A34574;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34574:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x82a34590
	if (cr6.eq) goto loc_82A34590;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r21,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r21.u32);
loc_82A34590:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a345a0
	if (cr6.lt) goto loc_82A345A0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A345A0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x82a345bc
	if (cr6.eq) goto loc_82A345BC;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r21,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r21.u32);
loc_82A345BC:
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a345cc
	if (cr6.lt) goto loc_82A345CC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A345CC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x82a345e8
	if (cr6.eq) goto loc_82A345E8;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r21,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r21.u32);
loc_82A345E8:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a344e0
	if (cr6.lt) goto loc_82A344E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r21,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r21.u8);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-24692
	ctx.r10.s64 = ctx.r11.s64 + -24692;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A34628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A34640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825aa838
	ctx.lr = 0x82A34650;
	sub_825AA838(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r22,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r22.u8);
	// bne cr6,0x82a34674
	if (!cr6.eq) goto loc_82A34674;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,8888
	ctx.r11.s64 = ctx.r11.s64 + 8888;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82A34674:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a35120
	if (cr6.eq) goto loc_82A35120;
	// lwz r28,4460(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82a346f4
	if (cr6.eq) goto loc_82A346F4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A34694;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a346f4
	if (cr6.eq) goto loc_82A346F4;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82A346A4:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82A346A8:
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a25108
	ctx.lr = 0x82A346BC;
	sub_82A25108(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82a346d8
	if (cr6.eq) goto loc_82A346D8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A346D8:
	// bl 0x82a1a678
	ctx.lr = 0x82A346DC;
	sub_82A1A678(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a346a8
	if (cr6.lt) goto loc_82A346A8;
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x82a346a4
	if (cr6.lt) goto loc_82A346A4;
loc_82A346F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a32798
	ctx.lr = 0x82A34700;
	sub_82A32798(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a32860
	ctx.lr = 0x82A34710;
	sub_82A32860(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a32a40
	ctx.lr = 0x82A34724;
	sub_82A32A40(ctx, base);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x82a34838
	if (cr6.eq) goto loc_82A34838;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x82a349fc
	if (!cr6.eq) goto loc_82A349FC;
	// lwz r11,5356(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// addi r31,r23,5756
	ctx.r31.s64 = ctx.r23.s64 + 5756;
	// lwz r27,5756(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5756);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a347e8
	if (cr6.eq) goto loc_82A347E8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a349e8
	if (!cr6.eq) goto loc_82A349E8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a34764
	if (cr6.lt) goto loc_82A34764;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a34768
	if (cr6.lt) goto loc_82A34768;
loc_82A34764:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a349e8
	if (cr6.eq) goto loc_82A349E8;
	// lwz r11,5760(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5760);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3478c
	if (cr6.lt) goto loc_82A3478C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a34790
	if (cr6.lt) goto loc_82A34790;
loc_82A3478C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34790:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a349e8
	if (cr6.eq) goto loc_82A349E8;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lis r29,8960
	ctx.r29.s64 = 587202560;
loc_82A347A4:
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0c760
	ctx.lr = 0x82A347B0;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a347d4
	if (cr6.eq) goto loc_82A347D4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82a347a4
	if (cr6.lt) goto loc_82A347A4;
	// b 0x82a349e8
	goto loc_82A349E8;
loc_82A347D4:
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// addi r11,r11,1439
	ctx.r11.s64 = ctx.r11.s64 + 1439;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r23
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// b 0x82a349e8
	goto loc_82A349E8;
loc_82A347E8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a347fc
	if (cr6.lt) goto loc_82A347FC;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a34800
	if (cr6.lt) goto loc_82A34800;
loc_82A347FC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34800:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a349e8
	if (cr6.eq) goto loc_82A349E8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A34818;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d160
	ctx.lr = 0x82A34824;
	sub_82A3D160(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a349e8
	if (cr6.eq) goto loc_82A349E8;
	// lwz r27,5760(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5760);
	// b 0x82a349e8
	goto loc_82A349E8;
loc_82A34838:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r21,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r21.u8);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A34864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A3487C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825b4cb0
	ctx.lr = 0x82A3488C;
	sub_825B4CB0(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stb r22,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r22.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a348b0
	if (!cr6.eq) goto loc_82A348B0;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,4
	xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// beq 0x82a34998
	if (cr0.eq) goto loc_82A34998;
loc_82A348B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x82A348C0;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a34980
	if (!cr6.lt) goto loc_82A34980;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r21,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r21.u8);
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-22152
	ctx.r10.s64 = ctx.r11.s64 + -22152;
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x825a9cf0
	ctx.lr = 0x82A348F4;
	sub_825A9CF0(ctx, base);
	// lbz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a34908
	if (!cr6.eq) goto loc_82A34908;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a94f0
	ctx.lr = 0x82A34908;
	sub_825A94F0(ctx, base);
loc_82A34908:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a34928
	if (!cr6.eq) goto loc_82A34928;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r3,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r3.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// beq 0x82a34948
	if (cr0.eq) goto loc_82A34948;
loc_82A34928:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a16440
	ctx.lr = 0x82A34930;
	sub_82A16440(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
loc_82A34948:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82A3495C;
	sub_825E0CF8(ctx, base);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a34980
	if (cr6.eq) goto loc_82A34980;
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
	ctx.lr = 0x82A3497C;
	sub_8353F3B8(ctx, base);
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
loc_82A34980:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
loc_82A34998:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// addi r8,r10,-16664
	ctx.r8.s64 = ctx.r10.s64 + -16664;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// beq cr6,0x82a349cc
	if (cr6.eq) goto loc_82A349CC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a349cc
	if (cr6.eq) goto loc_82A349CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8353f3b8
	ctx.lr = 0x82A349C4;
	sub_8353F3B8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
loc_82A349CC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r21,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r21.u8);
	// beq cr6,0x82a349e8
	if (cr6.eq) goto loc_82A349E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8353f3b8
	ctx.lr = 0x82A349E4;
	sub_8353F3B8(ctx, base);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
loc_82A349E8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a349fc
	if (cr6.lt) goto loc_82A349FC;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a34a00
	if (cr6.lt) goto loc_82A34A00;
loc_82A349FC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34A00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34c60
	if (cr6.eq) goto loc_82A34C60;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a34a20
	if (cr6.lt) goto loc_82A34A20;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a34a24
	if (cr6.lt) goto loc_82A34A24;
loc_82A34A20:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34A24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34a44
	if (cr6.eq) goto loc_82A34A44;
	// add r11,r27,r23
	ctx.r11.u64 = ctx.r27.u64 + ctx.r23.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a34a48
	goto loc_82A34A48;
loc_82A34A44:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34A48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34c60
	if (!cr6.eq) goto loc_82A34C60;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82A34A5C:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34a6c
	if (cr6.lt) goto loc_82A34A6C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34A6C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a34a84
	if (!cr6.eq) goto loc_82A34A84;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82A34A84:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34a94
	if (cr6.lt) goto loc_82A34A94;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34A94:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a34aac
	if (!cr6.eq) goto loc_82A34AAC;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82A34AAC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a34abc
	if (cr6.lt) goto loc_82A34ABC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34ABC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a34ad4
	if (!cr6.eq) goto loc_82A34AD4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82A34AD4:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34ae4
	if (cr6.lt) goto loc_82A34AE4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34AE4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a34afc
	if (!cr6.eq) goto loc_82A34AFC;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82A34AFC:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34b0c
	if (cr6.lt) goto loc_82A34B0C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34B0C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a34b24
	if (!cr6.eq) goto loc_82A34B24;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82A34B24:
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34b34
	if (cr6.lt) goto loc_82A34B34;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34B34:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x82a34b4c
	if (!cr6.eq) goto loc_82A34B4C;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82A34B4C:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34a5c
	if (cr6.lt) goto loc_82A34A5C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34c60
	if (!cr6.eq) goto loc_82A34C60;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge cr6,0x82a34b78
	if (!cr6.lt) goto loc_82A34B78;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x82a34ba0
	goto loc_82A34BA0;
loc_82A34B78:
	// cmpwi cr6,r27,11
	cr6.compare<int32_t>(ctx.r27.s32, 11, xer);
	// bge cr6,0x82a34b88
	if (!cr6.lt) goto loc_82A34B88;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x82a34ba0
	goto loc_82A34BA0;
loc_82A34B88:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r27
	xer.ca = ctx.r27.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// eqv r9,r11,r27
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r27.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r28,r7,31
	ctx.r28.u64 = ctx.r7.u32 & 0x1;
loc_82A34BA0:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82A34BA4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82a34bb4
	if (cr6.lt) goto loc_82A34BB4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34BB4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a34bd8
	if (cr6.lt) goto loc_82A34BD8;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a34bdc
	if (cr6.eq) goto loc_82A34BDC;
loc_82A34BD8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A34BDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34c3c
	if (cr6.eq) goto loc_82A34C3C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34bfc
	if (!cr6.eq) goto loc_82A34BFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34c04
	goto loc_82A34C04;
loc_82A34BFC:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34C04:
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a34c3c
	if (!cr6.eq) goto loc_82A34C3C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34c3c
	if (!cr6.eq) goto loc_82A34C3C;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A34C24;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a34c3c
	if (cr6.eq) goto loc_82A34C3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A34C34;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82a34c4c
	if (!cr6.eq) goto loc_82A34C4C;
loc_82A34C3C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82a34ba4
	if (cr6.lt) goto loc_82A34BA4;
	// b 0x82a34c60
	goto loc_82A34C60;
loc_82A34C4C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// beq cr6,0x82a34c60
	if (cr6.eq) goto loc_82A34C60;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r21,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r21.u32);
loc_82A34C60:
	// bl 0x8353b230
	ctx.lr = 0x82A34C64;
	sub_8353B230(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34C68:
	// slw r10,r22,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a34ccc
	if (!cr6.eq) goto loc_82A34CCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x82a34c68
	if (cr6.lt) goto loc_82A34C68;
	// li r25,4
	ctx.r25.s64 = 4;
loc_82A34C88:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82a350ec
	if (cr6.eq) goto loc_82A350EC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A34C98;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a350ec
	if (cr6.eq) goto loc_82A350EC;
	// cmplwi cr6,r25,24
	cr6.compare<uint32_t>(ctx.r25.u32, 24, xer);
	// bge cr6,0x82a350ec
	if (!cr6.lt) goto loc_82A350EC;
	// mulli r11,r25,112
	ctx.r11.s64 = ctx.r25.s64 * 112;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34cd4
	if (!cr6.eq) goto loc_82A34CD4;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x82a34cdc
	goto loc_82A34CDC;
loc_82A34CCC:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x82a34c88
	goto loc_82A34C88;
loc_82A34CD4:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34CDC:
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34cec
	if (cr6.eq) goto loc_82A34CEC;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82A34CEC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82a34d00
	if (cr6.eq) goto loc_82A34D00;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x82a34d00
	if (cr6.eq) goto loc_82A34D00;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82A34D00:
	// lwz r26,12(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x82a34d18
	if (cr6.lt) goto loc_82A34D18;
	// cmpwi cr6,r26,22
	cr6.compare<int32_t>(ctx.r26.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a34d1c
	if (cr6.lt) goto loc_82A34D1C;
loc_82A34D18:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34D1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34d8c
	if (cr6.eq) goto loc_82A34D8C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x82a34d3c
	if (cr6.lt) goto loc_82A34D3C;
	// cmpwi cr6,r26,22
	cr6.compare<int32_t>(ctx.r26.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a34d40
	if (cr6.lt) goto loc_82A34D40;
loc_82A34D3C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34D40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34d60
	if (cr6.eq) goto loc_82A34D60;
	// add r11,r26,r23
	ctx.r11.u64 = ctx.r26.u64 + ctx.r23.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a34d64
	goto loc_82A34D64;
loc_82A34D60:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A34D64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34d8c
	if (cr6.eq) goto loc_82A34D8C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a250d0
	ctx.lr = 0x82A34D7C;
	sub_82A250D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a34d8c
	if (cr6.eq) goto loc_82A34D8C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82A34D8C:
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x82a47d40
	ctx.lr = 0x82A34D94;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a34da0
	if (!cr6.eq) goto loc_82A34DA0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82A34DA0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82a34db0
	if (cr6.eq) goto loc_82A34DB0;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82a34fa8
	if (!cr6.eq) goto loc_82A34FA8;
loc_82A34DB0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a245d8
	ctx.lr = 0x82A34DBC;
	sub_82A245D8(ctx, base);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82A34DC4:
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34dd4
	if (cr6.lt) goto loc_82A34DD4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34DD4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34df0
	if (!cr6.eq) goto loc_82A34DF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34df8
	goto loc_82A34DF8;
loc_82A34DF0:
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34DF8:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a34e10
	if (!cr6.eq) goto loc_82A34E10;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34e10
	if (!cr6.eq) goto loc_82A34E10;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A34E10:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34e20
	if (cr6.lt) goto loc_82A34E20;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34E20:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34e3c
	if (!cr6.eq) goto loc_82A34E3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34e44
	goto loc_82A34E44;
loc_82A34E3C:
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34E44:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a34e5c
	if (!cr6.eq) goto loc_82A34E5C;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34e5c
	if (!cr6.eq) goto loc_82A34E5C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A34E5C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82a34e6c
	if (cr6.lt) goto loc_82A34E6C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34E6C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34e88
	if (!cr6.eq) goto loc_82A34E88;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34e90
	goto loc_82A34E90;
loc_82A34E88:
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34E90:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a34ea8
	if (!cr6.eq) goto loc_82A34EA8;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34ea8
	if (!cr6.eq) goto loc_82A34EA8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A34EA8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34eb8
	if (cr6.lt) goto loc_82A34EB8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34EB8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34ed4
	if (!cr6.eq) goto loc_82A34ED4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34edc
	goto loc_82A34EDC;
loc_82A34ED4:
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34EDC:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a34ef4
	if (!cr6.eq) goto loc_82A34EF4;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34ef4
	if (!cr6.eq) goto loc_82A34EF4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A34EF4:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34f04
	if (cr6.lt) goto loc_82A34F04;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34F04:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34f20
	if (!cr6.eq) goto loc_82A34F20;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34f28
	goto loc_82A34F28;
loc_82A34F20:
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34F28:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a34f40
	if (!cr6.eq) goto loc_82A34F40;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34f40
	if (!cr6.eq) goto loc_82A34F40;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A34F40:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34f50
	if (cr6.lt) goto loc_82A34F50;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34F50:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a34f6c
	if (!cr6.eq) goto loc_82A34F6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34f74
	goto loc_82A34F74;
loc_82A34F6C:
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34F74:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a34f8c
	if (!cr6.eq) goto loc_82A34F8C;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a34f8c
	if (!cr6.eq) goto loc_82A34F8C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82A34F8C:
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82a34dc4
	if (cr6.lt) goto loc_82A34DC4;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82a34fa8
	if (cr6.gt) goto loc_82A34FA8;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82A34FA8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a350ec
	if (!cr6.eq) goto loc_82A350EC;
	// li r29,24
	ctx.r29.s64 = 24;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82A34FBC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a34fcc
	if (cr6.lt) goto loc_82A34FCC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A34FCC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bne cr6,0x82a34fec
	if (!cr6.eq) goto loc_82A34FEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a34ff4
	goto loc_82A34FF4;
loc_82A34FEC:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A34FF4:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// beq cr6,0x82a3509c
	if (cr6.eq) goto loc_82A3509C;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a3509c
	if (!cr6.eq) goto loc_82A3509C;
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// bl 0x82a47d40
	ctx.lr = 0x82A3500C;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a3509c
	if (cr6.eq) goto loc_82A3509C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a35028
	if (cr6.lt) goto loc_82A35028;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a3502c
	if (cr6.lt) goto loc_82A3502C;
loc_82A35028:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A3502C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3509c
	if (cr6.eq) goto loc_82A3509C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a3504c
	if (cr6.lt) goto loc_82A3504C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x82a35050
	if (cr6.lt) goto loc_82A35050;
loc_82A3504C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A35050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a35070
	if (cr6.eq) goto loc_82A35070;
	// add r11,r31,r23
	ctx.r11.u64 = ctx.r31.u64 + ctx.r23.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a35074
	goto loc_82A35074;
loc_82A35070:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A35074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3509c
	if (cr6.eq) goto loc_82A3509C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a250d0
	ctx.lr = 0x82A3508C;
	sub_82A250D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3509c
	if (cr6.eq) goto loc_82A3509C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82A3509C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a34fbc
	if (cr6.lt) goto loc_82A34FBC;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// bge cr6,0x82a350ec
	if (!cr6.lt) goto loc_82A350EC;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// beq cr6,0x82a350ec
	if (cr6.eq) goto loc_82A350EC;
	// mulli r11,r29,112
	ctx.r11.s64 = ctx.r29.s64 * 112;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82a350d8
	if (cr6.eq) goto loc_82A350D8;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// stw r21,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r21.u32);
loc_82A350D8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// beq cr6,0x82a350ec
	if (cr6.eq) goto loc_82A350EC;
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r21,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r21.u32);
loc_82A350EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a336a0
	ctx.lr = 0x82A350F4;
	sub_82A336A0(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3511c
	if (cr6.eq) goto loc_82A3511C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r5,8884
	ctx.r5.s64 = 8884;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,8888
	ctx.r4.s64 = ctx.r11.s64 + 8888;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x832d24b8
	ctx.lr = 0x82A35118;
	sub_832D24B8(ctx, base);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
loc_82A3511C:
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82A35120:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// addi r8,r10,-24712
	ctx.r8.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// beq cr6,0x82a3515c
	if (cr6.eq) goto loc_82A3515C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a3515c
	if (cr6.eq) goto loc_82A3515C;
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
	ctx.lr = 0x82A35154;
	sub_8353F3B8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
loc_82A3515C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r21,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r21.u8);
	// beq cr6,0x82a3517c
	if (cr6.eq) goto loc_82A3517C;
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
	ctx.lr = 0x82A3517C;
	sub_8353F3B8(ctx, base);
loc_82A3517C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A35184"))) PPC_WEAK_FUNC(sub_82A35184);
PPC_FUNC_IMPL(__imp__sub_82A35184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35188"))) PPC_WEAK_FUNC(sub_82A35188);
PPC_FUNC_IMPL(__imp__sub_82A35188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A351AC"))) PPC_WEAK_FUNC(sub_82A351AC);
PPC_FUNC_IMPL(__imp__sub_82A351AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A351B0"))) PPC_WEAK_FUNC(sub_82A351B0);
PPC_FUNC_IMPL(__imp__sub_82A351B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r11,2000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// subf. r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a351c0
	if (!cr0.lt) goto loc_82A351C0;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
loc_82A351C0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A351D4"))) PPC_WEAK_FUNC(sub_82A351D4);
PPC_FUNC_IMPL(__imp__sub_82A351D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A351D8"))) PPC_WEAK_FUNC(sub_82A351D8);
PPC_FUNC_IMPL(__imp__sub_82A351D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A351E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,23
	ctx.r29.s64 = 23;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A351F4:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r6,r11,20872
	ctx.r6.s64 = ctx.r11.s64 + 20872;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A3520C;
	sub_823FCA98(ctx, base);
	// stw r31,2000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2000, ctx.r31.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// bge 0x82a351f4
	if (!cr0.lt) goto loc_82A351F4;
	// addis r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 65536;
	// li r29,7
	ctx.r29.s64 = 7;
	// addi r30,r30,-17432
	ctx.r30.s64 = ctx.r30.s64 + -17432;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82A3522C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a52a98
	ctx.lr = 0x82A35234;
	sub_82A52A98(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,18
	ctx.r28.s64 = ctx.r28.s64 + 18;
	// bge 0x82a3522c
	if (!cr0.lt) goto loc_82A3522C;
	// addis r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 65536;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r29,-17440
	ctx.r29.s64 = ctx.r29.s64 + -17440;
loc_82A3524C:
	// stbx r28,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52920
	ctx.lr = 0x82A35258;
	sub_82A52920(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,18
	ctx.r30.s64 = ctx.r30.s64 + 18;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x82a3524c
	if (cr6.lt) goto loc_82A3524C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A35274"))) PPC_WEAK_FUNC(sub_82A35274);
PPC_FUNC_IMPL(__imp__sub_82A35274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35278"))) PPC_WEAK_FUNC(sub_82A35278);
PPC_FUNC_IMPL(__imp__sub_82A35278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mulli r11,r4,2004
	ctx.r11.s64 = ctx.r4.s64 * 2004;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,2000(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2000);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,2000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2000, ctx.r9.u32);
	// cmpwi cr6,r9,100
	cr6.compare<int32_t>(ctx.r9.s32, 100, xer);
	// blt cr6,0x82a3529c
	if (cr6.lt) goto loc_82A3529C;
	// stw r10,2000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2000, ctx.r10.u32);
loc_82A3529C:
	// lwz r9,2000(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2000);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A352D4"))) PPC_WEAK_FUNC(sub_82A352D4);
PPC_FUNC_IMPL(__imp__sub_82A352D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A352D8"))) PPC_WEAK_FUNC(sub_82A352D8);
PPC_FUNC_IMPL(__imp__sub_82A352D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r11,48096
	ctx.r9.u64 = ctx.r11.u64 | 48096;
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A352F4"))) PPC_WEAK_FUNC(sub_82A352F4);
PPC_FUNC_IMPL(__imp__sub_82A352F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A352F8"))) PPC_WEAK_FUNC(sub_82A352F8);
PPC_FUNC_IMPL(__imp__sub_82A352F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,-17432
	ctx.r3.s64 = ctx.r3.s64 + -17432;
	// b 0x82a52998
	sub_82A52998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A35324"))) PPC_WEAK_FUNC(sub_82A35324);
PPC_FUNC_IMPL(__imp__sub_82A35324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35328"))) PPC_WEAK_FUNC(sub_82A35328);
PPC_FUNC_IMPL(__imp__sub_82A35328) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,-17432
	ctx.r3.s64 = ctx.r3.s64 + -17432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35344"))) PPC_WEAK_FUNC(sub_82A35344);
PPC_FUNC_IMPL(__imp__sub_82A35344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35348"))) PPC_WEAK_FUNC(sub_82A35348);
PPC_FUNC_IMPL(__imp__sub_82A35348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A35350;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce76c
	ctx.lr = 0x82A35358;
	__savefpr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r11.u32);
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// blt cr6,0x82a3537c
	if (cr6.lt) goto loc_82A3537C;
	// stw r25,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r25.u32);
loc_82A3537C:
	// lwz r11,2000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2000);
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r25,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r25.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// stw r25,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r25.u32);
	// bge cr6,0x82a35804
	if (!cr6.lt) goto loc_82A35804;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353b168
	ctx.lr = 0x82A353B8;
	sub_8353B168(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a35804
	if (cr6.eq) goto loc_82A35804;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A353D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a35804
	if (cr6.eq) goto loc_82A35804;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// li r31,35
	ctx.r31.s64 = 35;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// lwz r3,2056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// li r29,31
	ctx.r29.s64 = 31;
	// stw r4,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r4,33
	ctx.r4.s64 = 33;
	// li r31,23
	ctx.r31.s64 = 23;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r5,26
	ctx.r5.s64 = 26;
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// lwz r6,388(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 388);
	// li r4,29
	ctx.r4.s64 = 29;
	// li r24,32
	ctx.r24.s64 = 32;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// li r29,24
	ctx.r29.s64 = 24;
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// li r28,25
	ctx.r28.s64 = 25;
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// li r31,30
	ctx.r31.s64 = 30;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// stw r4,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82A354D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lfs f25,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f28,-27732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27732);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x82a35680
	if (!cr6.eq) goto loc_82A35680;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
loc_82A35504:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82a35520
	if (cr6.eq) goto loc_82A35520;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a525a8
	ctx.lr = 0x82A35518;
	sub_82A525A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a35524
	goto loc_82A35524;
loc_82A35520:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82A35524:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A3553C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a3554c
	if (cr6.eq) goto loc_82A3554C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A3554C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a35564
	if (cr6.eq) goto loc_82A35564;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82A35564:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// cmpwi cr6,r29,36
	cr6.compare<int32_t>(ctx.r29.s32, 36, xer);
	// blt cr6,0x82a35504
	if (cr6.lt) goto loc_82A35504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
	// lfs f27,11852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11852);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,16100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16100);
	ctx.f26.f64 = double(temp.f32);
loc_82A35594:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82a355bc
	if (!cr6.eq) goto loc_82A355BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x82A355B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a355c8
	goto loc_82A355C8;
loc_82A355BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// bctrl 
	ctx.lr = 0x82A355C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,3
	ctx.r4.s64 = 3;
loc_82A355C8:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A355E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bne cr6,0x82a355fc
	if (!cr6.eq) goto loc_82A355FC;
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x82a355fc
	if (!cr6.eq) goto loc_82A355FC;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x82a35620
	goto loc_82A35620;
loc_82A355FC:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a5a9f8
	ctx.lr = 0x82A35608;
	sub_82A5A9F8(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x82a35618
	if (!cr6.lt) goto loc_82A35618;
	// lfs f0,5844(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5844);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82A35618:
	// lfs f0,5864(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5864);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82A35620:
	// bl 0x831d1ca8
	ctx.lr = 0x82A35624;
	sub_831D1CA8(ctx, base);
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fneg f12,f30
	ctx.f12.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f0,f10
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x82a3564c
	if (cr6.gt) goto loc_82A3564C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a35664
	goto loc_82A35664;
loc_82A3564C:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82a3565c
	if (cr6.lt) goto loc_82A3565C;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x82a35664
	goto loc_82A35664;
loc_82A3565C:
	// fsubs f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_82A35664:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// stfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blt cr6,0x82a35594
	if (cr6.lt) goto loc_82A35594;
loc_82A35680:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82A35688;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82a35804
	if (!cr6.eq) goto loc_82A35804;
	// ld r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stfs f29,4(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f0,19176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f13,-23844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8380);
	ctx.f12.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// lfs f11,19224(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19224);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r31,r29,0,28,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// lfs f10,-6656(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -6656);
	ctx.f10.f64 = double(temp.f32);
	// li r11,96
	ctx.r11.s64 = 96;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f9,5068(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5068);
	ctx.f9.f64 = double(temp.f32);
	// li r8,144
	ctx.r8.s64 = 144;
	// lfs f8,11832(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 11832);
	ctx.f8.f64 = double(temp.f32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stfs f29,8(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// ble cr6,0x82a357b0
	if (!cr6.gt) goto loc_82A357B0;
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A35758;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f13,21208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3579c
	if (!cr6.gt) goto loc_82A3579C;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// lfs f0,19448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19448);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r11,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r10.s64;
	// bge cr6,0x82a3579c
	if (!cr6.lt) goto loc_82A3579C;
	// subfic r11,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
loc_82A3579C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82A357B0:
	// rlwinm r9,r29,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a35804
	if (cr6.eq) goto loc_82A35804;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
loc_82A357C4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a357f0
	if (cr6.eq) goto loc_82A357F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82a357c4
	if (cr6.lt) goto loc_82A357C4;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b8
	ctx.lr = 0x82A357EC;
	__restfpr_25(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A357F0:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f25,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82A35804:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b8
	ctx.lr = 0x82A35810;
	__restfpr_25(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A35814"))) PPC_WEAK_FUNC(sub_82A35814);
PPC_FUNC_IMPL(__imp__sub_82A35814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35818"))) PPC_WEAK_FUNC(sub_82A35818);
PPC_FUNC_IMPL(__imp__sub_82A35818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r11,48096
	ctx.r9.u64 = ctx.r11.u64 | 48096;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mulli r11,r4,2004
	ctx.r11.s64 = ctx.r4.s64 * 2004;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-17432
	ctx.r5.s64 = ctx.r5.s64 + -17432;
	// b 0x82a35348
	sub_82A35348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A35860"))) PPC_WEAK_FUNC(sub_82A35860);
PPC_FUNC_IMPL(__imp__sub_82A35860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35864"))) PPC_WEAK_FUNC(sub_82A35864);
PPC_FUNC_IMPL(__imp__sub_82A35864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35868"))) PPC_WEAK_FUNC(sub_82A35868);
PPC_FUNC_IMPL(__imp__sub_82A35868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A358D8"))) PPC_WEAK_FUNC(sub_82A358D8);
PPC_FUNC_IMPL(__imp__sub_82A358D8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,19592
	ctx.r10.s64 = ctx.r11.s64 + 19592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596f90
	ctx.lr = 0x82A35908;
	sub_82596F90(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a35920
	if (cr6.eq) goto loc_82A35920;
	// bl 0x82416268
	ctx.lr = 0x82A3591C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A35920:
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

__attribute__((alias("__imp__sub_82A35938"))) PPC_WEAK_FUNC(sub_82A35938);
PPC_FUNC_IMPL(__imp__sub_82A35938) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-1052
	ctx.r10.s64 = ctx.r10.s64 + -1052;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35954"))) PPC_WEAK_FUNC(sub_82A35954);
PPC_FUNC_IMPL(__imp__sub_82A35954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35958"))) PPC_WEAK_FUNC(sub_82A35958);
PPC_FUNC_IMPL(__imp__sub_82A35958) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35974"))) PPC_WEAK_FUNC(sub_82A35974);
PPC_FUNC_IMPL(__imp__sub_82A35974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35978"))) PPC_WEAK_FUNC(sub_82A35978);
PPC_FUNC_IMPL(__imp__sub_82A35978) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82A3599C;
	sub_82596FE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82A359BC;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_82A359D4"))) PPC_WEAK_FUNC(sub_82A359D4);
PPC_FUNC_IMPL(__imp__sub_82A359D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A359D8"))) PPC_WEAK_FUNC(sub_82A359D8);
PPC_FUNC_IMPL(__imp__sub_82A359D8) {
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
	ctx.lr = 0x82A359FC;
	sub_82596FE8(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a35a20
	if (cr6.eq) goto loc_82A35A20;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a35a20
	if (!cr6.eq) goto loc_82A35A20;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A35A20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82A35A28;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_82A35A40"))) PPC_WEAK_FUNC(sub_82A35A40);
PPC_FUNC_IMPL(__imp__sub_82A35A40) {
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
	ctx.lr = 0x82A35A64;
	sub_82596FE8(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a35a8c
	if (cr6.eq) goto loc_82A35A8C;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a35a8c
	if (!cr6.eq) goto loc_82A35A8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82A35A8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82A35A94;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_82A35AAC"))) PPC_WEAK_FUNC(sub_82A35AAC);
PPC_FUNC_IMPL(__imp__sub_82A35AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35AB0"))) PPC_WEAK_FUNC(sub_82A35AB0);
PPC_FUNC_IMPL(__imp__sub_82A35AB0) {
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
	ctx.lr = 0x82A35AD4;
	sub_82596FE8(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a35b10
	if (!cr6.eq) goto loc_82A35B10;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a35b04
	if (cr6.eq) goto loc_82A35B04;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82a35b10
	if (!cr6.eq) goto loc_82A35B10;
	// bl 0x82597088
	ctx.lr = 0x82A35AFC;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a35b18
	goto loc_82A35B18;
loc_82A35B04:
	// bl 0x82597088
	ctx.lr = 0x82A35B08;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a35b18
	goto loc_82A35B18;
loc_82A35B10:
	// bl 0x82597088
	ctx.lr = 0x82A35B14;
	sub_82597088(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_82A35B18:
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

__attribute__((alias("__imp__sub_82A35B30"))) PPC_WEAK_FUNC(sub_82A35B30);
PPC_FUNC_IMPL(__imp__sub_82A35B30) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82A35B54;
	sub_82596FE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82A35B68;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_82A35B84"))) PPC_WEAK_FUNC(sub_82A35B84);
PPC_FUNC_IMPL(__imp__sub_82A35B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35B88"))) PPC_WEAK_FUNC(sub_82A35B88);
PPC_FUNC_IMPL(__imp__sub_82A35B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A35B90;
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
	// bl 0x82596fe8
	ctx.lr = 0x82A35BA8;
	sub_82596FE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82A35BC4;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A35BCC"))) PPC_WEAK_FUNC(sub_82A35BCC);
PPC_FUNC_IMPL(__imp__sub_82A35BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35BD0"))) PPC_WEAK_FUNC(sub_82A35BD0);
PPC_FUNC_IMPL(__imp__sub_82A35BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a35c1c
	if (!cr6.eq) goto loc_82A35C1C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// rlwinm r8,r10,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82a35c1c
	if (cr6.eq) goto loc_82A35C1C;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a35c10
	if (cr6.eq) goto loc_82A35C10;
	// rlwinm r10,r10,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// lis r9,13
	ctx.r9.s64 = 851968;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82a35c1c
	if (cr6.eq) goto loc_82A35C1C;
loc_82A35C10:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// b 0x82a35c24
	goto loc_82A35C24;
loc_82A35C1C:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// ori r12,r12,2561
	ctx.r12.u64 = ctx.r12.u64 | 2561;
loc_82A35C24:
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r8,115
	ctx.r8.s64 = 115;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r8,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r8.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r8,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r8.u8);
	// li r6,13
	ctx.r6.s64 = 13;
	// stb r9,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r9.u8);
	// li r5,255
	ctx.r5.s64 = 255;
	// sth r7,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r7.u16);
	// stb r9,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r9.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// stb r6,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r6.u8);
	// stb r5,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r5.u8);
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// stb r11,193(r3)
	PPC_STORE_U8(ctx.r3.u32 + 193, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35C88"))) PPC_WEAK_FUNC(sub_82A35C88);
PPC_FUNC_IMPL(__imp__sub_82A35C88) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82A35D0C;
	sub_831CDCF0(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stb r8,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r8.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r8,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r8.u8);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r9,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r9.u8);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r9,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r9.u8);
	// stb r10,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r10.u8);
	// lfs f13,-28496(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28496);
	ctx.f13.f64 = double(temp.f32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,115
	ctx.r10.s64 = 115;
	// stb r3,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r3.u8);
	// li r5,20
	ctx.r5.s64 = 20;
	// lfs f12,25632(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25632);
	ctx.f12.f64 = double(temp.f32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stb r5,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r4.u8);
	// stb r10,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r10.u8);
	// stb r10,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r10.u8);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r7,r8,255
	ctx.r7.u64 = ctx.r8.u64 | 255;
	// stb r11,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r11.u8);
	// sth r9,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r9.u16);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82A35DB0"))) PPC_WEAK_FUNC(sub_82A35DB0);
PPC_FUNC_IMPL(__imp__sub_82A35DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,1304(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1304);
	// lfs f0,1316(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1316);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1308(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1308);
	// lfs f13,1320(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1320);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,1312(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// lfs f10,1324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1324);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f12,1328(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1332(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1332);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f9,1336(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1336);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// lfs f0,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f10,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f8,f12,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// lfs f12,1340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1340);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f3,1348(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1348);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f11,1344(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1344);
	ctx.f11.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f4,1352(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1352);
	ctx.f4.f64 = double(temp.f32);
	// fadds f6,f12,f2
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f2,1360(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1360);
	ctx.f2.f64 = double(temp.f32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// lfs f3,1356(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1356);
	ctx.f3.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmuls f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fadds f6,f3,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35EC8"))) PPC_WEAK_FUNC(sub_82A35EC8);
PPC_FUNC_IMPL(__imp__sub_82A35EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// stw r4,1396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1396, ctx.r4.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// stw r11,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r11.u32);
	// bne cr6,0x82a35ef8
	if (!cr6.eq) goto loc_82A35EF8;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x82a35ef8
	if (cr6.eq) goto loc_82A35EF8;
	// lwz r11,1628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1628);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1628, ctx.r11.u32);
	// blr 
	return;
loc_82A35EF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35F04"))) PPC_WEAK_FUNC(sub_82A35F04);
PPC_FUNC_IMPL(__imp__sub_82A35F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A35F08"))) PPC_WEAK_FUNC(sub_82A35F08);
PPC_FUNC_IMPL(__imp__sub_82A35F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1392(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1392, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35F10"))) PPC_WEAK_FUNC(sub_82A35F10);
PPC_FUNC_IMPL(__imp__sub_82A35F10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35F18"))) PPC_WEAK_FUNC(sub_82A35F18);
PPC_FUNC_IMPL(__imp__sub_82A35F18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1408, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A35F20"))) PPC_WEAK_FUNC(sub_82A35F20);
PPC_FUNC_IMPL(__imp__sub_82A35F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82a3b9a8
	ctx.lr = 0x82A35F3C;
	sub_82A3B9A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,1460
	ctx.r10.s64 = ctx.r31.s64 + 1460;
	// addi r9,r31,1280
	ctx.r9.s64 = ctx.r31.s64 + 1280;
	// addi r4,r10,-84
	ctx.r4.s64 = ctx.r10.s64 + -84;
	// addi r8,r31,1292
	ctx.r8.s64 = ctx.r31.s64 + 1292;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// stfs f0,1272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// addi r7,r31,1424
	ctx.r7.s64 = ctx.r31.s64 + 1424;
	// stfs f0,1276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// addi r6,r31,1436
	ctx.r6.s64 = ctx.r31.s64 + 1436;
	// stfs f0,1280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,1284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// li r30,255
	ctx.r30.s64 = 255;
	// stfs f0,1288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1288, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,1292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1292, temp.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stfs f0,1296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// stfs f0,1300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
	// stfs f0,1304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// stfs f0,1308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
	// stfs f0,1312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// stfs f0,1316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stfs f0,1320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// stfs f0,1324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1324, temp.u32);
	// stfs f0,1328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// stfs f0,1332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// stfs f0,1336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// stfs f0,1340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1340, temp.u32);
	// stfs f0,1344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1344, temp.u32);
	// stfs f0,1348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1348, temp.u32);
	// stfs f0,1352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// stfs f0,1356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1356, temp.u32);
	// stfs f0,1360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// stfs f0,1368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// stfs f0,1372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// stfs f0,1376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// stfs f0,1380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// stfs f0,1384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// stfs f0,1388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1388, temp.u32);
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stfs f0,1424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1424, temp.u32);
	// stfs f0,1428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1428, temp.u32);
	// stfs f0,1432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1432, temp.u32);
	// stfs f0,1436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1436, temp.u32);
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// stfs f0,1444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1444, temp.u32);
loc_82A36000:
	// stwu r30,84(r4)
	ea = 84 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r4.u32 = ea;
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// stb r10,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r10.u8);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// bge 0x82a36000
	if (!cr0.lt) goto loc_82A36000;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f0,1272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stfs f0,1276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stw r10,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r10.u32);
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stw r10,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r10.u32);
	// lfs f13,-26260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// stfs f0,1420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1420, temp.u32);
	// stw r4,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r4.u32);
	// stfs f13,1392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1392, temp.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// stb r10,1456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1456, ctx.r10.u8);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stw r10,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A36100"))) PPC_WEAK_FUNC(sub_82A36100);
PPC_FUNC_IMPL(__imp__sub_82A36100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,1364(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1364);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a36124
	if (!cr6.eq) goto loc_82A36124;
loc_82A3610C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_82A36124:
	// lwz r10,1304(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1304);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// lwz r9,1308(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1308);
	// lwz r8,1312(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// bne cr6,0x82a36160
	if (!cr6.eq) goto loc_82A36160;
	// lfs f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82a3610c
	if (cr6.lt) goto loc_82A3610C;
loc_82A36160:
	// lwz r11,1304(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1304);
	// lwz r10,1308(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1308);
	// lwz r9,1312(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3617C"))) PPC_WEAK_FUNC(sub_82A3617C);
PPC_FUNC_IMPL(__imp__sub_82A3617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36180"))) PPC_WEAK_FUNC(sub_82A36180);
PPC_FUNC_IMPL(__imp__sub_82A36180) {
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
	// lwz r9,1304(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,1308(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1308);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,1312(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// lwz r11,1364(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1364);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x82a361e0
	if (cr6.eq) goto loc_82A361E0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a361e4
	if (!cr6.eq) goto loc_82A361E4;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82a361e4
	if (!cr6.lt) goto loc_82A361E4;
loc_82A361E0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A361E4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3622c
	if (cr6.eq) goto loc_82A3622C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r4,1272
	ctx.r4.s64 = ctx.r4.s64 + 1272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a5a710
	ctx.lr = 0x82A36210;
	sub_82A5A710(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82a36244
	goto loc_82A36244;
loc_82A3622C:
	// lwz r11,1304(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1304);
	// lwz r10,1308(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1308);
	// lwz r9,1312(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82A36244:
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

__attribute__((alias("__imp__sub_82A3625C"))) PPC_WEAK_FUNC(sub_82A3625C);
PPC_FUNC_IMPL(__imp__sub_82A3625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36260"))) PPC_WEAK_FUNC(sub_82A36260);
PPC_FUNC_IMPL(__imp__sub_82A36260) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a35db0
	ctx.lr = 0x82A36280;
	sub_82A35DB0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// fmuls f12,f31,f31
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a362c8
	if (!cr6.lt) goto loc_82A362C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A362C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A362F4"))) PPC_WEAK_FUNC(sub_82A362F4);
PPC_FUNC_IMPL(__imp__sub_82A362F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A362F8"))) PPC_WEAK_FUNC(sub_82A362F8);
PPC_FUNC_IMPL(__imp__sub_82A362F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a35db0
	ctx.lr = 0x82A3631C;
	sub_82A35DB0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f12,f31,f31
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a36378
	if (!cr6.lt) goto loc_82A36378;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r4,1272
	ctx.r4.s64 = ctx.r4.s64 + 1272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a5a710
	ctx.lr = 0x82A3635C;
	sub_82A5A710(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82a36390
	goto loc_82A36390;
loc_82A36378:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82A36390:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A363AC"))) PPC_WEAK_FUNC(sub_82A363AC);
PPC_FUNC_IMPL(__imp__sub_82A363AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A363B0"))) PPC_WEAK_FUNC(sub_82A363B0);
PPC_FUNC_IMPL(__imp__sub_82A363B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f1,6368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a36180
	ctx.lr = 0x82A363F0;
	sub_82A36180(ctx, base);
	// lbz r9,1541(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1541);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x82a3643c
	if (cr6.eq) goto loc_82A3643C;
	// lfs f11,1520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,1528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A3643C:
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

__attribute__((alias("__imp__sub_82A36454"))) PPC_WEAK_FUNC(sub_82A36454);
PPC_FUNC_IMPL(__imp__sub_82A36454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36458"))) PPC_WEAK_FUNC(sub_82A36458);
PPC_FUNC_IMPL(__imp__sub_82A36458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A36460;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5344
	ctx.r5.s64 = 5344;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A36478;
	sub_831CDCF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82a50330
	ctx.lr = 0x82A36488;
	sub_82A50330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r30,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r30.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// li r8,99
	ctx.r8.s64 = 99;
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// li r7,180
	ctx.r7.s64 = 180;
	// stb r30,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r30.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,115
	ctx.r11.s64 = 115;
	// li r29,255
	ctx.r29.s64 = 255;
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stfs f0,4684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4684, temp.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// addi r3,r31,5092
	ctx.r3.s64 = ctx.r31.s64 + 5092;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// lfs f31,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// stb r30,4677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4677, ctx.r30.u8);
	// stb r30,4678(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4678, ctx.r30.u8);
	// stw r8,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r8.u32);
	// stb r7,4679(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4679, ctx.r7.u8);
	// stb r10,4676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4676, ctx.r10.u8);
	// stb r10,4680(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4680, ctx.r10.u8);
	// stfs f0,5008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5008, temp.u32);
	// stfs f0,5012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5012, temp.u32);
	// stfs f0,5016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5016, temp.u32);
	// stb r30,4940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4940, ctx.r30.u8);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r30,4943(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4943, ctx.r30.u8);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r30,5024(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5024, ctx.r30.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r30,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r30.u8);
	// stb r30,4941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4941, ctx.r30.u8);
	// stw r30,5004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5004, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r29,5028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5028, ctx.r29.u32);
	// stw r6,5032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5032, ctx.r6.u32);
	// bl 0x8292b248
	ctx.lr = 0x82A36558;
	sub_8292B248(ctx, base);
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// stb r30,5036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5036, ctx.r30.u8);
	// stb r30,5038(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5038, ctx.r30.u8);
	// stb r30,5039(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5039, ctx.r30.u8);
	// stw r30,5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5040, ctx.r30.u32);
	// stb r30,5044(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5044, ctx.r30.u8);
	// stb r30,5045(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5045, ctx.r30.u8);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_82A36590:
	// addi r10,r11,54
	ctx.r10.s64 = ctx.r11.s64 + 54;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,1114
	cr6.compare<int32_t>(ctx.r7.s32, 1114, xer);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// blt cr6,0x82a36590
	if (cr6.lt) goto loc_82A36590;
	// stfs f31,4672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4672, temp.u32);
	// stb r30,4942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4942, ctx.r30.u8);
	// stw r30,5048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5048, ctx.r30.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stb r30,5037(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5037, ctx.r30.u8);
	// addi r3,r31,5164
	ctx.r3.s64 = ctx.r31.s64 + 5164;
	// stb r30,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r30.u8);
	// stb r30,5052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5052, ctx.r30.u8);
	// stw r30,5056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5056, ctx.r30.u32);
	// stw r29,5060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5060, ctx.r29.u32);
	// stw r30,5064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5064, ctx.r30.u32);
	// bl 0x82a31410
	ctx.lr = 0x82A365E0;
	sub_82A31410(ctx, base);
	// stw r29,5080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5080, ctx.r29.u32);
	// stw r30,5084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5084, ctx.r30.u32);
	// stw r29,5088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5088, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A365F8"))) PPC_WEAK_FUNC(sub_82A365F8);
PPC_FUNC_IMPL(__imp__sub_82A365F8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36600"))) PPC_WEAK_FUNC(sub_82A36600);
PPC_FUNC_IMPL(__imp__sub_82A36600) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// li r5,72
	ctx.r5.s64 = 72;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3660C"))) PPC_WEAK_FUNC(sub_82A3660C);
PPC_FUNC_IMPL(__imp__sub_82A3660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36610"))) PPC_WEAK_FUNC(sub_82A36610);
PPC_FUNC_IMPL(__imp__sub_82A36610) {
	PPC_FUNC_PROLOGUE();
	// li r3,1920
	ctx.r3.s64 = 1920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36618"))) PPC_WEAK_FUNC(sub_82A36618);
PPC_FUNC_IMPL(__imp__sub_82A36618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r4,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// ble cr6,0x82a36638
	if (!cr6.gt) goto loc_82A36638;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stb r10,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r10.u8);
	// blr 
	return;
loc_82A36638:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36644"))) PPC_WEAK_FUNC(sub_82A36644);
PPC_FUNC_IMPL(__imp__sub_82A36644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36648"))) PPC_WEAK_FUNC(sub_82A36648);
PPC_FUNC_IMPL(__imp__sub_82A36648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a3665c
	if (!cr6.eq) goto loc_82A3665C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3665C:
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// twllei r11,0
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36684"))) PPC_WEAK_FUNC(sub_82A36684);
PPC_FUNC_IMPL(__imp__sub_82A36684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36688"))) PPC_WEAK_FUNC(sub_82A36688);
PPC_FUNC_IMPL(__imp__sub_82A36688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,4676(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4676);
	// li r10,5
	ctx.r10.s64 = 5;
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

__attribute__((alias("__imp__sub_82A366A0"))) PPC_WEAK_FUNC(sub_82A366A0);
PPC_FUNC_IMPL(__imp__sub_82A366A0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4676(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4676, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366A8"))) PPC_WEAK_FUNC(sub_82A366A8);
PPC_FUNC_IMPL(__imp__sub_82A366A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366B4"))) PPC_WEAK_FUNC(sub_82A366B4);
PPC_FUNC_IMPL(__imp__sub_82A366B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A366B8"))) PPC_WEAK_FUNC(sub_82A366B8);
PPC_FUNC_IMPL(__imp__sub_82A366B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366C0"))) PPC_WEAK_FUNC(sub_82A366C0);
PPC_FUNC_IMPL(__imp__sub_82A366C0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,212(r3)
	PPC_STORE_U8(ctx.r3.u32 + 212, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366C8"))) PPC_WEAK_FUNC(sub_82A366C8);
PPC_FUNC_IMPL(__imp__sub_82A366C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366D0"))) PPC_WEAK_FUNC(sub_82A366D0);
PPC_FUNC_IMPL(__imp__sub_82A366D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4677(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4677);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366D8"))) PPC_WEAK_FUNC(sub_82A366D8);
PPC_FUNC_IMPL(__imp__sub_82A366D8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4677(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4677, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366E0"))) PPC_WEAK_FUNC(sub_82A366E0);
PPC_FUNC_IMPL(__imp__sub_82A366E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4678(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4678);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366E8"))) PPC_WEAK_FUNC(sub_82A366E8);
PPC_FUNC_IMPL(__imp__sub_82A366E8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4678(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4678, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A366F0"))) PPC_WEAK_FUNC(sub_82A366F0);
PPC_FUNC_IMPL(__imp__sub_82A366F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// stb r11,113(r3)
	PPC_STORE_U8(ctx.r3.u32 + 113, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 114, ctx.r11.u8);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// stb r11,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r11.u8);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stb r11,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stb r11,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r11.u8);
	// stb r11,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r11.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r11.u8);
	// stb r11,82(r3)
	PPC_STORE_U8(ctx.r3.u32 + 82, ctx.r11.u8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r11,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stb r11,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r11.u8);
	// stb r11,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A367B8"))) PPC_WEAK_FUNC(sub_82A367B8);
PPC_FUNC_IMPL(__imp__sub_82A367B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a367d0
	if (!cr6.eq) goto loc_82A367D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a367f4
	goto loc_82A367F4;
loc_82A367D0:
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// twllei r11,0
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
loc_82A367F4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x82a36804
	if (!cr6.lt) goto loc_82A36804;
	// li r10,20
	ctx.r10.s64 = 20;
loc_82A36804:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r10,100
	ctx.r10.s64 = 100;
	// mulli r9,r11,1920
	ctx.r9.s64 = ctx.r11.s64 * 1920;
	// divwu r11,r9,r10
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36824"))) PPC_WEAK_FUNC(sub_82A36824);
PPC_FUNC_IMPL(__imp__sub_82A36824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36828"))) PPC_WEAK_FUNC(sub_82A36828);
PPC_FUNC_IMPL(__imp__sub_82A36828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a3683c
	if (!cr6.eq) goto loc_82A3683C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a36860
	goto loc_82A36860;
loc_82A3683C:
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// twllei r11,0
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
loc_82A36860:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x82a36870
	if (!cr6.lt) goto loc_82A36870;
	// li r10,20
	ctx.r10.s64 = 20;
loc_82A36870:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r10,100
	ctx.r10.s64 = 100;
	// mulli r9,r11,1920
	ctx.r9.s64 = ctx.r11.s64 * 1920;
	// divwu. r11,r9,r10
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a3688c
	if (!cr0.eq) goto loc_82A3688C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3688C:
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// twllei r11,0
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A368B4"))) PPC_WEAK_FUNC(sub_82A368B4);
PPC_FUNC_IMPL(__imp__sub_82A368B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A368B8"))) PPC_WEAK_FUNC(sub_82A368B8);
PPC_FUNC_IMPL(__imp__sub_82A368B8) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stb r11,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r11.u8);
	// stb r11,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r11.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r11.u8);
	// stb r11,82(r3)
	PPC_STORE_U8(ctx.r3.u32 + 82, ctx.r11.u8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r11,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// bl 0x82a366f0
	ctx.lr = 0x82A36998;
	sub_82A366F0(ctx, base);
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

__attribute__((alias("__imp__sub_82A369B0"))) PPC_WEAK_FUNC(sub_82A369B0);
PPC_FUNC_IMPL(__imp__sub_82A369B0) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r6,115
	ctx.r6.s64 = 115;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stb r11,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r11.u8);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r11.u8);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stb r5,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r5.u8);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// bl 0x82932a88
	ctx.lr = 0x82A36A68;
	sub_82932A88(ctx, base);
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

__attribute__((alias("__imp__sub_82A36A80"))) PPC_WEAK_FUNC(sub_82A36A80);
PPC_FUNC_IMPL(__imp__sub_82A36A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A36A88;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// bl 0x8291b548
	ctx.lr = 0x82A36A9C;
	sub_8291B548(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,4712
	ctx.r3.s64 = ctx.r31.s64 + 4712;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,4688(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4688, temp.u32);
	// stfs f31,4692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4692, temp.u32);
	// stfs f31,4696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4696, temp.u32);
	// stfs f31,4700(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4700, temp.u32);
	// stfs f31,4704(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4704, temp.u32);
	// stfs f31,4708(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4708, temp.u32);
	// bl 0x82a369b0
	ctx.lr = 0x82A36AC4;
	sub_82A369B0(ctx, base);
	// addi r3,r31,4808
	ctx.r3.s64 = ctx.r31.s64 + 4808;
	// bl 0x82a368b8
	ctx.lr = 0x82A36ACC;
	sub_82A368B8(ctx, base);
	// stfs f31,4944(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4944, temp.u32);
	// stfs f31,4948(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4948, temp.u32);
	// addi r3,r31,5092
	ctx.r3.s64 = ctx.r31.s64 + 5092;
	// stfs f31,4952(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4952, temp.u32);
	// stfs f31,4956(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4956, temp.u32);
	// stfs f31,4960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4960, temp.u32);
	// stfs f31,4964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4964, temp.u32);
	// stfs f31,4968(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4968, temp.u32);
	// stfs f31,4972(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4972, temp.u32);
	// stfs f31,4976(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4976, temp.u32);
	// stfs f31,4980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4980, temp.u32);
	// stfs f31,4984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4984, temp.u32);
	// stfs f31,4988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4988, temp.u32);
	// stfs f31,5008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5008, temp.u32);
	// stfs f31,5012(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5012, temp.u32);
	// stfs f31,5016(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5016, temp.u32);
	// stfs f31,5068(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5068, temp.u32);
	// stfs f31,5072(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5072, temp.u32);
	// stfs f31,5076(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5076, temp.u32);
	// stfs f31,5100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5100, temp.u32);
	// stfs f31,5104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5104, temp.u32);
	// stfs f31,5108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5108, temp.u32);
	// stfs f31,5112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5112, temp.u32);
	// stfs f31,5116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5116, temp.u32);
	// stfs f31,5120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5120, temp.u32);
	// stfs f31,5124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5124, temp.u32);
	// stfs f31,5128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5128, temp.u32);
	// stfs f31,5132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5132, temp.u32);
	// stfs f31,5136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5136, temp.u32);
	// stfs f31,5140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5140, temp.u32);
	// stfs f31,5144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5144, temp.u32);
	// bl 0x8292b248
	ctx.lr = 0x82A36B4C;
	sub_8292B248(ctx, base);
	// addi r28,r31,5164
	ctx.r28.s64 = ctx.r31.s64 + 5164;
	// li r30,10
	ctx.r30.s64 = 10;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82A36B58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a30088
	ctx.lr = 0x82A36B60;
	sub_82A30088(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bge 0x82a36b58
	if (!cr0.lt) goto loc_82A36B58;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,176(r28)
	PPC_STORE_U8(ctx.r28.u32 + 176, ctx.r11.u8);
	// bl 0x82a36458
	ctx.lr = 0x82A36B7C;
	sub_82A36458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A36B8C"))) PPC_WEAK_FUNC(sub_82A36B8C);
PPC_FUNC_IMPL(__imp__sub_82A36B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36B90"))) PPC_WEAK_FUNC(sub_82A36B90);
PPC_FUNC_IMPL(__imp__sub_82A36B90) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82a3b9a8
	ctx.lr = 0x82A36BD0;
	sub_82A3B9A8(ctx, base);
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

__attribute__((alias("__imp__sub_82A36BE8"))) PPC_WEAK_FUNC(sub_82A36BE8);
PPC_FUNC_IMPL(__imp__sub_82A36BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r7,r3,2
	ctx.r7.s64 = ctx.r3.s64 + 2;
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
loc_82A36C1C:
	// stbx r11,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82a36c1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36C1C;
	// li r8,255
	ctx.r8.s64 = 255;
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r9,22
	ctx.r9.s64 = 22;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// addi r9,r3,62
	ctx.r9.s64 = ctx.r3.s64 + 62;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82A36C70:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a36c70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36C70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36C88"))) PPC_WEAK_FUNC(sub_82A36C88);
PPC_FUNC_IMPL(__imp__sub_82A36C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A36C90;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a36be8
	ctx.lr = 0x82A36CA0;
	sub_82A36BE8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// stb r27,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r27.u8);
	// addi r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 + 92;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r29,21
	ctx.r29.s64 = 21;
	// stfs f31,96(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// addi r28,r11,-1296
	ctx.r28.s64 = ctx.r11.s64 + -1296;
	// stfs f31,100(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f31,104(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f31,108(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f31,112(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f31,116(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
loc_82A36CDC:
	// stbu r27,1296(r28)
	ea = 1296 + ctx.r28.u32;
	PPC_STORE_U8(ea, ctx.r27.u8);
	ctx.r28.u32 = ea;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r27,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r27.u32);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82a3b9a8
	ctx.lr = 0x82A36CFC;
	sub_82A3B9A8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,1296
	ctx.r31.s64 = ctx.r31.s64 + 1296;
	// bge 0x82a36cdc
	if (!cr0.lt) goto loc_82A36CDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A36D18"))) PPC_WEAK_FUNC(sub_82A36D18);
PPC_FUNC_IMPL(__imp__sub_82A36D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,22
	ctx.r10.s64 = 22;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A36D34:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r9,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r9.u8);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f0,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a36d34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36D34;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,448(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f0,464(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,440(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// stfs f13,460(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f13,480(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f13,500(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stfs f0,468(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f0,472(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f0,476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f0,484(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// stfs f0,488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// stfs f0,492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f0,496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// stfs f0,504(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// stfs f0,508(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// stfs f0,512(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f0,520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// stw r8,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r8.u32);
	// lfs f13,11792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11792);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,528(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f13,532(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// stfs f0,536(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// stfs f0,540(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f12,544(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36DDC"))) PPC_WEAK_FUNC(sub_82A36DDC);
PPC_FUNC_IMPL(__imp__sub_82A36DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36DE0"))) PPC_WEAK_FUNC(sub_82A36DE0);
PPC_FUNC_IMPL(__imp__sub_82A36DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a36e08
	if (cr6.lt) goto loc_82A36E08;
	// cmplwi cr6,r4,22
	cr6.compare<uint32_t>(ctx.r4.u32, 22, xer);
	// bge cr6,0x82a36e08
	if (!cr6.lt) goto loc_82A36E08;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// blr 
	return;
loc_82A36E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36E10"))) PPC_WEAK_FUNC(sub_82A36E10);
PPC_FUNC_IMPL(__imp__sub_82A36E10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36E18"))) PPC_WEAK_FUNC(sub_82A36E18);
PPC_FUNC_IMPL(__imp__sub_82A36E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A36E2C:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f0,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a36e2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36E2C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// stfs f0,448(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// stfs f0,464(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,440(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// stfs f13,460(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f0,468(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f0,472(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f0,476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f13,480(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f0,484(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// stfs f0,488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// stfs f0,492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f0,496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// stfs f13,500(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stfs f0,512(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f0,520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// b 0x82a36d18
	sub_82A36D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A36E94"))) PPC_WEAK_FUNC(sub_82A36E94);
PPC_FUNC_IMPL(__imp__sub_82A36E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36E98"))) PPC_WEAK_FUNC(sub_82A36E98);
PPC_FUNC_IMPL(__imp__sub_82A36E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// lfs f13,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
loc_82A36EC0:
	// stfsu f0,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfsu f0,12(r9)
	ea = 12 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a36ec0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36EC0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r11,-616
	ctx.r11.s64 = ctx.r11.s64 + -616;
	// addi r9,r9,-832
	ctx.r9.s64 = ctx.r9.s64 + -832;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A36F20:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a36f20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36F20;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r11,-728
	ctx.r11.s64 = ctx.r11.s64 + -728;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A36F40:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a36f40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36F40;
	// li r11,25
	ctx.r11.s64 = 25;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A36F50:
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfsu f0,12(r8)
	ea = 12 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82a36f50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A36F50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36F64"))) PPC_WEAK_FUNC(sub_82A36F64);
PPC_FUNC_IMPL(__imp__sub_82A36F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36F68"))) PPC_WEAK_FUNC(sub_82A36F68);
PPC_FUNC_IMPL(__imp__sub_82A36F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a36e98
	sub_82A36E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A36F6C"))) PPC_WEAK_FUNC(sub_82A36F6C);
PPC_FUNC_IMPL(__imp__sub_82A36F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A36F70"))) PPC_WEAK_FUNC(sub_82A36F70);
PPC_FUNC_IMPL(__imp__sub_82A36F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A36FB0"))) PPC_WEAK_FUNC(sub_82A36FB0);
PPC_FUNC_IMPL(__imp__sub_82A36FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// addi r11,r10,-616
	ctx.r11.s64 = ctx.r10.s64 + -616;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,-728
	ctx.r5.s64 = ctx.r8.s64 + -728;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// addi r10,r3,-832
	ctx.r10.s64 = ctx.r3.s64 + -832;
	// stfsx f1,r7,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stwx r4,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37008"))) PPC_WEAK_FUNC(sub_82A37008);
PPC_FUNC_IMPL(__imp__sub_82A37008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x837b40f8
	ctx.lr = 0x82A37030;
	sub_837B40F8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
loc_82A3703C:
	// vupkd3d128 v63,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v63 = vTemp;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// vsldoi128 v62,v127,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge cr6,0x82a37084
	if (!cr6.lt) goto loc_82A37084;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82A37084:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b4168
	ctx.lr = 0x82A37090;
	sub_837B4168(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x82a3703c
	if (cr6.lt) goto loc_82A3703C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A370C0"))) PPC_WEAK_FUNC(sub_82A370C0);
PPC_FUNC_IMPL(__imp__sub_82A370C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce778
	ctx.lr = 0x82A370D4;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f28,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// bl 0x83740868
	ctx.lr = 0x82A370F0;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f13,22396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22396);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21212(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21212);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,23304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fdivs f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f1.f64));
	// fnmsubs f5,f31,f12,f6
	ctx.f5.f64 = double(float(-(ctx.f31.f64 * ctx.f12.f64 - ctx.f6.f64)));
	// fmadds f0,f5,f11,f28
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82a37144
	if (!cr6.gt) goto loc_82A37144;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f11,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82a3714c
	goto loc_82A3714C;
loc_82A37144:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f11.f64 = double(temp.f32);
loc_82A3714C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f13,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,19220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19220);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f12,20456(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 20456);
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f7,f0
	ctx.f7.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsqrts f6,f8
	ctx.f6.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fcmpu cr6,f7,f12
	cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// bge cr6,0x82a3718c
	if (!cr6.lt) goto loc_82A3718C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82A3718C:
	// stfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x82A371A4;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A371B4"))) PPC_WEAK_FUNC(sub_82A371B4);
PPC_FUNC_IMPL(__imp__sub_82A371B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A371B8"))) PPC_WEAK_FUNC(sub_82A371B8);
PPC_FUNC_IMPL(__imp__sub_82A371B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f0,9008(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// bl 0x82a36e98
	ctx.lr = 0x82A3724C;
	sub_82A36E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3725C"))) PPC_WEAK_FUNC(sub_82A3725C);
PPC_FUNC_IMPL(__imp__sub_82A3725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37260"))) PPC_WEAK_FUNC(sub_82A37260);
PPC_FUNC_IMPL(__imp__sub_82A37260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A37268;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x82A37270;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r11,-616
	ctx.r11.s64 = ctx.r11.s64 + -616;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f31,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r25,4
	ctx.r25.s64 = 4;
	// addi r7,r10,-728
	ctx.r7.s64 = ctx.r10.s64 + -728;
	// addi r8,r8,-832
	ctx.r8.s64 = ctx.r8.s64 + -832;
loc_82A372AC:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a372ec
	if (!cr6.eq) goto loc_82A372EC;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,16(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,20(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,24(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
loc_82A372EC:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a3732c
	if (!cr6.eq) goto loc_82A3732C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 + 28;
	// lfs f13,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,28(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,32(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,36(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
loc_82A3732C:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82a3736c
	if (!cr6.eq) goto loc_82A3736C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,40
	ctx.r10.s64 = ctx.r27.s64 + 40;
	// lfs f13,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,40(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
	// lfs f11,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,44(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,48(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 48, temp.u32);
loc_82A3736C:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82a373ac
	if (!cr6.eq) goto loc_82A373AC;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,52
	ctx.r10.s64 = ctx.r27.s64 + 52;
	// lfs f13,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,52(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 52, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,56(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,60(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 60, temp.u32);
loc_82A373AC:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stwx r25,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r25.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsx f31,r9,r7
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a372ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A372AC;
	// addi r26,r27,140
	ctx.r26.s64 = ctx.r27.s64 + 140;
	// addi r28,r27,-4
	ctx.r28.s64 = ctx.r27.s64 + -4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82A373DC:
	// lfs f30,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82a370c0
	ctx.lr = 0x82A373F0;
	sub_82A370C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82a370c0
	ctx.lr = 0x82A37400;
	sub_82A370C0(ctx, base);
	// stfsu f31,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r28.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// stfsu f31,12(r31)
	ea = 12 + ctx.r31.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// bne 0x82a373dc
	if (!cr0.eq) goto loc_82A373DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r27,72
	ctx.r31.s64 = ctx.r27.s64 + 72;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lfs f27,-6688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6688);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f29,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f29.f64 = double(temp.f32);
	// fsqrts f28,f27
	ctx.f28.f64 = double(float(sqrt(ctx.f27.f64)));
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_82A37440:
	// lfs f0,-12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f31
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82a37480
	if (cr6.eq) goto loc_82A37480;
	// fdivs f12,f30,f28
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f28.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82A37480:
	// fmuls f12,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// fsqrts f12,f10
	ctx.f12.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x82a374b4
	if (cr6.eq) goto loc_82A374B4;
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82A374B4:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,-8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a5ca28
	ctx.lr = 0x82A374D8;
	sub_82A5CA28(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f11,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bne cr6,0x82a37514
	if (!cr6.eq) goto loc_82A37514;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82a37544
	goto loc_82A37544;
loc_82A37514:
	// fsqrts f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x82a37544
	if (!cr6.gt) goto loc_82A37544;
	// fdivs f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f8,-4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82A37544:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// bne 0x82a37440
	if (!cr0.eq) goto loc_82A37440;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82A37560;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A37564"))) PPC_WEAK_FUNC(sub_82A37564);
PPC_FUNC_IMPL(__imp__sub_82A37564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37568"))) PPC_WEAK_FUNC(sub_82A37568);
PPC_FUNC_IMPL(__imp__sub_82A37568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a37580
	if (cr6.eq) goto loc_82A37580;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82a375ec
	if (!cr6.eq) goto loc_82A375EC;
loc_82A37580:
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82a375ec
	if (!cr6.lt) goto loc_82A375EC;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bge cr6,0x82a375ec
	if (!cr6.lt) goto loc_82A375EC;
	// cmpwi cr6,r6,9
	cr6.compare<int32_t>(ctx.r6.s32, 9, xer);
	// beq cr6,0x82a375a0
	if (cr6.eq) goto loc_82A375A0;
	// cmpwi cr6,r6,10
	cr6.compare<int32_t>(ctx.r6.s32, 10, xer);
	// bne cr6,0x82a375ec
	if (!cr6.eq) goto loc_82A375EC;
loc_82A375A0:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// stw r8,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A375EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A375F8"))) PPC_WEAK_FUNC(sub_82A375F8);
PPC_FUNC_IMPL(__imp__sub_82A375F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a37628
	if (cr6.eq) goto loc_82A37628;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// beq cr6,0x82a37628
	if (cr6.eq) goto loc_82A37628;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a37620
	if (cr6.eq) goto loc_82A37620;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a37628
	if (!cr6.eq) goto loc_82A37628;
loc_82A37620:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A37628:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37630"))) PPC_WEAK_FUNC(sub_82A37630);
PPC_FUNC_IMPL(__imp__sub_82A37630) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37648"))) PPC_WEAK_FUNC(sub_82A37648);
PPC_FUNC_IMPL(__imp__sub_82A37648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A37650;
	__savegprlr_29(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,255
	ctx.r7.s64 = 255;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82A3765C:
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r29,r30,7
	ctx.r29.s64 = ctx.r30.s64 + 7;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A3766C:
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r6,r29,r9
	ctx.r6.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,13
	ctx.r8.s64 = ctx.r10.s64 + 13;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// add r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stwx r11,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// bdnz 0x82a3766c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3766C;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x82a3765c
	if (cr6.lt) goto loc_82A3765C;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A37700"))) PPC_WEAK_FUNC(sub_82A37700);
PPC_FUNC_IMPL(__imp__sub_82A37700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82A37710:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a37740
	if (cr6.eq) goto loc_82A37740;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x82a37740
	if (cr6.eq) goto loc_82A37740;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x82a37738
	if (cr6.eq) goto loc_82A37738;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82a37740
	if (!cr6.eq) goto loc_82A37740;
loc_82A37738:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a37744
	goto loc_82A37744;
loc_82A37740:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A37744:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a37774
	if (cr6.eq) goto loc_82A37774;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,-160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -160, ctx.r10.u32);
	// stw r6,-156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -156, ctx.r6.u32);
	// stw r5,-152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -152, ctx.r5.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82A37774:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a377a4
	if (cr6.eq) goto loc_82A377A4;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x82a377a4
	if (cr6.eq) goto loc_82A377A4;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x82a3779c
	if (cr6.eq) goto loc_82A3779C;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82a377a4
	if (!cr6.eq) goto loc_82A377A4;
loc_82A3779C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a377a8
	goto loc_82A377A8;
loc_82A377A4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A377A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a377d8
	if (cr6.eq) goto loc_82A377D8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,-148(r11)
	PPC_STORE_U32(ctx.r11.u32 + -148, ctx.r10.u32);
	// stw r6,-144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -144, ctx.r6.u32);
	// stw r5,-140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -140, ctx.r5.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_82A377D8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a37808
	if (cr6.eq) goto loc_82A37808;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x82a37808
	if (cr6.eq) goto loc_82A37808;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x82a37800
	if (cr6.eq) goto loc_82A37800;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82a37808
	if (!cr6.eq) goto loc_82A37808;
loc_82A37800:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a3780c
	goto loc_82A3780C;
loc_82A37808:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A3780C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3783c
	if (cr6.eq) goto loc_82A3783C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,-136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -136, ctx.r10.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r6,-132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -132, ctx.r6.u32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r5,-128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -128, ctx.r5.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_82A3783C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a3786c
	if (cr6.eq) goto loc_82A3786C;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x82a3786c
	if (cr6.eq) goto loc_82A3786C;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x82a37864
	if (cr6.eq) goto loc_82A37864;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82a3786c
	if (!cr6.eq) goto loc_82A3786C;
loc_82A37864:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a37870
	goto loc_82A37870;
loc_82A3786C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A37870:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a378a0
	if (cr6.eq) goto loc_82A378A0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r10.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r6,-120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -120, ctx.r6.u32);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r5,-116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -116, ctx.r5.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
loc_82A378A0:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a378d0
	if (cr6.eq) goto loc_82A378D0;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x82a378d0
	if (cr6.eq) goto loc_82A378D0;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x82a378c8
	if (cr6.eq) goto loc_82A378C8;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82a378d0
	if (!cr6.eq) goto loc_82A378D0;
loc_82A378C8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a378d4
	goto loc_82A378D4;
loc_82A378D0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A378D4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a37904
	if (cr6.eq) goto loc_82A37904;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,-112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -112, ctx.r10.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r6,-108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -108, ctx.r6.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r5,-104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -104, ctx.r5.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
loc_82A37904:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a37934
	if (cr6.eq) goto loc_82A37934;
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x82a37934
	if (cr6.eq) goto loc_82A37934;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x82a3792c
	if (cr6.eq) goto loc_82A3792C;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82a37934
	if (!cr6.eq) goto loc_82A37934;
loc_82A3792C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a37938
	goto loc_82A37938;
loc_82A37934:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A37938:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a37968
	if (cr6.eq) goto loc_82A37968;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,-100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -100, ctx.r10.u32);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r6,-96(r11)
	PPC_STORE_U32(ctx.r11.u32 + -96, ctx.r6.u32);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r5,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r5.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_82A37968:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bne 0x82a37710
	if (!cr0.eq) goto loc_82A37710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37978"))) PPC_WEAK_FUNC(sub_82A37978);
PPC_FUNC_IMPL(__imp__sub_82A37978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a37988
	if (cr6.eq) goto loc_82A37988;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82a379c0
	if (!cr6.eq) goto loc_82A379C0;
loc_82A37988:
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82a379c0
	if (!cr6.lt) goto loc_82A379C0;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bge cr6,0x82a379c0
	if (!cr6.lt) goto loc_82A379C0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A379C0:
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A379DC"))) PPC_WEAK_FUNC(sub_82A379DC);
PPC_FUNC_IMPL(__imp__sub_82A379DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A379E0"))) PPC_WEAK_FUNC(sub_82A379E0);
PPC_FUNC_IMPL(__imp__sub_82A379E0) {
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
	// bl 0x82a37648
	ctx.lr = 0x82A379F8;
	sub_82A37648(ctx, base);
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

__attribute__((alias("__imp__sub_82A37A0C"))) PPC_WEAK_FUNC(sub_82A37A0C);
PPC_FUNC_IMPL(__imp__sub_82A37A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37A10"))) PPC_WEAK_FUNC(sub_82A37A10);
PPC_FUNC_IMPL(__imp__sub_82A37A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// lfs f13,-26260(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// lfs f0,9008(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
loc_82A37A3C:
	// stfsu f0,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfsu f0,12(r9)
	ea = 12 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stwu r7,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a37a3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A37A3C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// addi r9,r9,-200
	ctx.r9.s64 = ctx.r9.s64 + -200;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A37AA4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a37aa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A37AA4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r11,-304
	ctx.r11.s64 = ctx.r11.s64 + -304;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A37AC4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a37ac4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A37AC4;
	// li r11,25
	ctx.r11.s64 = 25;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A37AD4:
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfsu f0,12(r8)
	ea = 12 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82a37ad4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A37AD4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f13,28336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28336);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2940(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2940);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-3404(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3404);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8788(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8788);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-8360(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8360);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-9984(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -9984);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f12,264(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f11,268(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f10,272(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f9,276(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f8,280(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37B3C"))) PPC_WEAK_FUNC(sub_82A37B3C);
PPC_FUNC_IMPL(__imp__sub_82A37B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37B40"))) PPC_WEAK_FUNC(sub_82A37B40);
PPC_FUNC_IMPL(__imp__sub_82A37B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a37a10
	sub_82A37A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A37B44"))) PPC_WEAK_FUNC(sub_82A37B44);
PPC_FUNC_IMPL(__imp__sub_82A37B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37B48"))) PPC_WEAK_FUNC(sub_82A37B48);
PPC_FUNC_IMPL(__imp__sub_82A37B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37BA0"))) PPC_WEAK_FUNC(sub_82A37BA0);
PPC_FUNC_IMPL(__imp__sub_82A37BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// addi r11,r10,-88
	ctx.r11.s64 = ctx.r10.s64 + -88;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,-304
	ctx.r5.s64 = ctx.r8.s64 + -304;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// addi r10,r3,-200
	ctx.r10.s64 = ctx.r3.s64 + -200;
	// stfsx f1,r7,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stwx r4,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37BF8"))) PPC_WEAK_FUNC(sub_82A37BF8);
PPC_FUNC_IMPL(__imp__sub_82A37BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A37C20:
	// vupkd3d128 v63,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v63 = vTemp;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// vsldoi128 v62,v127,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge cr6,0x82a37c78
	if (!cr6.lt) goto loc_82A37C78;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82A37C78:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x82a37cc4
	if (cr6.gt) goto loc_82A37CC4;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a37c9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A37C9C;
	// bdzf 4*cr6+eq,0x82a37ca8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A37CA8;
	// bne cr6,0x82a37cb4
	if (!cr6.eq) goto loc_82A37CB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a37cb8
	goto loc_82A37CB8;
loc_82A37C9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a37cbc
	goto loc_82A37CBC;
loc_82A37CA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a37cbc
	goto loc_82A37CBC;
loc_82A37CB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A37CB8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82A37CBC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x837a59c0
	ctx.lr = 0x82A37CC4;
	sub_837A59C0(ctx, base);
loc_82A37CC4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x82a37c20
	if (cr6.lt) goto loc_82A37C20;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37CF0"))) PPC_WEAK_FUNC(sub_82A37CF0);
PPC_FUNC_IMPL(__imp__sub_82A37CF0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x831ce75c
	ctx.lr = 0x82A37D08;
	__savefpr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f21,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// fmr f22,f4
	ctx.f22.f64 = ctx.f4.f64;
	// fmr f30,f5
	ctx.f30.f64 = ctx.f5.f64;
	// fmr f27,f6
	ctx.f27.f64 = ctx.f6.f64;
	// fmr f26,f7
	ctx.f26.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// fmr f25,f9
	ctx.f25.f64 = ctx.f9.f64;
	// bl 0x83740868
	ctx.lr = 0x82A37D40;
	sub_83740868(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f0,20768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20768);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27732(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fdivs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fnmsubs f8,f31,f23,f9
	ctx.f8.f64 = double(float(-(ctx.f31.f64 * ctx.f23.f64 - ctx.f9.f64)));
	// fdivs f7,f8,f22
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f22.f64));
	// fadds f0,f7,f21
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f21.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a37d90
	if (!cr6.gt) goto loc_82A37D90;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82a37d98
	goto loc_82A37D98;
loc_82A37D90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
loc_82A37D98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f28,f10,f12
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fadds f31,f28,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x82a37dc4
	if (!cr6.lt) goto loc_82A37DC4;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82a37dd4
	goto loc_82A37DD4;
loc_82A37DC4:
	// fneg f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x82a37dd4
	if (!cr6.lt) goto loc_82A37DD4;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_82A37DD4:
	// fmuls f30,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a37df0
	if (!cr6.lt) goto loc_82A37DF0;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// b 0x82a37df8
	goto loc_82A37DF8;
loc_82A37DF0:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bne cr6,0x82a37e0c
	if (!cr6.eq) goto loc_82A37E0C;
loc_82A37DF8:
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// bne cr6,0x82a37e0c
	if (!cr6.eq) goto loc_82A37E0C;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x82a37e18
	goto loc_82A37E18;
loc_82A37E0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82A37E18:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f27,f13
	ctx.f27.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x82A37E30;
	sub_83740868(ctx, base);
	// fdivs f13,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 / ctx.f1.f64));
	// fcmpu cr6,f24,f13
	cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// bge cr6,0x82a37e68
	if (!cr6.lt) goto loc_82A37E68;
	// fcmpu cr6,f13,f25
	cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bge cr6,0x82a37e68
	if (!cr6.lt) goto loc_82A37E68;
	// fsubs f0,f25,f24
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f24.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82a37e80
	if (cr6.eq) goto loc_82A37E80;
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f28,f12,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// b 0x82a37e80
	goto loc_82A37E80;
loc_82A37E68:
	// fcmpu cr6,f25,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f25.f64, ctx.f13.f64);
	// bgt cr6,0x82a37e80
	if (cr6.gt) goto loc_82A37E80;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
loc_82A37E80:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7a8
	ctx.lr = 0x82A37E98;
	__restfpr_21(ctx, base);
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

__attribute__((alias("__imp__sub_82A37EAC"))) PPC_WEAK_FUNC(sub_82A37EAC);
PPC_FUNC_IMPL(__imp__sub_82A37EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37EB0"))) PPC_WEAK_FUNC(sub_82A37EB0);
PPC_FUNC_IMPL(__imp__sub_82A37EB0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// bl 0x82a37a10
	ctx.lr = 0x82A37F44;
	sub_82A37A10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A37F54"))) PPC_WEAK_FUNC(sub_82A37F54);
PPC_FUNC_IMPL(__imp__sub_82A37F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A37F58"))) PPC_WEAK_FUNC(sub_82A37F58);
PPC_FUNC_IMPL(__imp__sub_82A37F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A37F60;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x82A37F68;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r25,4
	ctx.r25.s64 = 4;
	// addi r7,r10,-304
	ctx.r7.s64 = ctx.r10.s64 + -304;
	// addi r8,r8,-200
	ctx.r8.s64 = ctx.r8.s64 + -200;
loc_82A37FA4:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a37fe4
	if (!cr6.eq) goto loc_82A37FE4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_82A37FE4:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a38024
	if (!cr6.eq) goto loc_82A38024;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82A38024:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82a38064
	if (!cr6.eq) goto loc_82A38064;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f11,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82A38064:
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82a380a4
	if (!cr6.eq) goto loc_82A380A4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,60(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82A380A4:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stwx r25,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r25.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsx f31,r9,r7
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a37fa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A37FA4;
	// addi r26,r31,144
	ctx.r26.s64 = ctx.r31.s64 + 144;
	// addi r27,r31,-4
	ctx.r27.s64 = ctx.r31.s64 + -4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82A380D4:
	// lfs f30,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f9,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82a37cf0
	ctx.lr = 0x82A38104;
	sub_82A37CF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f9,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a37cf0
	ctx.lr = 0x82A38130;
	sub_82A37CF0(ctx, base);
	// stfsu f31,4(r27)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfsu f31,12(r30)
	ea = 12 + ctx.r30.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bne 0x82a380d4
	if (!cr0.eq) goto loc_82A380D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lfs f27,-6688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6688);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f29,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f29.f64 = double(temp.f32);
	// fsqrts f28,f27
	ctx.f28.f64 = double(float(sqrt(ctx.f27.f64)));
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_82A38174:
	// lfs f0,-16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f31
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq cr6,0x82a381b4
	if (cr6.eq) goto loc_82A381B4;
	// fdivs f12,f30,f28
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f28.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82A381B4:
	// fmuls f12,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// fsqrts f12,f10
	ctx.f12.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x82a381e8
	if (cr6.eq) goto loc_82A381E8;
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82A381E8:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,-8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a5ca28
	ctx.lr = 0x82A3820C;
	sub_82A5CA28(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f10,f11,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bne cr6,0x82a38248
	if (!cr6.eq) goto loc_82A38248;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82a38278
	goto loc_82A38278;
loc_82A38248:
	// fsqrts f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x82a38278
	if (!cr6.gt) goto loc_82A38278;
	// fdivs f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f8,-4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82A38278:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// bne 0x82a38174
	if (!cr0.eq) goto loc_82A38174;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82A38294;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A38298"))) PPC_WEAK_FUNC(sub_82A38298);
PPC_FUNC_IMPL(__imp__sub_82A38298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lvx128 v1,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0d80
	ctx.lr = 0x82A382E4;
	sub_837A0D80(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f11,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lvx128 v2,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0cd0
	ctx.lr = 0x82A38328;
	sub_837A0CD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A38340"))) PPC_WEAK_FUNC(sub_82A38340);
PPC_FUNC_IMPL(__imp__sub_82A38340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f13,-20096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A38414"))) PPC_WEAK_FUNC(sub_82A38414);
PPC_FUNC_IMPL(__imp__sub_82A38414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38418"))) PPC_WEAK_FUNC(sub_82A38418);
PPC_FUNC_IMPL(__imp__sub_82A38418) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a3844c
	if (!cr6.eq) goto loc_82A3844C;
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x82a38514
	if (cr6.eq) goto loc_82A38514;
loc_82A3844C:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x82a38480
	if (!cr6.eq) goto loc_82A38480;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x82a38480
	if (!cr6.eq) goto loc_82A38480;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x82a38484
	if (cr6.eq) goto loc_82A38484;
loc_82A38480:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A38484:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a384ac
	if (cr6.eq) goto loc_82A384AC;
	// lfs f11,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x82a384ac
	if (!cr6.eq) goto loc_82A384AC;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82a38514
	if (cr6.eq) goto loc_82A38514;
loc_82A384AC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x82a384c4
	if (cr6.gt) goto loc_82A384C4;
	// fsel f2,f0,f0,f13
	ctx.f2.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82A384C4:
	// stfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0d80
	ctx.lr = 0x82A384EC;
	sub_837A0D80(ctx, base);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82A38514:
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

__attribute__((alias("__imp__sub_82A38528"))) PPC_WEAK_FUNC(sub_82A38528);
PPC_FUNC_IMPL(__imp__sub_82A38528) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a3855c
	if (!cr6.eq) goto loc_82A3855C;
	// lfs f12,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x82a38684
	if (cr6.eq) goto loc_82A38684;
loc_82A3855C:
	// lfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82a38590
	if (!cr6.eq) goto loc_82A38590;
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x82a38590
	if (!cr6.eq) goto loc_82A38590;
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x82a38594
	if (cr6.eq) goto loc_82A38594;
loc_82A38590:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A38594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a385f0
	if (cr6.eq) goto loc_82A385F0;
	// lfs f12,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82a385d4
	if (!cr6.eq) goto loc_82A385D4;
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x82a385d4
	if (!cr6.eq) goto loc_82A385D4;
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x82a385d8
	if (cr6.eq) goto loc_82A385D8;
loc_82A385D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A385D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a385f0
	if (cr6.eq) goto loc_82A385F0;
	// lfs f12,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82a38684
	if (cr6.eq) goto loc_82A38684;
loc_82A385F0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82a38608
	if (cr6.gt) goto loc_82A38608;
	// fsel f1,f0,f0,f13
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82A38608:
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0cd0
	ctx.lr = 0x82A3864C;
	sub_837A0CD0(ctx, base);
	// lfs f9,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,68(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,72(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,76(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f5,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,84(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f4,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,88(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f3,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,92(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_82A38684:
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

__attribute__((alias("__imp__sub_82A38698"))) PPC_WEAK_FUNC(sub_82A38698);
PPC_FUNC_IMPL(__imp__sub_82A38698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A386A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a38790
	if (cr6.eq) goto loc_82A38790;
	// lwz r11,4460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a38790
	if (!cr6.eq) goto loc_82A38790;
	// lfs f1,4464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x82A386D0;
	sub_82A29110(ctx, base);
	// lfs f1,4464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a29130
	ctx.lr = 0x82A386DC;
	sub_82A29130(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a38778
	if (cr6.gt) goto loc_82A38778;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f10,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f0,32036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fsubs f13,f10,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// fcmpu cr6,f5,f12
	cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// ble cr6,0x82a38760
	if (!cr6.gt) goto loc_82A38760;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82a38764
	goto loc_82A38764;
loc_82A38760:
	// fsel f0,f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
loc_82A38764:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82a38774
	if (cr6.gt) goto loc_82A38774;
	// fsel f12,f13,f13,f11
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
loc_82A38774:
	// stfs f12,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
loc_82A38778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38418
	ctx.lr = 0x82A38780;
	sub_82A38418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38528
	ctx.lr = 0x82A38788;
	sub_82A38528(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
loc_82A38790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A38798"))) PPC_WEAK_FUNC(sub_82A38798);
PPC_FUNC_IMPL(__imp__sub_82A38798) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// bl 0x82a38418
	ctx.lr = 0x82A387C0;
	sub_82A38418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a38528
	ctx.lr = 0x82A387C8;
	sub_82A38528(ctx, base);
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

__attribute__((alias("__imp__sub_82A387DC"))) PPC_WEAK_FUNC(sub_82A387DC);
PPC_FUNC_IMPL(__imp__sub_82A387DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A387E0"))) PPC_WEAK_FUNC(sub_82A387E0);
PPC_FUNC_IMPL(__imp__sub_82A387E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A387E8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce768
	ctx.lr = 0x82A387F0;
	__savefpr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r26,292(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,6112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a38bcc
	if (cr6.eq) goto loc_82A38BCC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a38bcc
	if (cr6.eq) goto loc_82A38BCC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a38bcc
	if (cr6.eq) goto loc_82A38BCC;
	// lwz r10,5356(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x82a38bcc
	if (!cr6.eq) goto loc_82A38BCC;
	// lwz r10,8144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8148(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	// lfs f13,5172(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5172);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,8152(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// addi r23,r26,5116
	ctx.r23.s64 = ctx.r26.s64 + 5116;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// ble cr6,0x82a38864
	if (!cr6.gt) goto loc_82A38864;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A38864:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a38bcc
	if (cr6.eq) goto loc_82A38BCC;
	// lwz r10,4456(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4456);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82a3889c
	if (cr6.eq) goto loc_82A3889C;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x82a3889c
	if (cr6.eq) goto loc_82A3889C;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a388ac
	goto loc_82A388AC;
loc_82A3889C:
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82A388AC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82a388c0
	if (cr6.eq) goto loc_82A388C0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A388C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// lfs f25,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f13,f25
	ctx.f13.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x82A388EC;
	sub_825EB548(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f24,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f24.f64 = double(temp.f32);
	// stfs f24,136(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x825f89a8
	ctx.lr = 0x82A3890C;
	sub_825F89A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825f89a8
	ctx.lr = 0x82A38918;
	sub_825F89A8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8263eeb0
	ctx.lr = 0x82A38928;
	sub_8263EEB0(ctx, base);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f30,0(r25)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stfs f31,4(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// stfs f25,8(r25)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// lfs f0,7060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f24,16(r25)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r25.u32 + 16, temp.u32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,12(r25)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// bl 0x82a38418
	ctx.lr = 0x82A38958;
	sub_82A38418(ctx, base);
	// lbz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a38bc0
	if (cr6.eq) goto loc_82A38BC0;
	// li r27,255
	ctx.r27.s64 = 255;
	// li r28,255
	ctx.r28.s64 = 255;
	// li r29,255
	ctx.r29.s64 = 255;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A38978:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1a9e8
	ctx.lr = 0x82A38984;
	sub_82A1A9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82a389b8
	if (cr6.eq) goto loc_82A389B8;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a389a4
	if (!cr6.lt) goto loc_82A389A4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82A389A4:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a389b8
	if (cr6.gt) goto loc_82A389B8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82A389B8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// blt cr6,0x82a38978
	if (cr6.lt) goto loc_82A38978;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a389d8
	if (cr6.lt) goto loc_82A389D8;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a389dc
	if (cr6.lt) goto loc_82A389DC;
loc_82A389D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A389DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a389fc
	if (cr6.eq) goto loc_82A389FC;
	// add r11,r27,r26
	ctx.r11.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a38a00
	goto loc_82A38A00;
loc_82A389FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A38A00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a38bc0
	if (cr6.eq) goto loc_82A38BC0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x82a38a20
	if (cr6.lt) goto loc_82A38A20;
	// cmpwi cr6,r28,22
	cr6.compare<int32_t>(ctx.r28.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a38a24
	if (cr6.lt) goto loc_82A38A24;
loc_82A38A20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A38A24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a38a44
	if (cr6.eq) goto loc_82A38A44;
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a38a48
	goto loc_82A38A48;
loc_82A38A44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A38A48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a38bc0
	if (cr6.eq) goto loc_82A38BC0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A38A60;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82A38A74;
	sub_82A0C788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a38bc0
	if (cr6.eq) goto loc_82A38BC0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a38bc0
	if (cr6.eq) goto loc_82A38BC0;
	// lwz r7,1280(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r6,1280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,1288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,1288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lwz r5,1284(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lfs f28,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f28.f64 = double(temp.f32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f26,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f26.f64 = double(temp.f32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lfs f27,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f27.f64 = double(temp.f32);
	// fadds f12,f27,f26
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f26.f64));
	// lfs f0,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f29,f28
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// lwz r4,1284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f8,f25,f10
	ctx.f8.f64 = double(float(ctx.f25.f64 - ctx.f10.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f9,f30,f11
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x82A38AFC;
	sub_825EB548(ctx, base);
	// lis r3,-32228
	ctx.r3.s64 = -2112094208;
	// lfs f7,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lbz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lfs f0,9104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f30,f7,f0
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// fadds f29,f29,f13
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// fadds f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// fadds f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f0.f64));
	// bne cr6,0x82a38b48
	if (!cr6.eq) goto loc_82A38B48;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82a38b5c
	goto loc_82A38B5C;
loc_82A38B48:
	// fsubs f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f30.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f12,f26,f27
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f29,f28
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
loc_82A38B5C:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825eb548
	ctx.lr = 0x82A38B68;
	sub_825EB548(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,21712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f7,f28,f11
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// stfs f7,40(r25)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r25.u32 + 40, temp.u32);
	// fsubs f6,f30,f9
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// stfs f6,44(r25)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r25.u32 + 44, temp.u32);
	// fsubs f5,f27,f8
	ctx.f5.f64 = double(float(ctx.f27.f64 - ctx.f8.f64));
	// stfs f5,48(r25)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r25.u32 + 48, temp.u32);
	// fadds f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// stfs f4,52(r25)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r25.u32 + 52, temp.u32);
	// fadds f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// stfs f3,56(r25)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r25.u32 + 56, temp.u32);
	// fadds f2,f8,f26
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f26.f64));
	// stfs f2,60(r25)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r25.u32 + 60, temp.u32);
	// stfs f24,64(r25)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r25.u32 + 64, temp.u32);
	// b 0x82a38bc4
	goto loc_82A38BC4;
loc_82A38BC0:
	// stfs f31,64(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 64, temp.u32);
loc_82A38BC4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a38528
	ctx.lr = 0x82A38BCC;
	sub_82A38528(ctx, base);
loc_82A38BCC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b4
	ctx.lr = 0x82A38BD8;
	__restfpr_24(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A38BDC"))) PPC_WEAK_FUNC(sub_82A38BDC);
PPC_FUNC_IMPL(__imp__sub_82A38BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38BE0"))) PPC_WEAK_FUNC(sub_82A38BE0);
PPC_FUNC_IMPL(__imp__sub_82A38BE0) {
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
	// cmpwi cr6,r5,100
	cr6.compare<int32_t>(ctx.r5.s32, 100, xer);
	// blt cr6,0x82a38c14
	if (cr6.lt) goto loc_82A38C14;
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
loc_82A38C14:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38C20;
	sub_82A351B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// slw r9,r11,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82A38C4C"))) PPC_WEAK_FUNC(sub_82A38C4C);
PPC_FUNC_IMPL(__imp__sub_82A38C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38C50"))) PPC_WEAK_FUNC(sub_82A38C50);
PPC_FUNC_IMPL(__imp__sub_82A38C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A38C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,99
	cr6.compare<int32_t>(ctx.r5.s32, 99, xer);
	// blt cr6,0x82a38c7c
	if (cr6.lt) goto loc_82A38C7C;
loc_82A38C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A38C7C:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38C88;
	sub_82A351B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a38c70
	if (!cr6.eq) goto loc_82A38C70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38CA8;
	sub_82A351B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// slw r9,r11,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A38CD0"))) PPC_WEAK_FUNC(sub_82A38CD0);
PPC_FUNC_IMPL(__imp__sub_82A38CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A38CD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,99
	cr6.compare<int32_t>(ctx.r5.s32, 99, xer);
	// blt cr6,0x82a38cfc
	if (cr6.lt) goto loc_82A38CFC;
loc_82A38CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A38CFC:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38D08;
	sub_82A351B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a38cf0
	if (!cr6.eq) goto loc_82A38CF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38D28;
	sub_82A351B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// slw r9,r11,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// andc r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A38D50"))) PPC_WEAK_FUNC(sub_82A38D50);
PPC_FUNC_IMPL(__imp__sub_82A38D50) {
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
	// cmpwi cr6,r5,100
	cr6.compare<int32_t>(ctx.r5.s32, 100, xer);
	// blt cr6,0x82a38d88
	if (cr6.lt) goto loc_82A38D88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
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
loc_82A38D88:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38D94;
	sub_82A351B0(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_82A38DB4"))) PPC_WEAK_FUNC(sub_82A38DB4);
PPC_FUNC_IMPL(__imp__sub_82A38DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38DB8"))) PPC_WEAK_FUNC(sub_82A38DB8);
PPC_FUNC_IMPL(__imp__sub_82A38DB8) {
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
	// cmpwi cr6,r5,100
	cr6.compare<int32_t>(ctx.r5.s32, 100, xer);
	// blt cr6,0x82a38df0
	if (cr6.lt) goto loc_82A38DF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
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
loc_82A38DF0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38DFC;
	sub_82A351B0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_82A38E1C"))) PPC_WEAK_FUNC(sub_82A38E1C);
PPC_FUNC_IMPL(__imp__sub_82A38E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38E20"))) PPC_WEAK_FUNC(sub_82A38E20);
PPC_FUNC_IMPL(__imp__sub_82A38E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A38E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,99
	cr6.compare<int32_t>(ctx.r5.s32, 99, xer);
	// blt cr6,0x82a38e50
	if (cr6.lt) goto loc_82A38E50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A38E50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38E5C;
	sub_82A351B0(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A38E6C;
	sub_82A351B0(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A38E8C"))) PPC_WEAK_FUNC(sub_82A38E8C);
PPC_FUNC_IMPL(__imp__sub_82A38E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38E90"))) PPC_WEAK_FUNC(sub_82A38E90);
PPC_FUNC_IMPL(__imp__sub_82A38E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
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

__attribute__((alias("__imp__sub_82A38EA0"))) PPC_WEAK_FUNC(sub_82A38EA0);
PPC_FUNC_IMPL(__imp__sub_82A38EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A38EA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r24,6(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r23,5(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x82a38ed8
	if (!cr6.eq) goto loc_82A38ED8;
	// li r24,100
	ctx.r24.s64 = 100;
loc_82A38ED8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a38f68
	if (!cr6.lt) goto loc_82A38F68;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r27,r11,7160
	ctx.r27.s64 = ctx.r11.s64 + 7160;
loc_82A38EF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A38EFC;
	sub_82A351B0(ctx, base);
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A38F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a38f3c
	if (cr6.eq) goto loc_82A38F3C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a38ef0
	if (cr6.lt) goto loc_82A38EF0;
loc_82A38F3C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82a38f68
	if (!cr6.gt) goto loc_82A38F68;
	// cmpwi cr6,r24,255
	cr6.compare<int32_t>(ctx.r24.s32, 255, xer);
	// blt cr6,0x82a38f54
	if (cr6.lt) goto loc_82A38F54;
	// cmpw cr6,r23,r29
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r29.s32, xer);
	// b 0x82a38f60
	goto loc_82A38F60;
loc_82A38F54:
	// cmpw cr6,r23,r29
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r29.s32, xer);
	// bgt cr6,0x82a38f68
	if (cr6.gt) goto loc_82A38F68;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, xer);
loc_82A38F60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x82a38f6c
	if (!cr6.gt) goto loc_82A38F6C;
loc_82A38F68:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A38F6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A38F74"))) PPC_WEAK_FUNC(sub_82A38F74);
PPC_FUNC_IMPL(__imp__sub_82A38F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A38F78"))) PPC_WEAK_FUNC(sub_82A38F78);
PPC_FUNC_IMPL(__imp__sub_82A38F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A38F80;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r21,5(r4)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r20,6(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a3906c
	if (!cr6.lt) goto loc_82A3906C;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r22,r11,7160
	ctx.r22.s64 = ctx.r11.s64 + 7160;
loc_82A38FBC:
	// addi r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a351b0
	ctx.lr = 0x82A38FD0;
	sub_82A351B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a39018
	if (!cr6.eq) goto loc_82A39018;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A38FF0;
	sub_82A351B0(ctx, base);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r9,r11,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// lwzx r7,r9,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A39014;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A39018:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39048
	if (!cr6.eq) goto loc_82A39048;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a38fbc
	if (cr6.lt) goto loc_82A38FBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A39048:
	// cmpwi cr6,r20,255
	cr6.compare<int32_t>(ctx.r20.s32, 255, xer);
	// blt cr6,0x82a39058
	if (cr6.lt) goto loc_82A39058;
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// b 0x82a39064
	goto loc_82A39064;
loc_82A39058:
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// bgt cr6,0x82a3906c
	if (cr6.gt) goto loc_82A3906C;
	// cmpw cr6,r25,r20
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, xer);
loc_82A39064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x82a39070
	if (!cr6.gt) goto loc_82A39070;
loc_82A3906C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A39070:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39078"))) PPC_WEAK_FUNC(sub_82A39078);
PPC_FUNC_IMPL(__imp__sub_82A39078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A39080;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r21,5(r4)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r20,6(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a3916c
	if (!cr6.lt) goto loc_82A3916C;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r22,r11,7160
	ctx.r22.s64 = ctx.r11.s64 + 7160;
loc_82A390BC:
	// addi r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a351b0
	ctx.lr = 0x82A390D0;
	sub_82A351B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a39118
	if (!cr6.eq) goto loc_82A39118;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A390F0;
	sub_82A351B0(ctx, base);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r9,r11,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// lwzx r7,r9,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A39114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A39118:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39148
	if (!cr6.eq) goto loc_82A39148;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a390bc
	if (cr6.lt) goto loc_82A390BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A39148:
	// cmpwi cr6,r20,255
	cr6.compare<int32_t>(ctx.r20.s32, 255, xer);
	// blt cr6,0x82a39158
	if (cr6.lt) goto loc_82A39158;
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// b 0x82a39164
	goto loc_82A39164;
loc_82A39158:
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// bgt cr6,0x82a3916c
	if (cr6.gt) goto loc_82A3916C;
	// cmpw cr6,r25,r20
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, xer);
loc_82A39164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x82a39170
	if (!cr6.gt) goto loc_82A39170;
loc_82A3916C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A39170:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39178"))) PPC_WEAK_FUNC(sub_82A39178);
PPC_FUNC_IMPL(__imp__sub_82A39178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A39180;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r24,5(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r23,6(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a39238
	if (!cr6.lt) goto loc_82A39238;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r25,r11,7160
	ctx.r25.s64 = ctx.r11.s64 + 7160;
loc_82A391BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A391C8;
	sub_82A351B0(ctx, base);
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A391E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a39214
	if (!cr6.eq) goto loc_82A39214;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a391bc
	if (cr6.lt) goto loc_82A391BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A39214:
	// cmpwi cr6,r23,255
	cr6.compare<int32_t>(ctx.r23.s32, 255, xer);
	// blt cr6,0x82a39224
	if (cr6.lt) goto loc_82A39224;
	// cmpw cr6,r24,r29
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r29.s32, xer);
	// b 0x82a39230
	goto loc_82A39230;
loc_82A39224:
	// cmpw cr6,r24,r29
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r29.s32, xer);
	// bgt cr6,0x82a39238
	if (cr6.gt) goto loc_82A39238;
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, xer);
loc_82A39230:
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// ble cr6,0x82a3923c
	if (!cr6.gt) goto loc_82A3923C;
loc_82A39238:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A3923C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39244"))) PPC_WEAK_FUNC(sub_82A39244);
PPC_FUNC_IMPL(__imp__sub_82A39244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39248"))) PPC_WEAK_FUNC(sub_82A39248);
PPC_FUNC_IMPL(__imp__sub_82A39248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A39250;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r21,5(r4)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r20,6(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a3933c
	if (!cr6.lt) goto loc_82A3933C;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r22,r11,7160
	ctx.r22.s64 = ctx.r11.s64 + 7160;
loc_82A3928C:
	// addi r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a351b0
	ctx.lr = 0x82A392A0;
	sub_82A351B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a392e8
	if (!cr6.eq) goto loc_82A392E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A392C0;
	sub_82A351B0(ctx, base);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r9,r11,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// lwzx r7,r9,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A392E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A392E8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39318
	if (!cr6.eq) goto loc_82A39318;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3928c
	if (cr6.lt) goto loc_82A3928C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A39318:
	// cmpwi cr6,r20,255
	cr6.compare<int32_t>(ctx.r20.s32, 255, xer);
	// blt cr6,0x82a39328
	if (cr6.lt) goto loc_82A39328;
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// b 0x82a39334
	goto loc_82A39334;
loc_82A39328:
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// bgt cr6,0x82a3933c
	if (cr6.gt) goto loc_82A3933C;
	// cmpw cr6,r25,r20
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, xer);
loc_82A39334:
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// ble cr6,0x82a39340
	if (!cr6.gt) goto loc_82A39340;
loc_82A3933C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A39340:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39348"))) PPC_WEAK_FUNC(sub_82A39348);
PPC_FUNC_IMPL(__imp__sub_82A39348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A39350;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r21,5(r4)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r20,6(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a3943c
	if (!cr6.lt) goto loc_82A3943C;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r22,r11,7160
	ctx.r22.s64 = ctx.r11.s64 + 7160;
loc_82A3938C:
	// addi r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a351b0
	ctx.lr = 0x82A393A0;
	sub_82A351B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a393e8
	if (!cr6.eq) goto loc_82A393E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A393C0;
	sub_82A351B0(ctx, base);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r9,r11,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// lwzx r7,r9,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A393E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A393E8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39418
	if (!cr6.eq) goto loc_82A39418;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3938c
	if (cr6.lt) goto loc_82A3938C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A39418:
	// cmpwi cr6,r20,255
	cr6.compare<int32_t>(ctx.r20.s32, 255, xer);
	// blt cr6,0x82a39428
	if (cr6.lt) goto loc_82A39428;
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// b 0x82a39434
	goto loc_82A39434;
loc_82A39428:
	// cmpw cr6,r21,r25
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, xer);
	// bgt cr6,0x82a3943c
	if (cr6.gt) goto loc_82A3943C;
	// cmpw cr6,r25,r20
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, xer);
loc_82A39434:
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// ble cr6,0x82a39440
	if (!cr6.gt) goto loc_82A39440;
loc_82A3943C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A39440:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39448"))) PPC_WEAK_FUNC(sub_82A39448);
PPC_FUNC_IMPL(__imp__sub_82A39448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A39450;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f0,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x82a3952c
	if (!cr6.lt) goto loc_82A3952C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A394AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A394B8;
	sub_82A351B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A394CC;
	sub_82A351B0(ctx, base);
	// lfsx f0,r30,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a394e4
	if (cr6.gt) goto loc_82A394E4;
	// lfsx f13,r30,r3
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82a394f8
	if (!cr6.gt) goto loc_82A394F8;
loc_82A394E4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a394f8
	if (!cr6.eq) goto loc_82A394F8;
	// lfsx f0,r30,r3
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a3952c
	if (cr6.gt) goto loc_82A3952C;
loc_82A394F8:
	// lbz r11,6(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a39528
	if (cr6.gt) goto loc_82A39528;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a394ac
	if (cr6.lt) goto loc_82A394AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A39528:
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
loc_82A3952C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3953C"))) PPC_WEAK_FUNC(sub_82A3953C);
PPC_FUNC_IMPL(__imp__sub_82A3953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39540"))) PPC_WEAK_FUNC(sub_82A39540);
PPC_FUNC_IMPL(__imp__sub_82A39540) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a395c4
	if (cr6.eq) goto loc_82A395C4;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,7168
	ctx.r11.s64 = ctx.r11.s64 + 7168;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A395AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x82a395e8
	goto loc_82A395E8;
loc_82A395C4:
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r6,r7,12
	ctx.r6.s64 = ctx.r7.s64 + 12;
	// addi r9,r10,7168
	ctx.r9.s64 = ctx.r10.s64 + 7168;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A395E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A395E8:
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

__attribute__((alias("__imp__sub_82A39600"))) PPC_WEAK_FUNC(sub_82A39600);
PPC_FUNC_IMPL(__imp__sub_82A39600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,16100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16100);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stb r11,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r11.u8);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stb r11,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r11.u8);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stb r11,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r11.u8);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stb r11,95(r3)
	PPC_STORE_U8(ctx.r3.u32 + 95, ctx.r11.u8);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stfs f13,196(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stb r7,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r7.u8);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stb r6,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r6.u8);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stb r5,123(r3)
	PPC_STORE_U8(ctx.r3.u32 + 123, ctx.r5.u8);
	// stfs f13,224(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stb r4,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r4.u8);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f13,252(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f13,280(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 151, ctx.r11.u8);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stb r9,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r9.u8);
	// stb r8,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r8.u8);
	// stb r7,150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 150, ctx.r7.u8);
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stb r11,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r11.u8);
	// stb r11,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r11.u8);
	// stb r11,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r11.u8);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// stb r11,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r11.u8);
	// stb r11,205(r3)
	PPC_STORE_U8(ctx.r3.u32 + 205, ctx.r11.u8);
	// stb r11,206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 206, ctx.r11.u8);
	// stb r11,207(r3)
	PPC_STORE_U8(ctx.r3.u32 + 207, ctx.r11.u8);
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// stb r11,233(r3)
	PPC_STORE_U8(ctx.r3.u32 + 233, ctx.r11.u8);
	// stb r11,234(r3)
	PPC_STORE_U8(ctx.r3.u32 + 234, ctx.r11.u8);
	// stb r11,235(r3)
	PPC_STORE_U8(ctx.r3.u32 + 235, ctx.r11.u8);
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r11.u8);
	// stw r10,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r10.u32);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// stb r11,261(r3)
	PPC_STORE_U8(ctx.r3.u32 + 261, ctx.r11.u8);
	// stb r11,262(r3)
	PPC_STORE_U8(ctx.r3.u32 + 262, ctx.r11.u8);
	// stb r11,263(r3)
	PPC_STORE_U8(ctx.r3.u32 + 263, ctx.r11.u8);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A397CC"))) PPC_WEAK_FUNC(sub_82A397CC);
PPC_FUNC_IMPL(__imp__sub_82A397CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A397D0"))) PPC_WEAK_FUNC(sub_82A397D0);
PPC_FUNC_IMPL(__imp__sub_82A397D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A397D8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mulli r9,r6,28
	ctx.r9.s64 = ctx.r6.s64 * 28;
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lfs f29,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,4(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r10,-28
	ctx.r31.s64 = ctx.r10.s64 + -28;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x82a398e4
	if (!cr6.gt) goto loc_82A398E4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r28,r10,7168
	ctx.r28.s64 = ctx.r10.s64 + 7168;
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82A39848:
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// beq cr6,0x82a39890
	if (cr6.eq) goto loc_82A39890;
	// addi r9,r28,28
	ctx.r9.s64 = ctx.r28.s64 + 28;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A39884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// b 0x82a398b4
	goto loc_82A398B4;
loc_82A39890:
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A398B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82A398B4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82a398e4
	if (cr6.eq) goto loc_82A398E4;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82a398d4
	if (!cr6.lt) goto loc_82A398D4;
	// lfs f31,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
loc_82A398D4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// blt cr6,0x82a39848
	if (cr6.lt) goto loc_82A39848;
loc_82A398E4:
	// stfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39900"))) PPC_WEAK_FUNC(sub_82A39900);
PPC_FUNC_IMPL(__imp__sub_82A39900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A39908;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// stb r11,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r11.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// slw r5,r11,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,16100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// stb r4,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r4.u8);
	// stb r4,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r4.u8);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stb r3,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r3.u8);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stb r31,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r31.u8);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stb r31,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r31.u8);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r31,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r31.u8);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r31,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r31.u8);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r31,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r31.u8);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r31,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r31.u8);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r31,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r31.u8);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// li r10,100
	ctx.r10.s64 = 100;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82a397d0
	ctx.lr = 0x82A39A18;
	sub_82A397D0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82a39a38
	if (!cr6.eq) goto loc_82A39A38;
loc_82A39A24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A39A38:
	// addic. r30,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r30.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x82a39a7c
	if (!cr0.gt) goto loc_82A39A7C;
loc_82A39A40:
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a397d0
	ctx.lr = 0x82A39A64;
	sub_82A397D0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x82a39a24
	if (cr6.eq) goto loc_82A39A24;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x82a39a40
	if (cr6.lt) goto loc_82A39A40;
loc_82A39A7C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a39abc
	if (cr6.eq) goto loc_82A39ABC;
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a397d0
	ctx.lr = 0x82A39AAC;
	sub_82A397D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82a39ac0
	if (!cr6.eq) goto loc_82A39AC0;
loc_82A39ABC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A39AC0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39AD0"))) PPC_WEAK_FUNC(sub_82A39AD0);
PPC_FUNC_IMPL(__imp__sub_82A39AD0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stb r6,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r6.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// slw r4,r31,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r4.u8 & 0x3F));
	// lfs f1,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lfs f0,16100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r5,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r5.u8);
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r7,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r7.u8);
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r7,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r7.u8);
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// li r10,100
	ctx.r10.s64 = 100;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f2,20056(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20056);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a397d0
	ctx.lr = 0x82A39B84;
	sub_82A397D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r3,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// subfe r3,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82A39BA8"))) PPC_WEAK_FUNC(sub_82A39BA8);
PPC_FUNC_IMPL(__imp__sub_82A39BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39bc0
	if (!cr6.eq) goto loc_82A39BC0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f11,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82a39bc8
	goto loc_82A39BC8;
loc_82A39BC0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f11.f64 = double(temp.f32);
loc_82A39BC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f12,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r11,r11,20964
	ctx.r11.s64 = ctx.r11.s64 + 20964;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82a39c08
	if (cr6.eq) goto loc_82A39C08;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a39c20
	if (!cr6.lt) goto loc_82A39C20;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82a39c2c
	goto loc_82A39C2C;
loc_82A39C08:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a39c20
	if (!cr6.lt) goto loc_82A39C20;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82a39c2c
	goto loc_82A39C2C;
loc_82A39C20:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a39c30
	if (cr6.lt) goto loc_82A39C30;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82A39C2C:
	// stfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82A39C30:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a39c60
	if (!cr6.lt) goto loc_82A39C60;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A39C60:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A39C74"))) PPC_WEAK_FUNC(sub_82A39C74);
PPC_FUNC_IMPL(__imp__sub_82A39C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A39C78"))) PPC_WEAK_FUNC(sub_82A39C78);
PPC_FUNC_IMPL(__imp__sub_82A39C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82A39C80;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce768
	ctx.lr = 0x82A39C88;
	__savefpr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r19,6(r5)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r18,5(r5)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bne cr6,0x82a39cd0
	if (!cr6.eq) goto loc_82A39CD0;
	// li r19,100
	ctx.r19.s64 = 100;
loc_82A39CD0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a39ba8
	ctx.lr = 0x82A39CE0;
	sub_82A39BA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lfs f28,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bge cr6,0x82a39edc
	if (!cr6.lt) goto loc_82A39EDC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// rlwinm r26,r8,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r21,-32251
	ctx.r21.s64 = -2113601536;
	// lfs f27,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,21208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21208);
	ctx.f25.f64 = double(temp.f32);
loc_82A39D24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A39D30;
	sub_82A351B0(ctx, base);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A39D44;
	sub_82A351B0(ctx, base);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a39e84
	if (!cr6.gt) goto loc_82A39E84;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a39e84
	if (!cr6.gt) goto loc_82A39E84;
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,20964(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 20964);
	ctx.f29.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82a39da4
	if (!cr6.eq) goto loc_82A39DA4;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// bne cr6,0x82a39da4
	if (!cr6.eq) goto loc_82A39DA4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A39D9C;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// b 0x82a39e28
	goto loc_82A39E28;
loc_82A39DA4:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a39dc4
	if (cr6.eq) goto loc_82A39DC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A39DBC;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// b 0x82a39e28
	goto loc_82A39E28;
loc_82A39DC4:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39dd8
	if (!cr6.eq) goto loc_82A39DD8;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a39ddc
	goto loc_82A39DDC;
loc_82A39DD8:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A39DDC:
	// lfs f12,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f26
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fmuls f31,f9,f27
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fadds f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82a39e08
	if (!cr6.lt) goto loc_82A39E08;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82a39e14
	goto loc_82A39E14;
loc_82A39E08:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82a39e18
	if (cr6.lt) goto loc_82A39E18;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
loc_82A39E14:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A39E18:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A39E24;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
loc_82A39E28:
	// bgt cr6,0x82a39e30
	if (cr6.gt) goto loc_82A39E30;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A39E30:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a39e84
	if (cr6.eq) goto loc_82A39E84;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39e74
	if (!cr6.eq) goto loc_82A39E74;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// fcmpu cr6,f30,f28
	cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bge cr6,0x82a39e64
	if (!cr6.lt) goto loc_82A39E64;
	// fadds f0,f30,f29
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// b 0x82a39e70
	goto loc_82A39E70;
loc_82A39E64:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// blt cr6,0x82a39e74
	if (cr6.lt) goto loc_82A39E74;
	// fsubs f0,f30,f29
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
loc_82A39E70:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A39E74:
	// lfs f0,4(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82a39e84
	if (!cr6.lt) goto loc_82A39E84;
	// stfs f30,4(r20)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r20.u32 + 4, temp.u32);
loc_82A39E84:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a39ea8
	if (cr6.eq) goto loc_82A39EA8;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a39d24
	if (cr6.lt) goto loc_82A39D24;
loc_82A39EA8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x82a39edc
	if (!cr6.gt) goto loc_82A39EDC;
	// cmpwi cr6,r19,255
	cr6.compare<int32_t>(ctx.r19.s32, 255, xer);
	// blt cr6,0x82a39ec0
	if (cr6.lt) goto loc_82A39EC0;
	// cmpw cr6,r18,r23
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r23.s32, xer);
	// b 0x82a39ecc
	goto loc_82A39ECC;
loc_82A39EC0:
	// cmpw cr6,r18,r23
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r23.s32, xer);
	// bgt cr6,0x82a39ed4
	if (cr6.gt) goto loc_82A39ED4;
	// cmpw cr6,r23,r19
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r19.s32, xer);
loc_82A39ECC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// ble cr6,0x82a39ed8
	if (!cr6.gt) goto loc_82A39ED8;
loc_82A39ED4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82A39ED8:
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_82A39EDC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7b4
	ctx.lr = 0x82A39EEC;
	__restfpr_24(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A39EF0"))) PPC_WEAK_FUNC(sub_82A39EF0);
PPC_FUNC_IMPL(__imp__sub_82A39EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A39EF8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82a39ba8
	ctx.lr = 0x82A39F40;
	sub_82A39BA8(ctx, base);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a3a06c
	if (!cr6.lt) goto loc_82A3A06C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A39F5C;
	sub_82A351B0(ctx, base);
	// addi r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A39F70;
	sub_82A351B0(ctx, base);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3a06c
	if (!cr6.gt) goto loc_82A3A06C;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3a06c
	if (cr6.gt) goto loc_82A3A06C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a39fdc
	if (!cr6.eq) goto loc_82A39FDC;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82a39fdc
	if (!cr6.eq) goto loc_82A39FDC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A39FCC;
	sub_825CBD90(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// b 0x82a3a050
	goto loc_82A3A050;
loc_82A39FDC:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a39ff0
	if (!cr6.eq) goto loc_82A39FF0;
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82a39ff4
	goto loc_82A39FF4;
loc_82A39FF0:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A39FF4:
	// lfs f11,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f0,f8,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,20964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20964);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a3a030
	if (!cr6.lt) goto loc_82A3A030;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3a03c
	goto loc_82A3A03C;
loc_82A3A030:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3a040
	if (cr6.lt) goto loc_82A3A040;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3A03C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A3A040:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A04C;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
loc_82A3A050:
	// bgt cr6,0x82a3a058
	if (cr6.gt) goto loc_82A3A058;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A3A058:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a06c
	if (cr6.eq) goto loc_82A3A06C;
	// stfs f30,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_82A3A06C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3A080"))) PPC_WEAK_FUNC(sub_82A3A080);
PPC_FUNC_IMPL(__imp__sub_82A3A080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A3A088;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3A0D0;
	sub_82A39BA8(ctx, base);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a3a1fc
	if (!cr6.lt) goto loc_82A3A1FC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A0EC;
	sub_82A351B0(ctx, base);
	// addi r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A100;
	sub_82A351B0(ctx, base);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3a1fc
	if (cr6.gt) goto loc_82A3A1FC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3a1fc
	if (!cr6.gt) goto loc_82A3A1FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a3a16c
	if (!cr6.eq) goto loc_82A3A16C;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82a3a16c
	if (!cr6.eq) goto loc_82A3A16C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A15C;
	sub_825CBD90(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// b 0x82a3a1e0
	goto loc_82A3A1E0;
loc_82A3A16C:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3a180
	if (!cr6.eq) goto loc_82A3A180;
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82a3a184
	goto loc_82A3A184;
loc_82A3A180:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A3A184:
	// lfs f11,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f0,f8,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,20964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20964);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a3a1c0
	if (!cr6.lt) goto loc_82A3A1C0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3a1cc
	goto loc_82A3A1CC;
loc_82A3A1C0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3a1d0
	if (cr6.lt) goto loc_82A3A1D0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3A1CC:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A3A1D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A1DC;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
loc_82A3A1E0:
	// bgt cr6,0x82a3a1e8
	if (cr6.gt) goto loc_82A3A1E8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A3A1E8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a1fc
	if (cr6.eq) goto loc_82A3A1FC;
	// stfs f30,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82A3A1FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3A210"))) PPC_WEAK_FUNC(sub_82A3A210);
PPC_FUNC_IMPL(__imp__sub_82A3A210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A3A218;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce75c
	ctx.lr = 0x82A3A220;
	__savefpr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r24,0(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f22,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f22.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f22,4(r23)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3A260;
	sub_82A39BA8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lfs f29,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// bge cr6,0x82a3a4a4
	if (!cr6.lt) goto loc_82A3A4A4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f24,-8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8340);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,-20096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20096);
	ctx.f23.f64 = double(temp.f32);
	// lfs f25,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// addi r22,r11,20968
	ctx.r22.s64 = ctx.r11.s64 + 20968;
	// lfs f27,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f27.f64 = double(temp.f32);
	// lfs f21,21208(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21208);
	ctx.f21.f64 = double(temp.f32);
loc_82A3A2B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A2C0;
	sub_82A351B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A2D4;
	sub_82A351B0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x82a3a3c4
	if (!cr6.eq) goto loc_82A3A3C4;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lfsx f13,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3a3b4
	if (cr6.gt) goto loc_82A3A3B4;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3a3b4
	if (!cr6.gt) goto loc_82A3A3B4;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82a3a338
	if (!cr6.eq) goto loc_82A3A338;
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bne cr6,0x82a3a338
	if (!cr6.eq) goto loc_82A3A338;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A330;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f21.f64);
	// b 0x82a3a39c
	goto loc_82A3A39C;
loc_82A3A338:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3a34c
	if (!cr6.eq) goto loc_82A3A34C;
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a3a350
	goto loc_82A3A350;
loc_82A3A34C:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A3A350:
	// lfs f12,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f26
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,-4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f10,f27
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fadds f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a3a37c
	if (!cr6.lt) goto loc_82A3A37C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3a388
	goto loc_82A3A388;
loc_82A3A37C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3a38c
	if (cr6.lt) goto loc_82A3A38C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3A388:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A3A38C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A398;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
loc_82A3A39C:
	// bgt cr6,0x82a3a3a4
	if (cr6.gt) goto loc_82A3A3A4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A3A3A4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a3b4
	if (cr6.eq) goto loc_82A3A3B4;
	// fmr f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f30.f64;
loc_82A3A3B4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a4a4
	if (cr6.eq) goto loc_82A3A4A4;
	// b 0x82a3a468
	goto loc_82A3A468;
loc_82A3A3C4:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,-4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fcmpu cr6,f28,f29
	cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82a3a3e8
	if (!cr6.lt) goto loc_82A3A3E8;
	// fadds f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// b 0x82a3a3f4
	goto loc_82A3A3F4;
loc_82A3A3E8:
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// blt cr6,0x82a3a3f4
	if (cr6.lt) goto loc_82A3A3F4;
	// fsubs f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
loc_82A3A3F4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a3a404
	if (!cr6.lt) goto loc_82A3A404;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3a410
	goto loc_82A3A410;
loc_82A3A404:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3a410
	if (cr6.lt) goto loc_82A3A410;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3A410:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a3a42c
	if (!cr6.gt) goto loc_82A3A42C;
	// fsel f12,f0,f25,f22
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f25.f64 : ctx.f22.f64;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A3A42C:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f23
	cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x82a3a440
	if (!cr6.gt) goto loc_82A3A440;
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x82a3a4a4
	if (cr6.lt) goto loc_82A3A4A4;
loc_82A3A440:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a3a460
	if (!cr6.gt) goto loc_82A3A460;
	// lfsx f12,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a3a49c
	if (!cr6.gt) goto loc_82A3A49C;
loc_82A3A460:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bgt cr6,0x82a3a49c
	if (cr6.gt) goto loc_82A3A49C;
loc_82A3A468:
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a3a4a4
	if (cr6.gt) goto loc_82A3A4A4;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3a2b4
	if (cr6.lt) goto loc_82A3A2B4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7a8
	ctx.lr = 0x82A3A498;
	__restfpr_21(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A3A49C:
	// stfs f28,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
loc_82A3A4A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7a8
	ctx.lr = 0x82A3A4B4;
	__restfpr_21(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3A4B8"))) PPC_WEAK_FUNC(sub_82A3A4B8);
PPC_FUNC_IMPL(__imp__sub_82A3A4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A3A4C0;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce770
	ctx.lr = 0x82A3A4C8;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r22,5(r5)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r21,6(r5)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3A518;
	sub_82A39BA8(ctx, base);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a3a674
	if (!cr6.lt) goto loc_82A3A674;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r26,r8,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r20,-32251
	ctx.r20.s64 = -2113601536;
	// lfs f28,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,21208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21208);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82A3A550:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A55C;
	sub_82A351B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A570;
	sub_82A351B0(ctx, base);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3a654
	if (!cr6.gt) goto loc_82A3A654;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3a654
	if (!cr6.gt) goto loc_82A3A654;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f29,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x82a3a5c8
	if (!cr6.eq) goto loc_82A3A5C8;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82a3a5c8
	if (!cr6.eq) goto loc_82A3A5C8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A5C0;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// b 0x82a3a62c
	goto loc_82A3A62C;
loc_82A3A5C8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3a5dc
	if (!cr6.eq) goto loc_82A3A5DC;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a3a5e0
	goto loc_82A3A5E0;
loc_82A3A5DC:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A3A5E0:
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,20964(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20964);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f10,f28
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fadds f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a3a60c
	if (!cr6.lt) goto loc_82A3A60C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3a618
	goto loc_82A3A618;
loc_82A3A60C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3a61c
	if (cr6.lt) goto loc_82A3A61C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3A618:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A3A61C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A628;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
loc_82A3A62C:
	// bgt cr6,0x82a3a634
	if (cr6.gt) goto loc_82A3A634;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A3A634:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a654
	if (cr6.eq) goto loc_82A3A654;
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a3a654
	if (!cr6.lt) goto loc_82A3A654;
	// stfs f29,4(r25)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
loc_82A3A654:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3a674
	if (!cr6.eq) goto loc_82A3A674;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3a550
	if (cr6.lt) goto loc_82A3A550;
loc_82A3A674:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a6ac
	if (cr6.eq) goto loc_82A3A6AC;
	// cmpwi cr6,r21,255
	cr6.compare<int32_t>(ctx.r21.s32, 255, xer);
	// blt cr6,0x82a3a690
	if (cr6.lt) goto loc_82A3A690;
	// cmpw cr6,r22,r24
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r24.s32, xer);
	// b 0x82a3a69c
	goto loc_82A3A69C;
loc_82A3A690:
	// cmpw cr6,r22,r24
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r24.s32, xer);
	// bgt cr6,0x82a3a6a4
	if (cr6.gt) goto loc_82A3A6A4;
	// cmpw cr6,r24,r21
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r21.s32, xer);
loc_82A3A69C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ble cr6,0x82a3a6a8
	if (!cr6.gt) goto loc_82A3A6A8;
loc_82A3A6A4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82A3A6A8:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82A3A6AC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3A6BC;
	__restfpr_26(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3A6C0"))) PPC_WEAK_FUNC(sub_82A3A6C0);
PPC_FUNC_IMPL(__imp__sub_82A3A6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A3A6C8;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce76c
	ctx.lr = 0x82A3A6D0;
	__savefpr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r21,5(r5)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r20,6(r5)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f25,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f25.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f25,4(r25)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3A720;
	sub_82A39BA8(ctx, base);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a3a8a8
	if (!cr6.lt) goto loc_82A3A8A8;
	// rlwinm r26,r8,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f27,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f29.f64 = double(temp.f32);
	// addi r22,r11,20968
	ctx.r22.s64 = ctx.r11.s64 + 20968;
	// lfs f26,21208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21208);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82A3A764:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A770;
	sub_82A351B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A784;
	sub_82A351B0(ctx, base);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3a888
	if (!cr6.gt) goto loc_82A3A888;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3a888
	if (cr6.gt) goto loc_82A3A888;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f31,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82a3a7dc
	if (!cr6.eq) goto loc_82A3A7DC;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82a3a7dc
	if (!cr6.eq) goto loc_82A3A7DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3A7D4;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// b 0x82a3a86c
	goto loc_82A3A86C;
loc_82A3A7DC:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3a7f0
	if (!cr6.eq) goto loc_82A3A7F0;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a3a7f4
	goto loc_82A3A7F4;
loc_82A3A7F0:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A3A7F4:
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,-4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f9,f29
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a3a81c
	if (!cr6.lt) goto loc_82A3A81C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3a828
	goto loc_82A3A828;
loc_82A3A81C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3a828
	if (cr6.lt) goto loc_82A3A828;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3A828:
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82a3a83c
	if (!cr6.lt) goto loc_82A3A83C;
	// fadds f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// b 0x82a3a848
	goto loc_82A3A848;
loc_82A3A83C:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x82a3a848
	if (cr6.lt) goto loc_82A3A848;
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
loc_82A3A848:
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82a3a864
	if (!cr6.gt) goto loc_82A3A864;
	// fsel f12,f0,f27,f25
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f27.f64 : ctx.f25.f64;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A3A864:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
loc_82A3A86C:
	// bgt cr6,0x82a3a874
	if (cr6.gt) goto loc_82A3A874;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A3A874:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a888
	if (cr6.eq) goto loc_82A3A888;
	// stfs f31,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// li r23,1
	ctx.r23.s64 = 1;
loc_82A3A888:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3a8a8
	if (!cr6.eq) goto loc_82A3A8A8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3a764
	if (cr6.lt) goto loc_82A3A764;
loc_82A3A8A8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3a8e0
	if (cr6.eq) goto loc_82A3A8E0;
	// cmpwi cr6,r20,255
	cr6.compare<int32_t>(ctx.r20.s32, 255, xer);
	// blt cr6,0x82a3a8c4
	if (cr6.lt) goto loc_82A3A8C4;
	// cmpw cr6,r21,r24
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r24.s32, xer);
	// b 0x82a3a8d0
	goto loc_82A3A8D0;
loc_82A3A8C4:
	// cmpw cr6,r21,r24
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r24.s32, xer);
	// bgt cr6,0x82a3a8d8
	if (cr6.gt) goto loc_82A3A8D8;
	// cmpw cr6,r24,r20
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r20.s32, xer);
loc_82A3A8D0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ble cr6,0x82a3a8dc
	if (!cr6.gt) goto loc_82A3A8DC;
loc_82A3A8D8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82A3A8DC:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82A3A8E0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7b8
	ctx.lr = 0x82A3A8F0;
	__restfpr_25(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3A8F4"))) PPC_WEAK_FUNC(sub_82A3A8F4);
PPC_FUNC_IMPL(__imp__sub_82A3A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3A8F8"))) PPC_WEAK_FUNC(sub_82A3A8F8);
PPC_FUNC_IMPL(__imp__sub_82A3A8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A3A900;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce770
	ctx.lr = 0x82A3A908;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r21,5(r5)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r22,6(r5)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3A958;
	sub_82A39BA8(ctx, base);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a3aaa8
	if (!cr6.lt) goto loc_82A3AAA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r26,r8,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r19,-32251
	ctx.r19.s64 = -2113601536;
	// lfs f28,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,21208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21208);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82A3A990:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A99C;
	sub_82A351B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3A9B0;
	sub_82A351B0(ctx, base);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3aa88
	if (cr6.gt) goto loc_82A3AA88;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3aa88
	if (!cr6.gt) goto loc_82A3AA88;
	// add r11,r26,r3
	ctx.r11.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f29,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x82a3aa08
	if (!cr6.eq) goto loc_82A3AA08;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82a3aa08
	if (!cr6.eq) goto loc_82A3AA08;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3AA00;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// b 0x82a3aa6c
	goto loc_82A3AA6C;
loc_82A3AA08:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3aa1c
	if (!cr6.eq) goto loc_82A3AA1C;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a3aa20
	goto loc_82A3AA20;
loc_82A3AA1C:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A3AA20:
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,20964(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 20964);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f10,f28
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fadds f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a3aa4c
	if (!cr6.lt) goto loc_82A3AA4C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3aa58
	goto loc_82A3AA58;
loc_82A3AA4C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3aa5c
	if (cr6.lt) goto loc_82A3AA5C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3AA58:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A3AA5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A3AA68;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
loc_82A3AA6C:
	// bgt cr6,0x82a3aa74
	if (cr6.gt) goto loc_82A3AA74;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A3AA74:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3aa88
	if (cr6.eq) goto loc_82A3AA88;
	// stfs f29,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// li r23,1
	ctx.r23.s64 = 1;
loc_82A3AA88:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3aaa8
	if (!cr6.eq) goto loc_82A3AAA8;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3a990
	if (cr6.lt) goto loc_82A3A990;
loc_82A3AAA8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3ab08
	if (cr6.eq) goto loc_82A3AB08;
	// cmpwi cr6,r22,255
	cr6.compare<int32_t>(ctx.r22.s32, 255, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82a3aae4
	if (cr6.lt) goto loc_82A3AAE4;
	// cmpw cr6,r21,r24
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r24.s32, xer);
	// ble cr6,0x82a3aacc
	if (!cr6.gt) goto loc_82A3AACC;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82A3AACC:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3AAE0;
	__restfpr_26(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A3AAE4:
	// cmpw cr6,r24,r22
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, xer);
	// bge cr6,0x82a3aacc
	if (!cr6.lt) goto loc_82A3AACC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3AB04;
	__restfpr_26(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A3AB08:
	// stw r20,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r20.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3AB1C;
	__restfpr_26(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3AB20"))) PPC_WEAK_FUNC(sub_82A3AB20);
PPC_FUNC_IMPL(__imp__sub_82A3AB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82A3AB28;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82a3abe4
	if (!cr6.gt) goto loc_82A3ABE4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82a3abe4
	if (!cr6.gt) goto loc_82A3ABE4;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x82a3abc0
	if (cr6.lt) goto loc_82A3ABC0;
loc_82A3AB80:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// subf r3,r7,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	// mulli r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 * 28;
	// mulli r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 * 28;
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// lbz r7,-18(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + -18);
	// lbz r6,-18(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + -18);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// blt cr6,0x82a3ab80
	if (cr6.lt) goto loc_82A3AB80;
loc_82A3ABC0:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82a3abdc
	if (!cr6.lt) goto loc_82A3ABDC;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mulli r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 * 28;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r23,-18(r5)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r5.u32 + -18);
loc_82A3ABDC:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82A3ABE4:
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r25,r11,-24
	ctx.r25.s64 = ctx.r11.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r28,-24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// li r30,11
	ctx.r30.s64 = 11;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3AC08;
	sub_82A39BA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a3ae80
	if (!cr6.lt) goto loc_82A3AE80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,20968
	ctx.r29.s64 = ctx.r11.s64 + 20968;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A3AC34:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A3AC40;
	sub_82A351B0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3AC54;
	sub_82A351B0(ctx, base);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bne cr6,0x82a3acf8
	if (!cr6.eq) goto loc_82A3ACF8;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lfsx f13,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3aca8
	if (!cr6.gt) goto loc_82A3ACA8;
	// lfsx f12,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a3aca8
	if (!cr6.gt) goto loc_82A3ACA8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a3ace4
	if (!cr6.lt) goto loc_82A3ACE4;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x82a3ad18
	goto loc_82A3AD18;
loc_82A3ACA8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3ad18
	if (cr6.gt) goto loc_82A3AD18;
	// lfsx f13,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3ad18
	if (!cr6.gt) goto loc_82A3AD18;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// li r30,2
	ctx.r30.s64 = 2;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a3ace4
	if (!cr6.lt) goto loc_82A3ACE4;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x82a3ad18
	goto loc_82A3AD18;
loc_82A3ACE4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3ad18
	if (cr6.lt) goto loc_82A3AD18;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x82a3ad18
	goto loc_82A3AD18;
loc_82A3ACF8:
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lfsx f13,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3ad18
	if (!cr6.gt) goto loc_82A3AD18;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3ad50
	if (!cr6.gt) goto loc_82A3AD50;
loc_82A3AD18:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r21,r23
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r23.s32, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82a3ae80
	if (cr6.gt) goto loc_82A3AE80;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82a3ac34
	if (cr6.lt) goto loc_82A3AC34;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A3AD50:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f9,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f8,f31
	cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// bge cr6,0x82a3ad70
	if (!cr6.lt) goto loc_82A3AD70;
	// fadds f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// b 0x82a3ad7c
	goto loc_82A3AD7C;
loc_82A3AD70:
	// fcmpu cr6,f8,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// blt cr6,0x82a3ad80
	if (cr6.lt) goto loc_82A3AD80;
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
loc_82A3AD7C:
	// stfs f8,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A3AD80:
	// lfs f0,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a3adc0
	if (!cr6.eq) goto loc_82A3ADC0;
	// lfs f13,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x82a3adc0
	if (!cr6.eq) goto loc_82A3ADC0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cb910
	ctx.lr = 0x82A3ADA8;
	sub_825CB910(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a3ae64
	if (cr6.gt) goto loc_82A3AE64;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82a3ae64
	goto loc_82A3AE64;
loc_82A3ADC0:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3add4
	if (!cr6.eq) goto loc_82A3ADD4;
	// lfs f13,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a3add8
	goto loc_82A3ADD8;
loc_82A3ADD4:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A3ADD8:
	// lfs f12,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a3ae08
	if (!cr6.lt) goto loc_82A3AE08;
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// b 0x82a3ae14
	goto loc_82A3AE14;
loc_82A3AE08:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82a3ae14
	if (cr6.lt) goto loc_82A3AE14;
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
loc_82A3AE14:
	// fsubs f0,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82a3ae40
	if (!cr6.gt) goto loc_82A3AE40;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f0,f13,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f9,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 - ctx.f0.f64)));
loc_82A3AE40:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82a3ae64
	if (cr6.gt) goto loc_82A3AE64;
	// li r31,1
	ctx.r31.s64 = 1;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x82a3ae64
	if (cr6.lt) goto loc_82A3AE64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
loc_82A3AE64:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3ae80
	if (cr6.eq) goto loc_82A3AE80;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stfs f0,0(r18)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
loc_82A3AE80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3AE8C"))) PPC_WEAK_FUNC(sub_82A3AE8C);
PPC_FUNC_IMPL(__imp__sub_82A3AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3AE90"))) PPC_WEAK_FUNC(sub_82A3AE90);
PPC_FUNC_IMPL(__imp__sub_82A3AE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82A3AE98;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce748
	ctx.lr = 0x82A3AEA0;
	__savefpr_16(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r6,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f24,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f24.f64 = double(temp.f32);
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// lfs f26,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f26.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stfs f26,4(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f24,84(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f24,92(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r29,-24(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,412
	ctx.r6.s64 = ctx.r1.s64 + 412;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a3ab20
	ctx.lr = 0x82A3AF20;
	sub_82A3AB20(ctx, base);
	// lwz r17,88(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x82a3b228
	if (cr6.lt) goto loc_82A3B228;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lfs f28,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r30,r11,-52
	ctx.r30.s64 = ctx.r11.s64 + -52;
	// beq cr6,0x82a3af5c
	if (cr6.eq) goto loc_82A3AF5C;
	// fmr f16,f26
	ctx.f16.f64 = ctx.f26.f64;
	// b 0x82a3af60
	goto loc_82A3AF60;
loc_82A3AF5C:
	// fmr f16,f28
	ctx.fpscr.disableFlushMode();
	ctx.f16.f64 = ctx.f28.f64;
loc_82A3AF60:
	// lbz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// bne cr6,0x82a3af74
	if (!cr6.eq) goto loc_82A3AF74;
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82a3af78
	goto loc_82A3AF78;
loc_82A3AF74:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
loc_82A3AF78:
	// fmuls f30,f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f16.f64));
	// lfs f31,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmr f20,f31
	ctx.f20.f64 = ctx.f31.f64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// fmr f19,f24
	ctx.f19.f64 = ctx.f24.f64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// lfs f0,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f21,f30,f0
	ctx.f21.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x825f7e40
	ctx.lr = 0x82A3AFB0;
	sub_825F7E40(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f27,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a3afc8
	if (cr6.eq) goto loc_82A3AFC8;
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// b 0x82a3afdc
	goto loc_82A3AFDC;
loc_82A3AFC8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3AFD8;
	sub_82A39BA8(ctx, base);
	// lfs f23,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
loc_82A3AFDC:
	// fsubs f0,f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f31.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,20968
	ctx.r20.s64 = ctx.r11.s64 + 20968;
	// lfs f13,20968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20968);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82a3b004
	if (!cr6.gt) goto loc_82A3B004;
	// fsel f11,f0,f28,f26
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f0,f11,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f0.f64)));
loc_82A3B004:
	// fabs f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f24
	cr6.compare(ctx.f11.f64, ctx.f24.f64);
	// bne cr6,0x82a3b018
	if (!cr6.eq) goto loc_82A3B018;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82a3b044
	goto loc_82A3B044;
loc_82A3B018:
	// fabs f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bne cr6,0x82a3b02c
	if (!cr6.eq) goto loc_82A3B02C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82a3b044
	goto loc_82A3B044;
loc_82A3B02C:
	// fsel f13,f0,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x82a3b040
	if (cr6.eq) goto loc_82A3B040;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82a3b044
	goto loc_82A3B044;
loc_82A3B040:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82A3B044:
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// bne cr6,0x82a3b060
	if (!cr6.eq) goto loc_82A3B060;
	// lfs f13,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f22,f12,f0
	ctx.f22.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x82a3b070
	goto loc_82A3B070;
loc_82A3B060:
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f25,f0,f13
	ctx.f25.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f22,f0,f12
	ctx.f22.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_82A3B070:
	// li r18,0
	ctx.r18.s64 = 0;
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f24.f64;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// ble cr6,0x82a3b228
	if (!cr6.gt) goto loc_82A3B228;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r22,r29,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r21,r22,8
	ctx.r21.s64 = ctx.r22.s64 + 8;
	// lfs f18,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,21208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21208);
	ctx.f17.f64 = double(temp.f32);
loc_82A3B098:
	// addi r31,r24,-1
	ctx.r31.s64 = ctx.r24.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3B0A8;
	sub_82A351B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3B0B8;
	sub_82A351B0(ctx, base);
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// lfs f30,-4(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lfsx f10,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f24
	cr6.compare(ctx.f10.f64, ctx.f24.f64);
	// bge cr6,0x82a3b0d8
	if (!cr6.lt) goto loc_82A3B0D8;
	// fadds f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// b 0x82a3b0e4
	goto loc_82A3B0E4;
loc_82A3B0D8:
	// fcmpu cr6,f10,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// blt cr6,0x82a3b0e4
	if (cr6.lt) goto loc_82A3B0E4;
	// fsubs f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
loc_82A3B0E4:
	// lfsx f12,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f24
	cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// bge cr6,0x82a3b0f8
	if (!cr6.lt) goto loc_82A3B0F8;
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// b 0x82a3b104
	goto loc_82A3B104;
loc_82A3B0F8:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x82a3b104
	if (cr6.lt) goto loc_82A3B104;
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
loc_82A3B104:
	// lfsx f13,r21,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3b250
	if (!cr6.gt) goto loc_82A3B250;
	// lfsx f13,r21,r3
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3b250
	if (!cr6.gt) goto loc_82A3B250;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bne cr6,0x82a3b138
	if (!cr6.eq) goto loc_82A3B138;
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// b 0x82a3b13c
	goto loc_82A3B13C;
loc_82A3B138:
	// fmr f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f26.f64;
loc_82A3B13C:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3b150
	if (!cr6.eq) goto loc_82A3B150;
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82a3b154
	goto loc_82A3B154;
loc_82A3B150:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
loc_82A3B154:
	// fmuls f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f24
	cr6.compare(ctx.f31.f64, ctx.f24.f64);
	// bne cr6,0x82a3b168
	if (!cr6.eq) goto loc_82A3B168;
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
	// b 0x82a3b170
	goto loc_82A3B170;
loc_82A3B168:
	// fcmpu cr6,f31,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// bne cr6,0x82a3b228
	if (!cr6.eq) goto loc_82A3B228;
loc_82A3B170:
	// fsubs f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x82a3b188
	if (!cr6.gt) goto loc_82A3B188;
	// fsel f13,f0,f28,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A3B188:
	// fsel f0,f0,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x82a3b258
	if (!cr6.eq) goto loc_82A3B258;
	// fsubs f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x82a3b1b0
	if (!cr6.gt) goto loc_82A3B1B0;
	// fsel f12,f0,f28,f26
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f13,f12,f30,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f30.f64 - ctx.f13.f64)));
loc_82A3B1B0:
	// fabs f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f17
	cr6.compare(ctx.f13.f64, ctx.f17.f64);
	// bgt cr6,0x82a3b208
	if (cr6.gt) goto loc_82A3B208;
	// fsubs f0,f27,f20
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f20.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x82a3b1d4
	if (!cr6.gt) goto loc_82A3B1D4;
	// fsel f13,f0,f28,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A3B1D4:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmr f20,f27
	ctx.f20.f64 = ctx.f27.f64;
	// fadds f27,f27,f21
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f21.f64));
	// fadds f13,f0,f19
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f19.f64));
	// fcmpu cr6,f27,f24
	cr6.compare(ctx.f27.f64, ctx.f24.f64);
	// fadds f19,f13,f28
	ctx.f19.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// bge cr6,0x82a3b1f8
	if (!cr6.lt) goto loc_82A3B1F8;
	// fadds f27,f27,f30
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// b 0x82a3b258
	goto loc_82A3B258;
loc_82A3B1F8:
	// fcmpu cr6,f27,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f30.f64);
	// blt cr6,0x82a3b258
	if (cr6.lt) goto loc_82A3B258;
	// fsubs f27,f27,f30
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// b 0x82a3b258
	goto loc_82A3B258;
loc_82A3B208:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x82a3b21c
	if (!cr6.gt) goto loc_82A3B21C;
	// fsel f13,f0,f28,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A3B21C:
	// fsel f0,f0,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x82a3b258
	if (!cr6.eq) goto loc_82A3B258;
loc_82A3B228:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82A3B22C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3b23c
	if (cr6.lt) goto loc_82A3B23C;
	// stfs f0,4(r19)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r19.u32 + 4, temp.u32);
loc_82A3B23C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce794
	ctx.lr = 0x82A3B24C;
	__restfpr_16(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82A3B250:
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82A3B258:
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a3b228
	if (!cr6.lt) goto loc_82A3B228;
	// fcmpu cr6,f19,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f19.f64, ctx.f24.f64);
	// ble cr6,0x82a3b498
	if (!cr6.gt) goto loc_82A3B498;
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bne cr6,0x82a3b2b0
	if (!cr6.eq) goto loc_82A3B2B0;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f24
	cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bne cr6,0x82a3b2b0
	if (!cr6.eq) goto loc_82A3B2B0;
	// fsubs f0,f10,f23
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f23.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x82a3b2a4
	if (!cr6.gt) goto loc_82A3B2A4;
	// fsel f13,f0,f28,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A3B2A4:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f17
	cr6.compare(ctx.f0.f64, ctx.f17.f64);
	// b 0x82a3b318
	goto loc_82A3B318;
loc_82A3B2B0:
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a3b2c4
	if (!cr6.eq) goto loc_82A3B2C4;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a3b2c8
	goto loc_82A3B2C8;
loc_82A3B2C4:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A3B2C8:
	// lfs f12,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f23
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f13,f9,f18
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f18.f64));
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x82a3b2ec
	if (!cr6.lt) goto loc_82A3B2EC;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// b 0x82a3b2f8
	goto loc_82A3B2F8;
loc_82A3B2EC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a3b2f8
	if (cr6.lt) goto loc_82A3B2F8;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
loc_82A3B2F8:
	// fsubs f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x82a3b310
	if (!cr6.gt) goto loc_82A3B310;
	// fsel f12,f0,f28,f26
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f0,f12,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A3B310:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_82A3B318:
	// bgt cr6,0x82a3b320
	if (cr6.gt) goto loc_82A3B320;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A3B320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3b490
	if (cr6.eq) goto loc_82A3B490;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsb r10,r27
	ctx.r10.s64 = ctx.r27.s8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a3b38c
	if (!cr6.eq) goto loc_82A3B38C;
	// fcmpu cr6,f19,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f19.f64, ctx.f22.f64);
	// blt cr6,0x82a3b360
	if (cr6.lt) goto loc_82A3B360;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3b4a4
	if (!cr6.eq) goto loc_82A3B4A4;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3b4a4
	if (!cr6.eq) goto loc_82A3B4A4;
loc_82A3B360:
	// fcmpu cr6,f25,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f25.f64, ctx.f30.f64);
	// blt cr6,0x82a3b498
	if (cr6.lt) goto loc_82A3B498;
	// fcmpu cr6,f19,f30
	cr6.compare(ctx.f19.f64, ctx.f30.f64);
	// blt cr6,0x82a3b498
	if (cr6.lt) goto loc_82A3B498;
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82a3b4b0
	if (!cr6.lt) goto loc_82A3B4B0;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// b 0x82a3b22c
	goto loc_82A3B22C;
loc_82A3B38C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f23,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f20,f23
	ctx.f20.f64 = ctx.f23.f64;
	// extsb r27,r10
	ctx.r27.s64 = ctx.r10.s8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// subf r8,r27,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r11,-24
	ctx.r30.s64 = ctx.r11.s64 + -24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a39ba8
	ctx.lr = 0x82A3B3BC;
	sub_82A39BA8(ctx, base);
	// lbz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lfs f23,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fmr f19,f24
	ctx.f19.f64 = ctx.f24.f64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// bne cr6,0x82a3b3dc
	if (!cr6.eq) goto loc_82A3B3DC;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// b 0x82a3b3e0
	goto loc_82A3B3E0;
loc_82A3B3DC:
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
loc_82A3B3E0:
	// fabs f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f21.u64 & ~0x8000000000000000;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f21,f13,f16
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f16.f64));
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x825f7e40
	ctx.lr = 0x82A3B3FC;
	sub_825F7E40(ctx, base);
	// fsubs f0,f23,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f20.f64));
	// lfs f27,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x82a3b418
	if (!cr6.gt) goto loc_82A3B418;
	// fsel f13,f0,f28,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A3B418:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f24
	cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bne cr6,0x82a3b42c
	if (!cr6.eq) goto loc_82A3B42C;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82a3b458
	goto loc_82A3B458;
loc_82A3B42C:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bne cr6,0x82a3b440
	if (!cr6.eq) goto loc_82A3B440;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a3b458
	goto loc_82A3B458;
loc_82A3B440:
	// fsel f13,f0,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f26.f64;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x82a3b454
	if (cr6.eq) goto loc_82A3B454;
	// fsubs f0,f30,f22
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f22.f64));
	// b 0x82a3b458
	goto loc_82A3B458;
loc_82A3B454:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82A3B458:
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// bne cr6,0x82a3b478
	if (!cr6.eq) goto loc_82A3B478;
	// lfs f13,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f24
	ctx.f31.f64 = ctx.f24.f64;
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f22,f12,f0
	ctx.f22.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x82a3b498
	goto loc_82A3B498;
loc_82A3B478:
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f24
	ctx.f31.f64 = ctx.f24.f64;
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f25,f0,f13
	ctx.f25.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f22,f0,f12
	ctx.f22.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x82a3b498
	goto loc_82A3B498;
loc_82A3B490:
	// fcmpu cr6,f19,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f19.f64, ctx.f25.f64);
	// bge cr6,0x82a3b228
	if (!cr6.lt) goto loc_82A3B228;
loc_82A3B498:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bgt cr6,0x82a3b098
	if (cr6.gt) goto loc_82A3B098;
	// b 0x82a3b228
	goto loc_82A3B228;
loc_82A3B4A4:
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// b 0x82a3b228
	goto loc_82A3B228;
loc_82A3B4B0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a3b22c
	if (cr6.lt) goto loc_82A3B22C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// b 0x82a3b22c
	goto loc_82A3B22C;
}

__attribute__((alias("__imp__sub_82A3B4C0"))) PPC_WEAK_FUNC(sub_82A3B4C0);
PPC_FUNC_IMPL(__imp__sub_82A3B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3B4C8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce770
	ctx.lr = 0x82A3B4D0;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r8,99
	cr6.compare<int32_t>(ctx.r8.s32, 99, xer);
	// bge cr6,0x82a3b5d0
	if (!cr6.lt) goto loc_82A3B5D0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f28,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// addi r26,r11,20968
	ctx.r26.s64 = ctx.r11.s64 + 20968;
	// lfs f29,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82A3B518:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a351b0
	ctx.lr = 0x82A3B524;
	sub_82A351B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a351b0
	ctx.lr = 0x82A3B538;
	sub_82A351B0(ctx, base);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82a3b5d0
	if (!cr6.gt) goto loc_82A3B5D0;
	// lfsx f0,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82a3b5d0
	if (!cr6.gt) goto loc_82A3B5D0;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lfs f13,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82a3b574
	if (!cr6.lt) goto loc_82A3B574;
	// fadds f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// b 0x82a3b580
	goto loc_82A3B580;
loc_82A3B574:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x82a3b580
	if (cr6.lt) goto loc_82A3B580;
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
loc_82A3B580:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a3b590
	if (!cr6.lt) goto loc_82A3B590;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3b59c
	goto loc_82A3B59C;
loc_82A3B590:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3b59c
	if (cr6.lt) goto loc_82A3B59C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3B59C:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a3b5b8
	if (!cr6.gt) goto loc_82A3B5B8;
	// fsel f12,f0,f28,f29
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f29.f64;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A3B5B8:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82a3b5d0
	if (cr6.gt) goto loc_82A3B5D0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r31,99
	cr6.compare<int32_t>(ctx.r31.s32, 99, xer);
	// blt cr6,0x82a3b518
	if (cr6.lt) goto loc_82A3B518;
loc_82A3B5D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3B5E0;
	__restfpr_26(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3B5E4"))) PPC_WEAK_FUNC(sub_82A3B5E4);
PPC_FUNC_IMPL(__imp__sub_82A3B5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B5E8"))) PPC_WEAK_FUNC(sub_82A3B5E8);
PPC_FUNC_IMPL(__imp__sub_82A3B5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3B5F0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f31,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r30,r11,-24
	ctx.r30.s64 = ctx.r11.s64 + -24;
	// bl 0x82a39600
	ctx.lr = 0x82A3B64C;
	sub_82A39600(ctx, base);
	// addi r26,r31,-16
	ctx.r26.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// beq cr6,0x82a3b788
	if (cr6.eq) goto loc_82A3B788;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82A3B664:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82a3b6e8
	if (cr6.eq) goto loc_82A3B6E8;
	// ble cr6,0x82a3b6b8
	if (!cr6.gt) goto loc_82A3B6B8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bgt cr6,0x82a3b6b8
	if (cr6.gt) goto loc_82A3B6B8;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// bge cr6,0x82a3b768
	if (!cr6.lt) goto loc_82A3B768;
	// mulli r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 * 28;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A3B6A0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a3b6a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3B6A0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x82a3b764
	goto loc_82A3B764;
loc_82A3B6B8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a39540
	ctx.lr = 0x82A3B6D0;
	sub_82A39540(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x82a3b768
	goto loc_82A3B768;
loc_82A3B6E8:
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// bge cr6,0x82a3b724
	if (!cr6.lt) goto loc_82A3B724;
	// mulli r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 * 28;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A3B70C:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a3b70c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3B70C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82A3B724:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// li r8,1
	ctx.r8.s64 = 1;
	// bge cr6,0x82a3b734
	if (!cr6.lt) goto loc_82A3B734;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A3B734:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3ae90
	ctx.lr = 0x82A3B74C;
	sub_82A3AE90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82A3B764:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
loc_82A3B768:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x82a3b788
	if (cr6.eq) goto loc_82A3B788;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82a3b77c
	if (!cr6.lt) goto loc_82A3B77C;
	// lfs f31,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
loc_82A3B77C:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82a3b664
	if (!cr6.eq) goto loc_82A3B664;
loc_82A3B788:
	// stfs f31,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3B7A0"))) PPC_WEAK_FUNC(sub_82A3B7A0);
PPC_FUNC_IMPL(__imp__sub_82A3B7A0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x82a3b7cc
	if (!cr6.lt) goto loc_82A3B7CC;
	// li r9,100
	ctx.r9.s64 = 100;
loc_82A3B7CC:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3b5e8
	ctx.lr = 0x82A3B7E0;
	sub_82A3B5E8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82a3b80c
	if (!cr6.eq) goto loc_82A3B80C;
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
loc_82A3B80C:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82A3B82C"))) PPC_WEAK_FUNC(sub_82A3B82C);
PPC_FUNC_IMPL(__imp__sub_82A3B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B830"))) PPC_WEAK_FUNC(sub_82A3B830);
PPC_FUNC_IMPL(__imp__sub_82A3B830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x82a3b860
	if (!cr6.lt) goto loc_82A3B860;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a3b860
	if (!cr6.lt) goto loc_82A3B860;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r10,7448
	ctx.r9.s64 = ctx.r10.s64 + 7448;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f1,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A3B860:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B86C"))) PPC_WEAK_FUNC(sub_82A3B86C);
PPC_FUNC_IMPL(__imp__sub_82A3B86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3B870"))) PPC_WEAK_FUNC(sub_82A3B870);
PPC_FUNC_IMPL(__imp__sub_82A3B870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x82a3b8a4
	if (!cr6.lt) goto loc_82A3B8A4;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a3b8a4
	if (!cr6.lt) goto loc_82A3B8A4;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r9,7448
	ctx.r11.s64 = ctx.r9.s64 + 7448;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f1,r6,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A3B8A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B8B0"))) PPC_WEAK_FUNC(sub_82A3B8B0);
PPC_FUNC_IMPL(__imp__sub_82A3B8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r10,r3,288
	ctx.r10.s64 = ctx.r3.s64 + 288;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r9,r3,265
	ctx.r9.s64 = ctx.r3.s64 + 265;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,1012(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1012, ctx.r11.u8);
	// stfs f0,1008(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1008, temp.u32);
	// stb r11,1013(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1013, ctx.r11.u8);
	// stb r11,1014(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1014, ctx.r11.u8);
	// stb r11,1015(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1015, ctx.r11.u8);
	// stfs f0,1256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1256, temp.u32);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
loc_82A3B910:
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a3b910
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3B910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B920"))) PPC_WEAK_FUNC(sub_82A3B920);
PPC_FUNC_IMPL(__imp__sub_82A3B920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,1012(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 85;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B948"))) PPC_WEAK_FUNC(sub_82A3B948);
PPC_FUNC_IMPL(__imp__sub_82A3B948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1012(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3b95c
	if (!cr6.eq) goto loc_82A3B95C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A3B95C:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r11,r4,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,1024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B978"))) PPC_WEAK_FUNC(sub_82A3B978);
PPC_FUNC_IMPL(__imp__sub_82A3B978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1012(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3b98c
	if (!cr6.eq) goto loc_82A3B98C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3B98C:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 85;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3B9A8"))) PPC_WEAK_FUNC(sub_82A3B9A8);
PPC_FUNC_IMPL(__imp__sub_82A3B9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
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
loc_82A3B9E0:
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
	// bdnz 0x82a3b9e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3B9E0;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x827f6e48
	ctx.lr = 0x82A3B9F8;
	sub_827F6E48(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r31,1012
	ctx.r11.s64 = ctx.r31.s64 + 1012;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A3BA0C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stwu r9,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a3ba0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3BA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// stfs f31,1264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// bl 0x82a3b8b0
	ctx.lr = 0x82A3BA30;
	sub_82A3B8B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3BA48"))) PPC_WEAK_FUNC(sub_82A3BA48);
PPC_FUNC_IMPL(__imp__sub_82A3BA48) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82a5cc60
	ctx.lr = 0x82A3BA8C;
	sub_82A5CC60(ctx, base);
	// lbz r7,1012(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// addi r5,r7,255
	ctx.r5.s64 = ctx.r7.s64 + 255;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82a3bac0
	if (!cr6.lt) goto loc_82A3BAC0;
	// addi r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 85;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
loc_82A3BAC0:
	// lbz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
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
}

__attribute__((alias("__imp__sub_82A3BAE0"))) PPC_WEAK_FUNC(sub_82A3BAE0);
PPC_FUNC_IMPL(__imp__sub_82A3BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A3BAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r31,264(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 264);
	// bl 0x82a3cf80
	ctx.lr = 0x82A3BB04;
	sub_82A3CF80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3bb18
	if (cr6.eq) goto loc_82A3BB18;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a3bb30
	goto loc_82A3BB30;
loc_82A3BB18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a3cf58
	ctx.lr = 0x82A3BB20;
	sub_82A3CF58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3bb30
	if (cr6.eq) goto loc_82A3BB30;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82A3BB30:
	// rlwinm r10,r31,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,1024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1024, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3BB50"))) PPC_WEAK_FUNC(sub_82A3BB50);
PPC_FUNC_IMPL(__imp__sub_82A3BB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 264);
	// lbz r10,1012(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 85;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3BB78"))) PPC_WEAK_FUNC(sub_82A3BB78);
PPC_FUNC_IMPL(__imp__sub_82A3BB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1012(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3bb8c
	if (!cr6.eq) goto loc_82A3BB8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A3BB8C:
	// lbz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 264);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,1024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3BBA8"))) PPC_WEAK_FUNC(sub_82A3BBA8);
PPC_FUNC_IMPL(__imp__sub_82A3BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1012(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3bbbc
	if (!cr6.eq) goto loc_82A3BBBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3BBBC:
	// lbz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 264);
	// addi r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 85;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3BBD8"))) PPC_WEAK_FUNC(sub_82A3BBD8);
PPC_FUNC_IMPL(__imp__sub_82A3BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82A3BBE0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce74c
	ctx.lr = 0x82A3BBE8;
	__savefpr_17(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,288
	ctx.r25.s64 = ctx.r3.s64 + 288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a5d940
	ctx.lr = 0x82A3BBFC;
	sub_82A5D940(ctx, base);
	// lbz r4,1012(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1012);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f13,1008(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1008);
	ctx.f13.f64 = double(temp.f32);
	// subfic r11,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// rotlwi r9,r4,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// and r9,r5,r25
	ctx.r9.u64 = ctx.r5.u64 & ctx.r25.u64;
	// li r14,1
	ctx.r14.s64 = 1;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// lfs f25,9008(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	ctx.f25.f64 = double(temp.f32);
	// lfs f20,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f20.f64 = double(temp.f32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lfs f0,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// stfs f20,-4(r10)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// ble cr6,0x82a3bc9c
	if (!cr6.gt) goto loc_82A3BC9C;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// fdivs f13,f20,f13
	ctx.f13.f64 = double(float(ctx.f20.f64 / ctx.f13.f64));
	// li r9,36
	ctx.r9.s64 = 36;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
loc_82A3BC68:
	// fmuls f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// add r8,r25,r9
	ctx.r8.u64 = ctx.r25.u64 + ctx.r9.u64;
	// blt cr6,0x82a3bc80
	if (cr6.lt) goto loc_82A3BC80;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A3BC80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f12,24(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x82a3bc68
	if (cr6.lt) goto loc_82A3BC68;
loc_82A3BC9C:
	// subfic r10,r6,20
	xer.ca = ctx.r6.u32 <= 20;
	ctx.r10.s64 = 20 - ctx.r6.s64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subfic r8,r9,19
	xer.ca = ctx.r9.u32 <= 19;
	ctx.r8.s64 = 19 - ctx.r9.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r21,0
	ctx.r21.s64 = 0;
	// andc r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// divw r18,r10,r5
	ctx.r18.s32 = PPCDivide(ctx.r10.s32, ctx.r5.s32);
	// twllei r5,0
	// twlgei r4,-1
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r20,r8,24
	ctx.r20.u64 = ctx.r8.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82a3bfac
	if (!cr6.gt) goto loc_82A3BFAC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f19,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f19.f64 = double(temp.f32);
	// lfs f22,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f22.f64 = double(temp.f32);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// lfs f21,-11316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f21.f64 = double(temp.f32);
	// addi r24,r1,148
	ctx.r24.s64 = ctx.r1.s64 + 148;
	// lfs f18,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f18.f64 = double(temp.f32);
	// addi r19,r29,264
	ctx.r19.s64 = ctx.r29.s64 + 264;
	// lfs f17,21708(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21708);
	ctx.f17.f64 = double(temp.f32);
	// lis r16,-31778
	ctx.r16.s64 = -2082603008;
	// lis r15,-31778
	ctx.r15.s64 = -2082603008;
	// addi r17,r11,21140
	ctx.r17.s64 = ctx.r11.s64 + 21140;
loc_82A3BD1C:
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// lfs f23,-4(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	ctx.f23.f64 = double(temp.f32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stbx r30,r19,r27
	PPC_STORE_U8(ctx.r19.u32 + ctx.r27.u32, ctx.r30.u8);
	// bl 0x82a5d300
	ctx.lr = 0x82A3BD38;
	sub_82A5D300(ctx, base);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lfs f26,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f29,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f26,0(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r11,1012(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1012);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a3bf94
	if (!cr6.lt) goto loc_82A3BF94;
	// clrlwi r23,r20,24
	ctx.r23.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82a3bf94
	if (cr6.eq) goto loc_82A3BF94;
	// lbz r11,724(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 724);
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// lfs f30,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// li r28,2
	ctx.r28.s64 = 2;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r21,r18,r21
	ctx.r21.u64 = ctx.r18.u64 + ctx.r21.u64;
	// and r6,r7,r22
	ctx.r6.u64 = ctx.r7.u64 & ctx.r22.u64;
	// addi r11,r22,36
	ctx.r11.s64 = ctx.r22.s64 + 36;
	// lfs f31,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x82a3bdbc
	if (cr6.lt) goto loc_82A3BDBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3BDBC:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bne cr6,0x82a3bddc
	if (!cr6.eq) goto loc_82A3BDDC;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bne cr6,0x82a3bddc
	if (!cr6.eq) goto loc_82A3BDDC;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// b 0x82a3be00
	goto loc_82A3BE00;
loc_82A3BDDC:
	// fsubs f2,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fsubs f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x82A3BDE8;
	sub_82A5A9F8(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bge cr6,0x82a3bdf8
	if (!cr6.lt) goto loc_82A3BDF8;
	// lfs f0,7336(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 7336);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82A3BDF8:
	// lfs f0,7356(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 7356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f1,f0
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82A3BE00:
	// fcmpu cr6,f31,f17
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f17.f64);
	// ble cr6,0x82a3bf94
	if (!cr6.gt) goto loc_82A3BF94;
	// fmuls f0,f31,f18
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f18.f64));
	// fcmpu cr6,f0,f21
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82a3be38
	if (!cr6.gt) goto loc_82A3BE38;
loc_82A3BE14:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fcmpu cr6,f11,f21
	cr6.compare(ctx.f11.f64, ctx.f21.f64);
	// bgt cr6,0x82a3be14
	if (cr6.gt) goto loc_82A3BE14;
loc_82A3BE38:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// ble cr6,0x82a3be48
	if (!cr6.gt) goto loc_82A3BE48;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A3BE48:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// fsubs f0,f30,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f23.f64));
	// addic. r26,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r10,0
	ctx.r10.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f24,f0,f11
	ctx.f24.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// ble 0x82a3bf94
	if (!cr0.gt) goto loc_82A3BF94;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_82A3BE84:
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f24,f23
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f23.f64));
	// bl 0x82a5d300
	ctx.lr = 0x82A3BEAC;
	sub_82A5D300(ctx, base);
	// lfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// lfs f28,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x82a3bed0
	if (!cr6.eq) goto loc_82A3BED0;
	// fcmpu cr6,f30,f26
	cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// bne cr6,0x82a3bed0
	if (!cr6.eq) goto loc_82A3BED0;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x82a3bef4
	goto loc_82A3BEF4;
loc_82A3BED0:
	// fsubs f2,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fsubs f1,f30,f26
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x82A3BEDC;
	sub_82A5A9F8(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bge cr6,0x82a3beec
	if (!cr6.lt) goto loc_82A3BEEC;
	// lfs f0,7336(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 7336);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82A3BEEC:
	// lfs f0,7356(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 7356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82A3BEF4:
	// lfs f13,-4(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f27
	ctx.f12.f64 = ctx.f27.f64;
	// fcmpu cr6,f27,f25
	cr6.compare(ctx.f27.f64, ctx.f25.f64);
	// bge cr6,0x82a3bf0c
	if (!cr6.lt) goto loc_82A3BF0C;
	// fadds f12,f27,f13
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// b 0x82a3bf18
	goto loc_82A3BF18;
loc_82A3BF0C:
	// fcmpu cr6,f27,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// blt cr6,0x82a3bf18
	if (cr6.lt) goto loc_82A3BF18;
	// fsubs f12,f27,f13
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
loc_82A3BF18:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82a3bf28
	if (!cr6.lt) goto loc_82A3BF28;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a3bf34
	goto loc_82A3BF34;
loc_82A3BF28:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a3bf34
	if (cr6.lt) goto loc_82A3BF34;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A3BF34:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,0(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a3bf50
	if (!cr6.gt) goto loc_82A3BF50;
	// fsel f12,f0,f20,f22
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f20.f64 : ctx.f22.f64;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A3BF50:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f19
	cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// ble cr6,0x82a3bf88
	if (!cr6.gt) goto loc_82A3BF88;
	// addi r11,r23,255
	ctx.r11.s64 = ctx.r23.s64 + 255;
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f28,8(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f26,f30
	ctx.f26.f64 = ctx.f30.f64;
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// stfsu f31,12(r31)
	ea = 12 + ctx.r31.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82a3bf94
	if (cr6.eq) goto loc_82A3BF94;
loc_82A3BF88:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, xer);
	// blt cr6,0x82a3be84
	if (cr6.lt) goto loc_82A3BE84;
loc_82A3BF94:
	// lbz r11,1012(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1012);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,36
	ctx.r22.s64 = ctx.r22.s64 + 36;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3bd1c
	if (cr6.lt) goto loc_82A3BD1C;
loc_82A3BFAC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stfs f25,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stb r14,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r14.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82a3c010
	if (!cr6.gt) goto loc_82A3C010;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
loc_82A3BFD0:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,20(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lbz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82a3bfd0
	if (cr6.lt) goto loc_82A3BFD0;
loc_82A3C010:
	// lbz r11,265(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 265);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x82a3c024
	if (!cr6.lt) goto loc_82A3C024;
	// stb r14,264(r29)
	PPC_STORE_U8(ctx.r29.u32 + 264, ctx.r14.u8);
	// b 0x82a3c02c
	goto loc_82A3C02C;
loc_82A3C024:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,264(r29)
	PPC_STORE_U8(ctx.r29.u32 + 264, ctx.r11.u8);
loc_82A3C02C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// stfs f25,12(r29)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce798
	ctx.lr = 0x82A3C068;
	__restfpr_17(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3C06C"))) PPC_WEAK_FUNC(sub_82A3C06C);
PPC_FUNC_IMPL(__imp__sub_82A3C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3C070"))) PPC_WEAK_FUNC(sub_82A3C070);
PPC_FUNC_IMPL(__imp__sub_82A3C070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A3C078;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x82A3C080;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f27,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f27.f64 = double(temp.f32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f31,f9
	ctx.f31.f64 = double(float(sqrt(ctx.f9.f64)));
	// beq cr6,0x82a3c1f0
	if (cr6.eq) goto loc_82A3C1F0;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82a3c1f0
	if (cr6.eq) goto loc_82A3C1F0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c180
	if (cr6.eq) goto loc_82A3C180;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf58
	ctx.lr = 0x82A3C0FC;
	sub_82A3CF58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3c180
	if (cr6.eq) goto loc_82A3C180;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x825ae5b0
	ctx.lr = 0x82A3C120;
	sub_825AE5B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a3c138
	if (cr6.gt) goto loc_82A3C138;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82a3c160
	goto loc_82A3C160;
loc_82A3C138:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,3204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82a3c150
	if (cr6.lt) goto loc_82A3C150;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82a3c160
	goto loc_82A3C160;
loc_82A3C150:
	// fsubs f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-27808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27808);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A3C160:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-28496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28496);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a3c1f0
	if (!cr6.gt) goto loc_82A3C1F0;
	// b 0x82a3c1ec
	goto loc_82A3C1EC;
loc_82A3C180:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x825ae5b0
	ctx.lr = 0x82A3C198;
	sub_825AE5B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a3c1b0
	if (cr6.gt) goto loc_82A3C1B0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82a3c1d8
	goto loc_82A3C1D8;
loc_82A3C1B0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,21244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82a3c1c8
	if (cr6.lt) goto loc_82A3C1C8;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82a3c1d8
	goto loc_82A3C1D8;
loc_82A3C1C8:
	// fsubs f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,21240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A3C1D8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f13,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a3c1f0
	if (!cr6.lt) goto loc_82A3C1F0;
loc_82A3C1EC:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82A3C1F0:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82a3c664
	if (!cr6.gt) goto loc_82A3C664;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3c210
	if (!cr6.eq) goto loc_82A3C210;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// b 0x82a3c228
	goto loc_82A3C228;
loc_82A3C210:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A3C228:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f31
	cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// blt cr6,0x82a3c464
	if (cr6.lt) goto loc_82A3C464;
	// lfs f31,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x83740868
	ctx.lr = 0x82A3C264;
	sub_83740868(ctx, base);
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,21100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,30444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30444);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f29,f29,f13
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmadds f9,f31,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f8,f10
	cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// ble cr6,0x82a3c468
	if (!cr6.gt) goto loc_82A3C468;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// ble cr6,0x82a3c468
	if (!cr6.gt) goto loc_82A3C468;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x82a3c468
	if (cr6.eq) goto loc_82A3C468;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a3c2c8
	if (!cr6.eq) goto loc_82A3C2C8;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// b 0x82a3c2cc
	goto loc_82A3C2CC;
loc_82A3C2C8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82A3C2CC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a3c2f8
	if (!cr6.eq) goto loc_82A3C2F8;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// b 0x82a3c2fc
	goto loc_82A3C2FC;
loc_82A3C2F8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82A3C2FC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A3C310;
	sub_825CA560(ctx, base);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a3c338
	if (!cr6.eq) goto loc_82A3C338;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a3c33c
	goto loc_82A3C33C;
loc_82A3C338:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82A3C33C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a3c364
	if (!cr6.eq) goto loc_82A3C364;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a3c368
	goto loc_82A3C368;
loc_82A3C364:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82A3C368:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A3C37C;
	sub_825CA560(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a3c398
	if (!cr6.eq) goto loc_82A3C398;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a3c39c
	goto loc_82A3C39C;
loc_82A3C398:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82A3C39C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A3C3B4;
	sub_825CA560(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a3c3d8
	if (!cr6.eq) goto loc_82A3C3D8;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a3c3dc
	goto loc_82A3C3DC;
loc_82A3C3D8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82A3C3DC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A3C3F4;
	sub_825CA560(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A3C404;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a3c468
	if (!cr6.gt) goto loc_82A3C468;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A3C424;
	sub_825CE9F8(ctx, base);
	// fabs f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A3C434;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f30,f27,f0
	ctx.f12.f64 = ctx.f30.f64 >= 0.0 ? ctx.f27.f64 : ctx.f0.f64;
	// fsel f11,f13,f27,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f27.f64 : ctx.f0.f64;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82a3c468
	if (!cr6.eq) goto loc_82A3C468;
	// fabs f13,f30
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a3c468
	if (!cr6.lt) goto loc_82A3C468;
loc_82A3C464:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A3C468:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c664
	if (cr6.eq) goto loc_82A3C664;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a3c63c
	if (!cr6.eq) goto loc_82A3C63C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a3c498
	if (!cr6.eq) goto loc_82A3C498;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// b 0x82a3c4ac
	goto loc_82A3C4AC;
loc_82A3C498:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A3C4AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ca9d8
	ctx.lr = 0x82A3C4B8;
	sub_825CA9D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825f89a8
	ctx.lr = 0x82A3C4C8;
	sub_825F89A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825cb910
	ctx.lr = 0x82A3C4D0;
	sub_825CB910(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a3c4e8
	if (cr6.lt) goto loc_82A3C4E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3C4E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c664
	if (cr6.eq) goto loc_82A3C664;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,1396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1396);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x82a3c5a8
	if (!cr6.eq) goto loc_82A3C5A8;
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x82a3cf58
	ctx.lr = 0x82A3C50C;
	sub_82A3CF58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c5a8
	if (cr6.eq) goto loc_82A3C5A8;
	// lbz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c5a8
	if (cr6.eq) goto loc_82A3C5A8;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3c538
	if (!cr6.eq) goto loc_82A3C538;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// b 0x82a3c550
	goto loc_82A3C550;
loc_82A3C538:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A3C550:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,9796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9796);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x82a3c664
	if (!cr6.lt) goto loc_82A3C664;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82A3C5A4;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A3C5A8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,1396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1396);
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// bne cr6,0x82a3c624
	if (!cr6.eq) goto loc_82A3C624;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3c5cc
	if (!cr6.eq) goto loc_82A3C5CC;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// b 0x82a3c5e4
	goto loc_82A3C5E4;
loc_82A3C5CC:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A3C5E4:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,11808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11808);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x82a3c664
	if (!cr6.lt) goto loc_82A3C664;
loc_82A3C624:
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82A3C638;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A3C63C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 264);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// lbz r7,265(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 265);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a3c664
	if (!cr6.lt) goto loc_82A3C664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
loc_82A3C664:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82A3C674;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3C678"))) PPC_WEAK_FUNC(sub_82A3C678);
PPC_FUNC_IMPL(__imp__sub_82A3C678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A3C680;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce770
	ctx.lr = 0x82A3C688;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r27,r4,24
	ctx.r27.s64 = ctx.r4.s64 + 24;
	// lbz r7,37(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f28,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// addi r28,r26,1280
	ctx.r28.s64 = ctx.r26.s64 + 1280;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x82a3c708
	if (cr6.eq) goto loc_82A3C708;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c708
	if (cr6.eq) goto loc_82A3C708;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a3c708
	if (!cr6.eq) goto loc_82A3C708;
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f29,f28
	ctx.f29.f64 = ctx.f28.f64;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// b 0x82a3c714
	goto loc_82A3C714;
loc_82A3C708:
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
loc_82A3C714:
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lis r25,-31778
	ctx.r25.s64 = -2082603008;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 24;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a3c734
	if (cr6.eq) goto loc_82A3C734;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a3c7e0
	if (!cr6.eq) goto loc_82A3C7E0;
loc_82A3C734:
	// lbz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c7e0
	if (cr6.eq) goto loc_82A3C7E0;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf80
	ctx.lr = 0x82A3C74C;
	sub_82A3CF80(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a3c770
	if (!cr6.eq) goto loc_82A3C770;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cfa8
	ctx.lr = 0x82A3C764;
	sub_82A3CFA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3c7e0
	if (cr6.eq) goto loc_82A3C7E0;
loc_82A3C770:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f1,7444(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a36180
	ctx.lr = 0x82A3C780;
	sub_82A36180(ctx, base);
	// lfs f27,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// bl 0x83740868
	ctx.lr = 0x82A3C78C;
	sub_83740868(ctx, base);
	// fmuls f12,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f0,-23868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f26,f26,f12
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsqrts f8,f10
	ctx.f8.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fcmpu cr6,f7,f13
	cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bge cr6,0x82a3c7e0
	if (!cr6.lt) goto loc_82A3C7E0;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82A3C7E0:
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lbz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fmadds f13,f31,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fsqrts f31,f12
	ctx.f31.f64 = double(float(sqrt(ctx.f12.f64)));
	// beq cr6,0x82a3c804
	if (cr6.eq) goto loc_82A3C804;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82a3ca34
	goto loc_82A3CA34;
loc_82A3C804:
	// lbz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82a3c8c8
	if (!cr6.eq) goto loc_82A3C8C8;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f13,f6
	ctx.f13.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a3c85c
	if (!cr6.lt) goto loc_82A3C85C;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82A3C85C:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82a3c86c
	if (!cr6.gt) goto loc_82A3C86C;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82a3ca34
	goto loc_82A3CA34;
loc_82A3C86C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c890
	if (cr6.eq) goto loc_82A3C890;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82a3c894
	goto loc_82A3C894;
loc_82A3C890:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82A3C894:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f31,f6
	cr6.compare(ctx.f31.f64, ctx.f6.f64);
	// bge cr6,0x82a3c9c4
	if (!cr6.lt) goto loc_82A3C9C4;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82a3ca34
	goto loc_82A3CA34;
loc_82A3C8C8:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f28
	cr6.compare(ctx.f6.f64, ctx.f28.f64);
	// bgt cr6,0x82a3c8f4
	if (cr6.gt) goto loc_82A3C8F4;
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r30,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a3ca34
	goto loc_82A3CA34;
loc_82A3C8F4:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c98c
	if (cr6.eq) goto loc_82A3C98C;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a3c98c
	if (!cr6.eq) goto loc_82A3C98C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f1a0
	ctx.lr = 0x82A3C91C;
	sub_8268F1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-3400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a3c98c
	if (!cr6.lt) goto loc_82A3C98C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a3c94c
	if (cr6.eq) goto loc_82A3C94C;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82a3c950
	goto loc_82A3C950;
loc_82A3C94C:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82A3C950:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,-11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x82a3c98c
	if (!cr6.gt) goto loc_82A3C98C;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82a3ca34
	goto loc_82A3CA34;
loc_82A3C98C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f1,7444(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a36180
	ctx.lr = 0x82A3C99C;
	sub_82A36180(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3c070
	ctx.lr = 0x82A3C9B8;
	sub_82A3C070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c9cc
	if (cr6.eq) goto loc_82A3C9CC;
loc_82A3C9C4:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82a3ca34
	goto loc_82A3CA34;
loc_82A3C9CC:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3c9f0
	if (cr6.eq) goto loc_82A3C9F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82a3c9f4
	goto loc_82A3C9F4;
loc_82A3C9F0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82A3C9F4:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r30,2
	ctx.r30.s64 = 2;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f5,f8
	cr6.compare(ctx.f5.f64, ctx.f8.f64);
	// bgt cr6,0x82a3ca34
	if (cr6.gt) goto loc_82A3CA34;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A3CA34:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a3ca88
	if (!cr6.eq) goto loc_82A3CA88;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cfa8
	ctx.lr = 0x82A3CA4C;
	sub_82A3CFA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a3ca88
	if (!cr6.eq) goto loc_82A3CA88;
	// lbz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3ca88
	if (cr6.eq) goto loc_82A3CA88;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3ca88
	if (cr6.eq) goto loc_82A3CA88;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a3ca88
	if (!cr6.lt) goto loc_82A3CA88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82A3CA88:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a3cb2c
	if (cr6.eq) goto loc_82A3CB2C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a3cadc
	if (cr6.eq) goto loc_82A3CADC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a3cac8
	if (!cr6.eq) goto loc_82A3CAC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3b8b0
	ctx.lr = 0x82A3CAAC;
	sub_82A3B8B0(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82A3CAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3CAD8;
	__restfpr_26(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A3CADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3b8b0
	ctx.lr = 0x82A3CAE4;
	sub_82A3B8B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f31,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a3ba48
	ctx.lr = 0x82A3CAFC;
	sub_82A3BA48(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3ba48
	ctx.lr = 0x82A3CB10;
	sub_82A3BA48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3bbd8
	ctx.lr = 0x82A3CB18;
	sub_82A3BBD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3CB28;
	__restfpr_26(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A3CB2C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3cac8
	if (cr6.eq) goto loc_82A3CAC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3b8b0
	ctx.lr = 0x82A3CB40;
	sub_82A3B8B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,7444(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a36180
	ctx.lr = 0x82A3CB50;
	sub_82A36180(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfs f8,1256(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lfs f7,1280(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1260(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// lfs f6,1284(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1284);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1264(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// lfs f5,1288(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1288);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1268(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// lbz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3cbdc
	if (cr6.eq) goto loc_82A3CBDC;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3CBD8;
	__restfpr_26(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A3CBDC:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7bc
	ctx.lr = 0x82A3CC04;
	__restfpr_26(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3CC08"))) PPC_WEAK_FUNC(sub_82A3CC08);
PPC_FUNC_IMPL(__imp__sub_82A3CC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3CC10;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// bl 0x83740868
	ctx.lr = 0x82A3CC54;
	sub_83740868(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f0,-23868(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,23372(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23372);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82a3ce90
	if (!cr6.gt) goto loc_82A3CE90;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82a3cca8
	if (!cr6.lt) goto loc_82A3CCA8;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x82a3ce90
	goto loc_82A3CE90;
loc_82A3CCA8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r30,3(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// lfs f29,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bge cr6,0x82a3cdc0
	if (!cr6.lt) goto loc_82A3CDC0;
	// fdivs f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
loc_82A3CCD0:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82a3cce4
	if (cr6.eq) goto loc_82A3CCE4;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_82A3CCE4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a3cda0
	if (cr6.gt) goto loc_82A3CDA0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A3CD4C;
	sub_825CA560(ctx, base);
	// lfs f0,21136(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 21136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x82a3cd64
	if (!cr6.lt) goto loc_82A3CD64;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82a3cd70
	goto loc_82A3CD70;
loc_82A3CD64:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a3cd74
	if (cr6.lt) goto loc_82A3CD74;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_82A3CD70:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A3CD74:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x82a5a710
	ctx.lr = 0x82A3CD98;
	sub_82A5A710(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a3cdb0
	goto loc_82A3CDB0;
loc_82A3CDA0:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82A3CDB0:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3ccd0
	if (cr6.lt) goto loc_82A3CCD0;
loc_82A3CDC0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82a3ce90
	if (!cr6.gt) goto loc_82A3CE90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// bne cr6,0x82a3ce90
	if (!cr6.eq) goto loc_82A3CE90;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82a3ce24
	if (!cr6.eq) goto loc_82A3CE24;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82a3ce28
	goto loc_82A3CE28;
loc_82A3CE24:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82A3CE28:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82a3ce58
	if (!cr6.eq) goto loc_82A3CE58;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a3ce5c
	goto loc_82A3CE5C;
loc_82A3CE58:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_82A3CE5C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A3CE70;
	sub_825CA560(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x825ca978
	ctx.lr = 0x82A3CE90;
	sub_825CA978(ctx, base);
loc_82A3CE90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3CEA8"))) PPC_WEAK_FUNC(sub_82A3CEA8);
PPC_FUNC_IMPL(__imp__sub_82A3CEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3ceb8
	if (cr6.lt) goto loc_82A3CEB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CEB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3CED0"))) PPC_WEAK_FUNC(sub_82A3CED0);
PPC_FUNC_IMPL(__imp__sub_82A3CED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3cee0
	if (cr6.lt) goto loc_82A3CEE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CEE0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lis r12,12421
	ctx.r12.s64 = 814022656;
	// ori r12,r12,32827
	ctx.r12.u64 = ctx.r12.u64 | 32827;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
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

__attribute__((alias("__imp__sub_82A3CF08"))) PPC_WEAK_FUNC(sub_82A3CF08);
PPC_FUNC_IMPL(__imp__sub_82A3CF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3cf18
	if (cr6.lt) goto loc_82A3CF18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CF18:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3CF30"))) PPC_WEAK_FUNC(sub_82A3CF30);
PPC_FUNC_IMPL(__imp__sub_82A3CF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3cf40
	if (cr6.lt) goto loc_82A3CF40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CF40:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3CF58"))) PPC_WEAK_FUNC(sub_82A3CF58);
PPC_FUNC_IMPL(__imp__sub_82A3CF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3cf68
	if (cr6.lt) goto loc_82A3CF68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CF68:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3CF80"))) PPC_WEAK_FUNC(sub_82A3CF80);
PPC_FUNC_IMPL(__imp__sub_82A3CF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3cf90
	if (cr6.lt) goto loc_82A3CF90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CF90:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3CFA8"))) PPC_WEAK_FUNC(sub_82A3CFA8);
PPC_FUNC_IMPL(__imp__sub_82A3CFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3cfb8
	if (cr6.lt) goto loc_82A3CFB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CFB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3CFD0"))) PPC_WEAK_FUNC(sub_82A3CFD0);
PPC_FUNC_IMPL(__imp__sub_82A3CFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3cfe0
	if (cr6.lt) goto loc_82A3CFE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3CFE0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3CFF8"))) PPC_WEAK_FUNC(sub_82A3CFF8);
PPC_FUNC_IMPL(__imp__sub_82A3CFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d008
	if (cr6.lt) goto loc_82A3D008;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D008:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D020"))) PPC_WEAK_FUNC(sub_82A3D020);
PPC_FUNC_IMPL(__imp__sub_82A3D020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d030
	if (cr6.lt) goto loc_82A3D030;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D030:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,1,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x60000000;
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

__attribute__((alias("__imp__sub_82A3D050"))) PPC_WEAK_FUNC(sub_82A3D050);
PPC_FUNC_IMPL(__imp__sub_82A3D050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d060
	if (cr6.lt) goto loc_82A3D060;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D060:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D078"))) PPC_WEAK_FUNC(sub_82A3D078);
PPC_FUNC_IMPL(__imp__sub_82A3D078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d088
	if (cr6.lt) goto loc_82A3D088;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D088:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D0A0"))) PPC_WEAK_FUNC(sub_82A3D0A0);
PPC_FUNC_IMPL(__imp__sub_82A3D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d0b0
	if (cr6.lt) goto loc_82A3D0B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D0B0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D0C8"))) PPC_WEAK_FUNC(sub_82A3D0C8);
PPC_FUNC_IMPL(__imp__sub_82A3D0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d0d8
	if (cr6.lt) goto loc_82A3D0D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D0D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,20,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D0F0"))) PPC_WEAK_FUNC(sub_82A3D0F0);
PPC_FUNC_IMPL(__imp__sub_82A3D0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3d108
	if (cr6.eq) goto loc_82A3D108;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A3D108:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(ctx.r11.s32, 94, xer);
	// blt cr6,0x82a3d120
	if (cr6.lt) goto loc_82A3D120;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D120:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,21320
	ctx.r8.s64 = ctx.r10.s64 + 21320;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r3,r7,19,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x1;
	// blr 
	return;
}

