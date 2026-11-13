#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B223DC"))) PPC_WEAK_FUNC(sub_82B223DC);
PPC_FUNC_IMPL(__imp__sub_82B223DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B223E0"))) PPC_WEAK_FUNC(sub_82B223E0);
PPC_FUNC_IMPL(__imp__sub_82B223E0) {
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
	// blt cr6,0x82b22408
	if (cr6.lt) goto loc_82B22408;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2240c
	goto loc_82B2240C;
loc_82B22408:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2240C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B22428;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b22440
	if (cr6.eq) goto loc_82B22440;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b21f18
	ctx.lr = 0x82B2243C;
	sub_82B21F18(ctx, base);
	// b 0x82b22444
	goto loc_82B22444;
loc_82B22440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B22444:
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

__attribute__((alias("__imp__sub_82B2245C"))) PPC_WEAK_FUNC(sub_82B2245C);
PPC_FUNC_IMPL(__imp__sub_82B2245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B22460"))) PPC_WEAK_FUNC(sub_82B22460);
PPC_FUNC_IMPL(__imp__sub_82B22460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B22468;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B22474;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r28,r11,26316
	ctx.r28.s64 = ctx.r11.s64 + 26316;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r5,r28,-324
	ctx.r5.s64 = ctx.r28.s64 + -324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831178a0
	ctx.lr = 0x82B224A0;
	sub_831178A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B224A8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-1396(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1396);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B224C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2257c
	if (cr6.eq) goto loc_82B2257C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,-1312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1312);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b22504
	if (!cr6.eq) goto loc_82B22504;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b22508
	if (cr6.eq) goto loc_82B22508;
loc_82B22504:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B22508:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2257c
	if (!cr6.eq) goto loc_82B2257C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B2251C;
	sub_8311C148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30450
	ctx.lr = 0x82B2252C;
	sub_82D30450(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b2255c
	if (!cr6.eq) goto loc_82B2255C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82b22558
	if (cr6.eq) goto loc_82B22558;
	// stb r26,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r26.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82B22558:
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
loc_82B2255C:
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B22568;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a990c8
	ctx.lr = 0x82B22574;
	sub_82A990C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2257C;
	sub_8387E8E0(ctx, base);
loc_82B2257C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B22584;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,140
	ctx.r4.s64 = ctx.r28.s64 + 140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2259C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b225b4
	if (cr6.eq) goto loc_82B225B4;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,327
	ctx.r4.u64 = ctx.r4.u64 | 327;
	// bl 0x82d30340
	ctx.lr = 0x82B225B4;
	sub_82D30340(ctx, base);
loc_82B225B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B225BC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B225D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b225ec
	if (cr6.eq) goto loc_82B225EC;
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,187
	ctx.r4.u64 = ctx.r4.u64 | 187;
	// bl 0x82d30340
	ctx.lr = 0x82B225EC;
	sub_82D30340(ctx, base);
loc_82B225EC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B225FC;
	sub_82D19788(ctx, base);
	// li r4,241
	ctx.r4.s64 = 241;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82B22608;
	sub_82D1A998(ctx, base);
	// lis r11,209
	ctx.r11.s64 = 13697024;
	// ori r29,r11,320
	ctx.r29.u64 = ctx.r11.u64 | 320;
	// add. r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82b2273c
	if (cr0.eq) goto loc_82B2273C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addis r7,r30,5
	ctx.r7.s64 = ctx.r30.s64 + 327680;
	// addi r10,r11,-1360
	ctx.r10.s64 = ctx.r11.s64 + -1360;
	// addi r7,r7,-27668
	ctx.r7.s64 = ctx.r7.s64 + -27668;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r5,-1360(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + -1360);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82B22638:
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// bge cr6,0x82b22648
	if (!cr6.lt) goto loc_82B22648;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82B22648:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b226b0
	if (cr6.eq) goto loc_82B226B0;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x82b22670
	if (!cr6.eq) goto loc_82B22670;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// b 0x82b22698
	goto loc_82B22698;
loc_82B22670:
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b22690
	if (!cr6.eq) goto loc_82B22690;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82b22694
	if (cr6.eq) goto loc_82B22694;
loc_82B22690:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B22694:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B22698:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b226b0
	if (!cr6.eq) goto loc_82B226B0;
	// lwz r11,500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(ctx.r11.s32, 98, xer);
	// bne cr6,0x82b226c4
	if (!cr6.eq) goto loc_82B226C4;
loc_82B226B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,516
	ctx.r8.s64 = ctx.r8.s64 + 516;
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// blt cr6,0x82b22638
	if (cr6.lt) goto loc_82B22638;
	// b 0x82b226d8
	goto loc_82B226D8;
loc_82B226C4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r11.u32);
	// stw r8,116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 116, ctx.r8.u32);
loc_82B226D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B226F0;
	sub_82D20F50(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B226F4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ori r31,r10,10540
	ctx.r31.u64 = ctx.r10.u64 | 10540;
	// beq 0x82b22714
	if (cr0.eq) goto loc_82B22714;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r4,98
	cr6.compare<int32_t>(ctx.r4.s32, 98, xer);
	// bne cr6,0x82b22720
	if (!cr6.eq) goto loc_82B22720;
loc_82B22714:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b22298
	ctx.lr = 0x82B2271C;
	sub_82B22298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B22720:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b22218
	ctx.lr = 0x82B22728;
	sub_82B22218(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b22090
	ctx.lr = 0x82B22730;
	sub_82B22090(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b22298
	ctx.lr = 0x82B22738;
	sub_82B22298(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
loc_82B2273C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B22748"))) PPC_WEAK_FUNC(sub_82B22748);
PPC_FUNC_IMPL(__imp__sub_82B22748) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r4,-1360(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1360);
	// bl 0x831a5190
	ctx.lr = 0x82B22784;
	sub_831A5190(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r6,r7,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82b22830
	if (!cr6.eq) goto loc_82B22830;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b228c4
	if (!cr6.eq) goto loc_82B228C4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,26079
	ctx.r30.s64 = ctx.r11.s64 + 26079;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,893
	ctx.r3.s64 = ctx.r30.s64 + 893;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82B227C4;
	sub_82D2F8B8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b228c4
	if (cr6.eq) goto loc_82B228C4;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B227DC;
	sub_837B0C10(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,159
	ctx.r4.u64 = ctx.r4.u64 | 159;
	// bl 0x82d042a8
	ctx.lr = 0x82B227EC;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b22800
	if (!cr6.lt) goto loc_82B22800;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82B22800:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B22808;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d2aab0
	ctx.lr = 0x82B22814;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2281C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x83103100
	ctx.lr = 0x82B22828;
	sub_83103100(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82b228c0
	goto loc_82B228C0;
loc_82B22830:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b228c4
	if (!cr6.eq) goto loc_82B228C4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,26079
	ctx.r30.s64 = ctx.r11.s64 + 26079;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,933
	ctx.r3.s64 = ctx.r30.s64 + 933;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B22858;
	sub_82D2FA90(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b228c4
	if (cr6.eq) goto loc_82B228C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B22870;
	sub_837B0C10(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// bl 0x82d042a8
	ctx.lr = 0x82B22880;
	sub_82D042A8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b22894
	if (!cr6.lt) goto loc_82B22894;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82B22894:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B2289C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d2aab0
	ctx.lr = 0x82B228A8;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B228B0;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83103100
	ctx.lr = 0x82B228BC;
	sub_83103100(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_82B228C0:
	// bl 0x8387e8e0
	ctx.lr = 0x82B228C4;
	sub_8387E8E0(ctx, base);
loc_82B228C4:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b228e0
	if (cr6.eq) goto loc_82B228E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B228E0;
	sub_825952B8(ctx, base);
loc_82B228E0:
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

__attribute__((alias("__imp__sub_82B228F8"))) PPC_WEAK_FUNC(sub_82B228F8);
PPC_FUNC_IMPL(__imp__sub_82B228F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B22900;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r5,28
	cr6.compare<uint32_t>(ctx.r5.u32, 28, xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82b2296c
	if (cr6.lt) goto loc_82B2296C;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B22940;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b229f8
	if (cr6.lt) goto loc_82B229F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B22960;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2296C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,26344
	ctx.r11.s64 = ctx.r11.s64 + 26344;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82b22994
	if (!cr6.eq) goto loc_82B22994;
	// bl 0x83160838
	ctx.lr = 0x82B22990;
	sub_83160838(ctx, base);
	// b 0x82b22998
	goto loc_82B22998;
loc_82B22994:
	// bl 0x83160a78
	ctx.lr = 0x82B22998;
	sub_83160A78(ctx, base);
loc_82B22998:
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B229B0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B229B8;
	sub_8387E8E0(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B229D8;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b229f8
	if (cr6.lt) goto loc_82B229F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B229F8;
	sub_825952B8(ctx, base);
loc_82B229F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B22A04"))) PPC_WEAK_FUNC(sub_82B22A04);
PPC_FUNC_IMPL(__imp__sub_82B22A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B22A08"))) PPC_WEAK_FUNC(sub_82B22A08);
PPC_FUNC_IMPL(__imp__sub_82B22A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B22A10;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r31,r11,27040
	ctx.r31.s64 = ctx.r11.s64 + 27040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-891
	ctx.r4.s64 = ctx.r31.s64 + -891;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B22A44;
	sub_8259CC28(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r25,r11,27564
	ctx.r25.s64 = ctx.r11.s64 + 27564;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82B22A58:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, xer);
	// beq cr6,0x82b22a78
	if (cr6.eq) goto loc_82B22A78;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,56
	cr6.compare<uint32_t>(ctx.r10.u32, 56, xer);
	// blt cr6,0x82b22a58
	if (cr6.lt) goto loc_82B22A58;
	// b 0x82b22a7c
	goto loc_82B22A7C;
loc_82B22A78:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82B22A7C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b22bbc
	if (!cr6.eq) goto loc_82B22BBC;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r4,r31,-890
	ctx.r4.s64 = ctx.r31.s64 + -890;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B22AA4;
	sub_8259CC28(ctx, base);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r31,-889
	ctx.r4.s64 = ctx.r31.s64 + -889;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B22AC0;
	sub_8259CC28(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,156
	ctx.r4.u64 = ctx.r4.u64 | 156;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82B22AD4;
	sub_82D042A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,27504
	ctx.r11.s64 = ctx.r11.s64 + 27504;
loc_82B22AE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, xer);
	// beq cr6,0x82b22b00
	if (cr6.eq) goto loc_82B22B00;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,60
	cr6.compare<uint32_t>(ctx.r10.u32, 60, xer);
	// blt cr6,0x82b22ae0
	if (cr6.lt) goto loc_82B22AE0;
	// b 0x82b22b14
	goto loc_82B22B14;
loc_82B22B00:
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,157
	ctx.r4.u64 = ctx.r4.u64 | 157;
	// bl 0x82d042a8
	ctx.lr = 0x82B22B10;
	sub_82D042A8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82B22B14:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82b22b38
	if (!cr6.eq) goto loc_82B22B38;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8259cb28
	ctx.lr = 0x82B22B34;
	sub_8259CB28(ctx, base);
	// b 0x82b22b68
	goto loc_82B22B68;
loc_82B22B38:
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B22B44;
	sub_825A1DA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82B22B54;
	sub_825A1EB8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B22B68;
	sub_825A1DA8(ctx, base);
loc_82B22B68:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b22b88
	if (cr6.lt) goto loc_82B22B88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B22B88;
	sub_825952B8(ctx, base);
loc_82B22B88:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82b22c80
	if (cr6.lt) goto loc_82B22C80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B22BB0;
	sub_825952B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B22BBC:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B22BC4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r10,r11,221
	ctx.r10.s64 = ctx.r11.s64 + 14483456;
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// lbz r31,1121(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1121);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x82b22bec
	if (cr6.lt) goto loc_82B22BEC;
	// bl 0x831156e8
	ctx.lr = 0x82B22BE0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
loc_82B22BEC:
	// bl 0x831156e8
	ctx.lr = 0x82B22BF0;
	sub_831156E8(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r8,701(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 701);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b22c14
	if (!cr6.eq) goto loc_82B22C14;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82B22C14:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b22c48
	if (!cr6.eq) goto loc_82B22C48;
	// cmpwi cr6,r29,66
	cr6.compare<int32_t>(ctx.r29.s32, 66, xer);
	// beq cr6,0x82b22c40
	if (cr6.eq) goto loc_82B22C40;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82B22C30:
	// lwzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, xer);
	// bne cr6,0x82b22c30
	if (!cr6.eq) goto loc_82B22C30;
loc_82B22C40:
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// b 0x82b22c70
	goto loc_82B22C70;
loc_82B22C48:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmpwi cr6,r29,66
	cr6.compare<int32_t>(ctx.r29.s32, 66, xer);
	// addi r8,r10,27448
	ctx.r8.s64 = ctx.r10.s64 + 27448;
	// beq cr6,0x82b22c6c
	if (cr6.eq) goto loc_82B22C6C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82B22C5C:
	// lwzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, xer);
	// bne cr6,0x82b22c5c
	if (!cr6.eq) goto loc_82B22C5C;
loc_82B22C6C:
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_82B22C70:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82B22C80;
	sub_82D042A8(ctx, base);
loc_82B22C80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B22C8C"))) PPC_WEAK_FUNC(sub_82B22C8C);
PPC_FUNC_IMPL(__imp__sub_82B22C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B22C90"))) PPC_WEAK_FUNC(sub_82B22C90);
PPC_FUNC_IMPL(__imp__sub_82B22C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B22C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B22CA4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r10,r11,221
	ctx.r10.s64 = ctx.r11.s64 + 14483456;
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,13838
	ctx.r11.s64 = ctx.r11.s64 + 13838;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b22cd4
	if (!cr6.eq) goto loc_82B22CD4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82b22cd8
	goto loc_82B22CD8;
loc_82B22CD4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82B22CD8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b22db4
	if (cr6.eq) goto loc_82B22DB4;
	// li r11,148
	ctx.r11.s64 = 148;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cc28
	ctx.lr = 0x82B22D10;
	sub_8259CC28(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r4,r4,91
	ctx.r4.u64 = ctx.r4.u64 | 91;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x82B22D34;
	sub_82D042A8(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82B22D50;
	sub_8259CB28(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r8,27068
	ctx.r3.s64 = ctx.r8.s64 + 27068;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb4e80
	ctx.lr = 0x82B22D64;
	sub_82BB4E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82B22D70;
	sub_83103100(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82b22d8c
	if (cr6.lt) goto loc_82B22D8C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B22D8C;
	sub_825952B8(ctx, base);
loc_82B22D8C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82b22db4
	if (cr6.lt) goto loc_82B22DB4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82B22DB4;
	sub_825952B8(ctx, base);
loc_82B22DB4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B22DBC"))) PPC_WEAK_FUNC(sub_82B22DBC);
PPC_FUNC_IMPL(__imp__sub_82B22DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B22DC0"))) PPC_WEAK_FUNC(sub_82B22DC0);
PPC_FUNC_IMPL(__imp__sub_82B22DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B22DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x82b22e58
	if (!cr6.eq) goto loc_82B22E58;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b22e58
	if (cr6.eq) goto loc_82B22E58;
	// cmplwi cr6,r5,28
	cr6.compare<uint32_t>(ctx.r5.u32, 28, xer);
	// bge cr6,0x82b22e58
	if (!cr6.lt) goto loc_82B22E58;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r10,26472
	ctx.r4.s64 = ctx.r10.s64 + 26472;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B22E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b22e48
	if (cr6.eq) goto loc_82B22E48;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b228f8
	ctx.lr = 0x82B22E2C;
	sub_82B228F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B22E40;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B22E48;
	sub_8387E8E0(ctx, base);
loc_82B22E48:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b22188
	ctx.lr = 0x82B22E58;
	sub_82B22188(ctx, base);
loc_82B22E58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B22E60"))) PPC_WEAK_FUNC(sub_82B22E60);
PPC_FUNC_IMPL(__imp__sub_82B22E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B22E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B22E78;
	sub_82D19CD0(ctx, base);
	// cmplwi cr6,r3,28
	cr6.compare<uint32_t>(ctx.r3.u32, 28, xer);
	// bge cr6,0x82b23074
	if (!cr6.lt) goto loc_82B23074;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,26344
	ctx.r29.s64 = ctx.r11.s64 + 26344;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x83123700
	ctx.lr = 0x82B22E94;
	sub_83123700(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,98
	cr6.compare<int32_t>(ctx.r3.s32, 98, xer);
	// beq cr6,0x82b23074
	if (cr6.eq) goto loc_82B23074;
	// bl 0x831156e8
	ctx.lr = 0x82B22EA4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r6,r11,209
	ctx.r6.s64 = ctx.r11.s64 + 13697024;
	// addic. r6,r6,320
	xer.ca = ctx.r6.u32 > 4294966975;
	ctx.r6.s64 = ctx.r6.s64 + 320;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82b23074
	if (cr0.eq) goto loc_82B23074;
	// addis r8,r6,5
	ctx.r8.s64 = ctx.r6.s64 + 327680;
	// li r7,98
	ctx.r7.s64 = 98;
	// addi r8,r8,-27668
	ctx.r8.s64 = ctx.r8.s64 + -27668;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82B22EC8:
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b22ed8
	if (!cr6.lt) goto loc_82B22ED8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B22ED8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b22eec
	if (cr6.eq) goto loc_82B22EEC;
	// lwz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(ctx.r11.s32, 98, xer);
	// bne cr6,0x82b22f00
	if (!cr6.eq) goto loc_82B22F00;
loc_82B22EEC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,516
	ctx.r9.s64 = ctx.r9.s64 + 516;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// blt cr6,0x82b22ec8
	if (cr6.lt) goto loc_82B22EC8;
	// b 0x82b22f04
	goto loc_82B22F04;
loc_82B22F00:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82B22F04:
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, xer);
	// bne cr6,0x82b22fac
	if (!cr6.eq) goto loc_82B22FAC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2306c
	if (!cr6.eq) goto loc_82B2306C;
	// addi r3,r29,456
	ctx.r3.s64 = ctx.r29.s64 + 456;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B22F30;
	sub_82D2F6D8(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2306c
	if (cr6.eq) goto loc_82B2306C;
	// addi r4,r29,-285
	ctx.r4.s64 = ctx.r29.s64 + -285;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B22F48;
	sub_837B0C10(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// bl 0x82d042a8
	ctx.lr = 0x82B22F58;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b22f6c
	if (!cr6.lt) goto loc_82B22F6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B22F6C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B22F74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x82d2aab0
	ctx.lr = 0x82B22F80;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B22F88;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83103100
	ctx.lr = 0x82B22F94;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B22F9C;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22090
	ctx.lr = 0x82B22FA4;
	sub_82B22090(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B22FAC:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// cmpwi cr6,r7,98
	cr6.compare<int32_t>(ctx.r7.s32, 98, xer);
	// ori r10,r11,10540
	ctx.r10.u64 = ctx.r11.u64 | 10540;
	// stwx r31,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u32);
	// bne cr6,0x82b22fdc
	if (!cr6.eq) goto loc_82B22FDC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22748
	ctx.lr = 0x82B22FCC;
	sub_82B22748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22090
	ctx.lr = 0x82B22FD4;
	sub_82B22090(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B22FDC:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2306c
	if (!cr6.eq) goto loc_82B2306C;
	// addi r3,r29,476
	ctx.r3.s64 = ctx.r29.s64 + 476;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B23000;
	sub_82D2F6D8(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2306c
	if (cr6.eq) goto loc_82B2306C;
	// addi r4,r29,-267
	ctx.r4.s64 = ctx.r29.s64 + -267;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B23018;
	sub_837B0C10(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// bl 0x82d042a8
	ctx.lr = 0x82B23028;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2303c
	if (!cr6.lt) goto loc_82B2303C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82B2303C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B23044;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82d2aab0
	ctx.lr = 0x82B23050;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B23058;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x83103100
	ctx.lr = 0x82B23064;
	sub_83103100(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2306C;
	sub_8387E8E0(ctx, base);
loc_82B2306C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22090
	ctx.lr = 0x82B23074;
	sub_82B22090(ctx, base);
loc_82B23074:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2307C"))) PPC_WEAK_FUNC(sub_82B2307C);
PPC_FUNC_IMPL(__imp__sub_82B2307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B23080"))) PPC_WEAK_FUNC(sub_82B23080);
PPC_FUNC_IMPL(__imp__sub_82B23080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82B23088;
	__savegprlr_17(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B23094;
	sub_82D19CD0(ctx, base);
	// cmplwi cr6,r3,28
	cr6.compare<uint32_t>(ctx.r3.u32, 28, xer);
	// bge cr6,0x82b23ea8
	if (!cr6.lt) goto loc_82B23EA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B230A8;
	sub_82D19CD0(ctx, base);
	// cmplwi cr6,r3,28
	cr6.compare<uint32_t>(ctx.r3.u32, 28, xer);
	// bge cr6,0x82b23ea8
	if (!cr6.lt) goto loc_82B23EA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,26960
	ctx.r25.s64 = ctx.r11.s64 + 26960;
	// addi r9,r25,-616
	ctx.r9.s64 = ctx.r25.s64 + -616;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83123700
	ctx.lr = 0x82B230C8;
	sub_83123700(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,98
	cr6.compare<int32_t>(ctx.r3.s32, 98, xer);
	// beq cr6,0x82b23ea8
	if (cr6.eq) goto loc_82B23EA8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B230DC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23ea8
	if (cr6.eq) goto loc_82B23EA8;
	// addi r4,r25,-472
	ctx.r4.s64 = ctx.r25.s64 + -472;
	// bl 0x82d2f098
	ctx.lr = 0x82B230EC;
	sub_82D2F098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23ea8
	if (cr6.eq) goto loc_82B23EA8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82b22388
	ctx.lr = 0x82B23100;
	sub_82B22388(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B23108;
	sub_831156E8(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r17,48(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// bl 0x831a41e0
	ctx.lr = 0x82B23128;
	sub_831A41E0(ctx, base);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831a5098
	ctx.lr = 0x82B23140;
	sub_831A5098(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r23,r11,-1360
	ctx.r23.s64 = ctx.r11.s64 + -1360;
	// lwz r10,120(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// ld r11,-1360(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1360);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b23174
	if (!cr6.eq) goto loc_82B23174;
	// ld r11,112(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 112);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82B23174:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831a3f18
	ctx.lr = 0x82B23188;
	sub_831A3F18(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b231a4
	if (!cr6.eq) goto loc_82B231A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b231cc
	goto loc_82B231CC;
loc_82B231A4:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b231c4
	if (!cr6.eq) goto loc_82B231C4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b231c8
	if (cr6.eq) goto loc_82B231C8;
loc_82B231C4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82B231C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B231CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b231f4
	if (cr6.eq) goto loc_82B231F4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r25,-464
	ctx.r4.s64 = ctx.r25.s64 + -464;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82b231f8
	if (cr6.eq) goto loc_82B231F8;
loc_82B231F4:
	// addi r4,r25,-452
	ctx.r4.s64 = ctx.r25.s64 + -452;
loc_82B231F8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// addi r22,r24,100
	ctx.r22.s64 = ctx.r24.s64 + 100;
	// addi r4,r25,-436
	ctx.r4.s64 = ctx.r25.s64 + -436;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2322C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23274
	if (cr6.eq) goto loc_82B23274;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B23244;
	sub_82D19CD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82b228f8
	ctx.lr = 0x82B23258;
	sub_82B228F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B2326C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x82B23274;
	sub_8387E8E0(ctx, base);
loc_82B23274:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-416
	ctx.r4.s64 = ctx.r25.s64 + -416;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2328C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b232d4
	if (cr6.eq) goto loc_82B232D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B232A4;
	sub_82D19CD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82b228f8
	ctx.lr = 0x82B232B8;
	sub_82B228F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B232CC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x82B232D4;
	sub_8387E8E0(ctx, base);
loc_82B232D4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-396
	ctx.r4.s64 = ctx.r25.s64 + -396;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B232EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2332c
	if (cr6.eq) goto loc_82B2332C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82b22388
	ctx.lr = 0x82B23300;
	sub_82B22388(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b22a08
	ctx.lr = 0x82B23310;
	sub_82B22A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B23324;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2332C;
	sub_8387E8E0(ctx, base);
loc_82B2332C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-380
	ctx.r4.s64 = ctx.r25.s64 + -380;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23358
	if (cr6.eq) goto loc_82B23358;
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
	// bl 0x82d29598
	ctx.lr = 0x82B23358;
	sub_82D29598(ctx, base);
loc_82B23358:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-360
	ctx.r4.s64 = ctx.r25.s64 + -360;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23560
	if (cr6.eq) goto loc_82B23560;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831a29b8
	ctx.lr = 0x82B23384;
	sub_831A29B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r25,-965
	ctx.r4.s64 = ctx.r25.s64 + -965;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B23398;
	sub_837B0C10(ctx, base);
	// addi r31,r19,112
	ctx.r31.s64 = ctx.r19.s64 + 112;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2298
	ctx.lr = 0x82B233A8;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b23524
	if (cr6.eq) goto loc_82B23524;
	// lwz r30,120(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	// cmpwi cr6,r30,98
	cr6.compare<int32_t>(ctx.r30.s32, 98, xer);
	// beq cr6,0x82b23524
	if (cr6.eq) goto loc_82B23524;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// bne cr6,0x82b23524
	if (!cr6.eq) goto loc_82B23524;
	// addis r3,r17,209
	ctx.r3.s64 = ctx.r17.s64 + 13697024;
	// addic. r3,r3,320
	xer.ca = ctx.r3.u32 > 4294966975;
	ctx.r3.s64 = ctx.r3.s64 + 320;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82b23524
	if (cr0.eq) goto loc_82B23524;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82a671c0
	ctx.lr = 0x82B233DC;
	sub_82A671C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23524
	if (cr6.eq) goto loc_82B23524;
	// cmpwi cr6,r30,98
	cr6.compare<int32_t>(ctx.r30.s32, 98, xer);
	// blt cr6,0x82b233f4
	if (cr6.lt) goto loc_82B233F4;
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// b 0x82b23400
	goto loc_82B23400;
loc_82B233F4:
	// addi r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 + 11;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
loc_82B23400:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82B23414;
	sub_8311BF98(ctx, base);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x831235b8
	ctx.lr = 0x82B2342C;
	sub_831235B8(ctx, base);
	// ld r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bne cr6,0x82b23450
	if (!cr6.eq) goto loc_82B23450;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b23478
	goto loc_82B23478;
loc_82B23450:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b23470
	if (!cr6.eq) goto loc_82B23470;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b23474
	if (cr6.eq) goto loc_82B23474;
loc_82B23470:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82B23474:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B23478:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b234dc
	if (cr6.eq) goto loc_82B234DC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,-1312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1312);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b234b4
	if (!cr6.eq) goto loc_82B234B4;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b234b8
	if (cr6.eq) goto loc_82B234B8;
loc_82B234B4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82B234B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b234dc
	if (!cr6.eq) goto loc_82B234DC;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B234CC;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831a7f50
	ctx.lr = 0x82B234D8;
	sub_831A7F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82B234DC:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r28,1000
	cr6.compare<uint32_t>(ctx.r28.u32, 1000, xer);
	// divw r9,r10,r11
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// twllei r11,0
	// divwu r8,r28,r9
	ctx.r8.u32 = PPCDivide(ctx.r28.u32, ctx.r9.u32);
	// twllei r9,0
	// subf r6,r8,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bge cr6,0x82b2350c
	if (!cr6.lt) goto loc_82B2350C;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bgt cr6,0x82b2350c
	if (cr6.gt) goto loc_82B2350C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82B2350C:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,123
	ctx.r4.u64 = ctx.r4.u64 | 123;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82B23520;
	sub_82D042A8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B23524:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b23544
	if (!cr6.eq) goto loc_82B23544;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,406
	ctx.r4.u64 = ctx.r4.u64 | 406;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82B23544;
	sub_82D042A8(ctx, base);
loc_82B23544:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B23558;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B23560;
	sub_8387E8E0(ctx, base);
loc_82B23560:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-336
	ctx.r4.s64 = ctx.r25.s64 + -336;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2357C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23590
	if (cr6.eq) goto loc_82B23590;
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,121
	ctx.r4.u64 = ctx.r4.u64 | 121;
	// bl 0x82d29598
	ctx.lr = 0x82B23590;
	sub_82D29598(ctx, base);
loc_82B23590:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// bne cr6,0x82b235f0
	if (!cr6.eq) goto loc_82B235F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82b22018
	ctx.lr = 0x82B235AC;
	sub_82B22018(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r25,-934
	ctx.r4.s64 = ctx.r25.s64 + -934;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x837b0c10
	ctx.lr = 0x82B235C0;
	sub_837B0C10(ctx, base);
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// li r5,25
	ctx.r5.s64 = 25;
	// ori r4,r4,126
	ctx.r4.u64 = ctx.r4.u64 | 126;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82B235D4;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B235E8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B235F0;
	sub_8387E8E0(ctx, base);
loc_82B235F0:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b236a4
	if (cr6.eq) goto loc_82B236A4;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82B23604:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82b22018
	ctx.lr = 0x82B23614;
	sub_82B22018(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2368c
	if (cr6.eq) goto loc_82B2368C;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831607b8
	ctx.lr = 0x82B23634;
	sub_831607B8(ctx, base);
	// addi r4,r25,-933
	ctx.r4.s64 = ctx.r25.s64 + -933;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B23640;
	sub_837B0C10(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r5,448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b23654
	if (!cr6.lt) goto loc_82B23654;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
loc_82B23654:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,124
	ctx.r4.u64 = ctx.r4.u64 | 124;
	// bl 0x82d042a8
	ctx.lr = 0x82B23668;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B2367C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B23684;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2368C;
	sub_8387E8E0(ctx, base);
loc_82B2368C:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b23604
	if (!cr6.eq) goto loc_82B23604;
loc_82B236A4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r20,15
	ctx.r20.s64 = 15;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r18,2
	ctx.r18.s64 = 2;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b237cc
	if (cr6.eq) goto loc_82B237CC;
loc_82B236C0:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82b236e4
	if (cr6.lt) goto loc_82B236E4;
	// beq cr6,0x82b236dc
	if (cr6.eq) goto loc_82B236DC;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82b237b8
	if (!cr6.lt) goto loc_82B237B8;
	// addi r4,r25,-64
	ctx.r4.s64 = ctx.r25.s64 + -64;
	// b 0x82b236e8
	goto loc_82B236E8;
loc_82B236DC:
	// addi r4,r25,-92
	ctx.r4.s64 = ctx.r25.s64 + -92;
	// b 0x82b236e8
	goto loc_82B236E8;
loc_82B236E4:
	// addi r4,r25,-120
	ctx.r4.s64 = ctx.r25.s64 + -120;
loc_82B236E8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B236FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b237b8
	if (cr6.eq) goto loc_82B237B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x831607b8
	ctx.lr = 0x82B23714;
	sub_831607B8(ctx, base);
	// stw r20,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r20.u32);
	// stw r21,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r21.u32);
	// addi r4,r25,-903
	ctx.r4.s64 = ctx.r25.s64 + -903;
	// stb r21,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r21.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x82B23730;
	sub_8259CC28(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r5,416(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b23744
	if (!cr6.lt) goto loc_82B23744;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
loc_82B23744:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ori r4,r4,125
	ctx.r4.u64 = ctx.r4.u64 | 125;
	// bl 0x82d042a8
	ctx.lr = 0x82B23754;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B23768;
	sub_82D291E0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b23784
	if (cr6.lt) goto loc_82B23784;
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82B23784;
	sub_825952B8(ctx, base);
loc_82B23784:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// stw r20,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r20.u32);
	// stw r21,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r21.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r21,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r21.u8);
	// blt cr6,0x82b237ac
	if (cr6.lt) goto loc_82B237AC;
	// stw r18,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82B237AC;
	sub_825952B8(ctx, base);
loc_82B237AC:
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r20.u32);
	// stw r21,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r21.u32);
	// stb r21,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r21.u8);
loc_82B237B8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b236c0
	if (!cr6.eq) goto loc_82B236C0;
loc_82B237CC:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82b237f0
	if (cr6.lt) goto loc_82B237F0;
	// beq cr6,0x82b237e8
	if (cr6.eq) goto loc_82B237E8;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82b23874
	if (!cr6.lt) goto loc_82B23874;
	// addi r4,r25,-64
	ctx.r4.s64 = ctx.r25.s64 + -64;
	// b 0x82b237f4
	goto loc_82B237F4;
loc_82B237E8:
	// addi r4,r25,-92
	ctx.r4.s64 = ctx.r25.s64 + -92;
	// b 0x82b237f4
	goto loc_82B237F4;
loc_82B237F0:
	// addi r4,r25,-120
	ctx.r4.s64 = ctx.r25.s64 + -120;
loc_82B237F4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23874
	if (cr6.eq) goto loc_82B23874;
	// stw r20,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r20.u32);
	// addi r4,r25,-902
	ctx.r4.s64 = ctx.r25.s64 + -902;
	// stw r21,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r21,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r21.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8259cc28
	ctx.lr = 0x82B23830;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B23844;
	sub_82D291E0(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b23864
	if (cr6.lt) goto loc_82B23864;
	// stw r18,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r18.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x82B23864;
	sub_825952B8(ctx, base);
loc_82B23864:
	// stw r20,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r20.u32);
	// stw r21,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r21.u32);
	// stb r21,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r21.u8);
	// b 0x82b237cc
	goto loc_82B237CC;
loc_82B23874:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-312
	ctx.r4.s64 = ctx.r25.s64 + -312;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2388C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b238a0
	if (cr6.eq) goto loc_82B238A0;
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,122
	ctx.r4.u64 = ctx.r4.u64 | 122;
	// bl 0x82d29598
	ctx.lr = 0x82B238A0;
	sub_82D29598(ctx, base);
loc_82B238A0:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82B238A4:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x82b23948
	if (cr6.gt) goto loc_82B23948;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b238c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B238C8;
	// bdzf 4*cr6+eq,0x82b238d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B238D0;
	// bne cr6,0x82b238d8
	if (!cr6.eq) goto loc_82B238D8;
	// addi r4,r25,-36
	ctx.r4.s64 = ctx.r25.s64 + -36;
	// b 0x82b238dc
	goto loc_82B238DC;
loc_82B238C8:
	// addi r4,r25,-24
	ctx.r4.s64 = ctx.r25.s64 + -24;
	// b 0x82b238dc
	goto loc_82B238DC;
loc_82B238D0:
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// b 0x82b238dc
	goto loc_82B238DC;
loc_82B238D8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82B238DC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B238E4;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23948
	if (cr6.eq) goto loc_82B23948;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-300
	ctx.r4.s64 = ctx.r25.s64 + -300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2391c
	if (cr6.eq) goto loc_82B2391C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B2391C;
	sub_82D2AEC8(ctx, base);
loc_82B2391C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-284
	ctx.r4.s64 = ctx.r25.s64 + -284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23948
	if (cr6.eq) goto loc_82B23948;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23948;
	sub_82D2AEC8(ctx, base);
loc_82B23948:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x82b238a4
	if (cr6.lt) goto loc_82B238A4;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-272
	ctx.r4.s64 = ctx.r25.s64 + -272;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2396C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23980
	if (cr6.eq) goto loc_82B23980;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23980;
	sub_82D2AEC8(ctx, base);
loc_82B23980:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b239a4
	if (!cr6.eq) goto loc_82B239A4;
	// lwz r11,116(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b239cc
	goto loc_82B239CC;
loc_82B239A4:
	// lhz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// lhz r8,112(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 112);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b239c4
	if (!cr6.eq) goto loc_82B239C4;
	// lwz r10,116(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b239c8
	if (cr6.eq) goto loc_82B239C8;
loc_82B239C4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82B239C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B239CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b239ec
	if (!cr6.eq) goto loc_82B239EC;
	// lwz r11,120(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82b239ec
	if (!cr6.eq) goto loc_82B239EC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82B239EC:
	// clrlwi r23,r9,24
	ctx.r23.u64 = ctx.r9.u32 & 0xFF;
	// li r24,12
	ctx.r24.s64 = 12;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82b23b60
	if (cr6.eq) goto loc_82B23B60;
	// addi r4,r25,-36
	ctx.r4.s64 = ctx.r25.s64 + -36;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B23A08;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23b60
	if (cr6.eq) goto loc_82B23B60;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ld r4,112(r19)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r19.u32 + 112);
	// bl 0x8311bf98
	ctx.lr = 0x82B23A20;
	sub_8311BF98(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r25,-264
	ctx.r4.s64 = ctx.r25.s64 + -264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23A40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23a78
	if (cr6.eq) goto loc_82B23A78;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23A58;
	sub_82D2AEC8(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82B23A6C;
	sub_83120738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82B23A78;
	sub_82D39310(ctx, base);
loc_82B23A78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-248
	ctx.r4.s64 = ctx.r25.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23b5c
	if (cr6.eq) goto loc_82B23B5C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23AA8;
	sub_82D2AEC8(ctx, base);
	// stw r20,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// stb r21,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r21.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r4,r4,132
	ctx.r4.u64 = ctx.r4.u64 | 132;
	// bl 0x82d042a8
	ctx.lr = 0x82B23AC4;
	sub_82D042A8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r20,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r20.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r21,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r21.u32);
	// stb r21,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r21.u8);
	// bge cr6,0x82b23ae4
	if (!cr6.lt) goto loc_82B23AE4;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
loc_82B23AE4:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r5,r29,56
	ctx.r5.s64 = ctx.r29.s64 + 56;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d042a8
	ctx.lr = 0x82B23AF8;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B23B0C;
	sub_82D291E0(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b23b28
	if (cr6.lt) goto loc_82B23B28;
	// stw r18,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r18.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x82B23B28;
	sub_825952B8(ctx, base);
loc_82B23B28:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r20,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r20.u32);
	// stw r21,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r21.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r21,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r21.u8);
	// blt cr6,0x82b23b50
	if (cr6.lt) goto loc_82B23B50;
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B23B50;
	sub_825952B8(ctx, base);
loc_82B23B50:
	// stw r20,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// stb r21,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r21.u8);
loc_82B23B5C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82B23B60:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82b23b70
	if (cr6.eq) goto loc_82B23B70;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82B23B70:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// add r26,r9,r8
	ctx.r26.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82b23dcc
	if (cr6.eq) goto loc_82B23DCC;
loc_82B23B90:
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bgt cr6,0x82b23d0c
	if (cr6.gt) goto loc_82B23D0C;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b23bb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B23BB4;
	// bdzf 4*cr6+eq,0x82b23bbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B23BBC;
	// bne cr6,0x82b23bc4
	if (!cr6.eq) goto loc_82B23BC4;
	// addi r4,r25,-36
	ctx.r4.s64 = ctx.r25.s64 + -36;
	// b 0x82b23bc8
	goto loc_82B23BC8;
loc_82B23BB4:
	// addi r4,r25,-24
	ctx.r4.s64 = ctx.r25.s64 + -24;
	// b 0x82b23bc8
	goto loc_82B23BC8;
loc_82B23BBC:
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// b 0x82b23bc8
	goto loc_82B23BC8;
loc_82B23BC4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82B23BC8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B23BD0;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23d0c
	if (cr6.eq) goto loc_82B23D0C;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// beq cr6,0x82b23bec
	if (cr6.eq) goto loc_82B23BEC;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bge cr6,0x82b23d0c
	if (!cr6.lt) goto loc_82B23D0C;
loc_82B23BEC:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82B23BF8;
	sub_8311BF98(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r25,-228
	ctx.r4.s64 = ctx.r25.s64 + -228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23C18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23c50
	if (cr6.eq) goto loc_82B23C50;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23C30;
	sub_82D2AEC8(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82B23C44;
	sub_83120738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82B23C50;
	sub_82D39310(ctx, base);
loc_82B23C50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-212
	ctx.r4.s64 = ctx.r25.s64 + -212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23C68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23cf4
	if (cr6.eq) goto loc_82B23CF4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23C80;
	sub_82D2AEC8(ctx, base);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// stw r20,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r20.u32);
	// stw r21,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r21.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r21,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r21.u8);
loc_82B23C94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b23c94
	if (!cr6.eq) goto loc_82B23C94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B23CB8;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B23CCC;
	sub_82D291E0(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b23ce8
	if (cr6.lt) goto loc_82B23CE8;
	// stw r18,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82B23CE8;
	sub_825952B8(ctx, base);
loc_82B23CE8:
	// stw r20,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r20.u32);
	// stw r21,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r21.u32);
	// stb r21,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r21.u8);
loc_82B23CF4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b23b90
	if (!cr6.eq) goto loc_82B23B90;
	// b 0x82b23dcc
	goto loc_82B23DCC;
loc_82B23D0C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-236
	ctx.r4.s64 = ctx.r25.s64 + -236;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B23D24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23dcc
	if (cr6.eq) goto loc_82B23DCC;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// ble cr6,0x82b23dc4
	if (!cr6.gt) goto loc_82B23DC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23D44;
	sub_82D2AEC8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82b23d54
	if (cr6.eq) goto loc_82B23D54;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82B23D54:
	// stw r20,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// stw r21,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r21.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r21,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r21.u8);
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// bl 0x82d042a8
	ctx.lr = 0x82B23D84;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B23D98;
	sub_82D291E0(ctx, base);
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82b23db4
	if (cr6.lt) goto loc_82B23DB4;
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82B23DB4;
	sub_825952B8(ctx, base);
loc_82B23DB4:
	// stw r20,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// stw r21,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r21.u32);
	// stb r21,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r21.u8);
	// b 0x82b23dcc
	goto loc_82B23DCC;
loc_82B23DC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23DCC;
	sub_82D2AEC8(ctx, base);
loc_82B23DCC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82b23e2c
	if (!cr6.eq) goto loc_82B23E2C;
	// addi r4,r25,-200
	ctx.r4.s64 = ctx.r25.s64 + -200;
	// bctrl 
	ctx.lr = 0x82B23DEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23e14
	if (cr6.eq) goto loc_82B23E14;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23E04;
	sub_82D2AEC8(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,159
	ctx.r4.u64 = ctx.r4.u64 | 159;
	// bl 0x82d29598
	ctx.lr = 0x82B23E14;
	sub_82D29598(ctx, base);
loc_82B23E14:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r25,-184
	ctx.r4.s64 = ctx.r25.s64 + -184;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82b23e30
	goto loc_82B23E30;
loc_82B23E2C:
	// addi r4,r25,-176
	ctx.r4.s64 = ctx.r25.s64 + -176;
loc_82B23E30:
	// bctrl 
	ctx.lr = 0x82B23E34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b23e48
	if (cr6.eq) goto loc_82B23E48;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B23E48;
	sub_82D2AEC8(ctx, base);
loc_82B23E48:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b23e60
	if (cr6.eq) goto loc_82B23E60;
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r18.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825952b8
	ctx.lr = 0x82B23E60;
	sub_825952B8(ctx, base);
loc_82B23E60:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// beq cr6,0x82b23e84
	if (cr6.eq) goto loc_82B23E84;
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825952b8
	ctx.lr = 0x82B23E84;
	sub_825952B8(ctx, base);
loc_82B23E84:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// beq cr6,0x82b23ea8
	if (cr6.eq) goto loc_82B23EA8;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x825952b8
	ctx.lr = 0x82B23EA8;
	sub_825952B8(ctx, base);
loc_82B23EA8:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B23EB0"))) PPC_WEAK_FUNC(sub_82B23EB0);
PPC_FUNC_IMPL(__imp__sub_82B23EB0) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b23f6c
	if (cr6.eq) goto loc_82B23F6C;
	// bl 0x82d17d90
	ctx.lr = 0x82B23ED8;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b23f60
	if (!cr6.eq) goto loc_82B23F60;
	// bl 0x831156e8
	ctx.lr = 0x82B23EE4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,98
	ctx.r6.s64 = 98;
	// addis r7,r11,209
	ctx.r7.s64 = ctx.r11.s64 + 13697024;
	// addic. r7,r7,320
	xer.ca = ctx.r7.u32 > 4294966975;
	ctx.r7.s64 = ctx.r7.s64 + 320;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b23f44
	if (cr0.eq) goto loc_82B23F44;
	// li r11,50
	ctx.r11.s64 = 50;
	// addis r8,r7,5
	ctx.r8.s64 = ctx.r7.s64 + 327680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,-27668
	ctx.r8.s64 = ctx.r8.s64 + -27668;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82B23F10:
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b23f20
	if (!cr6.lt) goto loc_82B23F20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B23F20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b23f2c
	if (cr6.eq) goto loc_82B23F2C;
	// stw r6,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r6.u32);
loc_82B23F2C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// bdnz 0x82b23f10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B23F10;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,10540
	ctx.r10.u64 = ctx.r11.u64 | 10540;
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
loc_82B23F44:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r11,-1360(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1360);
	// stw r6,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r6.u32);
	// std r11,112(r30)
	PPC_STORE_U64(ctx.r30.u32 + 112, ctx.r11.u64);
	// bl 0x82b23080
	ctx.lr = 0x82B23F60;
	sub_82B23080(ctx, base);
loc_82B23F60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// b 0x82b24040
	goto loc_82B24040;
loc_82B23F6C:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b23f98
	if (cr6.eq) goto loc_82B23F98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,26332
	ctx.r5.s64 = ctx.r11.s64 + 26332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B23F8C;
	sub_82D20DA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// b 0x82b24040
	goto loc_82B24040;
loc_82B23F98:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b23fd8
	if (cr6.eq) goto loc_82B23FD8;
	// bl 0x831156e8
	ctx.lr = 0x82B23FA8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r11,209
	ctx.r31.s64 = ctx.r11.s64 + 13697024;
	// addic. r31,r31,320
	xer.ca = ctx.r31.u32 > 4294966975;
	ctx.r31.s64 = ctx.r31.s64 + 320;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x82b23fcc
	if (cr0.eq) goto loc_82B23FCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22298
	ctx.lr = 0x82B23FC0;
	sub_82B22298(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,10540
	ctx.r10.u64 = ctx.r11.u64 | 10540;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
loc_82B23FCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// b 0x82b24040
	goto loc_82B24040;
loc_82B23FD8:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b24040
	if (cr6.eq) goto loc_82B24040;
	// bl 0x82d17d90
	ctx.lr = 0x82B23FE8;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b24010
	if (!cr6.eq) goto loc_82B24010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22388
	ctx.lr = 0x82B23FF8;
	sub_82B22388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,98
	cr6.compare<int32_t>(ctx.r3.s32, 98, xer);
	// beq cr6,0x82b24038
	if (cr6.eq) goto loc_82B24038;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22748
	ctx.lr = 0x82B2400C;
	sub_82B22748(ctx, base);
	// b 0x82b24038
	goto loc_82B24038;
loc_82B24010:
	// bl 0x831156e8
	ctx.lr = 0x82B24014;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r11,209
	ctx.r31.s64 = ctx.r11.s64 + 13697024;
	// addic. r31,r31,320
	xer.ca = ctx.r31.u32 > 4294966975;
	ctx.r31.s64 = ctx.r31.s64 + 320;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x82b24038
	if (cr0.eq) goto loc_82B24038;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22298
	ctx.lr = 0x82B2402C;
	sub_82B22298(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,10540
	ctx.r10.u64 = ctx.r11.u64 | 10540;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
loc_82B24038:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_82B24040:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b22090
	ctx.lr = 0x82B24048;
	sub_82B22090(ctx, base);
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

__attribute__((alias("__imp__sub_82B24060"))) PPC_WEAK_FUNC(sub_82B24060);
PPC_FUNC_IMPL(__imp__sub_82B24060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x82b23080
	sub_82B23080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2406C"))) PPC_WEAK_FUNC(sub_82B2406C);
PPC_FUNC_IMPL(__imp__sub_82B2406C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B24070"))) PPC_WEAK_FUNC(sub_82B24070);
PPC_FUNC_IMPL(__imp__sub_82B24070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B24078;
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
	// bl 0x8308e078
	ctx.lr = 0x82B2408C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B240A4;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r8,r11,28984
	ctx.r8.s64 = ctx.r11.s64 + 28984;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,-1264
	ctx.r30.s64 = ctx.r5.s64 + -1264;
	// lwz r4,-1264(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -1264);
	// ld r11,-1028(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -1028);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// bl 0x82d20ae0
	ctx.lr = 0x82B240E4;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B240F4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B24100"))) PPC_WEAK_FUNC(sub_82B24100);
PPC_FUNC_IMPL(__imp__sub_82B24100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B24108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b2414c
	if (!cr6.eq) goto loc_82B2414C;
	// cmplwi cr6,r5,18
	cr6.compare<uint32_t>(ctx.r5.u32, 18, xer);
	// blt cr6,0x82b24130
	if (cr6.lt) goto loc_82B24130;
	// addi r31,r31,-18
	ctx.r31.s64 = ctx.r31.s64 + -18;
loc_82B24130:
	// li r5,6
	ctx.r5.s64 = 6;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82b2415c
	if (cr6.lt) goto loc_82B2415C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// b 0x82b2415c
	goto loc_82B2415C;
loc_82B2414C:
	// li r5,19
	ctx.r5.s64 = 19;
	// subfc r11,r5,r31
	xer.ca = ctx.r31.u32 >= ctx.r5.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ctx.r31.u64;
loc_82B2415C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B24170;
	sub_82D20F50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B24190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B24198"))) PPC_WEAK_FUNC(sub_82B24198);
PPC_FUNC_IMPL(__imp__sub_82B24198) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,28984
	ctx.r9.s64 = ctx.r11.s64 + 28984;
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
	ctx.lr = 0x82B241D0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b241e8
	if (cr6.eq) goto loc_82B241E8;
	// bl 0x82416268
	ctx.lr = 0x82B241E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B241E8:
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

__attribute__((alias("__imp__sub_82B24200"))) PPC_WEAK_FUNC(sub_82B24200);
PPC_FUNC_IMPL(__imp__sub_82B24200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b24220
	if (!cr6.eq) goto loc_82B24220;
	// li r11,19
	ctx.r11.s64 = 19;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x82b24240
	goto loc_82B24240;
loc_82B24220:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b2423c
	if (!cr6.eq) goto loc_82B2423C;
	// li r11,6
	ctx.r11.s64 = 6;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x82b24240
	goto loc_82B24240;
loc_82B2423C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B24240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b24278
	if (cr6.eq) goto loc_82B24278;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b24264
	if (!cr6.eq) goto loc_82B24264;
	// cmplwi cr6,r4,18
	cr6.compare<uint32_t>(ctx.r4.u32, 18, xer);
	// beq cr6,0x82b24278
	if (cr6.eq) goto loc_82B24278;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82b24270
	goto loc_82B24270;
loc_82B24264:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b24278
	if (!cr6.eq) goto loc_82B24278;
	// addi r3,r4,18
	ctx.r3.s64 = ctx.r4.s64 + 18;
loc_82B24270:
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_82B24278:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B24280"))) PPC_WEAK_FUNC(sub_82B24280);
PPC_FUNC_IMPL(__imp__sub_82B24280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B24288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82B2429C:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82b24320
	if (cr6.eq) goto loc_82B24320;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82b2429c
	if (cr6.lt) goto loc_82B2429C;
loc_82B242B0:
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B242BC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-1248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1248);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B242D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b242ec
	if (cr6.eq) goto loc_82B242EC;
	// lis r4,22
	ctx.r4.s64 = 1441792;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
loc_82B242E8:
	// bl 0x82d29598
	ctx.lr = 0x82B242EC;
	sub_82D29598(ctx, base);
loc_82B242EC:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b2436c
	if (!cr6.eq) goto loc_82B2436C;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82b24304
	if (cr6.lt) goto loc_82B24304;
	// addi r31,r31,-18
	ctx.r31.s64 = ctx.r31.s64 + -18;
loc_82B24304:
	// li r5,6
	ctx.r5.s64 = 6;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82b2437c
	if (cr6.lt) goto loc_82B2437C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// b 0x82b2437c
	goto loc_82B2437C;
loc_82B24320:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82b242b0
	if (cr6.lt) goto loc_82B242B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82B2433C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-1248(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1248);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B24358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b242ec
	if (cr6.eq) goto loc_82B242EC;
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// b 0x82b242e8
	goto loc_82B242E8;
loc_82B2436C:
	// li r5,19
	ctx.r5.s64 = 19;
	// subfc r11,r5,r31
	xer.ca = ctx.r31.u32 >= ctx.r5.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ctx.r31.u64;
loc_82B2437C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B24390;
	sub_82D20F50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B243B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B243B8"))) PPC_WEAK_FUNC(sub_82B243B8);
PPC_FUNC_IMPL(__imp__sub_82B243B8) {
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
	// blt cr6,0x82b243e0
	if (cr6.lt) goto loc_82B243E0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b243e4
	goto loc_82B243E4;
loc_82B243E0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B243E4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B24400;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24418
	if (cr6.eq) goto loc_82B24418;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b24070
	ctx.lr = 0x82B24414;
	sub_82B24070(ctx, base);
	// b 0x82b2441c
	goto loc_82B2441C;
loc_82B24418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2441C:
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

__attribute__((alias("__imp__sub_82B24434"))) PPC_WEAK_FUNC(sub_82B24434);
PPC_FUNC_IMPL(__imp__sub_82B24434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B24438"))) PPC_WEAK_FUNC(sub_82B24438);
PPC_FUNC_IMPL(__imp__sub_82B24438) {
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
	ctx.lr = 0x82B24440;
	__savegprlr_18(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B24450;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r30,r3,209
	ctx.r30.s64 = ctx.r3.s64 + 13697024;
	// addic. r30,r30,320
	xer.ca = ctx.r30.u32 > 4294966975;
	ctx.r30.s64 = ctx.r30.s64 + 320;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82b24858
	if (cr0.eq) goto loc_82B24858;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b24488
	if (!cr6.eq) goto loc_82B24488;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b244b0
	goto loc_82B244B0;
loc_82B24488:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b244a8
	if (!cr6.eq) goto loc_82B244A8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b244ac
	if (cr6.eq) goto loc_82B244AC;
loc_82B244A8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82B244AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B244B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b24858
	if (!cr6.eq) goto loc_82B24858;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x82B244C4;
	sub_8311BF98(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a671c0
	ctx.lr = 0x82B244D4;
	sub_82A671C0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B244E4;
	sub_82D19CD0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b24504
	if (!cr6.eq) goto loc_82B24504;
	// li r11,19
	ctx.r11.s64 = 19;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x82b24524
	goto loc_82B24524;
loc_82B24504:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b24520
	if (!cr6.eq) goto loc_82B24520;
	// li r11,6
	ctx.r11.s64 = 6;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x82b24524
	goto loc_82B24524;
loc_82B24520:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82B24524:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b24858
	if (cr6.eq) goto loc_82B24858;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B2453C;
	sub_82D19CD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b24200
	ctx.lr = 0x82B24548;
	sub_82B24200(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B24554;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24858
	if (cr6.eq) goto loc_82B24858;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r25,r11,-1064
	ctx.r25.s64 = ctx.r11.s64 + -1064;
	// lwz r4,-192(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -192);
	// bl 0x82d2f098
	ctx.lr = 0x82B2456C;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24858
	if (cr6.eq) goto loc_82B24858;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r23,r3,100
	ctx.r23.s64 = ctx.r3.s64 + 100;
	// lwz r4,-172(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -172);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B24590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b245a4
	if (cr6.eq) goto loc_82B245A4;
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x82d29598
	ctx.lr = 0x82B245A4;
	sub_82D29598(ctx, base);
loc_82B245A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// bl 0x82dad028
	ctx.lr = 0x82B245B0;
	sub_82DAD028(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24858
	if (cr6.eq) goto loc_82B24858;
	// addi r21,r25,-152
	ctx.r21.s64 = ctx.r25.s64 + -152;
loc_82B245BC:
	// cmplwi cr6,r24,34
	cr6.compare<uint32_t>(ctx.r24.u32, 34, xer);
	// bge cr6,0x82b24840
	if (!cr6.lt) goto loc_82B24840;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82d2e228
	ctx.lr = 0x82B245D0;
	sub_82D2E228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24840
	if (cr6.eq) goto loc_82B24840;
	// cmplwi cr6,r24,27
	cr6.compare<uint32_t>(ctx.r24.u32, 27, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// blt cr6,0x82b245f4
	if (cr6.lt) goto loc_82B245F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B245F0;
	sub_82D2AEC8(ctx, base);
	// b 0x82b24840
	goto loc_82B24840;
loc_82B245F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B245FC;
	sub_82D2AEC8(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83123650
	ctx.lr = 0x82B24608;
	sub_83123650(ctx, base);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83120738
	ctx.lr = 0x82B24620;
	sub_83120738(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r11,-23
	ctx.r11.s64 = ctx.r11.s64 + -23;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b24660
	if (cr6.gt) goto loc_82B24660;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b24648
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B24648;
	// bdzf 4*cr6+eq,0x82b24650
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B24650;
	// bne cr6,0x82b24658
	if (!cr6.eq) goto loc_82B24658;
loc_82B24648:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82b24668
	goto loc_82B24668;
loc_82B24650:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82b24668
	goto loc_82B24668;
loc_82B24658:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x82b24668
	goto loc_82B24668;
loc_82B24660:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82B24668:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// lwz r4,-168(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B24684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b246ac
	if (cr6.eq) goto loc_82B246AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d45d08
	ctx.lr = 0x82B24698;
	sub_82D45D08(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82d45d88
	ctx.lr = 0x82B246AC;
	sub_82D45D88(ctx, base);
loc_82B246AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-164(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -164);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B246C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b246f8
	if (cr6.eq) goto loc_82B246F8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83160958
	ctx.lr = 0x82B246DC;
	sub_83160958(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B246F0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B246F8;
	sub_8387E8E0(ctx, base);
loc_82B246F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-160(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -160);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B24710;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24794
	if (cr6.eq) goto loc_82B24794;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// beq cr6,0x82b24784
	if (cr6.eq) goto loc_82B24784;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x82b24784
	if (cr6.eq) goto loc_82B24784;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// beq cr6,0x82b24784
	if (cr6.eq) goto loc_82B24784;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// beq cr6,0x82b24784
	if (cr6.eq) goto loc_82B24784;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82b24794
	if (cr6.eq) goto loc_82B24794;
	// cmpwi cr6,r26,98
	cr6.compare<int32_t>(ctx.r26.s32, 98, xer);
	// blt cr6,0x82b24764
	if (cr6.lt) goto loc_82B24764;
	// lhz r11,22(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 22);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,999
	ctx.r4.s64 = 999;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x82d3d3b0
	ctx.lr = 0x82B24760;
	sub_82D3D3B0(ctx, base);
	// b 0x82b24790
	goto loc_82B24790;
loc_82B24764:
	// addi r11,r26,11
	ctx.r11.s64 = ctx.r26.s64 + 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,999
	ctx.r4.s64 = 999;
	// lhzx r11,r10,r18
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r18.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x82d3d3b0
	ctx.lr = 0x82B24780;
	sub_82D3D3B0(ctx, base);
	// b 0x82b24790
	goto loc_82B24790;
loc_82B24784:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B24790;
	sub_82D2AEC8(ctx, base);
loc_82B24790:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B24794:
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83123650
	ctx.lr = 0x82B247A0;
	sub_83123650(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// ld r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 44);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x831a2688
	ctx.lr = 0x82B247C4;
	sub_831A2688(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b24814
	if (cr6.eq) goto loc_82B24814;
	// cmpwi cr6,r3,200
	cr6.compare<int32_t>(ctx.r3.s32, 200, xer);
	// bgt cr6,0x82b24804
	if (cr6.gt) goto loc_82B24804;
	// beq cr6,0x82b247fc
	if (cr6.eq) goto loc_82B247FC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b247f4
	if (cr6.eq) goto loc_82B247F4;
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// bne cr6,0x82b24814
	if (!cr6.eq) goto loc_82B24814;
	// lwz r4,-12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// b 0x82b24828
	goto loc_82B24828;
loc_82B247F4:
	// lwz r4,-16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16);
	// b 0x82b24828
	goto loc_82B24828;
loc_82B247FC:
	// lwz r4,-8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// b 0x82b24828
	goto loc_82B24828;
loc_82B24804:
	// cmpwi cr6,r3,300
	cr6.compare<int32_t>(ctx.r3.s32, 300, xer);
	// beq cr6,0x82b24824
	if (cr6.eq) goto loc_82B24824;
	// cmpwi cr6,r3,500
	cr6.compare<int32_t>(ctx.r3.s32, 500, xer);
	// beq cr6,0x82b2481c
	if (cr6.eq) goto loc_82B2481C;
loc_82B24814:
	// lwz r4,-156(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -156);
	// b 0x82b24828
	goto loc_82B24828;
loc_82B2481C:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82b24828
	goto loc_82B24828;
loc_82B24824:
	// lwz r4,-4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
loc_82B24828:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B24840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B24840:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// bl 0x82dad028
	ctx.lr = 0x82B24850;
	sub_82DAD028(ctx, base);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b245bc
	if (cr6.lt) goto loc_82B245BC;
loc_82B24858:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B24860"))) PPC_WEAK_FUNC(sub_82B24860);
PPC_FUNC_IMPL(__imp__sub_82B24860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B24868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B24878;
	sub_82D19CD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b24200
	ctx.lr = 0x82B24884;
	sub_82B24200(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// beq cr6,0x82b24938
	if (cr6.eq) goto loc_82B24938;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831a2898
	ctx.lr = 0x82B248A0;
	sub_831A2898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b24930
	if (cr6.eq) goto loc_82B24930;
	// bl 0x831156e8
	ctx.lr = 0x82B248B0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r29,r11,209
	ctx.r29.s64 = ctx.r11.s64 + 13697024;
	// addic. r29,r29,320
	xer.ca = ctx.r29.u32 > 4294966975;
	ctx.r29.s64 = ctx.r29.s64 + 320;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82b2491c
	if (cr0.eq) goto loc_82B2491C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82ad3b08
	ctx.lr = 0x82B248CC;
	sub_82AD3B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b248f0
	if (cr6.eq) goto loc_82B248F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82a671c0
	ctx.lr = 0x82B248E4;
	sub_82A671C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b248f0
	if (cr6.eq) goto loc_82B248F0;
	// stw r28,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r28.u32);
loc_82B248F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82ad3cf8
	ctx.lr = 0x82B248FC;
	sub_82AD3CF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2491c
	if (cr6.eq) goto loc_82B2491C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82ad3bf8
	ctx.lr = 0x82B24914;
	sub_82AD3BF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831a5d80
	ctx.lr = 0x82B2491C;
	sub_831A5D80(ctx, base);
loc_82B2491C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,28884
	ctx.r5.s64 = ctx.r11.s64 + 28884;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d20da8
	ctx.lr = 0x82B24930;
	sub_82D20DA8(ctx, base);
loc_82B24930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B24938:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b249a8
	if (!cr6.eq) goto loc_82B249A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b24100
	ctx.lr = 0x82B2495C;
	sub_82B24100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B24964;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-1248(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1248);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B24980;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24994
	if (cr6.eq) goto loc_82B24994;
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// bl 0x82d29598
	ctx.lr = 0x82B24994;
	sub_82D29598(ctx, base);
loc_82B24994:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b24438
	ctx.lr = 0x82B249A0;
	sub_82B24438(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B249A8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,28884
	ctx.r11.s64 = ctx.r11.s64 + 28884;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B249BC;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B249C4"))) PPC_WEAK_FUNC(sub_82B249C4);
PPC_FUNC_IMPL(__imp__sub_82B249C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B249C8"))) PPC_WEAK_FUNC(sub_82B249C8);
PPC_FUNC_IMPL(__imp__sub_82B249C8) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b24a7c
	if (!cr6.eq) goto loc_82B24A7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20f50
	ctx.lr = 0x82B24A04;
	sub_82D20F50(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B24A24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B24A2C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-1248(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1248);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B24A48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24a5c
	if (cr6.eq) goto loc_82B24A5C;
	// lis r4,22
	ctx.r4.s64 = 1441792;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x82d29598
	ctx.lr = 0x82B24A5C;
	sub_82D29598(ctx, base);
loc_82B24A5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b24438
	ctx.lr = 0x82B24A68;
	sub_82B24438(ctx, base);
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
loc_82B24A7C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,28892
	ctx.r5.s64 = ctx.r11.s64 + 28892;
	// bl 0x82d20da8
	ctx.lr = 0x82B24A8C;
	sub_82D20DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82B24AA0"))) PPC_WEAK_FUNC(sub_82B24AA0);
PPC_FUNC_IMPL(__imp__sub_82B24AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x82b24438
	sub_82B24438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B24AAC"))) PPC_WEAK_FUNC(sub_82B24AAC);
PPC_FUNC_IMPL(__imp__sub_82B24AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B24AB0"))) PPC_WEAK_FUNC(sub_82B24AB0);
PPC_FUNC_IMPL(__imp__sub_82B24AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B24AB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r28,r11,28852
	ctx.r28.s64 = ctx.r11.s64 + 28852;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,-1178
	ctx.r4.s64 = ctx.r28.s64 + -1178;
	// bl 0x8259cc28
	ctx.lr = 0x82B24AF4;
	sub_8259CC28(ctx, base);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b24b14
	if (!cr6.eq) goto loc_82B24B14;
	// li r10,19
	ctx.r10.s64 = 19;
	// subfc r9,r10,r29
	xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// b 0x82b24b34
	goto loc_82B24B34;
loc_82B24B14:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b24b30
	if (!cr6.eq) goto loc_82B24B30;
	// li r10,6
	ctx.r10.s64 = 6;
	// subfc r9,r10,r29
	xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// b 0x82b24b34
	goto loc_82B24B34;
loc_82B24B30:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82B24B34:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b24b8c
	if (!cr6.eq) goto loc_82B24B8C;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B24B60;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b24bfc
	if (cr6.lt) goto loc_82B24BFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B24B80;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B24B8C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b24ba4
	if (!cr6.eq) goto loc_82B24BA4;
	// addi r11,r28,-76
	ctx.r11.s64 = ctx.r28.s64 + -76;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82b24bb4
	goto loc_82B24BB4;
loc_82B24BA4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b24bbc
	if (!cr6.eq) goto loc_82B24BBC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
loc_82B24BB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B24BBC;
	sub_82D042A8(ctx, base);
loc_82B24BBC:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B24BDC;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b24bfc
	if (cr6.lt) goto loc_82B24BFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B24BFC;
	sub_825952B8(ctx, base);
loc_82B24BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B24C08"))) PPC_WEAK_FUNC(sub_82B24C08);
PPC_FUNC_IMPL(__imp__sub_82B24C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B24C10;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B24C1C;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d17d90
	ctx.lr = 0x82B24C24;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,21097
	cr6.compare<uint32_t>(ctx.r3.u32, 21097, xer);
	// blt cr6,0x82b24c38
	if (cr6.lt) goto loc_82B24C38;
	// addis r31,r26,237
	ctx.r31.s64 = ctx.r26.s64 + 15532032;
	// addi r31,r31,13856
	ctx.r31.s64 = ctx.r31.s64 + 13856;
	// b 0x82b24c40
	goto loc_82B24C40;
loc_82B24C38:
	// mulli r11,r3,224
	ctx.r11.s64 = ctx.r3.s64 * 224;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_82B24C40:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r10.u32);
	// bl 0x831235b8
	ctx.lr = 0x82B24C68;
	sub_831235B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B24C70;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,-1252
	ctx.r30.s64 = ctx.r11.s64 + -1252;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B24C90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24ca4
	if (cr6.eq) goto loc_82B24CA4;
	// lis r4,22
	ctx.r4.s64 = 1441792;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x82d29598
	ctx.lr = 0x82B24CA4;
	sub_82D29598(ctx, base);
loc_82B24CA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B24CAC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B24CC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24d20
	if (cr6.eq) goto loc_82B24D20;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B24CDC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B24CF0;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b24d10
	if (cr6.lt) goto loc_82B24D10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B24D10;
	sub_825952B8(ctx, base);
loc_82B24D10:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82B24D20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B24D28;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B24D40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24df8
	if (cr6.eq) goto loc_82B24DF8;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -980);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b24d80
	if (!cr6.eq) goto loc_82B24D80;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b24d84
	if (cr6.eq) goto loc_82B24D84;
loc_82B24D80:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B24D84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b24df8
	if (!cr6.eq) goto loc_82B24DF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B24D98;
	sub_8311C148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30450
	ctx.lr = 0x82B24DA8;
	sub_82D30450(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b24dd8
	if (!cr6.eq) goto loc_82B24DD8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82b24dd4
	if (cr6.eq) goto loc_82B24DD4;
	// stb r29,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r29.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82B24DD4:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_82B24DD8:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B24DE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a990c8
	ctx.lr = 0x82B24DF0;
	sub_82A990C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B24DF8;
	sub_8387E8E0(ctx, base);
loc_82B24DF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B24E08;
	sub_82D19788(ctx, base);
	// li r4,242
	ctx.r4.s64 = 242;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82B24E14;
	sub_82D1A998(ctx, base);
	// li r30,24
	ctx.r30.s64 = 24;
	// bl 0x831156e8
	ctx.lr = 0x82B24E1C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r11,209
	ctx.r31.s64 = ctx.r11.s64 + 13697024;
	// addic. r31,r31,320
	xer.ca = ctx.r31.u32 > 4294966975;
	ctx.r31.s64 = ctx.r31.s64 + 320;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x82b24e5c
	if (cr0.eq) goto loc_82B24E5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 96);
	// bl 0x82ad3b08
	ctx.lr = 0x82B24E38;
	sub_82AD3B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b24e5c
	if (cr6.eq) goto loc_82B24E5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 96);
	// bl 0x82a671c0
	ctx.lr = 0x82B24E50;
	sub_82A671C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24e5c
	if (cr6.eq) goto loc_82B24E5C;
	// lwz r30,424(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
loc_82B24E5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b24280
	ctx.lr = 0x82B24E68;
	sub_82B24280(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B24E74"))) PPC_WEAK_FUNC(sub_82B24E74);
PPC_FUNC_IMPL(__imp__sub_82B24E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B24E78"))) PPC_WEAK_FUNC(sub_82B24E78);
PPC_FUNC_IMPL(__imp__sub_82B24E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B24E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b24f84
	if (!cr6.eq) goto loc_82B24F84;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b24f84
	if (cr6.eq) goto loc_82B24F84;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b24ec0
	if (!cr6.eq) goto loc_82B24EC0;
	// li r11,19
	ctx.r11.s64 = 19;
	// subfc r10,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x82b24ee0
	goto loc_82B24EE0;
loc_82B24EC0:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b24edc
	if (!cr6.eq) goto loc_82B24EDC;
	// li r11,6
	ctx.r11.s64 = 6;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x82b24ee0
	goto loc_82B24EE0;
loc_82B24EDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B24EE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b24f84
	if (cr6.eq) goto loc_82B24F84;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-1240(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1240);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B24F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b24f40
	if (cr6.eq) goto loc_82B24F40;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b24ab0
	ctx.lr = 0x82B24F24;
	sub_82B24AB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B24F38;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B24F40;
	sub_8387E8E0(ctx, base);
loc_82B24F40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b24200
	ctx.lr = 0x82B24F4C;
	sub_82B24200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// beq cr6,0x82b24f70
	if (cr6.eq) goto loc_82B24F70;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x831a2898
	ctx.lr = 0x82B24F60;
	sub_831A2898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b24f74
	if (cr6.eq) goto loc_82B24F74;
loc_82B24F70:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B24F74:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B24F84;
	sub_82D2B608(ctx, base);
loc_82B24F84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B24F8C"))) PPC_WEAK_FUNC(sub_82B24F8C);
PPC_FUNC_IMPL(__imp__sub_82B24F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B24F90"))) PPC_WEAK_FUNC(sub_82B24F90);
PPC_FUNC_IMPL(__imp__sub_82B24F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b24fa8
	if (!cr6.lt) goto loc_82B24FA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82B24FA8:
	// ble cr6,0x82b24fb4
	if (!cr6.gt) goto loc_82B24FB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B24FB4:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
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

__attribute__((alias("__imp__sub_82B24FD4"))) PPC_WEAK_FUNC(sub_82B24FD4);
PPC_FUNC_IMPL(__imp__sub_82B24FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B24FD8"))) PPC_WEAK_FUNC(sub_82B24FD8);
PPC_FUNC_IMPL(__imp__sub_82B24FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b24ff0
	if (!cr6.lt) goto loc_82B24FF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82B24FF0:
	// ble cr6,0x82b24ffc
	if (!cr6.gt) goto loc_82B24FFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B24FFC:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
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

__attribute__((alias("__imp__sub_82B2501C"))) PPC_WEAK_FUNC(sub_82B2501C);
PPC_FUNC_IMPL(__imp__sub_82B2501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B25020"))) PPC_WEAK_FUNC(sub_82B25020);
PPC_FUNC_IMPL(__imp__sub_82B25020) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d19788
	sub_82D19788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2502C"))) PPC_WEAK_FUNC(sub_82B2502C);
PPC_FUNC_IMPL(__imp__sub_82B2502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B25030"))) PPC_WEAK_FUNC(sub_82B25030);
PPC_FUNC_IMPL(__imp__sub_82B25030) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82b250d0
	if (cr6.gt) goto loc_82B250D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b25080
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B25080;
	// bdzf 4*cr6+eq,0x82b2508c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B2508C;
	// bdzf 4*cr6+eq,0x82b25098
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B25098;
	// bdzf 4*cr6+eq,0x82b250a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B250A4;
	// bdzf 4*cr6+eq,0x82b250b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B250B0;
	// bdzf 4*cr6+eq,0x82b250bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B250BC;
	// bne cr6,0x82b250c8
	if (!cr6.eq) goto loc_82B250C8;
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,168
	ctx.r31.u64 = ctx.r31.u64 | 168;
	// b 0x82b250d0
	goto loc_82B250D0;
loc_82B25080:
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,170
	ctx.r31.u64 = ctx.r31.u64 | 170;
	// b 0x82b250d0
	goto loc_82B250D0;
loc_82B2508C:
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,172
	ctx.r31.u64 = ctx.r31.u64 | 172;
	// b 0x82b250d0
	goto loc_82B250D0;
loc_82B25098:
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,171
	ctx.r31.u64 = ctx.r31.u64 | 171;
	// b 0x82b250d0
	goto loc_82B250D0;
loc_82B250A4:
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,175
	ctx.r31.u64 = ctx.r31.u64 | 175;
	// b 0x82b250d0
	goto loc_82B250D0;
loc_82B250B0:
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,176
	ctx.r31.u64 = ctx.r31.u64 | 176;
	// b 0x82b250d0
	goto loc_82B250D0;
loc_82B250BC:
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,173
	ctx.r31.u64 = ctx.r31.u64 | 173;
	// b 0x82b250d0
	goto loc_82B250D0;
loc_82B250C8:
	// lis r31,270
	ctx.r31.s64 = 17694720;
	// ori r31,r31,174
	ctx.r31.u64 = ctx.r31.u64 | 174;
loc_82B250D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d1a9c8
	ctx.lr = 0x82B250D8;
	sub_82D1A9C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b250e8
	if (cr6.eq) goto loc_82B250E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d39ab8
	ctx.lr = 0x82B250E8;
	sub_82D39AB8(ctx, base);
loc_82B250E8:
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

__attribute__((alias("__imp__sub_82B250FC"))) PPC_WEAK_FUNC(sub_82B250FC);
PPC_FUNC_IMPL(__imp__sub_82B250FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B25100"))) PPC_WEAK_FUNC(sub_82B25100);
PPC_FUNC_IMPL(__imp__sub_82B25100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B25108;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B25148;
	sub_8259CB28(ctx, base);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25168;
	sub_8259CB28(ctx, base);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25184"))) PPC_WEAK_FUNC(sub_82B25184);
PPC_FUNC_IMPL(__imp__sub_82B25184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B25188"))) PPC_WEAK_FUNC(sub_82B25188);
PPC_FUNC_IMPL(__imp__sub_82B25188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B25190;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b25210
	if (cr6.eq) goto loc_82B25210;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B251B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b251cc
	if (cr6.lt) goto loc_82B251CC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82B251CC;
	sub_825952B8(ctx, base);
loc_82B251CC:
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
	// blt cr6,0x82b251f4
	if (cr6.lt) goto loc_82B251F4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x825952b8
	ctx.lr = 0x82B251F4;
	sub_825952B8(ctx, base);
loc_82B251F4:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// addi r11,r31,-52
	ctx.r11.s64 = ctx.r31.s64 + -52;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82b251b0
	if (!cr6.eq) goto loc_82B251B0;
loc_82B25210:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25218"))) PPC_WEAK_FUNC(sub_82B25218);
PPC_FUNC_IMPL(__imp__sub_82B25218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B25220;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b25100
	ctx.lr = 0x82B25238;
	sub_82B25100(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B2525C;
	sub_8259CB28(ctx, base);
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25274;
	sub_8259CB28(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B252A0;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B252B4;
	sub_8259CB28(ctx, base);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// bl 0x8378e240
	ctx.lr = 0x82B252CC;
	sub_8378E240(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B252D4"))) PPC_WEAK_FUNC(sub_82B252D4);
PPC_FUNC_IMPL(__imp__sub_82B252D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B252D8"))) PPC_WEAK_FUNC(sub_82B252D8);
PPC_FUNC_IMPL(__imp__sub_82B252D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B252E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// bge cr6,0x82b25394
	if (!cr6.lt) goto loc_82B25394;
loc_82B25310:
	// mulli r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 * 68;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B25328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b25394
	if (cr6.eq) goto loc_82B25394;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r28,68
	ctx.r11.s64 = ctx.r28.s64 * 68;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B25358;
	sub_8259CB28(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B2536C;
	sub_8259CB28(ctx, base);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r24,r29
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r29.s32, xer);
	// stw r7,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r7.u32);
	// addze r29,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r29.s64 = temp.s64;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r6,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r6.u32);
	// blt cr6,0x82b25310
	if (cr6.lt) goto loc_82B25310;
loc_82B25394:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r28,68
	ctx.r11.s64 = ctx.r28.s64 * 68;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r26,4
	ctx.r4.s64 = ctx.r26.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B253B8;
	sub_8259CB28(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r26,32
	ctx.r4.s64 = ctx.r26.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B253CC;
	sub_8259CB28(ctx, base);
	// lwz r9,60(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,64(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B253E4"))) PPC_WEAK_FUNC(sub_82B253E4);
PPC_FUNC_IMPL(__imp__sub_82B253E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B253E8"))) PPC_WEAK_FUNC(sub_82B253E8);
PPC_FUNC_IMPL(__imp__sub_82B253E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B253F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b2545c
	if (cr6.eq) goto loc_82B2545C;
	// addi r31,r4,32
	ctx.r31.s64 = ctx.r4.s64 + 32;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82B2540C:
	// addi r31,r31,-68
	ctx.r31.s64 = ctx.r31.s64 + -68;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// stwu r11,-68(r30)
	ea = -68 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B2542C;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25440;
	sub_8259CB28(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r31,-32
	ctx.r10.s64 = ctx.r31.s64 + -32;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// bne cr6,0x82b2540c
	if (!cr6.eq) goto loc_82B2540C;
loc_82B2545C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25468"))) PPC_WEAK_FUNC(sub_82B25468);
PPC_FUNC_IMPL(__imp__sub_82B25468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B25470;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r4,100
	ctx.r27.s64 = ctx.r4.s64 + 100;
	// addi r29,r11,29323
	ctx.r29.s64 = ctx.r11.s64 + 29323;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,285
	ctx.r4.s64 = ctx.r29.s64 + 285;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2549C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b25608
	if (cr6.eq) goto loc_82B25608;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82B254D4;
	sub_825A1DA8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b25584
	if (cr6.eq) goto loc_82B25584;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b25514
	if (!cr6.eq) goto loc_82B25514;
	// addi r4,r29,297
	ctx.r4.s64 = ctx.r29.s64 + 297;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82B254FC;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82B25510;
	sub_825A1DA8(ctx, base);
	// b 0x82b25584
	goto loc_82B25584;
loc_82B25514:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82b25524
	if (cr6.eq) goto loc_82B25524;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82b25584
	if (!cr6.eq) goto loc_82B25584;
loc_82B25524:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x82b25544
	if (cr6.lt) goto loc_82B25544;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B25544:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,234
	ctx.r4.u64 = ctx.r4.u64 | 234;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82B25558;
	sub_82D042A8(ctx, base);
	// addi r4,r29,301
	ctx.r4.s64 = ctx.r29.s64 + 301;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82B25568;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82B2557C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B25584;
	sub_8387E8E0(ctx, base);
loc_82B25584:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B25598;
	sub_82D291E0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r29,305
	ctx.r4.s64 = ctx.r29.s64 + 305;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B255B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b25600
	if (cr6.eq) goto loc_82B25600;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82b255dc
	if (!cr6.eq) goto loc_82B255DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82B255D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x82b255e8
	goto loc_82B255E8;
loc_82B255DC:
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// bl 0x8319d4d0
	ctx.lr = 0x82B255E4;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B255E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B255F8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B25600;
	sub_8387E8E0(ctx, base);
loc_82B25600:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B25608;
	sub_8387E8E0(ctx, base);
loc_82B25608:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25610"))) PPC_WEAK_FUNC(sub_82B25610);
PPC_FUNC_IMPL(__imp__sub_82B25610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B25618;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b256b8
	if (cr6.eq) goto loc_82B256B8;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// addi r31,r5,24
	ctx.r31.s64 = ctx.r5.s64 + 24;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82B25640:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b256a0
	if (cr6.eq) goto loc_82B256A0;
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stb r29,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82B25670;
	sub_8259CB28(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B25690;
	sub_8259CB28(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
loc_82B256A0:
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b25640
	if (!cr6.eq) goto loc_82B25640;
loc_82B256B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B256C4"))) PPC_WEAK_FUNC(sub_82B256C4);
PPC_FUNC_IMPL(__imp__sub_82B256C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B256C8"))) PPC_WEAK_FUNC(sub_82B256C8);
PPC_FUNC_IMPL(__imp__sub_82B256C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B256D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x82B256F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2570c
	if (cr6.eq) goto loc_82B2570C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B2570C;
	sub_82B25218(ctx, base);
loc_82B2570C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B2571C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b25734
	if (cr6.eq) goto loc_82B25734;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B25734;
	sub_82B25218(ctx, base);
loc_82B25734:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B25744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2575c
	if (cr6.eq) goto loc_82B2575C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B2575C;
	sub_82B25218(ctx, base);
loc_82B2575C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25764"))) PPC_WEAK_FUNC(sub_82B25764);
PPC_FUNC_IMPL(__imp__sub_82B25764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B25768"))) PPC_WEAK_FUNC(sub_82B25768);
PPC_FUNC_IMPL(__imp__sub_82B25768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B25770;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82b2582c
	if (!cr6.lt) goto loc_82B2582C;
loc_82B257A0:
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r3,-68
	ctx.r4.s64 = ctx.r3.s64 + -68;
	// bctrl 
	ctx.lr = 0x82B257B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b257c4
	if (cr6.eq) goto loc_82B257C4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B257C4:
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r11,r27,68
	ctx.r11.s64 = ctx.r27.s64 * 68;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B257F0;
	sub_8259CB28(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25804;
	sub_8259CB28(ctx, base);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r8.u32);
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r7,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r7.u32);
	// blt cr6,0x82b257a0
	if (cr6.lt) goto loc_82B257A0;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
loc_82B2582C:
	// bne cr6,0x82b25888
	if (!cr6.eq) goto loc_82B25888;
	// mulli r11,r26,68
	ctx.r11.s64 = ctx.r26.s64 * 68;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r11,r27,68
	ctx.r11.s64 = ctx.r27.s64 * 68;
	// lwz r10,-68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -68);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// addi r29,r30,-68
	ctx.r29.s64 = ctx.r30.s64 + -68;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B25860;
	sub_8259CB28(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25874;
	sub_8259CB28(ctx, base);
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r27,r26,-1
	ctx.r27.s64 = ctx.r26.s64 + -1;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
loc_82B25888:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b252d8
	ctx.lr = 0x82B258A0;
	sub_82B252D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B258A8"))) PPC_WEAK_FUNC(sub_82B258A8);
PPC_FUNC_IMPL(__imp__sub_82B258A8) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82b258ec
	if (cr6.gt) goto loc_82B258EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B258EC;
	sub_831CC188(ctx, base);
loc_82B258EC:
	// mulli r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 * 68;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b25100
	ctx.lr = 0x82B258FC;
	sub_82B25100(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25468
	ctx.lr = 0x82B2590C;
	sub_82B25468(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378e240
	ctx.lr = 0x82B25914;
	sub_8378E240(ctx, base);
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

__attribute__((alias("__imp__sub_82B2592C"))) PPC_WEAK_FUNC(sub_82B2592C);
PPC_FUNC_IMPL(__imp__sub_82B2592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B25930"))) PPC_WEAK_FUNC(sub_82B25930);
PPC_FUNC_IMPL(__imp__sub_82B25930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B25938;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,68
	ctx.r10.s64 = 68;
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
	// ble cr6,0x82b259c8
	if (!cr6.gt) goto loc_82B259C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,68
	ctx.r29.s64 = ctx.r11.s64 * 68;
	// mulli r26,r11,136
	ctx.r26.s64 = ctx.r11.s64 * 136;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b256c8
	ctx.lr = 0x82B25980;
	sub_82B256C8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82b256c8
	ctx.lr = 0x82B25994;
	sub_82B256C8(ctx, base);
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
	// bl 0x82b256c8
	ctx.lr = 0x82B259AC;
	sub_82B256C8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b256c8
	ctx.lr = 0x82B259C0;
	sub_82B256C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B259C8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b256c8
	ctx.lr = 0x82B259D4;
	sub_82B256C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B259DC"))) PPC_WEAK_FUNC(sub_82B259DC);
PPC_FUNC_IMPL(__imp__sub_82B259DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B259E0"))) PPC_WEAK_FUNC(sub_82B259E0);
PPC_FUNC_IMPL(__imp__sub_82B259E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B259E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,68
	ctx.r10.s64 = 68;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// divw r25,r11,r10
	ctx.r25.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// srawi r9,r25,1
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 1;
	// addze. r29,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r29.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x82b25af8
	if (!cr0.gt) goto loc_82B25AF8;
	// mulli r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r23,2
	ctx.r23.s64 = 2;
loc_82B25A28:
	// addi r31,r31,-68
	ctx.r31.s64 = ctx.r31.s64 + -68;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B25A58;
	sub_8259CB28(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B25A78;
	sub_8259CB28(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x82b25768
	ctx.lr = 0x82B25AA0;
	sub_82B25768(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b25abc
	if (cr6.lt) goto loc_82B25ABC;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B25ABC;
	sub_825952B8(ctx, base);
loc_82B25ABC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82b25ae4
	if (cr6.lt) goto loc_82B25AE4;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82B25AE4;
	sub_825952B8(ctx, base);
loc_82B25AE4:
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bgt cr6,0x82b25a28
	if (cr6.gt) goto loc_82B25A28;
loc_82B25AF8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25B00"))) PPC_WEAK_FUNC(sub_82B25B00);
PPC_FUNC_IMPL(__imp__sub_82B25B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82B25B08;
	__savegprlr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b25d30
	if (cr6.eq) goto loc_82B25D30;
	// addi r29,r3,68
	ctx.r29.s64 = ctx.r3.s64 + 68;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b25d30
	if (cr6.eq) goto loc_82B25D30;
	// lbz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r24,15
	ctx.r24.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82B25B40:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B25B6C;
	sub_8259CB28(ctx, base);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B25B8C;
	sub_8259CB28(ctx, base);
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82B25BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b25c10
	if (cr6.eq) goto loc_82B25C10;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r29,68
	ctx.r5.s64 = ctx.r29.s64 + 68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b253e8
	ctx.lr = 0x82B25BCC;
	sub_82B253E8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B25BE8;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25BFC;
	sub_8259CB28(ctx, base);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r10.u32);
	// stw r9,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r9.u32);
	// b 0x82b25cd4
	goto loc_82B25CD4;
loc_82B25C10:
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82B25C24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b25c94
	if (cr6.eq) goto loc_82B25C94;
loc_82B25C30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B25C4C;
	sub_8259CB28(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25C60;
	sub_8259CB28(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-68
	ctx.r31.s64 = ctx.r31.s64 + -68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B25C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b25c30
	if (!cr6.eq) goto loc_82B25C30;
loc_82B25C94:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B25CB0;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B25CC4;
	sub_8259CB28(ctx, base);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
loc_82B25CD4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b25cf0
	if (cr6.lt) goto loc_82B25CF0;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B25CF0;
	sub_825952B8(ctx, base);
loc_82B25CF0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// blt cr6,0x82b25d18
	if (cr6.lt) goto loc_82B25D18;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82B25D18;
	sub_825952B8(ctx, base);
loc_82B25D18:
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// bne cr6,0x82b25b40
	if (!cr6.eq) goto loc_82B25B40;
loc_82B25D30:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25D38"))) PPC_WEAK_FUNC(sub_82B25D38);
PPC_FUNC_IMPL(__imp__sub_82B25D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B25D40;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,68
	ctx.r10.s64 = 68;
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
	// mulli r11,r7,68
	ctx.r11.s64 = ctx.r7.s64 * 68;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-68
	ctx.r5.s64 = ctx.r5.s64 + -68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82b25930
	ctx.lr = 0x82B25D80;
	sub_82B25930(ctx, base);
	// addi r26,r31,68
	ctx.r26.s64 = ctx.r31.s64 + 68;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x82b25dd4
	if (!cr6.lt) goto loc_82B25DD4;
loc_82B25D8C:
	// addi r30,r31,-68
	ctx.r30.s64 = ctx.r31.s64 + -68;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B25DA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25dd4
	if (!cr6.eq) goto loc_82B25DD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B25DBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25dd4
	if (!cr6.eq) goto loc_82B25DD4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b25d8c
	if (cr6.lt) goto loc_82B25D8C;
loc_82B25DD4:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b25e20
	if (!cr6.lt) goto loc_82B25E20;
loc_82B25DDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82B25DEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25e20
	if (!cr6.eq) goto loc_82B25E20;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B25E08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25e20
	if (!cr6.eq) goto loc_82B25E20;
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b25ddc
	if (cr6.lt) goto loc_82B25DDC;
loc_82B25E20:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82B25E28:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b25e84
	if (!cr6.lt) goto loc_82B25E84;
loc_82B25E30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B25E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25e78
	if (!cr6.eq) goto loc_82B25E78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B25E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25e84
	if (!cr6.eq) goto loc_82B25E84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// bl 0x82b25218
	ctx.lr = 0x82B25E78;
	sub_82B25218(ctx, base);
loc_82B25E78:
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b25e30
	if (cr6.lt) goto loc_82B25E30;
loc_82B25E84:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b25eec
	if (!cr6.gt) goto loc_82B25EEC;
	// addi r30,r27,-68
	ctx.r30.s64 = ctx.r27.s64 + -68;
loc_82B25E90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B25EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25ed8
	if (!cr6.eq) goto loc_82B25ED8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B25EBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b25ee8
	if (!cr6.eq) goto loc_82B25EE8;
	// addi r31,r31,-68
	ctx.r31.s64 = ctx.r31.s64 + -68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B25ED8;
	sub_82B25218(ctx, base);
loc_82B25ED8:
	// addi r27,r27,-68
	ctx.r27.s64 = ctx.r27.s64 + -68;
	// addi r30,r30,-68
	ctx.r30.s64 = ctx.r30.s64 + -68;
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, xer);
	// blt cr6,0x82b25e90
	if (cr6.lt) goto loc_82B25E90;
loc_82B25EE8:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
loc_82B25EEC:
	// bne cr6,0x82b25f28
	if (!cr6.eq) goto loc_82B25F28;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x82b25f74
	if (cr6.eq) goto loc_82B25F74;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b25f0c
	if (cr6.eq) goto loc_82B25F0C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B25F0C;
	sub_82B25218(ctx, base);
loc_82B25F0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// bl 0x82b25218
	ctx.lr = 0x82B25F24;
	sub_82B25218(ctx, base);
	// b 0x82b25e28
	goto loc_82B25E28;
loc_82B25F28:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// addi r27,r27,-68
	ctx.r27.s64 = ctx.r27.s64 + -68;
	// bne cr6,0x82b25f60
	if (!cr6.eq) goto loc_82B25F60;
	// addi r31,r31,-68
	ctx.r31.s64 = ctx.r31.s64 + -68;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b25f4c
	if (cr6.eq) goto loc_82B25F4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B25F4C;
	sub_82B25218(ctx, base);
loc_82B25F4C:
	// addi r26,r26,-68
	ctx.r26.s64 = ctx.r26.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B25F5C;
	sub_82B25218(ctx, base);
	// b 0x82b25e28
	goto loc_82B25E28;
loc_82B25F60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b25218
	ctx.lr = 0x82B25F6C;
	sub_82B25218(ctx, base);
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// b 0x82b25e28
	goto loc_82B25E28;
loc_82B25F74:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B25F88"))) PPC_WEAK_FUNC(sub_82B25F88);
PPC_FUNC_IMPL(__imp__sub_82B25F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B25F90;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,50115
	ctx.r10.u64 = ctx.r11.u64 | 50115;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b25fb4
	if (!cr6.gt) goto loc_82B25FB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B25FB4;
	sub_831CC150(ctx, base);
loc_82B25FB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,68
	ctx.r26.s64 = 68;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b2605c
	if (!cr6.lt) goto loc_82B2605C;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,68
	ctx.r28.s64 = ctx.r4.s64 * 68;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B25FEC;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b25610
	ctx.lr = 0x82B26010;
	sub_82B25610(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x82b26044
	if (cr6.eq) goto loc_82B26044;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b25188
	ctx.lr = 0x82B26034;
	sub_82B25188(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B26044;
	sub_825952B8(ctx, base);
loc_82B26044:
	// mulli r11,r26,68
	ctx.r11.s64 = ctx.r26.s64 * 68;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82B2605C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B26064"))) PPC_WEAK_FUNC(sub_82B26064);
PPC_FUNC_IMPL(__imp__sub_82B26064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26068"))) PPC_WEAK_FUNC(sub_82B26068);
PPC_FUNC_IMPL(__imp__sub_82B26068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B26070;
	__savegprlr_19(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,68
	ctx.r25.s64 = 68;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r10,r11,r25
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82b261d0
	if (!cr6.gt) goto loc_82B261D0;
	// subfic r24,r3,-32
	xer.ca = ctx.r3.u32 <= 4294967264;
	ctx.r24.s64 = -32 - ctx.r3.s64;
	// addi r23,r3,4
	ctx.r23.s64 = ctx.r3.s64 + 4;
	// addi r22,r3,32
	ctx.r22.s64 = ctx.r3.s64 + 32;
	// addi r31,r4,-36
	ctx.r31.s64 = ctx.r4.s64 + -36;
	// subfic r20,r3,36
	xer.ca = ctx.r3.u32 <= 36;
	ctx.r20.s64 = 36 - ctx.r3.s64;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r19,2
	ctx.r19.s64 = 2;
loc_82B260B4:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// addi r27,r31,-28
	ctx.r27.s64 = ctx.r31.s64 + -28;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B260E0;
	sub_8259CB28(ctx, base);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B26100;
	sub_8259CB28(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r8,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B2612C;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B26140;
	sub_8259CB28(ctx, base);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// add r5,r24,r31
	ctx.r5.u64 = ctx.r24.u64 + ctx.r31.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// divw r5,r5,r25
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r25.s32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82b25768
	ctx.lr = 0x82B2616C;
	sub_82B25768(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b26188
	if (cr6.lt) goto loc_82B26188;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B26188;
	sub_825952B8(ctx, base);
loc_82B26188:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82b261b0
	if (cr6.lt) goto loc_82B261B0;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82B261B0;
	sub_825952B8(ctx, base);
loc_82B261B0:
	// addi r31,r31,-68
	ctx.r31.s64 = ctx.r31.s64 + -68;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// add r11,r20,r31
	ctx.r11.u64 = ctx.r20.u64 + ctx.r31.u64;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// divw r10,r11,r25
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82b260b4
	if (cr6.gt) goto loc_82B260B4;
loc_82B261D0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B261D8"))) PPC_WEAK_FUNC(sub_82B261D8);
PPC_FUNC_IMPL(__imp__sub_82B261D8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,29760
	ctx.r9.s64 = ctx.r11.s64 + 29760;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2623c
	if (cr6.eq) goto loc_82B2623C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b25188
	ctx.lr = 0x82B26228;
	sub_82B25188(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2623C;
	sub_825952B8(ctx, base);
loc_82B2623C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82c0fc10
	ctx.lr = 0x82B26254;
	sub_82C0FC10(ctx, base);
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

__attribute__((alias("__imp__sub_82B2626C"))) PPC_WEAK_FUNC(sub_82B2626C);
PPC_FUNC_IMPL(__imp__sub_82B2626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26270"))) PPC_WEAK_FUNC(sub_82B26270);
PPC_FUNC_IMPL(__imp__sub_82B26270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,963
	ctx.r10.s64 = 63111168;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,68
	ctx.r9.s64 = 68;
	// ori r8,r10,50115
	ctx.r8.u64 = ctx.r10.u64 | 50115;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b262a4
	if (!cr6.lt) goto loc_82B262A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B262A4:
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
	// blt cr6,0x82b262d4
	if (cr6.lt) goto loc_82B262D4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B262D4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b262e0
	if (!cr6.lt) goto loc_82B262E0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B262E0:
	// b 0x82b25f88
	sub_82B25F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B262E4"))) PPC_WEAK_FUNC(sub_82B262E4);
PPC_FUNC_IMPL(__imp__sub_82B262E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B262E8"))) PPC_WEAK_FUNC(sub_82B262E8);
PPC_FUNC_IMPL(__imp__sub_82B262E8) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82c0fbb8
	ctx.lr = 0x82B26308;
	sub_82C0FBB8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,29760
	ctx.r9.s64 = ctx.r11.s64 + 29760;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r10,-844(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -844);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r4,-928(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -928);
	// bl 0x82d20ae0
	ctx.lr = 0x82B26364;
	sub_82D20AE0(ctx, base);
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-932(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -932);
	// bl 0x82d23390
	ctx.lr = 0x82B26378;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82B26394"))) PPC_WEAK_FUNC(sub_82B26394);
PPC_FUNC_IMPL(__imp__sub_82B26394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26398"))) PPC_WEAK_FUNC(sub_82B26398);
PPC_FUNC_IMPL(__imp__sub_82B26398) {
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
	// bl 0x82b261d8
	ctx.lr = 0x82B263B8;
	sub_82B261D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b263d0
	if (cr6.eq) goto loc_82B263D0;
	// bl 0x82416268
	ctx.lr = 0x82B263CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B263D0:
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

__attribute__((alias("__imp__sub_82B263E8"))) PPC_WEAK_FUNC(sub_82B263E8);
PPC_FUNC_IMPL(__imp__sub_82B263E8) {
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
	// bge cr6,0x82b26420
	if (!cr6.lt) goto loc_82B26420;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b26424
	if (!cr6.gt) goto loc_82B26424;
loc_82B26420:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B26424:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b26474
	if (cr6.eq) goto loc_82B26474;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,68
	ctx.r9.s64 = 68;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b26458
	if (!cr6.eq) goto loc_82B26458;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b26270
	ctx.lr = 0x82B26458;
	sub_82B26270(ctx, base);
loc_82B26458:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b264a0
	if (cr6.eq) goto loc_82B264A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 * 68;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b2649c
	goto loc_82B2649C;
loc_82B26474:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b2648c
	if (!cr6.eq) goto loc_82B2648C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b26270
	ctx.lr = 0x82B2648C;
	sub_82B26270(ctx, base);
loc_82B2648C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b264a0
	if (cr6.eq) goto loc_82B264A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B2649C:
	// bl 0x82b25100
	ctx.lr = 0x82B264A0;
	sub_82B25100(ctx, base);
loc_82B264A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
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

__attribute__((alias("__imp__sub_82B264C4"))) PPC_WEAK_FUNC(sub_82B264C4);
PPC_FUNC_IMPL(__imp__sub_82B264C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B264C8"))) PPC_WEAK_FUNC(sub_82B264C8);
PPC_FUNC_IMPL(__imp__sub_82B264C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B264D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,68
	ctx.r25.s64 = 68;
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
	// ble cr6,0x82b26584
	if (!cr6.gt) goto loc_82B26584;
loc_82B264F8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82b265a8
	if (!cr6.gt) goto loc_82B265A8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b25d38
	ctx.lr = 0x82B26514;
	sub_82B25D38(ctx, base);
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
	// bge cr6,0x82b26564
	if (!cr6.lt) goto loc_82B26564;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b264c8
	ctx.lr = 0x82B2655C;
	sub_82B264C8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82b26574
	goto loc_82B26574;
loc_82B26564:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b264c8
	ctx.lr = 0x82B26570;
	sub_82B264C8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B26574:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82b264f8
	if (cr6.gt) goto loc_82B264F8;
loc_82B26584:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b265a0
	if (!cr6.gt) goto loc_82B265A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b25b00
	ctx.lr = 0x82B265A0;
	sub_82B25B00(ctx, base);
loc_82B265A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B265A8:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b26584
	if (!cr6.gt) goto loc_82B26584;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b265d0
	if (!cr6.gt) goto loc_82B265D0;
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
	// bl 0x82b259e0
	ctx.lr = 0x82B265D0;
	sub_82B259E0(ctx, base);
loc_82B265D0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b26068
	ctx.lr = 0x82B265E0;
	sub_82B26068(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B265E8"))) PPC_WEAK_FUNC(sub_82B265E8);
PPC_FUNC_IMPL(__imp__sub_82B265E8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b26618
	if (cr6.lt) goto loc_82B26618;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2661c
	goto loc_82B2661C;
loc_82B26618:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2661C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B26638;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b26658
	if (cr6.eq) goto loc_82B26658;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B26650;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2665c
	if (!cr6.eq) goto loc_82B2665C;
loc_82B26658:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2665C:
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

__attribute__((alias("__imp__sub_82B26674"))) PPC_WEAK_FUNC(sub_82B26674);
PPC_FUNC_IMPL(__imp__sub_82B26674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26678"))) PPC_WEAK_FUNC(sub_82B26678);
PPC_FUNC_IMPL(__imp__sub_82B26678) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b266a8
	if (cr6.lt) goto loc_82B266A8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b266ac
	goto loc_82B266AC;
loc_82B266A8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B266AC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B266C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b266e8
	if (cr6.eq) goto loc_82B266E8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B266E0;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b266ec
	if (!cr6.eq) goto loc_82B266EC;
loc_82B266E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B266EC:
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

__attribute__((alias("__imp__sub_82B26704"))) PPC_WEAK_FUNC(sub_82B26704);
PPC_FUNC_IMPL(__imp__sub_82B26704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26708"))) PPC_WEAK_FUNC(sub_82B26708);
PPC_FUNC_IMPL(__imp__sub_82B26708) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b26738
	if (cr6.lt) goto loc_82B26738;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2673c
	goto loc_82B2673C;
loc_82B26738:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2673C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B26758;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b26778
	if (cr6.eq) goto loc_82B26778;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B26770;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2677c
	if (!cr6.eq) goto loc_82B2677C;
loc_82B26778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2677C:
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

__attribute__((alias("__imp__sub_82B26794"))) PPC_WEAK_FUNC(sub_82B26794);
PPC_FUNC_IMPL(__imp__sub_82B26794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26798"))) PPC_WEAK_FUNC(sub_82B26798);
PPC_FUNC_IMPL(__imp__sub_82B26798) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b267c8
	if (cr6.lt) goto loc_82B267C8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b267cc
	goto loc_82B267CC;
loc_82B267C8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B267CC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B267E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b26808
	if (cr6.eq) goto loc_82B26808;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B26800;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2680c
	if (!cr6.eq) goto loc_82B2680C;
loc_82B26808:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2680C:
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

__attribute__((alias("__imp__sub_82B26824"))) PPC_WEAK_FUNC(sub_82B26824);
PPC_FUNC_IMPL(__imp__sub_82B26824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26828"))) PPC_WEAK_FUNC(sub_82B26828);
PPC_FUNC_IMPL(__imp__sub_82B26828) {
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
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b26858
	if (cr6.lt) goto loc_82B26858;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2685c
	goto loc_82B2685C;
loc_82B26858:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2685C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B26878;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b26898
	if (cr6.eq) goto loc_82B26898;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B26890;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2689c
	if (!cr6.eq) goto loc_82B2689C;
loc_82B26898:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2689C:
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

__attribute__((alias("__imp__sub_82B268B4"))) PPC_WEAK_FUNC(sub_82B268B4);
PPC_FUNC_IMPL(__imp__sub_82B268B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B268B8"))) PPC_WEAK_FUNC(sub_82B268B8);
PPC_FUNC_IMPL(__imp__sub_82B268B8) {
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
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b268e8
	if (cr6.lt) goto loc_82B268E8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b268ec
	goto loc_82B268EC;
loc_82B268E8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B268EC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B26908;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b26928
	if (cr6.eq) goto loc_82B26928;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B26920;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2692c
	if (!cr6.eq) goto loc_82B2692C;
loc_82B26928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2692C:
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

__attribute__((alias("__imp__sub_82B26944"))) PPC_WEAK_FUNC(sub_82B26944);
PPC_FUNC_IMPL(__imp__sub_82B26944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26948"))) PPC_WEAK_FUNC(sub_82B26948);
PPC_FUNC_IMPL(__imp__sub_82B26948) {
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
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b26978
	if (cr6.lt) goto loc_82B26978;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2697c
	goto loc_82B2697C;
loc_82B26978:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2697C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B26998;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b269b8
	if (cr6.eq) goto loc_82B269B8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B269B0;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b269bc
	if (!cr6.eq) goto loc_82B269BC;
loc_82B269B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B269BC:
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

__attribute__((alias("__imp__sub_82B269D4"))) PPC_WEAK_FUNC(sub_82B269D4);
PPC_FUNC_IMPL(__imp__sub_82B269D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B269D8"))) PPC_WEAK_FUNC(sub_82B269D8);
PPC_FUNC_IMPL(__imp__sub_82B269D8) {
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
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b26a08
	if (cr6.lt) goto loc_82B26A08;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b26a0c
	goto loc_82B26A0C;
loc_82B26A08:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B26A0C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B26A28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b26a48
	if (cr6.eq) goto loc_82B26A48;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b262e8
	ctx.lr = 0x82B26A40;
	sub_82B262E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b26a4c
	if (!cr6.eq) goto loc_82B26A4C;
loc_82B26A48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B26A4C:
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

__attribute__((alias("__imp__sub_82B26A64"))) PPC_WEAK_FUNC(sub_82B26A64);
PPC_FUNC_IMPL(__imp__sub_82B26A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B26A68"))) PPC_WEAK_FUNC(sub_82B26A68);
PPC_FUNC_IMPL(__imp__sub_82B26A68) {
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
	ctx.lr = 0x82B26A70;
	__savegprlr_20(ctx, base);
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B26A7C;
	sub_831156E8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r21,-1
	ctx.r21.s64 = -1;
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addis r26,r20,222
	ctx.r26.s64 = ctx.r20.s64 + 14548992;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// addi r26,r26,-8252
	ctx.r26.s64 = ctx.r26.s64 + -8252;
	// bgt cr6,0x82b2766c
	if (cr6.gt) goto loc_82B2766C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b26bfc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B26BFC;
	// bdzf 4*cr6+eq,0x82b26dec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B26DEC;
	// bdzf 4*cr6+eq,0x82b26ec4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B26EC4;
	// bdzf 4*cr6+eq,0x82b2719c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B2719C;
	// bdzf 4*cr6+eq,0x82b2735c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B2735C;
	// bne cr6,0x82b2751c
	if (!cr6.eq) goto loc_82B2751C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r27,r11,-892
	ctx.r27.s64 = ctx.r11.s64 + -892;
	// addi r28,r26,304
	ctx.r28.s64 = ctx.r26.s64 + 304;
	// li r29,15
	ctx.r29.s64 = 15;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bge cr6,0x82b26be8
	if (!cr6.lt) goto loc_82B26BE8;
loc_82B26AE0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b26be8
	if (cr6.eq) goto loc_82B26BE8;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b26b08
	if (!cr6.eq) goto loc_82B26B08;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82b26b30
	goto loc_82B26B30;
loc_82B26B08:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b26b28
	if (!cr6.eq) goto loc_82B26B28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b26b2c
	if (cr6.eq) goto loc_82B26B2C;
loc_82B26B28:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B26B2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B26B30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b26be8
	if (!cr6.eq) goto loc_82B26BE8;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b26be8
	if (cr6.eq) goto loc_82B26BE8;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r29,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r29.u32);
	// stw r31,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r31.u32);
	// stb r31,964(r1)
	PPC_STORE_U8(ctx.r1.u32 + 964, ctx.r31.u8);
	// stw r29,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r29.u32);
	// stw r11,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r11.u32);
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// stw r31,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r31.u32);
	// stw r31,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r31.u32);
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8311bf98
	ctx.lr = 0x82B26B88;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B26B90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b26b90
	if (!cr6.eq) goto loc_82B26B90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,964
	ctx.r3.s64 = ctx.r1.s64 + 964;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B26BB4;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B26BD4;
	sub_82B263E8(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x8378e240
	ctx.lr = 0x82B26BDC;
	sub_8378E240(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B26BE4;
	sub_8387E8E0(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82B26BE8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplwi cr6,r25,32
	cr6.compare<uint32_t>(ctx.r25.u32, 32, xer);
	// blt cr6,0x82b26ae0
	if (cr6.lt) goto loc_82B26AE0;
	// b 0x82b2766c
	goto loc_82B2766C;
loc_82B26BFC:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x8316fb10
	ctx.lr = 0x82B26C0C;
	sub_8316FB10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B26C18;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// li r5,548
	ctx.r5.s64 = 548;
	// bl 0x831ce980
	ctx.lr = 0x82B26C28;
	sub_831CE980(ctx, base);
	// addi r27,r26,60
	ctx.r27.s64 = ctx.r26.s64 + 60;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r24,-31777
	ctx.r24.s64 = -2082537472;
	// li r23,32
	ctx.r23.s64 = 32;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// lwz r26,1496(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1496);
	// bge cr6,0x82b26dd8
	if (!cr6.lt) goto loc_82B26DD8;
loc_82B26C48:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b26dd8
	if (cr6.eq) goto loc_82B26DD8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,-896(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -896);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b26dd8
	if (cr6.eq) goto loc_82B26DD8;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x82b26dd8
	if (cr6.eq) goto loc_82B26DD8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b26dd8
	if (cr6.eq) goto loc_82B26DD8;
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// addi r5,r1,89
	ctx.r5.s64 = ctx.r1.s64 + 89;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x8315d6c8
	ctx.lr = 0x82B26CC8;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x8259cb28
	ctx.lr = 0x82B26CDC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x8387e8e0
	ctx.lr = 0x82B26CE4;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b26d2c
	if (!cr6.eq) goto loc_82B26D2C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x82B26D10;
	sub_82D042A8(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cb28
	ctx.lr = 0x82B26D24;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82b26da4
	goto loc_82B26DA4;
loc_82B26D2C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b26d68
	if (!cr6.eq) goto loc_82B26D68;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82b26d68
	if (!cr6.eq) goto loc_82B26D68;
	// lis r4,78
	ctx.r4.s64 = 5111808;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// bl 0x82d042a8
	ctx.lr = 0x82B26D50;
	sub_82D042A8(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cb28
	ctx.lr = 0x82B26D64;
	sub_8259CB28(ctx, base);
	// b 0x82b26da8
	goto loc_82B26DA8;
loc_82B26D68:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x8315fbc0
	ctx.lr = 0x82B26D8C;
	sub_8315FBC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cb28
	ctx.lr = 0x82B26DA0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
loc_82B26DA4:
	// bl 0x8387e8e0
	ctx.lr = 0x82B26DA8;
	sub_8387E8E0(ctx, base);
loc_82B26DA8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B26DC8;
	sub_82B263E8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B26DD0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8378e240
	ctx.lr = 0x82B26DD8;
	sub_8378E240(ctx, base);
loc_82B26DD8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(ctx.r25.u32, 10, xer);
	// blt cr6,0x82b26c48
	if (cr6.lt) goto loc_82B26C48;
	// b 0x82b2766c
	goto loc_82B2766C;
loc_82B26DEC:
	// addi r28,r26,60
	ctx.r28.s64 = ctx.r26.s64 + 60;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r26,-31777
	ctx.r26.s64 = -2082537472;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x82b26eb0
	if (!cr6.lt) goto loc_82B26EB0;
loc_82B26E04:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b26eb0
	if (cr6.eq) goto loc_82B26EB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,-896(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -896);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b26eb0
	if (cr6.eq) goto loc_82B26EB0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b26eb0
	if (cr6.eq) goto loc_82B26EB0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r29.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r31,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r31.u32);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// stb r31,1044(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1044, ctx.r31.u8);
	// stw r29,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r29.u32);
	// stw r11,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r11.u32);
	// stb r31,1072(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1072, ctx.r31.u8);
	// stw r31,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r31.u32);
	// stw r31,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r31.u32);
	// stw r31,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r31.u32);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x8315d6c8
	ctx.lr = 0x82B26E6C;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,1044
	ctx.r3.s64 = ctx.r1.s64 + 1044;
	// bl 0x8259cb28
	ctx.lr = 0x82B26E80;
	sub_8259CB28(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8387e8e0
	ctx.lr = 0x82B26E88;
	sub_8387E8E0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r11.u32);
	// stw r9,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r9.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B26EA8;
	sub_82B263E8(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x8378e240
	ctx.lr = 0x82B26EB0;
	sub_8378E240(ctx, base);
loc_82B26EB0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(ctx.r27.u32, 10, xer);
	// blt cr6,0x82b26e04
	if (cr6.lt) goto loc_82B26E04;
	// b 0x82b2766c
	goto loc_82B2766C;
loc_82B26EC4:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r27,r11,-892
	ctx.r27.s64 = ctx.r11.s64 + -892;
	// addi r28,r26,324
	ctx.r28.s64 = ctx.r26.s64 + 324;
	// li r29,15
	ctx.r29.s64 = 15;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bge cr6,0x82b27188
	if (!cr6.lt) goto loc_82B27188;
loc_82B26EE4:
	// addic. r11,r28,-20
	xer.ca = ctx.r28.u32 > 19;
	ctx.r11.s64 = ctx.r28.s64 + -20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b27188
	if (cr0.eq) goto loc_82B27188;
	// ld r11,-20(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b26f0c
	if (!cr6.eq) goto loc_82B26F0C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82b26f34
	goto loc_82B26F34;
loc_82B26F0C:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b26f2c
	if (!cr6.eq) goto loc_82B26F2C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b26f30
	if (cr6.eq) goto loc_82B26F30;
loc_82B26F2C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B26F30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B26F34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b27188
	if (!cr6.eq) goto loc_82B27188;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// ld r4,-20(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + -20);
	// bl 0x8311bf98
	ctx.lr = 0x82B26F58;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B26F60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b26f60
	if (!cr6.eq) goto loc_82B26F60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B26F84;
	sub_8259CC28(ctx, base);
	// lwz r10,-4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b2702c
	if (cr6.eq) goto loc_82B2702C;
	// stw r29,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r29.u32);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// ori r4,r4,608
	ctx.r4.u64 = ctx.r4.u64 | 608;
	// bl 0x82d042a8
	ctx.lr = 0x82B26FAC;
	sub_82D042A8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r29,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r29.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r31,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,804(r1)
	PPC_STORE_U8(ctx.r1.u32 + 804, ctx.r31.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r29,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r29.u32);
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// stw r31,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r31.u32);
	// stw r31,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r31.u32);
	// stw r11,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B26FE8;
	sub_8259CB28(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x8259cb28
	ctx.lr = 0x82B26FFC;
	sub_8259CB28(ctx, base);
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B2701C;
	sub_82B263E8(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x8378e240
	ctx.lr = 0x82B27024;
	sub_8378E240(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2702C;
	sub_8387E8E0(ctx, base);
loc_82B2702C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b270d4
	if (cr6.eq) goto loc_82B270D4;
	// stw r29,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r29.u32);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// ori r4,r4,609
	ctx.r4.u64 = ctx.r4.u64 | 609;
	// bl 0x82d042a8
	ctx.lr = 0x82B27054;
	sub_82D042A8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r29,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r29.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r31,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,484(r1)
	PPC_STORE_U8(ctx.r1.u32 + 484, ctx.r31.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r29,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r29.u32);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B27090;
	sub_8259CB28(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8259cb28
	ctx.lr = 0x82B270A4;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B270C4;
	sub_82B263E8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8378e240
	ctx.lr = 0x82B270CC;
	sub_8378E240(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x82B270D4;
	sub_8387E8E0(ctx, base);
loc_82B270D4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b2717c
	if (cr6.eq) goto loc_82B2717C;
	// stw r29,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r29.u32);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// ori r4,r4,653
	ctx.r4.u64 = ctx.r4.u64 | 653;
	// bl 0x82d042a8
	ctx.lr = 0x82B270FC;
	sub_82D042A8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r29,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r29.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 724, ctx.r31.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r29,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r29.u32);
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// stb r31,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r31.u8);
	// stw r31,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r31.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stw r11,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B27138;
	sub_8259CB28(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x8259cb28
	ctx.lr = 0x82B2714C;
	sub_8259CB28(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B2716C;
	sub_82B263E8(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8378e240
	ctx.lr = 0x82B27174;
	sub_8378E240(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2717C;
	sub_8387E8E0(ctx, base);
loc_82B2717C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B27184;
	sub_8387E8E0(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82B27188:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplwi cr6,r25,32
	cr6.compare<uint32_t>(ctx.r25.u32, 32, xer);
	// blt cr6,0x82b26ee4
	if (cr6.lt) goto loc_82B26EE4;
	// b 0x82b2766c
	goto loc_82B2766C;
loc_82B2719C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r27,r11,-892
	ctx.r27.s64 = ctx.r11.s64 + -892;
	// addi r28,r26,1596
	ctx.r28.s64 = ctx.r26.s64 + 1596;
	// li r29,15
	ctx.r29.s64 = 15;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bge cr6,0x82b272b0
	if (!cr6.lt) goto loc_82B272B0;
loc_82B271BC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b272b0
	if (cr6.eq) goto loc_82B272B0;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b271e4
	if (!cr6.eq) goto loc_82B271E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82b2720c
	goto loc_82B2720C;
loc_82B271E4:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b27204
	if (!cr6.eq) goto loc_82B27204;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b27208
	if (cr6.eq) goto loc_82B27208;
loc_82B27204:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B27208:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B2720C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b272b0
	if (!cr6.eq) goto loc_82B272B0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b272b0
	if (cr6.eq) goto loc_82B272B0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r29,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r29.u32);
	// stw r31,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r31.u32);
	// stb r31,884(r1)
	PPC_STORE_U8(ctx.r1.u32 + 884, ctx.r31.u8);
	// stw r29,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r29.u32);
	// stw r11,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r11.u32);
	// stw r31,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r31.u32);
	// stb r31,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r31.u8);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stw r31,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r31.u32);
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82B27258;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B27260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b27260
	if (!cr6.eq) goto loc_82B27260;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,884
	ctx.r3.s64 = ctx.r1.s64 + 884;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B27284;
	sub_8259CC28(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B272A4;
	sub_82B263E8(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x8378e240
	ctx.lr = 0x82B272AC;
	sub_8378E240(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82B272B0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(ctx.r25.u32, 10, xer);
	// blt cr6,0x82b271bc
	if (cr6.lt) goto loc_82B271BC;
	// lwz r11,1996(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1996);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b2766c
	if (cr6.eq) goto loc_82B2766C;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r29,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r29.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// stb r31,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r31.u8);
	// stw r29,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r29.u32);
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// stw r31,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r31.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x82B27310;
	sub_82D042A8(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// bl 0x8259cb28
	ctx.lr = 0x82B27324;
	sub_8259CB28(ctx, base);
	// lwz r11,1996(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1996);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// stw r21,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r21.u32);
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B27348;
	sub_82B263E8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x82B27350;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8378e240
	ctx.lr = 0x82B27358;
	sub_8378E240(ctx, base);
	// b 0x82b2766c
	goto loc_82B2766C;
loc_82B2735C:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r10,-892
	ctx.r27.s64 = ctx.r10.s64 + -892;
	// addi r28,r26,2048
	ctx.r28.s64 = ctx.r26.s64 + 2048;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r26,r11,29354
	ctx.r26.s64 = ctx.r11.s64 + 29354;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// bge cr6,0x82b27508
	if (!cr6.lt) goto loc_82B27508;
loc_82B27384:
	// addic. r11,r28,-36
	xer.ca = ctx.r28.u32 > 35;
	ctx.r11.s64 = ctx.r28.s64 + -36;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b27508
	if (cr0.eq) goto loc_82B27508;
	// ld r11,-36(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b273ac
	if (!cr6.eq) goto loc_82B273AC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82b273d4
	goto loc_82B273D4;
loc_82B273AC:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b273cc
	if (!cr6.eq) goto loc_82B273CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b273d0
	if (cr6.eq) goto loc_82B273D0;
loc_82B273CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B273D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B273D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b27508
	if (!cr6.eq) goto loc_82B27508;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B273EC;
	sub_837B0C10(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82b27450
	if (cr6.eq) goto loc_82B27450;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82b27450
	if (cr6.eq) goto loc_82B27450;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82b27414
	if (!cr6.eq) goto loc_82B27414;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,193
	ctx.r4.u64 = ctx.r4.u64 | 193;
	// b 0x82b27458
	goto loc_82B27458;
loc_82B27414:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82b27428
	if (!cr6.eq) goto loc_82B27428;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,100
	ctx.r4.u64 = ctx.r4.u64 | 100;
	// b 0x82b27458
	goto loc_82B27458;
loc_82B27428:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82b2743c
	if (!cr6.eq) goto loc_82B2743C;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,61
	ctx.r4.u64 = ctx.r4.u64 | 61;
	// b 0x82b27458
	goto loc_82B27458;
loc_82B2743C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b27460
	if (!cr6.eq) goto loc_82B27460;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
	// b 0x82b27458
	goto loc_82B27458;
loc_82B27450:
	// lis r4,31
	ctx.r4.s64 = 2031616;
	// ori r4,r4,80
	ctx.r4.u64 = ctx.r4.u64 | 80;
loc_82B27458:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d042a8
	ctx.lr = 0x82B27460;
	sub_82D042A8(ctx, base);
loc_82B27460:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r29,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stb r31,644(r1)
	PPC_STORE_U8(ctx.r1.u32 + 644, ctx.r31.u8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r29,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r29.u32);
	// stw r11,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r11.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// stw r31,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r31.u32);
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B2749C;
	sub_8259CB28(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,-36(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + -36);
	// bl 0x8311bf98
	ctx.lr = 0x82B274A8;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B274B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b274b0
	if (!cr6.eq) goto loc_82B274B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B274D4;
	sub_8259CC28(ctx, base);
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B274F4;
	sub_82B263E8(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8378e240
	ctx.lr = 0x82B274FC;
	sub_8378E240(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B27504;
	sub_8387E8E0(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82B27508:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplwi cr6,r25,100
	cr6.compare<uint32_t>(ctx.r25.u32, 100, xer);
	// blt cr6,0x82b27384
	if (cr6.lt) goto loc_82B27384;
	// b 0x82b2766c
	goto loc_82B2766C;
loc_82B2751C:
	// addis r11,r20,205
	ctx.r11.s64 = ctx.r20.s64 + 13434880;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// addi r11,r11,-18420
	ctx.r11.s64 = ctx.r11.s64 + -18420;
	// lis r22,-12288
	ctx.r22.s64 = -805306368;
	// addis r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 262144;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r24,r24,-21460
	ctx.r24.s64 = ctx.r24.s64 + -21460;
	// lis r27,-8192
	ctx.r27.s64 = -536870912;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r23,r11,-892
	ctx.r23.s64 = ctx.r11.s64 + -892;
loc_82B27544:
	// cmplwi cr6,r26,70
	cr6.compare<uint32_t>(ctx.r26.u32, 70, xer);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bge cr6,0x82b27554
	if (!cr6.lt) goto loc_82B27554;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82B27554:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b2765c
	if (cr6.eq) goto loc_82B2765C;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x825a2250
	ctx.lr = 0x82B27570;
	sub_825A2250(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2765c
	if (!cr6.eq) goto loc_82B2765C;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// bl 0x8314be30
	ctx.lr = 0x82B27590;
	sub_8314BE30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b275ac
	if (!cr6.eq) goto loc_82B275AC;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// bne cr6,0x82b2765c
	if (!cr6.eq) goto loc_82B2765C;
loc_82B275AC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82B275B8;
	sub_8311BF98(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	// neg r10,r8
	ctx.r10.s64 = -ctx.r8.s64;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,1156
	ctx.r3.s64 = ctx.r1.s64 + 1156;
	// and r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8259c908
	ctx.lr = 0x82B275EC;
	sub_8259C908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x8259c908
	ctx.lr = 0x82B275FC;
	sub_8259C908(ctx, base);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// stw r31,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r31.u32);
	// stw r31,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r9.u32);
loc_82B27614:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b27614
	if (!cr6.eq) goto loc_82B27614;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1156
	ctx.r3.s64 = ctx.r1.s64 + 1156;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B27638;
	sub_8259CC28(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r28,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r28.u32);
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x82b263e8
	ctx.lr = 0x82B27654;
	sub_82B263E8(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x8378e240
	ctx.lr = 0x82B2765C;
	sub_8378E240(ctx, base);
loc_82B2765C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,476
	ctx.r25.s64 = ctx.r25.s64 + 476;
	// cmplwi cr6,r26,70
	cr6.compare<uint32_t>(ctx.r26.u32, 70, xer);
	// blt cr6,0x82b27544
	if (cr6.lt) goto loc_82B27544;
loc_82B2766C:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r29,r30,112
	ctx.r29.s64 = ctx.r30.s64 + 112;
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b27704
	if (!cr6.eq) goto loc_82B27704;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x8259c908
	ctx.lr = 0x82B27690;
	sub_8259C908(ctx, base);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d042a8
	ctx.lr = 0x82B276A0;
	sub_82D042A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1236
	ctx.r3.s64 = ctx.r1.s64 + 1236;
	// bl 0x8259c908
	ctx.lr = 0x82B276B0;
	sub_8259C908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x8259c908
	ctx.lr = 0x82B276C0;
	sub_8259C908(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r11,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// addi r3,r1,1236
	ctx.r3.s64 = ctx.r1.s64 + 1236;
	// bl 0x8259cb28
	ctx.lr = 0x82B276DC;
	sub_8259CB28(ctx, base);
	// stw r31,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r31.u32);
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b263e8
	ctx.lr = 0x82B276EC;
	sub_82B263E8(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x8378e240
	ctx.lr = 0x82B276F4;
	sub_8378E240(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x8387e8e0
	ctx.lr = 0x82B276FC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B27704:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82b27734
	if (cr6.eq) goto loc_82B27734;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82b27734
	if (cr6.eq) goto loc_82B27734;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82b27754
	if (cr6.eq) goto loc_82B27754;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82b27754
	if (cr6.eq) goto loc_82B27754;
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r6,r11,20368
	ctx.r6.s64 = ctx.r11.s64 + 20368;
	// b 0x82b2773c
	goto loc_82B2773C;
loc_82B27734:
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// addi r6,r11,20440
	ctx.r6.s64 = ctx.r11.s64 + 20440;
loc_82B2773C:
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r9,r10
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// bl 0x82b264c8
	ctx.lr = 0x82B27754;
	sub_82B264C8(ctx, base);
loc_82B27754:
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2775C"))) PPC_WEAK_FUNC(sub_82B2775C);
PPC_FUNC_IMPL(__imp__sub_82B2775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B27760"))) PPC_WEAK_FUNC(sub_82B27760);
PPC_FUNC_IMPL(__imp__sub_82B27760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B27768;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B27774;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82b279a0
	if (cr6.eq) goto loc_82B279A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B27790;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// beq cr6,0x82b279a0
	if (cr6.eq) goto loc_82B279A0;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,29596
	ctx.r26.s64 = ctx.r11.s64 + 29596;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B277C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b279a0
	if (cr6.eq) goto loc_82B279A0;
	// bl 0x831156e8
	ctx.lr = 0x82B277D0;
	sub_831156E8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r26,-276
	ctx.r5.s64 = ctx.r26.s64 + -276;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x831178a0
	ctx.lr = 0x82B277F0;
	sub_831178A0(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// addi r8,r9,29724
	ctx.r8.s64 = ctx.r9.s64 + 29724;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r6,r4,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x82d30340
	ctx.lr = 0x82B27830;
	sub_82D30340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25030
	ctx.lr = 0x82B27838;
	sub_82B25030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b26a68
	ctx.lr = 0x82B27840;
	sub_82B26A68(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B27854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B27864;
	sub_82D33DB0(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82B27868;
	sub_82D33C10(ctx, base);
	// li r27,68
	ctx.r27.s64 = 68;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b278f8
	if (cr6.eq) goto loc_82B278F8;
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82B2787C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b278f8
	if (!cr6.lt) goto loc_82B278F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82B278A0;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B278A8;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b278d8
	if (cr6.eq) goto loc_82B278D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b279ac
	if (!cr6.gt) goto loc_82B279AC;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25468
	ctx.lr = 0x82B278D8;
	sub_82B25468(ctx, base);
loc_82B278D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// bl 0x82d33db0
	ctx.lr = 0x82B278EC;
	sub_82D33DB0(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82B278F0;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b2787c
	if (cr6.lt) goto loc_82B2787C;
loc_82B278F8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B27914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b279a0
	if (cr6.eq) goto loc_82B279A0;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319d4d0
	ctx.lr = 0x82B2792C;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B27940;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b27960
	if (cr6.lt) goto loc_82B27960;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B27960;
	sub_825952B8(ctx, base);
loc_82B27960:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r5,r8,r27
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82B27994;
	sub_82D20F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B279A0;
	sub_83102DB0(ctx, base);
loc_82B279A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B279AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B279B8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B279B8"))) PPC_WEAK_FUNC(sub_82B279B8);
PPC_FUNC_IMPL(__imp__sub_82B279B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B279C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B279D8;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B279F0;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// addi r9,r11,30920
	ctx.r9.s64 = ctx.r11.s64 + 30920;
	// stb r29,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r29.u8);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-796(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -796);
	// bl 0x82d20ae0
	ctx.lr = 0x82B27A20;
	sub_82D20AE0(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,30444
	ctx.r4.s64 = ctx.r6.s64 + 30444;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B27A34;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B27A40"))) PPC_WEAK_FUNC(sub_82B27A40);
PPC_FUNC_IMPL(__imp__sub_82B27A40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B27A70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B27A80;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B27A94"))) PPC_WEAK_FUNC(sub_82B27A94);
PPC_FUNC_IMPL(__imp__sub_82B27A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B27A98"))) PPC_WEAK_FUNC(sub_82B27A98);
PPC_FUNC_IMPL(__imp__sub_82B27A98) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,30920
	ctx.r9.s64 = ctx.r11.s64 + 30920;
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
	ctx.lr = 0x82B27AD0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b27ae8
	if (cr6.eq) goto loc_82B27AE8;
	// bl 0x82416268
	ctx.lr = 0x82B27AE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B27AE8:
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

__attribute__((alias("__imp__sub_82B27B00"))) PPC_WEAK_FUNC(sub_82B27B00);
PPC_FUNC_IMPL(__imp__sub_82B27B00) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,25
	ctx.r7.s64 = 25;
	// addi r6,r11,30372
	ctx.r6.s64 = ctx.r11.s64 + 30372;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B27B34;
	sub_827A8810(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b27b84
	if (!cr6.eq) goto loc_82B27B84;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b27b4c
	if (cr6.lt) goto loc_82B27B4C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B27B4C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B27B68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b27bc8
	if (cr6.eq) goto loc_82B27BC8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b279b8
	ctx.lr = 0x82B27B80;
	sub_82B279B8(ctx, base);
	// b 0x82b27bcc
	goto loc_82B27BCC;
loc_82B27B84:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b27b90
	if (cr6.lt) goto loc_82B27B90;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B27B90:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B27BAC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b27bc8
	if (cr6.eq) goto loc_82B27BC8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b279b8
	ctx.lr = 0x82B27BC4;
	sub_82B279B8(ctx, base);
	// b 0x82b27bcc
	goto loc_82B27BCC;
loc_82B27BC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B27BCC:
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

__attribute__((alias("__imp__sub_82B27BE4"))) PPC_WEAK_FUNC(sub_82B27BE4);
PPC_FUNC_IMPL(__imp__sub_82B27BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B27BE8"))) PPC_WEAK_FUNC(sub_82B27BE8);
PPC_FUNC_IMPL(__imp__sub_82B27BE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B27C04;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b27c3c
	if (cr6.eq) goto loc_82B27C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B27C14;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82b27c3c
	if (cr6.eq) goto loc_82B27C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B27C24;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82b27c3c
	if (cr6.eq) goto loc_82B27C3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82B27C38;
	sub_82D19858(ctx, base);
	// b 0x82b27ce4
	goto loc_82B27CE4;
loc_82B27C3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B27C58;
	sub_82D1C1A8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82b27c84
	if (cr6.lt) goto loc_82B27C84;
	// beq cr6,0x82b27c78
	if (cr6.eq) goto loc_82B27C78;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x82b27c94
	if (!cr6.lt) goto loc_82B27C94;
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// ori r4,r4,169
	ctx.r4.u64 = ctx.r4.u64 | 169;
	// b 0x82b27c8c
	goto loc_82B27C8C;
loc_82B27C78:
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// ori r4,r4,168
	ctx.r4.u64 = ctx.r4.u64 | 168;
	// b 0x82b27c8c
	goto loc_82B27C8C;
loc_82B27C84:
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
loc_82B27C8C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B27C94;
	sub_82D042A8(ctx, base);
loc_82B27C94:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B27CAC;
	sub_82D2FA90(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82B27CB8;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B27CC4;
	sub_83103100(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b27ce4
	if (cr6.lt) goto loc_82B27CE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B27CE4;
	sub_825952B8(ctx, base);
loc_82B27CE4:
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

__attribute__((alias("__imp__sub_82B27CFC"))) PPC_WEAK_FUNC(sub_82B27CFC);
PPC_FUNC_IMPL(__imp__sub_82B27CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B27D00"))) PPC_WEAK_FUNC(sub_82B27D00);
PPC_FUNC_IMPL(__imp__sub_82B27D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B27D08;
	__savegprlr_19(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B27D14;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B27D24;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B27D2C;
	sub_82D33DB0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r31,10
	ctx.r31.s64 = 10;
	// bl 0x82d33c10
	ctx.lr = 0x82B27D40;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bge cr6,0x82b27d54
	if (!cr6.lt) goto loc_82B27D54;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B27D50;
	sub_82D33C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82B27D54:
	// bl 0x831156e8
	ctx.lr = 0x82B27D58;
	sub_831156E8(ctx, base);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r23,r11,30828
	ctx.r23.s64 = ctx.r11.s64 + 30828;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r22,48(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r5,r23,-716
	ctx.r5.s64 = ctx.r23.s64 + -716;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x831178a0
	ctx.lr = 0x82B27D84;
	sub_831178A0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8311c148
	ctx.lr = 0x82B27D90;
	sub_8311C148(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B27D98;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-356
	ctx.r4.s64 = ctx.r23.s64 + -356;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B27DB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,650
	ctx.r4.u64 = ctx.r4.u64 | 650;
	// bl 0x82d30340
	ctx.lr = 0x82B27DC8;
	sub_82D30340(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B27DD8;
	sub_82D1ED60(ctx, base);
	// addi r5,r23,-344
	ctx.r5.s64 = ctx.r23.s64 + -344;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x831d0b08
	ctx.lr = 0x82B27DEC;
	sub_831D0B08(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B27DF4;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B27E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r23,-328
	ctx.r5.s64 = ctx.r23.s64 + -328;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x831d0b08
	ctx.lr = 0x82B27E20;
	sub_831D0B08(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B27E28;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B27E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B27E48;
	sub_82D19A78(ctx, base);
	// addi r4,r23,-308
	ctx.r4.s64 = ctx.r23.s64 + -308;
	// bl 0x82d2f098
	ctx.lr = 0x82B27E50;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B27E64;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-300
	ctx.r4.s64 = ctx.r23.s64 + -300;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B27E7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B27E90;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B27EA0;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B27EB0;
	sub_82D19788(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B27EB4;
	sub_831156E8(ctx, base);
	// addis r24,r22,222
	ctx.r24.s64 = ctx.r22.s64 + 14548992;
	// addis r30,r22,205
	ctx.r30.s64 = ctx.r22.s64 + 13434880;
	// addi r24,r24,-8252
	ctx.r24.s64 = ctx.r24.s64 + -8252;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r30,r30,-18420
	ctx.r30.s64 = ctx.r30.s64 + -18420;
	// lwz r9,40(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x82d33db0
	ctx.lr = 0x82B27ED8;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B27EF0;
	sub_82D21408(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-288
	ctx.r4.s64 = ctx.r23.s64 + -288;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B27F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-280
	ctx.r4.s64 = ctx.r23.s64 + -280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B27F30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,718
	ctx.r4.u64 = ctx.r4.u64 | 718;
	// bl 0x82d29598
	ctx.lr = 0x82B27F44;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-272
	ctx.r4.s64 = ctx.r23.s64 + -272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B27F5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B27F74;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B27F88;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B27F90;
	sub_8387E8E0(ctx, base);
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r24,356
	ctx.r11.s64 = ctx.r24.s64 + 356;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82B27FA0:
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b27fc0
	if (!cr6.lt) goto loc_82B27FC0;
	// addic. r9,r11,-52
	xer.ca = ctx.r11.u32 > 51;
	ctx.r9.s64 = ctx.r11.s64 + -52;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b27fc0
	if (cr0.eq) goto loc_82B27FC0;
	// lwz r9,-40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82B27FC0:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b27fe0
	if (!cr6.lt) goto loc_82B27FE0;
	// addic. r9,r11,-12
	xer.ca = ctx.r11.u32 > 11;
	ctx.r9.s64 = ctx.r11.s64 + -12;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b27fe0
	if (cr0.eq) goto loc_82B27FE0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82B27FE0:
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bge cr6,0x82b27ffc
	if (!cr6.lt) goto loc_82B27FFC;
	// addic. r9,r11,28
	xer.ca = ctx.r11.u32 > 4294967267;
	ctx.r9.s64 = ctx.r11.s64 + 28;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b27ffc
	if (cr0.eq) goto loc_82B27FFC;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82B27FFC:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b2801c
	if (!cr6.lt) goto loc_82B2801C;
	// addic. r9,r11,68
	xer.ca = ctx.r11.u32 > 4294967227;
	ctx.r9.s64 = ctx.r11.s64 + 68;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b2801c
	if (cr0.eq) goto loc_82B2801C;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82B2801C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82b27fa0
	if (cr6.lt) goto loc_82B27FA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2803C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B28054;
	sub_82D21408(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-264
	ctx.r4.s64 = ctx.r23.s64 + -264;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-256
	ctx.r4.s64 = ctx.r23.s64 + -256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B28094;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,287
	ctx.r4.u64 = ctx.r4.u64 | 287;
	// bl 0x82d29598
	ctx.lr = 0x82B280A8;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-248
	ctx.r4.s64 = ctx.r23.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B280C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B280D8;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B280EC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B280F4;
	sub_8387E8E0(ctx, base);
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82d33db0
	ctx.lr = 0x82B28108;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B28120;
	sub_82D21408(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-240
	ctx.r4.s64 = ctx.r23.s64 + -240;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-232
	ctx.r4.s64 = ctx.r23.s64 + -232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B28160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,288
	ctx.r4.u64 = ctx.r4.u64 | 288;
	// bl 0x82d29598
	ctx.lr = 0x82B28174;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-224
	ctx.r4.s64 = ctx.r23.s64 + -224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2818C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B281A4;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B281B8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B281C0;
	sub_8387E8E0(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r24,100
	ctx.r11.s64 = ctx.r24.s64 + 100;
	// lwz r7,-764(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -764);
loc_82B281D8:
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b28204
	if (!cr6.lt) goto loc_82B28204;
	// addic. r9,r11,-40
	xer.ca = ctx.r11.u32 > 39;
	ctx.r9.s64 = ctx.r11.s64 + -40;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28204
	if (cr0.eq) goto loc_82B28204;
	// lwz r9,-40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b28204
	if (cr6.eq) goto loc_82B28204;
	// lwz r9,-24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82B28204:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b28230
	if (!cr6.lt) goto loc_82B28230;
	// addic. r9,r11,-16
	xer.ca = ctx.r11.u32 > 15;
	ctx.r9.s64 = ctx.r11.s64 + -16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28230
	if (cr0.eq) goto loc_82B28230;
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b28230
	if (cr6.eq) goto loc_82B28230;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82B28230:
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// bge cr6,0x82b28258
	if (!cr6.lt) goto loc_82B28258;
	// addic. r9,r11,8
	xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r9.s64 = ctx.r11.s64 + 8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28258
	if (cr0.eq) goto loc_82B28258;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b28258
	if (cr6.eq) goto loc_82B28258;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82B28258:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b28284
	if (!cr6.lt) goto loc_82B28284;
	// addic. r9,r11,32
	xer.ca = ctx.r11.u32 > 4294967263;
	ctx.r9.s64 = ctx.r11.s64 + 32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28284
	if (cr0.eq) goto loc_82B28284;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b28284
	if (cr6.eq) goto loc_82B28284;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82B28284:
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b282b0
	if (!cr6.lt) goto loc_82B282B0;
	// addic. r9,r11,56
	xer.ca = ctx.r11.u32 > 4294967239;
	ctx.r9.s64 = ctx.r11.s64 + 56;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b282b0
	if (cr0.eq) goto loc_82B282B0;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b282b0
	if (cr6.eq) goto loc_82B282B0;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82B282B0:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// blt cr6,0x82b281d8
	if (cr6.lt) goto loc_82B281D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B282D0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B282F0;
	sub_82D21408(ctx, base);
	// addi r4,r23,-216
	ctx.r4.s64 = ctx.r23.s64 + -216;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B28304;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-208
	ctx.r4.s64 = ctx.r23.s64 + -208;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-200
	ctx.r4.s64 = ctx.r23.s64 + -200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B2833C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,294
	ctx.r4.u64 = ctx.r4.u64 | 294;
	// bl 0x82d29598
	ctx.lr = 0x82B28350;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-192
	ctx.r4.s64 = ctx.r23.s64 + -192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B28380;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B28394;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2839C;
	sub_8387E8E0(ctx, base);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r11,r24,352
	ctx.r11.s64 = ctx.r24.s64 + 352;
loc_82B283AC:
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b283cc
	if (!cr6.lt) goto loc_82B283CC;
	// addic. r9,r11,-48
	xer.ca = ctx.r11.u32 > 47;
	ctx.r9.s64 = ctx.r11.s64 + -48;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b283cc
	if (cr0.eq) goto loc_82B283CC;
	// lwz r9,-40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82B283CC:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b283ec
	if (!cr6.lt) goto loc_82B283EC;
	// addic. r9,r11,-8
	xer.ca = ctx.r11.u32 > 7;
	ctx.r9.s64 = ctx.r11.s64 + -8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b283ec
	if (cr0.eq) goto loc_82B283EC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82B283EC:
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bge cr6,0x82b28408
	if (!cr6.lt) goto loc_82B28408;
	// addic. r9,r11,32
	xer.ca = ctx.r11.u32 > 4294967263;
	ctx.r9.s64 = ctx.r11.s64 + 32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28408
	if (cr0.eq) goto loc_82B28408;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82B28408:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b28428
	if (!cr6.lt) goto loc_82B28428;
	// addic. r9,r11,72
	xer.ca = ctx.r11.u32 > 4294967223;
	ctx.r9.s64 = ctx.r11.s64 + 72;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28428
	if (cr0.eq) goto loc_82B28428;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82B28428:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82b283ac
	if (cr6.lt) goto loc_82B283AC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B28448;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B28468;
	sub_82D21408(ctx, base);
	// addi r4,r23,-184
	ctx.r4.s64 = ctx.r23.s64 + -184;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B2847C;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-176
	ctx.r4.s64 = ctx.r23.s64 + -176;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-168
	ctx.r4.s64 = ctx.r23.s64 + -168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B284B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,721
	ctx.r4.u64 = ctx.r4.u64 | 721;
	// bl 0x82d29598
	ctx.lr = 0x82B284C8;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-160
	ctx.r4.s64 = ctx.r23.s64 + -160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B284E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B284F8;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B2850C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B28514;
	sub_8387E8E0(ctx, base);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,92(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,164(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,188(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 188);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,212(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 212);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,236(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 236);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,260(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,284(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 284);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d33db0
	ctx.lr = 0x82B28598;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B285B8;
	sub_82D21408(ctx, base);
	// addi r4,r23,-152
	ctx.r4.s64 = ctx.r23.s64 + -152;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B285CC;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-148
	ctx.r4.s64 = ctx.r23.s64 + -148;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B285E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-140
	ctx.r4.s64 = ctx.r23.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B28604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,719
	ctx.r4.u64 = ctx.r4.u64 | 719;
	// bl 0x82d29598
	ctx.lr = 0x82B28618;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-132
	ctx.r4.s64 = ctx.r23.s64 + -132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B28648;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B2865C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B28664;
	sub_8387E8E0(ctx, base);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r11,r24,2084
	ctx.r11.s64 = ctx.r24.s64 + 2084;
loc_82B28674:
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// bge cr6,0x82b28694
	if (!cr6.lt) goto loc_82B28694;
	// addic. r9,r11,-72
	xer.ca = ctx.r11.u32 > 71;
	ctx.r9.s64 = ctx.r11.s64 + -72;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28694
	if (cr0.eq) goto loc_82B28694;
	// lwz r9,-40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82B28694:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// bge cr6,0x82b286b4
	if (!cr6.lt) goto loc_82B286B4;
	// addic. r9,r11,-32
	xer.ca = ctx.r11.u32 > 31;
	ctx.r9.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b286b4
	if (cr0.eq) goto loc_82B286B4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82B286B4:
	// cmplwi cr6,r8,100
	cr6.compare<uint32_t>(ctx.r8.u32, 100, xer);
	// bge cr6,0x82b286d0
	if (!cr6.lt) goto loc_82B286D0;
	// addic. r9,r11,8
	xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r9.s64 = ctx.r11.s64 + 8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b286d0
	if (cr0.eq) goto loc_82B286D0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82B286D0:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// bge cr6,0x82b286f0
	if (!cr6.lt) goto loc_82B286F0;
	// addic. r9,r11,48
	xer.ca = ctx.r11.u32 > 4294967247;
	ctx.r9.s64 = ctx.r11.s64 + 48;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b286f0
	if (cr0.eq) goto loc_82B286F0;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82B286F0:
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// bge cr6,0x82b28710
	if (!cr6.lt) goto loc_82B28710;
	// addic. r9,r11,88
	xer.ca = ctx.r11.u32 > 4294967207;
	ctx.r9.s64 = ctx.r11.s64 + 88;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28710
	if (cr0.eq) goto loc_82B28710;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82B28710:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// blt cr6,0x82b28674
	if (cr6.lt) goto loc_82B28674;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B28730;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B28750;
	sub_82D21408(ctx, base);
	// addi r4,r23,-124
	ctx.r4.s64 = ctx.r23.s64 + -124;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B28764;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-112
	ctx.r4.s64 = ctx.r23.s64 + -112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-104
	ctx.r4.s64 = ctx.r23.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B2879C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,254
	ctx.r4.u64 = ctx.r4.u64 | 254;
	// bl 0x82d29598
	ctx.lr = 0x82B287B0;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-96
	ctx.r4.s64 = ctx.r23.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B287C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B287E0;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B287F4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B287FC;
	sub_8387E8E0(ctx, base);
	// addis r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 262144;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// addi r27,r27,-21460
	ctx.r27.s64 = ctx.r27.s64 + -21460;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lis r25,-8192
	ctx.r25.s64 = -536870912;
	// lis r26,-12288
	ctx.r26.s64 = -805306368;
	// addi r28,r11,-760
	ctx.r28.s64 = ctx.r11.s64 + -760;
loc_82B28820:
	// cmplwi cr6,r30,70
	cr6.compare<uint32_t>(ctx.r30.u32, 70, xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bge cr6,0x82b28830
	if (!cr6.lt) goto loc_82B28830;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82B28830:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b288f0
	if (cr6.eq) goto loc_82B288F0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// bne cr6,0x82b2885c
	if (!cr6.eq) goto loc_82B2885C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b28888
	goto loc_82B28888;
loc_82B2885C:
	// lhz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b28880
	if (!cr6.eq) goto loc_82B28880;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b28884
	if (cr6.eq) goto loc_82B28884;
loc_82B28880:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82B28884:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B28888:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b288f0
	if (!cr6.eq) goto loc_82B288F0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// bl 0x8314be30
	ctx.lr = 0x82B288A8;
	sub_8314BE30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b288c4
	if (cr6.eq) goto loc_82B288C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b288d4
	if (!cr6.eq) goto loc_82B288D4;
loc_82B288C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b288f0
	if (!cr6.eq) goto loc_82B288F0;
loc_82B288D4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82B288E0;
	sub_8311BF98(ctx, base);
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
loc_82B288F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,476
	ctx.r29.s64 = ctx.r29.s64 + 476;
	// cmplwi cr6,r30,70
	cr6.compare<uint32_t>(ctx.r30.u32, 70, xer);
	// blt cr6,0x82b28820
	if (cr6.lt) goto loc_82B28820;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2890C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B2892C;
	sub_82D21408(ctx, base);
	// addi r4,r23,-88
	ctx.r4.s64 = ctx.r23.s64 + -88;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B28940;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-80
	ctx.r4.s64 = ctx.r23.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2895C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-72
	ctx.r4.s64 = ctx.r23.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B28978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,223
	ctx.r4.u64 = ctx.r4.u64 | 223;
	// bl 0x82d29598
	ctx.lr = 0x82B2898C;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-64
	ctx.r4.s64 = ctx.r23.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B289A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B289BC;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B289D0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B289D8;
	sub_8387E8E0(ctx, base);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r11,r24,328
	ctx.r11.s64 = ctx.r24.s64 + 328;
loc_82B289E8:
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b28a20
	if (!cr6.lt) goto loc_82B28A20;
	// addic. r9,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r9.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28a20
	if (cr0.eq) goto loc_82B28A20;
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82B28A20:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b28a58
	if (!cr6.lt) goto loc_82B28A58;
	// addic. r9,r11,16
	xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r9.s64 = ctx.r11.s64 + 16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28a58
	if (cr0.eq) goto loc_82B28A58;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82B28A58:
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bge cr6,0x82b28a8c
	if (!cr6.lt) goto loc_82B28A8C;
	// addic. r9,r11,56
	xer.ca = ctx.r11.u32 > 4294967239;
	ctx.r9.s64 = ctx.r11.s64 + 56;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28a8c
	if (cr0.eq) goto loc_82B28A8C;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82B28A8C:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82b28ac4
	if (!cr6.lt) goto loc_82B28AC4;
	// addic. r9,r11,96
	xer.ca = ctx.r11.u32 > 4294967199;
	ctx.r9.s64 = ctx.r11.s64 + 96;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28ac4
	if (cr0.eq) goto loc_82B28AC4;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82B28AC4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82b289e8
	if (cr6.lt) goto loc_82B289E8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B28AE4;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B28B04;
	sub_82D21408(ctx, base);
	// addi r4,r23,-56
	ctx.r4.s64 = ctx.r23.s64 + -56;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B28B18;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-48
	ctx.r4.s64 = ctx.r23.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-40
	ctx.r4.s64 = ctx.r23.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B28B50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,720
	ctx.r4.u64 = ctx.r4.u64 | 720;
	// bl 0x82d29598
	ctx.lr = 0x82B28B64;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-32
	ctx.r4.s64 = ctx.r23.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28B7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B28B94;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B28BA8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B28BB0;
	sub_8387E8E0(ctx, base);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r10,r24,1668
	ctx.r10.s64 = ctx.r24.s64 + 1668;
loc_82B28BC0:
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b28be0
	if (!cr6.lt) goto loc_82B28BE0;
	// addic. r9,r10,-72
	xer.ca = ctx.r10.u32 > 71;
	ctx.r9.s64 = ctx.r10.s64 + -72;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28be0
	if (cr0.eq) goto loc_82B28BE0;
	// lwz r9,-40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82B28BE0:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b28c00
	if (!cr6.lt) goto loc_82B28C00;
	// addic. r9,r10,-32
	xer.ca = ctx.r10.u32 > 31;
	ctx.r9.s64 = ctx.r10.s64 + -32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28c00
	if (cr0.eq) goto loc_82B28C00;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82B28C00:
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// bge cr6,0x82b28c1c
	if (!cr6.lt) goto loc_82B28C1C;
	// addic. r9,r10,8
	xer.ca = ctx.r10.u32 > 4294967287;
	ctx.r9.s64 = ctx.r10.s64 + 8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28c1c
	if (cr0.eq) goto loc_82B28C1C;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82B28C1C:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b28c3c
	if (!cr6.lt) goto loc_82B28C3C;
	// addic. r9,r10,48
	xer.ca = ctx.r10.u32 > 4294967247;
	ctx.r9.s64 = ctx.r10.s64 + 48;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28c3c
	if (cr0.eq) goto loc_82B28C3C;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82B28C3C:
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82b28c5c
	if (!cr6.lt) goto loc_82B28C5C;
	// addic. r9,r10,88
	xer.ca = ctx.r10.u32 > 4294967207;
	ctx.r9.s64 = ctx.r10.s64 + 88;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b28c5c
	if (cr0.eq) goto loc_82B28C5C;
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82B28C5C:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// blt cr6,0x82b28bc0
	if (cr6.lt) goto loc_82B28BC0;
	// lwz r10,1996(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1996);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82d33db0
	ctx.lr = 0x82B28C88;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B28CA8;
	sub_82D21408(ctx, base);
	// addi r4,r23,-24
	ctx.r4.s64 = ctx.r23.s64 + -24;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B28CBC;
	sub_82D233B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r23,-16
	ctx.r4.s64 = ctx.r23.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28CD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,-8
	ctx.r4.s64 = ctx.r23.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B28CF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,282
	ctx.r4.u64 = ctx.r4.u64 | 282;
	// bl 0x82d29598
	ctx.lr = 0x82B28D08;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B28D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28db8
	if (cr6.eq) goto loc_82B28DB8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319d4d0
	ctx.lr = 0x82B28D38;
	sub_8319D4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B28D4C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B28D54;
	sub_8387E8E0(ctx, base);
	// lis r11,270
	ctx.r11.s64 = 17694720;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// ori r9,r11,166
	ctx.r9.u64 = ctx.r11.u64 | 166;
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// li r31,10
	ctx.r31.s64 = 10;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stb r20,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r20.u8);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_82B28D80:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x830f6558
	ctx.lr = 0x82B28D8C;
	sub_830F6558(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b28d80
	if (!cr0.eq) goto loc_82B28D80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B28DA4;
	sub_82D24C38(ctx, base);
	// stb r20,6016(r24)
	PPC_STORE_U8(ctx.r24.u32 + 6016, ctx.r20.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838760e0
	ctx.lr = 0x82B28DB0;
	sub_838760E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82acdc18
	ctx.lr = 0x82B28DB8;
	sub_82ACDC18(ctx, base);
loc_82B28DB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B28DC4"))) PPC_WEAK_FUNC(sub_82B28DC4);
PPC_FUNC_IMPL(__imp__sub_82B28DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B28DC8"))) PPC_WEAK_FUNC(sub_82B28DC8);
PPC_FUNC_IMPL(__imp__sub_82B28DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// bne cr6,0x82b28e24
	if (!cr6.eq) goto loc_82B28E24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b28e10
	if (!cr6.eq) goto loc_82B28E10;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b28e14
	if (cr6.eq) goto loc_82B28E14;
loc_82B28E10:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B28E14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b28e28
	if (!cr6.eq) goto loc_82B28E28;
loc_82B28E24:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B28E28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B28E3C"))) PPC_WEAK_FUNC(sub_82B28E3C);
PPC_FUNC_IMPL(__imp__sub_82B28E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B28E40"))) PPC_WEAK_FUNC(sub_82B28E40);
PPC_FUNC_IMPL(__imp__sub_82B28E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B28E44:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b28e84
	if (!cr6.eq) goto loc_82B28E84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82b28e44
	if (cr6.lt) goto loc_82B28E44;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
loc_82B28E64:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b28e84
	if (!cr6.eq) goto loc_82B28E84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82b28e64
	if (cr6.lt) goto loc_82B28E64;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B28E84:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B28E8C"))) PPC_WEAK_FUNC(sub_82B28E8C);
PPC_FUNC_IMPL(__imp__sub_82B28E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B28E90"))) PPC_WEAK_FUNC(sub_82B28E90);
PPC_FUNC_IMPL(__imp__sub_82B28E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r3,1920
	ctx.r10.s64 = ctx.r3.s64 + 1920;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B28E98:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b28ed8
	if (!cr6.eq) goto loc_82B28ED8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82b28e98
	if (cr6.lt) goto loc_82B28E98;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
loc_82B28EB8:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b28ed8
	if (!cr6.eq) goto loc_82B28ED8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82b28eb8
	if (cr6.lt) goto loc_82B28EB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B28ED8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B28EE0"))) PPC_WEAK_FUNC(sub_82B28EE0);
PPC_FUNC_IMPL(__imp__sub_82B28EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B28EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82f00728
	ctx.lr = 0x82B28EF8;
	sub_82F00728(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B28F14;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b28f64
	if (cr6.eq) goto loc_82B28F64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bed268
	ctx.lr = 0x82B28F2C;
	sub_82BED268(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addis r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 65536;
	// addi r9,r11,31960
	ctx.r9.s64 = ctx.r11.s64 + 31960;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// addi r7,r7,19032
	ctx.r7.s64 = ctx.r7.s64 + 19032;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B28F64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B28F70"))) PPC_WEAK_FUNC(sub_82B28F70);
PPC_FUNC_IMPL(__imp__sub_82B28F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b28fd8
	if (cr6.eq) goto loc_82B28FD8;
	// bdz 0x82b28ff8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B28FF8;
	// bdz 0x82b28f98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B28F98;
	// bdz 0x82b28fb8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B28FB8;
	// b 0x82b29018
	goto loc_82B29018;
loc_82B28F98:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,312(r10)
	PPC_STORE_U64(ctx.r10.u32 + 312, ctx.r4.u64);
	// stb r11,304(r10)
	PPC_STORE_U8(ctx.r10.u32 + 304, ctx.r11.u8);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// std r5,320(r9)
	PPC_STORE_U64(ctx.r9.u32 + 320, ctx.r5.u64);
	// stb r11,304(r9)
	PPC_STORE_U8(ctx.r9.u32 + 304, ctx.r11.u8);
	// blr 
	return;
loc_82B28FB8:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,272(r10)
	PPC_STORE_U64(ctx.r10.u32 + 272, ctx.r4.u64);
	// stb r11,264(r10)
	PPC_STORE_U8(ctx.r10.u32 + 264, ctx.r11.u8);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// std r5,280(r9)
	PPC_STORE_U64(ctx.r9.u32 + 280, ctx.r5.u64);
	// stb r11,264(r9)
	PPC_STORE_U8(ctx.r9.u32 + 264, ctx.r11.u8);
	// blr 
	return;
loc_82B28FD8:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,184(r10)
	PPC_STORE_U8(ctx.r10.u32 + 184, ctx.r11.u8);
	// stw r4,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r4.u32);
	// lwz r7,148(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r5,192(r7)
	PPC_STORE_U32(ctx.r7.u32 + 192, ctx.r5.u32);
	// stb r11,184(r7)
	PPC_STORE_U8(ctx.r7.u32 + 184, ctx.r11.u8);
	// blr 
	return;
loc_82B28FF8:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 208, ctx.r4.u32);
	// stb r11,204(r10)
	PPC_STORE_U8(ctx.r10.u32 + 204, ctx.r11.u8);
	// lwz r7,148(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r5,212(r7)
	PPC_STORE_U32(ctx.r7.u32 + 212, ctx.r5.u32);
	// stb r11,204(r7)
	PPC_STORE_U8(ctx.r7.u32 + 204, ctx.r11.u8);
	// blr 
	return;
loc_82B29018:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r4.u32);
	// stb r11,244(r10)
	PPC_STORE_U8(ctx.r10.u32 + 244, ctx.r11.u8);
	// lwz r7,148(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r5,252(r7)
	PPC_STORE_U32(ctx.r7.u32 + 252, ctx.r5.u32);
	// stb r11,244(r7)
	PPC_STORE_U8(ctx.r7.u32 + 244, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29038"))) PPC_WEAK_FUNC(sub_82B29038);
PPC_FUNC_IMPL(__imp__sub_82B29038) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2904C"))) PPC_WEAK_FUNC(sub_82B2904C);
PPC_FUNC_IMPL(__imp__sub_82B2904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29050"))) PPC_WEAK_FUNC(sub_82B29050);
PPC_FUNC_IMPL(__imp__sub_82B29050) {
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
	// bl 0x8308e078
	ctx.lr = 0x82B29068;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,191
	ctx.r3.s64 = 191;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d444b0
	ctx.lr = 0x82B29078;
	sub_82D444B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2908c
	if (cr6.eq) goto loc_82B2908C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B2908C;
	sub_83103100(ctx, base);
loc_82B2908C:
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

__attribute__((alias("__imp__sub_82B290A0"))) PPC_WEAK_FUNC(sub_82B290A0);
PPC_FUNC_IMPL(__imp__sub_82B290A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r10,98
	cr6.compare<uint32_t>(ctx.r10.u32, 98, xer);
	// blt cr6,0x82b290b4
	if (cr6.lt) goto loc_82B290B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b290d4
	goto loc_82B290D4;
loc_82B290B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b290d0
	if (!cr6.eq) goto loc_82B290D0;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82b290d4
	if (cr6.eq) goto loc_82B290D4;
loc_82B290D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B290D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b290f8
	if (!cr6.eq) goto loc_82B290F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,98
	cr6.compare<uint32_t>(ctx.r10.u32, 98, xer);
	// blt cr6,0x82b290b4
	if (cr6.lt) goto loc_82B290B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B290F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B29100"))) PPC_WEAK_FUNC(sub_82B29100);
PPC_FUNC_IMPL(__imp__sub_82B29100) {
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
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x82b290a0
	ctx.lr = 0x82B2911C;
	sub_82B290A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b29138
	if (!cr6.eq) goto loc_82B29138;
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82b2913c
	if (cr6.eq) goto loc_82B2913C;
loc_82B29138:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B2913C:
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

__attribute__((alias("__imp__sub_82B29154"))) PPC_WEAK_FUNC(sub_82B29154);
PPC_FUNC_IMPL(__imp__sub_82B29154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29158"))) PPC_WEAK_FUNC(sub_82B29158);
PPC_FUNC_IMPL(__imp__sub_82B29158) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,31960
	ctx.r9.s64 = ctx.r11.s64 + 31960;
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
	// bl 0x82bed1d0
	ctx.lr = 0x82B29190;
	sub_82BED1D0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b291a8
	if (cr6.eq) goto loc_82B291A8;
	// bl 0x82416268
	ctx.lr = 0x82B291A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B291A8:
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

__attribute__((alias("__imp__sub_82B291C0"))) PPC_WEAK_FUNC(sub_82B291C0);
PPC_FUNC_IMPL(__imp__sub_82B291C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// beq cr6,0x82b29310
	if (cr6.eq) goto loc_82B29310;
	// cmpwi cr6,r5,14
	cr6.compare<int32_t>(ctx.r5.s32, 14, xer);
	// bne cr6,0x82b29318
	if (!cr6.eq) goto loc_82B29318;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82b29318
	if (!cr6.lt) goto loc_82B29318;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b292f0
	if (cr6.gt) goto loc_82B292F0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b2926c
	if (cr6.eq) goto loc_82B2926C;
	// bdz 0x82b29298
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B29298;
	// bdz 0x82b292c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B292C4;
	// bdnz 0x82b29240
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29240;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1912
	ctx.r8.s64 = ctx.r11.s64 + 1912;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B2922C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82b2922c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2922C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r11.u8);
	// b 0x82b29374
	goto loc_82B29374;
loc_82B29240:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1912
	ctx.r8.s64 = ctx.r11.s64 + 1912;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B29258:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82b29258
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29258;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// b 0x82b29374
	goto loc_82B29374;
loc_82B2926C:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1912
	ctx.r8.s64 = ctx.r11.s64 + 1912;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B29284:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82b29284
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29284;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// b 0x82b29374
	goto loc_82B29374;
loc_82B29298:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1912
	ctx.r8.s64 = ctx.r11.s64 + 1912;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B292B0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82b292b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B292B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// b 0x82b29374
	goto loc_82B29374;
loc_82B292C4:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1912
	ctx.r8.s64 = ctx.r11.s64 + 1912;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B292DC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82b292dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B292DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// b 0x82b29374
	goto loc_82B29374;
loc_82B292F0:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1911
	ctx.r11.s64 = ctx.r11.s64 + 1911;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B29304:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82b29304
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29304;
	// b 0x82b29374
	goto loc_82B29374;
loc_82B29310:
	// cmplwi cr6,r4,18
	cr6.compare<uint32_t>(ctx.r4.u32, 18, xer);
	// blt cr6,0x82b29320
	if (cr6.lt) goto loc_82B29320;
loc_82B29318:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b29378
	goto loc_82B29378;
loc_82B29320:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,31552
	ctx.r8.s64 = ctx.r10.s64 + 31552;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// lwzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82B29344;
	sub_831CDCF0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82b29374
	if (cr6.eq) goto loc_82B29374;
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r5,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 & ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,92(r4)
	PPC_STORE_U8(ctx.r4.u32 + 92, ctx.r6.u8);
loc_82B29374:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B29378:
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

__attribute__((alias("__imp__sub_82B29390"))) PPC_WEAK_FUNC(sub_82B29390);
PPC_FUNC_IMPL(__imp__sub_82B29390) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b29414
	if (!cr6.eq) goto loc_82B29414;
	// bl 0x82f00728
	ctx.lr = 0x82B293B4;
	sub_82F00728(ctx, base);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,22936
	ctx.r11.s64 = ctx.r11.s64 + 22936;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// bl 0x82a69b90
	ctx.lr = 0x82B293E4;
	sub_82A69B90(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r5,21716
	ctx.r3.s64 = ctx.r5.s64 + 21716;
	// ori r11,r4,4182
	ctx.r11.u64 = ctx.r4.u64 | 4182;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82B29414;
	sub_83103068(ctx, base);
loc_82B29414:
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

__attribute__((alias("__imp__sub_82B29428"))) PPC_WEAK_FUNC(sub_82B29428);
PPC_FUNC_IMPL(__imp__sub_82B29428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bgt cr6,0x82b294a0
	if (cr6.gt) goto loc_82B294A0;
	// lis r12,-32077
	ctx.r12.s64 = -2102198272;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27568
	ctx.r12.s64 = ctx.r12.s64 + -27568;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82B29490;
	case 1:
		goto loc_82B294A4;
	case 2:
		goto loc_82B294EC;
	case 3:
		goto loc_82B29508;
	case 4:
		goto loc_82B29540;
	case 5:
		goto loc_82B2954C;
	case 6:
		goto loc_82B29558;
	case 7:
		goto loc_82B295A0;
	case 8:
		goto loc_82B29594;
	case 9:
		goto loc_82B295AC;
	case 10:
		goto loc_82B295B4;
	case 11:
		goto loc_82B29614;
	case 12:
		goto loc_82B29644;
	case 13:
		goto loc_82B295E4;
	case 14:
		goto loc_82B29564;
	case 15:
		goto loc_82B29674;
	default:
		return;
	}
	// lwz r21,-27504(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27504);
	// lwz r21,-27484(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27484);
	// lwz r21,-27412(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27412);
	// lwz r21,-27384(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27384);
	// lwz r21,-27328(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27328);
	// lwz r21,-27316(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27316);
	// lwz r21,-27304(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27304);
	// lwz r21,-27232(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27232);
	// lwz r21,-27244(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27244);
	// lwz r21,-27220(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27220);
	// lwz r21,-27212(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27212);
	// lwz r21,-27116(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27116);
	// lwz r21,-27068(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27068);
	// lwz r21,-27164(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27164);
	// lwz r21,-27292(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27292);
	// lwz r21,-27020(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27020);
loc_82B29490:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B294A0:
	// blr 
	return;
loc_82B294A4:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b294d8
	if (!cr6.eq) goto loc_82B294D8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b294dc
	if (cr6.eq) goto loc_82B294DC;
loc_82B294D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B294DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82B294EC:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r10,158(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 158);
	// lhz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 156);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82B29508:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B29514:
	// lbz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29538
	if (!cr6.eq) goto loc_82B29538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b29514
	if (cr6.lt) goto loc_82B29514;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B29538:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82B29540:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 184);
	// blr 
	return;
loc_82B2954C:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r3,204(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 204);
	// blr 
	return;
loc_82B29558:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r3,304(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// blr 
	return;
loc_82B29564:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B29570:
	// lbz r9,1912(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1912);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29538
	if (!cr6.eq) goto loc_82B29538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b29570
	if (cr6.lt) goto loc_82B29570;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B29594:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r3,244(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// blr 
	return;
loc_82B295A0:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 264);
	// blr 
	return;
loc_82B295AC:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x82b29100
	sub_82B29100(ctx, base);
	return;
loc_82B295B4:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B295C0:
	// lbz r9,92(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 92);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29538
	if (!cr6.eq) goto loc_82B29538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b295c0
	if (cr6.lt) goto loc_82B295C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B295E4:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B295F0:
	// lbz r9,110(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 110);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29538
	if (!cr6.eq) goto loc_82B29538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b295f0
	if (cr6.lt) goto loc_82B295F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B29614:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B29620:
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29538
	if (!cr6.eq) goto loc_82B29538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b29620
	if (cr6.lt) goto loc_82B29620;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B29644:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B29650:
	// lbz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29538
	if (!cr6.eq) goto loc_82B29538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b29650
	if (cr6.lt) goto loc_82B29650;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B29674:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x82b28e90
	sub_82B28E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2967C"))) PPC_WEAK_FUNC(sub_82B2967C);
PPC_FUNC_IMPL(__imp__sub_82B2967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29680"))) PPC_WEAK_FUNC(sub_82B29680);
PPC_FUNC_IMPL(__imp__sub_82B29680) {
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
	// bl 0x82f00728
	ctx.lr = 0x82B29690;
	sub_82F00728(ctx, base);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,22936
	ctx.r11.s64 = ctx.r11.s64 + 22936;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r3,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82B296C0"))) PPC_WEAK_FUNC(sub_82B296C0);
PPC_FUNC_IMPL(__imp__sub_82B296C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b296d0
	if (cr6.lt) goto loc_82B296D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B296D0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b28ee0
	sub_82B28EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B296D8"))) PPC_WEAK_FUNC(sub_82B296D8);
PPC_FUNC_IMPL(__imp__sub_82B296D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B296E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b29788
	if (!cr6.eq) goto loc_82B29788;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r28,12
	ctx.r28.s64 = 12;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// ble cr6,0x82b29788
	if (!cr6.gt) goto loc_82B29788;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82b29788
	if (!cr6.eq) goto loc_82B29788;
	// bl 0x82d19aa8
	ctx.lr = 0x82B29730;
	sub_82D19AA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B29740;
	sub_82D2D510(ctx, base);
	// bl 0x83a970c8
	ctx.lr = 0x82B29744;
	sub_83A970C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b2976c
	if (cr6.gt) goto loc_82B2976C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B2976C;
	sub_831CC188(ctx, base);
loc_82B2976C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,320(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B29788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B29788:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B29790"))) PPC_WEAK_FUNC(sub_82B29790);
PPC_FUNC_IMPL(__imp__sub_82B29790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B29798;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B297A8;
	sub_82D19BB0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r25,12
	ctx.r25.s64 = 12;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// ble cr6,0x82b29944
	if (!cr6.gt) goto loc_82B29944;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bed798
	ctx.lr = 0x82B297D8;
	sub_82BED798(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-22
	xer.ca = ctx.r11.u32 > 21;
	ctx.r11.s64 = ctx.r11.s64 + -22;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b29894
	if (cr0.eq) goto loc_82B29894;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b29944
	if (!cr6.eq) goto loc_82B29944;
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b29944
	if (cr6.eq) goto loc_82B29944;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B2980C;
	sub_82D19AA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b29944
	if (cr6.eq) goto loc_82B29944;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c26678
	ctx.lr = 0x82B29824;
	sub_82C26678(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c26678
	ctx.lr = 0x82B29834;
	sub_82C26678(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b2985c
	if (cr6.gt) goto loc_82B2985C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B2985C;
	sub_831CC188(ctx, base);
loc_82B2985C:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,316(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bctrl 
	ctx.lr = 0x82B29888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// b 0x82b29934
	goto loc_82B29934;
loc_82B29894:
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b29944
	if (cr6.eq) goto loc_82B29944;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B298B0;
	sub_82D19AA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b29944
	if (cr6.eq) goto loc_82B29944;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c26678
	ctx.lr = 0x82B298C8;
	sub_82C26678(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c26678
	ctx.lr = 0x82B298D8;
	sub_82C26678(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b29900
	if (cr6.gt) goto loc_82B29900;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B29900;
	sub_831CC188(ctx, base);
loc_82B29900:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,316(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bctrl 
	ctx.lr = 0x82B2992C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,336(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 336);
loc_82B29934:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B29944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B29944:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B29950"))) PPC_WEAK_FUNC(sub_82B29950);
PPC_FUNC_IMPL(__imp__sub_82B29950) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B29968;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,57316
	ctx.r10.u64 = ctx.r10.u64 | 57316;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8319d480
	ctx.lr = 0x82B2998C;
	sub_8319D480(ctx, base);
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

__attribute__((alias("__imp__sub_82B299A4"))) PPC_WEAK_FUNC(sub_82B299A4);
PPC_FUNC_IMPL(__imp__sub_82B299A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B299A8"))) PPC_WEAK_FUNC(sub_82B299A8);
PPC_FUNC_IMPL(__imp__sub_82B299A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82B299C4;
	sub_82F00728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f04408
	ctx.lr = 0x82B299D4;
	sub_82F04408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bedc48
	ctx.lr = 0x82B299DC;
	sub_82BEDC48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b299f0
	if (!cr6.eq) goto loc_82B299F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b29a94
	goto loc_82B29A94;
loc_82B299F0:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,22936
	ctx.r11.s64 = ctx.r11.s64 + 22936;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82a69b90
	ctx.lr = 0x82B29A20;
	sub_82A69B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B29A28;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B29A38;
	sub_82D2D510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,83
	ctx.r4.u64 = ctx.r4.u64 | 83;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82B29A60;
	sub_82D04220(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fde0
	ctx.lr = 0x82B29A70;
	sub_82D2FDE0(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82b29a90
	if (cr6.lt) goto loc_82B29A90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B29A90;
	sub_825952B8(ctx, base);
loc_82B29A90:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B29A94:
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

__attribute__((alias("__imp__sub_82B29AAC"))) PPC_WEAK_FUNC(sub_82B29AAC);
PPC_FUNC_IMPL(__imp__sub_82B29AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29AB0"))) PPC_WEAK_FUNC(sub_82B29AB0);
PPC_FUNC_IMPL(__imp__sub_82B29AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B29AB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b29e24
	if (cr6.eq) goto loc_82B29E24;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// beq cr6,0x82b29d64
	if (cr6.eq) goto loc_82B29D64;
	// cmpwi cr6,r5,13
	cr6.compare<int32_t>(ctx.r5.s32, 13, xer);
	// beq cr6,0x82b29cb0
	if (cr6.eq) goto loc_82B29CB0;
	// cmpwi cr6,r5,14
	cr6.compare<int32_t>(ctx.r5.s32, 14, xer);
	// bne cr6,0x82b29e24
	if (!cr6.eq) goto loc_82B29E24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r27,6
	ctx.r27.s64 = 6;
	// addi r28,r11,31712
	ctx.r28.s64 = ctx.r11.s64 + 31712;
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// li r31,15
	ctx.r31.s64 = 15;
	// ori r29,r11,276
	ctx.r29.u64 = ctx.r11.u64 | 276;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B29B00:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b29bbc
	if (!cr6.eq) goto loc_82B29BBC;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ori r4,r4,308
	ctx.r4.u64 = ctx.r4.u64 | 308;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x82d04220
	ctx.lr = 0x82B29B40;
	sub_82D04220(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,127
	ctx.r4.u64 = ctx.r4.u64 | 127;
	// bl 0x82d04220
	ctx.lr = 0x82B29B50;
	sub_82D04220(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b29b64
	if (!cr6.lt) goto loc_82B29B64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82B29B64:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b29b78
	if (!cr6.lt) goto loc_82B29B78;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82B29B78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82B29B84;
	sub_82D042A8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b29b98
	if (!cr6.lt) goto loc_82B29B98;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82B29B98:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B29BA0;
	sub_82D3B548(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B29BA8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B29BB0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B29BB8;
	sub_8387E8E0(ctx, base);
	// b 0x82b29bc4
	goto loc_82B29BC4;
loc_82B29BBC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b620
	ctx.lr = 0x82B29BC4;
	sub_82D3B620(ctx, base);
loc_82B29BC4:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82b29b00
	if (!cr0.eq) goto loc_82B29B00;
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82B29BDC:
	// lbz r9,1912(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1912);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29c28
	if (!cr6.eq) goto loc_82B29C28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b29bdc
	if (cr6.lt) goto loc_82B29BDC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B29BFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b29db8
	if (cr6.eq) goto loc_82B29DB8;
	// lbz r11,1915(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1915);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b29c30
	if (cr6.eq) goto loc_82B29C30;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29C20;
	sub_82D3B298(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B29C28:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b29bfc
	goto loc_82B29BFC;
loc_82B29C30:
	// lbz r11,1916(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b29c50
	if (cr6.eq) goto loc_82B29C50;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29C48;
	sub_82D3B298(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B29C50:
	// lbz r11,1917(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1917);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b29c70
	if (cr6.eq) goto loc_82B29C70;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29C68;
	sub_82D3B298(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B29C70:
	// lbz r11,1913(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1913);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b29c90
	if (cr6.eq) goto loc_82B29C90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29C88;
	sub_82D3B298(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B29C90:
	// lbz r11,1914(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1914);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b29e24
	if (cr6.eq) goto loc_82B29E24;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29CA8;
	sub_82D3B298(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B29CB0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r31,r11,31712
	ctx.r31.s64 = ctx.r11.s64 + 31712;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// bl 0x82d3b6a0
	ctx.lr = 0x82B29CC8;
	sub_82D3B6A0(ctx, base);
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82B29CD8:
	// lbz r9,110(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 110);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29d5c
	if (!cr6.eq) goto loc_82B29D5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b29cd8
	if (cr6.lt) goto loc_82B29CD8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B29CF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b29db8
	if (cr6.eq) goto loc_82B29DB8;
	// addi r31,r31,-44
	ctx.r31.s64 = ctx.r31.s64 + -44;
loc_82B29D08:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,23
	ctx.r11.s64 = 23;
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// subfc r8,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 & ctx.r9.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,110(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 110);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b29d44
	if (cr6.eq) goto loc_82B29D44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29D44;
	sub_82D3B298(ctx, base);
loc_82B29D44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82b29d08
	if (cr6.lt) goto loc_82B29D08;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B29D5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b29cf8
	goto loc_82B29CF8;
loc_82B29D64:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r31,r11,31712
	ctx.r31.s64 = ctx.r11.s64 + 31712;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// bl 0x82d3b6a0
	ctx.lr = 0x82B29D7C;
	sub_82D3B6A0(ctx, base);
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82B29D8C:
	// lbz r9,92(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 92);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b29dcc
	if (!cr6.eq) goto loc_82B29DCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b29d8c
	if (cr6.lt) goto loc_82B29D8C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B29DAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b29dd4
	if (!cr6.eq) goto loc_82B29DD4;
loc_82B29DB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29DC4;
	sub_82D3B298(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B29DCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b29dac
	goto loc_82B29DAC;
loc_82B29DD4:
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
loc_82B29DD8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// subfc r8,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 & ctx.r9.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,92(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b29e14
	if (cr6.eq) goto loc_82B29E14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B29E14;
	sub_82D3B298(ctx, base);
loc_82B29E14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82b29dd8
	if (cr6.lt) goto loc_82B29DD8;
loc_82B29E24:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B29E2C"))) PPC_WEAK_FUNC(sub_82B29E2C);
PPC_FUNC_IMPL(__imp__sub_82B29E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B29E30"))) PPC_WEAK_FUNC(sub_82B29E30);
PPC_FUNC_IMPL(__imp__sub_82B29E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B29E38;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82B29E74;
	sub_8259CB28(ctx, base);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82B29E94;
	sub_8259CB28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c26ba8
	ctx.lr = 0x82B29EA4;
	sub_82C26BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b29eb8
	if (cr6.eq) goto loc_82B29EB8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82B29EB8;
	sub_83103100(ctx, base);
loc_82B29EB8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B29EC0"))) PPC_WEAK_FUNC(sub_82B29EC0);
PPC_FUNC_IMPL(__imp__sub_82B29EC0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B29EFC;
	sub_8259CB28(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B29F0C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b29f0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29F0C;
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
loc_82B29F40:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b29f40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29F40;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x831ce980
	ctx.lr = 0x82B29F5C;
	sub_831CE980(ctx, base);
	// addi r4,r30,110
	ctx.r4.s64 = ctx.r30.s64 + 110;
	// addi r3,r31,110
	ctx.r3.s64 = ctx.r31.s64 + 110;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x831ce980
	ctx.lr = 0x82B29F6C;
	sub_831CE980(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 + 132;
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B29F7C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b29f7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29F7C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// addi r10,r31,156
	ctx.r10.s64 = ctx.r31.s64 + 156;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B29F98:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b29f98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29F98;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B29FB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b29fb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29FB4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B29FD0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b29fd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29FD0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,220
	ctx.r11.s64 = ctx.r30.s64 + 220;
	// addi r10,r31,220
	ctx.r10.s64 = ctx.r31.s64 + 220;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B29FEC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b29fec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B29FEC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,240
	ctx.r11.s64 = ctx.r30.s64 + 240;
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B2A008:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b2a008
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A008;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r30,260
	ctx.r11.s64 = ctx.r30.s64 + 260;
	// addi r10,r31,260
	ctx.r10.s64 = ctx.r31.s64 + 260;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B2A024:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b2a024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A024;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r30,300
	ctx.r11.s64 = ctx.r30.s64 + 300;
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B2A040:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b2a040
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A040;
	// addi r4,r30,344
	ctx.r4.s64 = ctx.r30.s64 + 344;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// li r5,1568
	ctx.r5.s64 = 1568;
	// bl 0x831ce980
	ctx.lr = 0x82B2A05C;
	sub_831CE980(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r30,1911
	ctx.r11.s64 = ctx.r30.s64 + 1911;
	// addi r10,r31,1911
	ctx.r10.s64 = ctx.r31.s64 + 1911;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B2A06C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82b2a06c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A06C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,1916
	ctx.r11.s64 = ctx.r30.s64 + 1916;
	// addi r10,r31,1916
	ctx.r10.s64 = ctx.r31.s64 + 1916;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B2A088:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b2a088
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A088;
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

__attribute__((alias("__imp__sub_82B2A0B0"))) PPC_WEAK_FUNC(sub_82B2A0B0);
PPC_FUNC_IMPL(__imp__sub_82B2A0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B2A0B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,148(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2a134
	if (!cr6.eq) goto loc_82B2A134;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,31259
	ctx.r4.s64 = ctx.r11.s64 + 31259;
	// bl 0x837b0c10
	ctx.lr = 0x82B2A0E8;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bed628
	ctx.lr = 0x82B2A0F8;
	sub_82BED628(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b2a118
	if (cr6.lt) goto loc_82B2A118;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2A118;
	sub_825952B8(ctx, base);
loc_82B2A118:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B2A134:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A15C;
	sub_8259CB28(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A17C;
	sub_8259CB28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bed628
	ctx.lr = 0x82B2A18C;
	sub_82BED628(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2a1ac
	if (cr6.lt) goto loc_82B2A1AC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B2A1AC;
	sub_825952B8(ctx, base);
loc_82B2A1AC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82b2a1d4
	if (cr6.lt) goto loc_82B2A1D4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B2A1D4;
	sub_825952B8(ctx, base);
loc_82B2A1D4:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32077
	ctx.r12.s64 = -2102198272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24008
	ctx.r12.s64 = ctx.r12.s64 + -24008;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B2A278;
	case 1:
		goto loc_82B2A28C;
	case 2:
		goto loc_82B2A2E8;
	case 3:
		goto loc_82B2A2F4;
	case 4:
		goto loc_82B2A318;
	case 5:
		goto loc_82B2A338;
	case 6:
		goto loc_82B2A358;
	case 7:
		goto loc_82B2A378;
	case 8:
		goto loc_82B2A398;
	case 9:
		goto loc_82B2A3B8;
	case 10:
		goto loc_82B2A400;
	case 11:
		goto loc_82B2A428;
	case 12:
		goto loc_82B2A448;
	case 13:
		goto loc_82B2A414;
	case 14:
		goto loc_82B2A2C8;
	case 15:
		goto loc_82B2A470;
	default:
		return;
	}
	// lwz r21,-23944(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23944);
	// lwz r21,-23924(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23924);
	// lwz r21,-23832(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23832);
	// lwz r21,-23820(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23820);
	// lwz r21,-23784(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23784);
	// lwz r21,-23752(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23752);
	// lwz r21,-23720(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23720);
	// lwz r21,-23688(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23688);
	// lwz r21,-23656(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23656);
	// lwz r21,-23624(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23624);
	// lwz r21,-23552(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23552);
	// lwz r21,-23512(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23512);
	// lwz r21,-23480(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23480);
	// lwz r21,-23532(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23532);
	// lwz r21,-23864(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23864);
	// lwz r21,-23440(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -23440);
loc_82B2A278:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// b 0x8259cc28
	sub_8259CC28(ctx, base);
	return;
loc_82B2A28C:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82B2A2C8:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1911
	ctx.r11.s64 = ctx.r11.s64 + 1911;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B2A2DC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82b2a2dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A2DC;
	// blr 
	return;
loc_82B2A2E8:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// b 0x82b28dc8
	sub_82B28DC8(ctx, base);
	return;
loc_82B2A2F4:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
loc_82B2A318:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stb r10,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
	// stw r9,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r9.u32);
	// stw r8,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
	// blr 
	return;
loc_82B2A338:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r8,220(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// stb r10,204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 204, ctx.r10.u8);
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// stw r8,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r8.u32);
	// blr 
	return;
loc_82B2A358:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 328);
	// ld r8,336(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 336);
	// stb r10,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// std r9,312(r11)
	PPC_STORE_U64(ctx.r11.u32 + 312, ctx.r9.u64);
	// std r8,320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 320, ctx.r8.u64);
	// blr 
	return;
loc_82B2A378:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r9,288(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 288);
	// ld r8,296(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 296);
	// stb r10,264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 264, ctx.r10.u8);
	// std r9,272(r11)
	PPC_STORE_U64(ctx.r11.u32 + 272, ctx.r9.u64);
	// std r8,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r8.u64);
	// blr 
	return;
loc_82B2A398:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r8,260(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// stb r10,244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// stw r9,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r9.u32);
	// stw r8,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r8.u32);
	// blr 
	return;
loc_82B2A3B8:
	// li r11,98
	ctx.r11.s64 = 98;
	// lwz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r8,344
	ctx.r10.s64 = ctx.r8.s64 + 344;
	// addi r10,r10,1172
	ctx.r10.s64 = ctx.r10.s64 + 1172;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2A3D4:
	// stw r11,-1172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1172, ctx.r11.u32);
	// stw r9,-780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -780, ctx.r9.u32);
	// stw r11,-388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -388, ctx.r11.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b2a3d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A3D4;
	// lwz r10,236(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// lwz r9,240(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// stb r11,224(r8)
	PPC_STORE_U8(ctx.r8.u32 + 224, ctx.r11.u8);
	// stw r10,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r10.u32);
	// stw r9,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r9.u32);
	// blr 
	return;
loc_82B2A400:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
loc_82B2A414:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,110
	ctx.r3.s64 = ctx.r11.s64 + 110;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
loc_82B2A428:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// stb r11,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82B2A448:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B2A460:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b2a460
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A460;
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// blr 
	return;
loc_82B2A470:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r10,1920
	ctx.r10.s64 = ctx.r10.s64 + 1920;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 + 6;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// stb r11,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
loc_82B2A49C:
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82b2a49c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2A49C;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2A4AC"))) PPC_WEAK_FUNC(sub_82B2A4AC);
PPC_FUNC_IMPL(__imp__sub_82B2A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A4B0"))) PPC_WEAK_FUNC(sub_82B2A4B0);
PPC_FUNC_IMPL(__imp__sub_82B2A4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B2A4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b2a508
	if (cr6.eq) goto loc_82B2A508;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b2a504
	if (cr6.eq) goto loc_82B2A504;
loc_82B2A4DC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b2a4dc
	if (!cr6.eq) goto loc_82B2A4DC;
loc_82B2A504:
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82B2A508:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r31,15
	ctx.r31.s64 = 15;
	// addi r30,r11,32312
	ctx.r30.s64 = ctx.r11.s64 + 32312;
loc_82B2A514:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d54828
	ctx.lr = 0x82B2A520;
	sub_82D54828(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82b2a514
	if (!cr0.eq) goto loc_82B2A514;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2A534"))) PPC_WEAK_FUNC(sub_82B2A534);
PPC_FUNC_IMPL(__imp__sub_82B2A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2A538"))) PPC_WEAK_FUNC(sub_82B2A538);
PPC_FUNC_IMPL(__imp__sub_82B2A538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B2A540;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r29,r11,31860
	ctx.r29.s64 = ctx.r11.s64 + 31860;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r29,-570
	ctx.r4.s64 = ctx.r29.s64 + -570;
	// bl 0x8259cc28
	ctx.lr = 0x82B2A578;
	sub_8259CC28(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r29,-569
	ctx.r4.s64 = ctx.r29.s64 + -569;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B2A594;
	sub_8259CC28(ctx, base);
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// lwz r10,148(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2a5b4
	if (cr6.eq) goto loc_82B2A5B4;
	// lbz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 264);
	// ld r4,272(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 272);
	// ld r31,280(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 280);
	// b 0x82b2a5c0
	goto loc_82B2A5C0;
loc_82B2A5B4:
	// lbz r11,304(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 304);
	// ld r4,312(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 312);
	// ld r31,320(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 320);
loc_82B2A5C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2a674
	if (cr6.eq) goto loc_82B2A674;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83161f10
	ctx.lr = 0x82B2A5E0;
	sub_83161F10(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A5F8;
	sub_8259CB28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2a614
	if (cr6.lt) goto loc_82B2A614;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B2A614;
	sub_825952B8(ctx, base);
loc_82B2A614:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83161f10
	ctx.lr = 0x82B2A634;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A648;
	sub_8259CB28(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2a664
	if (cr6.lt) goto loc_82B2A664;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B2A664;
	sub_825952B8(ctx, base);
loc_82B2A664:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// b 0x82b2a708
	goto loc_82B2A708;
loc_82B2A674:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B2A684;
	sub_8259CC28(ctx, base);
	// bl 0x8314f518
	ctx.lr = 0x82B2A688;
	sub_8314F518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2a6cc
	if (cr6.eq) goto loc_82B2A6CC;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,34463
	ctx.r4.u64 = ctx.r4.u64 | 34463;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83161f10
	ctx.lr = 0x82B2A6AC;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A6C0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2A6C8;
	sub_8387E8E0(ctx, base);
	// b 0x82b2a708
	goto loc_82B2A708;
loc_82B2A6CC:
	// bl 0x82a68268
	ctx.lr = 0x82B2A6D0;
	sub_82A68268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a682f0
	ctx.lr = 0x82B2A6D8;
	sub_82A682F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b2a708
	if (cr6.eq) goto loc_82B2A708;
loc_82B2A6E4:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// ble cr6,0x82b2a6fc
	if (!cr6.gt) goto loc_82B2A6FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B2A6FC:
	// bl 0x825a1eb8
	ctx.lr = 0x82B2A700;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b2a6e4
	if (!cr0.eq) goto loc_82B2A6E4;
loc_82B2A708:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b29e30
	ctx.lr = 0x82B2A71C;
	sub_82B29E30(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2a738
	if (cr6.lt) goto loc_82B2A738;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82B2A738;
	sub_825952B8(ctx, base);
loc_82B2A738:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x82b2a760
	if (cr6.lt) goto loc_82B2A760;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B2A760;
	sub_825952B8(ctx, base);
loc_82B2A760:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2A768"))) PPC_WEAK_FUNC(sub_82B2A768);
PPC_FUNC_IMPL(__imp__sub_82B2A768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2A770;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2A77C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addis r10,r11,221
	ctx.r10.s64 = ctx.r11.s64 + 14483456;
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,13829
	ctx.r11.s64 = ctx.r11.s64 + 13829;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b2a7b0
	if (!cr6.eq) goto loc_82B2A7B0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// b 0x82b2a7b4
	goto loc_82B2A7B4;
loc_82B2A7B0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82B2A7B4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2a890
	if (cr6.eq) goto loc_82B2A890;
	// li r11,148
	ctx.r11.s64 = 148;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cc28
	ctx.lr = 0x82B2A7EC;
	sub_8259CC28(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r4,r4,80
	ctx.r4.u64 = ctx.r4.u64 | 80;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x82B2A810;
	sub_82D042A8(ctx, base);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A828;
	sub_8259CB28(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r8,31864
	ctx.r3.s64 = ctx.r8.s64 + 31864;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb4e80
	ctx.lr = 0x82B2A83C;
	sub_82BB4E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82B2A848;
	sub_83103100(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82b2a868
	if (cr6.lt) goto loc_82B2A868;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B2A868;
	sub_825952B8(ctx, base);
loc_82B2A868:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82b2a890
	if (cr6.lt) goto loc_82B2A890;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82B2A890;
	sub_825952B8(ctx, base);
loc_82B2A890:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2A898"))) PPC_WEAK_FUNC(sub_82B2A898);
PPC_FUNC_IMPL(__imp__sub_82B2A898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B2A8A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2a8c8
	if (!cr6.eq) goto loc_82B2A8C8;
	// bl 0x82bed728
	ctx.lr = 0x82B2A8C0;
	sub_82BED728(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B2A8C8:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// ld r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 312);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// ld r9,320(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 320);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B2A900;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B2A904;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x82b2a958
	if (!cr6.eq) goto loc_82B2A958;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83161f10
	ctx.lr = 0x82B2A920;
	sub_83161F10(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A938;
	sub_8259CB28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2A940;
	sub_8387E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83161f10
	ctx.lr = 0x82B2A954;
	sub_83161F10(ctx, base);
	// b 0x82b2a9a0
	goto loc_82B2A9A0;
loc_82B2A958:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8319cb88
	ctx.lr = 0x82B2A968;
	sub_8319CB88(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A980;
	sub_8259CB28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2A988;
	sub_8387E8E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8319cb88
	ctx.lr = 0x82B2A9A0;
	sub_8319CB88(ctx, base);
loc_82B2A9A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82B2A9B4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2A9BC;
	sub_8387E8E0(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bed118
	ctx.lr = 0x82B2A9D0;
	sub_82BED118(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2a9f0
	if (cr6.lt) goto loc_82B2A9F0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B2A9F0;
	sub_825952B8(ctx, base);
loc_82B2A9F0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x82b2aa18
	if (cr6.lt) goto loc_82B2AA18;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B2AA18;
	sub_825952B8(ctx, base);
loc_82B2AA18:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2AA20"))) PPC_WEAK_FUNC(sub_82B2AA20);
PPC_FUNC_IMPL(__imp__sub_82B2AA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B2AA28;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2aa50
	if (!cr6.eq) goto loc_82B2AA50;
	// bl 0x82bed728
	ctx.lr = 0x82B2AA48;
	sub_82BED728(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B2AA50:
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// ld r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// ld r9,280(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 280);
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B2AA88;
	sub_830FF290(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8319cb88
	ctx.lr = 0x82B2AAA0;
	sub_8319CB88(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82B2AAB8;
	sub_8259CB28(ctx, base);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b2aad8
	if (cr6.lt) goto loc_82B2AAD8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B2AAD8;
	sub_825952B8(ctx, base);
loc_82B2AAD8:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8319cb88
	ctx.lr = 0x82B2AAFC;
	sub_8319CB88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B2AB10;
	sub_8259CB28(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2ab2c
	if (cr6.lt) goto loc_82B2AB2C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B2AB2C;
	sub_825952B8(ctx, base);
loc_82B2AB2C:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bed118
	ctx.lr = 0x82B2AB4C;
	sub_82BED118(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2ab68
	if (cr6.lt) goto loc_82B2AB68;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B2AB68;
	sub_825952B8(ctx, base);
loc_82B2AB68:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82b2ab90
	if (cr6.lt) goto loc_82B2AB90;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B2AB90;
	sub_825952B8(ctx, base);
loc_82B2AB90:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2AB98"))) PPC_WEAK_FUNC(sub_82B2AB98);
PPC_FUNC_IMPL(__imp__sub_82B2AB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2ABA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x82b2b1b8
	if (cr6.gt) goto loc_82B2B1B8;
	// lis r12,-32077
	ctx.r12.s64 = -2102198272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21548
	ctx.r12.s64 = ctx.r12.s64 + -21548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B2AC10;
	case 1:
		goto loc_82B2AD14;
	case 2:
		goto loc_82B2ADD0;
	case 3:
		goto loc_82B2B0F0;
	case 4:
		goto loc_82B2B120;
	case 5:
		goto loc_82B2B150;
	case 6:
		goto loc_82B2B170;
	case 7:
		goto loc_82B2B190;
	case 8:
		goto loc_82B2AEDC;
	case 9:
		goto loc_82B2B1B8;
	case 10:
		goto loc_82B2AF2C;
	case 11:
		goto loc_82B2AFA8;
	case 12:
		goto loc_82B2B074;
	case 13:
		goto loc_82B2B1B8;
	case 14:
		goto loc_82B2B024;
	default:
		return;
	}
	// lwz r21,-21488(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21488);
	// lwz r21,-21228(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21228);
	// lwz r21,-21040(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21040);
	// lwz r21,-20240(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20240);
	// lwz r21,-20192(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20192);
	// lwz r21,-20144(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20144);
	// lwz r21,-20112(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20112);
	// lwz r21,-20080(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20080);
	// lwz r21,-20772(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20772);
	// lwz r21,-20040(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20040);
	// lwz r21,-20692(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20692);
	// lwz r21,-20568(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20568);
	// lwz r21,-20364(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20364);
	// lwz r21,-20040(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20040);
	// lwz r21,-20444(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20444);
loc_82B2AC10:
	// lwz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r11,r9,160
	ctx.r11.s64 = ctx.r9.s64 + 160;
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// lwz r10,168(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b2ac44
	if (!cr6.eq) goto loc_82B2AC44;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2ac48
	if (cr6.eq) goto loc_82B2AC48;
loc_82B2AC44:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2AC48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2ac98
	if (!cr6.eq) goto loc_82B2AC98;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// lwz r10,-584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -584);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b2ac84
	if (!cr6.eq) goto loc_82B2AC84;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2ac88
	if (cr6.eq) goto loc_82B2AC88;
loc_82B2AC84:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2AC88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2ac9c
	if (cr6.eq) goto loc_82B2AC9C;
loc_82B2AC98:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2AC9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82b2acc0
	if (!cr6.eq) goto loc_82B2ACC0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2ACC0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a68228
	ctx.lr = 0x82B2ACC8;
	sub_82A68228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82B2ACD4;
	sub_837B0C10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x837b0c10
	ctx.lr = 0x82B2ACE8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2ACF8;
	sub_82A69AD0(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2AD00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B2AD04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bed728
	ctx.lr = 0x82B2AD0C;
	sub_82BED728(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2AD14:
	// lwz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lhz r11,158(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 158);
	// lhz r10,156(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 156);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b2ad6c
	if (cr6.eq) goto loc_82B2AD6C;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lwz r10,-584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -584);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b2ad58
	if (!cr6.eq) goto loc_82B2AD58;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2ad5c
	if (cr6.eq) goto loc_82B2AD5C;
loc_82B2AD58:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2AD5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b2ad70
	if (!cr6.eq) goto loc_82B2AD70;
loc_82B2AD6C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2AD70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// lhz r11,156(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 156);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b2ad90
	if (!cr6.eq) goto loc_82B2AD90;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2AD90:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82be2738
	ctx.lr = 0x82B2AD98;
	sub_82BE2738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B2ADA4;
	sub_837B0C10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x837b0c10
	ctx.lr = 0x82B2ADB8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2ADC8;
	sub_82A69AD0(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2ADD0:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82B2ADDC:
	// lbz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b2ae2c
	if (!cr6.eq) goto loc_82B2AE2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b2addc
	if (cr6.lt) goto loc_82B2ADDC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2ADFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_82B2AE18:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// blt cr6,0x82b2ae34
	if (cr6.lt) goto loc_82B2AE34;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82b2ae40
	goto loc_82B2AE40;
loc_82B2AE2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b2adfc
	goto loc_82B2ADFC;
loc_82B2AE34:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
loc_82B2AE40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ae58
	if (cr6.eq) goto loc_82B2AE58;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B2AE58;
	sub_835977D8(ctx, base);
loc_82B2AE58:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x82b2ae18
	if (cr6.lt) goto loc_82B2AE18;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bedeb8
	ctx.lr = 0x82B2AE84;
	sub_82BEDEB8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b2ae94
	if (!cr6.eq) goto loc_82B2AE94;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2AE94:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2AEA0;
	sub_8292A3F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B2AEB4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2AEC4;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2AECC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82B2AED4;
	sub_82F73D60(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2AEDC:
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82b29100
	ctx.lr = 0x82B2AEE4;
	sub_82B29100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b2af00
	if (!cr6.eq) goto loc_82B2AF00;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2AF00:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// bl 0x837b0c10
	ctx.lr = 0x82B2AF10;
	sub_837B0C10(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// bl 0x82a69a28
	ctx.lr = 0x82B2AF24;
	sub_82A69A28(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2AF2C:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82B2AF38:
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b2afa0
	if (!cr6.eq) goto loc_82B2AFA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b2af38
	if (cr6.lt) goto loc_82B2AF38;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2AF58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b2af74
	if (!cr6.eq) goto loc_82B2AF74;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2AF74:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// bl 0x837b0c10
	ctx.lr = 0x82B2AF84;
	sub_837B0C10(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// bl 0x82a69a28
	ctx.lr = 0x82B2AF98;
	sub_82A69A28(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2AFA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b2af58
	goto loc_82B2AF58;
loc_82B2AFA8:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82B2AFB4:
	// lbz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b2b01c
	if (!cr6.eq) goto loc_82B2B01C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b2afb4
	if (cr6.lt) goto loc_82B2AFB4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2AFD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b2aff0
	if (!cr6.eq) goto loc_82B2AFF0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2AFF0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// bl 0x837b0c10
	ctx.lr = 0x82B2B000;
	sub_837B0C10(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// bl 0x82a69a28
	ctx.lr = 0x82B2B014;
	sub_82A69A28(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2B01C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b2afd4
	goto loc_82B2AFD4;
loc_82B2B024:
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82b28e90
	ctx.lr = 0x82B2B02C;
	sub_82B28E90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b2b048
	if (!cr6.eq) goto loc_82B2B048;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2B048:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// bl 0x837b0c10
	ctx.lr = 0x82B2B058;
	sub_837B0C10(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// bl 0x82a69a28
	ctx.lr = 0x82B2B06C;
	sub_82A69A28(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2B074:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82B2B080:
	// lbz r9,110(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 110);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b2b0e8
	if (!cr6.eq) goto loc_82B2B0E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82b2b080
	if (cr6.lt) goto loc_82B2B080;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B2B0A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ad00
	if (cr6.eq) goto loc_82B2AD00;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b2b0bc
	if (!cr6.eq) goto loc_82B2B0BC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82B2B0BC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// bl 0x837b0c10
	ctx.lr = 0x82B2B0CC;
	sub_837B0C10(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// bl 0x82a69a28
	ctx.lr = 0x82B2B0E0;
	sub_82A69A28(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2B0E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b2b0a0
	goto loc_82B2B0A0;
loc_82B2B0F0:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2ad04
	if (cr6.eq) goto loc_82B2AD04;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// bl 0x82bed080
	ctx.lr = 0x82B2B118;
	sub_82BED080(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2B120:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2ad04
	if (cr6.eq) goto loc_82B2AD04;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,212(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// bl 0x82bed080
	ctx.lr = 0x82B2B148;
	sub_82BED080(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2B150:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2B170:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2B190:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2ad04
	if (cr6.eq) goto loc_82B2AD04;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,252(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r5,248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// bl 0x82bed080
	ctx.lr = 0x82B2B1B8;
	sub_82BED080(ctx, base);
loc_82B2B1B8:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2B1C0"))) PPC_WEAK_FUNC(sub_82B2B1C0);
PPC_FUNC_IMPL(__imp__sub_82B2B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B2B1C8;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6064(r1)
	ea = -6064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B2B1D8;
	sub_82D19BA0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82b2b254
	if (!cr6.eq) goto loc_82B2B254;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B1F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,31844
	ctx.r11.s64 = ctx.r11.s64 + 31844;
	// beq cr6,0x82b2b220
	if (cr6.eq) goto loc_82B2B220;
	// addi r5,r11,-96
	ctx.r5.s64 = ctx.r11.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B218;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B220:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-88
	ctx.r3.s64 = ctx.r11.s64 + -88;
	// bl 0x82d2f8b8
	ctx.lr = 0x82B2B230;
	sub_82D2F8B8(ctx, base);
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d2ada8
	ctx.lr = 0x82B2B240;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B2B24C;
	sub_83103100(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B254:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2b634
	if (!cr6.eq) goto loc_82B2B634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B2B264;
	sub_82D1C1A8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r25,12
	ctx.r25.s64 = 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// ble cr6,0x82b2b634
	if (!cr6.gt) goto loc_82B2B634;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x82b2b634
	if (cr6.gt) goto loc_82B2B634;
	// lis r12,-32077
	ctx.r12.s64 = -2102198272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19780
	ctx.r12.s64 = ctx.r12.s64 + -19780;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B2B2FC;
	case 1:
		goto loc_82B2B310;
	case 2:
		goto loc_82B2B350;
	case 3:
		goto loc_82B2B390;
	case 4:
		goto loc_82B2B430;
	case 5:
		goto loc_82B2B4C0;
	case 6:
		goto loc_82B2B550;
	case 7:
		goto loc_82B2B578;
	case 8:
		goto loc_82B2B3B0;
	case 9:
		goto loc_82B2B5C0;
	case 10:
		goto loc_82B2B634;
	case 11:
		goto loc_82B2B5A0;
	case 12:
		goto loc_82B2B5E0;
	case 13:
		goto loc_82B2B620;
	case 14:
		goto loc_82B2B634;
	case 15:
		goto loc_82B2B600;
	default:
		return;
	}
	// lwz r21,-19716(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19716);
	// lwz r21,-19696(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19696);
	// lwz r21,-19632(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19632);
	// lwz r21,-19568(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19568);
	// lwz r21,-19408(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19408);
	// lwz r21,-19264(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19264);
	// lwz r21,-19120(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19120);
	// lwz r21,-19080(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19080);
	// lwz r21,-19536(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19536);
	// lwz r21,-19008(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19008);
	// lwz r21,-18892(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18892);
	// lwz r21,-19040(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -19040);
	// lwz r21,-18976(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18976);
	// lwz r21,-18912(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18912);
	// lwz r21,-18892(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18892);
	// lwz r21,-18944(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18944);
loc_82B2B2FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82B2B308;
	sub_82D19858(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B310:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stb r10,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r10.u8);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82a69b90
	ctx.lr = 0x82B2B330;
	sub_82A69B90(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,31844
	ctx.r11.s64 = ctx.r9.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-72
	ctx.r5.s64 = ctx.r11.s64 + -72;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B348;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B350:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stb r10,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r10.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82a69b90
	ctx.lr = 0x82B2B370;
	sub_82A69B90(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,31844
	ctx.r11.s64 = ctx.r9.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-64
	ctx.r5.s64 = ctx.r11.s64 + -64;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B388;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B390:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,31844
	ctx.r11.s64 = ctx.r11.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B3A8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B3B0:
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r28,248(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// lwz r27,252(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// bl 0x82b29ec0
	ctx.lr = 0x82B2B3C4;
	sub_82B29EC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b2b3e8
	if (cr6.gt) goto loc_82B2B3E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B2B3E8;
	sub_831CC188(ctx, base);
loc_82B2B3E8:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x82beccd8
	ctx.lr = 0x82B2B420;
	sub_82BECCD8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2B428;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B430:
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82b29ec0
	ctx.lr = 0x82B2B43C;
	sub_82B29EC0(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r8,2296(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2296);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r9,188(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2b458
	if (!cr6.eq) goto loc_82B2B458;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82B2B458:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r5,r6,r25
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r25.s32);
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b2b47c
	if (cr6.gt) goto loc_82B2B47C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B2B47C;
	sub_831CC188(ctx, base);
loc_82B2B47C:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,2292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2292);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// bl 0x82beccd8
	ctx.lr = 0x82B2B4B0;
	sub_82BECCD8(ctx, base);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2B4B8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B4C0:
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82b29ec0
	ctx.lr = 0x82B2B4CC;
	sub_82B29EC0(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r8,4268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4268);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2b4e8
	if (!cr6.eq) goto loc_82B2B4E8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82B2B4E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r5,r6,r25
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r25.s32);
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b2b50c
	if (cr6.gt) goto loc_82B2B50C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B2B50C;
	sub_831CC188(ctx, base);
loc_82B2B50C:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,4264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4264);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// bl 0x82beccd8
	ctx.lr = 0x82B2B540;
	sub_82BECCD8(ctx, base);
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2B548;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B550:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2B570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B578:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2B598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B5A0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,31844
	ctx.r11.s64 = ctx.r11.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-40
	ctx.r5.s64 = ctx.r11.s64 + -40;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B5B8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B5C0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,31844
	ctx.r11.s64 = ctx.r11.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B5D8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B5E0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,31844
	ctx.r11.s64 = ctx.r11.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B5F8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B600:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,31844
	ctx.r11.s64 = ctx.r11.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B618;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B2B620:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,31844
	ctx.r5.s64 = ctx.r11.s64 + 31844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B2B634;
	sub_82D20DA8(ctx, base);
loc_82B2B634:
	// addi r1,r1,6064
	ctx.r1.s64 = ctx.r1.s64 + 6064;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2B63C"))) PPC_WEAK_FUNC(sub_82B2B63C);
PPC_FUNC_IMPL(__imp__sub_82B2B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2B640"))) PPC_WEAK_FUNC(sub_82B2B640);
PPC_FUNC_IMPL(__imp__sub_82B2B640) {
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
	// bl 0x82c0fbb8
	ctx.lr = 0x82B2B65C;
	sub_82C0FBB8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32144
	ctx.r9.s64 = ctx.r11.s64 + -32144;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,-536
	ctx.r30.s64 = ctx.r7.s64 + -536;
	// lwz r4,-536(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -536);
	// bl 0x82d20ae0
	ctx.lr = 0x82B2B688;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B2B698;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B2B6A4;
	sub_82D20AE0(ctx, base);
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

__attribute__((alias("__imp__sub_82B2B6C0"))) PPC_WEAK_FUNC(sub_82B2B6C0);
PPC_FUNC_IMPL(__imp__sub_82B2B6C0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32144
	ctx.r9.s64 = ctx.r11.s64 + -32144;
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
	// bl 0x82c0fc10
	ctx.lr = 0x82B2B6F8;
	sub_82C0FC10(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2b710
	if (cr6.eq) goto loc_82B2B710;
	// bl 0x82416268
	ctx.lr = 0x82B2B70C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B2B710:
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

__attribute__((alias("__imp__sub_82B2B728"))) PPC_WEAK_FUNC(sub_82B2B728);
PPC_FUNC_IMPL(__imp__sub_82B2B728) {
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
	// blt cr6,0x82b2b750
	if (cr6.lt) goto loc_82B2B750;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2b754
	goto loc_82B2B754;
loc_82B2B750:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2B754:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B2B770;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2b78c
	if (cr6.eq) goto loc_82B2B78C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b2b640
	ctx.lr = 0x82B2B784;
	sub_82B2B640(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2b790
	if (!cr6.eq) goto loc_82B2B790;
loc_82B2B78C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2B790:
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

__attribute__((alias("__imp__sub_82B2B7A8"))) PPC_WEAK_FUNC(sub_82B2B7A8);
PPC_FUNC_IMPL(__imp__sub_82B2B7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B2B7B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2B7BC;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311e3d0
	ctx.lr = 0x82B2B7C4;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311d640
	ctx.lr = 0x82B2B7D4;
	sub_8311D640(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -432);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b2b808
	if (!cr6.eq) goto loc_82B2B808;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2b80c
	if (cr6.eq) goto loc_82B2B80C;
loc_82B2B808:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82B2B80C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2bf04
	if (!cr6.eq) goto loc_82B2BF04;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B2B820;
	sub_8311C148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2B834;
	sub_82D19788(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2B83C;
	sub_82D19A78(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bf04
	if (cr6.eq) goto loc_82B2BF04;
	// addi r24,r3,100
	ctx.r24.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2B85C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bf04
	if (cr6.eq) goto loc_82B2BF04;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,555
	ctx.r4.u64 = ctx.r4.u64 | 555;
	// bl 0x82d30340
	ctx.lr = 0x82B2B874;
	sub_82D30340(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2B884;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bf04
	if (cr6.eq) goto loc_82B2BF04;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b2b8a4
	if (cr6.eq) goto loc_82B2B8A4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B2B8A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82B2B8B4;
	sub_82D329F8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B2B8C0;
	sub_837B0C10(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-32256
	ctx.r30.s64 = ctx.r11.s64 + -32256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r30,-320
	ctx.r4.s64 = ctx.r30.s64 + -320;
	// bl 0x837b0c10
	ctx.lr = 0x82B2B8D8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2B8E8;
	sub_82A69AD0(ctx, base);
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// ori r4,r4,322
	ctx.r4.u64 = ctx.r4.u64 | 322;
	// bl 0x82d042a8
	ctx.lr = 0x82B2B908;
	sub_82D042A8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2B914;
	sub_8292A3F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-308
	ctx.r4.s64 = ctx.r30.s64 + -308;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B2B924;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2B934;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r30,-296
	ctx.r4.s64 = ctx.r30.s64 + -296;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2B94C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2befc
	if (cr6.eq) goto loc_82B2BEFC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r22,r11,-516
	ctx.r22.s64 = ctx.r11.s64 + -516;
	// lwz r4,-8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// bl 0x82d3a058
	ctx.lr = 0x82B2B964;
	sub_82D3A058(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// ori r9,r11,46616
	ctx.r9.u64 = ctx.r11.u64 | 46616;
	// addi r8,r10,-384
	ctx.r8.s64 = ctx.r10.s64 + -384;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r6,r28,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82B2B998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// ori r4,r4,309
	ctx.r4.u64 = ctx.r4.u64 | 309;
	// bl 0x82d042a8
	ctx.lr = 0x82B2B9B4;
	sub_82D042A8(ctx, base);
	// addi r4,r30,-220
	ctx.r4.s64 = ctx.r30.s64 + -220;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450880
	ctx.lr = 0x82B2B9C0;
	sub_82450880(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2b9d4
	if (cr6.eq) goto loc_82B2B9D4;
	// addi r4,r30,-216
	ctx.r4.s64 = ctx.r30.s64 + -216;
	// b 0x82b2b9f4
	goto loc_82B2B9F4;
loc_82B2B9D4:
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450880
	ctx.lr = 0x82B2B9E0;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2b9f4
	if (!cr6.eq) goto loc_82B2B9F4;
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
loc_82B2B9F4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BA08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bef4
	if (cr6.eq) goto loc_82B2BEF4;
	// lwz r4,-4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	// bl 0x82d3a058
	ctx.lr = 0x82B2BA18;
	sub_82D3A058(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319d8a0
	ctx.lr = 0x82B2BA20;
	sub_8319D8A0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// bl 0x8319ad70
	ctx.lr = 0x82B2BA3C;
	sub_8319AD70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x82b2babc
	if (cr6.eq) goto loc_82B2BABC;
	// li r27,10
	ctx.r27.s64 = 10;
loc_82B2BA50:
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// ori r9,r11,26215
	ctx.r9.u64 = ctx.r11.u64 | 26215;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulhd r7,r31,r9
	ctx.r7.s64 = (__int128(ctx.r31.s64) * __int128(ctx.r9.s64)) >> 64;
	// sradi r11,r7,2
	xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s64 >> 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicr r10,r11,2,61
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicr r11,r4,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x83161f10
	ctx.lr = 0x82B2BA94;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8291fdc8
	ctx.lr = 0x82B2BAA0;
	sub_8291FDC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BAA8;
	sub_8387E8E0(ctx, base);
	// divd r31,r31,r27
	ctx.r31.s64 = PPCDivide(ctx.r31.s64, ctx.r27.s64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpdi cr6,r31,0
	cr6.compare<int64_t>(ctx.r31.s64, 0, xer);
	// bne cr6,0x82b2ba50
	if (!cr6.eq) goto loc_82B2BA50;
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82B2BABC:
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BAC8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x83161f10
	ctx.lr = 0x82B2BADC;
	sub_83161F10(ctx, base);
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825a1da8
	ctx.lr = 0x82B2BAF4;
	sub_825A1DA8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2bb08
	if (!cr6.lt) goto loc_82B2BB08;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_82B2BB08:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BB20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r8,28
	ctx.r8.s64 = 28;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// subf r7,r27,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r27.s64;
	// divw r26,r7,r8
	ctx.r26.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82b2bc28
	if (cr6.eq) goto loc_82B2BC28;
loc_82B2BB3C:
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BB48;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x83161f10
	ctx.lr = 0x82B2BB5C;
	sub_83161F10(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825a1da8
	ctx.lr = 0x82B2BB70;
	sub_825A1DA8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2bb84
	if (!cr6.lt) goto loc_82B2BB84;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_82B2BB84:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BB98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bf10
	if (cr6.eq) goto loc_82B2BF10;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82d3a058
	ctx.lr = 0x82B2BBAC;
	sub_82D3A058(ctx, base);
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BBB8;
	sub_837B0C10(ctx, base);
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b2bf20
	if (!cr6.gt) goto loc_82B2BF20;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x825a1da8
	ctx.lr = 0x82B2BBD4;
	sub_825A1DA8(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2bbe8
	if (!cr6.lt) goto loc_82B2BBE8;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
loc_82B2BBE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2BC00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BC08;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BC10;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BC18;
	sub_8387E8E0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82b2bb3c
	if (cr6.lt) goto loc_82B2BB3C;
loc_82B2BC28:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2BC34;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bedc
	if (cr6.eq) goto loc_82B2BEDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B2BC4C;
	sub_83102DB0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B2BC60;
	sub_82D2B608(ctx, base);
	// stw r23,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r23.u32);
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// stb r29,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r29.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// ori r4,r4,241
	ctx.r4.u64 = ctx.r4.u64 | 241;
	// bl 0x82d042a8
	ctx.lr = 0x82B2BC7C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2BC8C;
	sub_8292A3F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BC9C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2BCAC;
	sub_82A69AD0(ctx, base);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319cf40
	ctx.lr = 0x82B2BCBC;
	sub_8319CF40(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// bl 0x8319d480
	ctx.lr = 0x82B2BCD8;
	sub_8319D480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cb28
	ctx.lr = 0x82B2BCEC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BCF4;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2BD00;
	sub_8292A3F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BD10;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2BD20;
	sub_82A69AD0(ctx, base);
	// stw r23,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r23.u32);
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// stb r29,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r29.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// ori r4,r4,186
	ctx.r4.u64 = ctx.r4.u64 | 186;
	// bl 0x82d042a8
	ctx.lr = 0x82B2BD3C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2BD48;
	sub_8292A3F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BD58;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2BD68;
	sub_82A69AD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319d968
	ctx.lr = 0x82B2BD70;
	sub_8319D968(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r23,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r23.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r29,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r29.u32);
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319d480
	ctx.lr = 0x82B2BD8C;
	sub_8319D480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8259cb28
	ctx.lr = 0x82B2BDA0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BDA8;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2BDB4;
	sub_8292A3F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BDC4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2BDD4;
	sub_82A69AD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8316e6e0
	ctx.lr = 0x82B2BDDC;
	sub_8316E6E0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r23,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r23.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r29.u8);
	// bl 0x8319d480
	ctx.lr = 0x82B2BDF8;
	sub_8319D480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8259cb28
	ctx.lr = 0x82B2BE0C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BE14;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2BE20;
	sub_8292A3F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BE30;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2BE40;
	sub_82A69AD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319ae60
	ctx.lr = 0x82B2BE48;
	sub_8319AE60(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r23,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r23.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r29,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r29.u8);
	// bl 0x8319d480
	ctx.lr = 0x82B2BE64;
	sub_8319D480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8259cb28
	ctx.lr = 0x82B2BE78;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BE80;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8292a3f8
	ctx.lr = 0x82B2BE8C;
	sub_8292A3F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B2BE9C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B2BEAC;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BEB4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BEBC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BEC4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BECC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BED4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
loc_82B2BED8:
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BEDC;
	sub_8387E8E0(ctx, base);
loc_82B2BEDC:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BEE4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BEEC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x838ae2a8
	ctx.lr = 0x82B2BEF4;
	sub_838AE2A8(ctx, base);
loc_82B2BEF4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BEFC;
	sub_8387E8E0(ctx, base);
loc_82B2BEFC:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BF04;
	sub_8387E8E0(ctx, base);
loc_82B2BF04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B2BF10:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2BF18;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// b 0x82b2bed8
	goto loc_82B2BED8;
loc_82B2BF20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B2BF2C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B2BF2C"))) PPC_WEAK_FUNC(sub_82B2BF2C);
PPC_FUNC_IMPL(__imp__sub_82B2BF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2BF30"))) PPC_WEAK_FUNC(sub_82B2BF30);
PPC_FUNC_IMPL(__imp__sub_82B2BF30) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bf50
	if (cr6.eq) goto loc_82B2BF50;
	// bl 0x82bf7190
	ctx.lr = 0x82B2BF50;
	sub_82BF7190(ctx, base);
loc_82B2BF50:
	// bl 0x83763ef8
	ctx.lr = 0x82B2BF54;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bf64
	if (cr6.eq) goto loc_82B2BF64;
	// bl 0x83763ef8
	ctx.lr = 0x82B2BF60;
	sub_83763EF8(ctx, base);
	// bl 0x83763ea8
	ctx.lr = 0x82B2BF64;
	sub_83763EA8(ctx, base);
loc_82B2BF64:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-19904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2bf78
	if (cr6.eq) goto loc_82B2BF78;
	// bl 0x83779358
	ctx.lr = 0x82B2BF78;
	sub_83779358(ctx, base);
loc_82B2BF78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2BF88"))) PPC_WEAK_FUNC(sub_82B2BF88);
PPC_FUNC_IMPL(__imp__sub_82B2BF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2BF90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82B2BFA4;
	sub_82BDC848(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-31152
	ctx.r9.s64 = ctx.r11.s64 + -31152;
	// addi r8,r10,-31156
	ctx.r8.s64 = ctx.r10.s64 + -31156;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r28.u8);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stb r30,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r30.u8);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stb r30,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r30.u8);
	// stb r30,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r30.u8);
	// stb r30,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r30.u8);
	// stb r30,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r30.u8);
	// stb r30,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r30.u8);
	// bl 0x82d1a9a8
	ctx.lr = 0x82B2BFF8;
	sub_82D1A9A8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B2BFFC;
	sub_831156E8(ctx, base);
	// lis r7,236
	ctx.r7.s64 = 15466496;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r5,r7,5128
	ctx.r5.u64 = ctx.r7.u64 | 5128;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82b2c018
	if (!cr6.eq) goto loc_82B2C018;
	// stb r28,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r28.u8);
loc_82B2C018:
	// bl 0x83763ef8
	ctx.lr = 0x82B2C01C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2c088
	if (!cr6.eq) goto loc_82B2C088;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2c070
	if (cr6.eq) goto loc_82B2C070;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2c070
	if (!cr6.eq) goto loc_82B2C070;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-31444
	ctx.r3.s64 = ctx.r11.s64 + -31444;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B2C054;
	sub_82D2FA90(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lis r4,278
	ctx.r4.s64 = 18219008;
	// ori r4,r4,597
	ctx.r4.u64 = ctx.r4.u64 | 597;
	// bl 0x82d2ada8
	ctx.lr = 0x82B2C064;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x83103100
	ctx.lr = 0x82B2C070;
	sub_83103100(ctx, base);
loc_82B2C070:
	// stb r28,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r28.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82B2C07C;
	sub_82D17AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2C088:
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82B2C094;
	sub_82D17AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2C0A0"))) PPC_WEAK_FUNC(sub_82B2C0A0);
PPC_FUNC_IMPL(__imp__sub_82B2C0A0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-31152
	ctx.r9.s64 = ctx.r11.s64 + -31152;
	// addi r8,r10,-31156
	ctx.r8.s64 = ctx.r10.s64 + -31156;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bdc910
	ctx.lr = 0x82B2C0D8;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2c0f0
	if (cr6.eq) goto loc_82B2C0F0;
	// bl 0x82416268
	ctx.lr = 0x82B2C0EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B2C0F0:
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

__attribute__((alias("__imp__sub_82B2C108"))) PPC_WEAK_FUNC(sub_82B2C108);
PPC_FUNC_IMPL(__imp__sub_82B2C108) {
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
	// lbz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2c15c
	if (!cr6.eq) goto loc_82B2C15C;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c134
	if (cr6.eq) goto loc_82B2C134;
	// bl 0x82bf7190
	ctx.lr = 0x82B2C134;
	sub_82BF7190(ctx, base);
loc_82B2C134:
	// bl 0x83763ef8
	ctx.lr = 0x82B2C138;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c148
	if (cr6.eq) goto loc_82B2C148;
	// bl 0x83763ef8
	ctx.lr = 0x82B2C144;
	sub_83763EF8(ctx, base);
	// bl 0x83763ea8
	ctx.lr = 0x82B2C148;
	sub_83763EA8(ctx, base);
loc_82B2C148:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-19904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c15c
	if (cr6.eq) goto loc_82B2C15C;
	// bl 0x83779358
	ctx.lr = 0x82B2C15C;
	sub_83779358(ctx, base);
loc_82B2C15C:
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

__attribute__((alias("__imp__sub_82B2C170"))) PPC_WEAK_FUNC(sub_82B2C170);
PPC_FUNC_IMPL(__imp__sub_82B2C170) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B2C188;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addis r9,r10,222
	ctx.r9.s64 = ctx.r10.s64 + 14548992;
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// addi r9,r9,30348
	ctx.r9.s64 = ctx.r9.s64 + 30348;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bne cr6,0x82b2c1c8
	if (!cr6.eq) goto loc_82B2C1C8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b2c1f0
	goto loc_82B2C1F0;
loc_82B2C1C8:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b2c1e8
	if (!cr6.eq) goto loc_82B2C1E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2c1ec
	if (cr6.eq) goto loc_82B2C1EC;
loc_82B2C1E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2C1EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B2C1F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2c21c
	if (cr6.eq) goto loc_82B2C21C;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,187
	ctx.r9.u64 = ctx.r11.u64 | 187;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_82B2C21C:
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

__attribute__((alias("__imp__sub_82B2C230"))) PPC_WEAK_FUNC(sub_82B2C230);
PPC_FUNC_IMPL(__imp__sub_82B2C230) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B2C248;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,-31792
	ctx.r5.s64 = ctx.r9.s64 + -31792;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x831178a0
	ctx.lr = 0x82B2C26C;
	sub_831178A0(ctx, base);
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

__attribute__((alias("__imp__sub_82B2C284"))) PPC_WEAK_FUNC(sub_82B2C284);
PPC_FUNC_IMPL(__imp__sub_82B2C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C288"))) PPC_WEAK_FUNC(sub_82B2C288);
PPC_FUNC_IMPL(__imp__sub_82B2C288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B2C290;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2C29C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,-31328
	ctx.r31.s64 = ctx.r11.s64 + -31328;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2C2BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82B2C2D4;
	sub_831D0B08(ctx, base);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2C2EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B2C308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c324
	if (cr6.eq) goto loc_82B2C324;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-356
	ctx.r9.s64 = ctx.r11.s64 + -356;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B2C324;
	sub_82D29598(ctx, base);
loc_82B2C324:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2C32C"))) PPC_WEAK_FUNC(sub_82B2C32C);
PPC_FUNC_IMPL(__imp__sub_82B2C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C330"))) PPC_WEAK_FUNC(sub_82B2C330);
PPC_FUNC_IMPL(__imp__sub_82B2C330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B2C338;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2C344;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,-31328
	ctx.r31.s64 = ctx.r11.s64 + -31328;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2C364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82B2C37C;
	sub_831D0B08(ctx, base);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2C394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B2C3B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2C3B8"))) PPC_WEAK_FUNC(sub_82B2C3B8);
PPC_FUNC_IMPL(__imp__sub_82B2C3B8) {
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
	// lis r11,244
	ctx.r11.s64 = 15990784;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r9,108
	ctx.r9.s64 = 7077888;
	// ori r8,r11,18
	ctx.r8.u64 = ctx.r11.u64 | 18;
	// ori r7,r9,26
	ctx.r7.u64 = ctx.r9.u64 | 26;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bne cr6,0x82b2c430
	if (!cr6.eq) goto loc_82B2C430;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B2C40C;
	sub_82D2F6D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// beq cr6,0x82b2c430
	if (cr6.eq) goto loc_82B2C430;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82B2C424;
	sub_82D2AC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x83103100
	ctx.lr = 0x82B2C430;
	sub_83103100(ctx, base);
loc_82B2C430:
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

__attribute__((alias("__imp__sub_82B2C444"))) PPC_WEAK_FUNC(sub_82B2C444);
PPC_FUNC_IMPL(__imp__sub_82B2C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C448"))) PPC_WEAK_FUNC(sub_82B2C448);
PPC_FUNC_IMPL(__imp__sub_82B2C448) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82B2C460;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B2C46C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B2C47C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2C48C;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B2C4A0"))) PPC_WEAK_FUNC(sub_82B2C4A0);
PPC_FUNC_IMPL(__imp__sub_82B2C4A0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c4c0
	if (cr6.eq) goto loc_82B2C4C0;
	// bl 0x82bf7190
	ctx.lr = 0x82B2C4C0;
	sub_82BF7190(ctx, base);
loc_82B2C4C0:
	// bl 0x83763ef8
	ctx.lr = 0x82B2C4C4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c4d4
	if (cr6.eq) goto loc_82B2C4D4;
	// bl 0x83763ef8
	ctx.lr = 0x82B2C4D0;
	sub_83763EF8(ctx, base);
	// bl 0x83763ea8
	ctx.lr = 0x82B2C4D4;
	sub_83763EA8(ctx, base);
loc_82B2C4D4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-19904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c4e8
	if (cr6.eq) goto loc_82B2C4E8;
	// bl 0x83779358
	ctx.lr = 0x82B2C4E8;
	sub_83779358(ctx, base);
loc_82B2C4E8:
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

__attribute__((alias("__imp__sub_82B2C4FC"))) PPC_WEAK_FUNC(sub_82B2C4FC);
PPC_FUNC_IMPL(__imp__sub_82B2C4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C500"))) PPC_WEAK_FUNC(sub_82B2C500);
PPC_FUNC_IMPL(__imp__sub_82B2C500) {
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
	// bl 0x8310cc00
	ctx.lr = 0x82B2C518;
	sub_8310CC00(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b2c538
	if (cr6.lt) goto loc_82B2C538;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b2c53c
	if (!cr6.gt) goto loc_82B2C53C;
loc_82B2C538:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2C53C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2c56c
	if (cr6.eq) goto loc_82B2C56C;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c5a8
	if (cr6.eq) goto loc_82B2C5A8;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x83089f30
	ctx.lr = 0x82B2C560;
	sub_83089F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2c5a8
	if (!cr6.eq) goto loc_82B2C5A8;
loc_82B2C56C:
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2c5a8
	if (!cr6.eq) goto loc_82B2C5A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2c448
	ctx.lr = 0x82B2C580;
	sub_82B2C448(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-31384
	ctx.r5.s64 = ctx.r11.s64 + -31384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B2C594;
	sub_82D20DA8(ctx, base);
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
loc_82B2C5A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// bl 0x82b2c3b8
	ctx.lr = 0x82B2C5B8;
	sub_82B2C3B8(ctx, base);
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

__attribute__((alias("__imp__sub_82B2C5CC"))) PPC_WEAK_FUNC(sub_82B2C5CC);
PPC_FUNC_IMPL(__imp__sub_82B2C5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C5D0"))) PPC_WEAK_FUNC(sub_82B2C5D0);
PPC_FUNC_IMPL(__imp__sub_82B2C5D0) {
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
	// blt cr6,0x82b2c5f8
	if (cr6.lt) goto loc_82B2C5F8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2c5fc
	goto loc_82B2C5FC;
loc_82B2C5F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2C5FC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,232
	ctx.r4.s64 = 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B2C618;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c630
	if (cr6.eq) goto loc_82B2C630;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b2bf88
	ctx.lr = 0x82B2C62C;
	sub_82B2BF88(ctx, base);
	// b 0x82b2c634
	goto loc_82B2C634;
loc_82B2C630:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2C634:
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

__attribute__((alias("__imp__sub_82B2C64C"))) PPC_WEAK_FUNC(sub_82B2C64C);
PPC_FUNC_IMPL(__imp__sub_82B2C64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C650"))) PPC_WEAK_FUNC(sub_82B2C650);
PPC_FUNC_IMPL(__imp__sub_82B2C650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2C658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,-31757
	ctx.r29.s64 = ctx.r11.s64 + -31757;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r29,381
	ctx.r6.s64 = ctx.r29.s64 + 381;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B2C688;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b2c6a0
	if (!cr6.eq) goto loc_82B2C6A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,227(r30)
	PPC_STORE_U8(ctx.r30.u32 + 227, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2C6A0:
	// addi r6,r29,397
	ctx.r6.s64 = ctx.r29.s64 + 397;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B2C6B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b2c75c
	if (!cr6.eq) goto loc_82B2C75C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r31,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r31.u32);
	// bne cr6,0x82b2c75c
	if (!cr6.eq) goto loc_82B2C75C;
	// addi r5,r29,413
	ctx.r5.s64 = ctx.r29.s64 + 413;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B2C6E0;
	sub_82D20DA8(ctx, base);
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2c758
	if (cr6.eq) goto loc_82B2C758;
	// bl 0x831156e8
	ctx.lr = 0x82B2C6F0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,60(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82b2c170
	ctx.lr = 0x82B2C704;
	sub_82B2C170(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8311cd08
	ctx.lr = 0x82B2C714;
	sub_8311CD08(ctx, base);
	// lbz r8,216(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b2c744
	if (cr6.eq) goto loc_82B2C744;
	// bl 0x831156e8
	ctx.lr = 0x82B2C72C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addis r3,r11,222
	ctx.r3.s64 = ctx.r11.s64 + 14548992;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,30408
	ctx.r3.s64 = ctx.r3.s64 + 30408;
	// bl 0x831ce7d8
	ctx.lr = 0x82B2C744;
	sub_831CE7D8(ctx, base);
loc_82B2C744:
	// bl 0x831156e8
	ctx.lr = 0x82B2C748;
	sub_831156E8(ctx, base);
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,31060
	ctx.r9.u64 = ctx.r11.u64 | 31060;
	// stbx r31,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u8);
loc_82B2C758:
	// bl 0x82b2bf30
	ctx.lr = 0x82B2C75C;
	sub_82B2BF30(ctx, base);
loc_82B2C75C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2C764"))) PPC_WEAK_FUNC(sub_82B2C764);
PPC_FUNC_IMPL(__imp__sub_82B2C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2C768"))) PPC_WEAK_FUNC(sub_82B2C768);
PPC_FUNC_IMPL(__imp__sub_82B2C768) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B2C794;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c7b0
	if (cr6.eq) goto loc_82B2C7B0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-30816
	ctx.r10.s64 = ctx.r11.s64 + -30816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82b2c7b4
	goto loc_82B2C7B4;
loc_82B2C7B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B2C7B4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82B2C7D0;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82B2C7E8"))) PPC_WEAK_FUNC(sub_82B2C7E8);
PPC_FUNC_IMPL(__imp__sub_82B2C7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B2C7F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2C7FC;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B2C804;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2c330
	ctx.lr = 0x82B2C810;
	sub_82B2C330(ctx, base);
	// bl 0x82d3a1c8
	ctx.lr = 0x82B2C814;
	sub_82D3A1C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B2C83C;
	sub_8259CB28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82b2c850
	if (!cr6.lt) goto loc_82B2C850;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82B2C850:
	// bl 0x831156e8
	ctx.lr = 0x82B2C854;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addis r3,r11,222
	ctx.r3.s64 = ctx.r11.s64 + 14548992;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,30408
	ctx.r3.s64 = ctx.r3.s64 + 30408;
	// bl 0x831ce7d8
	ctx.lr = 0x82B2C86C;
	sub_831CE7D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B2C870;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r8,r9,222
	ctx.r8.s64 = ctx.r9.s64 + 14548992;
	// addi r8,r8,-8464
	ctx.r8.s64 = ctx.r8.s64 + -8464;
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-26672
	ctx.r7.s64 = ctx.r7.s64 + -26672;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// bl 0x8311be78
	ctx.lr = 0x82B2C89C;
	sub_8311BE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c8c4
	if (cr6.eq) goto loc_82B2C8C4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2c8b8
	if (!cr6.lt) goto loc_82B2C8B8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B2C8B8:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x831ce7d8
	ctx.lr = 0x82B2C8C4;
	sub_831CE7D8(ctx, base);
loc_82B2C8C4:
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311be78
	ctx.lr = 0x82B2C8DC;
	sub_8311BE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c904
	if (cr6.eq) goto loc_82B2C904;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2c8f8
	if (!cr6.lt) goto loc_82B2C8F8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B2C8F8:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x831ce7d8
	ctx.lr = 0x82B2C904;
	sub_831CE7D8(ctx, base);
loc_82B2C904:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B2C914:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82b2c914
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2C914;
	// bl 0x83763ef8
	ctx.lr = 0x82B2C920;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2c934
	if (cr6.eq) goto loc_82B2C934;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// bl 0x83777e50
	ctx.lr = 0x82B2C934;
	sub_83777E50(ctx, base);
loc_82B2C934:
	// addis r3,r30,222
	ctx.r3.s64 = ctx.r30.s64 + 14548992;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r3,30988
	ctx.r3.s64 = ctx.r3.s64 + 30988;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82B2C948;
	sub_831CE980(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2c968
	if (cr6.lt) goto loc_82B2C968;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2C968;
	sub_825952B8(ctx, base);
loc_82B2C968:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2C970"))) PPC_WEAK_FUNC(sub_82B2C970);
PPC_FUNC_IMPL(__imp__sub_82B2C970) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x831cdcf0
	ctx.lr = 0x82B2C9AC;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82B2C9BC;
	sub_831CDCF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b2c170
	ctx.lr = 0x82B2C9C8;
	sub_82B2C170(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82B2C9D0;
	sub_83763EF8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83775138
	ctx.lr = 0x82B2C9DC;
	sub_83775138(ctx, base);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a725e8
	ctx.lr = 0x82B2C9EC;
	sub_82A725E8(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b2ca40
	if (!cr6.eq) goto loc_82B2CA40;
	// bl 0x831156e8
	ctx.lr = 0x82B2C9FC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r4,r11,222
	ctx.r4.s64 = ctx.r11.s64 + 14548992;
	// addi r4,r4,30408
	ctx.r4.s64 = ctx.r4.s64 + 30408;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B2CA0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2ca0c
	if (!cr6.eq) goto loc_82B2CA0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B2CA30;
	sub_8259CC28(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b2ca44
	if (cr6.eq) goto loc_82B2CA44;
loc_82B2CA40:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B2CA44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B2CA60;
	sub_82D1EBF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2ca80
	if (cr6.lt) goto loc_82B2CA80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2CA80;
	sub_825952B8(ctx, base);
loc_82B2CA80:
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

__attribute__((alias("__imp__sub_82B2CA98"))) PPC_WEAK_FUNC(sub_82B2CA98);
PPC_FUNC_IMPL(__imp__sub_82B2CA98) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r31,r11,-31276
	ctx.r31.s64 = ctx.r11.s64 + -31276;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,-450
	ctx.r4.s64 = ctx.r31.s64 + -450;
	// bl 0x8259cc28
	ctx.lr = 0x82B2CADC;
	sub_8259CC28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2c330
	ctx.lr = 0x82B2CAE8;
	sub_82B2C330(ctx, base);
	// bl 0x82d3a1c8
	ctx.lr = 0x82B2CAEC;
	sub_82D3A1C8(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b2cb00
	if (cr6.lt) goto loc_82B2CB00;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2cb04
	goto loc_82B2CB04;
loc_82B2CB00:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B2CB04:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B2CB08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2cb08
	if (!cr6.eq) goto loc_82B2CB08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B2CB2C;
	sub_8259CC28(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2cbd4
	if (!cr6.eq) goto loc_82B2CBD4;
	// bl 0x831156e8
	ctx.lr = 0x82B2CB3C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r4,r11,222
	ctx.r4.s64 = ctx.r11.s64 + 14548992;
	// addi r4,r4,30408
	ctx.r4.s64 = ctx.r4.s64 + 30408;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B2CB4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2cb4c
	if (!cr6.eq) goto loc_82B2CB4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B2CB70;
	sub_8259CC28(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2cbd4
	if (!cr6.eq) goto loc_82B2CBD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82B2CB90;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2cbd4
	if (cr6.eq) goto loc_82B2CBD4;
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
	// bl 0x82d2ada8
	ctx.lr = 0x82B2CBA8;
	sub_82D2ADA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2CBB8;
	sub_82D19788(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82B2CBC4;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2CBCC;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b2cbf8
	goto loc_82B2CBF8;
loc_82B2CBD4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2cbf4
	if (cr6.lt) goto loc_82B2CBF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2CBF4;
	sub_825952B8(ctx, base);
loc_82B2CBF4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B2CBF8:
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

__attribute__((alias("__imp__sub_82B2CC10"))) PPC_WEAK_FUNC(sub_82B2CC10);
PPC_FUNC_IMPL(__imp__sub_82B2CC10) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19840
	ctx.lr = 0x82B2CC2C;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b2cc48
	if (cr6.eq) goto loc_82B2CC48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19840
	ctx.lr = 0x82B2CC40;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b2cc84
	if (!cr6.eq) goto loc_82B2CC84;
loc_82B2CC48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2CC50;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B2CC5C;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2CC6C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2CC7C;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2c970
	ctx.lr = 0x82B2CC84;
	sub_82B2C970(ctx, base);
loc_82B2CC84:
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

__attribute__((alias("__imp__sub_82B2CC98"))) PPC_WEAK_FUNC(sub_82B2CC98);
PPC_FUNC_IMPL(__imp__sub_82B2CC98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82B2CCB4;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2cd04
	if (cr6.eq) goto loc_82B2CD04;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2ccec
	if (cr6.eq) goto loc_82B2CCEC;
	// bl 0x837c9c08
	ctx.lr = 0x82B2CCD0;
	sub_837C9C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ccec
	if (cr6.eq) goto loc_82B2CCEC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2ccf0
	if (cr6.eq) goto loc_82B2CCF0;
loc_82B2CCEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2CCF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2cd04
	if (!cr6.eq) goto loc_82B2CD04;
loc_82B2CCFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b2cda4
	goto loc_82B2CDA4;
loc_82B2CD04:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2cd1c
	if (cr6.eq) goto loc_82B2CD1C;
	// lbz r11,227(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 227);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ccfc
	if (cr6.eq) goto loc_82B2CCFC;
loc_82B2CD1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,226(r30)
	PPC_STORE_U8(ctx.r30.u32 + 226, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-31248
	ctx.r4.s64 = ctx.r10.s64 + -31248;
	// bl 0x837b0c10
	ctx.lr = 0x82B2CD34;
	sub_837B0C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2c330
	ctx.lr = 0x82B2CD40;
	sub_82B2C330(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3a520
	ctx.lr = 0x82B2CD4C;
	sub_82D3A520(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B2CD6C;
	sub_82D1EBF8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2CD80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82b2cda0
	if (cr6.lt) goto loc_82B2CDA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2CDA0;
	sub_825952B8(ctx, base);
loc_82B2CDA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B2CDA4:
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

__attribute__((alias("__imp__sub_82B2CDBC"))) PPC_WEAK_FUNC(sub_82B2CDBC);
PPC_FUNC_IMPL(__imp__sub_82B2CDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2CDC0"))) PPC_WEAK_FUNC(sub_82B2CDC0);
PPC_FUNC_IMPL(__imp__sub_82B2CDC0) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82B2CDDC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2ce84
	if (cr6.eq) goto loc_82B2CE84;
	// bl 0x82bda618
	ctx.lr = 0x82B2CDE8;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2ce28
	if (cr6.eq) goto loc_82B2CE28;
	// bl 0x82a780d0
	ctx.lr = 0x82B2CDF4;
	sub_82A780D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ce28
	if (cr6.eq) goto loc_82B2CE28;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ce18
	if (cr6.eq) goto loc_82B2CE18;
	// lbz r11,227(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ce20
	if (cr6.eq) goto loc_82B2CE20;
loc_82B2CE18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2cc10
	ctx.lr = 0x82B2CE20;
	sub_82B2CC10(ctx, base);
loc_82B2CE20:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82B2CE28;
	sub_82D17AA0(ctx, base);
loc_82B2CE28:
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2ce84
	if (!cr6.eq) goto loc_82B2CE84;
	// lis r30,-31760
	ctx.r30.s64 = -2081423360;
	// lwz r3,-22728(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22728);
	// bl 0x82bf71a0
	ctx.lr = 0x82B2CE40;
	sub_82BF71A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2ce84
	if (cr6.eq) goto loc_82B2CE84;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-22728(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22728);
	// bl 0x82bf73c0
	ctx.lr = 0x82B2CE58;
	sub_82BF73C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// bl 0x82d199f0
	ctx.lr = 0x82B2CE68;
	sub_82D199F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2ce84
	if (!cr6.eq) goto loc_82B2CE84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B2CE84;
	sub_82D1EAC0(ctx, base);
loc_82B2CE84:
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

__attribute__((alias("__imp__sub_82B2CEA0"))) PPC_WEAK_FUNC(sub_82B2CEA0);
PPC_FUNC_IMPL(__imp__sub_82B2CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2CEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B2CEB4;
	sub_82D1C1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B2CEC0;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b2d014
	if (!cr6.eq) goto loc_82B2D014;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x82b2cee8
	if (!cr6.eq) goto loc_82B2CEE8;
	// bl 0x831156e8
	ctx.lr = 0x82B2CED8;
	sub_831156E8(ctx, base);
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,31060
	ctx.r9.u64 = ctx.r11.u64 | 31060;
	// stbx r28,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u8);
loc_82B2CEE8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-31392
	ctx.r30.s64 = ctx.r11.s64 + -31392;
	// addi r4,r30,-397
	ctx.r4.s64 = ctx.r30.s64 + -397;
	// bl 0x837b0c10
	ctx.lr = 0x82B2CEFC;
	sub_837B0C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2c330
	ctx.lr = 0x82B2CF08;
	sub_82B2C330(ctx, base);
	// bl 0x82d3a1c8
	ctx.lr = 0x82B2CF0C;
	sub_82D3A1C8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2cf20
	if (cr6.lt) goto loc_82B2CF20;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82B2CF20:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B2CF24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2cf24
	if (!cr6.eq) goto loc_82B2CF24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B2CF48;
	sub_8259CC28(ctx, base);
	// addi r6,r30,-366
	ctx.r6.s64 = ctx.r30.s64 + -366;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82B2CF60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b2cf98
	if (cr6.eq) goto loc_82B2CF98;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2cf7c
	if (!cr6.lt) goto loc_82B2CF7C;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82B2CF7C:
	// bl 0x831156e8
	ctx.lr = 0x82B2CF80;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addis r3,r11,222
	ctx.r3.s64 = ctx.r11.s64 + 14548992;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,30408
	ctx.r3.s64 = ctx.r3.s64 + 30408;
	// bl 0x831ce7d8
	ctx.lr = 0x82B2CF98;
	sub_831CE7D8(ctx, base);
loc_82B2CF98:
	// stb r28,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2CFA4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B2CFB0;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2CFC0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2CFD0;
	sub_82D19788(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-364
	ctx.r9.s64 = ctx.r11.s64 + -364;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82B2CFEC;
	sub_82D20DA8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b2d104
	if (cr6.lt) goto loc_82B2D104;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2D00C;
	sub_825952B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2D014:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82b2d104
	if (!cr6.eq) goto loc_82B2D104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2ca98
	ctx.lr = 0x82B2D024;
	sub_82B2CA98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2d104
	if (cr6.eq) goto loc_82B2D104;
	// bl 0x8310cc00
	ctx.lr = 0x82B2D034;
	sub_8310CC00(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b2d058
	if (cr6.lt) goto loc_82B2D058;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// ble cr6,0x82b2d05c
	if (!cr6.gt) goto loc_82B2D05C;
loc_82B2D058:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2D05C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2d0d4
	if (cr6.eq) goto loc_82B2D0D4;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d08c
	if (cr6.eq) goto loc_82B2D08C;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x83089f30
	ctx.lr = 0x82B2D080;
	sub_83089F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2d0d4
	if (cr6.eq) goto loc_82B2D0D4;
loc_82B2D08C:
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2c7e8
	ctx.lr = 0x82B2D098;
	sub_82B2C7E8(ctx, base);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b2d0c4
	if (cr6.eq) goto loc_82B2D0C4;
	// addi r11,r11,-31392
	ctx.r11.s64 = ctx.r11.s64 + -31392;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B2D0BC;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2D0C4:
	// addi r5,r11,-31392
	ctx.r5.s64 = ctx.r11.s64 + -31392;
	// bl 0x82d20da8
	ctx.lr = 0x82B2D0CC;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B2D0D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2c448
	ctx.lr = 0x82B2D0DC;
	sub_82B2C448(ctx, base);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31392
	ctx.r11.s64 = ctx.r11.s64 + -31392;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x82b2d100
	if (!cr6.eq) goto loc_82B2D100;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
loc_82B2D100:
	// bl 0x82d20da8
	ctx.lr = 0x82B2D104;
	sub_82D20DA8(ctx, base);
loc_82B2D104:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D10C"))) PPC_WEAK_FUNC(sub_82B2D10C);
PPC_FUNC_IMPL(__imp__sub_82B2D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D110"))) PPC_WEAK_FUNC(sub_82B2D110);
PPC_FUNC_IMPL(__imp__sub_82B2D110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2D118;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2D124;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d2a0
	if (cr6.eq) goto loc_82B2D2A0;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,264
	ctx.r11.s64 = ctx.r1.s64 + 264;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B2D140:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82b2d140
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2D140;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,264
	ctx.r11.s64 = ctx.r1.s64 + 264;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B2D158:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82b2d158
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2D158;
	// bl 0x831156e8
	ctx.lr = 0x82B2D164;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B2D16C;
	sub_831156E8(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,-31792
	ctx.r30.s64 = ctx.r11.s64 + -31792;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x831178a0
	ctx.lr = 0x82B2D190;
	sub_831178A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x82B2D19C;
	sub_8311C148(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b2c330
	ctx.lr = 0x82B2D1A8;
	sub_82B2C330(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d2a0
	if (cr6.eq) goto loc_82B2D2A0;
	// bl 0x831156e8
	ctx.lr = 0x82B2D1B8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r4,r10,222
	ctx.r4.s64 = ctx.r10.s64 + 14548992;
	// addi r4,r4,30408
	ctx.r4.s64 = ctx.r4.s64 + 30408;
	// bl 0x837b0c10
	ctx.lr = 0x82B2D1D0;
	sub_837B0C10(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B2D1F8;
	sub_837B0C10(ctx, base);
	// lis r9,29
	ctx.r9.s64 = 1900544;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r30,r9,572
	ctx.r30.u64 = ctx.r9.u64 | 572;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82B2D20C;
	sub_82D042A8(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82b2d224
	if (!cr6.lt) goto loc_82B2D224;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82B2D224:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8259d6c0
	ctx.lr = 0x82B2D22C;
	sub_8259D6C0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B2D240;
	sub_8259CB28(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83071ea8
	ctx.lr = 0x82B2D260;
	sub_83071EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stb r29,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// bl 0x82d3a988
	ctx.lr = 0x82B2D288;
	sub_82D3A988(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2D290;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8378e240
	ctx.lr = 0x82B2D298;
	sub_8378E240(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2D2A0;
	sub_8387E8E0(ctx, base);
loc_82B2D2A0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D2A8"))) PPC_WEAK_FUNC(sub_82B2D2A8);
PPC_FUNC_IMPL(__imp__sub_82B2D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B2D2B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2D2C0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,-31328
	ctx.r31.s64 = ctx.r11.s64 + -31328;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2D2E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d0b08
	ctx.lr = 0x82B2D2F8;
	sub_831D0B08(ctx, base);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B2D310;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B2D32C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r31,-399
	ctx.r4.s64 = ctx.r31.s64 + -399;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B2D354;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82B2D360;
	sub_82D3BCC0(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82b2d380
	if (cr6.lt) goto loc_82B2D380;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B2D380;
	sub_825952B8(ctx, base);
loc_82B2D380:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bne cr6,0x82b2d39c
	if (!cr6.eq) goto loc_82B2D39C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b2d110
	ctx.lr = 0x82B2D39C;
	sub_82B2D110(ctx, base);
loc_82B2D39C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D3A4"))) PPC_WEAK_FUNC(sub_82B2D3A4);
PPC_FUNC_IMPL(__imp__sub_82B2D3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D3A8"))) PPC_WEAK_FUNC(sub_82B2D3A8);
PPC_FUNC_IMPL(__imp__sub_82B2D3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B2D3B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2D3BC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B2D3C8;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2D3D8;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B2D3E8;
	sub_82D19788(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B2D3EC;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 204);
	// addis r29,r10,222
	ctx.r29.s64 = ctx.r10.s64 + 14548992;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r29,30988
	ctx.r29.s64 = ctx.r29.s64 + 30988;
	// beq cr6,0x82b2d4b8
	if (cr6.eq) goto loc_82B2D4B8;
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b2d524
	if (cr6.lt) goto loc_82B2D524;
	// beq cr6,0x82b2d4e0
	if (cr6.eq) goto loc_82B2D4E0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b2d4b8
	if (!cr6.eq) goto loc_82B2D4B8;
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// ori r9,r11,31060
	ctx.r9.u64 = ctx.r11.u64 | 31060;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b2d43c
	if (!cr6.eq) goto loc_82B2D43C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8373fae8
	ctx.lr = 0x82B2D43C;
	sub_8373FAE8(ctx, base);
loc_82B2D43C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b2c170
	ctx.lr = 0x82B2D448;
	sub_82B2C170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a76558
	ctx.lr = 0x82B2D458;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2d478
	if (!cr6.eq) goto loc_82B2D478;
	// bl 0x83763ef8
	ctx.lr = 0x82B2D46C;
	sub_83763EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83777e50
	ctx.lr = 0x82B2D478;
	sub_83777E50(ctx, base);
loc_82B2D478:
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82B2D480;
	sub_83763EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x83777d88
	ctx.lr = 0x82B2D490;
	sub_83777D88(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82B2D494;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a8f3f8
	ctx.lr = 0x82B2D49C;
	sub_82A8F3F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b2c230
	ctx.lr = 0x82B2D4A8;
	sub_82B2C230(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82B2D4B0;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a70010
	ctx.lr = 0x82B2D4B8;
	sub_82A70010(ctx, base);
loc_82B2D4B8:
	// lis r31,-31760
	ctx.r31.s64 = -2081423360;
	// lwz r11,-22728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2d55c
	if (!cr6.eq) goto loc_82B2D55C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bf8248
	ctx.lr = 0x82B2D4D0;
	sub_82BF8248(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-22728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
	// bl 0x82bf71c8
	ctx.lr = 0x82B2D4DC;
	sub_82BF71C8(ctx, base);
	// b 0x82b2d578
	goto loc_82B2D578;
loc_82B2D4E0:
	// bl 0x83763ef8
	ctx.lr = 0x82B2D4E4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d510
	if (cr6.eq) goto loc_82B2D510;
	// bl 0x83763ef8
	ctx.lr = 0x82B2D4F0;
	sub_83763EF8(ctx, base);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x82B2D4F8;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2d510
	if (!cr6.eq) goto loc_82B2D510;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B2D510:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B2D524:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83768598
	ctx.lr = 0x82B2D52C;
	sub_83768598(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82B2D530;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d548
	if (cr6.eq) goto loc_82B2D548;
	// bl 0x83763ef8
	ctx.lr = 0x82B2D53C;
	sub_83763EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376eb58
	ctx.lr = 0x82B2D548;
	sub_8376EB58(ctx, base);
loc_82B2D548:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B2D55C:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2d570
	if (!cr6.eq) goto loc_82B2D570;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2cc10
	ctx.lr = 0x82B2D570;
	sub_82B2CC10(ctx, base);
loc_82B2D570:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82B2D578;
	sub_82D17AA0(ctx, base);
loc_82B2D578:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-19904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2d58c
	if (!cr6.eq) goto loc_82B2D58C;
	// bl 0x837792e0
	ctx.lr = 0x82B2D58C;
	sub_837792E0(ctx, base);
loc_82B2D58C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B2D594;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-31428
	ctx.r4.s64 = ctx.r11.s64 + -31428;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2D5B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d5c4
	if (cr6.eq) goto loc_82B2D5C4;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,627
	ctx.r4.u64 = ctx.r4.u64 | 627;
	// bl 0x82d303d0
	ctx.lr = 0x82B2D5C4;
	sub_82D303D0(ctx, base);
loc_82B2D5C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B2D5E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d65c
	if (cr6.eq) goto loc_82B2D65C;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r27,r10,-364
	ctx.r27.s64 = ctx.r10.s64 + -364;
loc_82B2D604:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82B2D618;
	sub_82BDC948(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r29,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B2D62C;
	sub_82D233B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2c288
	ctx.lr = 0x82B2D638;
	sub_82B2C288(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b2d2a8
	ctx.lr = 0x82B2D648;
	sub_82B2D2A8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x82b2d604
	if (cr6.lt) goto loc_82B2D604;
loc_82B2D65C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D668"))) PPC_WEAK_FUNC(sub_82B2D668);
PPC_FUNC_IMPL(__imp__sub_82B2D668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2D670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B2D688;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B2D6A0;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// addi r9,r11,-30112
	ctx.r9.s64 = ctx.r11.s64 + -30112;
	// stb r29,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r29.u8);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-208(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -208);
	// bl 0x82d20ae0
	ctx.lr = 0x82B2D6D0;
	sub_82D20AE0(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-30344
	ctx.r4.s64 = ctx.r6.s64 + -30344;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B2D6E4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9a8
	ctx.lr = 0x82B2D6EC;
	sub_82D1A9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D6F8"))) PPC_WEAK_FUNC(sub_82B2D6F8);
PPC_FUNC_IMPL(__imp__sub_82B2D6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B2D700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2D70C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2D71C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B2D724;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// bl 0x831156e8
	ctx.lr = 0x82B2D734;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r29,r10,221
	ctx.r29.s64 = ctx.r10.s64 + 14483456;
	// addi r29,r29,-26512
	ctx.r29.s64 = ctx.r29.s64 + -26512;
	// bl 0x82d33db0
	ctx.lr = 0x82B2D750;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B2D768;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// bl 0x83a970c8
	ctx.lr = 0x82B2D774;
	sub_83A970C8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2D784;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B2D79C;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// bl 0x831156e8
	ctx.lr = 0x82B2D7AC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x83a970c8
	ctx.lr = 0x82B2D7BC;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,24160
	ctx.r3.s64 = ctx.r3.s64 + 24160;
	// bl 0x82acd678
	ctx.lr = 0x82B2D7CC;
	sub_82ACD678(ctx, base);
	// stb r3,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r3.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2D7DC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B2D7F4;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// bl 0x83a970c8
	ctx.lr = 0x82B2D800;
	sub_83A970C8(ctx, base);
	// stw r3,7592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7592, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2D810;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B2D828;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83a970c8
	ctx.lr = 0x82B2D838;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2d844
	if (!cr6.eq) goto loc_82B2D844;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82B2D844:
	// stb r31,7590(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7590, ctx.r31.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2D854;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B2D86C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// bl 0x83a970c8
	ctx.lr = 0x82B2D878;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82b2d888
	if (cr6.eq) goto loc_82B2D888;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B2D888:
	// stb r11,7702(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7702, ctx.r11.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2D898;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B2D8B0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2d910
	if (cr6.eq) goto loc_82B2D910;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83a970c8
	ctx.lr = 0x82B2D8C0;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82b2d8f8
	if (cr6.gt) goto loc_82B2D8F8;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b2d8e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B2D8E4;
	// bdzf 4*cr6+eq,0x82b2d8ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B2D8EC;
	// bne cr6,0x82b2d8f4
	if (!cr6.eq) goto loc_82B2D8F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82b2d8f8
	goto loc_82B2D8F8;
loc_82B2D8E4:
	// li r31,31
	ctx.r31.s64 = 31;
	// b 0x82b2d8f8
	goto loc_82B2D8F8;
loc_82B2D8EC:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82b2d8f8
	goto loc_82B2D8F8;
loc_82B2D8F4:
	// li r31,5
	ctx.r31.s64 = 5;
loc_82B2D8F8:
	// stw r31,7724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7724, ctx.r31.u32);
	// lbz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2d910
	if (!cr6.eq) goto loc_82B2D910;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8316bc30
	ctx.lr = 0x82B2D910;
	sub_8316BC30(ctx, base);
loc_82B2D910:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2D91C"))) PPC_WEAK_FUNC(sub_82B2D91C);
PPC_FUNC_IMPL(__imp__sub_82B2D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2D920"))) PPC_WEAK_FUNC(sub_82B2D920);
PPC_FUNC_IMPL(__imp__sub_82B2D920) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82B2D938;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b2d954
	if (cr6.eq) goto loc_82B2D954;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-30204
	ctx.r5.s64 = ctx.r11.s64 + -30204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B2D954;
	sub_82D20DA8(ctx, base);
loc_82B2D954:
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

__attribute__((alias("__imp__sub_82B2D968"))) PPC_WEAK_FUNC(sub_82B2D968);
PPC_FUNC_IMPL(__imp__sub_82B2D968) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30112
	ctx.r9.s64 = ctx.r11.s64 + -30112;
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
	ctx.lr = 0x82B2D9A0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2d9b8
	if (cr6.eq) goto loc_82B2D9B8;
	// bl 0x82416268
	ctx.lr = 0x82B2D9B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B2D9B8:
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

__attribute__((alias("__imp__sub_82B2D9D0"))) PPC_WEAK_FUNC(sub_82B2D9D0);
PPC_FUNC_IMPL(__imp__sub_82B2D9D0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r11,-30416
	ctx.r6.s64 = ctx.r11.s64 + -30416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B2DA04;
	sub_827A8810(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b2da54
	if (!cr6.eq) goto loc_82B2DA54;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2da1c
	if (cr6.lt) goto loc_82B2DA1C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B2DA1C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B2DA38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2da98
	if (cr6.eq) goto loc_82B2DA98;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b2d668
	ctx.lr = 0x82B2DA50;
	sub_82B2D668(ctx, base);
	// b 0x82b2da9c
	goto loc_82B2DA9C;
loc_82B2DA54:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b2da60
	if (cr6.lt) goto loc_82B2DA60;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B2DA60:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B2DA7C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2da98
	if (cr6.eq) goto loc_82B2DA98;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b2d668
	ctx.lr = 0x82B2DA94;
	sub_82B2D668(ctx, base);
	// b 0x82b2da9c
	goto loc_82B2DA9C;
loc_82B2DA98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2DA9C:
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

__attribute__((alias("__imp__sub_82B2DAB4"))) PPC_WEAK_FUNC(sub_82B2DAB4);
PPC_FUNC_IMPL(__imp__sub_82B2DAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2DAB8"))) PPC_WEAK_FUNC(sub_82B2DAB8);
PPC_FUNC_IMPL(__imp__sub_82B2DAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B2DAC0;
	__savegprlr_19(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2DACC;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2DADC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B2DAE4;
	sub_82D33DB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// li r20,6
	ctx.r20.s64 = 6;
	// bl 0x82d33c10
	ctx.lr = 0x82B2DAF8;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bge cr6,0x82b2db0c
	if (!cr6.lt) goto loc_82B2DB0C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B2DB08;
	sub_82D33C10(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_82B2DB0C:
	// bl 0x831156e8
	ctx.lr = 0x82B2DB10;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r26,r11,5128
	ctx.r26.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82b2db34
	if (!cr6.eq) goto loc_82B2DB34;
	// bl 0x82d26ed8
	ctx.lr = 0x82B2DB2C;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82B2DB34;
	sub_82D26900(ctx, base);
loc_82B2DB34:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2DB3C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r24,r11,-30448
	ctx.r24.s64 = ctx.r11.s64 + -30448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,116
	ctx.r4.s64 = ctx.r24.s64 + 116;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DB5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,91
	ctx.r4.u64 = ctx.r4.u64 | 91;
	// bl 0x82d30340
	ctx.lr = 0x82B2DB74;
	sub_82D30340(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B2DB84;
	sub_82D1ED60(ctx, base);
	// addi r5,r24,128
	ctx.r5.s64 = ctx.r24.s64 + 128;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x831d0b08
	ctx.lr = 0x82B2DB98;
	sub_831D0B08(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2DBA0;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DBB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r24,144
	ctx.r5.s64 = ctx.r24.s64 + 144;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x831d0b08
	ctx.lr = 0x82B2DBCC;
	sub_831D0B08(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2DBD4;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B2DBEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2DBF4;
	sub_82D19A78(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B2DC0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B2DC14;
	sub_82D19A78(ctx, base);
	// addi r4,r24,164
	ctx.r4.s64 = ctx.r24.s64 + 164;
	// bl 0x82d2f098
	ctx.lr = 0x82B2DC1C;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lbz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 96);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2dc5c
	if (cr6.eq) goto loc_82B2DC5C;
	// bl 0x82d19a78
	ctx.lr = 0x82B2DC3C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,172
	ctx.r4.s64 = ctx.r24.s64 + 172;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DC54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b2dc90
	goto loc_82B2DC90;
loc_82B2DC5C:
	// bl 0x82d19a78
	ctx.lr = 0x82B2DC60;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,184
	ctx.r4.s64 = ctx.r24.s64 + 184;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DC78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B2DC8C;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B2DC90:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B2DC9C;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B2DCA0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r22,r27,221
	ctx.r22.s64 = ctx.r27.s64 + 14483456;
	// addi r22,r22,-26512
	ctx.r22.s64 = ctx.r22.s64 + -26512;
	// bl 0x82d33db0
	ctx.lr = 0x82B2DCBC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,196
	ctx.r4.s64 = ctx.r24.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DCE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,214
	ctx.r4.u64 = ctx.r4.u64 | 214;
	// bl 0x82d29598
	ctx.lr = 0x82B2DCF4;
	sub_82D29598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2DD04;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// addi r11,r24,-60
	ctx.r11.s64 = ctx.r24.s64 + -60;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B2DD1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B2DD28;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b2dd1c
	if (!cr0.eq) goto loc_82B2DD1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82d3b298
	ctx.lr = 0x82B2DD3C;
	sub_82D3B298(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2DD48;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2DD64;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r24,204
	ctx.r4.s64 = ctx.r24.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DD88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x82d29598
	ctx.lr = 0x82B2DD9C;
	sub_82D29598(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2DDA8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,24160
	ctx.r30.s64 = ctx.r30.s64 + 24160;
loc_82B2DDB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82acd678
	ctx.lr = 0x82B2DDC4;
	sub_82ACD678(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82acd748
	ctx.lr = 0x82B2DDD4;
	sub_82ACD748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b620
	ctx.lr = 0x82B2DDE0;
	sub_82D3B620(ctx, base);
	// lbz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 4);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, xer);
	// bne cr6,0x82b2ddf0
	if (!cr6.eq) goto loc_82B2DDF0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82B2DDF0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,14
	cr6.compare<uint32_t>(ctx.r31.u32, 14, xer);
	// blt cr6,0x82b2ddb8
	if (cr6.lt) goto loc_82B2DDB8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B2DE08;
	sub_82D3B298(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2DE14;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lbz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2de3c
	if (!cr6.eq) goto loc_82B2DE3C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B2DE3C;
	sub_82D2B608(ctx, base);
loc_82B2DE3C:
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2DE50;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// addi r11,r24,-20
	ctx.r11.s64 = ctx.r24.s64 + -20;
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B2DE68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B2DE74;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b2de68
	if (!cr0.eq) goto loc_82B2DE68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r24,212
	ctx.r4.s64 = ctx.r24.s64 + 212;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DE94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,468
	ctx.r4.u64 = ctx.r4.u64 | 468;
	// bl 0x82d29598
	ctx.lr = 0x82B2DEA8;
	sub_82D29598(ctx, base);
	// bl 0x8310e030
	ctx.lr = 0x82B2DEAC;
	sub_8310E030(ctx, base);
	// lbz r11,97(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2df0c
	if (!cr6.eq) goto loc_82B2DF0C;
	// lwzx r11,r27,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b2df0c
	if (!cr6.eq) goto loc_82B2DF0C;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x82b2df04
	if (cr6.gt) goto loc_82B2DF04;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b2df04
	if (cr6.eq) goto loc_82B2DF04;
	// bdz 0x82b2deec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B2DEEC;
	// bdz 0x82b2def4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B2DEF4;
	// bdnz 0x82b2defc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2DEFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x82b2df10
	goto loc_82B2DF10;
loc_82B2DEEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b2df10
	goto loc_82B2DF10;
loc_82B2DEF4:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82b2df10
	goto loc_82B2DF10;
loc_82B2DEFC:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82b2df10
	goto loc_82B2DF10;
loc_82B2DF04:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82b2df10
	goto loc_82B2DF10;
loc_82B2DF0C:
	// lwz r4,7592(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 7592);
loc_82B2DF10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B2DF18;
	sub_82D3B298(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2DF24;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lbz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2df4c
	if (!cr6.eq) goto loc_82B2DF4C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B2DF4C;
	sub_82D2B608(ctx, base);
loc_82B2DF4C:
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2DF60;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r24,220
	ctx.r4.s64 = ctx.r24.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2DF84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
	// bl 0x82d29598
	ctx.lr = 0x82B2DF98;
	sub_82D29598(ctx, base);
	// addi r11,r24,-92
	ctx.r11.s64 = ctx.r24.s64 + -92;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B2DFA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B2DFB0;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b2dfa4
	if (!cr0.eq) goto loc_82B2DFA4;
	// lbz r10,7590(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 7590);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b2dfcc
	if (!cr6.eq) goto loc_82B2DFCC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B2DFCC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B2DFD8;
	sub_82D3B298(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2DFE4;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lbz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e00c
	if (!cr6.eq) goto loc_82B2E00C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B2E00C;
	sub_82D2B608(ctx, base);
loc_82B2E00C:
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r24,228
	ctx.r4.s64 = ctx.r24.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2E028;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,623
	ctx.r4.u64 = ctx.r4.u64 | 623;
	// bl 0x82d29598
	ctx.lr = 0x82B2E03C;
	sub_82D29598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2E04C;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// addi r11,r24,24
	ctx.r11.s64 = ctx.r24.s64 + 24;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B2E064:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B2E070;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b2e064
	if (!cr0.eq) goto loc_82B2E064;
	// lbz r11,7702(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 7702);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e090
	if (!cr6.eq) goto loc_82B2E090;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B2E090:
	// bl 0x82d3b298
	ctx.lr = 0x82B2E094;
	sub_82D3B298(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B2E0A0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lbz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e0c8
	if (!cr6.eq) goto loc_82B2E0C8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B2E0C8;
	sub_82D2B608(ctx, base);
loc_82B2E0C8:
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r24,236
	ctx.r4.s64 = ctx.r24.s64 + 236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B2E0E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,631
	ctx.r4.u64 = ctx.r4.u64 | 631;
	// bl 0x82d29598
	ctx.lr = 0x82B2E0F8;
	sub_82D29598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B2E108;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e358
	if (cr6.eq) goto loc_82B2E358;
	// addi r11,r24,-36
	ctx.r11.s64 = ctx.r24.s64 + -36;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B2E120:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B2E12C;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b2e120
	if (!cr0.eq) goto loc_82B2E120;
	// lwz r11,7724(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 7724);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82b2e16c
	if (cr6.gt) goto loc_82B2E16C;
	// beq cr6,0x82b2e164
	if (cr6.eq) goto loc_82B2E164;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b2e15c
	if (cr6.lt) goto loc_82B2E15C;
	// bne cr6,0x82b2e178
	if (!cr6.eq) goto loc_82B2E178;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82b2e178
	goto loc_82B2E178;
loc_82B2E15C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x82b2e178
	goto loc_82B2E178;
loc_82B2E164:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82b2e178
	goto loc_82B2E178;
loc_82B2E16C:
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bne cr6,0x82b2e178
	if (!cr6.eq) goto loc_82B2E178;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B2E178:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B2E180;
	sub_82D3B298(ctx, base);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// beq cr6,0x82b2e2c8
	if (cr6.eq) goto loc_82B2E2C8;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r27,39
	ctx.r27.s64 = 39;
	// li r28,41
	ctx.r28.s64 = 41;
	// li r29,40
	ctx.r29.s64 = 40;
loc_82B2E1AC:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stb r25,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r25.u8);
	// bne cr6,0x82b2e29c
	if (!cr6.eq) goto loc_82B2E29C;
	// addi r4,r24,-310
	ctx.r4.s64 = ctx.r24.s64 + -310;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82B2E1D0;
	sub_837B0C10(ctx, base);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8315e518
	ctx.lr = 0x82B2E1E8;
	sub_8315E518(ctx, base);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8315e518
	ctx.lr = 0x82B2E200;
	sub_8315E518(ctx, base);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8315e518
	ctx.lr = 0x82B2E218;
	sub_8315E518(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2e22c
	if (!cr6.lt) goto loc_82B2E22C;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
loc_82B2E22C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2e240
	if (!cr6.lt) goto loc_82B2E240;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
loc_82B2E240:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b2e254
	if (!cr6.lt) goto loc_82B2E254;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
loc_82B2E254:
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82B2E264;
	sub_82D042A8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82B2E278;
	sub_8259CB28(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2E280;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2E288;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2E290;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82B2E298;
	sub_8387E8E0(ctx, base);
	// b 0x82b2e2a8
	goto loc_82B2E2A8;
loc_82B2E29C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82B2E2A8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f6558
	ctx.lr = 0x82B2E2B4;
	sub_830F6558(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x838760e0
	ctx.lr = 0x82B2E2BC;
	sub_838760E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r20
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, xer);
	// blt cr6,0x82b2e1ac
	if (cr6.lt) goto loc_82B2E1AC;
loc_82B2E2C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B2E2D8;
	sub_82D24C38(ctx, base);
	// lbz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e334
	if (cr6.eq) goto loc_82B2E334;
	// lis r11,269
	ctx.r11.s64 = 17629184;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// ori r10,r11,176
	ctx.r10.u64 = ctx.r11.u64 | 176;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stb r25,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r25.u8);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x830f6558
	ctx.lr = 0x82B2E314;
	sub_830F6558(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B2E324;
	sub_82D24C38(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x838760e0
	ctx.lr = 0x82B2E32C;
	sub_838760E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82acdc18
	ctx.lr = 0x82B2E334;
	sub_82ACDC18(ctx, base);
loc_82B2E334:
	// lbz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e350
	if (cr6.eq) goto loc_82B2E350;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B2E350;
	sub_82D1EAC0(ctx, base);
loc_82B2E350:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82acdc18
	ctx.lr = 0x82B2E358;
	sub_82ACDC18(ctx, base);
loc_82B2E358:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2E364"))) PPC_WEAK_FUNC(sub_82B2E364);
PPC_FUNC_IMPL(__imp__sub_82B2E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E368"))) PPC_WEAK_FUNC(sub_82B2E368);
PPC_FUNC_IMPL(__imp__sub_82B2E368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,14
	ctx.r11.s64 = 14;
	// addis r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 262144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-20984
	ctx.r9.s64 = ctx.r9.s64 + -20984;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// lhz r7,-32(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82B2E38C:
	// ld r11,-476(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -476);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82b2e3ac
	if (!cr6.eq) goto loc_82B2E3AC;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82b2e3d4
	goto loc_82B2E3D4;
loc_82B2E3AC:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82b2e3cc
	if (!cr6.eq) goto loc_82B2E3CC;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2e3d0
	if (cr6.eq) goto loc_82B2E3D0;
loc_82B2E3CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2E3D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B2E3D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e3e4
	if (!cr6.eq) goto loc_82B2E3E4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B2E3E4:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82b2e404
	if (!cr6.eq) goto loc_82B2E404;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82b2e42c
	goto loc_82B2E42C;
loc_82B2E404:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82b2e424
	if (!cr6.eq) goto loc_82B2E424;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2e428
	if (cr6.eq) goto loc_82B2E428;
loc_82B2E424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2E428:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B2E42C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e43c
	if (!cr6.eq) goto loc_82B2E43C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B2E43C:
	// ld r11,476(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 476);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82b2e45c
	if (!cr6.eq) goto loc_82B2E45C;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82b2e484
	goto loc_82B2E484;
loc_82B2E45C:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82b2e47c
	if (!cr6.eq) goto loc_82B2E47C;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2e480
	if (cr6.eq) goto loc_82B2E480;
loc_82B2E47C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2E480:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B2E484:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e494
	if (!cr6.eq) goto loc_82B2E494;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B2E494:
	// ld r11,952(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 952);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82b2e4b4
	if (!cr6.eq) goto loc_82B2E4B4;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82b2e4dc
	goto loc_82B2E4DC;
loc_82B2E4B4:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82b2e4d4
	if (!cr6.eq) goto loc_82B2E4D4;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2e4d8
	if (cr6.eq) goto loc_82B2E4D8;
loc_82B2E4D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2E4D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B2E4DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e4ec
	if (!cr6.eq) goto loc_82B2E4EC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B2E4EC:
	// ld r11,1428(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1428);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82b2e50c
	if (!cr6.eq) goto loc_82B2E50C;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82b2e534
	goto loc_82B2E534;
loc_82B2E50C:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82b2e52c
	if (!cr6.eq) goto loc_82B2E52C;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b2e530
	if (cr6.eq) goto loc_82B2E530;
loc_82B2E52C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B2E530:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B2E534:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b2e544
	if (!cr6.eq) goto loc_82B2E544;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B2E544:
	// addi r9,r9,2380
	ctx.r9.s64 = ctx.r9.s64 + 2380;
	// bdnz 0x82b2e38c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2E38C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E554"))) PPC_WEAK_FUNC(sub_82B2E554);
PPC_FUNC_IMPL(__imp__sub_82B2E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E558"))) PPC_WEAK_FUNC(sub_82B2E558);
PPC_FUNC_IMPL(__imp__sub_82B2E558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,12
	ctx.r9.s64 = 12;
	// addis r10,r3,214
	ctx.r10.s64 = ctx.r3.s64 + 14024704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,16764
	ctx.r10.s64 = ctx.r10.s64 + 16764;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,35112
	ctx.r9.u64 = ctx.r9.u64 | 35112;
loc_82B2E574:
	// lhz r8,-5852(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -5852);
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2e588
	if (cr6.eq) goto loc_82B2E588;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B2E588:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2e59c
	if (cr6.eq) goto loc_82B2E59C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B2E59C:
	// lhz r8,5852(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 5852);
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2e5b0
	if (cr6.eq) goto loc_82B2E5B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B2E5B0:
	// lhz r8,11704(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 11704);
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2e5c4
	if (cr6.eq) goto loc_82B2E5C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B2E5C4:
	// lhz r8,17556(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 17556);
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2e5d8
	if (cr6.eq) goto loc_82B2E5D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B2E5D8:
	// lhz r8,23408(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 23408);
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2e5ec
	if (cr6.eq) goto loc_82B2E5EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B2E5EC:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x82b2e574
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2E574;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E5FC"))) PPC_WEAK_FUNC(sub_82B2E5FC);
PPC_FUNC_IMPL(__imp__sub_82B2E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E600"))) PPC_WEAK_FUNC(sub_82B2E600);
PPC_FUNC_IMPL(__imp__sub_82B2E600) {
	PPC_FUNC_PROLOGUE();
	// li r3,84
	ctx.r3.s64 = 84;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B2E608"))) PPC_WEAK_FUNC(sub_82B2E608);
PPC_FUNC_IMPL(__imp__sub_82B2E608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B2E610;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B2E61C;
	sub_831156E8(ctx, base);
	// lbz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r10,-29776
	ctx.r5.s64 = ctx.r10.s64 + -29776;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82B2E648;
	sub_831178A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// bl 0x8311c148
	ctx.lr = 0x82B2E658;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ace470
	ctx.lr = 0x82B2E664;
	sub_82ACE470(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x82B2E668;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b2e674
	if (!cr6.eq) goto loc_82B2E674;
	// bl 0x839a1610
	ctx.lr = 0x82B2E674;
	sub_839A1610(ctx, base);
loc_82B2E674:
	// bl 0x8399f8b8
	ctx.lr = 0x82B2E678;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e6b4
	if (cr6.eq) goto loc_82B2E6B4;
	// bl 0x8399f8b8
	ctx.lr = 0x82B2E684;
	sub_8399F8B8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8399f8b8
	ctx.lr = 0x82B2E698;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x839a1aa8
	ctx.lr = 0x82B2E6A4;
	sub_839A1AA8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x839a3228
	ctx.lr = 0x82B2E6B0;
	sub_839A3228(ctx, base);
	// stw r3,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r3.u32);
loc_82B2E6B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2E6BC"))) PPC_WEAK_FUNC(sub_82B2E6BC);
PPC_FUNC_IMPL(__imp__sub_82B2E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E6C0"))) PPC_WEAK_FUNC(sub_82B2E6C0);
PPC_FUNC_IMPL(__imp__sub_82B2E6C0) {
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
	// cmpwi cr6,r4,99
	cr6.compare<int32_t>(ctx.r4.s32, 99, xer);
	// beq cr6,0x82b2e704
	if (cr6.eq) goto loc_82B2E704;
	// cmpwi cr6,r4,100
	cr6.compare<int32_t>(ctx.r4.s32, 100, xer);
	// beq cr6,0x82b2e6fc
	if (cr6.eq) goto loc_82B2E6FC;
	// cmpwi cr6,r4,101
	cr6.compare<int32_t>(ctx.r4.s32, 101, xer);
	// bne cr6,0x82b2e708
	if (!cr6.eq) goto loc_82B2E708;
	// li r31,189
	ctx.r31.s64 = 189;
	// b 0x82b2e708
	goto loc_82B2E708;
loc_82B2E6FC:
	// li r31,188
	ctx.r31.s64 = 188;
	// b 0x82b2e708
	goto loc_82B2E708;
loc_82B2E704:
	// li r31,187
	ctx.r31.s64 = 187;
loc_82B2E708:
	// bl 0x8308e078
	ctx.lr = 0x82B2E70C;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d444b0
	ctx.lr = 0x82B2E71C;
	sub_82D444B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2e730
	if (cr6.eq) goto loc_82B2E730;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82B2E730;
	sub_83103100(ctx, base);
loc_82B2E730:
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

__attribute__((alias("__imp__sub_82B2E748"))) PPC_WEAK_FUNC(sub_82B2E748);
PPC_FUNC_IMPL(__imp__sub_82B2E748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x831156e8
	ctx.lr = 0x82B2E764;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r31,205
	ctx.r11.s64 = ctx.r31.s64 + 13434880;
	// addic. r11,r11,-18420
	xer.ca = ctx.r11.u32 > 18419;
	ctx.r11.s64 = ctx.r11.s64 + -18420;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82b2e77c
	if (!cr0.eq) goto loc_82B2E77C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b2e880
	goto loc_82B2E880;
loc_82B2E77C:
	// addis r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 262144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r8,-21460
	ctx.r8.s64 = ctx.r8.s64 + -21460;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82B2E794:
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b2e7a4
	if (!cr6.lt) goto loc_82B2E7A4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B2E7A4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e7d0
	if (cr6.eq) goto loc_82B2E7D0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82b2e7e4
	if (cr6.eq) goto loc_82B2E7E4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82b2e7e4
	if (cr6.eq) goto loc_82B2E7E4;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82b2e7e4
	if (cr6.eq) goto loc_82B2E7E4;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82B2E7D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,476
	ctx.r9.s64 = ctx.r9.s64 + 476;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// blt cr6,0x82b2e794
	if (cr6.lt) goto loc_82B2E794;
	// b 0x82b2e7e8
	goto loc_82B2E7E8;
loc_82B2E7E4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82B2E7E8:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e814
	if (cr6.eq) goto loc_82B2E814;
	// lis r4,278
	ctx.r4.s64 = 18219008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,673
	ctx.r4.u64 = ctx.r4.u64 | 673;
	// bl 0x82c133d0
	ctx.lr = 0x82B2E804;
	sub_82C133D0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// b 0x82b2e880
	goto loc_82B2E880;
loc_82B2E814:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e840
	if (cr6.eq) goto loc_82B2E840;
	// lis r4,273
	ctx.r4.s64 = 17891328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,290
	ctx.r4.u64 = ctx.r4.u64 | 290;
	// bl 0x82c133d0
	ctx.lr = 0x82B2E830;
	sub_82C133D0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// b 0x82b2e880
	goto loc_82B2E880;
loc_82B2E840:
	// bl 0x830ff290
	ctx.lr = 0x82B2E844;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B2E848;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82b2e87c
	if (!cr6.eq) goto loc_82B2E87C;
	// addis r10,r31,222
	ctx.r10.s64 = ctx.r31.s64 + 14548992;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// ori r9,r11,52996
	ctx.r9.u64 = ctx.r11.u64 | 52996;
	// addis r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 458752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r8,1924
	ctx.r8.s64 = ctx.r8.s64 + 1924;
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r5,r6,0,26,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
loc_82B2E87C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B2E880:
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

__attribute__((alias("__imp__sub_82B2E898"))) PPC_WEAK_FUNC(sub_82B2E898);
PPC_FUNC_IMPL(__imp__sub_82B2E898) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e918
	if (cr6.eq) goto loc_82B2E918;
	// bl 0x831156e8
	ctx.lr = 0x82B2E8BC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// addis r9,r11,205
	ctx.r9.s64 = ctx.r11.s64 + 13434880;
	// addi r9,r9,-18420
	ctx.r9.s64 = ctx.r9.s64 + -18420;
	// addis r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 262144;
	// addi r8,r8,13260
	ctx.r8.s64 = ctx.r8.s64 + 13260;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82B2E8D8:
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b2e8e8
	if (!cr6.lt) goto loc_82B2E8E8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B2E8E8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e8fc
	if (cr6.eq) goto loc_82B2E8FC;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// beq cr6,0x82b2e910
	if (cr6.eq) goto loc_82B2E910;
loc_82B2E8FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// blt cr6,0x82b2e8d8
	if (cr6.lt) goto loc_82B2E8D8;
	// b 0x82b2e96c
	goto loc_82B2E96C;
loc_82B2E910:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b2e974
	goto loc_82B2E974;
loc_82B2E918:
	// bl 0x831156e8
	ctx.lr = 0x82B2E91C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// addis r9,r11,205
	ctx.r9.s64 = ctx.r11.s64 + 13434880;
	// addi r9,r9,-18420
	ctx.r9.s64 = ctx.r9.s64 + -18420;
	// addis r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 262144;
	// addi r8,r8,11860
	ctx.r8.s64 = ctx.r8.s64 + 11860;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82B2E938:
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b2e948
	if (!cr6.lt) goto loc_82B2E948;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B2E948:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b2e95c
	if (cr6.eq) goto loc_82B2E95C;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// beq cr6,0x82b2e910
	if (cr6.eq) goto loc_82B2E910;
loc_82B2E95C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// blt cr6,0x82b2e938
	if (cr6.lt) goto loc_82B2E938;
loc_82B2E96C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82B2E974:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B2E990"))) PPC_WEAK_FUNC(sub_82B2E990);
PPC_FUNC_IMPL(__imp__sub_82B2E990) {
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
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lbz r11,1462(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1462);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c16828
	ctx.lr = 0x82B2E9B8;
	sub_82C16828(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B2E9C4;
	sub_82D17DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82B2E9D8"))) PPC_WEAK_FUNC(sub_82B2E9D8);
PPC_FUNC_IMPL(__imp__sub_82B2E9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c1b490
	sub_82C1B490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B2E9E4"))) PPC_WEAK_FUNC(sub_82B2E9E4);
PPC_FUNC_IMPL(__imp__sub_82B2E9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2E9E8"))) PPC_WEAK_FUNC(sub_82B2E9E8);
PPC_FUNC_IMPL(__imp__sub_82B2E9E8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c14930
	ctx.lr = 0x82B2EA08;
	sub_82C14930(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lbz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r5,1532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// addi r9,r11,-28360
	ctx.r9.s64 = ctx.r11.s64 + -28360;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,-29452
	ctx.r3.s64 = ctx.r7.s64 + -29452;
	// bl 0x82c1ca80
	ctx.lr = 0x82B2EA38;
	sub_82C1CA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2e608
	ctx.lr = 0x82B2EA44;
	sub_82B2E608(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x82ace470
	ctx.lr = 0x82B2EA50;
	sub_82ACE470(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d23788
	ctx.lr = 0x82B2EA60;
	sub_82D23788(ctx, base);
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

__attribute__((alias("__imp__sub_82B2EA7C"))) PPC_WEAK_FUNC(sub_82B2EA7C);
PPC_FUNC_IMPL(__imp__sub_82B2EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2EA80"))) PPC_WEAK_FUNC(sub_82B2EA80);
PPC_FUNC_IMPL(__imp__sub_82B2EA80) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28360
	ctx.r9.s64 = ctx.r11.s64 + -28360;
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
	// bl 0x82c146f0
	ctx.lr = 0x82B2EAB8;
	sub_82C146F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b2ead0
	if (cr6.eq) goto loc_82B2EAD0;
	// bl 0x82416268
	ctx.lr = 0x82B2EACC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B2EAD0:
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

__attribute__((alias("__imp__sub_82B2EAE8"))) PPC_WEAK_FUNC(sub_82B2EAE8);
PPC_FUNC_IMPL(__imp__sub_82B2EAE8) {
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
	// blt cr6,0x82b2eb10
	if (cr6.lt) goto loc_82B2EB10;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b2eb14
	goto loc_82B2EB14;
loc_82B2EB10:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B2EB14:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,5344
	ctx.r4.s64 = 5344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B2EB30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b2eb48
	if (cr6.eq) goto loc_82B2EB48;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b2e9e8
	ctx.lr = 0x82B2EB44;
	sub_82B2E9E8(ctx, base);
	// b 0x82b2eb4c
	goto loc_82B2EB4C;
loc_82B2EB48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B2EB4C:
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

__attribute__((alias("__imp__sub_82B2EB64"))) PPC_WEAK_FUNC(sub_82B2EB64);
PPC_FUNC_IMPL(__imp__sub_82B2EB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B2EB68"))) PPC_WEAK_FUNC(sub_82B2EB68);
PPC_FUNC_IMPL(__imp__sub_82B2EB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B2EB70;
	__savegprlr_14(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// addi r29,r11,-29309
	ctx.r29.s64 = ctx.r11.s64 + -29309;
	// ori r25,r9,13
	ctx.r25.u64 = ctx.r9.u64 | 13;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r24,r10,37
	ctx.r24.u64 = ctx.r10.u64 | 37;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// ori r27,r8,410
	ctx.r27.u64 = ctx.r8.u64 | 410;
	// ori r9,r7,546
	ctx.r9.u64 = ctx.r7.u64 | 546;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// li r6,58
	ctx.r6.s64 = 58;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r5,r29,-127
	ctx.r5.s64 = ctx.r29.s64 + -127;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r4,r29,-107
	ctx.r4.s64 = ctx.r29.s64 + -107;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r3,r29,-91
	ctx.r3.s64 = ctx.r29.s64 + -91;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// addi r11,r29,-75
	ctx.r11.s64 = ctx.r29.s64 + -75;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r7,61
	ctx.r7.s64 = 61;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// addi r17,r26,1536
	ctx.r17.s64 = ctx.r26.s64 + 1536;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2EC6C;
	sub_831CE980(ctx, base);
	// lis r6,29
	ctx.r6.s64 = 1900544;
	// lis r5,930
	ctx.r5.s64 = 60948480;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r29,-55
	ctx.r3.s64 = ctx.r29.s64 + -55;
	// addi r11,r29,-39
	ctx.r11.s64 = ctx.r29.s64 + -39;
	// addi r10,r29,-27
	ctx.r10.s64 = ctx.r29.s64 + -27;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r9,r29,-15
	ctx.r9.s64 = ctx.r29.s64 + -15;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// li r16,5
	ctx.r16.s64 = 5;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// ori r19,r6,33
	ctx.r19.u64 = ctx.r6.u64 | 33;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// ori r20,r5,9
	ctx.r20.u64 = ctx.r5.u64 | 9;
	// ori r22,r4,327
	ctx.r22.u64 = ctx.r4.u64 | 327;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r6,17
	ctx.r6.s64 = 17;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// addi r15,r26,1664
	ctx.r15.s64 = ctx.r26.s64 + 1664;
	// stw r16,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r16.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2ED74;
	sub_831CE980(ctx, base);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// lis r8,509
	ctx.r8.s64 = 33357824;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r23,r9,307
	ctx.r23.u64 = ctx.r9.u64 | 307;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// ori r28,r8,152
	ctx.r28.u64 = ctx.r8.u64 | 152;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r7,r29,9
	ctx.r7.s64 = ctx.r29.s64 + 9;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// addi r6,r29,21
	ctx.r6.s64 = ctx.r29.s64 + 21;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r5,63
	ctx.r5.s64 = 63;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// addi r3,r26,1824
	ctx.r3.s64 = ctx.r26.s64 + 1824;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2EDEC;
	sub_831CE980(ctx, base);
	// li r10,67
	ctx.r10.s64 = 67;
	// addi r9,r29,33
	ctx.r9.s64 = ctx.r29.s64 + 33;
	// lis r8,641
	ctx.r8.s64 = 42008576;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r7,25
	ctx.r7.s64 = 1638400;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// lis r5,930
	ctx.r5.s64 = 60948480;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r7,r7,622
	ctx.r7.u64 = ctx.r7.u64 | 622;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// ori r8,r8,88
	ctx.r8.u64 = ctx.r8.u64 | 88;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// ori r7,r5,96
	ctx.r7.u64 = ctx.r5.u64 | 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r11,r29,53
	ctx.r11.s64 = ctx.r29.s64 + 53;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r9,r29,85
	ctx.r9.s64 = ctx.r29.s64 + 85;
	// lis r6,930
	ctx.r6.s64 = 60948480;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r10,r29,69
	ctx.r10.s64 = ctx.r29.s64 + 69;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// ori r6,r6,48
	ctx.r6.u64 = ctx.r6.u64 | 48;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// li r8,69
	ctx.r8.s64 = 69;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// ori r8,r4,97
	ctx.r8.u64 = ctx.r4.u64 | 97;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// ori r10,r3,564
	ctx.r10.u64 = ctx.r3.u64 | 564;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r11,70
	ctx.r11.s64 = 70;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r6,r29,117
	ctx.r6.s64 = ctx.r29.s64 + 117;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r21,r29,101
	ctx.r21.s64 = ctx.r29.s64 + 101;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// li r18,71
	ctx.r18.s64 = 71;
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// addi r14,r26,1888
	ctx.r14.s64 = ctx.r26.s64 + 1888;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r18,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r18.u32);
	// stw r8,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r21,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r21.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// stw r10,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2EF40;
	sub_831CE980(ctx, base);
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// lis r7,25
	ctx.r7.s64 = 1638400;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r6,641
	ctx.r6.s64 = 42008576;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// ori r10,r8,552
	ctx.r10.u64 = ctx.r8.u64 | 552;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// ori r8,r7,133
	ctx.r8.u64 = ctx.r7.u64 | 133;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r5,r29,137
	ctx.r5.s64 = ctx.r29.s64 + 137;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r4,r29,153
	ctx.r4.s64 = ctx.r29.s64 + 153;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// addi r3,r29,165
	ctx.r3.s64 = ctx.r29.s64 + 165;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// li r11,74
	ctx.r11.s64 = 74;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// li r9,76
	ctx.r9.s64 = 76;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// li r7,77
	ctx.r7.s64 = 77;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// ori r6,r6,157
	ctx.r6.u64 = ctx.r6.u64 | 157;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// addi r21,r26,2080
	ctx.r21.s64 = ctx.r26.s64 + 2080;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2EFF0;
	sub_831CE980(ctx, base);
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// addi r4,r29,181
	ctx.r4.s64 = ctx.r29.s64 + 181;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r18,r5,556
	ctx.r18.u64 = ctx.r5.u64 | 556;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r3,62
	ctx.r3.s64 = 62;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// addi r10,r29,197
	ctx.r10.s64 = ctx.r29.s64 + 197;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r9,r29,209
	ctx.r9.s64 = ctx.r29.s64 + 209;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r8,r29,221
	ctx.r8.s64 = ctx.r29.s64 + 221;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// lis r6,26
	ctx.r6.s64 = 1703936;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// ori r3,r6,562
	ctx.r3.u64 = ctx.r6.u64 | 562;
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// ori r9,r5,563
	ctx.r9.u64 = ctx.r5.u64 | 563;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r4,65
	ctx.r4.s64 = 65;
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// addi r11,r29,245
	ctx.r11.s64 = ctx.r29.s64 + 245;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r4,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// addi r3,r26,2176
	ctx.r3.s64 = ctx.r26.s64 + 2176;
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2F0F4;
	sub_831CE980(ctx, base);
	// addi r8,r29,269
	ctx.r8.s64 = ctx.r29.s64 + 269;
	// addi r7,r29,285
	ctx.r7.s64 = ctx.r29.s64 + 285;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// addi r6,r29,297
	ctx.r6.s64 = ctx.r29.s64 + 297;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// li r5,62
	ctx.r5.s64 = 62;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r26,2336
	ctx.r3.s64 = ctx.r26.s64 + 2336;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2F188;
	sub_831CE980(ctx, base);
	// lis r9,108
	ctx.r9.s64 = 7077888;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r28,r9,140
	ctx.r28.u64 = ctx.r9.u64 | 140;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r11,r26,2432
	ctx.r11.s64 = ctx.r26.s64 + 2432;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r8,r29,309
	ctx.r8.s64 = ctx.r29.s64 + 309;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r23,10
	ctx.r23.s64 = 10;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
loc_82B2F1D8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b2f1d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2F1D8;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// ori r5,r11,115
	ctx.r5.u64 = ctx.r11.u64 | 115;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// ori r11,r10,521
	ctx.r11.u64 = ctx.r10.u64 | 521;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r8,r29,321
	ctx.r8.s64 = ctx.r29.s64 + 321;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r7,r29,329
	ctx.r7.s64 = ctx.r29.s64 + 329;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// addi r6,r29,337
	ctx.r6.s64 = ctx.r29.s64 + 337;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// ori r9,r9,252
	ctx.r9.u64 = ctx.r9.u64 | 252;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// addi r3,r26,2464
	ctx.r3.s64 = ctx.r26.s64 + 2464;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2F294;
	sub_831CE980(ctx, base);
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// addi r7,r29,349
	ctx.r7.s64 = ctx.r29.s64 + 349;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// addi r6,r29,361
	ctx.r6.s64 = ctx.r29.s64 + 361;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// ori r10,r8,651
	ctx.r10.u64 = ctx.r8.u64 | 651;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r26,2560
	ctx.r3.s64 = ctx.r26.s64 + 2560;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2F304;
	sub_831CE980(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r26,2624
	ctx.r11.s64 = ctx.r26.s64 + 2624;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r29,373
	ctx.r7.s64 = ctx.r29.s64 + 373;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// ori r5,r8,41
	ctx.r5.u64 = ctx.r8.u64 | 41;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
loc_82B2F354:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b2f354
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B2F354;
	// addi r10,r29,385
	ctx.r10.s64 = ctx.r29.s64 + 385;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// addi r9,r29,397
	ctx.r9.s64 = ctx.r29.s64 + 397;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r8,r29,409
	ctx.r8.s64 = ctx.r29.s64 + 409;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r7,r29,421
	ctx.r7.s64 = ctx.r29.s64 + 421;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// stw r7,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r8,r29,437
	ctx.r8.s64 = ctx.r29.s64 + 437;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r7,19
	ctx.r7.s64 = 19;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r6,r29,-464
	ctx.r6.s64 = ctx.r29.s64 + -464;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// ori r11,r11,168
	ctx.r11.u64 = ctx.r11.u64 | 168;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r16,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r16.u32);
	// li r18,4
	ctx.r18.s64 = 4;
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// li r23,21
	ctx.r23.s64 = 21;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r26,2656
	ctx.r3.s64 = ctx.r26.s64 + 2656;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r23,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r17,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r17.u32);
	// stw r18,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r18.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2F488;
	sub_831CE980(ctx, base);
	// addi r10,r29,445
	ctx.r10.s64 = ctx.r29.s64 + 445;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lis r8,641
	ctx.r8.s64 = 42008576;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r7,59
	ctx.r7.s64 = 59;
	// ori r9,r8,27
	ctx.r9.u64 = ctx.r8.u64 | 27;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r6,r29,457
	ctx.r6.s64 = ctx.r29.s64 + 457;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r11,r29,-433
	ctx.r11.s64 = ctx.r29.s64 + -433;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r8,r29,473
	ctx.r8.s64 = ctx.r29.s64 + 473;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r24,61
	ctx.r24.s64 = 61;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// addi r3,r26,2848
	ctx.r3.s64 = ctx.r26.s64 + 2848;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r16,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r16.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2F554;
	sub_831CE980(ctx, base);
	// lis r7,75
	ctx.r7.s64 = 4915200;
	// lis r6,29
	ctx.r6.s64 = 1900544;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r24,r7,75
	ctx.r24.u64 = ctx.r7.u64 | 75;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// ori r25,r6,627
	ctx.r25.u64 = ctx.r6.u64 | 627;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r5,r29,493
	ctx.r5.s64 = ctx.r29.s64 + 493;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r11,r29,501
	ctx.r11.s64 = ctx.r29.s64 + 501;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// li r22,41
	ctx.r22.s64 = 41;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// li r23,42
	ctx.r23.s64 = 42;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// addi r3,r26,3296
	ctx.r3.s64 = ctx.r26.s64 + 3296;
	// stb r31,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r31.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2F5D0;
	sub_831CE980(ctx, base);
	// lis r10,75
	ctx.r10.s64 = 4915200;
	// addi r9,r29,513
	ctx.r9.s64 = ctx.r29.s64 + 513;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// addi r8,r29,521
	ctx.r8.s64 = ctx.r29.s64 + 521;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// ori r7,r10,77
	ctx.r7.u64 = ctx.r10.u64 | 77;
	// addi r6,r29,533
	ctx.r6.s64 = ctx.r29.s64 + 533;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r26,3360
	ctx.r3.s64 = ctx.r26.s64 + 3360;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r31,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r31.u8);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2F668;
	sub_831CE980(ctx, base);
	// addi r7,r29,557
	ctx.r7.s64 = ctx.r29.s64 + 557;
	// lis r10,60
	ctx.r10.s64 = 3932160;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// addi r8,r29,545
	ctx.r8.s64 = ctx.r29.s64 + 545;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// lis r6,26
	ctx.r6.s64 = 1703936;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r11,r29,569
	ctx.r11.s64 = ctx.r29.s64 + 569;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// ori r23,r10,74
	ctx.r23.u64 = ctx.r10.u64 | 74;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// ori r3,r9,560
	ctx.r3.u64 = ctx.r9.u64 | 560;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// li r17,35
	ctx.r17.s64 = 35;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r19,34
	ctx.r19.s64 = 34;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// lis r7,25
	ctx.r7.s64 = 1638400;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// ori r24,r6,647
	ctx.r24.u64 = ctx.r6.u64 | 647;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r10,r29,581
	ctx.r10.s64 = ctx.r29.s64 + 581;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r9,r29,597
	ctx.r9.s64 = ctx.r29.s64 + 597;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r8,r29,609
	ctx.r8.s64 = ctx.r29.s64 + 609;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r20,38
	ctx.r20.s64 = 38;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// li r22,36
	ctx.r22.s64 = 36;
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// ori r25,r5,636
	ctx.r25.u64 = ctx.r5.u64 | 636;
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// ori r11,r7,650
	ctx.r11.u64 = ctx.r7.u64 | 650;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// addi r15,r26,2976
	ctx.r15.s64 = ctx.r26.s64 + 2976;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// li r5,192
	ctx.r5.s64 = 192;
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r20,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r20.u32);
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r22,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r22.u32);
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r6,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2F7AC;
	sub_831CE980(ctx, base);
	// addi r10,r29,617
	ctx.r10.s64 = ctx.r29.s64 + 617;
	// addi r9,r29,629
	ctx.r9.s64 = ctx.r29.s64 + 629;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// addi r8,r29,641
	ctx.r8.s64 = ctx.r29.s64 + 641;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r7,r29,657
	ctx.r7.s64 = ctx.r29.s64 + 657;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// addi r3,r26,3168
	ctx.r3.s64 = ctx.r26.s64 + 3168;
	// stw r7,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r22,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2F860;
	sub_831CE980(ctx, base);
	// lis r6,75
	ctx.r6.s64 = 4915200;
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// stw r14,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r14.u32);
	// lis r4,600
	ctx.r4.s64 = 39321600;
	// addi r11,r29,669
	ctx.r11.s64 = ctx.r29.s64 + 669;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r10,r29,681
	ctx.r10.s64 = ctx.r29.s64 + 681;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// ori r6,r6,21
	ctx.r6.u64 = ctx.r6.u64 | 21;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// ori r10,r5,18
	ctx.r10.u64 = ctx.r5.u64 | 18;
	// addi r9,r29,693
	ctx.r9.s64 = ctx.r29.s64 + 693;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// addi r8,r29,-432
	ctx.r8.s64 = ctx.r29.s64 + -432;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r7,49
	ctx.r7.s64 = 49;
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// ori r6,r4,2
	ctx.r6.u64 = ctx.r4.u64 | 2;
	// ori r25,r3,70
	ctx.r25.u64 = ctx.r3.u64 | 70;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r7,78
	ctx.r7.s64 = 78;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// addi r11,r29,-402
	ctx.r11.s64 = ctx.r29.s64 + -402;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r10,120
	ctx.r10.s64 = 120;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r27,6
	ctx.r27.s64 = 6;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r19,3
	ctx.r19.s64 = 3;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// addi r17,r26,3456
	ctx.r17.s64 = ctx.r26.s64 + 3456;
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r19,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r19.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2F97C;
	sub_831CE980(ctx, base);
	// lis r9,109
	ctx.r9.s64 = 7143424;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// lis r6,504
	ctx.r6.s64 = 33030144;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// addi r3,r29,701
	ctx.r3.s64 = ctx.r29.s64 + 701;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r11,r29,709
	ctx.r11.s64 = ctx.r29.s64 + 709;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r10,r29,721
	ctx.r10.s64 = ctx.r29.s64 + 721;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// ori r11,r9,5
	ctx.r11.u64 = ctx.r9.u64 | 5;
	// ori r9,r8,2
	ctx.r9.u64 = ctx.r8.u64 | 2;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// ori r7,r7,403
	ctx.r7.u64 = ctx.r7.u64 | 403;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r3,53
	ctx.r3.s64 = 53;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// li r10,54
	ctx.r10.s64 = 54;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// li r8,55
	ctx.r8.s64 = 55;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// ori r7,r5,141
	ctx.r7.u64 = ctx.r5.u64 | 141;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// ori r24,r4,611
	ctx.r24.u64 = ctx.r4.u64 | 611;
	// addi r3,r29,733
	ctx.r3.s64 = ctx.r29.s64 + 733;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r11,r29,741
	ctx.r11.s64 = ctx.r29.s64 + 741;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r10,r29,753
	ctx.r10.s64 = ctx.r29.s64 + 753;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// ori r6,r6,229
	ctx.r6.u64 = ctx.r6.u64 | 229;
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// li r8,56
	ctx.r8.s64 = 56;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// li r25,57
	ctx.r25.s64 = 57;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r14,r26,3616
	ctx.r14.s64 = ctx.r26.s64 + 3616;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// li r5,192
	ctx.r5.s64 = 192;
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// stw r24,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r24.u32);
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// stw r10,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B2FAC8;
	sub_831CE980(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,29
	ctx.r10.s64 = 1900544;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r8,75
	ctx.r8.s64 = 4915200;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// lis r6,26
	ctx.r6.s64 = 1703936;
	// addi r25,r29,-400
	ctx.r25.s64 = ctx.r29.s64 + -400;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r24,r29,-382
	ctx.r24.s64 = ctx.r29.s64 + -382;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// addi r25,r29,-380
	ctx.r25.s64 = ctx.r29.s64 + -380;
	// addi r23,r29,-310
	ctx.r23.s64 = ctx.r29.s64 + -310;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// ori r20,r4,582
	ctx.r20.u64 = ctx.r4.u64 | 582;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// ori r22,r9,555
	ctx.r22.u64 = ctx.r9.u64 | 555;
	// ori r23,r8,76
	ctx.r23.u64 = ctx.r8.u64 | 76;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// ori r24,r7,557
	ctx.r24.u64 = ctx.r7.u64 | 557;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r4,r29,-401
	ctx.r4.s64 = ctx.r29.s64 + -401;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// ori r21,r10,623
	ctx.r21.u64 = ctx.r10.u64 | 623;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r29,-381
	ctx.r4.s64 = ctx.r29.s64 + -381;
	// ori r25,r6,520
	ctx.r25.u64 = ctx.r6.u64 | 520;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// addi r3,r26,3808
	ctx.r3.s64 = ctx.r26.s64 + 3808;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2FC24;
	sub_831CE980(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r29,-309
	ctx.r10.s64 = ctx.r29.s64 + -309;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r29,-308
	ctx.r8.s64 = ctx.r29.s64 + -308;
	// addi r7,r29,-298
	ctx.r7.s64 = ctx.r29.s64 + -298;
	// addi r5,r29,-296
	ctx.r5.s64 = ctx.r29.s64 + -296;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r10,r29,-297
	ctx.r10.s64 = ctx.r29.s64 + -297;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r3,r26,4000
	ctx.r3.s64 = ctx.r26.s64 + 4000;
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// addi r6,r29,-278
	ctx.r6.s64 = ctx.r29.s64 + -278;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2FD48;
	sub_831CE980(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r29,-277
	ctx.r8.s64 = ctx.r29.s64 + -277;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r29,-276
	ctx.r7.s64 = ctx.r29.s64 + -276;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r11,r29,-266
	ctx.r11.s64 = ctx.r29.s64 + -266;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// addi r8,r29,-264
	ctx.r8.s64 = ctx.r29.s64 + -264;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// addi r9,r29,-265
	ctx.r9.s64 = ctx.r29.s64 + -265;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r7,r29,-260
	ctx.r7.s64 = ctx.r29.s64 + -260;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r3,r26,4192
	ctx.r3.s64 = ctx.r26.s64 + 4192;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r6,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2FE64;
	sub_831CE980(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r29,-256
	ctx.r4.s64 = ctx.r29.s64 + -256;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r29,-252
	ctx.r3.s64 = ctx.r29.s64 + -252;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r11,r29,-248
	ctx.r11.s64 = ctx.r29.s64 + -248;
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// addi r10,r29,-206
	ctx.r10.s64 = ctx.r29.s64 + -206;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r8,r29,-205
	ctx.r8.s64 = ctx.r29.s64 + -205;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r29,-204
	ctx.r6.s64 = ctx.r29.s64 + -204;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// addi r3,r26,4384
	ctx.r3.s64 = ctx.r26.s64 + 4384;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// stw r18,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r18.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B2FF8C;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r29,-185
	ctx.r7.s64 = ctx.r29.s64 + -185;
	// addi r6,r29,-184
	ctx.r6.s64 = ctx.r29.s64 + -184;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r29,-130
	ctx.r5.s64 = ctx.r29.s64 + -130;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r11,r29,-129
	ctx.r11.s64 = ctx.r29.s64 + -129;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// addi r9,r29,-128
	ctx.r9.s64 = ctx.r29.s64 + -128;
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// addi r8,r29,-110
	ctx.r8.s64 = ctx.r29.s64 + -110;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// addi r3,r26,4576
	ctx.r3.s64 = ctx.r26.s64 + 4576;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r19,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r19.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r7,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r7.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B300A0;
	sub_831CE980(ctx, base);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r29,-109
	ctx.r4.s64 = ctx.r29.s64 + -109;
	// addi r3,r29,-108
	ctx.r3.s64 = ctx.r29.s64 + -108;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r29,-77
	ctx.r11.s64 = ctx.r29.s64 + -77;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// addi r10,r29,-76
	ctx.r10.s64 = ctx.r29.s64 + -76;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// addi r9,r29,-58
	ctx.r9.s64 = ctx.r29.s64 + -58;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r8,r29,-57
	ctx.r8.s64 = ctx.r29.s64 + -57;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// addi r3,r26,4768
	ctx.r3.s64 = ctx.r26.s64 + 4768;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// stw r19,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r19.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r6,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B301B4;
	sub_831CE980(ctx, base);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,-56
	ctx.r3.s64 = ctx.r29.s64 + -56;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r29,-42
	ctx.r10.s64 = ctx.r29.s64 + -42;
	// addi r9,r29,-41
	ctx.r9.s64 = ctx.r29.s64 + -41;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r8,r29,-40
	ctx.r8.s64 = ctx.r29.s64 + -40;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r7,r29,-30
	ctx.r7.s64 = ctx.r29.s64 + -30;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r4,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r4.u32);
	// addi r6,r29,-29
	ctx.r6.s64 = ctx.r29.s64 + -29;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// addi r3,r26,4960
	ctx.r3.s64 = ctx.r26.s64 + 4960;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82B302C8;
	sub_831CE980(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r29,-17
	ctx.r5.s64 = ctx.r29.s64 + -17;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r29,-1
	ctx.r3.s64 = ctx.r29.s64 + -1;
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// addi r8,r29,-28
	ctx.r8.s64 = ctx.r29.s64 + -28;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// addi r6,r29,-18
	ctx.r6.s64 = ctx.r29.s64 + -18;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// addi r29,r26,5152
	ctx.r29.s64 = ctx.r26.s64 + 5152;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r14,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r14.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82B303D8;
	sub_831CE980(ctx, base);
	// lwz r11,1532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1532);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82b30468
	if (cr6.eq) goto loc_82B30468;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82b3045c
	if (cr6.eq) goto loc_82B3045C;
	// lbz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30400
	if (cr6.eq) goto loc_82B30400;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82b304ac
	goto loc_82B304AC;
loc_82B30400:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82B30410;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8319df40
	ctx.lr = 0x82B3041C;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30430
	if (cr6.eq) goto loc_82B30430;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82b304ac
	goto loc_82B304AC;
loc_82B30430:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319dc20
	ctx.lr = 0x82B30438;
	sub_8319DC20(ctx, base);
	// bl 0x8317c510
	ctx.lr = 0x82B3043C;
	sub_8317C510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r27,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30454
	if (cr6.eq) goto loc_82B30454;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82b304b0
	goto loc_82B304B0;
loc_82B30454:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82b304b0
	goto loc_82B304B0;
loc_82B3045C:
	// stw r29,160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 160, ctx.r29.u32);
	// stw r27,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r27.u32);
	// b 0x82b304b4
	goto loc_82B304B4;
loc_82B30468:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82B30478;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8319df40
	ctx.lr = 0x82B30484;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30498
	if (cr6.eq) goto loc_82B30498;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82b304ac
	goto loc_82B304AC;
loc_82B30498:
	// lbz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne cr6,0x82b304ac
	if (!cr6.eq) goto loc_82B304AC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82B304AC:
	// stw r27,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r27.u32);
loc_82B304B0:
	// stw r11,160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 160, ctx.r11.u32);
loc_82B304B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,140
	ctx.r3.s64 = ctx.r26.s64 + 140;
	// bl 0x82c12de8
	ctx.lr = 0x82B304C0;
	sub_82C12DE8(ctx, base);
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82b30564
	if (!cr6.gt) goto loc_82B30564;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82B304E4:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82b3054c
	if (!cr6.gt) goto loc_82B3054C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82B30500:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82b30530
	if (!cr6.gt) goto loc_82B30530;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83546fd8
	ctx.lr = 0x82B30530;
	sub_83546FD8(ctx, base);
loc_82B30530:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b30500
	if (cr6.lt) goto loc_82B30500;
loc_82B3054C:
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b304e4
	if (cr6.lt) goto loc_82B304E4;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82B30564:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r8,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b305a0
	if (cr0.eq) goto loc_82B305A0;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r26,96
	ctx.r10.s64 = ctx.r26.s64 + 96;
loc_82B3057C:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bge cr6,0x82b305a0
	if (!cr6.lt) goto loc_82B305A0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82b3057c
	if (cr6.lt) goto loc_82B3057C;
loc_82B305A0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b305b4
	if (cr6.eq) goto loc_82B305B4;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x82B305B4;
	sub_825952B8(ctx, base);
loc_82B305B4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B305BC"))) PPC_WEAK_FUNC(sub_82B305BC);
PPC_FUNC_IMPL(__imp__sub_82B305BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B305C0"))) PPC_WEAK_FUNC(sub_82B305C0);
PPC_FUNC_IMPL(__imp__sub_82B305C0) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82B305DC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -76);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B305F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b30648
	if (cr6.eq) goto loc_82B30648;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29289
	ctx.r4.s64 = ctx.r11.s64 + -29289;
	// bl 0x837b0c10
	ctx.lr = 0x82B30614;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d334b0
	ctx.lr = 0x82B30628;
	sub_82D334B0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b30648
	if (cr6.lt) goto loc_82B30648;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B30648;
	sub_825952B8(ctx, base);
loc_82B30648:
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

__attribute__((alias("__imp__sub_82B30660"))) PPC_WEAK_FUNC(sub_82B30660);
PPC_FUNC_IMPL(__imp__sub_82B30660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B30668;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B30674;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2e558
	ctx.lr = 0x82B30680;
	sub_82B2E558(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bne cr6,0x82b306b4
	if (!cr6.eq) goto loc_82B306B4;
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d042a8
	ctx.lr = 0x82B306B0;
	sub_82D042A8(ctx, base);
	// b 0x82b307f8
	goto loc_82B307F8;
loc_82B306B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,-28460
	ctx.r29.s64 = ctx.r11.s64 + -28460;
	// addi r4,r29,-818
	ctx.r4.s64 = ctx.r29.s64 + -818;
	// bl 0x837b0c10
	ctx.lr = 0x82B306C8;
	sub_837B0C10(ctx, base);
	// addis r8,r31,214
	ctx.r8.s64 = ctx.r31.s64 + 14024704;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r8,10896
	ctx.r8.s64 = ctx.r8.s64 + 10896;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82B306D8:
	// cmplwi cr6,r10,72
	cr6.compare<uint32_t>(ctx.r10.u32, 72, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b306e8
	if (!cr6.lt) goto loc_82B306E8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B306E8:
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// rlwinm r6,r7,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b3070c
	if (!cr6.eq) goto loc_82B3070C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,5852
	ctx.r9.s64 = ctx.r9.s64 + 5852;
	// cmplwi cr6,r10,72
	cr6.compare<uint32_t>(ctx.r10.u32, 72, xer);
	// blt cr6,0x82b306d8
	if (cr6.lt) goto loc_82B306D8;
	// b 0x82b30744
	goto loc_82B30744;
loc_82B3070C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82B30718;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B30720:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b30720
	if (!cr6.eq) goto loc_82B30720;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82B30744;
	sub_825A1EB8(ctx, base);
loc_82B30744:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b30758
	if (!cr6.lt) goto loc_82B30758;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82B30758:
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,163
	ctx.r4.u64 = ctx.r4.u64 | 163;
	// bl 0x82d042a8
	ctx.lr = 0x82B30768;
	sub_82D042A8(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d042a8
	ctx.lr = 0x82B30784;
	sub_82D042A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B30794;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B307A8;
	sub_825A1DA8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b307c4
	if (cr6.lt) goto loc_82B307C4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B307C4;
	sub_825952B8(ctx, base);
loc_82B307C4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82b307ec
	if (cr6.lt) goto loc_82B307EC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B307EC;
	sub_825952B8(ctx, base);
loc_82B307EC:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
loc_82B307F8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3080c
	if (!cr6.lt) goto loc_82B3080C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B3080C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c15058
	ctx.lr = 0x82B30814;
	sub_82C15058(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,1508(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1508, ctx.r11.u32);
	// blt cr6,0x82b30838
	if (cr6.lt) goto loc_82B30838;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B30838;
	sub_825952B8(ctx, base);
loc_82B30838:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B30840"))) PPC_WEAK_FUNC(sub_82B30840);
PPC_FUNC_IMPL(__imp__sub_82B30840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B30848;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82b308e8
	if (cr6.eq) goto loc_82B308E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x82b30908
	if (!cr6.gt) goto loc_82B30908;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x82b30908
	if (cr6.gt) goto loc_82B30908;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b30908
	if (!cr6.eq) goto loc_82B30908;
	// bl 0x82c13c38
	ctx.lr = 0x82B30884;
	sub_82C13C38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b30908
	if (cr6.eq) goto loc_82B30908;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b30908
	if (!cr6.eq) goto loc_82B30908;
	// stb r11,1504(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1504, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B308A4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82B308AC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B308B0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82b308e0
	if (!cr6.eq) goto loc_82B308E0;
	// addis r10,r31,222
	ctx.r10.s64 = ctx.r31.s64 + 14548992;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// ori r9,r11,52996
	ctx.r9.u64 = ctx.r11.u64 | 52996;
	// addis r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 458752;
	// addi r8,r8,1924
	ctx.r8.s64 = ctx.r8.s64 + 1924;
	// stwx r27,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r27.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r7,0,26,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
loc_82B308E0:
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82b308f8
	goto loc_82B308F8;
loc_82B308E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,1504(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1504, ctx.r11.u8);
	// addi r5,r10,-28456
	ctx.r5.s64 = ctx.r10.s64 + -28456;
loc_82B308F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B30904;
	sub_82D20DA8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_82B30908:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30988
	if (cr6.eq) goto loc_82B30988;
	// bl 0x82f06520
	ctx.lr = 0x82B30918;
	sub_82F06520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b30988
	if (cr6.eq) goto loc_82B30988;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// addi r31,r28,172
	ctx.r31.s64 = ctx.r28.s64 + 172;
	// lwz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b30988
	if (cr0.eq) goto loc_82B30988;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82B30940:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f06520
	ctx.lr = 0x82B30954;
	sub_82F06520(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x83546fd8
	ctx.lr = 0x82B30968;
	sub_83546FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b30940
	if (cr6.lt) goto loc_82B30940;
loc_82B30988:
	// stw r27,1508(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1508, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B30994"))) PPC_WEAK_FUNC(sub_82B30994);
PPC_FUNC_IMPL(__imp__sub_82B30994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B30998"))) PPC_WEAK_FUNC(sub_82B30998);
PPC_FUNC_IMPL(__imp__sub_82B30998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B309A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82c13c38
	ctx.lr = 0x82B309B0;
	sub_82C13C38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b30afc
	if (cr6.eq) goto loc_82B30AFC;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,25360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30a30
	if (cr6.eq) goto loc_82B30A30;
	// bl 0x831156e8
	ctx.lr = 0x82B309D0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r30,r10,52996
	ctx.r30.u64 = ctx.r10.u64 | 52996;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stwx r31,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r31.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82B309EC;
	sub_8319DC20(ctx, base);
	// bl 0x8317c510
	ctx.lr = 0x82B309F0;
	sub_8317C510(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b30a24
	if (cr6.eq) goto loc_82B30A24;
	// bl 0x831156e8
	ctx.lr = 0x82B30A00;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r10,r11,222
	ctx.r10.s64 = ctx.r11.s64 + 14548992;
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// stwx r31,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u32);
	// addis r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 458752;
	// addi r9,r9,1924
	ctx.r9.s64 = ctx.r9.s64 + 1924;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_82B30A24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30A30:
	// bl 0x831156e8
	ctx.lr = 0x82B30A34;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B30A3C;
	sub_831156E8(ctx, base);
	// addis r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82B30A48;
	sub_83126788(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// lis r10,239
	ctx.r10.s64 = 15663104;
	// ori r9,r11,52144
	ctx.r9.u64 = ctx.r11.u64 | 52144;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// ori r25,r10,62044
	ctx.r25.u64 = ctx.r10.u64 | 62044;
	// addi r28,r11,-28492
	ctx.r28.s64 = ctx.r11.s64 + -28492;
	// lhzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r9,19
	cr6.compare<int32_t>(ctx.r9.s32, 19, xer);
	// bgt cr6,0x82b31108
	if (cr6.gt) goto loc_82B31108;
	// beq cr6,0x82b310fc
	if (cr6.eq) goto loc_82B310FC;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b30b50
	if (cr6.gt) goto loc_82B30B50;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b30aa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B30AA4;
	// bdzf 4*cr6+eq,0x82b30be8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B30BE8;
	// bdzf 4*cr6+eq,0x82b30aa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B30AA4;
	// bdzf 4*cr6+eq,0x82b30be8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B30BE8;
	// bdzf 4*cr6+eq,0x82b30be8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B30BE8;
	// bne cr6,0x82b30bb0
	if (!cr6.eq) goto loc_82B30BB0;
loc_82B30AA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c134b0
	ctx.lr = 0x82B30AAC;
	sub_82C134B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r3.u32);
	// bne cr6,0x82b30afc
	if (!cr6.eq) goto loc_82B30AFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c13610
	ctx.lr = 0x82B30AC0;
	sub_82C13610(ctx, base);
	// stw r3,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b30afc
	if (!cr6.eq) goto loc_82B30AFC;
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82B30ADC;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8319df40
	ctx.lr = 0x82B30AE8;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30b08
	if (cr6.eq) goto loc_82B30B08;
loc_82B30AF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b30660
	ctx.lr = 0x82B30AFC;
	sub_82B30660(ctx, base);
loc_82B30AFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30B08:
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8319dc20
	ctx.lr = 0x82B30B10;
	sub_8319DC20(ctx, base);
	// bl 0x8317c510
	ctx.lr = 0x82B30B14;
	sub_8317C510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30b50
	if (cr6.eq) goto loc_82B30B50;
	// bl 0x831156e8
	ctx.lr = 0x82B30B24;
	sub_831156E8(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r8,r10,52996
	ctx.r8.u64 = ctx.r10.u64 | 52996;
	// addis r9,r11,222
	ctx.r9.s64 = ctx.r11.s64 + 14548992;
	// addi r9,r9,-8464
	ctx.r9.s64 = ctx.r9.s64 + -8464;
	// stwx r31,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u32);
	// addis r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 458752;
	// addi r7,r7,1924
	ctx.r7.s64 = ctx.r7.s64 + 1924;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r5,r6,0,26,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
loc_82B30B50:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// beq cr6,0x82b30b64
	if (cr6.eq) goto loc_82B30B64;
	// cmpwi cr6,r9,66
	cr6.compare<int32_t>(ctx.r9.s32, 66, xer);
	// bne cr6,0x82b30a24
	if (!cr6.eq) goto loc_82B30A24;
loc_82B30B64:
	// addi r10,r26,2176
	ctx.r10.s64 = ctx.r26.s64 + 2176;
loc_82B30B68:
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r28,-984
	ctx.r11.s64 = ctx.r28.s64 + -984;
	// beq cr6,0x82b30b7c
	if (cr6.eq) goto loc_82B30B7C;
	// addi r11,r28,-972
	ctx.r11.s64 = ctx.r28.s64 + -972;
loc_82B30B7C:
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82b30b98
	if (!cr6.lt) goto loc_82B30B98;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b314e4
	if (cr6.eq) goto loc_82B314E4;
loc_82B30B98:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82b30b68
	if (cr6.lt) goto loc_82B30B68;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30BB0:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,52996
	ctx.r10.u64 = ctx.r11.u64 | 52996;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x82b30bd8
	if (cr6.gt) goto loc_82B30BD8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b2e748
	ctx.lr = 0x82B30BCC;
	sub_82B2E748(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30afc
	if (cr6.eq) goto loc_82B30AFC;
loc_82B30BD8:
	// bl 0x82f06520
	ctx.lr = 0x82B30BDC;
	sub_82F06520(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// b 0x82b30b50
	goto loc_82B30B50;
loc_82B30BE8:
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8314d470
	ctx.lr = 0x82B30BFC;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30d00
	if (cr6.eq) goto loc_82B30D00;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b2e898
	ctx.lr = 0x82B30C18;
	sub_82B2E898(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,-28492
	ctx.r11.s64 = ctx.r11.s64 + -28492;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-1284
	ctx.r5.s64 = ctx.r11.s64 + -1284;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831178a0
	ctx.lr = 0x82B30C38;
	sub_831178A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b30c64
	if (!cr6.eq) goto loc_82B30C64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b30c68
	if (cr6.eq) goto loc_82B30C68;
loc_82B30C64:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B30C68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b30cb0
	if (!cr6.eq) goto loc_82B30CB0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b30c9c
	if (!cr6.eq) goto loc_82B30C9C;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30ca0
	if (cr6.eq) goto loc_82B30CA0;
loc_82B30C9C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B30CA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b30cb4
	if (cr6.eq) goto loc_82B30CB4;
loc_82B30CB0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B30CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82b30ce4
	if (cr6.eq) goto loc_82B30CE4;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// bl 0x82c133d0
	ctx.lr = 0x82B30CD0;
	sub_82C133D0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30CE4:
	// ori r4,r4,127
	ctx.r4.u64 = ctx.r4.u64 | 127;
	// bl 0x82c133d0
	ctx.lr = 0x82B30CEC;
	sub_82C133D0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30D00:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82B30D10;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8319df40
	ctx.lr = 0x82B30D1C;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b30af4
	if (!cr6.eq) goto loc_82B30AF4;
	// bl 0x8314bfc0
	ctx.lr = 0x82B30D2C;
	sub_8314BFC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30e10
	if (cr6.eq) goto loc_82B30E10;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b2e898
	ctx.lr = 0x82B30D48;
	sub_82B2E898(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b30d78
	if (!cr6.eq) goto loc_82B30D78;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30d7c
	if (cr6.eq) goto loc_82B30D7C;
loc_82B30D78:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B30D7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b30dec
	if (!cr6.eq) goto loc_82B30DEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B30D90;
	sub_8311C148(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82B30DB4;
	sub_82D042A8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b30dc8
	if (!cr6.lt) goto loc_82B30DC8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82B30DC8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c15058
	ctx.lr = 0x82B30DD0;
	sub_82C15058(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B30DD8;
	sub_8387E8E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30DEC:
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,132
	ctx.r4.u64 = ctx.r4.u64 | 132;
	// bl 0x82c133d0
	ctx.lr = 0x82B30DFC;
	sub_82C133D0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30E10:
	// li r30,19
	ctx.r30.s64 = 19;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8314d470
	ctx.lr = 0x82B30E24;
	sub_8314D470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30e7c
	if (cr6.eq) goto loc_82B30E7C;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// ori r9,r11,57076
	ctx.r9.u64 = ctx.r11.u64 | 57076;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b30e68
	if (!cr6.eq) goto loc_82B30E68;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b30e6c
	if (cr6.eq) goto loc_82B30E6C;
loc_82B30E68:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B30E6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b30e80
	if (cr6.eq) goto loc_82B30E80;
loc_82B30E7C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B30E80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30f8c
	if (cr6.eq) goto loc_82B30F8C;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8314d470
	ctx.lr = 0x82B30E9C;
	sub_8314D470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30f78
	if (cr6.eq) goto loc_82B30F78;
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r11,-31024
	ctx.r3.s64 = ctx.r11.s64 + -31024;
	// bl 0x83167888
	ctx.lr = 0x82B30EBC;
	sub_83167888(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b30a24
	if (cr6.eq) goto loc_82B30A24;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x82b30ef8
	if (!cr6.eq) goto loc_82B30EF8;
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,129
	ctx.r4.u64 = ctx.r4.u64 | 129;
	// bl 0x82c133d0
	ctx.lr = 0x82B30EE4;
	sub_82C133D0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30EF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B30F00;
	sub_8311C338(ctx, base);
	// stb r31,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r31.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,93
	ctx.r5.s64 = ctx.r1.s64 + 93;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83125548
	ctx.lr = 0x82B30F14;
	sub_83125548(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-28492
	ctx.r11.s64 = ctx.r11.s64 + -28492;
	// addi r4,r11,-787
	ctx.r4.s64 = ctx.r11.s64 + -787;
	// bl 0x837b0c10
	ctx.lr = 0x82B30F28;
	sub_837B0C10(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b30f3c
	if (!cr6.lt) goto loc_82B30F3C;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
loc_82B30F3C:
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,130
	ctx.r4.u64 = ctx.r4.u64 | 130;
	// bl 0x82d042a8
	ctx.lr = 0x82B30F4C;
	sub_82D042A8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b30f60
	if (!cr6.lt) goto loc_82B30F60;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82B30F60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c15058
	ctx.lr = 0x82B30F68;
	sub_82C15058(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B30F70;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B30F78;
	sub_8387E8E0(ctx, base);
loc_82B30F78:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B30F8C:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8314d470
	ctx.lr = 0x82B30F9C;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b310a0
	if (!cr6.eq) goto loc_82B310A0;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8314d470
	ctx.lr = 0x82B30FBC;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b310a0
	if (!cr6.eq) goto loc_82B310A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8314d470
	ctx.lr = 0x82B30FDC;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r30,6
	ctx.r30.s64 = 6;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b31008
	if (!cr6.eq) goto loc_82B31008;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8314d470
	ctx.lr = 0x82B30FFC;
	sub_8314D470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b310b4
	if (cr6.eq) goto loc_82B310B4;
loc_82B31008:
	// addis r11,r29,205
	ctx.r11.s64 = ctx.r29.s64 + 13434880;
	// addic. r11,r11,-18420
	xer.ca = ctx.r11.u32 > 18419;
	ctx.r11.s64 = ctx.r11.s64 + -18420;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b30b50
	if (cr0.eq) goto loc_82B30B50;
	// addis r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 262144;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r8,r8,-21460
	ctx.r8.s64 = ctx.r8.s64 + -21460;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82B31028:
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b31038
	if (!cr6.lt) goto loc_82B31038;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B31038:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3105c
	if (cr6.eq) goto loc_82B3105C;
	// lbz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// clrlwi r5,r6,28
	ctx.r5.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x82b3105c
	if (!cr6.eq) goto loc_82B3105C;
	// lbz r11,111(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 111);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b31070
	if (!cr6.eq) goto loc_82B31070;
loc_82B3105C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,476
	ctx.r9.s64 = ctx.r9.s64 + 476;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// blt cr6,0x82b31028
	if (cr6.lt) goto loc_82B31028;
	// b 0x82b31074
	goto loc_82B31074;
loc_82B31070:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82B31074:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b310b4
	if (cr6.eq) goto loc_82B310B4;
	// lis r4,278
	ctx.r4.s64 = 18219008;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,639
	ctx.r4.u64 = ctx.r4.u64 | 639;
	// bl 0x82c13378
	ctx.lr = 0x82B31090;
	sub_82C13378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r30.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B310A0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b2e748
	ctx.lr = 0x82B310A8;
	sub_82B2E748(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b30afc
	if (cr6.eq) goto loc_82B30AFC;
loc_82B310B4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82b30b50
	if (!cr6.eq) goto loc_82B30B50;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c134b0
	ctx.lr = 0x82B310C8;
	sub_82C134B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r3.u32);
	// bne cr6,0x82b30afc
	if (!cr6.eq) goto loc_82B30AFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c13610
	ctx.lr = 0x82B310DC;
	sub_82C13610(ctx, base);
	// stw r3,1508(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1508, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b30afc
	if (!cr6.eq) goto loc_82B30AFC;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// stbx r10,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x82b30b50
	goto loc_82B30B50;
loc_82B310FC:
	// bl 0x82f06520
	ctx.lr = 0x82B31100;
	sub_82F06520(ctx, base);
	// stw r31,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r31.u32);
	// b 0x82b30b50
	goto loc_82B30B50;
loc_82B31108:
	// addi r11,r9,-48
	ctx.r11.s64 = ctx.r9.s64 + -48;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bgt cr6,0x82b30b50
	if (cr6.gt) goto loc_82B30B50;
	// lis r12,-32077
	ctx.r12.s64 = -2102198272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4396
	ctx.r12.s64 = ctx.r12.s64 + 4396;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B31270;
	case 1:
		goto loc_82B30B50;
	case 2:
		goto loc_82B30B50;
	case 3:
		goto loc_82B30B50;
	case 4:
		goto loc_82B30B50;
	case 5:
		goto loc_82B30B50;
	case 6:
		goto loc_82B30B50;
	case 7:
		goto loc_82B30B50;
	case 8:
		goto loc_82B30B50;
	case 9:
		goto loc_82B30B50;
	case 10:
		goto loc_82B30B50;
	case 11:
		goto loc_82B31260;
	case 12:
		goto loc_82B30B50;
	case 13:
		goto loc_82B30B50;
	case 14:
		goto loc_82B30B50;
	case 15:
		goto loc_82B30B50;
	case 16:
		goto loc_82B3124C;
	case 17:
		goto loc_82B31184;
	case 18:
		goto loc_82B31184;
	case 19:
		goto loc_82B30B50;
	case 20:
		goto loc_82B30B50;
	case 21:
		goto loc_82B31234;
	default:
		return;
	}
	// lwz r21,4720(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4720);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,4704(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4704);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,4684(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4684);
	// lwz r21,4484(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4484);
	// lwz r21,4484(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4484);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,2896(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2896);
	// lwz r21,4660(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4660);
loc_82B31184:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r10,r26,2176
	ctx.r10.s64 = ctx.r26.s64 + 2176;
loc_82B3118C:
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r28,-984
	ctx.r11.s64 = ctx.r28.s64 + -984;
	// beq cr6,0x82b311a0
	if (cr6.eq) goto loc_82B311A0;
	// addi r11,r28,-972
	ctx.r11.s64 = ctx.r28.s64 + -972;
loc_82B311A0:
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82b311bc
	if (!cr6.lt) goto loc_82B311BC;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b311cc
	if (cr6.eq) goto loc_82B311CC;
loc_82B311BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82b3118c
	if (cr6.lt) goto loc_82B3118C;
	// b 0x82b30b50
	goto loc_82B30B50;
loc_82B311CC:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x82b30b50
	if (cr6.eq) goto loc_82B30B50;
	// bl 0x831156e8
	ctx.lr = 0x82B311D8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x83129fd8
	ctx.lr = 0x82B311E8;
	sub_83129FD8(ctx, base);
	// bl 0x8312dce0
	ctx.lr = 0x82B311EC;
	sub_8312DCE0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b30b50
	if (!cr6.eq) goto loc_82B30B50;
	// addi r3,r28,-48
	ctx.r3.s64 = ctx.r28.s64 + -48;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82B3120C;
	sub_82D2EE48(ctx, base);
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,56
	ctx.r4.u64 = ctx.r4.u64 | 56;
	// bl 0x82d2ada8
	ctx.lr = 0x82B3121C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82B31228;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B31234:
	// addis r11,r29,221
	ctx.r11.s64 = ctx.r29.s64 + 14483456;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// stw r10,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r10.u32);
	// stw r31,1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1296, ctx.r31.u32);
	// b 0x82b30b50
	goto loc_82B30B50;
loc_82B3124C:
	// lwz r30,192(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// bl 0x8311e3d0
	ctx.lr = 0x82B31254;
	sub_8311E3D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311d7b0
	ctx.lr = 0x82B3125C;
	sub_8311D7B0(ctx, base);
	// b 0x82b30b50
	goto loc_82B30B50;
loc_82B31260:
	// bl 0x82f06520
	ctx.lr = 0x82B31264;
	sub_82F06520(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// b 0x82b30b50
	goto loc_82B30B50;
loc_82B31270:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addis r7,r29,214
	ctx.r7.s64 = ctx.r29.s64 + 14024704;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lis r10,214
	ctx.r10.s64 = 14024704;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r4,-32(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r7,r7,16748
	ctx.r7.s64 = ctx.r7.s64 + 16748;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// ori r9,r10,10896
	ctx.r9.u64 = ctx.r10.u64 | 10896;
loc_82B31298:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// bge cr6,0x82b312ac
	if (!cr6.lt) goto loc_82B312AC;
	// addi r10,r7,-5852
	ctx.r10.s64 = ctx.r7.s64 + -5852;
loc_82B312AC:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b312cc
	if (!cr6.eq) goto loc_82B312CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x82b312f4
	goto loc_82B312F4;
loc_82B312CC:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b312ec
	if (!cr6.eq) goto loc_82B312EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b312f0
	if (cr6.eq) goto loc_82B312F0;
loc_82B312EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B312F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B312F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b31314
	if (!cr6.eq) goto loc_82B31314;
	// lhz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b31314
	if (cr6.eq) goto loc_82B31314;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82B31314:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// bge cr6,0x82b31328
	if (!cr6.lt) goto loc_82B31328;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82B31328:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b31348
	if (!cr6.eq) goto loc_82B31348;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x82b31370
	goto loc_82B31370;
loc_82B31348:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b31368
	if (!cr6.eq) goto loc_82B31368;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b3136c
	if (cr6.eq) goto loc_82B3136C;
loc_82B31368:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B3136C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B31370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b31390
	if (!cr6.eq) goto loc_82B31390;
	// lhz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b31390
	if (cr6.eq) goto loc_82B31390;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82B31390:
	// cmplwi cr6,r6,72
	cr6.compare<uint32_t>(ctx.r6.u32, 72, xer);
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// bge cr6,0x82b313a0
	if (!cr6.lt) goto loc_82B313A0;
	// addi r10,r7,5852
	ctx.r10.s64 = ctx.r7.s64 + 5852;
loc_82B313A0:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b313c0
	if (!cr6.eq) goto loc_82B313C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x82b313e8
	goto loc_82B313E8;
loc_82B313C0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b313e0
	if (!cr6.eq) goto loc_82B313E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b313e4
	if (cr6.eq) goto loc_82B313E4;
loc_82B313E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B313E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B313E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b31408
	if (!cr6.eq) goto loc_82B31408;
	// lhz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b31408
	if (cr6.eq) goto loc_82B31408;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82B31408:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// bge cr6,0x82b3141c
	if (!cr6.lt) goto loc_82B3141C;
	// addi r10,r7,11704
	ctx.r10.s64 = ctx.r7.s64 + 11704;
loc_82B3141C:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82b3143c
	if (!cr6.eq) goto loc_82B3143C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x82b31464
	goto loc_82B31464;
loc_82B3143C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b3145c
	if (!cr6.eq) goto loc_82B3145C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b31460
	if (cr6.eq) goto loc_82B31460;
loc_82B3145C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B31460:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B31464:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b31484
	if (!cr6.eq) goto loc_82B31484;
	// lhz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b31484
	if (cr6.eq) goto loc_82B31484;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82B31484:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,23408
	ctx.r7.s64 = ctx.r7.s64 + 23408;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// blt cr6,0x82b31298
	if (cr6.lt) goto loc_82B31298;
	// cmplwi cr6,r5,30
	cr6.compare<uint32_t>(ctx.r5.u32, 30, xer);
	// blt cr6,0x82b30b50
	if (cr6.lt) goto loc_82B30B50;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-28492
	ctx.r11.s64 = ctx.r11.s64 + -28492;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82B314BC;
	sub_82D2EE48(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,206
	ctx.r4.u64 = ctx.r4.u64 | 206;
	// bl 0x82d2ada8
	ctx.lr = 0x82B314CC;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82B314D8;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B314E4:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x82b30a24
	if (cr6.eq) goto loc_82B30A24;
	// bl 0x831156e8
	ctx.lr = 0x82B314F0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x83129fd8
	ctx.lr = 0x82B31500;
	sub_83129FD8(ctx, base);
	// bl 0x8312dce0
	ctx.lr = 0x82B31504;
	sub_8312DCE0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b30a24
	if (!cr6.eq) goto loc_82B30A24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82B31524;
	sub_82D2EE48(ctx, base);
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,56
	ctx.r4.u64 = ctx.r4.u64 | 56;
	// bl 0x82d2ada8
	ctx.lr = 0x82B31534;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82B31540;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3154C"))) PPC_WEAK_FUNC(sub_82B3154C);
PPC_FUNC_IMPL(__imp__sub_82B3154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B31550"))) PPC_WEAK_FUNC(sub_82B31550);
PPC_FUNC_IMPL(__imp__sub_82B31550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B31558;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B31570;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B31588;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r28.u8);
	// addi r9,r11,-27632
	ctx.r9.s64 = ctx.r11.s64 + -27632;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stb r7,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r7.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B315B0;
	sub_831156E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,52(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// bl 0x82d19788
	ctx.lr = 0x82B315C8;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82B315D0;
	sub_82D19948(ctx, base);
	// lbz r5,97(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b31640
	if (cr6.eq) goto loc_82B31640;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r10,r11,37453
	ctx.r10.u64 = ctx.r11.u64 | 37453;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r9,-27732
	ctx.r3.s64 = ctx.r9.s64 + -27732;
	// li r5,1
	ctx.r5.s64 = 1;
	// stbx r30,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B31604;
	sub_82D2FA90(ctx, base);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
	// bl 0x82d2ada8
	ctx.lr = 0x82B31614;
	sub_82D2ADA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82B31624;
	sub_82D19788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B31630;
	sub_83103100(ctx, base);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B31640:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B31654"))) PPC_WEAK_FUNC(sub_82B31654);
PPC_FUNC_IMPL(__imp__sub_82B31654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B31658"))) PPC_WEAK_FUNC(sub_82B31658);
PPC_FUNC_IMPL(__imp__sub_82B31658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B31670"))) PPC_WEAK_FUNC(sub_82B31670);
PPC_FUNC_IMPL(__imp__sub_82B31670) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b316a8
	if (!cr6.eq) goto loc_82B316A8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-27724
	ctx.r5.s64 = ctx.r11.s64 + -27724;
	// bl 0x82d20da8
	ctx.lr = 0x82B316A0;
	sub_82D20DA8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
loc_82B316A8:
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

__attribute__((alias("__imp__sub_82B316BC"))) PPC_WEAK_FUNC(sub_82B316BC);
PPC_FUNC_IMPL(__imp__sub_82B316BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B316C0"))) PPC_WEAK_FUNC(sub_82B316C0);
PPC_FUNC_IMPL(__imp__sub_82B316C0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27632
	ctx.r9.s64 = ctx.r11.s64 + -27632;
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
	ctx.lr = 0x82B316F8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b31710
	if (cr6.eq) goto loc_82B31710;
	// bl 0x82416268
	ctx.lr = 0x82B3170C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B31710:
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

__attribute__((alias("__imp__sub_82B31728"))) PPC_WEAK_FUNC(sub_82B31728);
PPC_FUNC_IMPL(__imp__sub_82B31728) {
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
	// blt cr6,0x82b31750
	if (cr6.lt) goto loc_82B31750;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b31754
	goto loc_82B31754;
loc_82B31750:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B31754:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B31770;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b31790
	if (cr6.eq) goto loc_82B31790;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b31550
	ctx.lr = 0x82B31788;
	sub_82B31550(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b31794
	if (!cr6.eq) goto loc_82B31794;
loc_82B31790:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B31794:
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

__attribute__((alias("__imp__sub_82B317AC"))) PPC_WEAK_FUNC(sub_82B317AC);
PPC_FUNC_IMPL(__imp__sub_82B317AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B317B0"))) PPC_WEAK_FUNC(sub_82B317B0);
PPC_FUNC_IMPL(__imp__sub_82B317B0) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B317D0;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37446
	ctx.r8.u64 = ctx.r11.u64 | 37446;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82b317f4
	if (cr6.lt) goto loc_82B317F4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B317F4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B31810;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b31830
	if (cr6.eq) goto loc_82B31830;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b31550
	ctx.lr = 0x82B31828;
	sub_82B31550(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b31834
	if (!cr6.eq) goto loc_82B31834;
loc_82B31830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B31834:
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

__attribute__((alias("__imp__sub_82B3184C"))) PPC_WEAK_FUNC(sub_82B3184C);
PPC_FUNC_IMPL(__imp__sub_82B3184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B31850"))) PPC_WEAK_FUNC(sub_82B31850);
PPC_FUNC_IMPL(__imp__sub_82B31850) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3189c
	if (cr6.eq) goto loc_82B3189C;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b3187c
	if (cr6.lt) goto loc_82B3187C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B3187C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82B31888;
	sub_82D20DA8(ctx, base);
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
loc_82B3189C:
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

__attribute__((alias("__imp__sub_82B318B0"))) PPC_WEAK_FUNC(sub_82B318B0);
PPC_FUNC_IMPL(__imp__sub_82B318B0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b318d8
	if (cr6.lt) goto loc_82B318D8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b318dc
	goto loc_82B318DC;
loc_82B318D8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B318DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_82B318F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b318f4
	if (!cr6.eq) goto loc_82B318F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B31918;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ad9490
	ctx.lr = 0x82B31924;
	sub_82AD9490(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b31948
	if (cr6.lt) goto loc_82B31948;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B31948;
	sub_825952B8(ctx, base);
loc_82B31948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B31960"))) PPC_WEAK_FUNC(sub_82B31960);
PPC_FUNC_IMPL(__imp__sub_82B31960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B31968;
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
	// bl 0x8308e078
	ctx.lr = 0x82B3197C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B31994;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26968
	ctx.r9.s64 = ctx.r11.s64 + -26968;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r6,-27076
	ctx.r4.s64 = ctx.r6.s64 + -27076;
	// bl 0x8259cc28
	ctx.lr = 0x82B319D4;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B319E0"))) PPC_WEAK_FUNC(sub_82B319E0);
PPC_FUNC_IMPL(__imp__sub_82B319E0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26968
	ctx.r9.s64 = ctx.r11.s64 + -26968;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// lwz r7,116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82b31a34
	if (cr6.lt) goto loc_82B31A34;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B31A34;
	sub_825952B8(ctx, base);
loc_82B31A34:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82d25548
	ctx.lr = 0x82B31A50;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82B31A68"))) PPC_WEAK_FUNC(sub_82B31A68);
PPC_FUNC_IMPL(__imp__sub_82B31A68) {
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
	// bl 0x82b319e0
	ctx.lr = 0x82B31A88;
	sub_82B319E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b31aa0
	if (cr6.eq) goto loc_82B31AA0;
	// bl 0x82416268
	ctx.lr = 0x82B31A9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B31AA0:
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

__attribute__((alias("__imp__sub_82B31AB8"))) PPC_WEAK_FUNC(sub_82B31AB8);
PPC_FUNC_IMPL(__imp__sub_82B31AB8) {
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
	// blt cr6,0x82b31ae0
	if (cr6.lt) goto loc_82B31AE0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b31ae4
	goto loc_82B31AE4;
loc_82B31AE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B31AE4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B31B00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b31b18
	if (cr6.eq) goto loc_82B31B18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b31960
	ctx.lr = 0x82B31B14;
	sub_82B31960(ctx, base);
	// b 0x82b31b1c
	goto loc_82B31B1C;
loc_82B31B18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B31B1C:
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

__attribute__((alias("__imp__sub_82B31B34"))) PPC_WEAK_FUNC(sub_82B31B34);
PPC_FUNC_IMPL(__imp__sub_82B31B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B31B38"))) PPC_WEAK_FUNC(sub_82B31B38);
PPC_FUNC_IMPL(__imp__sub_82B31B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B31B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B31B58;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B31B70;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r28.u8);
	// addi r9,r11,-26296
	ctx.r9.s64 = ctx.r11.s64 + -26296;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r7,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r7.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B31BA4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82B31BAC;
	sub_82D19948(ctx, base);
	// lbz r6,97(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b31c14
	if (cr6.eq) goto loc_82B31C14;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-26412
	ctx.r3.s64 = ctx.r11.s64 + -26412;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B31BD4;
	sub_82D2F6D8(ctx, base);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,298
	ctx.r4.u64 = ctx.r4.u64 | 298;
	// bl 0x82d2ada8
	ctx.lr = 0x82B31BE4;
	sub_82D2ADA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82B31BF4;
	sub_82D19788(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B31C00;
	sub_83103100(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B31C14:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B31C28"))) PPC_WEAK_FUNC(sub_82B31C28);
PPC_FUNC_IMPL(__imp__sub_82B31C28) {
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
	// bl 0x82d17d90
	ctx.lr = 0x82B31C40;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82b31c58
	if (cr6.lt) goto loc_82B31C58;
	// bne cr6,0x82b31c70
	if (!cr6.eq) goto loc_82B31C70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,-26392
	ctx.r5.s64 = ctx.r11.s64 + -26392;
	// b 0x82b31c64
	goto loc_82B31C64;
loc_82B31C58:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,-26392
	ctx.r11.s64 = ctx.r11.s64 + -26392;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
loc_82B31C64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B31C70;
	sub_82D20DA8(ctx, base);
loc_82B31C70:
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

__attribute__((alias("__imp__sub_82B31C84"))) PPC_WEAK_FUNC(sub_82B31C84);
PPC_FUNC_IMPL(__imp__sub_82B31C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B31C88"))) PPC_WEAK_FUNC(sub_82B31C88);
PPC_FUNC_IMPL(__imp__sub_82B31C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B31CA0"))) PPC_WEAK_FUNC(sub_82B31CA0);
PPC_FUNC_IMPL(__imp__sub_82B31CA0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26296
	ctx.r9.s64 = ctx.r11.s64 + -26296;
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
	ctx.lr = 0x82B31CD8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b31cf0
	if (cr6.eq) goto loc_82B31CF0;
	// bl 0x82416268
	ctx.lr = 0x82B31CEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B31CF0:
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

__attribute__((alias("__imp__sub_82B31D08"))) PPC_WEAK_FUNC(sub_82B31D08);
PPC_FUNC_IMPL(__imp__sub_82B31D08) {
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
	// blt cr6,0x82b31d30
	if (cr6.lt) goto loc_82B31D30;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b31d34
	goto loc_82B31D34;
loc_82B31D30:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B31D34:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B31D50;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b31d70
	if (cr6.eq) goto loc_82B31D70;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b31b38
	ctx.lr = 0x82B31D68;
	sub_82B31B38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b31d74
	if (!cr6.eq) goto loc_82B31D74;
loc_82B31D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B31D74:
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

__attribute__((alias("__imp__sub_82B31D8C"))) PPC_WEAK_FUNC(sub_82B31D8C);
PPC_FUNC_IMPL(__imp__sub_82B31D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B31D90"))) PPC_WEAK_FUNC(sub_82B31D90);
PPC_FUNC_IMPL(__imp__sub_82B31D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B31D98;
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
	// bl 0x8308e078
	ctx.lr = 0x82B31DAC;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B31DC4;
	sub_82D253F8(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-25640
	ctx.r8.s64 = ctx.r10.s64 + -25640;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82d17d90
	ctx.lr = 0x82B31DEC;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x82b31e20
	if (!cr6.lt) goto loc_82B31E20;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d17d80
	ctx.lr = 0x82B31E00;
	sub_82D17D80(ctx, base);
	// lis r4,122
	ctx.r4.s64 = 7995392;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,118
	ctx.r4.u64 = ctx.r4.u64 | 118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82B31E14;
	sub_82D21730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B31E20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B31E30"))) PPC_WEAK_FUNC(sub_82B31E30);
PPC_FUNC_IMPL(__imp__sub_82B31E30) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25640
	ctx.r9.s64 = ctx.r11.s64 + -25640;
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
	ctx.lr = 0x82B31E68;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b31e80
	if (cr6.eq) goto loc_82B31E80;
	// bl 0x82416268
	ctx.lr = 0x82B31E7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B31E80:
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

__attribute__((alias("__imp__sub_82B31E98"))) PPC_WEAK_FUNC(sub_82B31E98);
PPC_FUNC_IMPL(__imp__sub_82B31E98) {
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
	// blt cr6,0x82b31ec0
	if (cr6.lt) goto loc_82B31EC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b31ec4
	goto loc_82B31EC4;
loc_82B31EC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B31EC4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B31EE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b31efc
	if (cr6.eq) goto loc_82B31EFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b31d90
	ctx.lr = 0x82B31EF4;
	sub_82B31D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b31f00
	if (!cr6.eq) goto loc_82B31F00;
loc_82B31EFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B31F00:
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

__attribute__((alias("__imp__sub_82B31F18"))) PPC_WEAK_FUNC(sub_82B31F18);
PPC_FUNC_IMPL(__imp__sub_82B31F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-17
	xer.ca = ctx.r11.u32 > 16;
	ctx.r11.s64 = ctx.r11.s64 + -17;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b31f5c
	if (cr0.eq) goto loc_82B31F5C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82b31f50
	if (cr6.eq) goto loc_82B31F50;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// b 0x82b31fd8
	goto loc_82B31FD8;
loc_82B31F50:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,-25732
	ctx.r5.s64 = ctx.r11.s64 + -25732;
	// b 0x82b31fcc
	goto loc_82B31FCC;
loc_82B31F5C:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b31fd8
	if (cr6.eq) goto loc_82B31FD8;
	// bl 0x831156e8
	ctx.lr = 0x82B31F6C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82d3aa80
	ctx.lr = 0x82B31F84;
	sub_82D3AA80(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b31f98
	if (cr6.lt) goto loc_82B31F98;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b31f9c
	goto loc_82B31F9C;
loc_82B31F98:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B31F9C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b31fb8
	if (cr6.eq) goto loc_82B31FB8;
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B31FB0;
	sub_831CE980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
loc_82B31FB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B31FC0;
	sub_8387E8E0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,-25732
	ctx.r11.s64 = ctx.r11.s64 + -25732;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
loc_82B31FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B31FD8;
	sub_82D20DA8(ctx, base);
loc_82B31FD8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82B31FF4"))) PPC_WEAK_FUNC(sub_82B31FF4);
PPC_FUNC_IMPL(__imp__sub_82B31FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B31FF8"))) PPC_WEAK_FUNC(sub_82B31FF8);
PPC_FUNC_IMPL(__imp__sub_82B31FF8) {
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
	// stwu r1,-2976(r1)
	ea = -2976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b320d8
	if (cr6.eq) goto loc_82B320D8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b320d8
	if (!cr6.eq) goto loc_82B320D8;
	// bl 0x831156e8
	ctx.lr = 0x82B32028;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x82B32040;
	sub_831CE980(ctx, base);
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r9,r10,31560
	ctx.r9.s64 = ctx.r10.s64 + 31560;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82B32058;
	sub_837B0C10(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r8,-25958
	ctx.r4.s64 = ctx.r8.s64 + -25958;
	// bl 0x837b0c10
	ctx.lr = 0x82B32068;
	sub_837B0C10(ctx, base);
	// lis r7,81
	ctx.r7.s64 = 5308416;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r7,306
	ctx.r5.u64 = ctx.r7.u64 | 306;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bl 0x82d19638
	ctx.lr = 0x82B3209C;
	sub_82D19638(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d3aef0
	ctx.lr = 0x82B320A4;
	sub_82D3AEF0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b320d0
	if (cr6.eq) goto loc_82B320D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3ab00
	ctx.lr = 0x82B320B8;
	sub_82D3AB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83103100
	ctx.lr = 0x82B320C4;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d1c008
	ctx.lr = 0x82B320D0;
	sub_82D1C008(ctx, base);
loc_82B320D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378e240
	ctx.lr = 0x82B320D8;
	sub_8378E240(ctx, base);
loc_82B320D8:
	// addi r1,r1,2976
	ctx.r1.s64 = ctx.r1.s64 + 2976;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B320EC"))) PPC_WEAK_FUNC(sub_82B320EC);
PPC_FUNC_IMPL(__imp__sub_82B320EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B320F0"))) PPC_WEAK_FUNC(sub_82B320F0);
PPC_FUNC_IMPL(__imp__sub_82B320F0) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B32108;
	sub_831156E8(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r9,r9,24160
	ctx.r9.u64 = ctx.r9.u64 | 24160;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r8,35228
	ctx.r8.u64 = ctx.r8.u64 | 35228;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// bl 0x82d19858
	ctx.lr = 0x82B32140;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82B32154"))) PPC_WEAK_FUNC(sub_82B32154);
PPC_FUNC_IMPL(__imp__sub_82B32154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

