#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83933F30"))) PPC_WEAK_FUNC(sub_83933F30);
PPC_FUNC_IMPL(__imp__sub_83933F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83933F38;
	__savegprlr_22(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x83933fcc
	if (!cr6.eq) goto loc_83933FCC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r31,r11,-13604
	ctx.r31.s64 = ctx.r11.s64 + -13604;
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83933F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x83933F7C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933f90
	if (!cr6.eq) goto loc_83933F90;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933F90:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// ori r6,r6,302
	ctx.r6.u64 = ctx.r6.u64 | 302;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83933FA4;
	sub_8392DBE8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839341c4
	if (cr6.lt) goto loc_839341C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83933FC4;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83933FCC:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 212);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r26,r11,-13604
	ctx.r26.s64 = ctx.r11.s64 + -13604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r4,r26,-52
	ctx.r4.s64 = ctx.r26.s64 + -52;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x83933ff8
	if (!cr6.eq) goto loc_83933FF8;
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
loc_83933FF8:
	// bctrl 
	ctx.lr = 0x83933FFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r9,11
	ctx.r9.s64 = 720896;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// ori r22,r9,284
	ctx.r22.u64 = ctx.r9.u64 | 284;
	// addi r25,r11,-13364
	ctx.r25.s64 = ctx.r11.s64 + -13364;
	// addi r23,r10,-13392
	ctx.r23.s64 = ctx.r10.s64 + -13392;
loc_83934024:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne cr6,0x8393404c
	if (!cr6.eq) goto loc_8393404C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82d042a8
	ctx.lr = 0x83934048;
	sub_82D042A8(ctx, base);
	// b 0x83934070
	goto loc_83934070;
loc_8393404C:
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// bne cr6,0x83934064
	if (!cr6.eq) goto loc_83934064;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82d042a8
	ctx.lr = 0x83934060;
	sub_82D042A8(ctx, base);
	// b 0x83934070
	goto loc_83934070;
loc_83934064:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x82d042a8
	ctx.lr = 0x83934070;
	sub_82D042A8(ctx, base);
loc_83934070:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// lwzx r4,r11,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82d042a8
	ctx.lr = 0x8393408C;
	sub_82D042A8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d580
	ctx.lr = 0x8393409C;
	sub_82D2D580(ctx, base);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r4,r26,-20
	ctx.r4.s64 = ctx.r26.s64 + -20;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x839340BC;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// bne cr6,0x839340cc
	if (!cr6.eq) goto loc_839340CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_839340CC:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839340DC;
	sub_8392DC70(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839340f8
	if (cr6.lt) goto loc_839340F8;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x839340F8;
	sub_825952B8(ctx, base);
loc_839340F8:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83934120;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// bne cr6,0x83934130
	if (!cr6.eq) goto loc_83934130;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83934130:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83934140;
	sub_8392DC70(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393415c
	if (cr6.lt) goto loc_8393415C;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8393415C;
	sub_825952B8(ctx, base);
loc_8393415C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x83934184
	if (cr6.lt) goto loc_83934184;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83934184;
	sub_825952B8(ctx, base);
loc_83934184:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x839341ac
	if (cr6.lt) goto loc_839341AC;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x839341AC;
	sub_825952B8(ctx, base);
loc_839341AC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x83934024
	if (cr6.lt) goto loc_83934024;
loc_839341C4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839341CC"))) PPC_WEAK_FUNC(sub_839341CC);
PPC_FUNC_IMPL(__imp__sub_839341CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839341D0"))) PPC_WEAK_FUNC(sub_839341D0);
PPC_FUNC_IMPL(__imp__sub_839341D0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8393421c
	if (!cr6.eq) goto loc_8393421C;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r8,204(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8393421c
	if (!cr6.eq) goto loc_8393421C;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r8,208(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x839343b8
	if (cr6.eq) goto loc_839343B8;
loc_8393421C:
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x839343b8
	if (cr6.gt) goto loc_839343B8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x839343b8
	if (cr6.eq) goto loc_839343B8;
	// bdz 0x83934334
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83934334;
	// bdnz 0x8393436c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8393436C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83933f30
	ctx.lr = 0x8393425C;
	sub_83933F30(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-13692
	ctx.r30.s64 = ctx.r11.s64 + -13692;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83934280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8393429C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839342B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839342D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839343b8
	if (cr6.eq) goto loc_839343B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,39
	ctx.r4.s64 = 2555904;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// subf r5,r8,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r8.s64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x83934314;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x83934328;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83934330;
	sub_8387E8E0(ctx, base);
	// b 0x839343b8
	goto loc_839343B8;
loc_83934334:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83933f30
	ctx.lr = 0x83934340;
	sub_83933F30(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-13692
	ctx.r30.s64 = ctx.r11.s64 + -13692;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83934364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// b 0x839343a0
	goto loc_839343A0;
loc_8393436C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83933f30
	ctx.lr = 0x83934378;
	sub_83933F30(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-13692
	ctx.r30.s64 = ctx.r11.s64 + -13692;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8393439C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_839343A0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839343B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839343B8:
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

__attribute__((alias("__imp__sub_839343D0"))) PPC_WEAK_FUNC(sub_839343D0);
PPC_FUNC_IMPL(__imp__sub_839343D0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-13816
	ctx.r31.s64 = ctx.r11.s64 + -13816;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8393440C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83934428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83934444;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839341d0
	ctx.lr = 0x8393444C;
	sub_839341D0(ctx, base);
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

__attribute__((alias("__imp__sub_83934464"))) PPC_WEAK_FUNC(sub_83934464);
PPC_FUNC_IMPL(__imp__sub_83934464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934468"))) PPC_WEAK_FUNC(sub_83934468);
PPC_FUNC_IMPL(__imp__sub_83934468) {
	PPC_FUNC_PROLOGUE();
	// b 0x839341d0
	sub_839341D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393446C"))) PPC_WEAK_FUNC(sub_8393446C);
PPC_FUNC_IMPL(__imp__sub_8393446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934470"))) PPC_WEAK_FUNC(sub_83934470);
PPC_FUNC_IMPL(__imp__sub_83934470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,13240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13240);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393447C"))) PPC_WEAK_FUNC(sub_8393447C);
PPC_FUNC_IMPL(__imp__sub_8393447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934480"))) PPC_WEAK_FUNC(sub_83934480);
PPC_FUNC_IMPL(__imp__sub_83934480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83934494"))) PPC_WEAK_FUNC(sub_83934494);
PPC_FUNC_IMPL(__imp__sub_83934494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934498"))) PPC_WEAK_FUNC(sub_83934498);
PPC_FUNC_IMPL(__imp__sub_83934498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839344A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839344C4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83934504
	if (cr6.eq) goto loc_83934504;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x839344E4;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-12736
	ctx.r9.s64 = ctx.r11.s64 + -12736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r10,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83934504:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83934510"))) PPC_WEAK_FUNC(sub_83934510);
PPC_FUNC_IMPL(__imp__sub_83934510) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8391b328
	ctx.lr = 0x8393452C;
	sub_8391B328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83934550
	if (!cr6.eq) goto loc_83934550;
loc_83934538:
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
loc_83934550:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,3649(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3649);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83934584
	if (cr6.eq) goto loc_83934584;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83934578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83934538
	if (cr6.eq) goto loc_83934538;
loc_83934584:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,3092(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3092);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839345ac
	if (!cr6.eq) goto loc_839345AC;
	// lbz r11,3093(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3093);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x839345b0
	if (cr6.eq) goto loc_839345B0;
loc_839345AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839345B0:
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

__attribute__((alias("__imp__sub_839345C8"))) PPC_WEAK_FUNC(sub_839345C8);
PPC_FUNC_IMPL(__imp__sub_839345C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x839345D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-12936
	ctx.r29.s64 = ctx.r11.s64 + -12936;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839345FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393460C;
	sub_82D2E228(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x83934620;
	sub_82D2E228(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x83934648;
	sub_8259CC28(ctx, base);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stb r30,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r30.u8);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8259cc28
	ctx.lr = 0x83934664;
	sub_8259CC28(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r19,r25,44
	ctx.r19.s64 = ctx.r25.s64 + 44;
	// addi r22,r1,176
	ctx.r22.s64 = ctx.r1.s64 + 176;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// li r20,2
	ctx.r20.s64 = 2;
	// lis r21,-31763
	ctx.r21.s64 = -2081619968;
loc_8393467C:
	// bl 0x831156e8
	ctx.lr = 0x83934680;
	sub_831156E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x8393468C;
	sub_8312B8F0(ctx, base);
	// lwz r11,-3564(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3564);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subfc r9,r20,r10
	xer.ca = ctx.r10.u32 >= ctx.r20.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r20.s64;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8259cc28
	ctx.lr = 0x839346CC;
	sub_8259CC28(ctx, base);
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x839346e0
	if (!cr6.eq) goto loc_839346E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_839346E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8392e218
	ctx.lr = 0x83934700;
	sub_8392E218(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393471c
	if (cr6.lt) goto loc_8393471C;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8393471C;
	sub_825952B8(ctx, base);
loc_8393471C:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// lbz r11,3092(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 3092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83934764
	if (cr6.eq) goto loc_83934764;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8393475c
	if (!cr6.eq) goto loc_8393475C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83934758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83934824
	goto loc_83934824;
loc_8393475C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839347e8
	if (!cr6.eq) goto loc_839347E8;
loc_83934764:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83934780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r29,-350
	ctx.r4.s64 = ctx.r29.s64 + -350;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x8393479C;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x839347ac
	if (!cr6.eq) goto loc_839347AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_839347AC:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839347BC;
	sub_8392DC70(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839347d8
	if (cr6.lt) goto loc_839347D8;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x839347D8;
	sub_825952B8(ctx, base);
loc_839347D8:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// b 0x83934824
	goto loc_83934824;
loc_839347E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83934804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x83934814
	if (!cr6.eq) goto loc_83934814;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83934814:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83934824;
	sub_8392E1A0(ctx, base);
loc_83934824:
	// lbz r11,3092(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 3092);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
	// stbx r11,r19,r28
	PPC_STORE_U8(ctx.r19.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x8393467c
	if (cr6.lt) goto loc_8393467C;
	// addi r31,r1,232
	ctx.r31.s64 = ctx.r1.s64 + 232;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83934848:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83934868
	if (cr6.lt) goto loc_83934868;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// bl 0x825952b8
	ctx.lr = 0x83934868;
	sub_825952B8(ctx, base);
loc_83934868:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bge 0x83934848
	if (!cr0.lt) goto loc_83934848;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83934884"))) PPC_WEAK_FUNC(sub_83934884);
PPC_FUNC_IMPL(__imp__sub_83934884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934888"))) PPC_WEAK_FUNC(sub_83934888);
PPC_FUNC_IMPL(__imp__sub_83934888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83934890;
	__savegprlr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r28,r11,-12840
	ctx.r28.s64 = ctx.r11.s64 + -12840;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// bl 0x82d2e228
	ctx.lr = 0x839348B0;
	sub_82D2E228(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r28,-68
	ctx.r4.s64 = ctx.r28.s64 + -68;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x839348C4;
	sub_82D2E228(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r4,r28,-56
	ctx.r4.s64 = ctx.r28.s64 + -56;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x839348EC;
	sub_8259CC28(ctx, base);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// stb r27,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r27.u8);
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8259cc28
	ctx.lr = 0x83934908;
	sub_8259CC28(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r23,r25,44
	ctx.r23.s64 = ctx.r25.s64 + 44;
	// addi r22,r1,128
	ctx.r22.s64 = ctx.r1.s64 + 128;
	// addi r24,r1,88
	ctx.r24.s64 = ctx.r1.s64 + 88;
	// li r19,2
	ctx.r19.s64 = 2;
	// lis r20,-31763
	ctx.r20.s64 = -2081619968;
loc_83934920:
	// bl 0x831156e8
	ctx.lr = 0x83934924;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x83934930;
	sub_8312B8F0(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,-3564(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfc r9,r19,r10
	xer.ca = ctx.r10.u32 >= ctx.r19.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r19.s64;
	// lbzx r7,r23,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r30.u32);
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,3092(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 3092);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x83934a6c
	if (cr6.eq) goto loc_83934A6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393499c
	if (cr6.eq) goto loc_8393499C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83934994
	if (!cr6.eq) goto loc_83934994;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83934990;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83934a64
	goto loc_83934A64;
loc_83934994:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83934a24
	if (!cr6.eq) goto loc_83934A24;
loc_8393499C:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839349BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r4,r28,-445
	ctx.r4.s64 = ctx.r28.s64 + -445;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x839349D8;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x839349e8
	if (!cr6.eq) goto loc_839349E8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_839349E8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839349F8;
	sub_8392DC70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83934a14
	if (cr6.lt) goto loc_83934A14;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83934A14;
	sub_825952B8(ctx, base);
loc_83934A14:
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// b 0x83934a64
	goto loc_83934A64;
loc_83934A24:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83934A44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bne cr6,0x83934a54
	if (!cr6.eq) goto loc_83934A54;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_83934A54:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83934A64;
	sub_8392E1A0(ctx, base);
loc_83934A64:
	// lbz r11,3092(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 3092);
	// stbx r11,r23,r30
	PPC_STORE_U8(ctx.r23.u32 + ctx.r30.u32, ctx.r11.u8);
loc_83934A6C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x83934920
	if (cr6.lt) goto loc_83934920;
	// addi r31,r1,184
	ctx.r31.s64 = ctx.r1.s64 + 184;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83934A88:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83934aa8
	if (cr6.lt) goto loc_83934AA8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x825952b8
	ctx.lr = 0x83934AA8;
	sub_825952B8(ctx, base);
loc_83934AA8:
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x83934a88
	if (!cr0.lt) goto loc_83934A88;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83934AC4"))) PPC_WEAK_FUNC(sub_83934AC4);
PPC_FUNC_IMPL(__imp__sub_83934AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934AC8"))) PPC_WEAK_FUNC(sub_83934AC8);
PPC_FUNC_IMPL(__imp__sub_83934AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83934AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392d6e8
	ctx.lr = 0x83934ADC;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83934af8
	if (!cr6.eq) goto loc_83934AF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83934AF8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83934b10
	if (!cr6.eq) goto loc_83934B10;
loc_83934B04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83934B10:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83934b04
	if (cr6.eq) goto loc_83934B04;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8337f1e0
	ctx.lr = 0x83934B24;
	sub_8337F1E0(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x83934B28;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83934b70
	if (!cr6.eq) goto loc_83934B70;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-12312
	ctx.r30.s64 = ctx.r11.s64 + -12312;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83934B54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83934B70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83934B70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83934B7C"))) PPC_WEAK_FUNC(sub_83934B7C);
PPC_FUNC_IMPL(__imp__sub_83934B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934B80"))) PPC_WEAK_FUNC(sub_83934B80);
PPC_FUNC_IMPL(__imp__sub_83934B80) {
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
	// bl 0x830ff290
	ctx.lr = 0x83934B90;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83934B94;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-15
	ctx.r11.s64 = ctx.r3.s64 + -15;
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

__attribute__((alias("__imp__sub_83934BB0"))) PPC_WEAK_FUNC(sub_83934BB0);
PPC_FUNC_IMPL(__imp__sub_83934BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,13384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13384);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83934BBC"))) PPC_WEAK_FUNC(sub_83934BBC);
PPC_FUNC_IMPL(__imp__sub_83934BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934BC0"))) PPC_WEAK_FUNC(sub_83934BC0);
PPC_FUNC_IMPL(__imp__sub_83934BC0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x83934bf8
	if (cr6.eq) goto loc_83934BF8;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x83934c48
	if (cr6.eq) goto loc_83934C48;
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
loc_83934BF8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83934c48
	if (!cr6.eq) goto loc_83934C48;
	// lbz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83934c48
	if (cr6.eq) goto loc_83934C48;
	// lbz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83934c30
	if (cr6.eq) goto loc_83934C30;
	// bl 0x8392d338
	ctx.lr = 0x83934C20;
	sub_8392D338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83934c34
	if (cr6.eq) goto loc_83934C34;
loc_83934C30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83934C34:
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
loc_83934C48:
	// lbz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 180);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83934C5C"))) PPC_WEAK_FUNC(sub_83934C5C);
PPC_FUNC_IMPL(__imp__sub_83934C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934C60"))) PPC_WEAK_FUNC(sub_83934C60);
PPC_FUNC_IMPL(__imp__sub_83934C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x83934c7c
	if (cr6.eq) goto loc_83934C7C;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x83934c9c
	if (!cr6.eq) goto loc_83934C9C;
loc_83934C7C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// blr 
	return;
loc_83934C9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83934CA8"))) PPC_WEAK_FUNC(sub_83934CA8);
PPC_FUNC_IMPL(__imp__sub_83934CA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8392db60
	sub_8392DB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83934CAC"))) PPC_WEAK_FUNC(sub_83934CAC);
PPC_FUNC_IMPL(__imp__sub_83934CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83934CB0"))) PPC_WEAK_FUNC(sub_83934CB0);
PPC_FUNC_IMPL(__imp__sub_83934CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83934CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83934CDC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83934d1c
	if (cr6.eq) goto loc_83934D1C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83934CFC;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-11664
	ctx.r9.s64 = ctx.r11.s64 + -11664;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83934D1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83934D28"))) PPC_WEAK_FUNC(sub_83934D28);
PPC_FUNC_IMPL(__imp__sub_83934D28) {
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
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83934db0
	if (cr6.eq) goto loc_83934DB0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83934dd8
	if (!cr6.eq) goto loc_83934DD8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83934dd8
	if (cr6.eq) goto loc_83934DD8;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83934dd8
	if (!cr6.eq) goto loc_83934DD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r10,-3564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r8,5356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5356);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83934dd8
	if (!cr6.eq) goto loc_83934DD8;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-11820
	ctx.r3.s64 = ctx.r11.s64 + -11820;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83934DAC;
	sub_830EAB70(ctx, base);
	// b 0x83934dd8
	goto loc_83934DD8;
loc_83934DB0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lbz r9,3649(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3649);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83934dd8
	if (cr6.eq) goto loc_83934DD8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83934DD8;
	sub_82D2AEC8(ctx, base);
loc_83934DD8:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x83934DE4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83934e08
	if (cr6.eq) goto loc_83934E08;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83934e08
	if (cr6.eq) goto loc_83934E08;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83934E08;
	sub_82D2AEC8(ctx, base);
loc_83934E08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d810
	ctx.lr = 0x83934E10;
	sub_8392D810(ctx, base);
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

__attribute__((alias("__imp__sub_83934E28"))) PPC_WEAK_FUNC(sub_83934E28);
PPC_FUNC_IMPL(__imp__sub_83934E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83934E30;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,100
	cr6.compare<uint32_t>(ctx.r5.u32, 100, xer);
	// blt cr6,0x83934e54
	if (cr6.lt) goto loc_83934E54;
	// li r26,99
	ctx.r26.s64 = 99;
loc_83934E54:
	// bl 0x83911640
	ctx.lr = 0x83934E58;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83934f10
	if (cr6.eq) goto loc_83934F10;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83934f10
	if (cr6.eq) goto loc_83934F10;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83934f10
	if (cr6.eq) goto loc_83934F10;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-12256
	ctx.r31.s64 = ctx.r11.s64 + -12256;
	// addi r4,r31,-326
	ctx.r4.s64 = ctx.r31.s64 + -326;
	// bl 0x837b0c10
	ctx.lr = 0x83934E84;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83934E90;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83934ea4
	if (!cr6.eq) goto loc_83934EA4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83934EA4:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83934EB4;
	sub_8392DC70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83934EBC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83934EC4;
	sub_8387E8E0(ctx, base);
	// addi r4,r31,-325
	ctx.r4.s64 = ctx.r31.s64 + -325;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x83934ED0;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x83934EDC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83934ef0
	if (!cr6.eq) goto loc_83934EF0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83934EF0:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83934F00;
	sub_8392DC70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83934F08;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83934F10;
	sub_8387E8E0(ctx, base);
loc_83934F10:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x83911640
	ctx.lr = 0x83934F20;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83934f30
	if (!cr6.eq) goto loc_83934F30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,14612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14612);
	ctx.f31.f64 = double(temp.f32);
loc_83934F30:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,13544
	ctx.r8.s64 = ctx.r10.s64 + 13544;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(ctx.r26.u32, 10, xer);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r7,100(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bge cr6,0x83934fa8
	if (!cr6.lt) goto loc_83934FA8;
	// bctrl 
	ctx.lr = 0x83934F60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83935100
	if (cr6.eq) goto loc_83935100;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2b250
	ctx.lr = 0x83934F80;
	sub_82D2B250(ctx, base);
	// bl 0x82d4bb00
	ctx.lr = 0x83934F84;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x83934F94;
	sub_82D4C690(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839350dc
	if (cr6.lt) goto loc_839350DC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x839350e0
	goto loc_839350E0;
loc_83934FA8:
	// bctrl 
	ctx.lr = 0x83934FAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83934FB8;
	sub_82D2AEC8(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r28,r29,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,13528
	ctx.r29.s64 = ctx.r11.s64 + 13528;
	// lwzx r4,r28,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83934FE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83935100
	if (cr6.eq) goto loc_83935100;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2b250
	ctx.lr = 0x83935000;
	sub_82D2B250(ctx, base);
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// ori r10,r11,52429
	ctx.r10.u64 = ctx.r11.u64 | 52429;
	// mulhwu r9,r26,r10
	ctx.r9.u64 = (uint64_t(ctx.r26.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r27,r9,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82d4bb00
	ctx.lr = 0x83935014;
	sub_82D4BB00(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r7.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x83935034;
	sub_82D4C690(ctx, base);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83935048
	if (cr6.lt) goto loc_83935048;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8393504c
	goto loc_8393504C;
loc_83935048:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8393504C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83935064;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8393506C;
	sub_8387E8E0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwzx r4,r28,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8393508C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83935100
	if (cr6.eq) goto loc_83935100;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2b250
	ctx.lr = 0x839350AC;
	sub_82D2B250(ctx, base);
	// bl 0x82d4bb00
	ctx.lr = 0x839350B0;
	sub_82D4BB00(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divwu r10,r26,r11
	ctx.r10.u32 = PPCDivide(ctx.r26.u32, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x839350C8;
	sub_82D4C690(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839350dc
	if (cr6.lt) goto loc_839350DC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x839350e0
	goto loc_839350E0;
loc_839350DC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_839350E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839350F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83935100;
	sub_8387E8E0(ctx, base);
loc_83935100:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83935110"))) PPC_WEAK_FUNC(sub_83935110);
PPC_FUNC_IMPL(__imp__sub_83935110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83935118;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83911640
	ctx.lr = 0x83935124;
	sub_83911640(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8393513c
	if (!cr6.gt) goto loc_8393513C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83935140
	if (!cr6.gt) goto loc_83935140;
loc_8393513C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83935140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839352c8
	if (cr6.eq) goto loc_839352C8;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a290c8
	ctx.lr = 0x83935160;
	sub_82A290C8(ctx, base);
	// bl 0x83911da8
	ctx.lr = 0x83935164;
	sub_83911DA8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,15
	ctx.r28.s64 = 15;
	// add r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// blt cr6,0x839351bc
	if (cr6.lt) goto loc_839351BC;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,-11760
	ctx.r31.s64 = ctx.r11.s64 + -11760;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83935190;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839351a4
	if (!cr6.eq) goto loc_839351A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_839351A4:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x839351B4;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8393521c
	goto loc_8393521C;
loc_839351BC:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// ori r4,r4,286
	ctx.r4.u64 = ctx.r4.u64 | 286;
	// bl 0x82d042a8
	ctx.lr = 0x839351D8;
	sub_82D042A8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,-11760
	ctx.r31.s64 = ctx.r11.s64 + -11760;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x839351EC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935200
	if (!cr6.eq) goto loc_83935200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83935200:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83935210;
	sub_8392DC70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83935218;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8393521C:
	// bl 0x8387e8e0
	ctx.lr = 0x83935220;
	sub_8387E8E0(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// blt cr6,0x8393526c
	if (cr6.lt) goto loc_8393526C;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83935238;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393524c
	if (!cr6.eq) goto loc_8393524C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8393524C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393525C;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83935264;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8393526C:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// ori r4,r4,286
	ctx.r4.u64 = ctx.r4.u64 | 286;
	// bl 0x82d042a8
	ctx.lr = 0x83935288;
	sub_82D042A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83935294;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839352a8
	if (!cr6.eq) goto loc_839352A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_839352A8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839352B8;
	sub_8392DC70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x839352C0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839352C8;
	sub_8387E8E0(ctx, base);
loc_839352C8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839352D0"))) PPC_WEAK_FUNC(sub_839352D0);
PPC_FUNC_IMPL(__imp__sub_839352D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83935110
	sub_83935110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839352D4"))) PPC_WEAK_FUNC(sub_839352D4);
PPC_FUNC_IMPL(__imp__sub_839352D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839352D8"))) PPC_WEAK_FUNC(sub_839352D8);
PPC_FUNC_IMPL(__imp__sub_839352D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x839352F0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839352F4;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-15
	ctx.r11.s64 = ctx.r3.s64 + -15;
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
	// bne cr6,0x83935350
	if (!cr6.eq) goto loc_83935350;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r9,5356(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5356);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,7
	cr6.compare<int32_t>(ctx.r9.s32, 7, xer);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bne cr6,0x83935348
	if (!cr6.eq) goto loc_83935348;
	// addi r11,r11,-12276
	ctx.r11.s64 = ctx.r11.s64 + -12276;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x8393534c
	goto loc_8393534C;
loc_83935348:
	// addi r4,r11,-12276
	ctx.r4.s64 = ctx.r11.s64 + -12276;
loc_8393534C:
	// bctrl 
	ctx.lr = 0x83935350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83935350:
	// bl 0x83911640
	ctx.lr = 0x83935354;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83935368
	if (!cr6.gt) goto loc_83935368;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8393536c
	if (!cr6.gt) goto loc_8393536C;
loc_83935368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8393536C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83935380
	if (cr6.eq) goto loc_83935380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83935110
	ctx.lr = 0x83935380;
	sub_83935110(ctx, base);
loc_83935380:
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

__attribute__((alias("__imp__sub_83935394"))) PPC_WEAK_FUNC(sub_83935394);
PPC_FUNC_IMPL(__imp__sub_83935394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83935398"))) PPC_WEAK_FUNC(sub_83935398);
PPC_FUNC_IMPL(__imp__sub_83935398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839353A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83911748
	ctx.lr = 0x839353B0;
	sub_83911748(ctx, base);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83911640
	ctx.lr = 0x839353B8;
	sub_83911640(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839353C0;
	sub_831156E8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r26,56(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lbz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
	// bl 0x83911640
	ctx.lr = 0x839353D4;
	sub_83911640(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x839353ec
	if (!cr6.gt) goto loc_839353EC;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839353f0
	if (!cr6.gt) goto loc_839353F0;
loc_839353EC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839353F0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,-11836
	ctx.r30.s64 = ctx.r11.s64 + -11836;
	// beq cr6,0x8393545c
	if (cr6.eq) goto loc_8393545C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x83935428
	if (!cr6.eq) goto loc_83935428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83935110
	ctx.lr = 0x83935420;
	sub_83935110(ctx, base);
	// addi r4,r30,-316
	ctx.r4.s64 = ctx.r30.s64 + -316;
	// b 0x83935444
	goto loc_83935444;
loc_83935428:
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// addi r4,r30,-300
	ctx.r4.s64 = ctx.r30.s64 + -300;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x83935444
	if (cr6.eq) goto loc_83935444;
	// addi r4,r30,-280
	ctx.r4.s64 = ctx.r30.s64 + -280;
loc_83935444:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393545C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8393545C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x839354d8
	if (!cr6.eq) goto loc_839354D8;
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x839354d8
	if (!cr6.lt) goto loc_839354D8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x839354b8
	if (cr6.eq) goto loc_839354B8;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x839354b8
	if (cr6.eq) goto loc_839354B8;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x839354b8
	if (cr6.eq) goto loc_839354B8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-252
	ctx.r4.s64 = ctx.r30.s64 + -252;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839354B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83935514
	goto loc_83935514;
loc_839354B8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839354D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83935514
	goto loc_83935514;
loc_839354D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-240
	ctx.r4.s64 = ctx.r30.s64 + -240;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839354F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r5,159(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 159);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83934e28
	ctx.lr = 0x83935504;
	sub_83934E28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 160);
	// bl 0x83934e28
	ctx.lr = 0x83935514;
	sub_83934E28(ctx, base);
loc_83935514:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x83935534;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x83935554;
	sub_8392E290(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83935574
	if (cr6.lt) goto loc_83935574;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83935574;
	sub_825952B8(ctx, base);
loc_83935574:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r4,r30,-212
	ctx.r4.s64 = ctx.r30.s64 + -212;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393559C;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x839355BC;
	sub_8392E290(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839355d8
	if (cr6.lt) goto loc_839355D8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839355D8;
	sub_825952B8(ctx, base);
loc_839355D8:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x83911640
	ctx.lr = 0x839355E8;
	sub_83911640(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x839356f8
	if (cr6.gt) goto loc_839356F8;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839356f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839356F8;
	// bdzf 4*cr6+eq,0x839356d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839356D4;
	// bdzf 4*cr6+eq,0x839356f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839356F8;
	// bdzf 4*cr6+eq,0x83935610
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83935610;
	// bdzf 4*cr6+eq,0x839356f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839356F8;
	// bne cr6,0x83935610
	if (!cr6.eq) goto loc_83935610;
loc_83935610:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8312d6e8
	ctx.lr = 0x8393561C;
	sub_8312D6E8(ctx, base);
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x83935628;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393563c
	if (!cr6.eq) goto loc_8393563C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8393563C:
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393564C;
	sub_8392DC70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83935654;
	sub_8387E8E0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8312d698
	ctx.lr = 0x83935660;
	sub_8312D698(ctx, base);
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x8393566C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935680
	if (!cr6.eq) goto loc_83935680;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_83935680:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83935690;
	sub_8392DC70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83935698;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x839356AC;
	sub_8392DDC0(ctx, base);
	// addi r4,r30,-148
	ctx.r4.s64 = ctx.r30.s64 + -148;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x839356C0;
	sub_8392DDC0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x839356C8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x839356D0;
	sub_8387E8E0(ctx, base);
	// b 0x83935780
	goto loc_83935780;
loc_839356D4:
	// addi r4,r30,-128
	ctx.r4.s64 = ctx.r30.s64 + -128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e320
	ctx.lr = 0x839356E4;
	sub_8392E320(ctx, base);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e320
	ctx.lr = 0x839356F4;
	sub_8392E320(ctx, base);
	// b 0x83935780
	goto loc_83935780;
loc_839356F8:
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8393570C;
	sub_8392DDC0(ctx, base);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x83935720;
	sub_8392DDC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393573C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83935750
	if (cr6.eq) goto loc_83935750;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83935750;
	sub_82D2AEC8(ctx, base);
loc_83935750:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393576C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83935780
	if (cr6.eq) goto loc_83935780;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83935780;
	sub_82D2AEC8(ctx, base);
loc_83935780:
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,5356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x839357b4
	if (!cr6.eq) goto loc_839357B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x839357B0;
	sub_830EAB70(ctx, base);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_839357B4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839357BC"))) PPC_WEAK_FUNC(sub_839357BC);
PPC_FUNC_IMPL(__imp__sub_839357BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839357C0"))) PPC_WEAK_FUNC(sub_839357C0);
PPC_FUNC_IMPL(__imp__sub_839357C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839357dc
	if (cr6.eq) goto loc_839357DC;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_839357DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839357E4"))) PPC_WEAK_FUNC(sub_839357E4);
PPC_FUNC_IMPL(__imp__sub_839357E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839357E8"))) PPC_WEAK_FUNC(sub_839357E8);
PPC_FUNC_IMPL(__imp__sub_839357E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,13552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13552);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839357F4"))) PPC_WEAK_FUNC(sub_839357F4);
PPC_FUNC_IMPL(__imp__sub_839357F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839357F8"))) PPC_WEAK_FUNC(sub_839357F8);
PPC_FUNC_IMPL(__imp__sub_839357F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83935800"))) PPC_WEAK_FUNC(sub_83935800);
PPC_FUNC_IMPL(__imp__sub_83935800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393581C"))) PPC_WEAK_FUNC(sub_8393581C);
PPC_FUNC_IMPL(__imp__sub_8393581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83935820"))) PPC_WEAK_FUNC(sub_83935820);
PPC_FUNC_IMPL(__imp__sub_83935820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 180);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83935840
	if (cr6.eq) goto loc_83935840;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83935844
	if (cr6.eq) goto loc_83935844;
loc_83935840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83935844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,-11044
	ctx.r3.s64 = ctx.r11.s64 + -11044;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830eab70
	sub_830EAB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83935870"))) PPC_WEAK_FUNC(sub_83935870);
PPC_FUNC_IMPL(__imp__sub_83935870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83935874"))) PPC_WEAK_FUNC(sub_83935874);
PPC_FUNC_IMPL(__imp__sub_83935874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83935878"))) PPC_WEAK_FUNC(sub_83935878);
PPC_FUNC_IMPL(__imp__sub_83935878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839358A8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839358a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839358A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839358B8"))) PPC_WEAK_FUNC(sub_839358B8);
PPC_FUNC_IMPL(__imp__sub_839358B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839358C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839358E4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393591c
	if (cr6.eq) goto loc_8393591C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83935904;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-10944
	ctx.r10.s64 = ctx.r11.s64 + -10944;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8393591C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83935928"))) PPC_WEAK_FUNC(sub_83935928);
PPC_FUNC_IMPL(__imp__sub_83935928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83935930;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lbz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x831156e8
	ctx.lr = 0x83935958;
	sub_831156E8(ctx, base);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addis r31,r8,5
	ctx.r31.s64 = ctx.r8.s64 + 327680;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123ba8
	ctx.lr = 0x83935974;
	sub_83123BA8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_83935990:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83935990
	if (!cr6.eq) goto loc_83935990;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839359B4;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83123a08
	ctx.lr = 0x839359C4;
	sub_83123A08(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x839359e0
	if (!cr6.lt) goto loc_839359E0;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbz r31,512(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// b 0x839359e4
	goto loc_839359E4;
loc_839359E0:
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_839359E4:
	// bl 0x83911640
	ctx.lr = 0x839359E8;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83935a64
	if (cr6.eq) goto loc_83935A64;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83935a64
	if (cr6.eq) goto loc_83935A64;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83935a64
	if (cr6.eq) goto loc_83935A64;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// bge cr6,0x83935a20
	if (!cr6.lt) goto loc_83935A20;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_83935A20:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// ori r4,r4,285
	ctx.r4.u64 = ctx.r4.u64 | 285;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x83935A34;
	sub_82D042A8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935a48
	if (!cr6.eq) goto loc_83935A48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83935A48:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83935A58;
	sub_8392DC70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83935A60;
	sub_8387E8E0(ctx, base);
	// b 0x83935aac
	goto loc_83935AAC;
loc_83935A64:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935a78
	if (!cr6.eq) goto loc_83935A78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83935A78:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83935A88;
	sub_8392E1A0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935a9c
	if (!cr6.eq) goto loc_83935A9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83935A9C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83935AAC;
	sub_8392DC70(ctx, base);
loc_83935AAC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83935acc
	if (cr6.lt) goto loc_83935ACC;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83935ACC;
	sub_825952B8(ctx, base);
loc_83935ACC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// blt cr6,0x83935af4
	if (cr6.lt) goto loc_83935AF4;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83935AF4;
	sub_825952B8(ctx, base);
loc_83935AF4:
	// stw r26,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r26.u32);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83935b1c
	if (cr6.lt) goto loc_83935B1C;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83935B1C;
	sub_825952B8(ctx, base);
loc_83935B1C:
	// stw r26,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r26.u32);
	// stw r29,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r29.u32);
	// stb r29,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r29.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83935B30"))) PPC_WEAK_FUNC(sub_83935B30);
PPC_FUNC_IMPL(__imp__sub_83935B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83935B38;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83911748
	ctx.lr = 0x83935B48;
	sub_83911748(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-11060
	ctx.r29.s64 = ctx.r11.s64 + -11060;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r29,-188
	ctx.r4.s64 = ctx.r29.s64 + -188;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r28,r11,180
	ctx.r28.s64 = ctx.r11.s64 + 180;
	// lwz r26,188(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83935B80;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e290
	ctx.lr = 0x83935BA0;
	sub_8392E290(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83935bc0
	if (cr6.lt) goto loc_83935BC0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83935BC0;
	sub_825952B8(ctx, base);
loc_83935BC0:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// addi r4,r29,-180
	ctx.r4.s64 = ctx.r29.s64 + -180;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83935BE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r29,-168
	ctx.r4.s64 = ctx.r29.s64 + -168;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x83935C04;
	sub_8259CC28(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83935C20;
	sub_8259CC28(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83935928
	ctx.lr = 0x83935C38;
	sub_83935928(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83935C54;
	sub_8259CC28(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x83935C70;
	sub_8259CC28(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83935928
	ctx.lr = 0x83935C88;
	sub_83935928(ctx, base);
	// lbz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x83935d18
	if (!cr6.lt) goto loc_83935D18;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83935CB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83935CBC;
	sub_837B0C10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83935CCC;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x83935928
	ctx.lr = 0x83935CE4;
	sub_83935928(ctx, base);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83935CF0;
	sub_837B0C10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83935D00;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// bl 0x83935928
	ctx.lr = 0x83935D18;
	sub_83935928(ctx, base);
loc_83935D18:
	// bl 0x83911640
	ctx.lr = 0x83935D1C;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83935dbc
	if (!cr6.eq) goto loc_83935DBC;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83911eb8
	ctx.lr = 0x83935D3C;
	sub_83911EB8(ctx, base);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x83935D48;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935d5c
	if (!cr6.eq) goto loc_83935D5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83935D5C:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83935D6C;
	sub_8392DC70(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83935d88
	if (cr6.lt) goto loc_83935D88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x83935D88;
	sub_825952B8(ctx, base);
loc_83935D88:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83935db0
	if (cr6.lt) goto loc_83935DB0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x83935DB0;
	sub_825952B8(ctx, base);
loc_83935DB0:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_83935DBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83935DD8;
	sub_830EAB70(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83935DE0"))) PPC_WEAK_FUNC(sub_83935DE0);
PPC_FUNC_IMPL(__imp__sub_83935DE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83935DE8"))) PPC_WEAK_FUNC(sub_83935DE8);
PPC_FUNC_IMPL(__imp__sub_83935DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,13696(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83935DF4"))) PPC_WEAK_FUNC(sub_83935DF4);
PPC_FUNC_IMPL(__imp__sub_83935DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83935DF8"))) PPC_WEAK_FUNC(sub_83935DF8);
PPC_FUNC_IMPL(__imp__sub_83935DF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83935E00"))) PPC_WEAK_FUNC(sub_83935E00);
PPC_FUNC_IMPL(__imp__sub_83935E00) {
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
	ctx.lr = 0x83935E18;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83935E1C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x83935e3c
	if (!cr6.eq) goto loc_83935E3C;
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
loc_83935E3C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 228);
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

__attribute__((alias("__imp__sub_83935E58"))) PPC_WEAK_FUNC(sub_83935E58);
PPC_FUNC_IMPL(__imp__sub_83935E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stw r9,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r9.u32);
	// lwz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// stw r8,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83935E7C"))) PPC_WEAK_FUNC(sub_83935E7C);
PPC_FUNC_IMPL(__imp__sub_83935E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83935E80"))) PPC_WEAK_FUNC(sub_83935E80);
PPC_FUNC_IMPL(__imp__sub_83935E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83935E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83935EAC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83935ee4
	if (cr6.eq) goto loc_83935EE4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83935ECC;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-10408
	ctx.r10.s64 = ctx.r11.s64 + -10408;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83935EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83935EF0"))) PPC_WEAK_FUNC(sub_83935EF0);
PPC_FUNC_IMPL(__imp__sub_83935EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83935EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83911748
	ctx.lr = 0x83935F08;
	sub_83911748(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-10512
	ctx.r30.s64 = ctx.r11.s64 + -10512;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bctrl 
	ctx.lr = 0x83935F38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83935f90
	if (cr6.eq) goto loc_83935F90;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83935fe4
	if (!cr6.eq) goto loc_83935FE4;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83935F58;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935f6c
	if (!cr6.eq) goto loc_83935F6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83935F6C:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r6,r6,23
	ctx.r6.u64 = ctx.r6.u64 | 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83935F80;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83935F88;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83935F90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83935F9C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83935fb0
	if (!cr6.eq) goto loc_83935FB0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83935FB0:
	// lis r6,12
	ctx.r6.s64 = 786432;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r6,r6,29
	ctx.r6.u64 = ctx.r6.u64 | 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83935FC4;
	sub_8392DBE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83935fe4
	if (cr6.lt) goto loc_83935FE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83935FE4;
	sub_825952B8(ctx, base);
loc_83935FE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83935FEC"))) PPC_WEAK_FUNC(sub_83935FEC);
PPC_FUNC_IMPL(__imp__sub_83935FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83935FF0"))) PPC_WEAK_FUNC(sub_83935FF0);
PPC_FUNC_IMPL(__imp__sub_83935FF0) {
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
	// bl 0x8392d6e8
	ctx.lr = 0x83936008;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393602c
	if (!cr6.eq) goto loc_8393602C;
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
loc_8393602C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83936044
	if (cr6.eq) goto loc_83936044;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83936048
	if (!cr6.eq) goto loc_83936048;
loc_83936044:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83936048:
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

__attribute__((alias("__imp__sub_8393605C"))) PPC_WEAK_FUNC(sub_8393605C);
PPC_FUNC_IMPL(__imp__sub_8393605C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83936060"))) PPC_WEAK_FUNC(sub_83936060);
PPC_FUNC_IMPL(__imp__sub_83936060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,13816(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13816);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393606C"))) PPC_WEAK_FUNC(sub_8393606C);
PPC_FUNC_IMPL(__imp__sub_8393606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83936070"))) PPC_WEAK_FUNC(sub_83936070);
PPC_FUNC_IMPL(__imp__sub_83936070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// beq cr6,0x83936094
	if (cr6.eq) goto loc_83936094;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// beq cr6,0x83936094
	if (cr6.eq) goto loc_83936094;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x8393609c
	if (!cr6.eq) goto loc_8393609C;
loc_83936094:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8393609C:
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839360B0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839360b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839360B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839360C0"))) PPC_WEAK_FUNC(sub_839360C0);
PPC_FUNC_IMPL(__imp__sub_839360C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839360C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839360EC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393612c
	if (cr6.eq) goto loc_8393612C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393610C;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,-9584
	ctx.r9.s64 = ctx.r11.s64 + -9584;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8393612C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83936138"))) PPC_WEAK_FUNC(sub_83936138);
PPC_FUNC_IMPL(__imp__sub_83936138) {
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
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x831156e8
	ctx.lr = 0x83936160;
	sub_831156E8(ctx, base);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lbz r9,631(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 631);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// bne cr6,0x83936178
	if (!cr6.eq) goto loc_83936178;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839361cc
	goto loc_839361CC;
loc_83936178:
	// lbz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839361a8
	if (cr6.eq) goto loc_839361A8;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x839361a0
	if (cr6.eq) goto loc_839361A0;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x839361a0
	if (cr6.eq) goto loc_839361A0;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x839361a8
	if (!cr6.eq) goto loc_839361A8;
loc_839361A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839361ac
	goto loc_839361AC;
loc_839361A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839361AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839361c0
	if (cr6.eq) goto loc_839361C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x839361cc
	goto loc_839361CC;
loc_839361C0:
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_839361CC:
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

__attribute__((alias("__imp__sub_839361E4"))) PPC_WEAK_FUNC(sub_839361E4);
PPC_FUNC_IMPL(__imp__sub_839361E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839361E8"))) PPC_WEAK_FUNC(sub_839361E8);
PPC_FUNC_IMPL(__imp__sub_839361E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83936138
	sub_83936138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839361EC"))) PPC_WEAK_FUNC(sub_839361EC);
PPC_FUNC_IMPL(__imp__sub_839361EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839361F0"))) PPC_WEAK_FUNC(sub_839361F0);
PPC_FUNC_IMPL(__imp__sub_839361F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83936138
	sub_83936138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839361F8"))) PPC_WEAK_FUNC(sub_839361F8);
PPC_FUNC_IMPL(__imp__sub_839361F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83936200;
	__savegprlr_19(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83911748
	ctx.lr = 0x83936210;
	sub_83911748(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83936214;
	sub_831156E8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r22,r11,96
	ctx.r22.s64 = ctx.r11.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// lwz r10,232(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// addi r28,r11,-9692
	ctx.r28.s64 = ctx.r11.s64 + -9692;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x839362bc
	if (cr6.eq) goto loc_839362BC;
	// addi r4,r28,-264
	ctx.r4.s64 = ctx.r28.s64 + -264;
	// bctrl 
	ctx.lr = 0x8393627C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r28,-244
	ctx.r4.s64 = ctx.r28.s64 + -244;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83936298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,188(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lbz r6,194(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 194);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lbz r5,195(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 195);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r4,184(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// stw r4,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// b 0x8393632c
	goto loc_8393632C;
loc_839362BC:
	// addi r4,r28,-308
	ctx.r4.s64 = ctx.r28.s64 + -308;
	// bctrl 
	ctx.lr = 0x839362C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lbz r21,12(r22)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r22.u32 + 12);
	// bl 0x83911980
	ctx.lr = 0x839362D8;
	sub_83911980(ctx, base);
	// cmplw cr6,r3,r21
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, xer);
	// bge cr6,0x839362f0
	if (!cr6.lt) goto loc_839362F0;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x83911980
	ctx.lr = 0x839362E8;
	sub_83911980(ctx, base);
	// subf r21,r3,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r3.s64;
	// li r20,1
	ctx.r20.s64 = 1;
loc_839362F0:
	// lbz r11,13(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 13);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r28,-296
	ctx.r4.s64 = ctx.r28.s64 + -296;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,14(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 14);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bge cr6,0x83936324
	if (!cr6.lt) goto loc_83936324;
	// addi r4,r28,-280
	ctx.r4.s64 = ctx.r28.s64 + -280;
loc_83936324:
	// bctrl 
	ctx.lr = 0x83936328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r24,1
	ctx.r24.s64 = 1;
loc_8393632C:
	// bl 0x83911640
	ctx.lr = 0x83936330;
	sub_83911640(ctx, base);
	// li r23,15
	ctx.r23.s64 = 15;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83936390
	if (cr6.eq) goto loc_83936390;
	// addi r4,r28,-228
	ctx.r4.s64 = ctx.r28.s64 + -228;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x837b0c10
	ctx.lr = 0x83936348;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e290
	ctx.lr = 0x83936368;
	sub_8392E290(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83936384
	if (cr6.lt) goto loc_83936384;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x825952b8
	ctx.lr = 0x83936384;
	sub_825952B8(ctx, base);
loc_83936384:
	// stw r23,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r23.u32);
	// stw r25,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r25.u32);
	// stb r25,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r25.u8);
loc_83936390:
	// bl 0x831156e8
	ctx.lr = 0x83936394;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r27,r11,5
	ctx.r27.s64 = ctx.r11.s64 + 327680;
	// addi r27,r27,14904
	ctx.r27.s64 = ctx.r27.s64 + 14904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123a08
	ctx.lr = 0x839363AC;
	sub_83123A08(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r23,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r23.u32);
	// stw r25,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r25,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r25.u8);
loc_839363C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839363c0
	if (!cr6.eq) goto loc_839363C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839363E4;
	sub_8259CC28(ctx, base);
	// lis r10,11
	ctx.r10.s64 = 720896;
	// ori r26,r10,285
	ctx.r26.u64 = ctx.r10.u64 | 285;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8393640c
	if (cr6.lt) goto loc_8393640C;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83936408;
	sub_82D2AEC8(ctx, base);
	// b 0x839365fc
	goto loc_839365FC;
loc_8393640C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123a08
	ctx.lr = 0x83936418;
	sub_83123A08(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x83936434
	if (!cr6.lt) goto loc_83936434;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbz r31,512(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// b 0x83936438
	goto loc_83936438;
loc_83936434:
	// lbz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_83936438:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123ba8
	ctx.lr = 0x83936448;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x83936458;
	sub_837B0C10(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x8393645C;
	sub_83911640(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x839365d4
	if (cr6.gt) goto loc_839365D4;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839364f4
	if (cr6.eq) goto loc_839364F4;
	// bdz 0x83936564
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83936564;
	// bdz 0x839364f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839364F4;
	// bdz 0x83936564
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83936564;
	// bdz 0x83936484
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83936484;
	// bdz 0x839364f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839364F4;
loc_83936484:
	// addi r4,r28,-220
	ctx.r4.s64 = ctx.r28.s64 + -220;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x837b0c10
	ctx.lr = 0x83936490;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839364a4
	if (!cr6.eq) goto loc_839364A4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_839364A4:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x839364B4;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x8387e8e0
	ctx.lr = 0x839364BC;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,-192
	ctx.r4.s64 = ctx.r28.s64 + -192;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x837b0c10
	ctx.lr = 0x839364C8;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839364dc
	if (!cr6.eq) goto loc_839364DC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_839364DC:
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839364EC;
	sub_8392DC70(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// b 0x839365d0
	goto loc_839365D0;
loc_839364F4:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r23,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r25,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r25.u32);
	// stb r25,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r25.u8);
	// bge cr6,0x83936514
	if (!cr6.lt) goto loc_83936514;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
loc_83936514:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82d042a8
	ctx.lr = 0x83936524;
	sub_82D042A8(ctx, base);
	// addi r4,r28,-168
	ctx.r4.s64 = ctx.r28.s64 + -168;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x83936530;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83936544
	if (!cr6.eq) goto loc_83936544;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_83936544:
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83936554;
	sub_8392DC70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x8393655C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// b 0x839365d0
	goto loc_839365D0;
loc_83936564:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r23,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r25,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r25.u32);
	// stb r25,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r25.u8);
	// bge cr6,0x83936584
	if (!cr6.lt) goto loc_83936584;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
loc_83936584:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82d042a8
	ctx.lr = 0x83936594;
	sub_82D042A8(ctx, base);
	// addi r4,r28,-144
	ctx.r4.s64 = ctx.r28.s64 + -144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x839365A0;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839365b4
	if (!cr6.eq) goto loc_839365B4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_839365B4:
	// addi r6,r1,720
	ctx.r6.s64 = ctx.r1.s64 + 720;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839365C4;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839365CC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
loc_839365D0:
	// bl 0x8387e8e0
	ctx.lr = 0x839365D4;
	sub_8387E8E0(ctx, base);
loc_839365D4:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839365f0
	if (cr6.lt) goto loc_839365F0;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x839365F0;
	sub_825952B8(ctx, base);
loc_839365F0:
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// stb r25,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r25.u8);
loc_839365FC:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83936988
	if (cr6.eq) goto loc_83936988;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x839366b4
	if (cr6.lt) goto loc_839366B4;
	// bl 0x83911640
	ctx.lr = 0x83936618;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83936630
	if (cr6.eq) goto loc_83936630;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83936630
	if (cr6.eq) goto loc_83936630;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x8393667c
	if (!cr6.eq) goto loc_8393667C;
loc_83936630:
	// addi r4,r28,-562
	ctx.r4.s64 = ctx.r28.s64 + -562;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x8393663C;
	sub_837B0C10(ctx, base);
	// addi r4,r28,-128
	ctx.r4.s64 = ctx.r28.s64 + -128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83936648;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393665c
	if (!cr6.eq) goto loc_8393665C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8393665C:
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393666C;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83936674;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x8393667C;
	sub_8387E8E0(ctx, base);
loc_8393667C:
	// addi r4,r28,-104
	ctx.r4.s64 = ctx.r28.s64 + -104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83936688;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393669c
	if (!cr6.eq) goto loc_8393669C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8393669C:
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839366AC;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8393684c
	goto loc_8393684C;
loc_839366B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123a08
	ctx.lr = 0x839366C0;
	sub_83123A08(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x839366dc
	if (!cr6.lt) goto loc_839366DC;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbz r29,512(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// b 0x839366e0
	goto loc_839366E0;
loc_839366DC:
	// lbz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_839366E0:
	// stw r23,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r23.u32);
	// lis r4,53
	ctx.r4.s64 = 3473408;
	// stw r25,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r25.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r25,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r25.u8);
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// stw r23,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r23.u32);
	// stw r25,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r25.u32);
	// stb r25,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r25.u8);
	// bl 0x82d042a8
	ctx.lr = 0x83936708;
	sub_82D042A8(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r31,368(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bge cr6,0x8393671c
	if (!cr6.lt) goto loc_8393671C;
	// addi r31,r1,368
	ctx.r31.s64 = ctx.r1.s64 + 368;
loc_8393671C:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123ba8
	ctx.lr = 0x8393672C;
	sub_83123BA8(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d042a8
	ctx.lr = 0x83936744;
	sub_82D042A8(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x83936748;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839367d0
	if (cr6.eq) goto loc_839367D0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x839367d0
	if (cr6.eq) goto loc_839367D0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x839367d0
	if (cr6.eq) goto loc_839367D0;
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r6,336(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r23,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r25,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r25.u32);
	// stb r25,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r25.u8);
	// bge cr6,0x83936780
	if (!cr6.lt) goto loc_83936780;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
loc_83936780:
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82d042a8
	ctx.lr = 0x83936790;
	sub_82D042A8(ctx, base);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8393679C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839367b0
	if (!cr6.eq) goto loc_839367B0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_839367B0:
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839367C0;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839367C8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// b 0x8393683c
	goto loc_8393683C;
loc_839367D0:
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x839367DC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839367f0
	if (!cr6.eq) goto loc_839367F0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_839367F0:
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83936800;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83936808;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x837b0c10
	ctx.lr = 0x83936814;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83936828
	if (!cr6.eq) goto loc_83936828;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_83936828:
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83936838;
	sub_8392DC70(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
loc_8393683C:
	// bl 0x8387e8e0
	ctx.lr = 0x83936840;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x83936848;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
loc_8393684C:
	// bl 0x8387e8e0
	ctx.lr = 0x83936850;
	sub_8387E8E0(ctx, base);
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// beq cr6,0x839368f0
	if (cr6.eq) goto loc_839368F0;
	// stw r23,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r23.u32);
	// stw r25,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r25.u32);
	// stb r25,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r25.u8);
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x83911980
	ctx.lr = 0x8393687C;
	sub_83911980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82d042a8
	ctx.lr = 0x8393688C;
	sub_82D042A8(ctx, base);
	// lis r4,516
	ctx.r4.s64 = 33816576;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x839368A0;
	sub_82D042A8(ctx, base);
	// addi r5,r28,-32
	ctx.r5.s64 = ctx.r28.s64 + -32;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82ab6970
	ctx.lr = 0x839368B0;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x82ac8718
	ctx.lr = 0x839368C0;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cb28
	ctx.lr = 0x839368D4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839368DC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x839368E4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8387e8e0
	ctx.lr = 0x839368EC;
	sub_8387E8E0(ctx, base);
	// b 0x83936904
	goto loc_83936904;
loc_839368F0:
	// lis r4,516
	ctx.r4.s64 = 33816576;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x83936904;
	sub_82D042A8(ctx, base);
loc_83936904:
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x837b0c10
	ctx.lr = 0x83936910;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83936924
	if (!cr6.eq) goto loc_83936924;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_83936924:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83936934;
	sub_8392DC70(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83936950
	if (cr6.lt) goto loc_83936950;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x83936950;
	sub_825952B8(ctx, base);
loc_83936950:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r23,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r23.u32);
	// stw r25,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r25.u8);
	// blt cr6,0x83936978
	if (cr6.lt) goto loc_83936978;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x83936978;
	sub_825952B8(ctx, base);
loc_83936978:
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// b 0x83936af8
	goto loc_83936AF8;
loc_83936988:
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// stw r25,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r25.u32);
	// stb r25,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r25.u8);
	// bl 0x82d042a8
	ctx.lr = 0x839369B0;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lbz r5,198(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 198);
	// bl 0x82d042a8
	ctx.lr = 0x839369C0;
	sub_82D042A8(ctx, base);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82a6b900
	ctx.lr = 0x839369D0;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x839369E4;
	sub_825A1DA8(ctx, base);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83936a00
	if (cr6.lt) goto loc_83936A00;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,688(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x825952b8
	ctx.lr = 0x83936A00;
	sub_825952B8(ctx, base);
loc_83936A00:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r23,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r25,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r25.u32);
	// stb r25,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r25.u8);
	// bge cr6,0x83936a20
	if (!cr6.lt) goto loc_83936A20;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_83936A20:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x837b0c10
	ctx.lr = 0x83936A28;
	sub_837B0C10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x837b0c10
	ctx.lr = 0x83936A34;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83936a48
	if (!cr6.eq) goto loc_83936A48;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_83936A48:
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83936A58;
	sub_8392DC70(ctx, base);
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83936a74
	if (cr6.lt) goto loc_83936A74;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x83936A74;
	sub_825952B8(ctx, base);
loc_83936A74:
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// stw r23,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r23.u32);
	// stw r25,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r25.u8);
	// blt cr6,0x83936a9c
	if (cr6.lt) goto loc_83936A9C;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x83936A9C;
	sub_825952B8(ctx, base);
loc_83936A9C:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r23,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r23.u32);
	// stw r25,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r25.u8);
	// blt cr6,0x83936ac4
	if (cr6.lt) goto loc_83936AC4;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x83936AC4;
	sub_825952B8(ctx, base);
loc_83936AC4:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// stw r25,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r25.u8);
	// blt cr6,0x83936aec
	if (cr6.lt) goto loc_83936AEC;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83936AEC;
	sub_825952B8(ctx, base);
loc_83936AEC:
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
loc_83936AF8:
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83936b14
	if (cr6.lt) goto loc_83936B14;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x83936B14;
	sub_825952B8(ctx, base);
loc_83936B14:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83936B1C"))) PPC_WEAK_FUNC(sub_83936B1C);
PPC_FUNC_IMPL(__imp__sub_83936B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83936B20"))) PPC_WEAK_FUNC(sub_83936B20);
PPC_FUNC_IMPL(__imp__sub_83936B20) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83936B28"))) PPC_WEAK_FUNC(sub_83936B28);
PPC_FUNC_IMPL(__imp__sub_83936B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,13960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13960);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83936B34"))) PPC_WEAK_FUNC(sub_83936B34);
PPC_FUNC_IMPL(__imp__sub_83936B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83936B38"))) PPC_WEAK_FUNC(sub_83936B38);
PPC_FUNC_IMPL(__imp__sub_83936B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,216(r11)
	PPC_STORE_U8(ctx.r11.u32 + 216, ctx.r10.u8);
	// b 0x82d0ab80
	sub_82D0AB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83936B48"))) PPC_WEAK_FUNC(sub_83936B48);
PPC_FUNC_IMPL(__imp__sub_83936B48) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83936ba0
	if (cr6.eq) goto loc_83936BA0;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83936ba0
	if (cr6.eq) goto loc_83936BA0;
	// bl 0x82da1d10
	ctx.lr = 0x83936B7C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83936ba0
	if (cr6.eq) goto loc_83936BA0;
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
loc_83936BA0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r3,216(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 216);
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

__attribute__((alias("__imp__sub_83936BBC"))) PPC_WEAK_FUNC(sub_83936BBC);
PPC_FUNC_IMPL(__imp__sub_83936BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83936BC0"))) PPC_WEAK_FUNC(sub_83936BC0);
PPC_FUNC_IMPL(__imp__sub_83936BC0) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83936BE0;
	sub_8392CFC8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-8544
	ctx.r8.s64 = ctx.r10.s64 + -8544;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// addi r6,r7,-22916
	ctx.r6.s64 = ctx.r7.s64 + -22916;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83936C3C"))) PPC_WEAK_FUNC(sub_83936C3C);
PPC_FUNC_IMPL(__imp__sub_83936C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83936C40"))) PPC_WEAK_FUNC(sub_83936C40);
PPC_FUNC_IMPL(__imp__sub_83936C40) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-8544
	ctx.r9.s64 = ctx.r11.s64 + -8544;
	// addi r8,r10,-16652
	ctx.r8.s64 = ctx.r10.s64 + -16652;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825c3358
	ctx.lr = 0x83936C7C;
	sub_825C3358(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,25648
	ctx.r5.s64 = ctx.r7.s64 + 25648;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83936ca0
	if (cr6.eq) goto loc_83936CA0;
	// bl 0x82416268
	ctx.lr = 0x83936C9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83936CA0:
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

__attribute__((alias("__imp__sub_83936CB8"))) PPC_WEAK_FUNC(sub_83936CB8);
PPC_FUNC_IMPL(__imp__sub_83936CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83936CC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r28,r11,-8652
	ctx.r28.s64 = ctx.r11.s64 + -8652;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// bl 0x8259cc28
	ctx.lr = 0x83936CF4;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83936d08
	if (!cr6.eq) goto loc_83936D08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83936D08:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// ori r6,r6,272
	ctx.r6.u64 = ctx.r6.u64 | 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83936D1C;
	sub_8392DBE8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83936d3c
	if (cr6.lt) goto loc_83936D3C;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x83936D3C;
	sub_825952B8(ctx, base);
loc_83936D3C:
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x82d042a8
	ctx.lr = 0x83936D70;
	sub_82D042A8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83936d84
	if (!cr6.lt) goto loc_83936D84;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_83936D84:
	// lis r4,54
	ctx.r4.s64 = 3538944;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,38
	ctx.r4.u64 = ctx.r4.u64 | 38;
	// bl 0x82d042a8
	ctx.lr = 0x83936D94;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83936da8
	if (!cr6.lt) goto loc_83936DA8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83936DA8:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_83936DB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83936db8
	if (!cr6.eq) goto loc_83936DB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83936DDC;
	sub_8259CC28(ctx, base);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x83936DF8;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83936e0c
	if (!cr6.eq) goto loc_83936E0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83936E0C:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83936E1C;
	sub_8392DC70(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83936e38
	if (cr6.lt) goto loc_83936E38;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x83936E38;
	sub_825952B8(ctx, base);
loc_83936E38:
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
	// blt cr6,0x83936e60
	if (cr6.lt) goto loc_83936E60;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83936E60;
	sub_825952B8(ctx, base);
loc_83936E60:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x83936e88
	if (cr6.lt) goto loc_83936E88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83936E88;
	sub_825952B8(ctx, base);
loc_83936E88:
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
	// blt cr6,0x83936eb0
	if (cr6.lt) goto loc_83936EB0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x83936EB0;
	sub_825952B8(ctx, base);
loc_83936EB0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83936EB8"))) PPC_WEAK_FUNC(sub_83936EB8);
PPC_FUNC_IMPL(__imp__sub_83936EB8) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83936EEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83936f04
	if (cr6.eq) goto loc_83936F04;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83936bc0
	ctx.lr = 0x83936F00;
	sub_83936BC0(ctx, base);
	// b 0x83936f08
	goto loc_83936F08;
loc_83936F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83936F08:
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

__attribute__((alias("__imp__sub_83936F20"))) PPC_WEAK_FUNC(sub_83936F20);
PPC_FUNC_IMPL(__imp__sub_83936F20) {
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
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,-3564(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
loc_83936F54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83936f54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83936F54;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 224);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83936f80
	if (cr6.eq) goto loc_83936F80;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83936cb8
	ctx.lr = 0x83936F80;
	sub_83936CB8(ctx, base);
loc_83936F80:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83936ff8
	if (cr6.eq) goto loc_83936FF8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83936fc0
	if (cr6.eq) goto loc_83936FC0;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x83937040
	if (!cr6.eq) goto loc_83937040;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-8688
	ctx.r4.s64 = ctx.r11.s64 + -8688;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83936FBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83937040
	goto loc_83937040;
loc_83936FC0:
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83937040
	if (cr6.eq) goto loc_83937040;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d580
	ctx.lr = 0x83936FE8;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937040
	if (cr6.eq) goto loc_83937040;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// b 0x8393702c
	goto loc_8393702C;
loc_83936FF8:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,53(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83937040
	if (cr6.eq) goto loc_83937040;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d580
	ctx.lr = 0x83937020;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937040
	if (cr6.eq) goto loc_83937040;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
loc_8393702C:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d2b608
	ctx.lr = 0x83937040;
	sub_82D2B608(ctx, base);
loc_83937040:
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

__attribute__((alias("__imp__sub_83937058"))) PPC_WEAK_FUNC(sub_83937058);
PPC_FUNC_IMPL(__imp__sub_83937058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83937060;
	__savegprlr_25(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r26,r11,-8708
	ctx.r26.s64 = ctx.r11.s64 + -8708;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r26,-722
	ctx.r4.s64 = ctx.r26.s64 + -722;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8393709C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,48(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d580
	ctx.lr = 0x839370AC;
	sub_82D2D580(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// bgt cr6,0x839373c4
	if (cr6.gt) goto loc_839373C4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8393712c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393712C;
	// bdzf 4*cr6+eq,0x83937240
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937240;
	// bdzf 4*cr6+eq,0x8393725c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393725C;
	// bdzf 4*cr6+eq,0x83937278
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937278;
	// bdzf 4*cr6+eq,0x83937294
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937294;
	// bdzf 4*cr6+eq,0x839372d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839372D4;
	// bdzf 4*cr6+eq,0x839372f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839372F0;
	// bne cr6,0x83937350
	if (!cr6.eq) goto loc_83937350;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83937114
	if (!cr6.eq) goto loc_83937114;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// ori r29,r29,41
	ctx.r29.u64 = ctx.r29.u64 | 41;
	// bl 0x82d042a8
	ctx.lr = 0x83937110;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_83937114:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// ori r29,r29,28
	ctx.r29.u64 = ctx.r29.u64 | 28;
	// bl 0x82d042a8
	ctx.lr = 0x83937128;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_8393712C:
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// lis r29,11
	ctx.r29.s64 = 720896;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// ori r29,r29,146
	ctx.r29.u64 = ctx.r29.u64 | 146;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// stw r28,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r28.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x83937174;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,49
	ctx.r4.u64 = ctx.r4.u64 | 49;
	// bl 0x82d042a8
	ctx.lr = 0x83937184;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// bl 0x82d042a8
	ctx.lr = 0x83937194;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ori r4,r4,63
	ctx.r4.u64 = ctx.r4.u64 | 63;
	// bl 0x82d042a8
	ctx.lr = 0x839371A4;
	sub_82D042A8(ctx, base);
	// addi r5,r26,-28
	ctx.r5.s64 = ctx.r26.s64 + -28;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82ab6970
	ctx.lr = 0x839371B4;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// bl 0x82ac8718
	ctx.lr = 0x839371C4;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825a1da8
	ctx.lr = 0x839371D8;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x839371E0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x839371E8;
	sub_8387E8E0(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x839371fc
	if (!cr6.lt) goto loc_839371FC;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
loc_839371FC:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83937210
	if (!cr6.lt) goto loc_83937210;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
loc_83937210:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,74
	ctx.r4.u64 = ctx.r4.u64 | 74;
	// bl 0x82d042a8
	ctx.lr = 0x83937220;
	sub_82D042A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83937228;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x83937230;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83937238;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x839373c0
	goto loc_839373C0;
loc_83937240:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,201
	ctx.r29.u64 = ctx.r29.u64 | 201;
	// bl 0x82d042a8
	ctx.lr = 0x83937258;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_8393725C:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lis r29,24
	ctx.r29.s64 = 1572864;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,47
	ctx.r29.u64 = ctx.r29.u64 | 47;
	// bl 0x82d042a8
	ctx.lr = 0x83937274;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_83937278:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,239
	ctx.r29.u64 = ctx.r29.u64 | 239;
	// bl 0x82d042a8
	ctx.lr = 0x83937290;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_83937294:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x839372bc
	if (!cr6.eq) goto loc_839372BC;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,133
	ctx.r4.u64 = ctx.r4.u64 | 133;
	// ori r29,r29,255
	ctx.r29.u64 = ctx.r29.u64 | 255;
	// bl 0x82d042a8
	ctx.lr = 0x839372B8;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_839372BC:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,133
	ctx.r4.u64 = ctx.r4.u64 | 133;
	// ori r29,r29,244
	ctx.r29.u64 = ctx.r29.u64 | 244;
	// bl 0x82d042a8
	ctx.lr = 0x839372D0;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_839372D4:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// ori r4,r4,118
	ctx.r4.u64 = ctx.r4.u64 | 118;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,29
	ctx.r29.u64 = ctx.r29.u64 | 29;
	// bl 0x82d042a8
	ctx.lr = 0x839372EC;
	sub_82D042A8(ctx, base);
	// b 0x839373c4
	goto loc_839373C4;
loc_839372F0:
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// lis r29,930
	ctx.r29.s64 = 60948480;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,75
	ctx.r29.u64 = ctx.r29.u64 | 75;
	// bl 0x82d042a8
	ctx.lr = 0x83937314;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// ori r4,r4,118
	ctx.r4.u64 = ctx.r4.u64 | 118;
	// bl 0x82d042a8
	ctx.lr = 0x83937324;
	sub_82D042A8(ctx, base);
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x83937334;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x83937348;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// b 0x839373c0
	goto loc_839373C0;
loc_83937350:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// ori r4,r4,141
	ctx.r4.u64 = ctx.r4.u64 | 141;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,306
	ctx.r29.u64 = ctx.r29.u64 | 306;
	// bl 0x82d042a8
	ctx.lr = 0x83937374;
	sub_82D042A8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x82a16e50
	ctx.lr = 0x83937384;
	sub_82A16E50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// beq cr6,0x839373a0
	if (cr6.eq) goto loc_839373A0;
	// ori r4,r4,63
	ctx.r4.u64 = ctx.r4.u64 | 63;
	// b 0x839373a4
	goto loc_839373A4;
loc_839373A0:
	// ori r4,r4,119
	ctx.r4.u64 = ctx.r4.u64 | 119;
loc_839373A4:
	// bl 0x82d042a8
	ctx.lr = 0x839373A8;
	sub_82D042A8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x839373BC;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
loc_839373C0:
	// bl 0x8387e8e0
	ctx.lr = 0x839373C4;
	sub_8387E8E0(ctx, base);
loc_839373C4:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r4,r26,-20
	ctx.r4.s64 = ctx.r26.s64 + -20;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x839373E0;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// addi r4,r25,100
	ctx.r4.s64 = ctx.r25.s64 + 100;
	// bne cr6,0x839373f0
	if (!cr6.eq) goto loc_839373F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_839373F0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83937400;
	sub_8392DBE8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83937420
	if (cr6.lt) goto loc_83937420;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83937420;
	sub_825952B8(ctx, base);
loc_83937420:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83937448;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// addi r4,r25,100
	ctx.r4.s64 = ctx.r25.s64 + 100;
	// bne cr6,0x83937458
	if (!cr6.eq) goto loc_83937458;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83937458:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83937468;
	sub_8392DC70(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83937484
	if (cr6.lt) goto loc_83937484;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83937484;
	sub_825952B8(ctx, base);
loc_83937484:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x839374ac
	if (cr6.lt) goto loc_839374AC;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x839374AC;
	sub_825952B8(ctx, base);
loc_839374AC:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839374B4"))) PPC_WEAK_FUNC(sub_839374B4);
PPC_FUNC_IMPL(__imp__sub_839374B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839374B8"))) PPC_WEAK_FUNC(sub_839374B8);
PPC_FUNC_IMPL(__imp__sub_839374B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839374C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// addi r24,r11,-9168
	ctx.r24.s64 = ctx.r11.s64 + -9168;
loc_839374D8:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839375b4
	if (cr6.eq) goto loc_839375B4;
	// cmplwi cr6,r27,7
	cr6.compare<uint32_t>(ctx.r27.u32, 7, xer);
	// bne cr6,0x8393750c
	if (!cr6.eq) goto loc_8393750C;
	// bl 0x830ff290
	ctx.lr = 0x83937500;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83937504;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x839375b4
	if (cr6.eq) goto loc_839375B4;
loc_8393750C:
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// cmplwi cr6,r27,7
	cr6.compare<uint32_t>(ctx.r27.u32, 7, xer);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bne cr6,0x83937594
	if (!cr6.eq) goto loc_83937594;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839375a8
	if (cr6.eq) goto loc_839375A8;
	// lwz r29,5756(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5756);
	// cmpwi cr6,r29,255
	cr6.compare<int32_t>(ctx.r29.s32, 255, xer);
	// beq cr6,0x839375a8
	if (cr6.eq) goto loc_839375A8;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,192(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
loc_83937540:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83937550
	if (cr6.lt) goto loc_83937550;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83937550:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x83937564;
	sub_831CE980(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x83937580
	if (cr6.eq) goto loc_83937580;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83937540
	if (cr6.lt) goto loc_83937540;
	// b 0x83937584
	goto loc_83937584;
loc_83937580:
	// li r28,1
	ctx.r28.s64 = 1;
loc_83937584:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839375b4
	if (!cr6.eq) goto loc_839375B4;
	// b 0x839375a8
	goto loc_839375A8;
loc_83937594:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x839375a8
	if (!cr6.eq) goto loc_839375A8;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x839375b4
	if (cr6.eq) goto loc_839375B4;
loc_839375A8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83937058
	ctx.lr = 0x839375B4;
	sub_83937058(ctx, base);
loc_839375B4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,9
	cr6.compare<uint32_t>(ctx.r27.u32, 9, xer);
	// blt cr6,0x839374d8
	if (cr6.lt) goto loc_839374D8;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r11,14104
	ctx.r9.s64 = ctx.r11.s64 + 14104;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839375EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839375F4"))) PPC_WEAK_FUNC(sub_839375F4);
PPC_FUNC_IMPL(__imp__sub_839375F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839375F8"))) PPC_WEAK_FUNC(sub_839375F8);
PPC_FUNC_IMPL(__imp__sub_839375F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83937600;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,-3564(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83937690
	if (cr6.eq) goto loc_83937690;
	// lwz r28,5756(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5756);
	// cmpwi cr6,r28,255
	cr6.compare<int32_t>(ctx.r28.s32, 255, xer);
	// beq cr6,0x83937690
	if (cr6.eq) goto loc_83937690;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8393762C:
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83937640
	if (cr6.lt) goto loc_83937640;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83937640:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x83937654;
	sub_831CE980(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// beq cr6,0x83937670
	if (cr6.eq) goto loc_83937670;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8393762c
	if (cr6.lt) goto loc_8393762C;
	// b 0x83937690
	goto loc_83937690;
loc_83937670:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831f81f8
	ctx.lr = 0x83937678;
	sub_831F81F8(ctx, base);
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// blt cr6,0x8393768c
	if (cr6.lt) goto loc_8393768C;
	// bl 0x831156e8
	ctx.lr = 0x83937684;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8393768C:
	// bl 0x82d0ab60
	ctx.lr = 0x83937690;
	sub_82D0AB60(ctx, base);
loc_83937690:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-8880
	ctx.r31.s64 = ctx.r11.s64 + -8880;
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839376B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839376D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839376EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r29,r11,216
	ctx.r29.s64 = ctx.r11.s64 + 216;
	// lwz r5,220(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// stw r5,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r5.u32);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83937860
	if (cr6.gt) goto loc_83937860;
	// lis r12,-31853
	ctx.r12.s64 = -2087518208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30500
	ctx.r12.s64 = ctx.r12.s64 + 30500;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83937808;
	case 1:
		goto loc_83937808;
	case 2:
		goto loc_83937774;
	case 3:
		goto loc_83937774;
	case 4:
		goto loc_83937808;
	case 5:
		goto loc_83937860;
	case 6:
		goto loc_83937860;
	case 7:
		goto loc_83937860;
	case 8:
		goto loc_83937860;
	case 9:
		goto loc_83937860;
	case 10:
		goto loc_83937750;
	default:
		return;
	}
	// lwz r28,30728(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30728);
	// lwz r28,30728(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30728);
	// lwz r28,30580(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30580);
	// lwz r28,30580(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30580);
	// lwz r28,30728(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30728);
	// lwz r28,30816(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30816);
	// lwz r28,30816(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30816);
	// lwz r28,30816(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30816);
	// lwz r28,30816(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30816);
	// lwz r28,30816(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30816);
	// lwz r28,30544(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 30544);
loc_83937750:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393776C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// b 0x83937880
	goto loc_83937880;
loc_83937774:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83937790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839377AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x839377B8;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839377cc
	if (!cr6.eq) goto loc_839377CC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_839377CC:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r6,r6,271
	ctx.r6.u64 = ctx.r6.u64 | 271;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x839377E0;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839377E8;
	sub_8387E8E0(ctx, base);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x83936cb8
	ctx.lr = 0x839377F8;
	sub_83936CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839374b8
	ctx.lr = 0x83937800;
	sub_839374B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83937808:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83937824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83937840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r7.u32);
	// bl 0x83936cb8
	ctx.lr = 0x83937850;
	sub_83936CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839374b8
	ctx.lr = 0x83937858;
	sub_839374B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83937860:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393787C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
loc_83937880:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83937898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839374b8
	ctx.lr = 0x839378A0;
	sub_839374B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839378A8"))) PPC_WEAK_FUNC(sub_839378A8);
PPC_FUNC_IMPL(__imp__sub_839378A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839378cc
	if (cr6.eq) goto loc_839378CC;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,23372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
loc_839378CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839378D4"))) PPC_WEAK_FUNC(sub_839378D4);
PPC_FUNC_IMPL(__imp__sub_839378D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839378D8"))) PPC_WEAK_FUNC(sub_839378D8);
PPC_FUNC_IMPL(__imp__sub_839378D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,14136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839378E4"))) PPC_WEAK_FUNC(sub_839378E4);
PPC_FUNC_IMPL(__imp__sub_839378E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839378E8"))) PPC_WEAK_FUNC(sub_839378E8);
PPC_FUNC_IMPL(__imp__sub_839378E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r3,156(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839378F4"))) PPC_WEAK_FUNC(sub_839378F4);
PPC_FUNC_IMPL(__imp__sub_839378F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839378F8"))) PPC_WEAK_FUNC(sub_839378F8);
PPC_FUNC_IMPL(__imp__sub_839378F8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393798c
	if (cr6.eq) goto loc_8393798C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,157(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 157);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83937958
	if (cr6.eq) goto loc_83937958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-5060
	ctx.r4.s64 = ctx.r10.s64 + -5060;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83937944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// stb r8,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r8.u8);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x83937978
	goto loc_83937978;
loc_83937958:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393796C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d4c8
	ctx.lr = 0x83937978;
	sub_8392D4C8(ctx, base);
loc_83937978:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393798C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8393798C:
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
}

__attribute__((alias("__imp__sub_839379A4"))) PPC_WEAK_FUNC(sub_839379A4);
PPC_FUNC_IMPL(__imp__sub_839379A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839379A8"))) PPC_WEAK_FUNC(sub_839379A8);
PPC_FUNC_IMPL(__imp__sub_839379A8) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x839379C8;
	sub_8392CFC8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-4424
	ctx.r8.s64 = ctx.r10.s64 + -4424;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// stb r11,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r11.u8);
	// stb r11,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r11.u8);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_83937A20:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83937a20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83937A20;
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r11,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
	// std r11,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r11.u64);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// std r11,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r11.u64);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83937A80"))) PPC_WEAK_FUNC(sub_83937A80);
PPC_FUNC_IMPL(__imp__sub_83937A80) {
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
	// beq cr6,0x83937af4
	if (cr6.eq) goto loc_83937AF4;
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// bge cr6,0x83937af4
	if (!cr6.lt) goto loc_83937AF4;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83937ad0
	if (cr6.eq) goto loc_83937AD0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83937ad0
	if (!cr6.eq) goto loc_83937AD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83812878
	ctx.lr = 0x83937ACC;
	sub_83812878(ctx, base);
	// b 0x83937af4
	goto loc_83937AF4;
loc_83937AD0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83812878
	ctx.lr = 0x83937ADC;
	sub_83812878(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14512
	ctx.r9.s64 = ctx.r11.s64 + 14512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83812c80
	ctx.lr = 0x83937AF4;
	sub_83812C80(ctx, base);
loc_83937AF4:
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

__attribute__((alias("__imp__sub_83937B0C"))) PPC_WEAK_FUNC(sub_83937B0C);
PPC_FUNC_IMPL(__imp__sub_83937B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83937B10"))) PPC_WEAK_FUNC(sub_83937B10);
PPC_FUNC_IMPL(__imp__sub_83937B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83937B18;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// addi r28,r3,124
	ctx.r28.s64 = ctx.r3.s64 + 124;
	// addi r24,r11,16
	ctx.r24.s64 = ctx.r11.s64 + 16;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r26,r3,112
	ctx.r26.s64 = ctx.r3.s64 + 112;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r21,10
	ctx.r21.s64 = 10;
	// ori r27,r9,52429
	ctx.r27.u64 = ctx.r9.u64 | 52429;
	// addi r22,r11,-4520
	ctx.r22.s64 = ctx.r11.s64 + -4520;
	// addi r23,r10,14512
	ctx.r23.s64 = ctx.r10.s64 + 14512;
loc_83937B50:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r31,99
	cr6.compare<uint32_t>(ctx.r31.u32, 99, xer);
	// ble cr6,0x83937b68
	if (!cr6.gt) goto loc_83937B68;
	// li r31,99
	ctx.r31.s64 = 99;
	// addi r4,r22,-8
	ctx.r4.s64 = ctx.r22.s64 + -8;
	// b 0x83937b7c
	goto loc_83937B7C;
loc_83937B68:
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x83937b78
	if (cr6.lt) goto loc_83937B78;
	// addi r4,r22,-8
	ctx.r4.s64 = ctx.r22.s64 + -8;
	// b 0x83937b7c
	goto loc_83937B7C;
loc_83937B78:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_83937B7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x838130b0
	ctx.lr = 0x83937B88;
	sub_838130B0(ctx, base);
	// divwu r29,r31,r21
	ctx.r29.u32 = PPCDivide(ctx.r31.u32, ctx.r21.u32);
	// lwz r30,-4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83937bbc
	if (cr6.eq) goto loc_83937BBC;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// bge cr6,0x83937bbc
	if (!cr6.lt) goto loc_83937BBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83937BAC;
	sub_83812878(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x83812c80
	ctx.lr = 0x83937BBC;
	sub_83812C80(ctx, base);
loc_83937BBC:
	// mulhwu r11,r31,r27
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r9,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r9.s64;
	// beq cr6,0x83937c04
	if (cr6.eq) goto loc_83937C04;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x83937c04
	if (!cr6.lt) goto loc_83937C04;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83937BF4;
	sub_83812878(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x83812c80
	ctx.lr = 0x83937C04;
	sub_83812C80(ctx, base);
loc_83937C04:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x83937b50
	if (!cr0.eq) goto loc_83937B50;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83937C20"))) PPC_WEAK_FUNC(sub_83937C20);
PPC_FUNC_IMPL(__imp__sub_83937C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83937C28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,34
	ctx.r28.s64 = 34;
	// addi r26,r3,136
	ctx.r26.s64 = ctx.r3.s64 + 136;
	// addi r27,r10,14284
	ctx.r27.s64 = ctx.r10.s64 + 14284;
	// addi r25,r11,14268
	ctx.r25.s64 = ctx.r11.s64 + 14268;
loc_83937C4C:
	// bl 0x83911640
	ctx.lr = 0x83937C50;
	sub_83911640(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x83937cdc
	if (cr6.gt) goto loc_83937CDC;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83937c9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937C9C;
	// bdzf 4*cr6+eq,0x83937c9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937C9C;
	// bdzf 4*cr6+eq,0x83937c9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937C9C;
	// bdzf 4*cr6+eq,0x83937c78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937C78;
	// bdzf 4*cr6+eq,0x83937cdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937CDC;
	// bne cr6,0x83937c78
	if (!cr6.eq) goto loc_83937C78;
loc_83937C78:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// bl 0x83815208
	ctx.lr = 0x83937C94;
	sub_83815208(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// b 0x83937cdc
	goto loc_83937CDC;
loc_83937C9C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83937CA0:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// bl 0x83815208
	ctx.lr = 0x83937CC4;
	sub_83815208(ctx, base);
	// add r7,r28,r31
	ctx.r7.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// stwx r3,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r3.u32);
	// blt cr6,0x83937ca0
	if (cr6.lt) goto loc_83937CA0;
loc_83937CDC:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpwi cr6,r28,38
	cr6.compare<int32_t>(ctx.r28.s32, 38, xer);
	// blt cr6,0x83937c4c
	if (cr6.lt) goto loc_83937C4C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83937CF8"))) PPC_WEAK_FUNC(sub_83937CF8);
PPC_FUNC_IMPL(__imp__sub_83937CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83937D00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,34
	ctx.r28.s64 = 34;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83937D10:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83937D14:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937d30
	if (cr6.eq) goto loc_83937D30;
	// bl 0x83812c48
	ctx.lr = 0x83937D2C;
	sub_83812C48(ctx, base);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
loc_83937D30:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x83937d14
	if (cr6.lt) goto loc_83937D14;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r28,38
	cr6.compare<uint32_t>(ctx.r28.u32, 38, xer);
	// blt cr6,0x83937d10
	if (cr6.lt) goto loc_83937D10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83937D50"))) PPC_WEAK_FUNC(sub_83937D50);
PPC_FUNC_IMPL(__imp__sub_83937D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83937D58;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83937D6C;
	sub_831156E8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,34
	ctx.r29.s64 = 34;
	// addi r26,r27,136
	ctx.r26.s64 = ctx.r27.s64 + 136;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,21700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	ctx.f31.f64 = double(temp.f32);
loc_83937D8C:
	// bl 0x83911640
	ctx.lr = 0x83937D90;
	sub_83911640(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x83937ed8
	if (cr6.gt) goto loc_83937ED8;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83937e3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937E3C;
	// bdzf 4*cr6+eq,0x83937e3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937E3C;
	// bdzf 4*cr6+eq,0x83937e3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937E3C;
	// bdzf 4*cr6+eq,0x83937db8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937DB8;
	// bdzf 4*cr6+eq,0x83937ed8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83937ED8;
	// bne cr6,0x83937db8
	if (!cr6.eq) goto loc_83937DB8;
loc_83937DB8:
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312c158
	ctx.lr = 0x83937DDC;
	sub_8312C158(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937ed8
	if (cr6.eq) goto loc_83937ED8;
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f2,f7,f31
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// bl 0x838124b8
	ctx.lr = 0x83937E38;
	sub_838124B8(ctx, base);
	// b 0x83937ed8
	goto loc_83937ED8;
loc_83937E3C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83937E40:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,85
	ctx.r6.s64 = ctx.r1.s64 + 85;
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312c158
	ctx.lr = 0x83937E68;
	sub_8312C158(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937ecc
	if (cr6.eq) goto loc_83937ECC;
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fmuls f3,f8,f31
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f1,f7,f31
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// bl 0x838124b8
	ctx.lr = 0x83937ECC;
	sub_838124B8(ctx, base);
loc_83937ECC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x83937e40
	if (cr6.lt) goto loc_83937E40;
loc_83937ED8:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpwi cr6,r29,38
	cr6.compare<int32_t>(ctx.r29.s32, 38, xer);
	// blt cr6,0x83937d8c
	if (cr6.lt) goto loc_83937D8C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83937EFC"))) PPC_WEAK_FUNC(sub_83937EFC);
PPC_FUNC_IMPL(__imp__sub_83937EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83937F00"))) PPC_WEAK_FUNC(sub_83937F00);
PPC_FUNC_IMPL(__imp__sub_83937F00) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,232
	ctx.r4.s64 = 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83937F34;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937f4c
	if (cr6.eq) goto loc_83937F4C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839379a8
	ctx.lr = 0x83937F48;
	sub_839379A8(ctx, base);
	// b 0x83937f50
	goto loc_83937F50;
loc_83937F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83937F50:
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

__attribute__((alias("__imp__sub_83937F68"))) PPC_WEAK_FUNC(sub_83937F68);
PPC_FUNC_IMPL(__imp__sub_83937F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83937F70;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83937cf8
	ctx.lr = 0x83937F7C;
	sub_83937CF8(ctx, base);
	// li r27,30
	ctx.r27.s64 = 30;
	// li r26,11
	ctx.r26.s64 = 11;
	// addi r25,r30,112
	ctx.r25.s64 = ctx.r30.s64 + 112;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83937F8C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83937F90:
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937fac
	if (cr6.eq) goto loc_83937FAC;
	// bl 0x83812c48
	ctx.lr = 0x83937FA8;
	sub_83812C48(ctx, base);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
loc_83937FAC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x83937f90
	if (cr6.lt) goto loc_83937F90;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937fcc
	if (cr6.eq) goto loc_83937FCC;
	// bl 0x83812c48
	ctx.lr = 0x83937FC8;
	sub_83812C48(ctx, base);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
loc_83937FCC:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83937FD0:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83937fec
	if (cr6.eq) goto loc_83937FEC;
	// bl 0x83812c48
	ctx.lr = 0x83937FE8;
	sub_83812C48(ctx, base);
	// stwx r28,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
loc_83937FEC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x83937fd0
	if (cr6.lt) goto loc_83937FD0;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,3
	ctx.r26.s64 = ctx.r26.s64 + 3;
	// cmpwi cr6,r27,34
	cr6.compare<int32_t>(ctx.r27.s32, 34, xer);
	// blt cr6,0x83937f8c
	if (cr6.lt) goto loc_83937F8C;
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// li r29,5
	ctx.r29.s64 = 5;
loc_83938014:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938028
	if (cr6.eq) goto loc_83938028;
	// bl 0x83812c48
	ctx.lr = 0x83938024;
	sub_83812C48(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83938028:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83938014
	if (!cr0.eq) goto loc_83938014;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938048
	if (cr6.eq) goto loc_83938048;
	// bl 0x83812c48
	ctx.lr = 0x83938044;
	sub_83812C48(ctx, base);
	// stw r28,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r28.u32);
loc_83938048:
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// li r29,5
	ctx.r29.s64 = 5;
loc_83938050:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938064
	if (cr6.eq) goto loc_83938064;
	// bl 0x83812c48
	ctx.lr = 0x83938060;
	sub_83812C48(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83938064:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83938050
	if (!cr0.eq) goto loc_83938050;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392d0e8
	ctx.lr = 0x83938078;
	sub_8392D0E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83938084"))) PPC_WEAK_FUNC(sub_83938084);
PPC_FUNC_IMPL(__imp__sub_83938084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83938088"))) PPC_WEAK_FUNC(sub_83938088);
PPC_FUNC_IMPL(__imp__sub_83938088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83938090;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,26214
	ctx.r9.s64 = 1717960704;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// addi r20,r11,156
	ctx.r20.s64 = ctx.r11.s64 + 156;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// addi r26,r3,152
	ctx.r26.s64 = ctx.r3.s64 + 152;
	// addi r19,r20,3
	ctx.r19.s64 = ctx.r20.s64 + 3;
	// li r22,10
	ctx.r22.s64 = 10;
	// ori r27,r9,26215
	ctx.r27.u64 = ctx.r9.u64 | 26215;
	// addi r21,r11,-4768
	ctx.r21.s64 = ctx.r11.s64 + -4768;
	// addi r24,r10,14512
	ctx.r24.s64 = ctx.r10.s64 + 14512;
loc_839380D0:
	// lbzx r11,r19,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// ble cr6,0x839380e0
	if (!cr6.gt) goto loc_839380E0;
	// li r11,99
	ctx.r11.s64 = 99;
loc_839380E0:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839380fc
	if (cr6.gt) goto loc_839380FC;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839381b4
	if (cr6.eq) goto loc_839381B4;
loc_839380FC:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x83938150
	if (cr6.lt) goto loc_83938150;
	// bne cr6,0x8393811c
	if (!cr6.eq) goto loc_8393811C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,-4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x838130b0
	ctx.lr = 0x8393811C;
	sub_838130B0(ctx, base);
loc_8393811C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// divw r29,r31,r22
	ctx.r29.s32 = PPCDivide(ctx.r31.s32, ctx.r22.s32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938150
	if (cr6.eq) goto loc_83938150;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// bge cr6,0x83938150
	if (!cr6.lt) goto loc_83938150;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938140;
	sub_83812878(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x83812c80
	ctx.lr = 0x83938150;
	sub_83812C80(ctx, base);
loc_83938150:
	// mulhw r11,r31,r27
	ctx.r11.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32)) >> 32;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r9,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r9.s64;
	// beq cr6,0x839381a0
	if (cr6.eq) goto loc_839381A0;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x839381a0
	if (!cr6.lt) goto loc_839381A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938190;
	sub_83812878(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x83812c80
	ctx.lr = 0x839381A0;
	sub_83812C80(ctx, base);
loc_839381A0:
	// lbz r11,13(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839381b4
	if (cr6.eq) goto loc_839381B4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83937b10
	ctx.lr = 0x839381B4;
	sub_83937B10(ctx, base);
loc_839381B4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// blt cr6,0x839380d0
	if (cr6.lt) goto loc_839380D0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839381D0"))) PPC_WEAK_FUNC(sub_839381D0);
PPC_FUNC_IMPL(__imp__sub_839381D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x839381D8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,32(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f1,164(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a290c8
	ctx.lr = 0x839381F4;
	sub_82A290C8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r31,4456(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// bl 0x83911640
	ctx.lr = 0x83938208;
	sub_83911640(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x83911da8
	ctx.lr = 0x83938210;
	sub_83911DA8(ctx, base);
	// stw r3,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r3.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// lbz r9,168(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 168);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8393823c
	if (cr6.eq) goto loc_8393823C;
	// cmpwi cr6,r20,5
	cr6.compare<int32_t>(ctx.r20.s32, 5, xer);
	// beq cr6,0x8393823c
	if (cr6.eq) goto loc_8393823C;
	// bl 0x83911e08
	ctx.lr = 0x83938230;
	sub_83911E08(ctx, base);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// b 0x83938248
	goto loc_83938248;
loc_8393823C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_83938248:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// bne cr6,0x83938274
	if (!cr6.eq) goto loc_83938274;
	// cmplwi cr6,r3,90
	cr6.compare<uint32_t>(ctx.r3.u32, 90, xer);
	// bge cr6,0x83938264
	if (!cr6.lt) goto loc_83938264;
	// li r3,90
	ctx.r3.s64 = 90;
	// b 0x83938270
	goto loc_83938270;
loc_83938264:
	// cmplwi cr6,r3,120
	cr6.compare<uint32_t>(ctx.r3.u32, 120, xer);
	// bge cr6,0x83938274
	if (!cr6.lt) goto loc_83938274;
	// li r3,120
	ctx.r3.s64 = 120;
loc_83938270:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83938274:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// ori r25,r11,52429
	ctx.r25.u64 = ctx.r11.u64 | 52429;
	// ori r24,r10,34079
	ctx.r24.u64 = ctx.r10.u64 | 34079;
	// mulhwu r8,r3,r25
	ctx.r8.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// mulhwu r7,r9,r25
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// rlwinm r11,r8,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mulhwu r6,r3,r24
	ctx.r6.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r24.u32)) >> 32;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r23,10
	ctx.r23.s64 = 10;
	// mulli r4,r5,100
	ctx.r4.s64 = ctx.r5.s64 * 100;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r11,r9,r23
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r23.u32);
	// li r21,100
	ctx.r21.s64 = 100;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r5,r3,r21
	ctx.r5.u32 = PPCDivide(ctx.r3.u32, ctx.r21.u32);
	// divwu r4,r8,r23
	ctx.r4.u32 = PPCDivide(ctx.r8.u32, ctx.r23.u32);
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// addi r31,r28,176
	ctx.r31.s64 = ctx.r28.s64 + 176;
	// addi r18,r11,14512
	ctx.r18.s64 = ctx.r11.s64 + 14512;
loc_83938300:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x83938344
	if (cr6.eq) goto loc_83938344;
	// lwz r29,-92(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -92);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83938344
	if (cr6.eq) goto loc_83938344;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bge cr6,0x83938344
	if (!cr6.lt) goto loc_83938344;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812878
	ctx.lr = 0x83938334;
	sub_83812878(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r18
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x83812c80
	ctx.lr = 0x83938344;
	sub_83812C80(ctx, base);
loc_83938344:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bge 0x83938300
	if (!cr0.lt) goto loc_83938300;
	// lbz r11,236(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83938674
	if (cr6.eq) goto loc_83938674;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83911640
	ctx.lr = 0x83938368;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839383c4
	if (cr6.eq) goto loc_839383C4;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x839383c4
	if (cr6.eq) goto loc_839383C4;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x839383c4
	if (cr6.eq) goto loc_839383C4;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// li r9,20
	ctx.r9.s64 = 20;
loc_8393838C:
	// lwz r8,296(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// lwz r7,292(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw. r5,r6,r9
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x839383b0
	if (cr0.eq) goto loc_839383B0;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839383c0
	if (!cr6.eq) goto loc_839383C0;
loc_839383B0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8393838c
	if (cr6.lt) goto loc_8393838C;
	// b 0x839383c4
	goto loc_839383C4;
loc_839383C0:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_839383C4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839383ec
	if (!cr6.eq) goto loc_839383EC;
	// lbz r11,217(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 217);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839386a4
	if (!cr6.eq) goto loc_839386A4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-4560
	ctx.r11.s64 = ctx.r11.s64 + -4560;
	// addi r4,r11,-200
	ctx.r4.s64 = ctx.r11.s64 + -200;
	// b 0x83938688
	goto loc_83938688;
loc_839383EC:
	// lfs f1,240(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x839383F4;
	sub_82A29110(ctx, base);
	// li r26,9
	ctx.r26.s64 = 9;
	// stw r3,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r3.u32);
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// ble cr6,0x83938408
	if (!cr6.gt) goto loc_83938408;
	// stw r26,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r26.u32);
loc_83938408:
	// cmpwi cr6,r20,5
	cr6.compare<int32_t>(ctx.r20.s32, 5, xer);
	// bne cr6,0x83938440
	if (!cr6.eq) goto loc_83938440;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r10,200(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r11,14552
	ctx.r9.s64 = ctx.r11.s64 + 14552;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8393843C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83938454
	goto loc_83938454;
loc_83938440:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,200(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x83937a80
	ctx.lr = 0x83938454;
	sub_83937A80(ctx, base);
loc_83938454:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f1,244(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a290c8
	ctx.lr = 0x83938464;
	sub_82A290C8(ctx, base);
	// lbz r11,217(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 217);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x839384e4
	if (!cr6.eq) goto loc_839384E4;
	// bl 0x83911640
	ctx.lr = 0x83938478;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839384ac
	if (cr6.eq) goto loc_839384AC;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x839384ac
	if (cr6.eq) goto loc_839384AC;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x839384ac
	if (cr6.eq) goto loc_839384AC;
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x83938548
	if (cr6.lt) goto loc_83938548;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lbz r10,3649(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3649);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83938548
	if (!cr6.eq) goto loc_83938548;
loc_839384AC:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-4560
	ctx.r11.s64 = ctx.r11.s64 + -4560;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839384D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r8,217(r28)
	PPC_STORE_U8(ctx.r28.u32 + 217, ctx.r8.u8);
	// bl 0x83937d50
	ctx.lr = 0x839384E0;
	sub_83937D50(ctx, base);
	// b 0x83938548
	goto loc_83938548;
loc_839384E4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83938548
	if (!cr6.eq) goto loc_83938548;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83938548
	if (cr6.eq) goto loc_83938548;
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(ctx.r20.s32, 4, xer);
	// beq cr6,0x83938548
	if (cr6.eq) goto loc_83938548;
	// cmpwi cr6,r20,6
	cr6.compare<int32_t>(ctx.r20.s32, 6, xer);
	// beq cr6,0x83938548
	if (cr6.eq) goto loc_83938548;
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x83938520
	if (cr6.lt) goto loc_83938520;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lbz r10,3649(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3649);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83938548
	if (cr6.eq) goto loc_83938548;
loc_83938520:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-4560
	ctx.r11.s64 = ctx.r11.s64 + -4560;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83938544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r19,217(r28)
	PPC_STORE_U8(ctx.r28.u32 + 217, ctx.r19.u8);
loc_83938548:
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x83911640
	ctx.lr = 0x83938550;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83938568
	if (cr6.eq) goto loc_83938568;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83938568
	if (cr6.eq) goto loc_83938568;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x839385a4
	if (!cr6.eq) goto loc_839385A4;
loc_83938568:
	// bl 0x83911e08
	ctx.lr = 0x8393856C;
	sub_83911E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,88(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mulhwu r9,r10,r24
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r24.u32)) >> 32;
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// divwu r5,r10,r21
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r21.u32);
	// mulli r7,r8,100
	ctx.r7.s64 = ctx.r8.s64 * 100;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83937a80
	ctx.lr = 0x839385A4;
	sub_83937A80(ctx, base);
loc_839385A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulhwu r9,r11,r25
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// mulhwu r8,r10,r25
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r3,r11,r23
	ctx.r3.u32 = PPCDivide(ctx.r11.u32, ctx.r23.u32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// divwu r9,r10,r23
	ctx.r9.u32 = PPCDivide(ctx.r10.u32, ctx.r23.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bgt cr6,0x839386a4
	if (cr6.gt) goto loc_839386A4;
	// addi r29,r28,196
	ctx.r29.s64 = ctx.r28.s64 + 196;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// subfic r28,r31,5
	xer.ca = ctx.r31.u32 <= 5;
	ctx.r28.s64 = 5 - ctx.r31.s64;
loc_83938608:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x83938618
	if (cr6.lt) goto loc_83938618;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_83938618:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8393865c
	if (cr6.eq) goto loc_8393865C;
	// lwz r30,-92(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -92);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8393865c
	if (cr6.eq) goto loc_8393865C;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x8393865c
	if (!cr6.lt) goto loc_8393865C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x8393864C;
	sub_83812878(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r18
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x83812c80
	ctx.lr = 0x8393865C;
	sub_83812C80(ctx, base);
loc_8393865C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bne 0x83938608
	if (!cr0.eq) goto loc_83938608;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83938674:
	// lbz r11,217(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 217);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839386a4
	if (!cr6.eq) goto loc_839386A4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,-4560
	ctx.r4.s64 = ctx.r11.s64 + -4560;
loc_83938688:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839386A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r19,217(r28)
	PPC_STORE_U8(ctx.r28.u32 + 217, ctx.r19.u8);
loc_839386A4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839386AC"))) PPC_WEAK_FUNC(sub_839386AC);
PPC_FUNC_IMPL(__imp__sub_839386AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839386B0"))) PPC_WEAK_FUNC(sub_839386B0);
PPC_FUNC_IMPL(__imp__sub_839386B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839386B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-5084
	ctx.r28.s64 = ctx.r11.s64 + -5084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-108
	ctx.r4.s64 = ctx.r28.s64 + -108;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839386E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,217(r30)
	PPC_STORE_U8(ctx.r30.u32 + 217, ctx.r29.u8);
	// bl 0x8310e010
	ctx.lr = 0x839386F0;
	sub_8310E010(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r28,-84
	ctx.r4.s64 = ctx.r28.s64 + -84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x83938714
	if (cr6.eq) goto loc_83938714;
	// addi r4,r28,-72
	ctx.r4.s64 = ctx.r28.s64 + -72;
loc_83938714:
	// bctrl 
	ctx.lr = 0x83938718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,156
	ctx.r31.s64 = ctx.r11.s64 + 156;
	// lbz r11,169(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 169);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x83938754
	if (cr6.eq) goto loc_83938754;
	// addi r4,r28,-60
	ctx.r4.s64 = ctx.r28.s64 + -60;
	// bctrl 
	ctx.lr = 0x83938748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83937b10
	ctx.lr = 0x83938750;
	sub_83937B10(ctx, base);
	// b 0x8393875c
	goto loc_8393875C;
loc_83938754:
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// bctrl 
	ctx.lr = 0x8393875C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8393875C:
	// addi r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 3;
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
loc_83938764:
	// lbzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x83938780
	if (!cr6.lt) goto loc_83938780;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83938780:
	// bl 0x838130b0
	ctx.lr = 0x83938784;
	sub_838130B0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x83938764
	if (cr6.lt) goto loc_83938764;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83938088
	ctx.lr = 0x839387A0;
	sub_83938088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839381d0
	ctx.lr = 0x839387A8;
	sub_839381D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839387B0"))) PPC_WEAK_FUNC(sub_839387B0);
PPC_FUNC_IMPL(__imp__sub_839387B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83938088
	ctx.lr = 0x839387CC;
	sub_83938088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839381d0
	ctx.lr = 0x839387D4;
	sub_839381D0(ctx, base);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83938850
	if (cr6.eq) goto loc_83938850;
	// bl 0x830fe8a0
	ctx.lr = 0x839387E4;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x839387E8;
	sub_835240D8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x83938818
	if (cr0.eq) goto loc_83938818;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83938828
	if (!cr6.eq) goto loc_83938828;
loc_83938818:
	// ld r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 208);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,7000
	cr6.compare<uint64_t>(ctx.r10.u64, 7000, xer);
	// ble cr6,0x83938850
	if (!cr6.gt) goto loc_83938850;
loc_83938828:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-5076
	ctx.r4.s64 = ctx.r11.s64 + -5076;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83938848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r8.u8);
loc_83938850:
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

__attribute__((alias("__imp__sub_83938864"))) PPC_WEAK_FUNC(sub_83938864);
PPC_FUNC_IMPL(__imp__sub_83938864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83938868"))) PPC_WEAK_FUNC(sub_83938868);
PPC_FUNC_IMPL(__imp__sub_83938868) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83938088
	ctx.lr = 0x83938884;
	sub_83938088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839381d0
	ctx.lr = 0x8393888C;
	sub_839381D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83937d50
	ctx.lr = 0x83938894;
	sub_83937D50(ctx, base);
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

__attribute__((alias("__imp__sub_839388A8"))) PPC_WEAK_FUNC(sub_839388A8);
PPC_FUNC_IMPL(__imp__sub_839388A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839388B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83938e1c
	if (!cr6.eq) goto loc_83938E1C;
	// bl 0x8392d6e8
	ctx.lr = 0x839388C8;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839388e0
	if (!cr6.eq) goto loc_839388E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839388E0:
	// bl 0x83911640
	ctx.lr = 0x839388E4;
	sub_83911640(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x839388E8;
	sub_83911640(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83938910
	if (cr6.eq) goto loc_83938910;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83938910
	if (cr6.eq) goto loc_83938910;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83938910
	if (cr6.eq) goto loc_83938910;
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// b 0x83938914
	goto loc_83938914;
loc_83938910:
	// stw r22,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r22.u32);
loc_83938914:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r22,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r22.u8);
	// addi r30,r11,-5208
	ctx.r30.s64 = ctx.r11.s64 + -5208;
	// beq cr6,0x839389d8
	if (cr6.eq) goto loc_839389D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-836
	ctx.r4.s64 = ctx.r30.s64 + -836;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83938950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83911eb8
	ctx.lr = 0x8393895C;
	sub_83911EB8(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83938968;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393897c
	if (!cr6.eq) goto loc_8393897C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8393897C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393898C;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83938994;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83911eb8
	ctx.lr = 0x839389A0;
	sub_83911EB8(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x839389AC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839389c0
	if (!cr6.eq) goto loc_839389C0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_839389C0:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839389D0;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839389D8;
	sub_8387E8E0(ctx, base);
loc_839389D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938a00
	if (cr6.eq) goto loc_83938A00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839389FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r29.u8);
loc_83938A00:
	// addi r21,r31,68
	ctx.r21.s64 = ctx.r31.s64 + 68;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r29,r21,-4
	ctx.r29.s64 = ctx.r21.s64 + -4;
	// addi r28,r11,14140
	ctx.r28.s64 = ctx.r11.s64 + 14140;
loc_83938A14:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x83815208
	ctx.lr = 0x83938A34;
	sub_83815208(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x83938a14
	if (cr6.lt) goto loc_83938A14;
	// bl 0x831156e8
	ctx.lr = 0x83938A48;
	sub_831156E8(ctx, base);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// li r27,30
	ctx.r27.s64 = 30;
	// li r28,11
	ctx.r28.s64 = 11;
	// addi r24,r31,112
	ctx.r24.s64 = ctx.r31.s64 + 112;
	// addi r25,r10,14332
	ctx.r25.s64 = ctx.r10.s64 + 14332;
	// addi r23,r9,14316
	ctx.r23.s64 = ctx.r9.s64 + 14316;
	// addi r26,r11,14220
	ctx.r26.s64 = ctx.r11.s64 + 14220;
loc_83938A70:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83938A74:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// bl 0x83815208
	ctx.lr = 0x83938A9C;
	sub_83815208(ctx, base);
	// add r8,r28,r30
	ctx.r8.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// stwx r3,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r3.u32);
	// blt cr6,0x83938a74
	if (cr6.lt) goto loc_83938A74;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// bl 0x83815208
	ctx.lr = 0x83938AD0;
	sub_83815208(ctx, base);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_83938AD8:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// bl 0x83815208
	ctx.lr = 0x83938AFC;
	sub_83815208(ctx, base);
	// add r7,r27,r30
	ctx.r7.u64 = ctx.r27.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// blt cr6,0x83938ad8
	if (cr6.lt) goto loc_83938AD8;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// cmpwi cr6,r27,34
	cr6.compare<int32_t>(ctx.r27.s32, 34, xer);
	// blt cr6,0x83938a70
	if (cr6.lt) goto loc_83938A70;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r10,14364
	ctx.r9.s64 = ctx.r10.s64 + 14364;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x83815208
	ctx.lr = 0x83938B48;
	sub_83815208(ctx, base);
	// addi r27,r31,88
	ctx.r27.s64 = ctx.r31.s64 + 88;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
	// addi r28,r11,14180
	ctx.r28.s64 = ctx.r11.s64 + 14180;
loc_83938B60:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x83815208
	ctx.lr = 0x83938B80;
	sub_83815208(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x83938b60
	if (cr6.lt) goto loc_83938B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83937c20
	ctx.lr = 0x83938B98;
	sub_83937C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83937d50
	ctx.lr = 0x83938BA0;
	sub_83937D50(ctx, base);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938bb4
	if (cr6.eq) goto loc_83938BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83812878
	ctx.lr = 0x83938BB4;
	sub_83812878(ctx, base);
loc_83938BB4:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938bc8
	if (cr6.eq) goto loc_83938BC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83812878
	ctx.lr = 0x83938BC8;
	sub_83812878(ctx, base);
loc_83938BC8:
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lis r29,-31768
	ctx.r29.s64 = -2081947648;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938bf0
	if (cr6.eq) goto loc_83938BF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938BE4;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938BF0;
	sub_83812C80(ctx, base);
loc_83938BF0:
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938c14
	if (cr6.eq) goto loc_83938C14;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938C08;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938C14;
	sub_83812C80(ctx, base);
loc_83938C14:
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938c38
	if (cr6.eq) goto loc_83938C38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938C2C;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938C38;
	sub_83812C80(ctx, base);
loc_83938C38:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938c4c
	if (cr6.eq) goto loc_83938C4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83812878
	ctx.lr = 0x83938C4C;
	sub_83812878(ctx, base);
loc_83938C4C:
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938c70
	if (cr6.eq) goto loc_83938C70;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938C64;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938C70;
	sub_83812C80(ctx, base);
loc_83938C70:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938c84
	if (cr6.eq) goto loc_83938C84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83812878
	ctx.lr = 0x83938C84;
	sub_83812878(ctx, base);
loc_83938C84:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938ca8
	if (cr6.eq) goto loc_83938CA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938C9C;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938CA8;
	sub_83812C80(ctx, base);
loc_83938CA8:
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938ccc
	if (cr6.eq) goto loc_83938CCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938CC0;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938CCC;
	sub_83812C80(ctx, base);
loc_83938CCC:
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938cf0
	if (cr6.eq) goto loc_83938CF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938CE4;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938CF0;
	sub_83812C80(ctx, base);
loc_83938CF0:
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938d14
	if (cr6.eq) goto loc_83938D14;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938D08;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938D14;
	sub_83812C80(ctx, base);
loc_83938D14:
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938d38
	if (cr6.eq) goto loc_83938D38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938D2C;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938D38;
	sub_83812C80(ctx, base);
loc_83938D38:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938d4c
	if (cr6.eq) goto loc_83938D4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83812878
	ctx.lr = 0x83938D4C;
	sub_83812878(ctx, base);
loc_83938D4C:
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938d70
	if (cr6.eq) goto loc_83938D70;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938D64;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938D70;
	sub_83812C80(ctx, base);
loc_83938D70:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938d94
	if (cr6.eq) goto loc_83938D94;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938D88;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938D94;
	sub_83812C80(ctx, base);
loc_83938D94:
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938db8
	if (cr6.eq) goto loc_83938DB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938DAC;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938DB8;
	sub_83812C80(ctx, base);
loc_83938DB8:
	// lwz r30,104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83938ddc
	if (cr6.eq) goto loc_83938DDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812878
	ctx.lr = 0x83938DD0;
	sub_83812878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14512);
	// bl 0x83812c80
	ctx.lr = 0x83938DDC;
	sub_83812C80(ctx, base);
loc_83938DDC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938df0
	if (cr6.eq) goto loc_83938DF0;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x83545640
	ctx.lr = 0x83938DF0;
	sub_83545640(ctx, base);
loc_83938DF0:
	// bl 0x830fe8a0
	ctx.lr = 0x83938DF4;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x83938DF8;
	sub_835240D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r3,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r3.u64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83938e1c
	if (cr6.lt) goto loc_83938E1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83938E1C;
	sub_825952B8(ctx, base);
loc_83938E1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83938E28"))) PPC_WEAK_FUNC(sub_83938E28);
PPC_FUNC_IMPL(__imp__sub_83938E28) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1204(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83938E30"))) PPC_WEAK_FUNC(sub_83938E30);
PPC_FUNC_IMPL(__imp__sub_83938E30) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83938e84
	if (!cr6.eq) goto loc_83938E84;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,14596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14596);
	// bl 0x82d12d18
	ctx.lr = 0x83938E64;
	sub_82D12D18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83938e78
	if (!cr6.eq) goto loc_83938E78;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83938ea0
	goto loc_83938EA0;
loc_83938E78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392d6e8
	ctx.lr = 0x83938E80;
	sub_8392D6E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83938E84:
	// bl 0x837d59a0
	ctx.lr = 0x83938E88;
	sub_837D59A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837d5c78
	ctx.lr = 0x83938E90;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_83938EA0:
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

__attribute__((alias("__imp__sub_83938EB8"))) PPC_WEAK_FUNC(sub_83938EB8);
PPC_FUNC_IMPL(__imp__sub_83938EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83938EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83938ED4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83938ef4
	if (cr6.eq) goto loc_83938EF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83938EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83938EF4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83938ed4
	if (!cr0.eq) goto loc_83938ED4;
	// bl 0x82d14ce8
	ctx.lr = 0x83938F04;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x83938F08;
	sub_82D130B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392d0e8
	ctx.lr = 0x83938F10;
	sub_8392D0E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83938F1C"))) PPC_WEAK_FUNC(sub_83938F1C);
PPC_FUNC_IMPL(__imp__sub_83938F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83938F20"))) PPC_WEAK_FUNC(sub_83938F20);
PPC_FUNC_IMPL(__imp__sub_83938F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83938F28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r30,5
	ctx.r30.s64 = 5;
loc_83938F38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83938f58
	if (cr6.eq) goto loc_83938F58;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83938F58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83938F58:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83938f38
	if (!cr0.eq) goto loc_83938F38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392d810
	ctx.lr = 0x83938F6C;
	sub_8392D810(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83938F74"))) PPC_WEAK_FUNC(sub_83938F74);
PPC_FUNC_IMPL(__imp__sub_83938F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83938F78"))) PPC_WEAK_FUNC(sub_83938F78);
PPC_FUNC_IMPL(__imp__sub_83938F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,14592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83938F84"))) PPC_WEAK_FUNC(sub_83938F84);
PPC_FUNC_IMPL(__imp__sub_83938F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83938F88"))) PPC_WEAK_FUNC(sub_83938F88);
PPC_FUNC_IMPL(__imp__sub_83938F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r3,1204(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83938F94"))) PPC_WEAK_FUNC(sub_83938F94);
PPC_FUNC_IMPL(__imp__sub_83938F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83938F98"))) PPC_WEAK_FUNC(sub_83938F98);
PPC_FUNC_IMPL(__imp__sub_83938F98) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83938FB8;
	sub_8392CFC8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-3448
	ctx.r8.s64 = ctx.r10.s64 + -3448;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83939008"))) PPC_WEAK_FUNC(sub_83939008);
PPC_FUNC_IMPL(__imp__sub_83939008) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8393903C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83939054
	if (cr6.eq) goto loc_83939054;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83938f98
	ctx.lr = 0x83939050;
	sub_83938F98(ctx, base);
	// b 0x83939058
	goto loc_83939058;
loc_83939054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83939058:
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

__attribute__((alias("__imp__sub_83939070"))) PPC_WEAK_FUNC(sub_83939070);
PPC_FUNC_IMPL(__imp__sub_83939070) {
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
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// addi r9,r11,-3448
	ctx.r9.s64 = ctx.r11.s64 + -3448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,14596(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14596);
	// bl 0x82d12668
	ctx.lr = 0x839390A4;
	sub_82D12668(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// addi r6,r8,25648
	ctx.r6.s64 = ctx.r8.s64 + 25648;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x839390c8
	if (cr6.eq) goto loc_839390C8;
	// bl 0x82416268
	ctx.lr = 0x839390C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839390C8:
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

__attribute__((alias("__imp__sub_839390E0"))) PPC_WEAK_FUNC(sub_839390E0);
PPC_FUNC_IMPL(__imp__sub_839390E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839390E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830ff290
	ctx.lr = 0x839390F0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839390F4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// bne cr6,0x83939174
	if (!cr6.eq) goto loc_83939174;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r4,60
	ctx.r4.s64 = 3932160;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// ori r4,r4,74
	ctx.r4.u64 = ctx.r4.u64 | 74;
	// bl 0x82d042a8
	ctx.lr = 0x83939120;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x83939134
	if (!cr6.lt) goto loc_83939134;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_83939134:
	// bl 0x82d14ce8
	ctx.lr = 0x83939138;
	sub_82D14CE8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x83939144;
	sub_82D14C20(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939164
	if (cr6.lt) goto loc_83939164;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83939164;
	sub_825952B8(ctx, base);
loc_83939164:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// b 0x83939248
	goto loc_83939248;
loc_83939174:
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// ori r4,r4,280
	ctx.r4.u64 = ctx.r4.u64 | 280;
	// bl 0x82d042a8
	ctx.lr = 0x83939190;
	sub_82D042A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x839391a4
	if (!cr6.lt) goto loc_839391A4;
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
loc_839391A4:
	// bl 0x82d14ce8
	ctx.lr = 0x839391A8;
	sub_82D14CE8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x839391B4;
	sub_82D14C20(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,281
	ctx.r4.u64 = ctx.r4.u64 | 281;
	// bl 0x82d042a8
	ctx.lr = 0x839391D0;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x839391e4
	if (!cr6.lt) goto loc_839391E4;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
loc_839391E4:
	// bl 0x82d14ce8
	ctx.lr = 0x839391E8;
	sub_82D14CE8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x839391F4;
	sub_82D14C20(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939214
	if (cr6.lt) goto loc_83939214;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83939214;
	sub_825952B8(ctx, base);
loc_83939214:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8393923c
	if (cr6.lt) goto loc_8393923C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8393923C;
	sub_825952B8(ctx, base);
loc_8393923C:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83939248:
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// ori r4,r4,279
	ctx.r4.u64 = ctx.r4.u64 | 279;
	// bl 0x82d042a8
	ctx.lr = 0x83939264;
	sub_82D042A8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x83939278
	if (!cr6.lt) goto loc_83939278;
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
loc_83939278:
	// bl 0x82d14ce8
	ctx.lr = 0x8393927C;
	sub_82D14CE8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d14c20
	ctx.lr = 0x83939288;
	sub_82D14C20(ctx, base);
	// bl 0x82d14ce8
	ctx.lr = 0x8393928C;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d13048
	ctx.lr = 0x83939294;
	sub_82D13048(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839392b0
	if (cr6.lt) goto loc_839392B0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x839392B0;
	sub_825952B8(ctx, base);
loc_839392B0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839392B8"))) PPC_WEAK_FUNC(sub_839392B8);
PPC_FUNC_IMPL(__imp__sub_839392B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839392C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a290c8
	ctx.lr = 0x839392DC;
	sub_82A290C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839393fc
	if (cr6.eq) goto loc_839393FC;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lbz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83939308
	if (cr6.eq) goto loc_83939308;
	// bl 0x83911e08
	ctx.lr = 0x83939300;
	sub_83911E08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83939314
	goto loc_83939314;
loc_83939308:
	// bl 0x83911da8
	ctx.lr = 0x8393930C;
	sub_83911DA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_83939314:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ori r4,r4,273
	ctx.r4.u64 = ctx.r4.u64 | 273;
	// bl 0x82d042a8
	ctx.lr = 0x8393933C;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83939350
	if (!cr6.lt) goto loc_83939350;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83939350:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x83939358;
	sub_837B0C10(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-3552
	ctx.r4.s64 = ctx.r11.s64 + -3552;
	// bl 0x837b0c10
	ctx.lr = 0x83939368;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393937c
	if (!cr6.eq) goto loc_8393937C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393937C:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393938C;
	sub_8392DC70(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839393ac
	if (cr6.lt) goto loc_839393AC;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x839393AC;
	sub_825952B8(ctx, base);
loc_839393AC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x839393d4
	if (cr6.lt) goto loc_839393D4;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x839393D4;
	sub_825952B8(ctx, base);
loc_839393D4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x839393fc
	if (cr6.lt) goto loc_839393FC;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x839393FC;
	sub_825952B8(ctx, base);
loc_839393FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83939404"))) PPC_WEAK_FUNC(sub_83939404);
PPC_FUNC_IMPL(__imp__sub_83939404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83939408"))) PPC_WEAK_FUNC(sub_83939408);
PPC_FUNC_IMPL(__imp__sub_83939408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83939410;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// lbz r6,160(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// lbz r5,159(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 159);
	// bl 0x82d042a8
	ctx.lr = 0x83939448;
	sub_82D042A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8393945c
	if (!cr6.lt) goto loc_8393945C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8393945C:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8393946C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8393946c
	if (!cr6.eq) goto loc_8393946C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83939490;
	sub_8259CC28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r10,-3544
	ctx.r4.s64 = ctx.r10.s64 + -3544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x839394B0;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839394c4
	if (!cr6.eq) goto loc_839394C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_839394C4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839394D4;
	sub_8392DC70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839394f4
	if (cr6.lt) goto loc_839394F4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839394F4;
	sub_825952B8(ctx, base);
loc_839394F4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8393951c
	if (cr6.lt) goto loc_8393951C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8393951C;
	sub_825952B8(ctx, base);
loc_8393951C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83939544
	if (cr6.lt) goto loc_83939544;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83939544;
	sub_825952B8(ctx, base);
loc_83939544:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393954C"))) PPC_WEAK_FUNC(sub_8393954C);
PPC_FUNC_IMPL(__imp__sub_8393954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83939550"))) PPC_WEAK_FUNC(sub_83939550);
PPC_FUNC_IMPL(__imp__sub_83939550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83939558;
	__savegprlr_24(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x839390e0
	ctx.lr = 0x83939564;
	sub_839390E0(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x83545640
	ctx.lr = 0x83939570;
	sub_83545640(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x83939574;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83939578;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x83939590
	if (!cr6.eq) goto loc_83939590;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r11,-3616
	ctx.r28.s64 = ctx.r11.s64 + -3616;
	// addi r4,r28,-196
	ctx.r4.s64 = ctx.r28.s64 + -196;
	// b 0x839395b0
	goto loc_839395B0;
loc_83939590:
	// bl 0x830ff290
	ctx.lr = 0x83939594;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83939598;
	sub_830FFAA8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// addi r28,r11,-3616
	ctx.r28.s64 = ctx.r11.s64 + -3616;
	// addi r4,r28,-188
	ctx.r4.s64 = ctx.r28.s64 + -188;
	// beq cr6,0x839395b0
	if (cr6.eq) goto loc_839395B0;
	// addi r4,r28,-176
	ctx.r4.s64 = ctx.r28.s64 + -176;
loc_839395B0:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839395C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r28,-168
	ctx.r4.s64 = ctx.r28.s64 + -168;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x839395EC;
	sub_8259CC28(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392e290
	ctx.lr = 0x8393960C;
	sub_8392E290(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393962c
	if (cr6.lt) goto loc_8393962C;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8393962C;
	sub_825952B8(ctx, base);
loc_8393962C:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r4,r28,-156
	ctx.r4.s64 = ctx.r28.s64 + -156;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83939654;
	sub_8259CC28(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392e290
	ctx.lr = 0x83939674;
	sub_8392E290(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939690
	if (cr6.lt) goto loc_83939690;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x83939690;
	sub_825952B8(ctx, base);
loc_83939690:
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x839396A0;
	sub_831156E8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r26,r11,5
	ctx.r26.s64 = ctx.r11.s64 + 327680;
	// addi r26,r26,14904
	ctx.r26.s64 = ctx.r26.s64 + 14904;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83123a08
	ctx.lr = 0x839396BC;
	sub_83123A08(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_839396D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839396d0
	if (!cr6.eq) goto loc_839396D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839396F4;
	sub_8259CC28(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r30,r11,14768
	ctx.r30.s64 = ctx.r11.s64 + 14768;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r4,14768(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14768);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83939710:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83939710
	if (!cr6.eq) goto loc_83939710;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83939734;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83939748
	if (!cr6.eq) goto loc_83939748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83939748:
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83939758;
	sub_8392DC70(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939774
	if (cr6.lt) goto loc_83939774;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83939774;
	sub_825952B8(ctx, base);
loc_83939774:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x8393979c
	if (cr6.lt) goto loc_8393979C;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x8393979C;
	sub_825952B8(ctx, base);
loc_8393979C:
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x83123a08
	ctx.lr = 0x839397BC;
	sub_83123A08(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_839397D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839397d0
	if (!cr6.eq) goto loc_839397D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839397F4;
	sub_8259CC28(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_83939808:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83939808
	if (!cr6.eq) goto loc_83939808;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8393982C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83939840
	if (!cr6.eq) goto loc_83939840;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83939840:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83939850;
	sub_8392DC70(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393986c
	if (cr6.lt) goto loc_8393986C;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x8393986C;
	sub_825952B8(ctx, base);
loc_8393986C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x83939894
	if (cr6.lt) goto loc_83939894;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x83939894;
	sub_825952B8(ctx, base);
loc_83939894:
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x83911a68
	ctx.lr = 0x839398A4;
	sub_83911A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839399fc
	if (cr6.eq) goto loc_839399FC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83123ad8
	ctx.lr = 0x839398C0;
	sub_83123AD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x837b0c10
	ctx.lr = 0x839398D0;
	sub_837B0C10(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r30,r11,14760
	ctx.r30.s64 = ctx.r11.s64 + 14760;
	// lwz r4,14760(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14760);
	// bl 0x837b0c10
	ctx.lr = 0x839398E4;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839398f8
	if (!cr6.eq) goto loc_839398F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_839398F8:
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83939908;
	sub_8392DC70(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939924
	if (cr6.lt) goto loc_83939924;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x83939924;
	sub_825952B8(ctx, base);
loc_83939924:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// stw r29,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r29.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8393994c
	if (cr6.lt) goto loc_8393994C;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x8393994C;
	sub_825952B8(ctx, base);
loc_8393994C:
	// stw r29,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x83123ad8
	ctx.lr = 0x83939968;
	sub_83123AD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x837b0c10
	ctx.lr = 0x83939978;
	sub_837B0C10(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x837b0c10
	ctx.lr = 0x83939984;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83939998
	if (!cr6.eq) goto loc_83939998;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83939998:
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839399A8;
	sub_8392DC70(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839399c4
	if (cr6.lt) goto loc_839399C4;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x839399C4;
	sub_825952B8(ctx, base);
loc_839399C4:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// stw r29,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r29.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x839399ec
	if (cr6.lt) goto loc_839399EC;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825952b8
	ctx.lr = 0x839399EC;
	sub_825952B8(ctx, base);
loc_839399EC:
	// stw r29,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r29.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// b 0x83939a5c
	goto loc_83939A5C;
loc_839399FC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83939A18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83939b84
	if (cr6.eq) goto loc_83939B84;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83939A2C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83939A48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83939b84
	if (cr6.eq) goto loc_83939B84;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83939A5C;
	sub_82D2AEC8(ctx, base);
loc_83939A5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839392b8
	ctx.lr = 0x83939A64;
	sub_839392B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83939408
	ctx.lr = 0x83939A6C;
	sub_83939408(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r26,r11,14600
	ctx.r26.s64 = ctx.r11.s64 + 14600;
loc_83939A78:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r4,r30,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// bl 0x83815208
	ctx.lr = 0x83939A84;
	sub_83815208(ctx, base);
	// addi r28,r1,512
	ctx.r28.s64 = ctx.r1.s64 + 512;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u32);
	// beq cr6,0x83939ab8
	if (cr6.eq) goto loc_83939AB8;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// add r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x838123c8
	ctx.lr = 0x83939AAC;
	sub_838123C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x83939AB4;
	sub_83812C48(ctx, base);
	// stwx r31,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r31.u32);
loc_83939AB8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,20
	cr6.compare<uint32_t>(ctx.r30.u32, 20, xer);
	// blt cr6,0x83939a78
	if (cr6.lt) goto loc_83939A78;
	// lfs f2,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lfs f1,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8393e140
	ctx.lr = 0x83939AD4;
	sub_8393E140(ctx, base);
	// stw r3,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r3.u32);
	// bl 0x830ff290
	ctx.lr = 0x83939ADC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83939AE0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x83939b28
	if (!cr6.eq) goto loc_83939B28;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a32f58
	ctx.lr = 0x83939AFC;
	sub_82A32F58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83939b0c
	if (!cr6.eq) goto loc_83939B0C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_83939B0C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lfs f2,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8393d7e8
	ctx.lr = 0x83939B20;
	sub_8393D7E8(ctx, base);
	// stw r3,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r3.u32);
	// b 0x83939b6c
	goto loc_83939B6C;
loc_83939B28:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lfs f2,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8393c658
	ctx.lr = 0x83939B3C;
	sub_8393C658(ctx, base);
	// stw r3,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lfs f2,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8393c658
	ctx.lr = 0x83939B54;
	sub_8393C658(ctx, base);
	// stw r3,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r3.u32);
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lfs f2,332(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8393b650
	ctx.lr = 0x83939B68;
	sub_8393B650(ctx, base);
	// stw r3,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r3.u32);
loc_83939B6C:
	// bl 0x837d59a0
	ctx.lr = 0x83939B70;
	sub_837D59A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d60f8
	ctx.lr = 0x83939B84;
	sub_837D60F8(ctx, base);
loc_83939B84:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83939B8C"))) PPC_WEAK_FUNC(sub_83939B8C);
PPC_FUNC_IMPL(__imp__sub_83939B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83939B90"))) PPC_WEAK_FUNC(sub_83939B90);
PPC_FUNC_IMPL(__imp__sub_83939B90) {
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
	// bl 0x839392b8
	ctx.lr = 0x83939BA8;
	sub_839392B8(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r8,r9,156
	ctx.r8.s64 = ctx.r9.s64 + 156;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
loc_83939BBC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83939be0
	if (!cr6.eq) goto loc_83939BE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83939bbc
	if (cr6.lt) goto loc_83939BBC;
	// b 0x83939bfc
	goto loc_83939BFC;
loc_83939BE0:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// bl 0x83939408
	ctx.lr = 0x83939BFC;
	sub_83939408(ctx, base);
loc_83939BFC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r11,3649(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3649);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83939c68
	if (cr6.eq) goto loc_83939C68;
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83939c60
	if (!cr6.eq) goto loc_83939C60;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-3568
	ctx.r11.s64 = ctx.r11.s64 + -3568;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83939C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// bl 0x82d14ce8
	ctx.lr = 0x83939C48;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x83939C4C;
	sub_82D130B8(ctx, base);
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
loc_83939C60:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83939ca4
	if (!cr6.eq) goto loc_83939CA4;
loc_83939C68:
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83939ca4
	if (!cr6.eq) goto loc_83939CA4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-3568
	ctx.r4.s64 = ctx.r11.s64 + -3568;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83939C94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// bl 0x839390e0
	ctx.lr = 0x83939CA4;
	sub_839390E0(ctx, base);
loc_83939CA4:
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

__attribute__((alias("__imp__sub_83939CB8"))) PPC_WEAK_FUNC(sub_83939CB8);
PPC_FUNC_IMPL(__imp__sub_83939CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,14776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14776);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83939CC4"))) PPC_WEAK_FUNC(sub_83939CC4);
PPC_FUNC_IMPL(__imp__sub_83939CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83939CC8"))) PPC_WEAK_FUNC(sub_83939CC8);
PPC_FUNC_IMPL(__imp__sub_83939CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83939CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83939CF4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83939d3c
	if (cr6.eq) goto loc_83939D3C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83939D14;
	sub_8392CFC8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-2824
	ctx.r9.s64 = ctx.r10.s64 + -2824;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83939D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83939D48"))) PPC_WEAK_FUNC(sub_83939D48);
PPC_FUNC_IMPL(__imp__sub_83939D48) {
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
	// bl 0x82e6e978
	ctx.lr = 0x83939D58;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83939d84
	if (cr6.eq) goto loc_83939D84;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83939d84
	if (cr6.eq) goto loc_83939D84;
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
loc_83939D84:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r3,3292(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3292);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83939DA4"))) PPC_WEAK_FUNC(sub_83939DA4);
PPC_FUNC_IMPL(__imp__sub_83939DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83939DA8"))) PPC_WEAK_FUNC(sub_83939DA8);
PPC_FUNC_IMPL(__imp__sub_83939DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r3,3292(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83939DBC"))) PPC_WEAK_FUNC(sub_83939DBC);
PPC_FUNC_IMPL(__imp__sub_83939DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83939DC0"))) PPC_WEAK_FUNC(sub_83939DC0);
PPC_FUNC_IMPL(__imp__sub_83939DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83939DC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r27,2056(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,192(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
loc_83939DF4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83939e04
	if (cr6.lt) goto loc_83939E04;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83939E04:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83939e44
	if (cr6.eq) goto loc_83939E44;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r24,76(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83939E30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, xer);
	// bne cr6,0x83939e44
	if (!cr6.eq) goto loc_83939E44;
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r26,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r26.u8);
loc_83939E44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83939df4
	if (cr6.lt) goto loc_83939DF4;
	// lbz r11,3304(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 3304);
	// lbz r10,45(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83939e74
	if (cr6.eq) goto loc_83939E74;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83939E74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83939E80"))) PPC_WEAK_FUNC(sub_83939E80);
PPC_FUNC_IMPL(__imp__sub_83939E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83939E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-2924
	ctx.r28.s64 = ctx.r11.s64 + -2924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83939EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83939ED8;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83939eec
	if (!cr6.eq) goto loc_83939EEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83939EEC:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r6,r6,203
	ctx.r6.u64 = ctx.r6.u64 | 203;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83939F00;
	sub_8392DBE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939f20
	if (cr6.lt) goto loc_83939F20;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83939F20;
	sub_825952B8(ctx, base);
loc_83939F20:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83939F48;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83939f5c
	if (!cr6.eq) goto loc_83939F5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83939F5C:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r6,r6,208
	ctx.r6.u64 = ctx.r6.u64 | 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83939F70;
	sub_8392DBE8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939f8c
	if (cr6.lt) goto loc_83939F8C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83939F8C;
	sub_825952B8(ctx, base);
loc_83939F8C:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83939FB4;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83939fc8
	if (!cr6.eq) goto loc_83939FC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83939FC8:
	// lis r6,504
	ctx.r6.s64 = 33030144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// ori r6,r6,124
	ctx.r6.u64 = ctx.r6.u64 | 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83939FDC;
	sub_8392DBE8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83939ff8
	if (cr6.lt) goto loc_83939FF8;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83939FF8;
	sub_825952B8(ctx, base);
loc_83939FF8:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393A020;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393a034
	if (!cr6.eq) goto loc_8393A034;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393A034:
	// lis r6,504
	ctx.r6.s64 = 33030144;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// ori r6,r6,110
	ctx.r6.u64 = ctx.r6.u64 | 110;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393A048;
	sub_8392DBE8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393a064
	if (cr6.lt) goto loc_8393A064;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8393A064;
	sub_825952B8(ctx, base);
loc_8393A064:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A06C"))) PPC_WEAK_FUNC(sub_8393A06C);
PPC_FUNC_IMPL(__imp__sub_8393A06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A070"))) PPC_WEAK_FUNC(sub_8393A070);
PPC_FUNC_IMPL(__imp__sub_8393A070) {
	PPC_FUNC_PROLOGUE();
	// b 0x83939e80
	sub_83939E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A074"))) PPC_WEAK_FUNC(sub_8393A074);
PPC_FUNC_IMPL(__imp__sub_8393A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A078"))) PPC_WEAK_FUNC(sub_8393A078);
PPC_FUNC_IMPL(__imp__sub_8393A078) {
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
	// bl 0x83939dc0
	ctx.lr = 0x8393A090;
	sub_83939DC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393a0a4
	if (cr6.eq) goto loc_8393A0A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83939e80
	ctx.lr = 0x8393A0A4;
	sub_83939E80(ctx, base);
loc_8393A0A4:
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

__attribute__((alias("__imp__sub_8393A0B8"))) PPC_WEAK_FUNC(sub_8393A0B8);
PPC_FUNC_IMPL(__imp__sub_8393A0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,14920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393A0C4"))) PPC_WEAK_FUNC(sub_8393A0C4);
PPC_FUNC_IMPL(__imp__sub_8393A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A0C8"))) PPC_WEAK_FUNC(sub_8393A0C8);
PPC_FUNC_IMPL(__imp__sub_8393A0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8393A0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8393A0F4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393a134
	if (cr6.eq) goto loc_8393A134;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393A114;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2240
	ctx.r9.s64 = ctx.r11.s64 + -2240;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8393A134:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A140"))) PPC_WEAK_FUNC(sub_8393A140);
PPC_FUNC_IMPL(__imp__sub_8393A140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8393A148;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r26,232(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r27,412(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a1aaa8
	ctx.lr = 0x8393A174;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393a260
	if (!cr6.eq) goto loc_8393A260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8391b400
	ctx.lr = 0x8393A188;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393a260
	if (cr6.eq) goto loc_8393A260;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a52c50
	ctx.lr = 0x8393A19C;
	sub_82A52C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393a260
	if (!cr6.eq) goto loc_8393A260;
	// lwz r30,-3564(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0c738
	ctx.lr = 0x8393A1BC;
	sub_82A0C738(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0c738
	ctx.lr = 0x8393A1CC;
	sub_82A0C738(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82a323c8
	ctx.lr = 0x8393A1E0;
	sub_82A323C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r29
	ctx.r30.u64 = ctx.r8.u64 & ctx.r29.u64;
	// bl 0x82a1aa88
	ctx.lr = 0x8393A1F8;
	sub_82A1AA88(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8393a248
	if (cr6.eq) goto loc_8393A248;
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8393a248
	if (cr6.lt) goto loc_8393A248;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x8393a248
	if (!cr6.lt) goto loc_8393A248;
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
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
	// bne cr6,0x8393a248
	if (!cr6.eq) goto loc_8393A248;
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8393a248
	if (!cr6.eq) goto loc_8393A248;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393a254
	if (!cr6.eq) goto loc_8393A254;
loc_8393A248:
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x8393a260
	if (!cr6.lt) goto loc_8393A260;
loc_8393A254:
	// lbz r3,144(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 144);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8393A260:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A26C"))) PPC_WEAK_FUNC(sub_8393A26C);
PPC_FUNC_IMPL(__imp__sub_8393A26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A270"))) PPC_WEAK_FUNC(sub_8393A270);
PPC_FUNC_IMPL(__imp__sub_8393A270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x8393a140
	sub_8393A140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A278"))) PPC_WEAK_FUNC(sub_8393A278);
PPC_FUNC_IMPL(__imp__sub_8393A278) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x8393a2d4
	if (cr6.lt) goto loc_8393A2D4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// blt cr6,0x8393a2cc
	if (cr6.lt) goto loc_8393A2CC;
	// addi r11,r11,-2336
	ctx.r11.s64 = ctx.r11.s64 + -2336;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x8393a2e0
	goto loc_8393A2E0;
loc_8393A2CC:
	// addi r4,r11,-2336
	ctx.r4.s64 = ctx.r11.s64 + -2336;
	// b 0x8393a2e0
	goto loc_8393A2E0;
loc_8393A2D4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-2336
	ctx.r11.s64 = ctx.r11.s64 + -2336;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
loc_8393A2E0:
	// bl 0x8259cc28
	ctx.lr = 0x8393A2E4;
	sub_8259CC28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8393a2f8
	if (!cr6.lt) goto loc_8393A2F8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8393A2F8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393A310;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8393a330
	if (cr6.lt) goto loc_8393A330;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8393A330;
	sub_825952B8(ctx, base);
loc_8393A330:
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

__attribute__((alias("__imp__sub_8393A344"))) PPC_WEAK_FUNC(sub_8393A344);
PPC_FUNC_IMPL(__imp__sub_8393A344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A348"))) PPC_WEAK_FUNC(sub_8393A348);
PPC_FUNC_IMPL(__imp__sub_8393A348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8393A350;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// bl 0x830ff290
	ctx.lr = 0x8393A370;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8393A374;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-2380
	ctx.r31.s64 = ctx.r11.s64 + -2380;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8393a3a4
	if (!cr6.eq) goto loc_8393A3A4;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bctrl 
	ctx.lr = 0x8393A3A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8393a3b4
	goto loc_8393A3B4;
loc_8393A3A4:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bctrl 
	ctx.lr = 0x8393A3AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8393a278
	ctx.lr = 0x8393A3B4;
	sub_8393A278(ctx, base);
loc_8393A3B4:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8393A3D8;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393a3ec
	if (!cr6.eq) goto loc_8393A3EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8393A3EC:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r6,r6,278
	ctx.r6.u64 = ctx.r6.u64 | 278;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393A400;
	sub_8392DBE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393a420
	if (cr6.lt) goto loc_8393A420;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8393A420;
	sub_825952B8(ctx, base);
loc_8393A420:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A428"))) PPC_WEAK_FUNC(sub_8393A428);
PPC_FUNC_IMPL(__imp__sub_8393A428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// b 0x8393a278
	sub_8393A278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A44C"))) PPC_WEAK_FUNC(sub_8393A44C);
PPC_FUNC_IMPL(__imp__sub_8393A44C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393A450"))) PPC_WEAK_FUNC(sub_8393A450);
PPC_FUNC_IMPL(__imp__sub_8393A450) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 * 96;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,956(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 956);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393A46C"))) PPC_WEAK_FUNC(sub_8393A46C);
PPC_FUNC_IMPL(__imp__sub_8393A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A470"))) PPC_WEAK_FUNC(sub_8393A470);
PPC_FUNC_IMPL(__imp__sub_8393A470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// bne cr6,0x8393a488
	if (!cr6.eq) goto loc_8393A488;
	// lwz r3,15040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15040);
	// blr 
	return;
loc_8393A488:
	// addi r10,r11,15040
	ctx.r10.s64 = ctx.r11.s64 + 15040;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393A494"))) PPC_WEAK_FUNC(sub_8393A494);
PPC_FUNC_IMPL(__imp__sub_8393A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A498"))) PPC_WEAK_FUNC(sub_8393A498);
PPC_FUNC_IMPL(__imp__sub_8393A498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,21
	ctx.r3.s64 = ctx.r11.s64 + 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393A4AC"))) PPC_WEAK_FUNC(sub_8393A4AC);
PPC_FUNC_IMPL(__imp__sub_8393A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A4B0"))) PPC_WEAK_FUNC(sub_8393A4B0);
PPC_FUNC_IMPL(__imp__sub_8393A4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,956(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 956);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393A4D4"))) PPC_WEAK_FUNC(sub_8393A4D4);
PPC_FUNC_IMPL(__imp__sub_8393A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A4D8"))) PPC_WEAK_FUNC(sub_8393A4D8);
PPC_FUNC_IMPL(__imp__sub_8393A4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8393A4E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83911e78
	ctx.lr = 0x8393A4F0;
	sub_83911E78(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subfc r7,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r9,r3,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// addi r29,r10,956
	ctx.r29.s64 = ctx.r10.s64 + 956;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,916(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 916);
	// cmpwi cr6,r8,255
	cr6.compare<int32_t>(ctx.r8.s32, 255, xer);
	// beq cr6,0x8393a620
	if (cr6.eq) goto loc_8393A620;
	// lbz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lbz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r26,r10,-1328
	ctx.r26.s64 = ctx.r10.s64 + -1328;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x8393a584
	if (cr6.eq) goto loc_8393A584;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// addi r4,r26,-44
	ctx.r4.s64 = ctx.r26.s64 + -44;
	// beq cr6,0x8393a568
	if (cr6.eq) goto loc_8393A568;
	// addi r4,r26,-28
	ctx.r4.s64 = ctx.r26.s64 + -28;
loc_8393A568:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393A580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
loc_8393A584:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r11,15092
	ctx.r28.s64 = ctx.r11.s64 + 15092;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x8393a5c4
	if (cr6.eq) goto loc_8393A5C4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r28,-20
	ctx.r11.s64 = ctx.r28.s64 + -20;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8393A5C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8393A5C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_8393A5D0:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// stbx r11,r27,r30
	PPC_STORE_U8(ctx.r27.u32 + ctx.r30.u32, ctx.r11.u8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393A5E8;
	sub_82D2E228(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8393a60c
	if (!cr6.eq) goto loc_8393A60C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8393A60C:
	// bctrl 
	ctx.lr = 0x8393A610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x8393a5d0
	if (cr6.lt) goto loc_8393A5D0;
loc_8393A620:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A628"))) PPC_WEAK_FUNC(sub_8393A628);
PPC_FUNC_IMPL(__imp__sub_8393A628) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83911e78
	ctx.lr = 0x8393A644;
	sub_83911E78(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,968(r7)
	PPC_STORE_U8(ctx.r7.u32 + 968, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8393A674"))) PPC_WEAK_FUNC(sub_8393A674);
PPC_FUNC_IMPL(__imp__sub_8393A674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A678"))) PPC_WEAK_FUNC(sub_8393A678);
PPC_FUNC_IMPL(__imp__sub_8393A678) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393A698;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,-1232
	ctx.r9.s64 = ctx.r11.s64 + -1232;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8393A6C0:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8393a6c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8393A6C0;
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

__attribute__((alias("__imp__sub_8393A6E4"))) PPC_WEAK_FUNC(sub_8393A6E4);
PPC_FUNC_IMPL(__imp__sub_8393A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A6E8"))) PPC_WEAK_FUNC(sub_8393A6E8);
PPC_FUNC_IMPL(__imp__sub_8393A6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8393A6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8393A718;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393a738
	if (cr6.eq) goto loc_8393A738;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8393a678
	ctx.lr = 0x8393A730;
	sub_8393A678(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8393A738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A744"))) PPC_WEAK_FUNC(sub_8393A744);
PPC_FUNC_IMPL(__imp__sub_8393A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A748"))) PPC_WEAK_FUNC(sub_8393A748);
PPC_FUNC_IMPL(__imp__sub_8393A748) {
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
	ctx.lr = 0x8393A750;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83911e78
	ctx.lr = 0x8393A760;
	sub_83911E78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d4bb00
	ctx.lr = 0x8393A768;
	sub_82D4BB00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d4bc28
	ctx.lr = 0x8393A770;
	sub_82D4BC28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r11,-1388
	ctx.r28.s64 = ctx.r11.s64 + -1388;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8393a7a0
	if (!cr6.eq) goto loc_8393A7A0;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
loc_8393A7A0:
	// bctrl 
	ctx.lr = 0x8393A7A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8393A7C8;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8393A7E8;
	sub_8392E290(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393a808
	if (cr6.lt) goto loc_8393A808;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8393A808;
	sub_825952B8(ctx, base);
loc_8393A808:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393A830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r9,15072
	ctx.r8.s64 = ctx.r9.s64 + 15072;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393A85C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r11,15048
	ctx.r26.s64 = ctx.r11.s64 + 15048;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r28,6
	ctx.r28.s64 = 6;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r25,r11,956
	ctx.r25.s64 = ctx.r11.s64 + 956;
	// addi r29,r25,44
	ctx.r29.s64 = ctx.r25.s64 + 44;
loc_8393A898:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83815208
	ctx.lr = 0x8393A8A4;
	sub_83815208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393a8d4
	if (cr6.eq) goto loc_8393A8D4;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x838123c8
	ctx.lr = 0x8393A8BC;
	sub_838123C8(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// bl 0x83812c48
	ctx.lr = 0x8393A8D4;
	sub_83812C48(ctx, base);
loc_8393A8D4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8393a898
	if (!cr0.eq) goto loc_8393A898;
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83815208
	ctx.lr = 0x8393A8F0;
	sub_83815208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393a930
	if (cr6.eq) goto loc_8393A930;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83812778
	ctx.lr = 0x8393A904;
	sub_83812778(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,1768(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1768);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,92(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 92, temp.u32);
	// bl 0x83812c48
	ctx.lr = 0x8393A920;
	sub_83812C48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8393A930:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A940"))) PPC_WEAK_FUNC(sub_8393A940);
PPC_FUNC_IMPL(__imp__sub_8393A940) {
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
	// bl 0x8392d6e8
	ctx.lr = 0x8393A95C;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393a980
	if (cr6.eq) goto loc_8393A980;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393a980
	if (cr6.eq) goto loc_8393A980;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8337f1e0
	ctx.lr = 0x8393A980;
	sub_8337F1E0(ctx, base);
loc_8393A980:
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

__attribute__((alias("__imp__sub_8393A99C"))) PPC_WEAK_FUNC(sub_8393A99C);
PPC_FUNC_IMPL(__imp__sub_8393A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A9A0"))) PPC_WEAK_FUNC(sub_8393A9A0);
PPC_FUNC_IMPL(__imp__sub_8393A9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8393A9A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8393A9BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393a9d0
	if (cr6.eq) goto loc_8393A9D0;
	// bl 0x83812c48
	ctx.lr = 0x8393A9CC;
	sub_83812C48(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8393A9D0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8393a9bc
	if (!cr0.eq) goto loc_8393A9BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392d0e8
	ctx.lr = 0x8393A9E4;
	sub_8392D0E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393A9EC"))) PPC_WEAK_FUNC(sub_8393A9EC);
PPC_FUNC_IMPL(__imp__sub_8393A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393A9F0"))) PPC_WEAK_FUNC(sub_8393A9F0);
PPC_FUNC_IMPL(__imp__sub_8393A9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,15248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393A9FC"))) PPC_WEAK_FUNC(sub_8393A9FC);
PPC_FUNC_IMPL(__imp__sub_8393A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393AA00"))) PPC_WEAK_FUNC(sub_8393AA00);
PPC_FUNC_IMPL(__imp__sub_8393AA00) {
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
	ctx.lr = 0x8393AA08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82a225d0
	ctx.lr = 0x8393AA20;
	sub_82A225D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8291ad98
	ctx.lr = 0x8393AA28;
	sub_8291AD98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x8393AA34;
	sub_82A225D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8291ad98
	ctx.lr = 0x8393AA3C;
	sub_8291AD98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bgt cr6,0x8393aad0
	if (cr6.gt) goto loc_8393AAD0;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8393aa7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393AA7C;
	// bdzf 4*cr6+eq,0x8393aa94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393AA94;
	// bne cr6,0x8393aaac
	if (!cr6.eq) goto loc_8393AAAC;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x8393AA74;
	sub_829194E8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8393aac0
	goto loc_8393AAC0;
loc_8393AA7C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x8393AA8C;
	sub_829194E8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x8393aac0
	goto loc_8393AAC0;
loc_8393AA94:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x8393AAA4;
	sub_829194E8(ctx, base);
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x8393aac0
	goto loc_8393AAC0;
loc_8393AAAC:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x8393AABC;
	sub_829194E8(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
loc_8393AAC0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829194e8
	ctx.lr = 0x8393AAD0;
	sub_829194E8(ctx, base);
loc_8393AAD0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add. r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f1,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x8393ab0c
	if (cr0.eq) goto loc_8393AB0C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
loc_8393AB0C:
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393ab2c
	if (cr6.eq) goto loc_8393AB2C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x83812840
	ctx.lr = 0x8393AB2C;
	sub_83812840(ctx, base);
loc_8393AB2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393AB34"))) PPC_WEAK_FUNC(sub_8393AB34);
PPC_FUNC_IMPL(__imp__sub_8393AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393AB38"))) PPC_WEAK_FUNC(sub_8393AB38);
PPC_FUNC_IMPL(__imp__sub_8393AB38) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83911ad8
	ctx.lr = 0x8393AB5C;
	sub_83911AD8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// bl 0x83815d38
	ctx.lr = 0x8393AB6C;
	sub_83815D38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815b28
	ctx.lr = 0x8393AB78;
	sub_83815B28(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x8393AB98;
	sub_83815B68(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x8393ABB8;
	sub_83815B68(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// stvx128 v58,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x8393ABD8;
	sub_83815B68(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838153c8
	ctx.lr = 0x8393ABE4;
	sub_838153C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815cb8
	ctx.lr = 0x8393ABEC;
	sub_83815CB8(ctx, base);
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

__attribute__((alias("__imp__sub_8393AC04"))) PPC_WEAK_FUNC(sub_8393AC04);
PPC_FUNC_IMPL(__imp__sub_8393AC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393AC08"))) PPC_WEAK_FUNC(sub_8393AC08);
PPC_FUNC_IMPL(__imp__sub_8393AC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393AC3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393AC4C"))) PPC_WEAK_FUNC(sub_8393AC4C);
PPC_FUNC_IMPL(__imp__sub_8393AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393AC50"))) PPC_WEAK_FUNC(sub_8393AC50);
PPC_FUNC_IMPL(__imp__sub_8393AC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8393AC58;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82a225d0
	ctx.lr = 0x8393AC74;
	sub_82A225D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8291ad98
	ctx.lr = 0x8393AC7C;
	sub_8291AD98(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bgt cr6,0x8393acc8
	if (cr6.gt) goto loc_8393ACC8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8393aca8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393ACA8;
	// bdzf 4*cr6+eq,0x8393acb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393ACB0;
	// bne cr6,0x8393acb8
	if (!cr6.eq) goto loc_8393ACB8;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8393acbc
	goto loc_8393ACBC;
loc_8393ACA8:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x8393acbc
	goto loc_8393ACBC;
loc_8393ACB0:
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x8393acbc
	goto loc_8393ACBC;
loc_8393ACB8:
	// li r4,61
	ctx.r4.s64 = 61;
loc_8393ACBC:
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x829194e8
	ctx.lr = 0x8393ACC4;
	sub_829194E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8393ACC8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// bne cr6,0x8393ace0
	if (!cr6.eq) goto loc_8393ACE0;
	// addi r11,r11,-356
	ctx.r11.s64 = ctx.r11.s64 + -356;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x8393ace4
	goto loc_8393ACE4;
loc_8393ACE0:
	// addi r4,r11,-356
	ctx.r4.s64 = ctx.r11.s64 + -356;
loc_8393ACE4:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_8393ACF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8393acf8
	if (!cr6.eq) goto loc_8393ACF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8393AD1C;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r4,r28,100
	ctx.r4.s64 = ctx.r28.s64 + 100;
	// bne cr6,0x8393ad2c
	if (!cr6.eq) goto loc_8393AD2C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8393AD2C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393AD3C;
	sub_8392E1A0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393ad5c
	if (cr6.lt) goto loc_8393AD5C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8393AD5C;
	sub_825952B8(ctx, base);
loc_8393AD5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393AD64"))) PPC_WEAK_FUNC(sub_8393AD64);
PPC_FUNC_IMPL(__imp__sub_8393AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393AD68"))) PPC_WEAK_FUNC(sub_8393AD68);
PPC_FUNC_IMPL(__imp__sub_8393AD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8393AD70;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,1204
	ctx.r29.s64 = ctx.r11.s64 + 1204;
	// lfs f1,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x8393AD90;
	sub_82A29110(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-268
	ctx.r30.s64 = ctx.r11.s64 + -268;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// bl 0x83815d38
	ctx.lr = 0x8393ADA8;
	sub_83815D38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83815b68
	ctx.lr = 0x8393ADBC;
	sub_83815B68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f1,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// lfs f31,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x8393aebc
	if (!cr6.lt) goto loc_8393AEBC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x8393aebc
	if (cr6.eq) goto loc_8393AEBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x8393AE04;
	sub_83815BE8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838153c8
	ctx.lr = 0x8393AE10;
	sub_838153C8(ctx, base);
	// lfs f0,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// li r12,52
	ctx.r12.s64 = 52;
	// stfiwx f12,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f12.u32);
	// bl 0x837b0c10
	ctx.lr = 0x8393AE30;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8393AE3C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393ae50
	if (!cr6.eq) goto loc_8393AE50;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8393AE50:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393AE60;
	sub_8392DC70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8393AE68;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8393AE70;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8393AE7C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8393AE88;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393ae9c
	if (!cr6.eq) goto loc_8393AE9C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8393AE9C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393AEAC;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8393AEB4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x8393af80
	goto loc_8393AF80;
loc_8393AEBC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x8393af84
	if (cr6.eq) goto loc_8393AF84;
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8393af84
	if (cr6.eq) goto loc_8393AF84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815be8
	ctx.lr = 0x8393AEEC;
	sub_83815BE8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838153c8
	ctx.lr = 0x8393AEF8;
	sub_838153C8(ctx, base);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lfs f0,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r12,52
	ctx.r12.s64 = 52;
	// stfiwx f12,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f12.u32);
	// bl 0x837b0c10
	ctx.lr = 0x8393AF1C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393af30
	if (!cr6.eq) goto loc_8393AF30;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8393AF30:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393AF40;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8393AF48;
	sub_8387E8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8393AF54;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393af68
	if (!cr6.eq) goto loc_8393AF68;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8393AF68:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r6,r11,100
	xer.ca = ctx.r11.u32 <= 100;
	ctx.r6.s64 = 100 - ctx.r11.s64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393AF7C;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_8393AF80:
	// bl 0x8387e8e0
	ctx.lr = 0x8393AF84;
	sub_8387E8E0(ctx, base);
loc_8393AF84:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815cb8
	ctx.lr = 0x8393AF8C;
	sub_83815CB8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393AF9C"))) PPC_WEAK_FUNC(sub_8393AF9C);
PPC_FUNC_IMPL(__imp__sub_8393AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393AFA0"))) PPC_WEAK_FUNC(sub_8393AFA0);
PPC_FUNC_IMPL(__imp__sub_8393AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x8393AFA8;
	__savegprlr_15(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r11,1204
	ctx.r11.s64 = ctx.r11.s64 + 1204;
	// addi r17,r11,120
	ctx.r17.s64 = ctx.r11.s64 + 120;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8393b510
	if (cr6.eq) goto loc_8393B510;
	// bl 0x831156e8
	ctx.lr = 0x8393AFD0;
	sub_831156E8(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r15,36
	ctx.r15.s64 = 36;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// divw r16,r8,r15
	ctx.r16.s32 = PPCDivide(ctx.r8.s32, ctx.r15.s32);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r18,2
	ctx.r18.s64 = 2;
	// ori r20,r8,14904
	ctx.r20.u64 = ctx.r8.u64 | 14904;
	// li r19,-1
	ctx.r19.s64 = -1;
	// addi r21,r11,15252
	ctx.r21.s64 = ctx.r11.s64 + 15252;
	// addi r25,r10,-168
	ctx.r25.s64 = ctx.r10.s64 + -168;
loc_8393B014:
	// cmplw cr6,r9,r16
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r16.u32, xer);
	// bge cr6,0x8393b4ec
	if (!cr6.lt) goto loc_8393B4EC;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r15
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r15.s32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// ble cr6,0x8393b518
	if (!cr6.gt) goto loc_8393B518;
	// addi r24,r9,1
	ctx.r24.s64 = ctx.r9.s64 + 1;
	// add r30,r22,r11
	ctx.r30.u64 = ctx.r22.u64 + ctx.r11.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(ctx.r16.u32, 5, xer);
	// blt cr6,0x8393b04c
	if (cr6.lt) goto loc_8393B04C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8393B04C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x82d2e228
	ctx.lr = 0x8393B060;
	sub_82D2E228(ctx, base);
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// addi r4,r25,-84
	ctx.r4.s64 = ctx.r25.s64 + -84;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8259cc28
	ctx.lr = 0x8393B080;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r4,r26,100
	ctx.r4.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x8393b090
	if (!cr6.eq) goto loc_8393B090;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B090:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// bl 0x8392e218
	ctx.lr = 0x8393B0B4;
	sub_8392E218(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b0d0
	if (cr6.lt) goto loc_8393B0D0;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x8393B0D0;
	sub_825952B8(ctx, base);
loc_8393B0D0:
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393b11c
	if (cr6.eq) goto loc_8393B11C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83911980
	ctx.lr = 0x8393B0FC;
	sub_83911980(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// subf r6,r3,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r3.s64;
	// ori r4,r4,189
	ctx.r4.u64 = ctx.r4.u64 | 189;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x8393B118;
	sub_82D042A8(ctx, base);
	// b 0x8393b130
	goto loc_8393B130;
loc_8393B11C:
	// lis r4,10
	ctx.r4.s64 = 655360;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// bl 0x82d042a8
	ctx.lr = 0x8393B130;
	sub_82D042A8(ctx, base);
loc_8393B130:
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// addi r4,r25,-68
	ctx.r4.s64 = ctx.r25.s64 + -68;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cc28
	ctx.lr = 0x8393B14C;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r4,r26,100
	ctx.r4.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x8393b15c
	if (!cr6.eq) goto loc_8393B15C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B15C:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393B16C;
	sub_8392DC70(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b188
	if (cr6.lt) goto loc_8393B188;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8393B188;
	sub_825952B8(ctx, base);
loc_8393B188:
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x8393B198;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8393b338
	if (cr6.gt) goto loc_8393B338;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8393b210
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393B210;
	// bdzf 4*cr6+eq,0x8393b240
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393B240;
	// bdzf 4*cr6+eq,0x8393b298
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393B298;
	// bne cr6,0x8393b2c8
	if (!cr6.eq) goto loc_8393B2C8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x83123ba8
	ctx.lr = 0x8393B1FC;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x8393B20C;
	sub_8259D6C0(ctx, base);
	// b 0x8393b338
	goto loc_8393B338;
loc_8393B210:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r29,23
	ctx.r29.s64 = 1507328;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r29,r29,396
	ctx.r29.u64 = ctx.r29.u64 | 396;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x83123ba8
	ctx.lr = 0x8393B22C;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x8393B23C;
	sub_8259D6C0(ctx, base);
	// b 0x8393b338
	goto loc_8393B338;
loc_8393B240:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r29,23
	ctx.r29.s64 = 1507328;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r29,r29,440
	ctx.r29.u64 = ctx.r29.u64 | 440;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x83123ba8
	ctx.lr = 0x8393B25C;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x8393B26C;
	sub_8259D6C0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8393b284
	if (!cr6.eq) goto loc_8393B284;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// ori r4,r4,102
	ctx.r4.u64 = ctx.r4.u64 | 102;
	// b 0x8393b330
	goto loc_8393B330;
loc_8393B284:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x8393b338
	if (!cr6.eq) goto loc_8393B338;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// ori r4,r4,101
	ctx.r4.u64 = ctx.r4.u64 | 101;
	// b 0x8393b330
	goto loc_8393B330;
loc_8393B298:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r29,r29,191
	ctx.r29.u64 = ctx.r29.u64 | 191;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x83123ba8
	ctx.lr = 0x8393B2B4;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x8393B2C4;
	sub_8259D6C0(ctx, base);
	// b 0x8393b338
	goto loc_8393B338;
loc_8393B2C8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r29,r29,209
	ctx.r29.u64 = ctx.r29.u64 | 209;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x8393b30c
	if (!cr6.eq) goto loc_8393B30C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x83123ba8
	ctx.lr = 0x8393B2F0;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x8393B300;
	sub_8259D6C0(ctx, base);
	// lis r4,60
	ctx.r4.s64 = 3932160;
	// ori r4,r4,108
	ctx.r4.u64 = ctx.r4.u64 | 108;
	// b 0x8393b330
	goto loc_8393B330;
loc_8393B30C:
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// bl 0x83123ba8
	ctx.lr = 0x8393B318;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x8393B328;
	sub_8259D6C0(ctx, base);
	// lis r4,60
	ctx.r4.s64 = 3932160;
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
loc_8393B330:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x8393B338;
	sub_82D042A8(ctx, base);
loc_8393B338:
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// addi r4,r25,-52
	ctx.r4.s64 = ctx.r25.s64 + -52;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cc28
	ctx.lr = 0x8393B354;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r4,r26,100
	ctx.r4.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x8393b364
	if (!cr6.eq) goto loc_8393B364;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B364:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393B374;
	sub_8392DBE8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b390
	if (cr6.lt) goto loc_8393B390;
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8393B390;
	sub_825952B8(ctx, base);
loc_8393B390:
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// addi r4,r25,-36
	ctx.r4.s64 = ctx.r25.s64 + -36;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393B3B8;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r4,r26,100
	ctx.r4.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x8393b3c8
	if (!cr6.eq) goto loc_8393B3C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B3C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393B3D8;
	sub_8392DC70(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b3f4
	if (cr6.lt) goto loc_8393B3F4;
	// stw r18,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r18.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x8393B3F4;
	sub_825952B8(ctx, base);
loc_8393B3F4:
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393B41C;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r4,r26,100
	ctx.r4.s64 = ctx.r26.s64 + 100;
	// bne cr6,0x8393b42c
	if (!cr6.eq) goto loc_8393B42C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B42C:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393B43C;
	sub_8392DC70(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b458
	if (cr6.lt) goto loc_8393B458;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x8393B458;
	sub_825952B8(ctx, base);
loc_8393B458:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// blt cr6,0x8393b480
	if (cr6.lt) goto loc_8393B480;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8393B480;
	sub_825952B8(ctx, base);
loc_8393B480:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8393b4a8
	if (cr6.lt) goto loc_8393B4A8;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x8393B4A8;
	sub_825952B8(ctx, base);
loc_8393B4A8:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x8393b4d0
	if (cr6.lt) goto loc_8393B4D0;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8393B4D0;
	sub_825952B8(ctx, base);
loc_8393B4D0:
	// addi r22,r22,36
	ctx.r22.s64 = ctx.r22.s64 + 36;
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// cmplwi cr6,r22,180
	cr6.compare<uint32_t>(ctx.r22.u32, 180, xer);
	// blt cr6,0x8393b014
	if (cr6.lt) goto loc_8393B014;
loc_8393B4EC:
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(ctx.r16.u32, 5, xer);
	// blt cr6,0x8393b510
	if (cr6.lt) goto loc_8393B510;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393B510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8393B510:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_8393B518:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8393B524;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8393B524"))) PPC_WEAK_FUNC(sub_8393B524);
PPC_FUNC_IMPL(__imp__sub_8393B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393B528"))) PPC_WEAK_FUNC(sub_8393B528);
PPC_FUNC_IMPL(__imp__sub_8393B528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r7,2
	ctx.r7.s64 = 2;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393B560;
	sub_8392CFC8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r9,r10,-56
	ctx.r9.s64 = ctx.r10.s64 + -56;
	// stfs f30,48(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// addi r6,r7,-22864
	ctx.r6.s64 = ctx.r7.s64 + -22864;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393B5D8"))) PPC_WEAK_FUNC(sub_8393B5D8);
PPC_FUNC_IMPL(__imp__sub_8393B5D8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-56
	ctx.r9.s64 = ctx.r11.s64 + -56;
	// addi r8,r10,-16652
	ctx.r8.s64 = ctx.r10.s64 + -16652;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825c3358
	ctx.lr = 0x8393B614;
	sub_825C3358(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,25648
	ctx.r5.s64 = ctx.r7.s64 + 25648;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8393b638
	if (cr6.eq) goto loc_8393B638;
	// bl 0x82416268
	ctx.lr = 0x8393B634;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8393B638:
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

__attribute__((alias("__imp__sub_8393B650"))) PPC_WEAK_FUNC(sub_8393B650);
PPC_FUNC_IMPL(__imp__sub_8393B650) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8393B68C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393b6a8
	if (cr6.eq) goto loc_8393B6A8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8393b528
	ctx.lr = 0x8393B6A4;
	sub_8393B528(ctx, base);
	// b 0x8393b6ac
	goto loc_8393B6AC;
loc_8393B6A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8393B6AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393B6C8"))) PPC_WEAK_FUNC(sub_8393B6C8);
PPC_FUNC_IMPL(__imp__sub_8393B6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8393B6D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r25,r3,60
	ctx.r25.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393b6f0
	if (!cr6.eq) goto loc_8393B6F0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825b4da8
	ctx.lr = 0x8393B6F0;
	sub_825B4DA8(ctx, base);
loc_8393B6F0:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393b70c
	if (!cr6.eq) goto loc_8393B70C;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
loc_8393B70C:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r27,12(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,15272
	ctx.r26.s64 = ctx.r11.s64 + 15272;
loc_8393B71C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393B72C;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8393B734:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8393ac50
	ctx.lr = 0x8393B74C;
	sub_8393AC50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x8393b734
	if (cr6.lt) goto loc_8393B734;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8393aa00
	ctx.lr = 0x8393B76C;
	sub_8393AA00(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x8393b71c
	if (cr6.lt) goto loc_8393B71C;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393b790
	if (cr6.eq) goto loc_8393B790;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
loc_8393B790:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393B798"))) PPC_WEAK_FUNC(sub_8393B798);
PPC_FUNC_IMPL(__imp__sub_8393B798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8393B7A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r25,r3,60
	ctx.r25.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393b7c0
	if (!cr6.eq) goto loc_8393B7C0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825b4da8
	ctx.lr = 0x8393B7C0;
	sub_825B4DA8(ctx, base);
loc_8393B7C0:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393b7dc
	if (!cr6.eq) goto loc_8393B7DC;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
loc_8393B7DC:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lwz r27,12(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,1204
	ctx.r11.s64 = ctx.r11.s64 + 1204;
	// addi r26,r10,15272
	ctx.r26.s64 = ctx.r10.s64 + 15272;
	// addi r24,r11,108
	ctx.r24.s64 = ctx.r11.s64 + 108;
loc_8393B7F8:
	// lbzx r11,r24,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393b854
	if (cr6.eq) goto loc_8393B854;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393B814;
	sub_82D2E228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8393B81C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8393ac50
	ctx.lr = 0x8393B834;
	sub_8393AC50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x8393b81c
	if (cr6.lt) goto loc_8393B81C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8393aa00
	ctx.lr = 0x8393B854;
	sub_8393AA00(ctx, base);
loc_8393B854:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x8393b7f8
	if (cr6.lt) goto loc_8393B7F8;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393b878
	if (cr6.eq) goto loc_8393B878;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
loc_8393B878:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393B880"))) PPC_WEAK_FUNC(sub_8393B880);
PPC_FUNC_IMPL(__imp__sub_8393B880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8393B888;
	__savegprlr_23(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r27,r11,-384
	ctx.r27.s64 = ctx.r11.s64 + -384;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r27,-164
	ctx.r4.s64 = ctx.r27.s64 + -164;
	// bl 0x8259cc28
	ctx.lr = 0x8393B8BC;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393b8d0
	if (!cr6.eq) goto loc_8393B8D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B8D0:
	// lis r6,508
	ctx.r6.s64 = 33292288;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// ori r6,r6,78
	ctx.r6.u64 = ctx.r6.u64 | 78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393B8E4;
	sub_8392DBE8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b904
	if (cr6.lt) goto loc_8393B904;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8393B904;
	sub_825952B8(ctx, base);
loc_8393B904:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-148
	ctx.r4.s64 = ctx.r27.s64 + -148;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393B92C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393b940
	if (!cr6.eq) goto loc_8393B940;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B940:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// ori r6,r6,282
	ctx.r6.u64 = ctx.r6.u64 | 282;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393B954;
	sub_8392DBE8(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b970
	if (cr6.lt) goto loc_8393B970;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x8393B970;
	sub_825952B8(ctx, base);
loc_8393B970:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r4,r27,-136
	ctx.r4.s64 = ctx.r27.s64 + -136;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393B998;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393b9ac
	if (!cr6.eq) goto loc_8393B9AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393B9AC:
	// lis r6,10
	ctx.r6.s64 = 655360;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393B9C0;
	sub_8392DBE8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393b9dc
	if (cr6.lt) goto loc_8393B9DC;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x8393B9DC;
	sub_825952B8(ctx, base);
loc_8393B9DC:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-116
	ctx.r4.s64 = ctx.r27.s64 + -116;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BA04;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393ba18
	if (!cr6.eq) goto loc_8393BA18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BA18:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393BA28;
	sub_8392E1A0(ctx, base);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393ba44
	if (cr6.lt) goto loc_8393BA44;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,576(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x825952b8
	ctx.lr = 0x8393BA44;
	sub_825952B8(ctx, base);
loc_8393BA44:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BA6C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393ba80
	if (!cr6.eq) goto loc_8393BA80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BA80:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393BA90;
	sub_8392E1A0(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393baac
	if (cr6.lt) goto loc_8393BAAC;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x8393BAAC;
	sub_825952B8(ctx, base);
loc_8393BAAC:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-84
	ctx.r4.s64 = ctx.r27.s64 + -84;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BAD4;
	sub_8259CC28(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r24,r11,15288
	ctx.r24.s64 = ctx.r11.s64 + 15288;
	// lwz r4,-16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393BAEC;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r3,100
	ctx.r4.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x8393bafc
	if (!cr6.eq) goto loc_8393BAFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BAFC:
	// lis r6,10
	ctx.r6.s64 = 655360;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393BB0C;
	sub_8392DBE8(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393bb28
	if (cr6.lt) goto loc_8393BB28;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x825952b8
	ctx.lr = 0x8393BB28;
	sub_825952B8(ctx, base);
loc_8393BB28:
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// addi r4,r27,-76
	ctx.r4.s64 = ctx.r27.s64 + -76;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BB50;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,-12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -12);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393BB60;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r3,100
	ctx.r4.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x8393bb70
	if (!cr6.eq) goto loc_8393BB70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BB70:
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// ori r6,r6,10
	ctx.r6.u64 = ctx.r6.u64 | 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393BB84;
	sub_8392DBE8(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393bba0
	if (cr6.lt) goto loc_8393BBA0;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x8393BBA0;
	sub_825952B8(ctx, base);
loc_8393BBA0:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BBC8;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,-8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393BBD8;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r3,100
	ctx.r4.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x8393bbe8
	if (!cr6.eq) goto loc_8393BBE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BBE8:
	// lis r6,10
	ctx.r6.s64 = 655360;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// ori r6,r6,206
	ctx.r6.u64 = ctx.r6.u64 | 206;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393BBFC;
	sub_8392DBE8(ctx, base);
	// lwz r11,660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393bc18
	if (cr6.lt) goto loc_8393BC18;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,640(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x825952b8
	ctx.lr = 0x8393BC18;
	sub_825952B8(ctx, base);
loc_8393BC18:
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BC40;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,-4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393BC50;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r3,100
	ctx.r4.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x8393bc60
	if (!cr6.eq) goto loc_8393BC60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BC60:
	// lis r6,36
	ctx.r6.s64 = 2359296;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// ori r6,r6,120
	ctx.r6.u64 = ctx.r6.u64 | 120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393BC74;
	sub_8392DBE8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393bc90
	if (cr6.lt) goto loc_8393BC90;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8393BC90;
	sub_825952B8(ctx, base);
loc_8393BC90:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_8393BCA0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8393ab38
	ctx.lr = 0x8393BCAC;
	sub_8393AB38(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x8393bca0
	if (cr6.lt) goto loc_8393BCA0;
	// addi r26,r24,-36
	ctx.r26.s64 = ctx.r24.s64 + -36;
	// li r25,5
	ctx.r25.s64 = 5;
loc_8393BCC0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393BCD0;
	sub_82D2E228(ctx, base);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r4,r27,-694
	ctx.r4.s64 = ctx.r27.s64 + -694;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x8393BCF0;
	sub_8259CC28(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x8393BD0C;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x8393bd1c
	if (!cr6.eq) goto loc_8393BD1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BD1C:
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393BD2C;
	sub_8392DC70(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393bd48
	if (cr6.lt) goto loc_8393BD48;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x8393BD48;
	sub_825952B8(ctx, base);
loc_8393BD48:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x8393bd70
	if (cr6.lt) goto loc_8393BD70;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x8393BD70;
	sub_825952B8(ctx, base);
loc_8393BD70:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r4,r27,-693
	ctx.r4.s64 = ctx.r27.s64 + -693;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BD98;
	sub_8259CC28(ctx, base);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8259cc28
	ctx.lr = 0x8393BDB4;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x8393bdc4
	if (!cr6.eq) goto loc_8393BDC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BDC4:
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393BDD4;
	sub_8392DC70(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393bdf0
	if (cr6.lt) goto loc_8393BDF0;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x8393BDF0;
	sub_825952B8(ctx, base);
loc_8393BDF0:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x8393be18
	if (cr6.lt) goto loc_8393BE18;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x8393BE18;
	sub_825952B8(ctx, base);
loc_8393BE18:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r27,-642
	ctx.r4.s64 = ctx.r27.s64 + -642;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BE40;
	sub_8259CC28(ctx, base);
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8259cc28
	ctx.lr = 0x8393BE5C;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x8393be6c
	if (!cr6.eq) goto loc_8393BE6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BE6C:
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393BE7C;
	sub_8392DC70(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393be98
	if (cr6.lt) goto loc_8393BE98;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825952b8
	ctx.lr = 0x8393BE98;
	sub_825952B8(ctx, base);
loc_8393BE98:
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// blt cr6,0x8393bec0
	if (cr6.lt) goto loc_8393BEC0;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x825952b8
	ctx.lr = 0x8393BEC0;
	sub_825952B8(ctx, base);
loc_8393BEC0:
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// addi r4,r27,-641
	ctx.r4.s64 = ctx.r27.s64 + -641;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393BEE8;
	sub_8259CC28(ctx, base);
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8259cc28
	ctx.lr = 0x8393BF04;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x8393bf14
	if (!cr6.eq) goto loc_8393BF14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8393BF14:
	// addi r6,r1,672
	ctx.r6.s64 = ctx.r1.s64 + 672;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393BF24;
	sub_8392DC70(ctx, base);
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393bf40
	if (cr6.lt) goto loc_8393BF40;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,608(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x825952b8
	ctx.lr = 0x8393BF40;
	sub_825952B8(ctx, base);
loc_8393BF40:
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// blt cr6,0x8393bf68
	if (cr6.lt) goto loc_8393BF68;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,672(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x825952b8
	ctx.lr = 0x8393BF68;
	sub_825952B8(ctx, base);
loc_8393BF68:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bne 0x8393bcc0
	if (!cr0.eq) goto loc_8393BCC0;
	// addi r29,r28,108
	ctx.r29.s64 = ctx.r28.s64 + 108;
	// addi r30,r24,-4
	ctx.r30.s64 = ctx.r24.s64 + -4;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8393BF8C:
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x83815208
	ctx.lr = 0x8393BF98;
	sub_83815208(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x8393bf8c
	if (!cr0.eq) goto loc_8393BF8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8393ad68
	ctx.lr = 0x8393BFAC;
	sub_8393AD68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8393b6c8
	ctx.lr = 0x8393BFB4;
	sub_8393B6C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8393afa0
	ctx.lr = 0x8393BFBC;
	sub_8393AFA0(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393BFC4"))) PPC_WEAK_FUNC(sub_8393BFC4);
PPC_FUNC_IMPL(__imp__sub_8393BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393BFC8"))) PPC_WEAK_FUNC(sub_8393BFC8);
PPC_FUNC_IMPL(__imp__sub_8393BFC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,1320(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8393bff4
	if (cr6.eq) goto loc_8393BFF4;
	// bl 0x8393afa0
	ctx.lr = 0x8393BFF4;
	sub_8393AFA0(ctx, base);
loc_8393BFF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393ad68
	ctx.lr = 0x8393BFFC;
	sub_8393AD68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393b798
	ctx.lr = 0x8393C004;
	sub_8393B798(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r11,3649(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3649);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393c044
	if (cr6.eq) goto loc_8393C044;
	// lbz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8393c03c
	if (!cr6.eq) goto loc_8393C03C;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8393C030;
	sub_82D2AEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// b 0x8393c080
	goto loc_8393C080;
loc_8393C03C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393c080
	if (!cr6.eq) goto loc_8393C080;
loc_8393C044:
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8393c080
	if (!cr6.eq) goto loc_8393C080;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8393C060;
	sub_82D2AEC8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
loc_8393C068:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393ab38
	ctx.lr = 0x8393C074;
	sub_8393AB38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x8393c068
	if (cr6.lt) goto loc_8393C068;
loc_8393C080:
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

__attribute__((alias("__imp__sub_8393C098"))) PPC_WEAK_FUNC(sub_8393C098);
PPC_FUNC_IMPL(__imp__sub_8393C098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,15444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393C0A4"))) PPC_WEAK_FUNC(sub_8393C0A4);
PPC_FUNC_IMPL(__imp__sub_8393C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393C0A8"))) PPC_WEAK_FUNC(sub_8393C0A8);
PPC_FUNC_IMPL(__imp__sub_8393C0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393c0c8
	if (cr6.eq) goto loc_8393C0C8;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82d4ba30
	sub_82D4BA30(ctx, base);
	return;
loc_8393C0C8:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8393c0f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393C0F0;
	// bdzf 4*cr6+eq,0x8393c0f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393C0F8;
	// bdzf 4*cr6+eq,0x8393c100
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393C100;
	// bne cr6,0x8393c108
	if (!cr6.eq) goto loc_8393C108;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d4ba30
	sub_82D4BA30(ctx, base);
	return;
loc_8393C0F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d4ba30
	sub_82D4BA30(ctx, base);
	return;
loc_8393C0F8:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82d4ba30
	sub_82D4BA30(ctx, base);
	return;
loc_8393C100:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82d4ba30
	sub_82D4BA30(ctx, base);
	return;
loc_8393C108:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82d4ba30
	sub_82D4BA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393C110"))) PPC_WEAK_FUNC(sub_8393C110);
PPC_FUNC_IMPL(__imp__sub_8393C110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393C114"))) PPC_WEAK_FUNC(sub_8393C114);
PPC_FUNC_IMPL(__imp__sub_8393C114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393C118"))) PPC_WEAK_FUNC(sub_8393C118);
PPC_FUNC_IMPL(__imp__sub_8393C118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393C14C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393C15C"))) PPC_WEAK_FUNC(sub_8393C15C);
PPC_FUNC_IMPL(__imp__sub_8393C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393C160"))) PPC_WEAK_FUNC(sub_8393C160);
PPC_FUNC_IMPL(__imp__sub_8393C160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8393C168;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r29,r11,388
	ctx.r29.s64 = ctx.r11.s64 + 388;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8393C19C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393c1b0
	if (!cr6.eq) goto loc_8393C1B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8393C1B0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r29,-32
	ctx.r10.s64 = ctx.r29.s64 + -32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8392dbe8
	ctx.lr = 0x8393C1CC;
	sub_8392DBE8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8393c1ec
	if (cr6.lt) goto loc_8393C1EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8393C1EC;
	sub_825952B8(ctx, base);
loc_8393C1EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393C1F4"))) PPC_WEAK_FUNC(sub_8393C1F4);
PPC_FUNC_IMPL(__imp__sub_8393C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393C1F8"))) PPC_WEAK_FUNC(sub_8393C1F8);
PPC_FUNC_IMPL(__imp__sub_8393C1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8393C200;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393C230;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r10,r11,688
	ctx.r10.s64 = ctx.r11.s64 + 688;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r8,r9,-22864
	ctx.r8.s64 = ctx.r9.s64 + -22864;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r30,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x8393C270;
	sub_831156E8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x8393c284
	if (cr6.lt) goto loc_8393C284;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8393c298
	goto loc_8393C298;
loc_8393C284:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// ori r8,r9,35389
	ctx.r8.u64 = ctx.r9.u64 | 35389;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
loc_8393C298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x8393c2ac
	if (!cr6.eq) goto loc_8393C2AC;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// b 0x8393c2b4
	goto loc_8393C2B4;
loc_8393C2AC:
	// lwz r11,1208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1208);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8393C2B4:
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8393C2C4:
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8393c2c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8393C2C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393C2E4"))) PPC_WEAK_FUNC(sub_8393C2E4);
PPC_FUNC_IMPL(__imp__sub_8393C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393C2E8"))) PPC_WEAK_FUNC(sub_8393C2E8);
PPC_FUNC_IMPL(__imp__sub_8393C2E8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,688
	ctx.r9.s64 = ctx.r11.s64 + 688;
	// addi r8,r10,-16652
	ctx.r8.s64 = ctx.r10.s64 + -16652;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825c3358
	ctx.lr = 0x8393C324;
	sub_825C3358(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,25648
	ctx.r5.s64 = ctx.r7.s64 + 25648;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8393c348
	if (cr6.eq) goto loc_8393C348;
	// bl 0x82416268
	ctx.lr = 0x8393C344;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8393C348:
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

__attribute__((alias("__imp__sub_8393C360"))) PPC_WEAK_FUNC(sub_8393C360);
PPC_FUNC_IMPL(__imp__sub_8393C360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8393C368;
	__savegprlr_17(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-31763
	ctx.r20.s64 = -2081619968;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r25,r3,36
	ctx.r25.s64 = ctx.r3.s64 + 36;
	// lwz r3,-3564(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8393C384;
	sub_82A0C738(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// ori r21,r10,34548
	ctx.r21.u64 = ctx.r10.u64 | 34548;
	// ori r22,r9,14904
	ctx.r22.u64 = ctx.r9.u64 | 14904;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r17,2
	ctx.r17.s64 = 2;
	// addi r23,r11,596
	ctx.r23.s64 = ctx.r11.s64 + 596;
loc_8393C3B4:
	// addi r4,r23,-32
	ctx.r4.s64 = ctx.r23.s64 + -32;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x82d2ec48
	ctx.lr = 0x8393C3C0;
	sub_82D2EC48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393c64c
	if (cr6.eq) goto loc_8393C64C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393C3D0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393c64c
	if (cr6.eq) goto loc_8393C64C;
	// addi r26,r3,100
	ctx.r26.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d510
	ctx.lr = 0x8393C3EC;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393c64c
	if (cr6.eq) goto loc_8393C64C;
	// lwz r3,-3564(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82a0c710
	ctx.lr = 0x8393C404;
	sub_82A0C710(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// bl 0x82917550
	ctx.lr = 0x8393C418;
	sub_82917550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d39310
	ctx.lr = 0x8393C424;
	sub_82D39310(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a16188
	ctx.lr = 0x8393C430;
	sub_82A16188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x8393C438;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r28,r11,r22
	ctx.r28.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123a08
	ctx.lr = 0x8393C450;
	sub_83123A08(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bge cr6,0x8393c468
	if (!cr6.lt) goto loc_8393C468;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lbz r18,512(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
loc_8393C468:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r23,-24
	ctx.r4.s64 = ctx.r23.s64 + -24;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x8393C484;
	sub_8259CC28(ctx, base);
	// clrlwi r6,r18,24
	ctx.r6.u64 = ctx.r18.u32 & 0xFF;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393C498;
	sub_8392E1A0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393c4b4
	if (cr6.lt) goto loc_8393C4B4;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8393C4B4;
	sub_825952B8(ctx, base);
loc_8393C4B4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123ba8
	ctx.lr = 0x8393C4D0;
	sub_83123BA8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_8393C4E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8393c4e4
	if (!cr6.eq) goto loc_8393C4E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8393C508;
	sub_8259CC28(ctx, base);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r4,r23,-12
	ctx.r4.s64 = ctx.r23.s64 + -12;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x8393C524;
	sub_8259CC28(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393C538;
	sub_8392DC70(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8393c554
	if (cr6.lt) goto loc_8393C554;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8393C554;
	sub_825952B8(ctx, base);
loc_8393C554:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x8393c57c
	if (cr6.lt) goto loc_8393C57C;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8393C57C;
	sub_825952B8(ctx, base);
loc_8393C57C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r4,r23,-498
	ctx.r4.s64 = ctx.r23.s64 + -498;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393C5A4;
	sub_8259CC28(ctx, base);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x8393C5C0;
	sub_8259CC28(ctx, base);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393C5D4;
	sub_8392DC70(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393c5f0
	if (cr6.lt) goto loc_8393C5F0;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8393C5F0;
	sub_825952B8(ctx, base);
loc_8393C5F0:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8393c618
	if (cr6.lt) goto loc_8393C618;
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8393C618;
	sub_825952B8(ctx, base);
loc_8393C618:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x8393C628;
	sub_831156E8(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b810
	ctx.lr = 0x8393C638;
	sub_8312B810(ctx, base);
	// add r11,r27,r24
	ctx.r11.u64 = ctx.r27.u64 + ctx.r24.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// stb r3,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r3.u8);
	// blt cr6,0x8393c3b4
	if (cr6.lt) goto loc_8393C3B4;
loc_8393C64C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393C654"))) PPC_WEAK_FUNC(sub_8393C654);
PPC_FUNC_IMPL(__imp__sub_8393C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393C658"))) PPC_WEAK_FUNC(sub_8393C658);
PPC_FUNC_IMPL(__imp__sub_8393C658) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x8393C69C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393c6bc
	if (cr6.eq) goto loc_8393C6BC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8393c1f8
	ctx.lr = 0x8393C6B8;
	sub_8393C1F8(ctx, base);
	// b 0x8393c6c0
	goto loc_8393C6C0;
loc_8393C6BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8393C6C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393C6E0"))) PPC_WEAK_FUNC(sub_8393C6E0);
PPC_FUNC_IMPL(__imp__sub_8393C6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8393C6E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r23,r11,548
	ctx.r23.s64 = ctx.r11.s64 + 548;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r23,-152
	ctx.r4.s64 = ctx.r23.s64 + -152;
	// bl 0x82d2ec48
	ctx.lr = 0x8393C708;
	sub_82D2EC48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393cb84
	if (cr6.eq) goto loc_8393CB84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393C718;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393cb84
	if (cr6.eq) goto loc_8393CB84;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r26,r3,100
	ctx.r26.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-144
	ctx.r4.s64 = ctx.r23.s64 + -144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393C740;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393cb84
	if (cr6.eq) goto loc_8393CB84;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8393C758;
	sub_82D2AEC8(ctx, base);
	// addi r22,r31,60
	ctx.r22.s64 = ctx.r31.s64 + 60;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825b4e28
	ctx.lr = 0x8393C764;
	sub_825B4E28(ctx, base);
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8393C778;
	sub_82A0C738(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a16188
	ctx.lr = 0x8393C784;
	sub_82A16188(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82a225d0
	ctx.lr = 0x8393C794;
	sub_82A225D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8291adc0
	ctx.lr = 0x8393C7A0;
	sub_8291ADC0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8393c9d8
	if (cr6.gt) goto loc_8393C9D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8393c9d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393C9D8;
	// bdzf 4*cr6+eq,0x8393c9b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393C9B4;
	// bdzf 4*cr6+eq,0x8393c86c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393C86C;
	// bdzf 4*cr6+eq,0x8393c8c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8393C8C8;
	// bne cr6,0x8393c964
	if (!cr6.eq) goto loc_8393C964;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d510
	ctx.lr = 0x8393C7E0;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393cb74
	if (cr6.eq) goto loc_8393CB74;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a16490
	ctx.lr = 0x8393C7F8;
	sub_82A16490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x8393C800;
	sub_83102DB0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393c820
	if (cr6.eq) goto loc_8393C820;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d47120
	ctx.lr = 0x8393C818;
	sub_82D47120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8393c84c
	goto loc_8393C84C;
loc_8393C820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x8393C828;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393c848
	if (cr6.eq) goto loc_8393C848;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d47120
	ctx.lr = 0x8393C840;
	sub_82D47120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8393c84c
	goto loc_8393C84C;
loc_8393C848:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8393C84C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8393C858;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,-84
	ctx.r4.s64 = ctx.r23.s64 + -84;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8393cb68
	goto loc_8393CB68;
loc_8393C86C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x8393C87C;
	sub_8291A868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,99
	cr6.compare<uint32_t>(ctx.r3.u32, 99, xer);
	// blt cr6,0x8393c88c
	if (cr6.lt) goto loc_8393C88C;
	// li r29,99
	ctx.r29.s64 = 99;
loc_8393C88C:
	// addi r4,r23,-72
	ctx.r4.s64 = ctx.r23.s64 + -72;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x8393C898;
	sub_837B0C10(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393C8AC;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8393C8B4;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,-64
	ctx.r4.s64 = ctx.r23.s64 + -64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8393cb68
	goto loc_8393CB68;
loc_8393C8C8:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x8393C8D8;
	sub_8291A868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x8393C8EC;
	sub_8291A868(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,287
	ctx.r4.u64 = ctx.r4.u64 | 287;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x8393C914;
	sub_82D042A8(ctx, base);
	// addi r4,r23,-48
	ctx.r4.s64 = ctx.r23.s64 + -48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x8393C920;
	sub_837B0C10(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393C934;
	sub_8392DC70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8393C93C;
	sub_8387E8E0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,-40
	ctx.r4.s64 = ctx.r23.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8393C958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8393C960;
	sub_8387E8E0(ctx, base);
	// b 0x8393cb74
	goto loc_8393CB74;
loc_8393C964:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a868
	ctx.lr = 0x8393C974;
	sub_8291A868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r23,-24
	ctx.r4.s64 = ctx.r23.s64 + -24;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x8393C984;
	sub_837B0C10(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393C998;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8393C9A0;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,-16
	ctx.r4.s64 = ctx.r23.s64 + -16;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8393cb68
	goto loc_8393CB68;
loc_8393C9B4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8393C9C4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8393cb68
	goto loc_8393CB68;
loc_8393C9D8:
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r25,292(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a16188
	ctx.lr = 0x8393C9EC;
	sub_82A16188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a16440
	ctx.lr = 0x8393C9F8;
	sub_82A16440(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d510
	ctx.lr = 0x8393CA0C;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393cb74
	if (cr6.eq) goto loc_8393CB74;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d510
	ctx.lr = 0x8393CA28;
	sub_82D2D510(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393cb74
	if (cr6.eq) goto loc_8393CB74;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a16490
	ctx.lr = 0x8393CA40;
	sub_82A16490(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83767d18
	ctx.lr = 0x8393CA48;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8393ca94
	if (cr6.eq) goto loc_8393CA94;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,-136
	ctx.r4.s64 = ctx.r23.s64 + -136;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393CA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8393CA84;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d526b8
	ctx.lr = 0x8393CA90;
	sub_82D526B8(ctx, base);
	// b 0x8393cb74
	goto loc_8393CB74;
loc_8393CA94:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x8393caa8
	if (cr6.lt) goto loc_8393CAA8;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8393caac
	if (cr6.lt) goto loc_8393CAAC;
loc_8393CAA8:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8393CAAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393cacc
	if (cr6.eq) goto loc_8393CACC;
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8393cad0
	goto loc_8393CAD0;
loc_8393CACC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8393CAD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393cb1c
	if (cr6.eq) goto loc_8393CB1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,-120
	ctx.r4.s64 = ctx.r23.s64 + -120;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393CAF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8393CB0C;
	sub_82D2B608(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d526b8
	ctx.lr = 0x8393CB18;
	sub_82D526B8(ctx, base);
	// b 0x8393cb74
	goto loc_8393CB74;
loc_8393CB1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83530640
	ctx.lr = 0x8393CB24;
	sub_83530640(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x82d2b608
	ctx.lr = 0x8393CB40;
	sub_82D2B608(ctx, base);
	// add r10,r24,r31
	ctx.r10.u64 = ctx.r24.u64 + ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// bl 0x8393c0a8
	ctx.lr = 0x8393CB58;
	sub_8393C0A8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,-104
	ctx.r4.s64 = ctx.r23.s64 + -104;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8393CB68:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8393CB74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8393CB74:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393cb84
	if (cr6.eq) goto loc_8393CB84;
	// stw r21,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r21.u32);
loc_8393CB84:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393CB8C"))) PPC_WEAK_FUNC(sub_8393CB8C);
PPC_FUNC_IMPL(__imp__sub_8393CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393CB90"))) PPC_WEAK_FUNC(sub_8393CB90);
PPC_FUNC_IMPL(__imp__sub_8393CB90) {
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
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8393cc18
	if (!cr6.eq) goto loc_8393CC18;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8393CBE8;
	sub_82A0C738(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// bl 0x82a163f0
	ctx.lr = 0x8393CBF8;
	sub_82A163F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x8393cc10
	if (!cr6.lt) goto loc_8393CC10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393c6e0
	ctx.lr = 0x8393CC0C;
	sub_8393C6E0(ctx, base);
	// b 0x8393cc18
	goto loc_8393CC18;
loc_8393CC10:
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8393CC18:
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

__attribute__((alias("__imp__sub_8393CC30"))) PPC_WEAK_FUNC(sub_8393CC30);
PPC_FUNC_IMPL(__imp__sub_8393CC30) {
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
loc_8393CC4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8393c6e0
	ctx.lr = 0x8393CC58;
	sub_8393C6E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x8393cc4c
	if (cr6.lt) goto loc_8393CC4C;
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

__attribute__((alias("__imp__sub_8393CC7C"))) PPC_WEAK_FUNC(sub_8393CC7C);
PPC_FUNC_IMPL(__imp__sub_8393CC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393CC80"))) PPC_WEAK_FUNC(sub_8393CC80);
PPC_FUNC_IMPL(__imp__sub_8393CC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8393CC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,380
	ctx.r4.s64 = ctx.r11.s64 + 380;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8393CCB8;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393cccc
	if (!cr6.eq) goto loc_8393CCCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8393CCCC:
	// lis r6,103
	ctx.r6.s64 = 6750208;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393CCE0;
	sub_8392DBE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393cd00
	if (cr6.lt) goto loc_8393CD00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8393CD00;
	sub_825952B8(ctx, base);
loc_8393CD00:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x8393c160
	ctx.lr = 0x8393CD14;
	sub_8393C160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393c360
	ctx.lr = 0x8393CD1C;
	sub_8393C360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393cc30
	ctx.lr = 0x8393CD24;
	sub_8393CC30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393CD2C"))) PPC_WEAK_FUNC(sub_8393CD2C);
PPC_FUNC_IMPL(__imp__sub_8393CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393CD30"))) PPC_WEAK_FUNC(sub_8393CD30);
PPC_FUNC_IMPL(__imp__sub_8393CD30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8393CD38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,1204
	ctx.r30.s64 = ctx.r11.s64 + 1204;
	// bl 0x831156e8
	ctx.lr = 0x8393CD4C;
	sub_831156E8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8393cdb0
	if (cr6.eq) goto loc_8393CDB0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x8393cd78
	if (cr6.lt) goto loc_8393CD78;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8393cd8c
	goto loc_8393CD8C;
loc_8393CD78:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// ori r6,r7,35389
	ctx.r6.u64 = ctx.r7.u64 | 35389;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
loc_8393CD8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x8393cdb0
	if (cr6.eq) goto loc_8393CDB0;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393c160
	ctx.lr = 0x8393CDA4;
	sub_8393C160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393cc30
	ctx.lr = 0x8393CDAC;
	sub_8393CC30(ctx, base);
	// b 0x8393cdf0
	goto loc_8393CDF0;
loc_8393CDB0:
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8393cdec
	if (!cr6.eq) goto loc_8393CDEC;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8393c6e0
	ctx.lr = 0x8393CDC4;
	sub_8393C6E0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-17874
	ctx.r10.s64 = -1171390464;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,35747
	ctx.r9.u64 = ctx.r10.u64 | 35747;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,11
	ctx.r6.s64 = ctx.r7.s64 * 11;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// b 0x8393cdf0
	goto loc_8393CDF0;
loc_8393CDEC:
	// bl 0x8393cb90
	ctx.lr = 0x8393CDF0;
	sub_8393CB90(ctx, base);
loc_8393CDF0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8393ce1c
	if (cr6.eq) goto loc_8393CE1C;
	// stb r29,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393c360
	ctx.lr = 0x8393CE14;
	sub_8393C360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393cc30
	ctx.lr = 0x8393CE1C;
	sub_8393CC30(ctx, base);
loc_8393CE1C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r11,3649(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3649);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393ce60
	if (cr6.eq) goto loc_8393CE60;
	// lbz r10,91(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 91);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8393ce58
	if (!cr6.eq) goto loc_8393CE58;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8393CE48;
	sub_82D2AEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8393CE58:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393ce80
	if (!cr6.eq) goto loc_8393CE80;
loc_8393CE60:
	// lbz r11,91(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 91);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8393ce80
	if (!cr6.eq) goto loc_8393CE80;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8393CE7C;
	sub_82D2AEC8(ctx, base);
	// stb r29,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r29.u8);
loc_8393CE80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393CE88"))) PPC_WEAK_FUNC(sub_8393CE88);
PPC_FUNC_IMPL(__imp__sub_8393CE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,15588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15588);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393CE94"))) PPC_WEAK_FUNC(sub_8393CE94);
PPC_FUNC_IMPL(__imp__sub_8393CE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393CE98"))) PPC_WEAK_FUNC(sub_8393CE98);
PPC_FUNC_IMPL(__imp__sub_8393CE98) {
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
	// bl 0x8392d6e8
	ctx.lr = 0x8393CEB4;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393cecc
	if (!cr6.eq) goto loc_8393CECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8393cef8
	goto loc_8393CEF8;
loc_8393CECC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8393cee0
	if (!cr6.eq) goto loc_8393CEE0;
loc_8393CED8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8393cef8
	goto loc_8393CEF8;
loc_8393CEE0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393ced8
	if (cr6.eq) goto loc_8393CED8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8337f1e0
	ctx.lr = 0x8393CEF4;
	sub_8337F1E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8393CEF8:
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

__attribute__((alias("__imp__sub_8393CF10"))) PPC_WEAK_FUNC(sub_8393CF10);
PPC_FUNC_IMPL(__imp__sub_8393CF10) {
	PPC_FUNC_PROLOGUE();
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393CF4C;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,48(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r9,r11,1320
	ctx.r9.s64 = ctx.r11.s64 + 1320;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r8,r10,-22864
	ctx.r8.s64 = ctx.r10.s64 + -22864;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393CFAC"))) PPC_WEAK_FUNC(sub_8393CFAC);
PPC_FUNC_IMPL(__imp__sub_8393CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393CFB0"))) PPC_WEAK_FUNC(sub_8393CFB0);
PPC_FUNC_IMPL(__imp__sub_8393CFB0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,1320
	ctx.r9.s64 = ctx.r11.s64 + 1320;
	// addi r8,r10,-16652
	ctx.r8.s64 = ctx.r10.s64 + -16652;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825c3358
	ctx.lr = 0x8393CFEC;
	sub_825C3358(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,25648
	ctx.r5.s64 = ctx.r7.s64 + 25648;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8393d010
	if (cr6.eq) goto loc_8393D010;
	// bl 0x82416268
	ctx.lr = 0x8393D00C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8393D010:
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

__attribute__((alias("__imp__sub_8393D028"))) PPC_WEAK_FUNC(sub_8393D028);
PPC_FUNC_IMPL(__imp__sub_8393D028) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82d2ec40
	ctx.lr = 0x8393D048;
	sub_82D2EC40(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,1104
	ctx.r4.s64 = ctx.r11.s64 + 1104;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8393D064;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d0cc
	if (cr6.eq) goto loc_8393D0CC;
	// bl 0x831156e8
	ctx.lr = 0x8393D074;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x8393D088;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x8393D098;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8393D0AC;
	sub_82D291E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8393d0cc
	if (cr6.lt) goto loc_8393D0CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8393D0CC;
	sub_825952B8(ctx, base);
loc_8393D0CC:
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

__attribute__((alias("__imp__sub_8393D0E4"))) PPC_WEAK_FUNC(sub_8393D0E4);
PPC_FUNC_IMPL(__imp__sub_8393D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393D0E8"))) PPC_WEAK_FUNC(sub_8393D0E8);
PPC_FUNC_IMPL(__imp__sub_8393D0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8393D0F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82d2ec40
	ctx.lr = 0x8393D120;
	sub_82D2EC40(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x8393D128;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x82d33c10
	ctx.lr = 0x8393D13C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d178
	if (cr6.eq) goto loc_8393D178;
loc_8393D144:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393D150;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d178
	if (cr6.eq) goto loc_8393D178;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8393D164;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x8393D170;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8393d144
	if (cr6.lt) goto loc_8393D144;
loc_8393D178:
	// lwz r3,8(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// bl 0x82d2ec40
	ctx.lr = 0x8393D180;
	sub_82D2EC40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x8393D188;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x82d33c10
	ctx.lr = 0x8393D19C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d1d8
	if (cr6.eq) goto loc_8393D1D8;
loc_8393D1A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393D1B0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d1d8
	if (cr6.eq) goto loc_8393D1D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8393D1C4;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x8393D1D0;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8393d1a4
	if (cr6.lt) goto loc_8393D1A4;
loc_8393D1D8:
	// lwz r3,8(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// bl 0x82d2ec40
	ctx.lr = 0x8393D1E0;
	sub_82D2EC40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x8393D1E8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x82d33c10
	ctx.lr = 0x8393D1FC;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d238
	if (cr6.eq) goto loc_8393D238;
loc_8393D204:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393D210;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d238
	if (cr6.eq) goto loc_8393D238;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8393D224;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x8393D230;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8393d204
	if (cr6.lt) goto loc_8393D204;
loc_8393D238:
	// lwz r3,8(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// bl 0x82d2ec40
	ctx.lr = 0x8393D240;
	sub_82D2EC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x8393D248;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x82d33c10
	ctx.lr = 0x8393D25C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d298
	if (cr6.eq) goto loc_8393D298;
loc_8393D264:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393D270;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d298
	if (cr6.eq) goto loc_8393D298;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8393D284;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x8393D290;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8393d264
	if (cr6.lt) goto loc_8393D264;
loc_8393D298:
	// lis r19,-31763
	ctx.r19.s64 = -2081619968;
	// lwz r4,76(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 76);
	// addi r21,r14,76
	ctx.r21.s64 = ctx.r14.s64 + 76;
	// lwz r3,-3564(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8393D2AC;
	sub_82A0C738(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lbz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// ori r17,r10,34548
	ctx.r17.u64 = ctx.r10.u64 | 34548;
	// ori r16,r9,14904
	ctx.r16.u64 = ctx.r9.u64 | 14904;
	// li r22,15
	ctx.r22.s64 = 15;
	// addi r23,r11,1220
	ctx.r23.s64 = ctx.r11.s64 + 1220;
	// b 0x8393d2e4
	goto loc_8393D2E4;
loc_8393D2D8:
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8393D2E4:
	// lwz r3,-3564(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -3564);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82a0c710
	ctx.lr = 0x8393D2F0;
	sub_82A0C710(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// add r3,r3,r17
	ctx.r3.u64 = ctx.r3.u64 + ctx.r17.u64;
	// bl 0x82917550
	ctx.lr = 0x8393D304;
	sub_82917550(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a16188
	ctx.lr = 0x8393D314;
	sub_82A16188(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8393d3ac
	if (cr6.gt) goto loc_8393D3AC;
	// lis r12,-31852
	ctx.r12.s64 = -2087452672;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11456
	ctx.r12.s64 = ctx.r12.s64 + -11456;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8393D370;
	case 1:
		goto loc_8393D370;
	case 2:
		goto loc_8393D370;
	case 3:
		goto loc_8393D384;
	case 4:
		goto loc_8393D384;
	case 5:
		goto loc_8393D384;
	case 6:
		goto loc_8393D384;
	case 7:
		goto loc_8393D384;
	case 8:
		goto loc_8393D398;
	case 9:
		goto loc_8393D398;
	case 10:
		goto loc_8393D398;
	case 11:
		goto loc_8393D398;
	default:
		return;
	}
	// lwz r28,-11408(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11408);
	// lwz r28,-11408(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11408);
	// lwz r28,-11408(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11408);
	// lwz r28,-11388(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11388);
	// lwz r28,-11388(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11388);
	// lwz r28,-11388(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11388);
	// lwz r28,-11388(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11388);
	// lwz r28,-11388(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11388);
	// lwz r28,-11368(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11368);
	// lwz r28,-11368(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11368);
	// lwz r28,-11368(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11368);
	// lwz r28,-11368(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + -11368);
loc_8393D370:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8393d3b8
	goto loc_8393D3B8;
loc_8393D384:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8393d3b8
	goto loc_8393D3B8;
loc_8393D398:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8393d3b8
	goto loc_8393D3B8;
loc_8393D3AC:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8393D3B8:
	// lwz r3,8(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// bl 0x82d2ec40
	ctx.lr = 0x8393D3C0;
	sub_82D2EC40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393D3C8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8393D3D8;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8393D3F0;
	sub_82D2AEC8(ctx, base);
	// addi r31,r25,100
	ctx.r31.s64 = ctx.r25.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x8393D404;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d39310
	ctx.lr = 0x8393D414;
	sub_82D39310(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8393D418;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r30,r11,r16
	ctx.r30.u64 = ctx.r11.u64 + ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123a08
	ctx.lr = 0x8393D42C;
	sub_83123A08(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// bge cr6,0x8393d444
	if (!cr6.lt) goto loc_8393D444;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r15,512(r11)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
loc_8393D444:
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// addi r4,r23,-104
	ctx.r4.s64 = ctx.r23.s64 + -104;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x8393D460;
	sub_8259CC28(ctx, base);
	// clrlwi r6,r15,24
	ctx.r6.u64 = ctx.r15.u32 & 0xFF;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393D474;
	sub_8392E1A0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393d494
	if (cr6.lt) goto loc_8393D494;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8393D494;
	sub_825952B8(ctx, base);
loc_8393D494:
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// bl 0x83123ba8
	ctx.lr = 0x8393D4B4;
	sub_83123BA8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
loc_8393D4C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8393d4c8
	if (!cr6.eq) goto loc_8393D4C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8393D4EC;
	sub_8259CC28(ctx, base);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// addi r4,r23,-92
	ctx.r4.s64 = ctx.r23.s64 + -92;
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x8393D508;
	sub_8259CC28(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393D51C;
	sub_8392DC70(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8393d538
	if (cr6.lt) goto loc_8393D538;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8393D538;
	sub_825952B8(ctx, base);
loc_8393D538:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// blt cr6,0x8393d560
	if (cr6.lt) goto loc_8393D560;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8393D560;
	sub_825952B8(ctx, base);
loc_8393D560:
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
	// bl 0x82a16248
	ctx.lr = 0x8393D578;
	sub_82A16248(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r23,-80
	ctx.r4.s64 = ctx.r23.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393D594;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-68
	ctx.r4.s64 = ctx.r23.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393D5B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x8393D5CC;
	sub_82D2D510(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x8393D5E8;
	sub_82D2D510(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d7dc
	if (cr6.eq) goto loc_8393D7DC;
	// lwz r11,-3564(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -3564);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a16440
	ctx.lr = 0x8393D608;
	sub_82A16440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83767d18
	ctx.lr = 0x8393D614;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8393d660
	if (cr6.eq) goto loc_8393D660;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r23,-56
	ctx.r4.s64 = ctx.r23.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393D63C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8393D650;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d526b8
	ctx.lr = 0x8393D65C;
	sub_82D526B8(ctx, base);
	// b 0x8393d7d0
	goto loc_8393D7D0;
loc_8393D660:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8393d674
	if (cr6.lt) goto loc_8393D674;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8393d678
	if (cr6.lt) goto loc_8393D678;
loc_8393D674:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8393D678:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393d698
	if (cr6.eq) goto loc_8393D698;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8393d69c
	goto loc_8393D69C;
loc_8393D698:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8393D69C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393d6e8
	if (cr6.eq) goto loc_8393D6E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r23,-40
	ctx.r4.s64 = ctx.r23.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393D6C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8393D6D8;
	sub_82D2B608(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d526b8
	ctx.lr = 0x8393D6E4;
	sub_82D526B8(ctx, base);
	// b 0x8393d7d0
	goto loc_8393D7D0;
loc_8393D6E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x8393D6F0;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8393d734
	if (!cr6.eq) goto loc_8393D734;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r23,-24
	ctx.r4.s64 = ctx.r23.s64 + -24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393D718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8393D72C;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8393d7c8
	goto loc_8393D7C8;
loc_8393D734:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x8393D73C;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bgt cr6,0x8393d794
	if (cr6.gt) goto loc_8393D794;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x8393D750;
	sub_83102DB0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8393d794
	if (cr6.eq) goto loc_8393D794;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393D778;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8393D78C;
	sub_82D2B608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8393d7c8
	goto loc_8393D7C8;
loc_8393D794:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r23,-12
	ctx.r4.s64 = ctx.r23.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393D7B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8393D7C4;
	sub_82D2B608(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_8393D7C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d47120
	ctx.lr = 0x8393D7D0;
	sub_82D47120(ctx, base);
loc_8393D7D0:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r18,11
	cr6.compare<uint32_t>(ctx.r18.u32, 11, xer);
	// blt cr6,0x8393d2d8
	if (cr6.lt) goto loc_8393D2D8;
loc_8393D7DC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393D7E4"))) PPC_WEAK_FUNC(sub_8393D7E4);
PPC_FUNC_IMPL(__imp__sub_8393D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393D7E8"))) PPC_WEAK_FUNC(sub_8393D7E8);
PPC_FUNC_IMPL(__imp__sub_8393D7E8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x8393D82C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393d84c
	if (cr6.eq) goto loc_8393D84C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8393cf10
	ctx.lr = 0x8393D848;
	sub_8393CF10(ctx, base);
	// b 0x8393d850
	goto loc_8393D850;
loc_8393D84C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8393D850:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393D870"))) PPC_WEAK_FUNC(sub_8393D870);
PPC_FUNC_IMPL(__imp__sub_8393D870) {
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
	// bl 0x8393d028
	ctx.lr = 0x8393D888;
	sub_8393D028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393d0e8
	ctx.lr = 0x8393D890;
	sub_8393D0E8(ctx, base);
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

__attribute__((alias("__imp__sub_8393D8A4"))) PPC_WEAK_FUNC(sub_8393D8A4);
PPC_FUNC_IMPL(__imp__sub_8393D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393D8A8"))) PPC_WEAK_FUNC(sub_8393D8A8);
PPC_FUNC_IMPL(__imp__sub_8393D8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8393D8B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,1204
	ctx.r29.s64 = ctx.r11.s64 + 1204;
	// lbz r11,1212(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393d8f0
	if (cr6.eq) goto loc_8393D8F0;
	// stb r28,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r28.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// subfic r9,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r10.s64;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8393D8F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8393D8F0:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r29,9
	ctx.r29.s64 = ctx.r29.s64 + 9;
loc_8393D8F8:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393d910
	if (cr6.eq) goto loc_8393D910;
	// stbx r28,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393d0e8
	ctx.lr = 0x8393D910;
	sub_8393D0E8(ctx, base);
loc_8393D910:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x8393d8f8
	if (cr6.lt) goto loc_8393D8F8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r11,3649(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3649);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8393d960
	if (cr6.eq) goto loc_8393D960;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8393d958
	if (!cr6.eq) goto loc_8393D958;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8393D948;
	sub_82D2AEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8393D958:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393d980
	if (!cr6.eq) goto loc_8393D980;
loc_8393D960:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8393d980
	if (!cr6.eq) goto loc_8393D980;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8393D97C;
	sub_82D2AEC8(ctx, base);
	// stb r28,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r28.u8);
loc_8393D980:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393D988"))) PPC_WEAK_FUNC(sub_8393D988);
PPC_FUNC_IMPL(__imp__sub_8393D988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,15736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15736);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393D994"))) PPC_WEAK_FUNC(sub_8393D994);
PPC_FUNC_IMPL(__imp__sub_8393D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393D998"))) PPC_WEAK_FUNC(sub_8393D998);
PPC_FUNC_IMPL(__imp__sub_8393D998) {
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
	// bl 0x830ff290
	ctx.lr = 0x8393D9A8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8393D9AC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r3,34
	ctx.r3.s64 = 34;
	// beq cr6,0x8393d9bc
	if (cr6.eq) goto loc_8393D9BC;
	// li r3,29
	ctx.r3.s64 = 29;
loc_8393D9BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393D9CC"))) PPC_WEAK_FUNC(sub_8393D9CC);
PPC_FUNC_IMPL(__imp__sub_8393D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393D9D0"))) PPC_WEAK_FUNC(sub_8393D9D0);
PPC_FUNC_IMPL(__imp__sub_8393D9D0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83911ad8
	ctx.lr = 0x8393D9F4;
	sub_83911AD8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,5768
	ctx.r4.s64 = ctx.r11.s64 + 5768;
	// bl 0x83815d38
	ctx.lr = 0x8393DA04;
	sub_83815D38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815b28
	ctx.lr = 0x8393DA10;
	sub_83815B28(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x8393DA30;
	sub_83815B68(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x8393DA50;
	sub_83815B68(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// stvx128 v58,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x8393DA70;
	sub_83815B68(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838153c8
	ctx.lr = 0x8393DA7C;
	sub_838153C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815cb8
	ctx.lr = 0x8393DA84;
	sub_83815CB8(ctx, base);
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

__attribute__((alias("__imp__sub_8393DA9C"))) PPC_WEAK_FUNC(sub_8393DA9C);
PPC_FUNC_IMPL(__imp__sub_8393DA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393DAA0"))) PPC_WEAK_FUNC(sub_8393DAA0);
PPC_FUNC_IMPL(__imp__sub_8393DAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8393DAA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,75
	ctx.r30.s64 = 75;
loc_8393DAB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8393DAB8:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x83812878
	ctx.lr = 0x8393DACC;
	sub_83812878(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,14
	cr6.compare<uint32_t>(ctx.r31.u32, 14, xer);
	// blt cr6,0x8393dab8
	if (cr6.lt) goto loc_8393DAB8;
	// addi r30,r30,14
	ctx.r30.s64 = ctx.r30.s64 + 14;
	// cmplwi cr6,r30,215
	cr6.compare<uint32_t>(ctx.r30.u32, 215, xer);
	// blt cr6,0x8393dab4
	if (cr6.lt) goto loc_8393DAB4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8393DAEC"))) PPC_WEAK_FUNC(sub_8393DAEC);
PPC_FUNC_IMPL(__imp__sub_8393DAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393DAF0"))) PPC_WEAK_FUNC(sub_8393DAF0);
PPC_FUNC_IMPL(__imp__sub_8393DAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393DB24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393DB34"))) PPC_WEAK_FUNC(sub_8393DB34);
PPC_FUNC_IMPL(__imp__sub_8393DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8393DB38"))) PPC_WEAK_FUNC(sub_8393DB38);
PPC_FUNC_IMPL(__imp__sub_8393DB38) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x82af1c00
	ctx.lr = 0x8393DB7C;
	sub_82AF1C00(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8393dbd4
	if (cr6.eq) goto loc_8393DBD4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x8393dbd0
	if (cr6.eq) goto loc_8393DBD0;
loc_8393DB9C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8393dbc0
	if (cr6.eq) goto loc_8393DBC0;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8393DBB4:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8393dbb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8393DBB4;
loc_8393DBC0:
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8393db9c
	if (!cr6.eq) goto loc_8393DB9C;
loc_8393DBD0:
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_8393DBD4:
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

__attribute__((alias("__imp__sub_8393DBF0"))) PPC_WEAK_FUNC(sub_8393DBF0);
PPC_FUNC_IMPL(__imp__sub_8393DBF0) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// li r5,96
	ctx.r5.s64 = 96;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 9;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lbz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// lbz r8,9(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r8,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r8.u8);
	// lbz r7,10(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stb r7,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r7.u8);
	// bl 0x831ce980
	ctx.lr = 0x8393DC48;
	sub_831CE980(ctx, base);
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lbz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// stb r5,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r5.u8);
	// bl 0x8393db38
	ctx.lr = 0x8393DC6C;
	sub_8393DB38(ctx, base);
	// lhz r4,136(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 136);
	// sth r4,136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 136, ctx.r4.u16);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8393DCA0"))) PPC_WEAK_FUNC(sub_8393DCA0);
PPC_FUNC_IMPL(__imp__sub_8393DCA0) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r7,2
	ctx.r7.s64 = 2;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393DCD8;
	sub_8392CFC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stfs f31,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,68(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r8,r9,5944
	ctx.r8.s64 = ctx.r9.s64 + 5944;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stb r11,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r11.u8);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r6,r7,-22864
	ctx.r6.s64 = ctx.r7.s64 + -22864;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_8393DD48:
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r7,r8,49
	ctx.r7.s64 = ctx.r8.s64 + 49;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8393DD58:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r5,r9,27
	ctx.r5.s64 = ctx.r9.s64 + 27;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r11,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r11.u32);
	// bdnz 0x8393dd58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8393DD58;
	// addi r8,r8,11
	ctx.r8.s64 = ctx.r8.s64 + 11;
	// cmplwi cr6,r8,22
	cr6.compare<uint32_t>(ctx.r8.u32, 22, xer);
	// blt cr6,0x8393dd48
	if (cr6.lt) goto loc_8393DD48;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r31,292
	ctx.r10.s64 = ctx.r31.s64 + 292;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
loc_8393DDA0:
	// li r9,14
	ctx.r9.s64 = 14;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r7,r8,215
	ctx.r7.s64 = ctx.r8.s64 + 215;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8393DDB0:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r5,r9,75
	ctx.r5.s64 = ctx.r9.s64 + 75;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r4,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, temp.u32);
	// stwx r11,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r11.u32);
	// bdnz 0x8393ddb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8393DDB0;
	// addi r8,r8,14
	ctx.r8.s64 = ctx.r8.s64 + 14;
	// cmplwi cr6,r8,140
	cr6.compare<uint32_t>(ctx.r8.u32, 140, xer);
	// blt cr6,0x8393dda0
	if (cr6.lt) goto loc_8393DDA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393DE00"))) PPC_WEAK_FUNC(sub_8393DE00);
PPC_FUNC_IMPL(__imp__sub_8393DE00) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,5944
	ctx.r9.s64 = ctx.r11.s64 + 5944;
	// addi r8,r10,-16652
	ctx.r8.s64 = ctx.r10.s64 + -16652;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825c3358
	ctx.lr = 0x8393DE3C;
	sub_825C3358(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// addi r5,r7,25648
	ctx.r5.s64 = ctx.r7.s64 + 25648;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8393de60
	if (cr6.eq) goto loc_8393DE60;
	// bl 0x82416268
	ctx.lr = 0x8393DE5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8393DE60:
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

