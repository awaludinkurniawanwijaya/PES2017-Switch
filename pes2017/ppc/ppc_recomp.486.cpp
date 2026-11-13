#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_839D0AA0"))) PPC_WEAK_FUNC(sub_839D0AA0);
PPC_FUNC_IMPL(__imp__sub_839D0AA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x839D0AB8;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d0adc
	if (!cr6.eq) goto loc_839D0ADC;
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
loc_839D0ADC:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x839b0560
	ctx.lr = 0x839D0AE4;
	sub_839B0560(ctx, base);
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

__attribute__((alias("__imp__sub_839D0B04"))) PPC_WEAK_FUNC(sub_839D0B04);
PPC_FUNC_IMPL(__imp__sub_839D0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D0B08"))) PPC_WEAK_FUNC(sub_839D0B08);
PPC_FUNC_IMPL(__imp__sub_839D0B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839D0B10;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D0B20;
	sub_82D19A78(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32672
	ctx.r9.s64 = ctx.r11.s64 + -32672;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d2f098
	ctx.lr = 0x839D0B34;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d0ca0
	if (cr6.eq) goto loc_839D0CA0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,7004
	ctx.r4.s64 = ctx.r10.s64 + 7004;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D0B58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x8399d9e8
	ctx.lr = 0x839D0B68;
	sub_8399D9E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x839D0B78;
	sub_82D2AEC8(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-32652
	ctx.r25.s64 = ctx.r11.s64 + -32652;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r24,r11,100
	ctx.r24.s64 = ctx.r11.s64 + 100;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r23,r11,-32664
	ctx.r23.s64 = ctx.r11.s64 + -32664;
loc_839D0B98:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82d2e228
	ctx.lr = 0x839D0BA4;
	sub_82D2E228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x8399d9e8
	ctx.lr = 0x839D0BB4;
	sub_8399D9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x839d0c84
	if (cr6.eq) goto loc_839D0C84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x839D0BD0;
	sub_82D2AEC8(ctx, base);
	// lwz r31,100(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D0BD8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839D0BF0;
	sub_8399F6E8(ctx, base);
	// lwz r22,116(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8399f8b8
	ctx.lr = 0x839D0BF8;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D0C00;
	sub_8399F8B8(ctx, base);
	// mulli r11,r22,532
	ctx.r11.s64 = ctx.r22.s64 * 532;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D0C18;
	sub_8399EA10(ctx, base);
	// mulli r11,r22,528
	ctx.r11.s64 = ctx.r22.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x839D0C30;
	sub_839A0478(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399f1e0
	ctx.lr = 0x839D0C3C;
	sub_8399F1E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839d0c68
	if (!cr6.lt) goto loc_839D0C68;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r9,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D0C68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D0C68:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399f250
	ctx.lr = 0x839D0C74;
	sub_8399F250(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x839d0c88
	goto loc_839D0C88;
loc_839D0C84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_839D0C88:
	// bl 0x82d2aec8
	ctx.lr = 0x839D0C8C;
	sub_82D2AEC8(ctx, base);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r11,r25,52
	ctx.r11.s64 = ctx.r25.s64 + 52;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x839d0b98
	if (cr6.lt) goto loc_839D0B98;
loc_839D0CA0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D0CA8"))) PPC_WEAK_FUNC(sub_839D0CA8);
PPC_FUNC_IMPL(__imp__sub_839D0CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D0CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D0CC0;
	sub_82D19A78(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32672
	ctx.r9.s64 = ctx.r11.s64 + -32672;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d2f098
	ctx.lr = 0x839D0CD4;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d0dd8
	if (cr6.eq) goto loc_839D0DD8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,7056
	ctx.r4.s64 = ctx.r10.s64 + 7056;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D0CF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399d9e8
	ctx.lr = 0x839D0D08;
	sub_8399D9E8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839d0dc8
	if (cr6.eq) goto loc_839D0DC8;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D0D1C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f6e8
	ctx.lr = 0x839D0D34;
	sub_8399F6E8(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D0D3C;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D0D44;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D0D5C;
	sub_8399EA10(ctx, base);
	// mulli r11,r30,528
	ctx.r11.s64 = ctx.r30.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839D0D74;
	sub_839A0478(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f040
	ctx.lr = 0x839D0D7C;
	sub_8399F040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x839d0dd8
	if (!cr6.lt) goto loc_839D0DD8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-32600
	ctx.r7.s64 = ctx.r9.s64 + -32600;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839D0DB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D0DC0;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D0DC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D0DD8;
	sub_82D2AEC8(ctx, base);
loc_839D0DD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D0DE0"))) PPC_WEAK_FUNC(sub_839D0DE0);
PPC_FUNC_IMPL(__imp__sub_839D0DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D0DE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,196
	ctx.r4.s64 = 196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D0E18;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d0e40
	if (cr6.eq) goto loc_839D0E40;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d08b0
	ctx.lr = 0x839D0E38;
	sub_839D08B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839D0E40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D0E4C"))) PPC_WEAK_FUNC(sub_839D0E4C);
PPC_FUNC_IMPL(__imp__sub_839D0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D0E50"))) PPC_WEAK_FUNC(sub_839D0E50);
PPC_FUNC_IMPL(__imp__sub_839D0E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D0E58;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D0E68;
	sub_82D19A78(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32672
	ctx.r9.s64 = ctx.r11.s64 + -32672;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d2f098
	ctx.lr = 0x839D0E7C;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d101c
	if (cr6.eq) goto loc_839D101C;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,6808
	ctx.r31.s64 = ctx.r11.s64 + 6808;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D0EAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839D0EC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839D0EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x8399d9e8
	ctx.lr = 0x839D0EF4;
	sub_8399D9E8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d0fa4
	if (cr6.eq) goto loc_839D0FA4;
	// lwz r31,100(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D0F08;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f6e8
	ctx.lr = 0x839D0F20;
	sub_8399F6E8(ctx, base);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D0F28;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D0F30;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 * 532;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D0F48;
	sub_8399EA10(ctx, base);
	// mulli r11,r28,528
	ctx.r11.s64 = ctx.r28.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839D0F60;
	sub_839A0478(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ef08
	ctx.lr = 0x839D0F68;
	sub_8399EF08(ctx, base);
	// clrldi r4,r3,56
	ctx.r4.u64 = ctx.r3.u64 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d294d0
	ctx.lr = 0x839D0F74;
	sub_82D294D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ef60
	ctx.lr = 0x839D0F7C;
	sub_8399EF60(ctx, base);
	// clrldi r4,r3,56
	ctx.r4.u64 = ctx.r3.u64 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d294d0
	ctx.lr = 0x839D0F88;
	sub_82D294D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399efd0
	ctx.lr = 0x839D0F90;
	sub_8399EFD0(ctx, base);
	// clrldi r4,r3,56
	ctx.r4.u64 = ctx.r3.u64 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d294d0
	ctx.lr = 0x839D0F9C;
	sub_82D294D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D0FA4:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x839D0FB0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839D0FC4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839D0FCC;
	sub_8387E8E0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x839D0FD8;
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
	ctx.lr = 0x839D0FEC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839D0FF4;
	sub_8387E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x839D1000;
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
	ctx.lr = 0x839D1014;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839D101C;
	sub_8387E8E0(ctx, base);
loc_839D101C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1024"))) PPC_WEAK_FUNC(sub_839D1024);
PPC_FUNC_IMPL(__imp__sub_839D1024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1028"))) PPC_WEAK_FUNC(sub_839D1028);
PPC_FUNC_IMPL(__imp__sub_839D1028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839D1030;
	__savegprlr_21(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D1040;
	sub_82D19A78(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32672
	ctx.r9.s64 = ctx.r11.s64 + -32672;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d2f098
	ctx.lr = 0x839D1054;
	sub_82D2F098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1360
	if (cr6.eq) goto loc_839D1360;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,7196
	ctx.r31.s64 = ctx.r11.s64 + 7196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D1084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x839D1094;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839D10A8;
	sub_82D291E0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x839d10c8
	if (cr6.lt) goto loc_839D10C8;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x839D10C8;
	sub_825952B8(ctx, base);
loc_839D10C8:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D10F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D1104;
	sub_82D2AEC8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D111C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x839D112C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839D1140;
	sub_82D291E0(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x839d115c
	if (cr6.lt) goto loc_839D115C;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839D115C;
	sub_825952B8(ctx, base);
loc_839D115C:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x8399d9e8
	ctx.lr = 0x839D1174;
	sub_8399D9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d1360
	if (cr6.eq) goto loc_839D1360;
	// lwz r30,100(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D1188;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8399f6e8
	ctx.lr = 0x839D11A0;
	sub_8399F6E8(ctx, base);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8399f8b8
	ctx.lr = 0x839D11A8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D11BC;
	sub_8399EA10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839D11C4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r27,r11,5
	ctx.r27.s64 = ctx.r11.s64 + 327680;
	// addi r27,r27,14904
	ctx.r27.s64 = ctx.r27.s64 + 14904;
	// bl 0x830ff290
	ctx.lr = 0x839D11D4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D11D8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839d1284
	if (!cr6.eq) goto loc_839D1284;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D11E8;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D121C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123d68
	ctx.lr = 0x839D122C;
	sub_83123D68(ctx, base);
	// clrldi r4,r3,56
	ctx.r4.u64 = ctx.r3.u64 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d294d0
	ctx.lr = 0x839D1238;
	sub_82D294D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123e68
	ctx.lr = 0x839D1248;
	sub_83123E68(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x82d8bfc0
	ctx.lr = 0x839D1250;
	sub_82D8BFC0(ctx, base);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839D126C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D127C;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839D1284:
	// bl 0x830ff290
	ctx.lr = 0x839D1288;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D128C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x839d1328
	if (!cr6.eq) goto loc_839D1328;
	// bl 0x82d19a68
	ctx.lr = 0x839D129C;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D12B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D12D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,100(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D12D8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x839D12F0;
	sub_831CE980(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x839a0478
	ctx.lr = 0x839D1300;
	sub_839A0478(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x839D1304;
	sub_825832D8(ctx, base);
	// lbz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// bl 0x831a6c68
	ctx.lr = 0x839D130C;
	sub_831A6C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x839d1360
	if (cr6.eq) goto loc_839D1360;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D1320;
	sub_82D29598(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839D1328:
	// bl 0x82d19a68
	ctx.lr = 0x839D132C;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D1360;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D1360:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1368"))) PPC_WEAK_FUNC(sub_839D1368);
PPC_FUNC_IMPL(__imp__sub_839D1368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D1370;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D1380;
	sub_82D19A78(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32672
	ctx.r9.s64 = ctx.r11.s64 + -32672;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d2f098
	ctx.lr = 0x839D1394;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1710
	if (cr6.eq) goto loc_839D1710;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r26,r3,100
	ctx.r26.s64 = ctx.r3.s64 + 100;
	// addi r27,r11,7492
	ctx.r27.s64 = ctx.r11.s64 + 7492;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r27,-72
	ctx.r4.s64 = ctx.r27.s64 + -72;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D13C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399d9e8
	ctx.lr = 0x839D13D0;
	sub_8399D9E8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839d16c8
	if (cr6.eq) goto loc_839D16C8;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D13E4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839D13FC;
	sub_8399F6E8(ctx, base);
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8399f8b8
	ctx.lr = 0x839D1404;
	sub_8399F8B8(ctx, base);
	// lwz r24,116(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D1410;
	sub_8399F8B8(ctx, base);
	// mulli r11,r25,532
	ctx.r11.s64 = ctx.r25.s64 * 532;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D1428;
	sub_8399EA10(ctx, base);
	// mulli r11,r24,528
	ctx.r11.s64 = ctx.r24.s64 * 528;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x839D1440;
	sub_839A0478(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f250
	ctx.lr = 0x839D144C;
	sub_8399F250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// bne cr6,0x839d1490
	if (!cr6.eq) goto loc_839D1490;
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259d6c0
	ctx.lr = 0x839D1478;
	sub_8259D6C0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839D148C;
	sub_82D2B608(ctx, base);
	// b 0x839d15a8
	goto loc_839D15A8;
loc_839D1490:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x839d14ec
	if (!cr6.eq) goto loc_839D14EC;
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d14ac
	if (cr6.eq) goto loc_839D14AC;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x839d1544
	goto loc_839D1544;
loc_839D14AC:
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D14B4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399f6e8
	ctx.lr = 0x839D14CC;
	sub_8399F6E8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x839d1564
	if (!cr6.eq) goto loc_839D1564;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x839d1564
	if (cr6.eq) goto loc_839D1564;
	// b 0x839d1534
	goto loc_839D1534;
loc_839D14EC:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x839d1564
	if (!cr6.eq) goto loc_839D1564;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// beq cr6,0x839d1518
	if (cr6.eq) goto loc_839D1518;
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d1564
	if (cr6.eq) goto loc_839D1564;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x839d1544
	goto loc_839D1544;
loc_839D1518:
	// bl 0x8399f8b8
	ctx.lr = 0x839D151C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399f6e8
	ctx.lr = 0x839D1534;
	sub_8399F6E8(ctx, base);
loc_839D1534:
	// lbz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d1564
	if (cr6.eq) goto loc_839D1564;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_839D1544:
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// beq cr6,0x839d1564
	if (cr6.eq) goto loc_839D1564;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8399d760
	ctx.lr = 0x839D1554;
	sub_8399D760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d1568
	if (!cr6.eq) goto loc_839D1568;
loc_839D1564:
	// li r4,0
	ctx.r4.s64 = 0;
loc_839D1568:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839D1578;
	sub_82D2B608(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83160b90
	ctx.lr = 0x839D158C;
	sub_83160B90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x839D15A0;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x839D15A8;
	sub_8387E8E0(ctx, base);
loc_839D15A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839D15BC;
	sub_82D291E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D15CC;
	sub_82D2AEC8(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r30,r11,-32592
	ctx.r30.s64 = ctx.r11.s64 + -32592;
loc_839D15D4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d2e228
	ctx.lr = 0x839D15E0;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1690
	if (cr6.eq) goto loc_839D1690;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x839D15F8;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1620
	if (cr6.eq) goto loc_839D1620;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d39310
	ctx.lr = 0x839D1620;
	sub_82D39310(ctx, base);
loc_839D1620:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8399d760
	ctx.lr = 0x839D162C;
	sub_8399D760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x839d1654
	if (!cr6.eq) goto loc_839D1654;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
loc_839D1654:
	// bctrl 
	ctx.lr = 0x839D1658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d1674
	if (cr6.eq) goto loc_839D1674;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x839d1678
	if (cr6.eq) goto loc_839D1678;
loc_839D1674:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_839D1678:
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
	ctx.lr = 0x839D1690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D1690:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(ctx.r29.u32, 13, xer);
	// blt cr6,0x839d15d4
	if (cr6.lt) goto loc_839D15D4;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839d1710
	if (cr6.lt) goto loc_839D1710;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839D16C0;
	sub_825952B8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_839D16C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D16D8;
	sub_82D2AEC8(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r30,13
	ctx.r30.s64 = 13;
	// addi r31,r11,-32592
	ctx.r31.s64 = ctx.r11.s64 + -32592;
loc_839D16E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d2e228
	ctx.lr = 0x839D16F0;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1704
	if (cr6.eq) goto loc_839D1704;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839D1704;
	sub_82D2AEC8(ctx, base);
loc_839D1704:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d16e4
	if (!cr0.eq) goto loc_839D16E4;
loc_839D1710:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1718"))) PPC_WEAK_FUNC(sub_839D1718);
PPC_FUNC_IMPL(__imp__sub_839D1718) {
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
	// bl 0x82d19a68
	ctx.lr = 0x839D1734;
	sub_82D19A68(ctx, base);
	// li r4,30780
	ctx.r4.s64 = 30780;
	// bl 0x83545640
	ctx.lr = 0x839D173C;
	sub_83545640(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_839D1740:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d0e50
	ctx.lr = 0x839D174C;
	sub_839D0E50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d0b08
	ctx.lr = 0x839D1758;
	sub_839D0B08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d0ca8
	ctx.lr = 0x839D1764;
	sub_839D0CA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d1028
	ctx.lr = 0x839D1770;
	sub_839D1028(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d1368
	ctx.lr = 0x839D177C;
	sub_839D1368(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x839d1740
	if (cr6.lt) goto loc_839D1740;
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

__attribute__((alias("__imp__sub_839D17A0"))) PPC_WEAK_FUNC(sub_839D17A0);
PPC_FUNC_IMPL(__imp__sub_839D17A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D17A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r11,12314
	ctx.r9.u64 = ctx.r11.u64 | 12314;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x839d1814
	if (!cr6.eq) goto loc_839D1814;
	// li r31,0
	ctx.r31.s64 = 0;
loc_839D17CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d0e50
	ctx.lr = 0x839D17D8;
	sub_839D0E50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d0b08
	ctx.lr = 0x839D17E4;
	sub_839D0B08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d0ca8
	ctx.lr = 0x839D17F0;
	sub_839D0CA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d1028
	ctx.lr = 0x839D17FC;
	sub_839D1028(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d1368
	ctx.lr = 0x839D1808;
	sub_839D1368(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x839d17cc
	if (cr6.lt) goto loc_839D17CC;
loc_839D1814:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D1820;
	sub_839CAE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1828"))) PPC_WEAK_FUNC(sub_839D1828);
PPC_FUNC_IMPL(__imp__sub_839D1828) {
	PPC_FUNC_PROLOGUE();
	// b 0x82aaf000
	sub_82AAF000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D182C"))) PPC_WEAK_FUNC(sub_839D182C);
PPC_FUNC_IMPL(__imp__sub_839D182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1830"))) PPC_WEAK_FUNC(sub_839D1830);
PPC_FUNC_IMPL(__imp__sub_839D1830) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8399d738
	sub_8399D738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1838"))) PPC_WEAK_FUNC(sub_839D1838);
PPC_FUNC_IMPL(__imp__sub_839D1838) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x839b03f8
	sub_839B03F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1844"))) PPC_WEAK_FUNC(sub_839D1844);
PPC_FUNC_IMPL(__imp__sub_839D1844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1848"))) PPC_WEAK_FUNC(sub_839D1848);
PPC_FUNC_IMPL(__imp__sub_839D1848) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,23
	cr6.compare<uint32_t>(ctx.r5.u32, 23, xer);
	// blt cr6,0x839d1888
	if (cr6.lt) goto loc_839D1888;
	// cmplwi cr6,r5,26
	cr6.compare<uint32_t>(ctx.r5.u32, 26, xer);
	// bgt cr6,0x839d1888
	if (cr6.gt) goto loc_839D1888;
	// bl 0x8399f270
	ctx.lr = 0x839D1870;
	sub_8399F270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839D1888:
	// bl 0x8399f270
	ctx.lr = 0x839D188C;
	sub_8399F270(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D18A0"))) PPC_WEAK_FUNC(sub_839D18A0);
PPC_FUNC_IMPL(__imp__sub_839D18A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D18A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D18D8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1920
	if (cr6.eq) goto loc_839D1920;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839d5b30
	ctx.lr = 0x839D18FC;
	sub_839D5B30(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8280
	ctx.r9.s64 = ctx.r11.s64 + 8280;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D1920:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D192C"))) PPC_WEAK_FUNC(sub_839D192C);
PPC_FUNC_IMPL(__imp__sub_839D192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1930"))) PPC_WEAK_FUNC(sub_839D1930);
PPC_FUNC_IMPL(__imp__sub_839D1930) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d5b0d0
	sub_82D5B0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1934"))) PPC_WEAK_FUNC(sub_839D1934);
PPC_FUNC_IMPL(__imp__sub_839D1934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1938"))) PPC_WEAK_FUNC(sub_839D1938);
PPC_FUNC_IMPL(__imp__sub_839D1938) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8399d710
	sub_8399D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1940"))) PPC_WEAK_FUNC(sub_839D1940);
PPC_FUNC_IMPL(__imp__sub_839D1940) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8399f270
	ctx.lr = 0x839D1958;
	sub_8399F270(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D196C"))) PPC_WEAK_FUNC(sub_839D196C);
PPC_FUNC_IMPL(__imp__sub_839D196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1970"))) PPC_WEAK_FUNC(sub_839D1970);
PPC_FUNC_IMPL(__imp__sub_839D1970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D1978;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D19A8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d19f0
	if (cr6.eq) goto loc_839D19F0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839d5b30
	ctx.lr = 0x839D19CC;
	sub_839D5B30(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8984
	ctx.r9.s64 = ctx.r11.s64 + 8984;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D19F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D19FC"))) PPC_WEAK_FUNC(sub_839D19FC);
PPC_FUNC_IMPL(__imp__sub_839D19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1A00"))) PPC_WEAK_FUNC(sub_839D1A00);
PPC_FUNC_IMPL(__imp__sub_839D1A00) {
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
	// li r9,2
	ctx.r9.s64 = 2;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D1A24;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,9928
	ctx.r9.s64 = ctx.r11.s64 + 9928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,-32268
	ctx.r30.s64 = ctx.r7.s64 + -32268;
	// lwz r4,-32268(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32268);
	// bl 0x82d20ae0
	ctx.lr = 0x839D1A50;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839D1A60;
	sub_82D23390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839D1A74;
	sub_839CB540(ctx, base);
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

__attribute__((alias("__imp__sub_839D1A90"))) PPC_WEAK_FUNC(sub_839D1A90);
PPC_FUNC_IMPL(__imp__sub_839D1A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D1A98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D1AC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1af0
	if (cr6.eq) goto loc_839D1AF0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d1a00
	ctx.lr = 0x839D1AE8;
	sub_839D1A00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839D1AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1AFC"))) PPC_WEAK_FUNC(sub_839D1AFC);
PPC_FUNC_IMPL(__imp__sub_839D1AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D1B00"))) PPC_WEAK_FUNC(sub_839D1B00);
PPC_FUNC_IMPL(__imp__sub_839D1B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x839D1B08;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D1B14;
	sub_82D19A68(ctx, base);
	// li r4,30780
	ctx.r4.s64 = 30780;
	// bl 0x83545640
	ctx.lr = 0x839D1B1C;
	sub_83545640(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r21,15
	ctx.r21.s64 = 15;
	// ori r24,r10,61
	ctx.r24.u64 = ctx.r10.u64 | 61;
	// addi r26,r11,-32220
	ctx.r26.s64 = ctx.r11.s64 + -32220;
loc_839D1B3C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D1B44;
	sub_82D19A78(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D1B4C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1dac
	if (cr6.eq) goto loc_839D1DAC;
	// lwz r31,100(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D1B60;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839D1B78;
	sub_8399F6E8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,100(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8399d9e8
	ctx.lr = 0x839D1B88;
	sub_8399D9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x839d1da4
	if (cr6.eq) goto loc_839D1DA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x839D1BA4;
	sub_82D2AEC8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839D1BA8;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D1BB0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D1BC8;
	sub_8399EA10(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x839D1BE0;
	sub_839A0478(ctx, base);
	// addi r30,r26,-40
	ctx.r30.s64 = ctx.r26.s64 + -40;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_839D1BEC:
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x839d1cd0
	if (!cr6.lt) goto loc_839D1CD0;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f358
	ctx.lr = 0x839D1C00;
	sub_8399F358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d1c7c
	if (cr6.eq) goto loc_839D1C7C;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1C24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83160838
	ctx.lr = 0x839D1C38;
	sub_83160838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x839D1C4C;
	sub_82D291E0(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839d1c68
	if (cr6.lt) goto loc_839D1C68;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x839D1C68;
	sub_825952B8(ctx, base);
loc_839D1C68:
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
loc_839D1C7C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,28
	cr6.compare<uint32_t>(ctx.r29.u32, 28, xer);
	// blt cr6,0x839d1bec
	if (cr6.lt) goto loc_839D1BEC;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x839d1cd0
	if (!cr6.lt) goto loc_839D1CD0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,-40
	ctx.r10.s64 = ctx.r26.s64 + -40;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r31,r31,10
	xer.ca = ctx.r31.u32 <= 10;
	ctx.r31.s64 = 10 - ctx.r31.s64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_839D1CA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D1CC8;
	sub_82D29598(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x839d1ca8
	if (!cr0.eq) goto loc_839D1CA8;
loc_839D1CD0:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_839D1CDC:
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bge cr6,0x839d1dac
	if (!cr6.lt) goto loc_839D1DAC;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f2e0
	ctx.lr = 0x839D1CF0;
	sub_8399F2E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d1d48
	if (cr6.eq) goto loc_839D1D48;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1D14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1dac
	if (cr6.eq) goto loc_839D1DAC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831236d0
	ctx.lr = 0x839D1D28;
	sub_831236D0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d648
	ctx.lr = 0x839D1D34;
	sub_8314D648(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D1D40;
	sub_82D29598(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_839D1D48:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// blt cr6,0x839d1cdc
	if (cr6.lt) goto loc_839D1CDC;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bge cr6,0x839d1dac
	if (!cr6.lt) goto loc_839D1DAC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_839D1D68:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1D80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d1dac
	if (cr6.eq) goto loc_839D1DAC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D1D90;
	sub_82D29598(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x839d1d68
	if (cr6.lt) goto loc_839D1D68;
	// b 0x839d1dac
	goto loc_839D1DAC;
loc_839D1DA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839D1DAC;
	sub_82D2AEC8(ctx, base);
loc_839D1DAC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,2
	cr6.compare<uint32_t>(ctx.r23.u32, 2, xer);
	// blt cr6,0x839d1b3c
	if (cr6.lt) goto loc_839D1B3C;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D1DC0"))) PPC_WEAK_FUNC(sub_839D1DC0);
PPC_FUNC_IMPL(__imp__sub_839D1DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x839D1DC8;
	__savegprlr_19(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ori r9,r11,12314
	ctx.r9.u64 = ctx.r11.u64 | 12314;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x839d2084
	if (!cr6.eq) goto loc_839D2084;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r21,15
	ctx.r21.s64 = 15;
	// ori r24,r10,61
	ctx.r24.u64 = ctx.r10.u64 | 61;
	// addi r26,r11,-32220
	ctx.r26.s64 = ctx.r11.s64 + -32220;
loc_839D1E08:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D1E10;
	sub_82D19A78(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D1E18;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2078
	if (cr6.eq) goto loc_839D2078;
	// lwz r31,100(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D1E2C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839D1E44;
	sub_8399F6E8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,100(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8399d9e8
	ctx.lr = 0x839D1E54;
	sub_8399D9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x839d2070
	if (cr6.eq) goto loc_839D2070;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x839D1E70;
	sub_82D2AEC8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839D1E74;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D1E7C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D1E94;
	sub_8399EA10(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x839D1EAC;
	sub_839A0478(ctx, base);
	// addi r30,r26,-40
	ctx.r30.s64 = ctx.r26.s64 + -40;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_839D1EB8:
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x839d1f9c
	if (!cr6.lt) goto loc_839D1F9C;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f358
	ctx.lr = 0x839D1ECC;
	sub_8399F358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d1f48
	if (cr6.eq) goto loc_839D1F48;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83160838
	ctx.lr = 0x839D1F04;
	sub_83160838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x839D1F18;
	sub_82D291E0(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839d1f34
	if (cr6.lt) goto loc_839D1F34;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x839D1F34;
	sub_825952B8(ctx, base);
loc_839D1F34:
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
loc_839D1F48:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,28
	cr6.compare<uint32_t>(ctx.r29.u32, 28, xer);
	// blt cr6,0x839d1eb8
	if (cr6.lt) goto loc_839D1EB8;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bge cr6,0x839d1f9c
	if (!cr6.lt) goto loc_839D1F9C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,-40
	ctx.r10.s64 = ctx.r26.s64 + -40;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r31,r31,10
	xer.ca = ctx.r31.u32 <= 10;
	ctx.r31.s64 = 10 - ctx.r31.s64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_839D1F74:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D1F94;
	sub_82D29598(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x839d1f74
	if (!cr0.eq) goto loc_839D1F74;
loc_839D1F9C:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_839D1FA8:
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bge cr6,0x839d2078
	if (!cr6.lt) goto loc_839D2078;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f2e0
	ctx.lr = 0x839D1FBC;
	sub_8399F2E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d2014
	if (cr6.eq) goto loc_839D2014;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D1FE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2078
	if (cr6.eq) goto loc_839D2078;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831236d0
	ctx.lr = 0x839D1FF4;
	sub_831236D0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d648
	ctx.lr = 0x839D2000;
	sub_8314D648(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D200C;
	sub_82D29598(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_839D2014:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// blt cr6,0x839d1fa8
	if (cr6.lt) goto loc_839D1FA8;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bge cr6,0x839d2078
	if (!cr6.lt) goto loc_839D2078;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_839D2034:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D204C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2078
	if (cr6.eq) goto loc_839D2078;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D205C;
	sub_82D29598(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x839d2034
	if (cr6.lt) goto loc_839D2034;
	// b 0x839d2078
	goto loc_839D2078;
loc_839D2070:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839D2078;
	sub_82D2AEC8(ctx, base);
loc_839D2078:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,2
	cr6.compare<uint32_t>(ctx.r23.u32, 2, xer);
	// blt cr6,0x839d1e08
	if (cr6.lt) goto loc_839D1E08;
loc_839D2084:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D2090;
	sub_839CAE30(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2098"))) PPC_WEAK_FUNC(sub_839D2098);
PPC_FUNC_IMPL(__imp__sub_839D2098) {
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
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d20d8
	if (!cr6.eq) goto loc_839D20D8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x839d4558
	ctx.lr = 0x839D20C4;
	sub_839D4558(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839D20D8;
	sub_83103100(ctx, base);
loc_839D20D8:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2108
	if (cr6.eq) goto loc_839D2108;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839d4098
	ctx.lr = 0x839D20F0;
	sub_839D4098(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x839d4060
	ctx.lr = 0x839D20FC;
	sub_839D4060(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x839d4020
	ctx.lr = 0x839D2108;
	sub_839D4020(ctx, base);
loc_839D2108:
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

__attribute__((alias("__imp__sub_839D211C"))) PPC_WEAK_FUNC(sub_839D211C);
PPC_FUNC_IMPL(__imp__sub_839D211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2120"))) PPC_WEAK_FUNC(sub_839D2120);
PPC_FUNC_IMPL(__imp__sub_839D2120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D2140;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,10704
	ctx.r9.s64 = ctx.r11.s64 + 10704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
	// bl 0x82d19648
	ctx.lr = 0x839D2180;
	sub_82D19648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196f8
	ctx.lr = 0x839D218C;
	sub_82D196F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19740
	ctx.lr = 0x839D2198;
	sub_82D19740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19750
	ctx.lr = 0x839D21A4;
	sub_82D19750(ctx, base);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,10524(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10524);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d19760
	ctx.lr = 0x839D21B4;
	sub_82D19760(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,82
	ctx.r5.u64 = ctx.r5.u64 | 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x839D21C8;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839D21D8;
	sub_82D19788(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839D21E8:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839d21e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839D21E8;
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

__attribute__((alias("__imp__sub_839D220C"))) PPC_WEAK_FUNC(sub_839D220C);
PPC_FUNC_IMPL(__imp__sub_839D220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2210"))) PPC_WEAK_FUNC(sub_839D2210);
PPC_FUNC_IMPL(__imp__sub_839D2210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D2218;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19730
	ctx.lr = 0x839D2228;
	sub_82D19730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D2230;
	sub_82D19A68(ctx, base);
	// li r4,30704
	ctx.r4.s64 = 30704;
	// bl 0x83545640
	ctx.lr = 0x839D2238;
	sub_83545640(ctx, base);
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d22cc
	if (cr6.eq) goto loc_839D22CC;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D224C;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f988
	ctx.lr = 0x839D2254;
	sub_8399F988(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839aa9a8
	ctx.lr = 0x839D2260;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d2284
	if (cr6.eq) goto loc_839D2284;
	// lwz r30,216(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D2278;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x839d2294
	goto loc_839D2294;
loc_839D2284:
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D228C;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_839D2294:
	// bl 0x8399f970
	ctx.lr = 0x839D2298;
	sub_8399F970(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12291
	ctx.r9.u64 = ctx.r10.u64 | 12291;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D22C8;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839D22CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D22E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D22FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x839D2304;
	sub_82D19638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x839d2318
	if (cr6.eq) goto loc_839D2318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d2098
	ctx.lr = 0x839D2318;
	sub_839D2098(ctx, base);
loc_839D2318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2320"))) PPC_WEAK_FUNC(sub_839D2320);
PPC_FUNC_IMPL(__imp__sub_839D2320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D2328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// li r30,13
	ctx.r30.s64 = 13;
	// li r29,0
	ctx.r29.s64 = 0;
loc_839D233C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2350
	if (cr6.eq) goto loc_839D2350;
	// bl 0x83812c48
	ctx.lr = 0x839D234C;
	sub_83812C48(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_839D2350:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d233c
	if (!cr0.eq) goto loc_839D233C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x839D2364;
	sub_82DD3A30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D236C"))) PPC_WEAK_FUNC(sub_839D236C);
PPC_FUNC_IMPL(__imp__sub_839D236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2370"))) PPC_WEAK_FUNC(sub_839D2370);
PPC_FUNC_IMPL(__imp__sub_839D2370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D2378;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d23d8
	if (cr6.eq) goto loc_839D23D8;
	// lwz r30,220(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D2398;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399f970
	ctx.lr = 0x839D23A4;
	sub_8399F970(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12291
	ctx.r9.u64 = ctx.r10.u64 | 12291;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D23D4;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839D23D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb1c0
	ctx.lr = 0x839D23E0;
	sub_839CB1C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D23E8"))) PPC_WEAK_FUNC(sub_839D23E8);
PPC_FUNC_IMPL(__imp__sub_839D23E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19638
	ctx.lr = 0x839D2400;
	sub_82D19638(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,12312
	ctx.r10.u64 = ctx.r10.u64 | 12312;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D2438;
	sub_83103068(ctx, base);
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

__attribute__((alias("__imp__sub_839D244C"))) PPC_WEAK_FUNC(sub_839D244C);
PPC_FUNC_IMPL(__imp__sub_839D244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2450"))) PPC_WEAK_FUNC(sub_839D2450);
PPC_FUNC_IMPL(__imp__sub_839D2450) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r5,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r5.u32);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// addi r11,r3,224
	ctx.r11.s64 = ctx.r3.s64 + 224;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// ori r7,r9,12331
	ctx.r7.u64 = ctx.r9.u64 | 12331;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// bl 0x83103068
	ctx.lr = 0x839D2490;
	sub_83103068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D24A0"))) PPC_WEAK_FUNC(sub_839D24A0);
PPC_FUNC_IMPL(__imp__sub_839D24A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D24A8;
	__savegprlr_27(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D24C4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2570
	if (cr6.eq) goto loc_839D2570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D24D4;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D24DC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2570
	if (cr6.eq) goto loc_839D2570;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D24EC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2570
	if (cr6.eq) goto loc_839D2570;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x839d2518
	if (!cr6.eq) goto loc_839D2518;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d2518
	if (!cr6.eq) goto loc_839D2518;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,10600
	ctx.r11.s64 = ctx.r11.s64 + 10600;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x839d2520
	goto loc_839D2520;
loc_839D2518:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,10600
	ctx.r4.s64 = ctx.r11.s64 + 10600;
loc_839D2520:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D2534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2570
	if (cr6.eq) goto loc_839D2570;
	// li r4,30777
	ctx.r4.s64 = 30777;
	// bl 0x83545640
	ctx.lr = 0x839D2548;
	sub_83545640(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32064
	ctx.r9.s64 = ctx.r11.s64 + -32064;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839D2570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D2570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2578"))) PPC_WEAK_FUNC(sub_839D2578);
PPC_FUNC_IMPL(__imp__sub_839D2578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D2580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D2590;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d25e4
	if (cr6.eq) goto loc_839D25E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D25A0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839D25A8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d25e4
	if (cr6.eq) goto loc_839D25E4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_839D25B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D25C4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d25e4
	if (cr6.eq) goto loc_839D25E4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D25D8;
	sub_82D2AEC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839d25b8
	if (cr6.lt) goto loc_839D25B8;
loc_839D25E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D25EC"))) PPC_WEAK_FUNC(sub_839D25EC);
PPC_FUNC_IMPL(__imp__sub_839D25EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D25F0"))) PPC_WEAK_FUNC(sub_839D25F0);
PPC_FUNC_IMPL(__imp__sub_839D25F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D25F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,12299
	ctx.r10.u64 = ctx.r10.u64 | 12299;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839d2738
	if (cr6.gt) goto loc_839D2738;
	// beq cr6,0x839d26c4
	if (cr6.eq) goto loc_839D26C4;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addi r11,r11,-12291
	ctx.r11.s64 = ctx.r11.s64 + -12291;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x839d2880
	if (cr6.gt) goto loc_839D2880;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839d2754
	if (cr6.eq) goto loc_839D2754;
	// bdz 0x839d2754
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839D2754;
	// bdz 0x839d2880
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839D2880;
	// bdz 0x839d2874
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839D2874;
	// bdz 0x839d2880
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839D2880;
	// bdz 0x839d2754
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839D2754;
	// bdz 0x839d2880
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839D2880;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D2668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d2578
	ctx.lr = 0x839D2674;
	sub_839D2578(ctx, base);
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r29,13
	ctx.r29.s64 = 13;
loc_839D267C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2690
	if (cr6.eq) goto loc_839D2690;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83812878
	ctx.lr = 0x839D2690;
	sub_83812878(ctx, base);
loc_839D2690:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x839d267c
	if (!cr0.eq) goto loc_839D267C;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2880
	if (cr6.eq) goto loc_839D2880;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839D26B0;
	sub_83102FE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D26BC;
	sub_839CAE30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839D26C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D26DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d2578
	ctx.lr = 0x839D26E8;
	sub_839D2578(ctx, base);
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r29,13
	ctx.r29.s64 = 13;
loc_839D26F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2704
	if (cr6.eq) goto loc_839D2704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83812878
	ctx.lr = 0x839D2704;
	sub_83812878(ctx, base);
loc_839D2704:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x839d26f0
	if (!cr0.eq) goto loc_839D26F0;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2880
	if (cr6.eq) goto loc_839D2880;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839D2724;
	sub_83102FE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D2730;
	sub_839CAE30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839D2738:
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12312
	xer.ca = ctx.r11.u32 > 12311;
	ctx.r11.s64 = ctx.r11.s64 + -12312;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839d2814
	if (cr0.eq) goto loc_839D2814;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839d2774
	if (cr6.eq) goto loc_839D2774;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bne cr6,0x839d2880
	if (!cr6.eq) goto loc_839D2880;
loc_839D2754:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D2760;
	sub_83103068(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D276C;
	sub_839CAE30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839D2774:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8399d9e8
	ctx.lr = 0x839D2784;
	sub_8399D9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d2794
	if (cr6.eq) goto loc_839D2794;
	// li r30,1
	ctx.r30.s64 = 1;
loc_839D2794:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D279C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x839D27B4;
	sub_8399F6E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x839aa018
	ctx.lr = 0x839D27C4;
	sub_839AA018(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// blt cr6,0x839d27dc
	if (cr6.lt) goto loc_839D27DC;
	// addi r5,r5,-11
	ctx.r5.s64 = ctx.r5.s64 + -11;
	// b 0x839d27f4
	goto loc_839D27F4;
loc_839D27DC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x839d27f8
	if (cr6.eq) goto loc_839D27F8;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x839d27f8
	if (!cr6.eq) goto loc_839D27F8;
loc_839D27F4:
	// li r4,1
	ctx.r4.s64 = 1;
loc_839D27F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x839D2810;
	sub_82D1EBF8(ctx, base);
	// b 0x839d2874
	goto loc_839D2874;
loc_839D2814:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D282C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d2578
	ctx.lr = 0x839D2838;
	sub_839D2578(ctx, base);
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r29,13
	ctx.r29.s64 = 13;
loc_839D2840:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2854
	if (cr6.eq) goto loc_839D2854;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83812878
	ctx.lr = 0x839D2854;
	sub_83812878(ctx, base);
loc_839D2854:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x839d2840
	if (!cr0.eq) goto loc_839D2840;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2874
	if (cr6.eq) goto loc_839D2874;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839D2874;
	sub_83102FE0(ctx, base);
loc_839D2874:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x839D2880;
	sub_831036C0(ctx, base);
loc_839D2880:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D288C;
	sub_839CAE30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2894"))) PPC_WEAK_FUNC(sub_839D2894);
PPC_FUNC_IMPL(__imp__sub_839D2894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2898"))) PPC_WEAK_FUNC(sub_839D2898);
PPC_FUNC_IMPL(__imp__sub_839D2898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D28A0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D28B8;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2a54
	if (cr6.eq) goto loc_839D2A54;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x839d28d0
	if (!cr6.eq) goto loc_839D28D0;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// b 0x839d28dc
	goto loc_839D28DC;
loc_839D28D0:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_839D28DC:
	// bl 0x8399f8b8
	ctx.lr = 0x839D28E0;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f950
	ctx.lr = 0x839D28E8;
	sub_8399F950(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839D28EC;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839D28F4;
	sub_8399F988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x839d2918
	if (!cr6.eq) goto loc_839D2918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aa9a8
	ctx.lr = 0x839D2908;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d2918
	if (cr6.eq) goto loc_839D2918;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839D2918:
	// bl 0x8399f8b8
	ctx.lr = 0x839D291C;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839D292C;
	sub_8399FE30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D2934;
	sub_82D19A78(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D293C;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2a54
	if (cr6.eq) goto loc_839D2A54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_839D2958:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D2964;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a688d0
	ctx.lr = 0x839D2978;
	sub_82A688D0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bne cr6,0x839d2990
	if (!cr6.eq) goto loc_839D2990;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a5e28
	ctx.lr = 0x839D2990;
	sub_839A5E28(ctx, base);
loc_839D2990:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r24,96(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bctrl 
	ctx.lr = 0x839D29E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x839a6660
	ctx.lr = 0x839D29F8;
	sub_839A6660(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D2A14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a6a30
	ctx.lr = 0x839D2A30;
	sub_839A6A30(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,84(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839D2A48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839d2958
	if (cr6.lt) goto loc_839D2958;
loc_839D2A54:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2A60"))) PPC_WEAK_FUNC(sub_839D2A60);
PPC_FUNC_IMPL(__imp__sub_839D2A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-31784
	ctx.r11.s64 = ctx.r11.s64 + -31784;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D2A74"))) PPC_WEAK_FUNC(sub_839D2A74);
PPC_FUNC_IMPL(__imp__sub_839D2A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2A78"))) PPC_WEAK_FUNC(sub_839D2A78);
PPC_FUNC_IMPL(__imp__sub_839D2A78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,11840
	ctx.r10.s64 = ctx.r10.s64 + 11840;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D2A94"))) PPC_WEAK_FUNC(sub_839D2A94);
PPC_FUNC_IMPL(__imp__sub_839D2A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2A98"))) PPC_WEAK_FUNC(sub_839D2A98);
PPC_FUNC_IMPL(__imp__sub_839D2A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D2AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d2ad8
	if (cr6.eq) goto loc_839D2AD8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D2AD0;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_839D2AD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2AEC;
	sub_835977D8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2B00;
	sub_835977D8(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2B14;
	sub_835977D8(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2B28;
	sub_835977D8(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2B3C;
	sub_835977D8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2B50;
	sub_835977D8(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2B64;
	sub_835977D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2B78;
	sub_835977D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2B80"))) PPC_WEAK_FUNC(sub_839D2B80);
PPC_FUNC_IMPL(__imp__sub_839D2B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D2B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d2bc0
	if (cr6.eq) goto loc_839D2BC0;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D2BB8;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_839D2BC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2BD4;
	sub_835977D8(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2BE8;
	sub_835977D8(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2BFC;
	sub_835977D8(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2C10;
	sub_835977D8(ctx, base);
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2C24;
	sub_835977D8(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x839D2C38;
	sub_835977D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2C40"))) PPC_WEAK_FUNC(sub_839D2C40);
PPC_FUNC_IMPL(__imp__sub_839D2C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D2C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D2C68;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r31,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,12704
	ctx.r9.s64 = ctx.r11.s64 + 12704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// lis r6,-31767
	ctx.r6.s64 = -2081882112;
	// stw r7,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r31.u32);
	// addi r29,r6,-31720
	ctx.r29.s64 = ctx.r6.s64 + -31720;
	// lwz r4,-31720(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -31720);
	// bl 0x82d20ae0
	ctx.lr = 0x839D2CAC;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839D2CBC;
	sub_82D23390(ctx, base);
	// stb r31,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r31.u8);
	// stb r31,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d191f8
	ctx.lr = 0x839D2CCC;
	sub_82D191F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2CD8"))) PPC_WEAK_FUNC(sub_839D2CD8);
PPC_FUNC_IMPL(__imp__sub_839D2CD8) {
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
	// bl 0x83103510
	ctx.lr = 0x839D2CF4;
	sub_83103510(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2d18
	if (cr6.eq) goto loc_839D2D18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D2D14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
loc_839D2D18:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2d38
	if (cr6.eq) goto loc_839D2D38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D2D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
loc_839D2D38:
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

__attribute__((alias("__imp__sub_839D2D50"))) PPC_WEAK_FUNC(sub_839D2D50);
PPC_FUNC_IMPL(__imp__sub_839D2D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D2D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839d2a78
	ctx.lr = 0x839D2D6C;
	sub_839D2A78(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r29,r11,12588
	ctx.r29.s64 = ctx.r11.s64 + 12588;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d2dcc
	if (!cr6.eq) goto loc_839D2DCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839D2D90;
	sub_82D199F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x839d67e8
	ctx.lr = 0x839D2DA8;
	sub_839D67E8(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D2DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83103100
	ctx.lr = 0x839D2DCC;
	sub_83103100(ctx, base);
loc_839D2DCC:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d2e24
	if (!cr6.eq) goto loc_839D2E24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839D2DE8;
	sub_82D199F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x839d6300
	ctx.lr = 0x839D2E00;
	sub_839D6300(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D2E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x83103100
	ctx.lr = 0x839D2E24;
	sub_83103100(ctx, base);
loc_839D2E24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2E2C"))) PPC_WEAK_FUNC(sub_839D2E2C);
PPC_FUNC_IMPL(__imp__sub_839D2E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2E30"))) PPC_WEAK_FUNC(sub_839D2E30);
PPC_FUNC_IMPL(__imp__sub_839D2E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D2E38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D2E68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d2e90
	if (cr6.eq) goto loc_839D2E90;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d2c40
	ctx.lr = 0x839D2E88;
	sub_839D2C40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839D2E90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D2E9C"))) PPC_WEAK_FUNC(sub_839D2E9C);
PPC_FUNC_IMPL(__imp__sub_839D2E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D2EA0"))) PPC_WEAK_FUNC(sub_839D2EA0);
PPC_FUNC_IMPL(__imp__sub_839D2EA0) {
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
	// bl 0x82d19a68
	ctx.lr = 0x839D2EB8;
	sub_82D19A68(ctx, base);
	// li r4,-4370
	ctx.r4.s64 = -4370;
	// bl 0x83545640
	ctx.lr = 0x839D2EC0;
	sub_83545640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x839d2d50
	ctx.lr = 0x839D2ECC;
	sub_839D2D50(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_839D2EE8"))) PPC_WEAK_FUNC(sub_839D2EE8);
PPC_FUNC_IMPL(__imp__sub_839D2EE8) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x839d2f28
	if (cr6.eq) goto loc_839D2F28;
	// bl 0x839d2cd8
	ctx.lr = 0x839D2F18;
	sub_839D2CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d2d50
	ctx.lr = 0x839D2F24;
	sub_839D2D50(ctx, base);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
loc_839D2F28:
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

__attribute__((alias("__imp__sub_839D2F40"))) PPC_WEAK_FUNC(sub_839D2F40);
PPC_FUNC_IMPL(__imp__sub_839D2F40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D2F68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r8,308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839d3020
	if (cr6.eq) goto loc_839D3020;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839D2FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r6.u32);
loc_839D3020:
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

__attribute__((alias("__imp__sub_839D3034"))) PPC_WEAK_FUNC(sub_839D3034);
PPC_FUNC_IMPL(__imp__sub_839D3034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3038"))) PPC_WEAK_FUNC(sub_839D3038);
PPC_FUNC_IMPL(__imp__sub_839D3038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D3040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D305C;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,14176
	ctx.r9.s64 = ctx.r11.s64 + 14176;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// addi r29,r7,-31576
	ctx.r29.s64 = ctx.r7.s64 + -31576;
	// lwz r4,-31576(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31576);
	// bl 0x82d20ae0
	ctx.lr = 0x839D3094;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839D30A4;
	sub_82D23390(ctx, base);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D30AC;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399fcc8
	ctx.lr = 0x839D30B4;
	sub_8399FCC8(ctx, base);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// li r10,40
	ctx.r10.s64 = 40;
	// stb r30,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r30.u8);
loc_839D30C4:
	// li r8,6
	ctx.r8.s64 = 6;
loc_839D30C8:
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839D30D4:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
	// bdnz 0x839d30d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839D30D4;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bne 0x839d30c8
	if (!cr0.eq) goto loc_839D30C8;
	// cmplwi cr6,r10,76
	cr6.compare<uint32_t>(ctx.r10.u32, 76, xer);
	// blt cr6,0x839d30c4
	if (cr6.lt) goto loc_839D30C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x839D3104;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3110"))) PPC_WEAK_FUNC(sub_839D3110);
PPC_FUNC_IMPL(__imp__sub_839D3110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D3118;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r11,r6
	ctx.r29.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839d31a8
	if (!cr6.eq) goto loc_839D31A8;
	// lwz r28,96(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r27,100(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839D315C;
	sub_82D19638(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x839D3168;
	sub_82D199F0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31568
	ctx.r9.s64 = ctx.r11.s64 + -31568;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x839d6aa0
	ctx.lr = 0x839D318C;
	sub_839D6AA0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r8,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x83103100
	ctx.lr = 0x839D31A0;
	sub_83103100(ctx, base);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x839cb638
	ctx.lr = 0x839D31A8;
	sub_839CB638(ctx, base);
loc_839D31A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D31B0"))) PPC_WEAK_FUNC(sub_839D31B0);
PPC_FUNC_IMPL(__imp__sub_839D31B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D31B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,316
	ctx.r4.s64 = 316;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x839D31E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d3208
	if (cr6.eq) goto loc_839D3208;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d3038
	ctx.lr = 0x839D3200;
	sub_839D3038(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839D3208:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3214"))) PPC_WEAK_FUNC(sub_839D3214);
PPC_FUNC_IMPL(__imp__sub_839D3214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3218"))) PPC_WEAK_FUNC(sub_839D3218);
PPC_FUNC_IMPL(__imp__sub_839D3218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D3220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x839d3248
	if (cr6.eq) goto loc_839D3248;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bne cr6,0x839d3278
	if (!cr6.eq) goto loc_839D3278;
	// b 0x839d3258
	goto loc_839D3258;
loc_839D3248:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x839d3278
	if (cr6.lt) goto loc_839D3278;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// bgt cr6,0x839d3278
	if (cr6.gt) goto loc_839D3278;
loc_839D3258:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x839d3268
	if (cr6.gt) goto loc_839D3268;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x839d3278
	goto loc_839D3278;
loc_839D3268:
	// subfic r11,r30,7
	xer.ca = ctx.r30.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r30.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_839D3278:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x839d329c
	if (!cr6.eq) goto loc_839D329C;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x839d329c
	if (!cr6.eq) goto loc_839D329C;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x839d3378
	if (cr6.eq) goto loc_839D3378;
loc_839D329C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D32A4;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d3378
	if (cr6.eq) goto loc_839D3378;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d3334
	if (cr6.eq) goto loc_839D3334;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D32FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 + 40;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
loc_839D3334:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bgt cr6,0x839d3344
	if (cr6.gt) goto loc_839D3344;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_839D3344:
	// stw r4,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r4.u32);
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// li r5,5
	ctx.r5.s64 = 5;
	// bgt cr6,0x839d3358
	if (cr6.gt) goto loc_839D3358;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_839D3358:
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// bgt cr6,0x839d336c
	if (cr6.gt) goto loc_839D336C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_839D336C:
	// stw r6,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d3110
	ctx.lr = 0x839D3378;
	sub_839D3110(ctx, base);
loc_839D3378:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3380"))) PPC_WEAK_FUNC(sub_839D3380);
PPC_FUNC_IMPL(__imp__sub_839D3380) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D33A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,312(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// bl 0x839d3110
	ctx.lr = 0x839D33BC;
	sub_839D3110(ctx, base);
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

__attribute__((alias("__imp__sub_839D33D0"))) PPC_WEAK_FUNC(sub_839D33D0);
PPC_FUNC_IMPL(__imp__sub_839D33D0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D33EC;
	sub_82D19A68(ctx, base);
	// li r4,-4370
	ctx.r4.s64 = -4370;
	// bl 0x83545640
	ctx.lr = 0x839D33F4;
	sub_83545640(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D33FC;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839D340C;
	sub_8399FE30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// bl 0x839caba8
	ctx.lr = 0x839D341C;
	sub_839CABA8(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// bl 0x839d3110
	ctx.lr = 0x839D3434;
	sub_839D3110(ctx, base);
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

__attribute__((alias("__imp__sub_839D344C"))) PPC_WEAK_FUNC(sub_839D344C);
PPC_FUNC_IMPL(__imp__sub_839D344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3450"))) PPC_WEAK_FUNC(sub_839D3450);
PPC_FUNC_IMPL(__imp__sub_839D3450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x839d3468
	if (cr6.eq) goto loc_839D3468;
loc_839D3460:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_839D3468:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839d3460
	if (!cr6.eq) goto loc_839D3460;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_839D3484:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x839d3460
	if (!cr6.eq) goto loc_839D3460;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x839d3484
	if (cr6.lt) goto loc_839D3484;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D34AC"))) PPC_WEAK_FUNC(sub_839D34AC);
PPC_FUNC_IMPL(__imp__sub_839D34AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D34B0"))) PPC_WEAK_FUNC(sub_839D34B0);
PPC_FUNC_IMPL(__imp__sub_839D34B0) {
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
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D34E0;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14976
	ctx.r9.s64 = ctx.r11.s64 + 14976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// addi r9,r31,180
	ctx.r9.s64 = ctx.r31.s64 + 180;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// bl 0x82d195d8
	ctx.lr = 0x839D3544;
	sub_82D195D8(ctx, base);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,-31288
	ctx.r30.s64 = ctx.r7.s64 + -31288;
	// lwz r4,-31288(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31288);
	// bl 0x82d20ae0
	ctx.lr = 0x839D3558;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x839D3568;
	sub_82D23390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839D357C;
	sub_839CB540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x839D3584;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x839D3594;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x839D35A4;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_839D35C0"))) PPC_WEAK_FUNC(sub_839D35C0);
PPC_FUNC_IMPL(__imp__sub_839D35C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839D35D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839d35d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839D35D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D35E0"))) PPC_WEAK_FUNC(sub_839D35E0);
PPC_FUNC_IMPL(__imp__sub_839D35E0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12324
	xer.ca = ctx.r11.u32 > 12323;
	ctx.r11.s64 = ctx.r11.s64 + -12324;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839d361c
	if (cr0.eq) goto loc_839D361C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839d3634
	if (!cr6.eq) goto loc_839D3634;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x839d3620
	goto loc_839D3620;
loc_839D361C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_839D3620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D3634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D3634:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D3640;
	sub_839CAE30(ctx, base);
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

__attribute__((alias("__imp__sub_839D3658"))) PPC_WEAK_FUNC(sub_839D3658);
PPC_FUNC_IMPL(__imp__sub_839D3658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D3660;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x839D368C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d36b0
	if (cr6.eq) goto loc_839D36B0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d34b0
	ctx.lr = 0x839D36A8;
	sub_839D34B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839D36B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D36BC"))) PPC_WEAK_FUNC(sub_839D36BC);
PPC_FUNC_IMPL(__imp__sub_839D36BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D36C0"))) PPC_WEAK_FUNC(sub_839D36C0);
PPC_FUNC_IMPL(__imp__sub_839D36C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D36C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// beq cr6,0x839d3728
	if (cr6.eq) goto loc_839D3728;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x839D3714;
	sub_82D042A8(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x839D3728;
	sub_825A1DA8(ctx, base);
loc_839D3728:
	// lwz r4,184(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 184);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r28,r11,14876
	ctx.r28.s64 = ctx.r11.s64 + 14876;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x839d3788
	if (cr6.eq) goto loc_839D3788;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x839D3744;
	sub_82D042A8(ctx, base);
	// addi r6,r28,-322
	ctx.r6.s64 = ctx.r28.s64 + -322;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x839D375C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839d3774
	if (cr6.eq) goto loc_839D3774;
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x839D3774;
	sub_825A1EB8(ctx, base);
loc_839D3774:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x839D3788;
	sub_825A1DA8(ctx, base);
loc_839D3788:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D3790;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D37A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x839D37B8;
	sub_82D291E0(ctx, base);
	// lwz r9,180(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// lwz r8,184(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 184);
	// li r25,2
	ctx.r25.s64 = 2;
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r9,160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 160, ctx.r9.u32);
	// stw r8,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r8.u32);
	// blt cr6,0x839d37e8
	if (cr6.lt) goto loc_839D37E8;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x839D37E8;
	sub_825952B8(ctx, base);
loc_839D37E8:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x839d3810
	if (cr6.lt) goto loc_839D3810;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x839D3810;
	sub_825952B8(ctx, base);
loc_839D3810:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x839d3838
	if (cr6.lt) goto loc_839D3838;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839D3838;
	sub_825952B8(ctx, base);
loc_839D3838:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d19a68
	ctx.lr = 0x839D384C;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D3864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r30,r26,188
	ctx.r30.s64 = ctx.r26.s64 + 188;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_839D3878:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r4,r28,-321
	ctx.r4.s64 = ctx.r28.s64 + -321;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x839D3894;
	sub_8259CC28(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x839d38a8
	if (cr6.eq) goto loc_839D38A8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d04220
	ctx.lr = 0x839D38A8;
	sub_82D04220(ctx, base);
loc_839D38A8:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825a1da8
	ctx.lr = 0x839D38BC;
	sub_825A1DA8(ctx, base);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825a1eb8
	ctx.lr = 0x839D38CC;
	sub_825A1EB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,-20(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20, ctx.r11.u32);
	// blt cr6,0x839d38f0
	if (cr6.lt) goto loc_839D38F0;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x839D38F0;
	sub_825952B8(ctx, base);
loc_839D38F0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bne 0x839d3878
	if (!cr0.eq) goto loc_839D3878;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D3910;
	sub_82D19A68(ctx, base);
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
	ctx.lr = 0x839D3928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d3940
	if (cr6.eq) goto loc_839D3940;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82d291e0
	ctx.lr = 0x839D3940;
	sub_82D291E0(ctx, base);
loc_839D3940:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839d395c
	if (cr6.lt) goto loc_839D395C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x839D395C;
	sub_825952B8(ctx, base);
loc_839D395C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3964"))) PPC_WEAK_FUNC(sub_839D3964);
PPC_FUNC_IMPL(__imp__sub_839D3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3968"))) PPC_WEAK_FUNC(sub_839D3968);
PPC_FUNC_IMPL(__imp__sub_839D3968) {
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
	// bl 0x82d199d0
	ctx.lr = 0x839D3984;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D398C;
	sub_82D19A68(ctx, base);
	// li r4,-4369
	ctx.r4.s64 = -4369;
	// bl 0x83545640
	ctx.lr = 0x839D3994;
	sub_83545640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d36c0
	ctx.lr = 0x839D399C;
	sub_839D36C0(ctx, base);
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

__attribute__((alias("__imp__sub_839D39B0"))) PPC_WEAK_FUNC(sub_839D39B0);
PPC_FUNC_IMPL(__imp__sub_839D39B0) {
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
	// bl 0x839cb000
	ctx.lr = 0x839D39C8;
	sub_839CB000(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x839d3450
	ctx.lr = 0x839D39D4;
	sub_839D3450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d39e8
	if (!cr6.eq) goto loc_839D39E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d36c0
	ctx.lr = 0x839D39E8;
	sub_839D36C0(ctx, base);
loc_839D39E8:
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

__attribute__((alias("__imp__sub_839D39FC"))) PPC_WEAK_FUNC(sub_839D39FC);
PPC_FUNC_IMPL(__imp__sub_839D39FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3A00"))) PPC_WEAK_FUNC(sub_839D3A00);
PPC_FUNC_IMPL(__imp__sub_839D3A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D3A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D3A24;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// addi r9,r11,15744
	ctx.r9.s64 = ctx.r11.s64 + 15744;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r5,-31144
	ctx.r30.s64 = ctx.r5.s64 + -31144;
	// lwz r4,-31144(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31144);
	// bl 0x82d20ae0
	ctx.lr = 0x839D3A60;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839D3A70;
	sub_82D23390(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,806
	ctx.r4.s64 = 806;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x839ab720
	ctx.lr = 0x839D3A8C;
	sub_839AB720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3A98"))) PPC_WEAK_FUNC(sub_839D3A98);
PPC_FUNC_IMPL(__imp__sub_839D3A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D3AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12300
	xer.ca = ctx.r11.u32 > 12299;
	ctx.r11.s64 = ctx.r11.s64 + -12300;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839d3adc
	if (cr0.eq) goto loc_839D3ADC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839d3ad4
	if (cr6.eq) goto loc_839D3AD4;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x839d3b00
	if (!cr6.eq) goto loc_839D3B00;
	// b 0x839d3af4
	goto loc_839D3AF4;
loc_839D3AD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x839d3ae0
	goto loc_839D3AE0;
loc_839D3ADC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_839D3AE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D3AF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D3AF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D3B00;
	sub_83103068(ctx, base);
loc_839D3B00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3B0C"))) PPC_WEAK_FUNC(sub_839D3B0C);
PPC_FUNC_IMPL(__imp__sub_839D3B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3B10"))) PPC_WEAK_FUNC(sub_839D3B10);
PPC_FUNC_IMPL(__imp__sub_839D3B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D3B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D3B28;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d3bb0
	if (cr6.eq) goto loc_839D3BB0;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r10,r11,42
	ctx.r10.s64 = ctx.r11.s64 + 42;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x839a8648
	ctx.lr = 0x839D3B4C;
	sub_839A8648(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,264
	ctx.r7.s64 = 17301504;
	// addi r29,r8,21716
	ctx.r29.s64 = ctx.r8.s64 + 21716;
	// ori r6,r7,12336
	ctx.r6.u64 = ctx.r7.u64 | 12336;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D3B80;
	sub_83103068(ctx, base);
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// ori r11,r4,12356
	ctx.r11.u64 = ctx.r4.u64 | 12356;
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D3BB0;
	sub_83103068(ctx, base);
loc_839D3BB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3BB8"))) PPC_WEAK_FUNC(sub_839D3BB8);
PPC_FUNC_IMPL(__imp__sub_839D3BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D3BC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82595718
	ctx.lr = 0x839D3BFC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d3c30
	if (cr6.eq) goto loc_839D3C30;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d3a00
	ctx.lr = 0x839D3C28;
	sub_839D3A00(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_839D3C30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3C3C"))) PPC_WEAK_FUNC(sub_839D3C3C);
PPC_FUNC_IMPL(__imp__sub_839D3C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3C40"))) PPC_WEAK_FUNC(sub_839D3C40);
PPC_FUNC_IMPL(__imp__sub_839D3C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82d19bb0
	ctx.lr = 0x839D3C58;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d3b10
	ctx.lr = 0x839D3C64;
	sub_839D3B10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,12337
	ctx.r10.u64 = ctx.r10.u64 | 12337;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83103068
	ctx.lr = 0x839D3C94;
	sub_83103068(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839D3CA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839D3CBC"))) PPC_WEAK_FUNC(sub_839D3CBC);
PPC_FUNC_IMPL(__imp__sub_839D3CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3CC0"))) PPC_WEAK_FUNC(sub_839D3CC0);
PPC_FUNC_IMPL(__imp__sub_839D3CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r4,164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839d3b10
	ctx.lr = 0x839D3CDC;
	sub_839D3B10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,12337
	ctx.r10.u64 = ctx.r10.u64 | 12337;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83103068
	ctx.lr = 0x839D3D0C;
	sub_83103068(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839D3D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839D3D34"))) PPC_WEAK_FUNC(sub_839D3D34);
PPC_FUNC_IMPL(__imp__sub_839D3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D3D38"))) PPC_WEAK_FUNC(sub_839D3D38);
PPC_FUNC_IMPL(__imp__sub_839D3D38) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x839d3b10
	sub_839D3B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D3D40"))) PPC_WEAK_FUNC(sub_839D3D40);
PPC_FUNC_IMPL(__imp__sub_839D3D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x839D3D48;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D3D58;
	sub_82D19A68(ctx, base);
	// li r4,-4370
	ctx.r4.s64 = -4370;
	// bl 0x83545640
	ctx.lr = 0x839D3D60;
	sub_83545640(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D3D68;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839D3D70;
	sub_82D33DB0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4000
	if (cr6.eq) goto loc_839D4000;
	// bl 0x8399f8b8
	ctx.lr = 0x839D3D80;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4000
	if (cr6.eq) goto loc_839D4000;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D3D90;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839D3D98;
	sub_8399F988(ctx, base);
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D3DA4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839D3DB8;
	sub_8399F8B8(ctx, base);
	// mulli r10,r31,528
	ctx.r10.s64 = ctx.r31.s64 * 528;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r23,r11,1072
	ctx.r23.s64 = ctx.r11.s64 + 1072;
	// bl 0x8399f8b8
	ctx.lr = 0x839D3DCC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399f6e8
	ctx.lr = 0x839D3DE4;
	sub_8399F6E8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-255
	ctx.r10.s64 = ctx.r11.s64 + -255;
	// li r4,18
	ctx.r4.s64 = 18;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// addi r3,r20,100
	ctx.r3.s64 = ctx.r20.s64 + 100;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r7,r11
	ctx.r26.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bl 0x82d2d510
	ctx.lr = 0x839D3E08;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4000
	if (cr6.eq) goto loc_839D4000;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8399ea10
	ctx.lr = 0x839D3E34;
	sub_8399EA10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x839ab078
	ctx.lr = 0x839D3E48;
	sub_839AB078(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839D3E5C;
	sub_82D291E0(ctx, base);
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D3E64;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839D3E74;
	sub_8399FE30(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// addi r21,r30,168
	ctx.r21.s64 = ctx.r30.s64 + 168;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r28,r11,15652
	ctx.r28.s64 = ctx.r11.s64 + 15652;
	// addi r22,r10,16072
	ctx.r22.s64 = ctx.r10.s64 + 16072;
loc_839D3E94:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D3EA0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d400c
	if (cr6.eq) goto loc_839D400C;
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(ctx.r29.s32, 13, xer);
	// bge cr6,0x839d3fac
	if (!cr6.lt) goto loc_839D3FAC;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D3ED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d400c
	if (cr6.eq) goto loc_839D400C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d39310
	ctx.lr = 0x839D3EE4;
	sub_82D39310(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D3EFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d400c
	if (cr6.eq) goto loc_839D400C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// bl 0x82d29598
	ctx.lr = 0x839D3F10;
	sub_82D29598(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D3F28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d400c
	if (cr6.eq) goto loc_839D400C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839D3F40;
	sub_8399EA10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x839a0478
	ctx.lr = 0x839D3F50;
	sub_839A0478(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8399f0f0
	ctx.lr = 0x839D3F5C;
	sub_8399F0F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrldi r4,r11,56
	ctx.r4.u64 = ctx.r11.u64 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x839D3F6C;
	sub_82D294D0(ctx, base);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// clrlwi r5,r24,24
	ctx.r5.u64 = ctx.r24.u32 & 0xFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82acc960
	ctx.lr = 0x839D3F80;
	sub_82ACC960(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// bne cr6,0x839d3fd0
	if (!cr6.eq) goto loc_839D3FD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ebf8
	ctx.lr = 0x839D3FA4;
	sub_82D1EBF8(ctx, base);
	// stw r25,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r25.u32);
	// b 0x839d3fd0
	goto loc_839D3FD0;
loc_839D3FAC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839D3FC0;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D3FD0;
	sub_82D2AEC8(ctx, base);
loc_839D3FD0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// blt cr6,0x839d3e94
	if (cr6.lt) goto loc_839D3E94;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839d4000
	if (cr6.lt) goto loc_839D4000;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839D4000;
	sub_825952B8(ctx, base);
loc_839D4000:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_839D400C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839D4014;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D4020"))) PPC_WEAK_FUNC(sub_839D4020);
PPC_FUNC_IMPL(__imp__sub_839D4020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r4,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r4.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-30992
	ctx.r8.s64 = ctx.r10.s64 + -30992;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839D4058"))) PPC_WEAK_FUNC(sub_839D4058);
PPC_FUNC_IMPL(__imp__sub_839D4058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D405C"))) PPC_WEAK_FUNC(sub_839D405C);
PPC_FUNC_IMPL(__imp__sub_839D405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4060"))) PPC_WEAK_FUNC(sub_839D4060);
PPC_FUNC_IMPL(__imp__sub_839D4060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d4088
	if (cr6.eq) goto loc_839D4088;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
loc_839D4088:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// b 0x82d2aec8
	sub_82D2AEC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D4098"))) PPC_WEAK_FUNC(sub_839D4098);
PPC_FUNC_IMPL(__imp__sub_839D4098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D40A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x839a9ec0
	ctx.lr = 0x839D40B8;
	sub_839A9EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d40cc
	if (!cr6.eq) goto loc_839D40CC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x839d40e0
	if (!cr6.eq) goto loc_839D40E0;
loc_839D40CC:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d40e0
	if (cr6.eq) goto loc_839D40E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x839D40E0;
	sub_8337F1E0(ctx, base);
loc_839D40E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D40E8"))) PPC_WEAK_FUNC(sub_839D40E8);
PPC_FUNC_IMPL(__imp__sub_839D40E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D40F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d419c
	if (cr6.eq) goto loc_839D419C;
	// bl 0x839aaa10
	ctx.lr = 0x839D4110;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// addi r31,r11,16576
	ctx.r31.s64 = ctx.r11.s64 + 16576;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x839d4150
	if (!cr6.eq) goto loc_839D4150;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
loc_839D4150:
	// bctrl 
	ctx.lr = 0x839D4154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D4170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d4190
	if (cr6.eq) goto loc_839D4190;
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// ori r4,r4,251
	ctx.r4.u64 = ctx.r4.u64 | 251;
	// bl 0x82d29598
	ctx.lr = 0x839D4188;
	sub_82D29598(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D4190:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,53
	ctx.r4.u64 = ctx.r4.u64 | 53;
	// bl 0x82d29598
	ctx.lr = 0x839D419C;
	sub_82D29598(ctx, base);
loc_839D419C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D41A4"))) PPC_WEAK_FUNC(sub_839D41A4);
PPC_FUNC_IMPL(__imp__sub_839D41A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D41A8"))) PPC_WEAK_FUNC(sub_839D41A8);
PPC_FUNC_IMPL(__imp__sub_839D41A8) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r10,-264
	ctx.r10.s64 = ctx.r10.s64 + -17301504;
	// addi r10,r10,-12298
	ctx.r10.s64 = ctx.r10.s64 + -12298;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x839d426c
	if (cr6.gt) goto loc_839D426C;
	// lis r12,-31843
	ctx.r12.s64 = -2086862848;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16868
	ctx.r12.s64 = ctx.r12.s64 + 16868;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_839D4224;
	case 1:
		goto loc_839D424C;
	case 2:
		goto loc_839D426C;
	case 3:
		goto loc_839D426C;
	case 4:
		goto loc_839D426C;
	case 5:
		goto loc_839D426C;
	case 6:
		goto loc_839D426C;
	case 7:
		goto loc_839D426C;
	case 8:
		goto loc_839D426C;
	case 9:
		goto loc_839D426C;
	case 10:
		goto loc_839D426C;
	case 11:
		goto loc_839D426C;
	case 12:
		goto loc_839D426C;
	case 13:
		goto loc_839D426C;
	case 14:
		goto loc_839D424C;
	case 15:
		goto loc_839D4224;
	default:
		return;
	}
	// lwz r28,16932(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16932);
	// lwz r28,16972(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16972);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,17004(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17004);
	// lwz r28,16972(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16972);
	// lwz r28,16932(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16932);
loc_839D4224:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d426c
	if (cr6.eq) goto loc_839D426C;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839D424C:
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d426c
	if (cr6.eq) goto loc_839D426C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839D426C;
	sub_82D2AEC8(ctx, base);
loc_839D426C:
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

__attribute__((alias("__imp__sub_839D4280"))) PPC_WEAK_FUNC(sub_839D4280);
PPC_FUNC_IMPL(__imp__sub_839D4280) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d42ac
	if (cr6.eq) goto loc_839D42AC;
	// bl 0x82d49a78
	ctx.lr = 0x839D42A4;
	sub_82D49A78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_839D42AC:
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

__attribute__((alias("__imp__sub_839D42C4"))) PPC_WEAK_FUNC(sub_839D42C4);
PPC_FUNC_IMPL(__imp__sub_839D42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D42C8"))) PPC_WEAK_FUNC(sub_839D42C8);
PPC_FUNC_IMPL(__imp__sub_839D42C8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d438c
	if (!cr6.eq) goto loc_839D438C;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r3,-30996(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30996);
	// bl 0x83815a48
	ctx.lr = 0x839D42F8;
	sub_83815A48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d438c
	if (cr6.eq) goto loc_839D438C;
	// bl 0x82d4b8e0
	ctx.lr = 0x839D4308;
	sub_82D4B8E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839d4320
	if (!cr6.eq) goto loc_839D4320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83815558
	ctx.lr = 0x839D431C;
	sub_83815558(ctx, base);
	// b 0x839d438c
	goto loc_839D438C;
loc_839D4320:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839D4330;
	sub_82D2AEC8(ctx, base);
	// li r4,-4416
	ctx.r4.s64 = -4416;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83545640
	ctx.lr = 0x839D433C;
	sub_83545640(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r10,16592
	ctx.r4.s64 = ctx.r10.s64 + 16592;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D435C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,104(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839D4384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28248
	ctx.lr = 0x839D438C;
	sub_82D28248(ctx, base);
loc_839D438C:
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

__attribute__((alias("__imp__sub_839D43A4"))) PPC_WEAK_FUNC(sub_839D43A4);
PPC_FUNC_IMPL(__imp__sub_839D43A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D43A8"))) PPC_WEAK_FUNC(sub_839D43A8);
PPC_FUNC_IMPL(__imp__sub_839D43A8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4444
	if (cr6.eq) goto loc_839D4444;
	// bl 0x82d51e00
	ctx.lr = 0x839D43D0;
	sub_82D51E00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4444
	if (cr6.eq) goto loc_839D4444;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
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
	// bl 0x82d51e00
	ctx.lr = 0x839D43F0;
	sub_82D51E00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d514e0
	ctx.lr = 0x839D43FC;
	sub_82D514E0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D4414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x839d4428
	if (!cr6.gt) goto loc_839D4428;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839D4428:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839d4444
	if (!cr6.eq) goto loc_839D4444;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x839D4444;
	sub_82D2AEC8(ctx, base);
loc_839D4444:
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

__attribute__((alias("__imp__sub_839D445C"))) PPC_WEAK_FUNC(sub_839D445C);
PPC_FUNC_IMPL(__imp__sub_839D445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4460"))) PPC_WEAK_FUNC(sub_839D4460);
PPC_FUNC_IMPL(__imp__sub_839D4460) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x839D448C;
	sub_82D253F8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16696
	ctx.r9.s64 = ctx.r11.s64 + 16696;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x839d42c8
	ctx.lr = 0x839D44CC;
	sub_839D42C8(ctx, base);
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

__attribute__((alias("__imp__sub_839D44E8"))) PPC_WEAK_FUNC(sub_839D44E8);
PPC_FUNC_IMPL(__imp__sub_839D44E8) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16696
	ctx.r9.s64 = ctx.r11.s64 + 16696;
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
	ctx.lr = 0x839D4520;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d4538
	if (cr6.eq) goto loc_839D4538;
	// bl 0x82416268
	ctx.lr = 0x839D4534;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839D4538:
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

__attribute__((alias("__imp__sub_839D4550"))) PPC_WEAK_FUNC(sub_839D4550);
PPC_FUNC_IMPL(__imp__sub_839D4550) {
	PPC_FUNC_PROLOGUE();
	// b 0x839d43a8
	sub_839D43A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D4554"))) PPC_WEAK_FUNC(sub_839D4554);
PPC_FUNC_IMPL(__imp__sub_839D4554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4558"))) PPC_WEAK_FUNC(sub_839D4558);
PPC_FUNC_IMPL(__imp__sub_839D4558) {
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
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839D458C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d45a4
	if (cr6.eq) goto loc_839D45A4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d4460
	ctx.lr = 0x839D45A0;
	sub_839D4460(ctx, base);
	// b 0x839d45a8
	goto loc_839D45A8;
loc_839D45A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839D45A8:
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

__attribute__((alias("__imp__sub_839D45C0"))) PPC_WEAK_FUNC(sub_839D45C0);
PPC_FUNC_IMPL(__imp__sub_839D45C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19858
	ctx.lr = 0x839D45DC;
	sub_82D19858(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D45F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d199d0
	ctx.lr = 0x839D4600;
	sub_82D199D0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r9,21716
	ctx.r7.s64 = ctx.r9.s64 + 21716;
	// ori r8,r8,12301
	ctx.r8.u64 = ctx.r8.u64 | 12301;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D4630;
	sub_83103068(ctx, base);
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

__attribute__((alias("__imp__sub_839D4644"))) PPC_WEAK_FUNC(sub_839D4644);
PPC_FUNC_IMPL(__imp__sub_839D4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4648"))) PPC_WEAK_FUNC(sub_839D4648);
PPC_FUNC_IMPL(__imp__sub_839D4648) {
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
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x839d48f4
	if (cr6.gt) goto loc_839D48F4;
	// lis r12,-31843
	ctx.r12.s64 = -2086862848;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18056
	ctx.r12.s64 = ctx.r12.s64 + 18056;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839D4704;
	case 1:
		goto loc_839D4704;
	case 2:
		goto loc_839D48F4;
	case 3:
		goto loc_839D48F4;
	case 4:
		goto loc_839D48F4;
	case 5:
		goto loc_839D48F4;
	case 6:
		goto loc_839D4860;
	case 7:
		goto loc_839D4734;
	case 8:
		goto loc_839D4794;
	case 9:
		goto loc_839D4794;
	case 10:
		goto loc_839D48F4;
	case 11:
		goto loc_839D4704;
	case 12:
		goto loc_839D4860;
	case 13:
		goto loc_839D4704;
	case 14:
		goto loc_839D4860;
	case 15:
		goto loc_839D4860;
	case 16:
		goto loc_839D47DC;
	case 17:
		goto loc_839D4808;
	case 18:
		goto loc_839D48F4;
	case 19:
		goto loc_839D4860;
	case 20:
		goto loc_839D4860;
	case 21:
		goto loc_839D4860;
	case 22:
		goto loc_839D48F4;
	case 23:
		goto loc_839D489C;
	case 24:
		goto loc_839D4704;
	case 25:
		goto loc_839D48F4;
	case 26:
		goto loc_839D4704;
	case 27:
		goto loc_839D48C8;
	case 28:
		goto loc_839D48F4;
	case 29:
		goto loc_839D4704;
	case 30:
		goto loc_839D4878;
	default:
		return;
	}
	// lwz r28,18180(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18180);
	// lwz r28,18180(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18180);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18528(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18528);
	// lwz r28,18228(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18228);
	// lwz r28,18324(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18324);
	// lwz r28,18324(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18324);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18180(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18180);
	// lwz r28,18528(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18528);
	// lwz r28,18180(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18180);
	// lwz r28,18528(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18528);
	// lwz r28,18528(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18528);
	// lwz r28,18396(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18396);
	// lwz r28,18440(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18440);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18528(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18528);
	// lwz r28,18528(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18528);
	// lwz r28,18528(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18528);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18588(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18588);
	// lwz r28,18180(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18180);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18180(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18180);
	// lwz r28,18632(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18632);
	// lwz r28,18676(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18676);
	// lwz r28,18180(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18180);
	// lwz r28,18552(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18552);
loc_839D4704:
	// bl 0x830ff290
	ctx.lr = 0x839D4708;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D470C;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-21
	ctx.r11.s64 = ctx.r3.s64 + -21;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839D4720;
	sub_839AAA10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d48f4
	if (cr6.eq) goto loc_839D48F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839d48f4
	goto loc_839D48F4;
loc_839D4734:
	// bl 0x8308e078
	ctx.lr = 0x839D4738;
	sub_8308E078(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839D4750;
	sub_839AAA10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 & ctx.r31.u64;
	// bl 0x830ff290
	ctx.lr = 0x839D4764;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D4768;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-21
	ctx.r11.s64 = ctx.r3.s64 + -21;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x830ff290
	ctx.lr = 0x839D477C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839D4780;
	sub_830FF988(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d48f4
	if (cr6.eq) goto loc_839D48F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839d48f8
	goto loc_839D48F8;
loc_839D4794:
	// bl 0x8308e078
	ctx.lr = 0x839D4798;
	sub_8308E078(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839D47B0;
	sub_839AAA10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 & ctx.r31.u64;
	// bl 0x830ff290
	ctx.lr = 0x839D47C4;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839D47C8;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d48f4
	if (cr6.eq) goto loc_839D48F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839d48f8
	goto loc_839D48F8;
loc_839D47DC:
	// bl 0x839a9dd0
	ctx.lr = 0x839D47E0;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839D47F4;
	sub_839AAA10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d48f4
	if (cr6.eq) goto loc_839D48F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839d48f4
	goto loc_839D48F4;
loc_839D4808:
	// bl 0x830ff290
	ctx.lr = 0x839D480C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D4810;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-21
	ctx.r11.s64 = ctx.r3.s64 + -21;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839D4824;
	sub_839AAA10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r30,100(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 & ctx.r31.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D483C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f760
	ctx.lr = 0x839D484C;
	sub_8399F760(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839d48f4
	if (!cr6.eq) goto loc_839D48F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839d48f4
	goto loc_839D48F4;
loc_839D4860:
	// bl 0x839aaa10
	ctx.lr = 0x839D4864;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d48f4
	if (cr6.eq) goto loc_839D48F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839d48f4
	goto loc_839D48F4;
loc_839D4878:
	// bl 0x830ff290
	ctx.lr = 0x839D487C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D4880;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839d4898
	if (!cr6.eq) goto loc_839D4898;
	// bl 0x8399f8b8
	ctx.lr = 0x839D488C;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839d489c
	if (cr6.eq) goto loc_839D489C;
loc_839D4898:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839D489C:
	// bl 0x839aaa10
	ctx.lr = 0x839D48A0;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x839a9a80
	ctx.lr = 0x839D48B4;
	sub_839A9A80(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d48f4
	if (cr6.eq) goto loc_839D48F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839d48f4
	goto loc_839D48F4;
loc_839D48C8:
	// bl 0x830ff290
	ctx.lr = 0x839D48CC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D48D0;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-21
	ctx.r11.s64 = ctx.r3.s64 + -21;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839D48E4;
	sub_839AAA10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 & ctx.r31.u64;
loc_839D48F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839D48F8:
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

__attribute__((alias("__imp__sub_839D4910"))) PPC_WEAK_FUNC(sub_839D4910);
PPC_FUNC_IMPL(__imp__sub_839D4910) {
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
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r8,r10,17328
	ctx.r8.s64 = ctx.r10.s64 + 17328;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bgt cr6,0x839d49c4
	if (cr6.gt) goto loc_839D49C4;
	// beq cr6,0x839d4998
	if (cr6.eq) goto loc_839D4998;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x839d496c
	if (cr6.eq) goto loc_839D496C;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x839d49cc
	if (cr6.eq) goto loc_839D49CC;
loc_839D4954:
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
loc_839D496C:
	// bl 0x839aaa10
	ctx.lr = 0x839D4970;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4954
	if (cr6.eq) goto loc_839D4954;
	// lis r3,21
	ctx.r3.s64 = 1376256;
	// ori r3,r3,58
	ctx.r3.u64 = ctx.r3.u64 | 58;
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
loc_839D4998:
	// bl 0x839aaa10
	ctx.lr = 0x839D499C;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4954
	if (cr6.eq) goto loc_839D4954;
	// lis r3,21
	ctx.r3.s64 = 1376256;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
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
loc_839D49C4:
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bne cr6,0x839d4954
	if (!cr6.eq) goto loc_839D4954;
loc_839D49CC:
	// bl 0x839aaa10
	ctx.lr = 0x839D49D0;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4954
	if (cr6.eq) goto loc_839D4954;
	// lis r3,21
	ctx.r3.s64 = 1376256;
	// ori r3,r3,67
	ctx.r3.u64 = ctx.r3.u64 | 67;
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

__attribute__((alias("__imp__sub_839D49F8"))) PPC_WEAK_FUNC(sub_839D49F8);
PPC_FUNC_IMPL(__imp__sub_839D49F8) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,17328
	ctx.r9.s64 = ctx.r9.s64 + 17328;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bgt cr6,0x839d4b00
	if (cr6.gt) goto loc_839D4B00;
	// beq cr6,0x839d4ae4
	if (cr6.eq) goto loc_839D4AE4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x839d4ac8
	if (cr6.eq) goto loc_839D4AC8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x839d4a94
	if (cr6.eq) goto loc_839D4A94;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bne cr6,0x839d4b44
	if (!cr6.eq) goto loc_839D4B44;
	// bl 0x830ff290
	ctx.lr = 0x839D4A50;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D4A54;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839d4a78
	if (!cr6.eq) goto loc_839D4A78;
	// bl 0x839a9dd0
	ctx.lr = 0x839D4A60;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r31,210
	ctx.r31.s64 = 13762560;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d4a8c
	if (!cr6.eq) goto loc_839D4A8C;
	// ori r31,r31,141
	ctx.r31.u64 = ctx.r31.u64 | 141;
	// b 0x839d4b44
	goto loc_839D4B44;
loc_839D4A78:
	// bl 0x839aaa10
	ctx.lr = 0x839D4A7C;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4b44
	if (cr6.eq) goto loc_839D4B44;
	// lis r31,210
	ctx.r31.s64 = 13762560;
loc_839D4A8C:
	// ori r31,r31,161
	ctx.r31.u64 = ctx.r31.u64 | 161;
	// b 0x839d4b44
	goto loc_839D4B44;
loc_839D4A94:
	// bl 0x830ff290
	ctx.lr = 0x839D4A98;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D4A9C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839d4ab0
	if (!cr6.eq) goto loc_839D4AB0;
	// lis r31,210
	ctx.r31.s64 = 13762560;
	// ori r31,r31,153
	ctx.r31.u64 = ctx.r31.u64 | 153;
	// b 0x839d4b44
	goto loc_839D4B44;
loc_839D4AB0:
	// bl 0x839a9cd8
	ctx.lr = 0x839D4AB4;
	sub_839A9CD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839d4b44
	if (!cr6.eq) goto loc_839D4B44;
	// lis r31,210
	ctx.r31.s64 = 13762560;
	// ori r31,r31,134
	ctx.r31.u64 = ctx.r31.u64 | 134;
	// b 0x839d4b44
	goto loc_839D4B44;
loc_839D4AC8:
	// bl 0x839aaa10
	ctx.lr = 0x839D4ACC;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4b44
	if (cr6.eq) goto loc_839D4B44;
	// lis r31,210
	ctx.r31.s64 = 13762560;
	// ori r31,r31,165
	ctx.r31.u64 = ctx.r31.u64 | 165;
	// b 0x839d4b44
	goto loc_839D4B44;
loc_839D4AE4:
	// bl 0x839aaa10
	ctx.lr = 0x839D4AE8;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4b44
	if (cr6.eq) goto loc_839D4B44;
	// lis r31,210
	ctx.r31.s64 = 13762560;
	// ori r31,r31,160
	ctx.r31.u64 = ctx.r31.u64 | 160;
	// b 0x839d4b44
	goto loc_839D4B44;
loc_839D4B00:
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// beq cr6,0x839d4b2c
	if (cr6.eq) goto loc_839D4B2C;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// bne cr6,0x839d4b44
	if (!cr6.eq) goto loc_839D4B44;
	// bl 0x830ff290
	ctx.lr = 0x839D4B14;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D4B18;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839d4b44
	if (!cr6.eq) goto loc_839D4B44;
	// lis r31,210
	ctx.r31.s64 = 13762560;
	// ori r31,r31,166
	ctx.r31.u64 = ctx.r31.u64 | 166;
	// b 0x839d4b44
	goto loc_839D4B44;
loc_839D4B2C:
	// bl 0x830ff290
	ctx.lr = 0x839D4B30;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839D4B34;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839d4b44
	if (!cr6.eq) goto loc_839D4B44;
	// lis r31,210
	ctx.r31.s64 = 13762560;
	// ori r31,r31,143
	ctx.r31.u64 = ctx.r31.u64 | 143;
loc_839D4B44:
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

__attribute__((alias("__imp__sub_839D4B5C"))) PPC_WEAK_FUNC(sub_839D4B5C);
PPC_FUNC_IMPL(__imp__sub_839D4B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4B60"))) PPC_WEAK_FUNC(sub_839D4B60);
PPC_FUNC_IMPL(__imp__sub_839D4B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D4B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,204(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,208(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r28,r3,204
	ctx.r28.s64 = ctx.r3.s64 + 204;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d4ba4
	if (cr6.eq) goto loc_839D4BA4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D4B9C;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_839D4BA4:
	// lwz r31,220(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r29,r30,220
	ctx.r29.s64 = ctx.r30.s64 + 220;
	// lwz r4,224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d4bd8
	if (cr6.eq) goto loc_839D4BD8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D4BD0;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_839D4BD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D4BE4"))) PPC_WEAK_FUNC(sub_839D4BE4);
PPC_FUNC_IMPL(__imp__sub_839D4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4BE8"))) PPC_WEAK_FUNC(sub_839D4BE8);
PPC_FUNC_IMPL(__imp__sub_839D4BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D4BF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d19a78
	ctx.lr = 0x839D4C08;
	sub_82D19A78(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x839D4C0C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4c74
	if (cr6.eq) goto loc_839D4C74;
loc_839D4C14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D4C1C;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D4C24;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4c5c
	if (cr6.eq) goto loc_839D4C5C;
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// li r6,2
	ctx.r6.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839D4C4C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D4C5C;
	sub_82D2AEC8(ctx, base);
loc_839D4C5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d19a78
	ctx.lr = 0x839D4C68;
	sub_82D19A78(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x839D4C6C;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x839d4c14
	if (cr6.lt) goto loc_839D4C14;
loc_839D4C74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,164(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x839d4910
	ctx.lr = 0x839D4C80;
	sub_839D4910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839cb928
	ctx.lr = 0x839D4C8C;
	sub_839CB928(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D4C94"))) PPC_WEAK_FUNC(sub_839D4C94);
PPC_FUNC_IMPL(__imp__sub_839D4C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4C98"))) PPC_WEAK_FUNC(sub_839D4C98);
PPC_FUNC_IMPL(__imp__sub_839D4C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839D4CA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D4CB4;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// addi r9,r11,17928
	ctx.r9.s64 = ctx.r11.s64 + 17928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r25,r31,172
	ctx.r25.s64 = ctx.r31.s64 + 172;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r27,r31,188
	ctx.r27.s64 = ctx.r31.s64 + 188;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// addi r29,r31,220
	ctx.r29.s64 = ctx.r31.s64 + 220;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// addi r28,r31,204
	ctx.r28.s64 = ctx.r31.s64 + 204;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
loc_839D4D24:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d4648
	ctx.lr = 0x839D4D30;
	sub_839D4648(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4d4c
	if (cr6.eq) goto loc_839D4D4C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x839D4D48;
	sub_82AB5F20(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_839D4D4C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(ctx.r26.u32, 13, xer);
	// ble cr6,0x839d4d24
	if (!cr6.gt) goto loc_839D4D24;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d4d8c
	if (cr6.eq) goto loc_839D4D8C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D4D84;
	sub_831CE420(ctx, base);
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_839D4D8C:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d4dbc
	if (cr6.eq) goto loc_839D4DBC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D4DB4;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_839D4DBC:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d4dec
	if (cr6.eq) goto loc_839D4DEC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D4DE4;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
loc_839D4DEC:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-30836
	ctx.r29.s64 = ctx.r11.s64 + -30836;
	// lwz r4,-30836(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30836);
	// bl 0x82d20ae0
	ctx.lr = 0x839D4E00;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x839D4E10;
	sub_82D23390(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839D4E20;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839D4E30;
	sub_82D19788(ctx, base);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// stb r30,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r30.u8);
	// bl 0x839cb540
	ctx.lr = 0x839D4E44;
	sub_839CB540(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x839D4E48;
	sub_82D26ED8(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x82d26b18
	ctx.lr = 0x839D4E50;
	sub_82D26B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D4E5C"))) PPC_WEAK_FUNC(sub_839D4E5C);
PPC_FUNC_IMPL(__imp__sub_839D4E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4E60"))) PPC_WEAK_FUNC(sub_839D4E60);
PPC_FUNC_IMPL(__imp__sub_839D4E60) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,17928
	ctx.r9.s64 = ctx.r11.s64 + 17928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4ea0
	if (cr6.eq) goto loc_839D4EA0;
	// bl 0x82416268
	ctx.lr = 0x839D4EA0;
	sub_82416268(ctx, base);
loc_839D4EA0:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4ec0
	if (cr6.eq) goto loc_839D4EC0;
	// bl 0x82416268
	ctx.lr = 0x839D4EC0;
	sub_82416268(ctx, base);
loc_839D4EC0:
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4edc
	if (cr6.eq) goto loc_839D4EDC;
	// bl 0x82416268
	ctx.lr = 0x839D4EDC;
	sub_82416268(ctx, base);
loc_839D4EDC:
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d4ef8
	if (cr6.eq) goto loc_839D4EF8;
	// bl 0x82416268
	ctx.lr = 0x839D4EF8;
	sub_82416268(ctx, base);
loc_839D4EF8:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// addi r9,r11,-32704
	ctx.r9.s64 = ctx.r11.s64 + -32704;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x839D4F24;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x839D4F2C;
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

__attribute__((alias("__imp__sub_839D4F44"))) PPC_WEAK_FUNC(sub_839D4F44);
PPC_FUNC_IMPL(__imp__sub_839D4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D4F48"))) PPC_WEAK_FUNC(sub_839D4F48);
PPC_FUNC_IMPL(__imp__sub_839D4F48) {
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
	// bl 0x839d4e60
	ctx.lr = 0x839D4F68;
	sub_839D4E60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d4f80
	if (cr6.eq) goto loc_839D4F80;
	// bl 0x82416268
	ctx.lr = 0x839D4F7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839D4F80:
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

__attribute__((alias("__imp__sub_839D4F98"))) PPC_WEAK_FUNC(sub_839D4F98);
PPC_FUNC_IMPL(__imp__sub_839D4F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D4FA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x839D4FB0;
	sub_83102DB0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839d4be8
	ctx.lr = 0x839D4FBC;
	sub_839D4BE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D4FC4;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,17748
	ctx.r4.s64 = ctx.r11.s64 + 17748;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D4FE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D4FE8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839D4FF0;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x839D4FFC;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d508c
	if (cr6.eq) goto loc_839D508C;
	// addi r28,r26,204
	ctx.r28.s64 = ctx.r26.s64 + 204;
	// li r30,0
	ctx.r30.s64 = 0;
loc_839D500C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bge cr6,0x839d508c
	if (!cr6.lt) goto loc_839D508C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D5030;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839D5040;
	sub_82D2D510(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x839d50b8
	if (!cr6.gt) goto loc_839D50B8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x839d4910
	ctx.lr = 0x839D5068;
	sub_839D4910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D5074;
	sub_82D29598(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x82d33c10
	ctx.lr = 0x839D5084;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x839d500c
	if (cr6.lt) goto loc_839D500C;
loc_839D508C:
	// lwz r11,208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,204(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d20f50
	ctx.lr = 0x839D50B0;
	sub_82D20F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D50B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D50C4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_839D50C4"))) PPC_WEAK_FUNC(sub_839D50C4);
PPC_FUNC_IMPL(__imp__sub_839D50C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D50C8"))) PPC_WEAK_FUNC(sub_839D50C8);
PPC_FUNC_IMPL(__imp__sub_839D50C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D50D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,236
	ctx.r4.s64 = 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839D5104;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5130
	if (cr6.eq) goto loc_839D5130;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d4c98
	ctx.lr = 0x839D5128;
	sub_839D4C98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D5130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D513C"))) PPC_WEAK_FUNC(sub_839D513C);
PPC_FUNC_IMPL(__imp__sub_839D513C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D5140"))) PPC_WEAK_FUNC(sub_839D5140);
PPC_FUNC_IMPL(__imp__sub_839D5140) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x839d49f8
	ctx.lr = 0x839D5160;
	sub_839D49F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x839D516C;
	sub_82D042A8(ctx, base);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x839d51dc
	if (cr6.eq) goto loc_839D51DC;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bne cr6,0x839d5248
	if (!cr6.eq) goto loc_839D5248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d042a8
	ctx.lr = 0x839D51A4;
	sub_82D042A8(ctx, base);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,17836
	ctx.r4.s64 = ctx.r9.s64 + 17836;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a6b900
	ctx.lr = 0x839D51B8;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839D51CC;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x839D51D4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x839d5244
	goto loc_839D5244;
loc_839D51DC:
	// bl 0x839aaa10
	ctx.lr = 0x839D51E0;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d5248
	if (!cr6.eq) goto loc_839D5248;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// bl 0x82d042a8
	ctx.lr = 0x839D520C;
	sub_82D042A8(ctx, base);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r11,r9,17836
	ctx.r11.s64 = ctx.r9.s64 + 17836;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x82a6b900
	ctx.lr = 0x839D5224;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839D5238;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x839D5240;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_839D5244:
	// bl 0x8387e8e0
	ctx.lr = 0x839D5248;
	sub_8387E8E0(ctx, base);
loc_839D5248:
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

__attribute__((alias("__imp__sub_839D5260"))) PPC_WEAK_FUNC(sub_839D5260);
PPC_FUNC_IMPL(__imp__sub_839D5260) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x839D5280;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x839d4be8
	ctx.lr = 0x839D528C;
	sub_839D4BE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D5294;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,17792
	ctx.r31.s64 = ctx.r11.s64 + 17792;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D52B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D52BC;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x839D52C4;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839D52E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x839d5140
	ctx.lr = 0x839D5304;
	sub_839D5140(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839D5318;
	sub_82D291E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21188
	ctx.lr = 0x839D5328;
	sub_82D21188(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x839d5348
	if (cr6.lt) goto loc_839D5348;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839D5348;
	sub_825952B8(ctx, base);
loc_839D5348:
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

__attribute__((alias("__imp__sub_839D5360"))) PPC_WEAK_FUNC(sub_839D5360);
PPC_FUNC_IMPL(__imp__sub_839D5360) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d53f4
	if (cr6.eq) goto loc_839D53F4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839d53f4
	if (cr6.lt) goto loc_839D53F4;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// bge cr6,0x839d53f4
	if (!cr6.lt) goto loc_839D53F4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,17328
	ctx.r11.s64 = ctx.r9.s64 + 17328;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839d53cc
	if (cr6.eq) goto loc_839D53CC;
	// bl 0x839d5410
	ctx.lr = 0x839D53B8;
	sub_839D5410(ctx, base);
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
loc_839D53CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x839D53D8;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d5260
	ctx.lr = 0x839D53E0;
	sub_839D5260(ctx, base);
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
loc_839D53F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d4f98
	ctx.lr = 0x839D53FC;
	sub_839D4F98(ctx, base);
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

__attribute__((alias("__imp__sub_839D5410"))) PPC_WEAK_FUNC(sub_839D5410);
PPC_FUNC_IMPL(__imp__sub_839D5410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D5418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,220(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r4,224(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r3,220
	ctx.r26.s64 = ctx.r3.s64 + 220;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d5458
	if (cr6.eq) goto loc_839D5458;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D5450;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_839D5458:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r29,r11,17812
	ctx.r29.s64 = ctx.r11.s64 + 17812;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,-484
	ctx.r10.s64 = ctx.r29.s64 + -484;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r29,-484
	ctx.r9.s64 = ctx.r29.s64 + -484;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// lwzx r31,r8,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bgt cr6,0x839d54e8
	if (cr6.gt) goto loc_839D54E8;
loc_839D5494:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d4648
	ctx.lr = 0x839D54A0;
	sub_839D4648(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d54bc
	if (cr6.eq) goto loc_839D54BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x839D54B8;
	sub_82AB5F20(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_839D54BC:
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r9,r29,-484
	ctx.r9.s64 = ctx.r29.s64 + -484;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// ble cr6,0x839d5494
	if (!cr6.gt) goto loc_839D5494;
loc_839D54E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bne cr6,0x839d5564
	if (!cr6.eq) goto loc_839D5564;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d5528
	if (cr6.eq) goto loc_839D5528;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D5528:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x839D5550;
	sub_82D1EBF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d5360
	ctx.lr = 0x839D555C;
	sub_839D5360(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D5564:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x839D5570;
	sub_83102DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d4be8
	ctx.lr = 0x839D557C;
	sub_839D4BE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D5584;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D559C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D55A4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839D55AC;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x839D55B8;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5644
	if (cr6.eq) goto loc_839D5644;
	// li r27,0
	ctx.r27.s64 = 0;
loc_839D55C4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bge cr6,0x839d5644
	if (!cr6.lt) goto loc_839D5644;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D55E8;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839D55F8;
	sub_82D2D510(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x839d5690
	if (!cr6.gt) goto loc_839D5690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x839d4910
	ctx.lr = 0x839D5620;
	sub_839D4910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d29598
	ctx.lr = 0x839D562C;
	sub_82D29598(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bl 0x82d33c10
	ctx.lr = 0x839D563C;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x839d55c4
	if (cr6.lt) goto loc_839D55C4;
loc_839D5644:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d20f50
	ctx.lr = 0x839D5668;
	sub_82D20F50(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x839D5688;
	sub_82D1EBF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D5690:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D569C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_839D569C"))) PPC_WEAK_FUNC(sub_839D569C);
PPC_FUNC_IMPL(__imp__sub_839D569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D56A0"))) PPC_WEAK_FUNC(sub_839D56A0);
PPC_FUNC_IMPL(__imp__sub_839D56A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D56A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D56B4;
	sub_82D19A68(ctx, base);
	// li r4,-4368
	ctx.r4.s64 = -4368;
	// bl 0x83545640
	ctx.lr = 0x839D56BC;
	sub_83545640(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839d5360
	ctx.lr = 0x839D56C8;
	sub_839D5360(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12300
	ctx.r9.u64 = ctx.r10.u64 | 12300;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83103068
	ctx.lr = 0x839D56F8;
	sub_83103068(ctx, base);
	// li r4,803
	ctx.r4.s64 = 803;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x839ab720
	ctx.lr = 0x839D5704;
	sub_839AB720(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// ori r7,r8,12338
	ctx.r7.u64 = ctx.r8.u64 | 12338;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// bl 0x83103068
	ctx.lr = 0x839D5738;
	sub_83103068(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839cb638
	ctx.lr = 0x839D5740;
	sub_839CB638(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D5748"))) PPC_WEAK_FUNC(sub_839D5748);
PPC_FUNC_IMPL(__imp__sub_839D5748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D5750;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x839D575C;
	sub_82D1C1A8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x839d5784
	if (cr6.gt) goto loc_839D5784;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D5784;
	sub_831CC188(ctx, base);
loc_839D5784:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bne cr6,0x839d57d4
	if (!cr6.eq) goto loc_839D57D4;
	// bl 0x839d45c0
	ctx.lr = 0x839D579C;
	sub_839D45C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12347
	ctx.r8.u64 = ctx.r10.u64 | 12347;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D57CC;
	sub_83103068(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D57D4:
	// bl 0x82d1c1a8
	ctx.lr = 0x839D57D8;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x839d57fc
	if (cr6.gt) goto loc_839D57FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D57FC;
	sub_831CC188(ctx, base);
loc_839D57FC:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// bne cr6,0x839d584c
	if (!cr6.eq) goto loc_839D584C;
	// bl 0x839d45c0
	ctx.lr = 0x839D5814;
	sub_839D45C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12348
	ctx.r8.u64 = ctx.r10.u64 | 12348;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r7,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D5844;
	sub_83103068(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D584C:
	// bl 0x82d1c1a8
	ctx.lr = 0x839D5850;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x839d5874
	if (cr6.gt) goto loc_839D5874;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D5874;
	sub_831CC188(ctx, base);
loc_839D5874:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// bne cr6,0x839d58c4
	if (!cr6.eq) goto loc_839D58C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d45c0
	ctx.lr = 0x839D588C;
	sub_839D45C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12349
	ctx.r8.u64 = ctx.r10.u64 | 12349;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839D58BC;
	sub_83103068(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D58C4:
	// addi r29,r31,164
	ctx.r29.s64 = ctx.r31.s64 + 164;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x839D58D4;
	sub_82AB5F20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x839D58DC;
	sub_82D19BB0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x82ab5f20
	ctx.lr = 0x839D58EC;
	sub_82AB5F20(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d5924
	if (!cr6.eq) goto loc_839D5924;
	// bl 0x82d1c1a8
	ctx.lr = 0x839D5900;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x839d594c
	if (cr6.gt) goto loc_839D594C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D5924;
	sub_831CC188(ctx, base);
loc_839D5924:
	// bl 0x82d1c1a8
	ctx.lr = 0x839D5928;
	sub_82D1C1A8(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x839d594c
	if (cr6.gt) goto loc_839D594C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D594C;
	sub_831CC188(ctx, base);
loc_839D594C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x839D5960;
	sub_82D1C1A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x839d4910
	ctx.lr = 0x839D596C;
	sub_839D4910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb928
	ctx.lr = 0x839D5978;
	sub_839CB928(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,17328
	ctx.r11.s64 = ctx.r11.s64 + 17328;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x839d59b0
	if (!cr6.eq) goto loc_839D59B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839D59B0;
	sub_82D19788(ctx, base);
loc_839D59B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d5360
	ctx.lr = 0x839D59BC;
	sub_839D5360(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D59C4"))) PPC_WEAK_FUNC(sub_839D59C4);
PPC_FUNC_IMPL(__imp__sub_839D59C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D59C8"))) PPC_WEAK_FUNC(sub_839D59C8);
PPC_FUNC_IMPL(__imp__sub_839D59C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D59D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r27,r3,172
	ctx.r27.s64 = ctx.r3.s64 + 172;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839d59f8
	if (!cr6.eq) goto loc_839D59F8;
	// bl 0x839d45c0
	ctx.lr = 0x839D59F0;
	sub_839D45C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839D59F8:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r30,-4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r26,-4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x839d5a58
	if (!cr6.eq) goto loc_839D5A58;
	// lwz r30,220(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r28,r31,220
	ctx.r28.s64 = ctx.r31.s64 + 220;
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x839d5a44
	if (cr6.eq) goto loc_839D5A44;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x839D5A3C;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_839D5A44:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bl 0x839d4f98
	ctx.lr = 0x839D5A54;
	sub_839D4F98(ctx, base);
	// b 0x839d5ac4
	goto loc_839D5AC4;
loc_839D5A58:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x839D5A64;
	sub_83102DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d4be8
	ctx.lr = 0x839D5A70;
	sub_839D4BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D5A78;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,17308
	ctx.r4.s64 = ctx.r11.s64 + 17308;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D5A94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x839D5AA0;
	sub_82D1C1A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x839d4910
	ctx.lr = 0x839D5AAC;
	sub_839D4910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb928
	ctx.lr = 0x839D5AB8;
	sub_839CB928(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d5360
	ctx.lr = 0x839D5AC4;
	sub_839D5360(ctx, base);
loc_839D5AC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x839D5AE4;
	sub_82D1EBF8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839D5AF4;
	sub_82D19788(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839d5b0c
	if (cr6.eq) goto loc_839D5B0C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_839D5B0C:
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x839d5b28
	if (cr6.eq) goto loc_839D5B28;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_839D5B28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D5B30"))) PPC_WEAK_FUNC(sub_839D5B30);
PPC_FUNC_IMPL(__imp__sub_839D5B30) {
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
	// li r9,2
	ctx.r9.s64 = 2;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D5B54;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,18968
	ctx.r9.s64 = ctx.r11.s64 + 18968;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,-30692
	ctx.r30.s64 = ctx.r7.s64 + -30692;
	// lwz r4,-30692(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30692);
	// bl 0x82d20ae0
	ctx.lr = 0x839D5B80;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x839D5B8C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x839D5B9C;
	sub_82D23390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839D5BB0;
	sub_839CB540(ctx, base);
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

__attribute__((alias("__imp__sub_839D5BCC"))) PPC_WEAK_FUNC(sub_839D5BCC);
PPC_FUNC_IMPL(__imp__sub_839D5BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D5BD0"))) PPC_WEAK_FUNC(sub_839D5BD0);
PPC_FUNC_IMPL(__imp__sub_839D5BD0) {
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
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// beq cr6,0x839d5c18
	if (cr6.eq) goto loc_839D5C18;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r11,r9,18768
	ctx.r11.s64 = ctx.r9.s64 + 18768;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x839d5c2c
	goto loc_839D5C2C;
loc_839D5C18:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,18768
	ctx.r4.s64 = ctx.r11.s64 + 18768;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839D5C2C:
	// bctrl 
	ctx.lr = 0x839D5C30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5c44
	if (cr6.eq) goto loc_839D5C44;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399d950
	ctx.lr = 0x839D5C44;
	sub_8399D950(ctx, base);
loc_839D5C44:
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

__attribute__((alias("__imp__sub_839D5C5C"))) PPC_WEAK_FUNC(sub_839D5C5C);
PPC_FUNC_IMPL(__imp__sub_839D5C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D5C60"))) PPC_WEAK_FUNC(sub_839D5C60);
PPC_FUNC_IMPL(__imp__sub_839D5C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D5C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// addi r30,r11,18868
	ctx.r30.s64 = ctx.r11.s64 + 18868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D5C94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5ca8
	if (cr6.eq) goto loc_839D5CA8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D5CA8;
	sub_82D2AEC8(ctx, base);
loc_839D5CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5cd4
	if (cr6.eq) goto loc_839D5CD4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D5CD4;
	sub_82D2AEC8(ctx, base);
loc_839D5CD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5CEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5d84
	if (cr6.eq) goto loc_839D5D84;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D5D00;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5D18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5d84
	if (cr6.eq) goto loc_839D5D84;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D5D2C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5D44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5d84
	if (cr6.eq) goto loc_839D5D84;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D5D58;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5D70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d5d84
	if (cr6.eq) goto loc_839D5D84;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839D5D84;
	sub_82D2AEC8(ctx, base);
loc_839D5D84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D5D8C"))) PPC_WEAK_FUNC(sub_839D5D8C);
PPC_FUNC_IMPL(__imp__sub_839D5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D5D90"))) PPC_WEAK_FUNC(sub_839D5D90);
PPC_FUNC_IMPL(__imp__sub_839D5D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x839D5D98;
	__savegprlr_17(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D5DA4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839D5DAC;
	sub_82D33DB0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d6114
	if (cr6.eq) goto loc_839D6114;
	// bl 0x82d33c10
	ctx.lr = 0x839D5DBC;
	sub_82D33C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5DD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x839d6114
	if (cr6.eq) goto loc_839D6114;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r22,15
	ctx.r22.s64 = 15;
	// addi r25,r11,18736
	ctx.r25.s64 = ctx.r11.s64 + 18736;
loc_839D5DF4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D5E00;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d6114
	if (cr6.eq) goto loc_839D6114;
	// cmplw cr6,r23,r19
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, xer);
	// blt cr6,0x839d5e24
	if (cr6.lt) goto loc_839D5E24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839D5E20;
	sub_82D2AEC8(ctx, base);
	// b 0x839d60f8
	goto loc_839D60F8;
loc_839D5E24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5E3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r27,r29,100
	ctx.r27.s64 = ctx.r29.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r25,-72
	ctx.r4.s64 = ctx.r25.s64 + -72;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D5E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d6114
	if (cr6.eq) goto loc_839D6114;
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5E90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839D5EA4;
	sub_82D291E0(ctx, base);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D5EAC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8399f6e8
	ctx.lr = 0x839D5EC4;
	sub_8399F6E8(ctx, base);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r18,128(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8399f8b8
	ctx.lr = 0x839D5ED0;
	sub_8399F8B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D5ED8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r26,532
	ctx.r11.s64 = ctx.r26.s64 * 532;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D5EF0;
	sub_8399EA10(ctx, base);
	// mulli r11,r26,528
	ctx.r11.s64 = ctx.r26.s64 * 528;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x839D5F08;
	sub_839A0478(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D5F24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5F4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399d9e8
	ctx.lr = 0x839D5F58;
	sub_8399D9E8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x839d60e8
	if (cr6.eq) goto loc_839D60E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x839d5c60
	ctx.lr = 0x839D5F74;
	sub_839D5C60(ctx, base);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839D5F7C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8399f6e8
	ctx.lr = 0x839D5F94;
	sub_8399F6E8(ctx, base);
	// lwz r18,164(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r17,160(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8399f8b8
	ctx.lr = 0x839D5FA0;
	sub_8399F8B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839D5FA8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r18,532
	ctx.r11.s64 = ctx.r18.s64 * 532;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839D5FC0;
	sub_8399EA10(ctx, base);
	// mulli r11,r18,528
	ctx.r11.s64 = ctx.r18.s64 * 528;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x839a0478
	ctx.lr = 0x839D5FD8;
	sub_839A0478(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D5FF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,344(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D601C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r25,-60
	ctx.r4.s64 = ctx.r25.s64 + -60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839D6034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d610c
	if (cr6.eq) goto loc_839D610C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839a9ec0
	ctx.lr = 0x839D6048;
	sub_839A9EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d6060
	if (cr6.eq) goto loc_839D6060;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x839D6060;
	sub_8337F1E0(ctx, base);
loc_839D6060:
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// ble cr6,0x839d6070
	if (!cr6.gt) goto loc_839D6070;
	// addi r4,r25,-48
	ctx.r4.s64 = ctx.r25.s64 + -48;
	// b 0x839d607c
	goto loc_839D607C;
loc_839D6070:
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// blt cr6,0x839d607c
	if (cr6.lt) goto loc_839D607C;
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
loc_839D607C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6094;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D60AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d610c
	if (cr6.eq) goto loc_839D610C;
	// subf r11,r28,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r28.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// bl 0x82d294d0
	ctx.lr = 0x839D60E4;
	sub_82D294D0(ctx, base);
	// b 0x839d60f0
	goto loc_839D60F0;
loc_839D60E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x839d5c60
	ctx.lr = 0x839D60F0;
	sub_839D5C60(ctx, base);
loc_839D60F0:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x839D60F8;
	sub_8387E8E0(ctx, base);
loc_839D60F8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r20
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, xer);
	// blt cr6,0x839d5df4
	if (cr6.lt) goto loc_839D5DF4;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_839D610C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x839D6114;
	sub_8387E8E0(ctx, base);
loc_839D6114:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D611C"))) PPC_WEAK_FUNC(sub_839D611C);
PPC_FUNC_IMPL(__imp__sub_839D611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6120"))) PPC_WEAK_FUNC(sub_839D6120);
PPC_FUNC_IMPL(__imp__sub_839D6120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D6128;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D6134;
	sub_82D19A68(ctx, base);
	// li r4,30780
	ctx.r4.s64 = 30780;
	// bl 0x83545640
	ctx.lr = 0x839D613C;
	sub_83545640(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839D6144;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839D614C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d61dc
	if (cr6.eq) goto loc_839D61DC;
	// bl 0x82d33c10
	ctx.lr = 0x839D615C;
	sub_82D33C10(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6174;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839d61d4
	if (cr6.eq) goto loc_839D61D4;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r29,-31767
	ctx.r29.s64 = -2081882112;
	// addi r28,r11,18652
	ctx.r28.s64 = ctx.r11.s64 + 18652;
loc_839D618C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839D6198;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d61dc
	if (cr6.eq) goto loc_839D61DC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D61B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d61dc
	if (cr6.eq) goto loc_839D61DC;
	// lwz r4,-30680(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30680);
	// bl 0x82d3a058
	ctx.lr = 0x839D61C8;
	sub_82D3A058(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x839d618c
	if (cr6.lt) goto loc_839D618C;
loc_839D61D4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839d5d90
	ctx.lr = 0x839D61DC;
	sub_839D5D90(ctx, base);
loc_839D61DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D61E4"))) PPC_WEAK_FUNC(sub_839D61E4);
PPC_FUNC_IMPL(__imp__sub_839D61E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D61E8"))) PPC_WEAK_FUNC(sub_839D61E8);
PPC_FUNC_IMPL(__imp__sub_839D61E8) {
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,12314
	ctx.r9.u64 = ctx.r11.u64 | 12314;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x839d621c
	if (!cr6.eq) goto loc_839D621C;
	// bl 0x839d5d90
	ctx.lr = 0x839D621C;
	sub_839D5D90(ctx, base);
loc_839D621C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839D6228;
	sub_839CAE30(ctx, base);
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

__attribute__((alias("__imp__sub_839D6240"))) PPC_WEAK_FUNC(sub_839D6240);
PPC_FUNC_IMPL(__imp__sub_839D6240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D6248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D626C;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r29.u32);
	// addi r9,r11,19816
	ctx.r9.s64 = ctx.r11.s64 + 19816;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x839D6294;
	sub_82D195D8(ctx, base);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r7,-30540
	ctx.r31.s64 = ctx.r7.s64 + -30540;
	// lwz r4,-30540(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30540);
	// bl 0x82d20ae0
	ctx.lr = 0x839D62A8;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x839D62B8;
	sub_82D23390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r11.u8);
	// stb r11,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839D62CC;
	sub_839CB540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d191f8
	ctx.lr = 0x839D62D4;
	sub_82D191F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x839D62E4;
	sub_82D19788(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x839D62F4;
	sub_82D19788(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D6300"))) PPC_WEAK_FUNC(sub_839D6300);
PPC_FUNC_IMPL(__imp__sub_839D6300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D6308;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D6338;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d6360
	if (cr6.eq) goto loc_839D6360;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d6240
	ctx.lr = 0x839D6358;
	sub_839D6240(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839D6360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D636C"))) PPC_WEAK_FUNC(sub_839D636C);
PPC_FUNC_IMPL(__imp__sub_839D636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6370"))) PPC_WEAK_FUNC(sub_839D6370);
PPC_FUNC_IMPL(__imp__sub_839D6370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839D6378;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x839d2a78
	ctx.lr = 0x839D638C;
	sub_839D2A78(ctx, base);
	// stw r25,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D639C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r28,r11,19720
	ctx.r28.s64 = ctx.r11.s64 + 19720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D63BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d29598
	ctx.lr = 0x839D63C4;
	sub_82D29598(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// lis r11,215
	ctx.r11.s64 = 14090240;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r24,3
	ctx.r24.s64 = 3;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r23,-1
	ctx.r23.s64 = -1;
	// lis r22,-31772
	ctx.r22.s64 = -2082209792;
	// ori r26,r11,77
	ctx.r26.u64 = ctx.r11.u64 | 77;
	// li r21,2
	ctx.r21.s64 = 2;
loc_839D63F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x839d6488
	if (cr6.eq) goto loc_839D6488;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x839D6418;
	sub_82D04220(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x839D642C;
	sub_825A1DA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x839d6450
	if (!cr6.eq) goto loc_839D6450;
	// lwz r11,-13652(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -13652);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x839d6450
	if (!cr6.eq) goto loc_839D6450;
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x839d6458
	goto loc_839D6458;
loc_839D6450:
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// li r5,2
	ctx.r5.s64 = 2;
loc_839D6458:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x839D6460;
	sub_825A1EB8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839d647c
	if (cr6.lt) goto loc_839D647C;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839D647C;
	sub_825952B8(ctx, base);
loc_839D647C:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
loc_839D6488:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d63f4
	if (!cr0.eq) goto loc_839D63F4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x839d64cc
	if (!cr6.eq) goto loc_839D64CC;
	// bl 0x82d19a68
	ctx.lr = 0x839D64A4;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D64BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D64C4;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// b 0x839d64f4
	goto loc_839D64F4;
loc_839D64CC:
	// bl 0x82d19a68
	ctx.lr = 0x839D64D0;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D64E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D64F0;
	sub_82D19A68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_839D64F4:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D6508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x839D6518;
	sub_82D291E0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839d6534
	if (cr6.lt) goto loc_839D6534;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x839D6534;
	sub_825952B8(ctx, base);
loc_839D6534:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D653C"))) PPC_WEAK_FUNC(sub_839D653C);
PPC_FUNC_IMPL(__imp__sub_839D653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6540"))) PPC_WEAK_FUNC(sub_839D6540);
PPC_FUNC_IMPL(__imp__sub_839D6540) {
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
	// bl 0x82d199d0
	ctx.lr = 0x839D655C;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D6564;
	sub_82D19A68(ctx, base);
	// li r4,-4369
	ctx.r4.s64 = -4369;
	// bl 0x83545640
	ctx.lr = 0x839D656C;
	sub_83545640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x839d6370
	ctx.lr = 0x839D6578;
	sub_839D6370(ctx, base);
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

__attribute__((alias("__imp__sub_839D658C"))) PPC_WEAK_FUNC(sub_839D658C);
PPC_FUNC_IMPL(__imp__sub_839D658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6590"))) PPC_WEAK_FUNC(sub_839D6590);
PPC_FUNC_IMPL(__imp__sub_839D6590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D6598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D65BC;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// addi r9,r11,20576
	ctx.r9.s64 = ctx.r11.s64 + 20576;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x839D65E4;
	sub_82D195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839d2a78
	ctx.lr = 0x839D65EC;
	sub_839D2A78(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d6604
	if (cr6.eq) goto loc_839D6604;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x839D6604;
	sub_82D23390(ctx, base);
loc_839D6604:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839D6618;
	sub_839CB540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x839D6620;
	sub_82D191F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839D6630;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839D6640;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D664C"))) PPC_WEAK_FUNC(sub_839D664C);
PPC_FUNC_IMPL(__imp__sub_839D664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6650"))) PPC_WEAK_FUNC(sub_839D6650);
PPC_FUNC_IMPL(__imp__sub_839D6650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D6658;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d199d0
	ctx.lr = 0x839D666C;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x839D6674;
	sub_82D19A10(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,20472
	ctx.r30.s64 = ctx.r11.s64 + 20472;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x83815d38
	ctx.lr = 0x839D668C;
	sub_83815D38(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D66A0;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815b68
	ctx.lr = 0x839D66B0;
	sub_83815B68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D66C0;
	sub_83815B68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815d38
	ctx.lr = 0x839D66D0;
	sub_83815D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D66DC;
	sub_83815B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D66EC;
	sub_83815B68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D66FC;
	sub_83815B68(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x839d6728
	if (!cr6.eq) goto loc_839D6728;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x839d6740
	goto loc_839D6740;
loc_839D6728:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_839D6740:
	// bl 0x839a9908
	ctx.lr = 0x839D6744;
	sub_839A9908(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6754;
	sub_83815BE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6764;
	sub_83815BE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6774;
	sub_83815BE8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838153c8
	ctx.lr = 0x839D6780;
	sub_838153C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6790;
	sub_83815BE8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D67A0;
	sub_83815BE8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D67B0;
	sub_83815BE8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838153c8
	ctx.lr = 0x839D67BC;
	sub_838153C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815cb8
	ctx.lr = 0x839D67C4;
	sub_83815CB8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815cb8
	ctx.lr = 0x839D67CC;
	sub_83815CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D67D4;
	sub_82D19A68(ctx, base);
	// li r4,-4369
	ctx.r4.s64 = -4369;
	// bl 0x83545640
	ctx.lr = 0x839D67DC;
	sub_83545640(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D67E8"))) PPC_WEAK_FUNC(sub_839D67E8);
PPC_FUNC_IMPL(__imp__sub_839D67E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D67F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D6820;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d6848
	if (cr6.eq) goto loc_839D6848;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d6590
	ctx.lr = 0x839D6840;
	sub_839D6590(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839D6848:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D6854"))) PPC_WEAK_FUNC(sub_839D6854);
PPC_FUNC_IMPL(__imp__sub_839D6854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6858"))) PPC_WEAK_FUNC(sub_839D6858);
PPC_FUNC_IMPL(__imp__sub_839D6858) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839D687C;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21336
	ctx.r9.s64 = ctx.r11.s64 + 21336;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82d195d8
	ctx.lr = 0x839D68A0;
	sub_82D195D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d23390
	ctx.lr = 0x839D68B0;
	sub_82D23390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839D68C4;
	sub_839CB540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x839D68CC;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x839D68DC;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x839D68EC;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_839D6908"))) PPC_WEAK_FUNC(sub_839D6908);
PPC_FUNC_IMPL(__imp__sub_839D6908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D6910;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d199d0
	ctx.lr = 0x839D6924;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x839D692C;
	sub_82D19A10(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,21232
	ctx.r30.s64 = ctx.r11.s64 + 21232;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x83815d38
	ctx.lr = 0x839D6944;
	sub_83815D38(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D6958;
	sub_83815B68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815b68
	ctx.lr = 0x839D6968;
	sub_83815B68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D6978;
	sub_83815B68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815d38
	ctx.lr = 0x839D6988;
	sub_83815D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D6994;
	sub_83815B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D69A4;
	sub_83815B68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839D69B4;
	sub_83815B68(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x839d69e0
	if (!cr6.eq) goto loc_839D69E0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x839d69f8
	goto loc_839D69F8;
loc_839D69E0:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_839D69F8:
	// bl 0x839a9908
	ctx.lr = 0x839D69FC;
	sub_839A9908(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6A0C;
	sub_83815BE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6A1C;
	sub_83815BE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6A2C;
	sub_83815BE8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838153c8
	ctx.lr = 0x839D6A38;
	sub_838153C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6A48;
	sub_83815BE8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6A58;
	sub_83815BE8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839D6A68;
	sub_83815BE8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838153c8
	ctx.lr = 0x839D6A74;
	sub_838153C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839D6A7C;
	sub_82D19A68(ctx, base);
	// li r4,-4369
	ctx.r4.s64 = -4369;
	// bl 0x83545640
	ctx.lr = 0x839D6A84;
	sub_83545640(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815cb8
	ctx.lr = 0x839D6A8C;
	sub_83815CB8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815cb8
	ctx.lr = 0x839D6A94;
	sub_83815CB8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D6AA0"))) PPC_WEAK_FUNC(sub_839D6AA0);
PPC_FUNC_IMPL(__imp__sub_839D6AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D6AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839D6AD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d6b00
	if (cr6.eq) goto loc_839D6B00;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d6858
	ctx.lr = 0x839D6AF8;
	sub_839D6858(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839D6B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D6B0C"))) PPC_WEAK_FUNC(sub_839D6B0C);
PPC_FUNC_IMPL(__imp__sub_839D6B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6B10"))) PPC_WEAK_FUNC(sub_839D6B10);
PPC_FUNC_IMPL(__imp__sub_839D6B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r3,216
	ctx.r8.s64 = ctx.r3.s64 + 216;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// beq cr6,0x839d6b68
	if (cr6.eq) goto loc_839D6B68;
	// li r7,11
	ctx.r7.s64 = 11;
loc_839D6B38:
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r5,r6,r7
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r9,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// bne cr6,0x839d6b38
	if (!cr6.eq) goto loc_839D6B38;
loc_839D6B68:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f0,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,12(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D6B8C"))) PPC_WEAK_FUNC(sub_839D6B8C);
PPC_FUNC_IMPL(__imp__sub_839D6B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D6B90"))) PPC_WEAK_FUNC(sub_839D6B90);
PPC_FUNC_IMPL(__imp__sub_839D6B90) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,-29996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29996);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// lfs f13,-23848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23848);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// bl 0x8378b870
	ctx.lr = 0x839D6BE4;
	sub_8378B870(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839d6c10
	if (cr6.eq) goto loc_839D6C10;
	// bl 0x8378b870
	ctx.lr = 0x839D6BF8;
	sub_8378B870(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839D6C10;
	sub_8378A8C8(ctx, base);
loc_839D6C10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D6C58"))) PPC_WEAK_FUNC(sub_839D6C58);
PPC_FUNC_IMPL(__imp__sub_839D6C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D6C60;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce778
	ctx.lr = 0x839D6C68;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x839D6C84;
	sub_8353B168(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,21932(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21932);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x839d6d4c
	if (cr6.eq) goto loc_839D6D4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6CB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6d00
	if (cr6.eq) goto loc_839D6D00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6CD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6d00
	if (cr6.eq) goto loc_839D6D00;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x839d6cf8
	if (!cr6.lt) goto loc_839D6CF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// b 0x839d6d00
	goto loc_839D6D00;
loc_839D6CF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
loc_839D6D00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6D14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6d4c
	if (cr6.eq) goto loc_839D6D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6D38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x839d6d4c
	if (cr6.eq) goto loc_839D6D4C;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f28,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_839D6D4C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lfs f29,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x839d6e34
	if (cr6.eq) goto loc_839D6E34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6d9c
	if (cr6.eq) goto loc_839D6D9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_839D6D9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6DB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6dec
	if (cr6.eq) goto loc_839D6DEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6DD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6dec
	if (cr6.eq) goto loc_839D6DEC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
	// b 0x839d6e34
	goto loc_839D6E34;
loc_839D6DEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6e34
	if (cr6.eq) goto loc_839D6E34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6E24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6e34
	if (cr6.eq) goto loc_839D6E34;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
loc_839D6E34:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x839d6e48
	if (cr6.eq) goto loc_839D6E48;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_839D6E48:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lfs f0,25724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25724);
	ctx.f0.f64 = double(temp.f32);
	// fsel f11,f12,f13,f29
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f29.f64;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f9,f10,f11,f0
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// beq cr6,0x839d6ebc
	if (cr6.eq) goto loc_839D6EBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6E84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d6ebc
	if (cr6.eq) goto loc_839D6EBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D6EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x839d6ebc
	if (cr6.eq) goto loc_839D6EBC;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f1,f28,f0
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * ctx.f28.f64 - ctx.f0.f64)));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_839D6EBC:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsel f13,f0,f0,f31
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r10,2480
	ctx.r8.s64 = ctx.r10.s64 + 2480;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r5,r7,2496
	ctx.r5.s64 = ctx.r7.s64 + 2496;
	// vspltisw128 v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x3)));
	// lfs f0,8808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8808);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vspltisw v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x1)));
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r3,2512
	ctx.r10.s64 = ctx.r3.s64 + 2512;
	// vspltisw128 v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x2)));
	// addi r4,r6,2528
	ctx.r4.s64 = ctx.r6.s64 + 2528;
	// vupkd3d128 v10,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v10 = vTemp;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// vslw128 v7,v61,v61
	ctx.v7.u32[0] = ctx.v61.u32[0] << (ctx.v61.u8[0] & 0x1F);
	ctx.v7.u32[1] = ctx.v61.u32[1] << (ctx.v61.u8[4] & 0x1F);
	ctx.v7.u32[2] = ctx.v61.u32[2] << (ctx.v61.u8[8] & 0x1F);
	ctx.v7.u32[3] = ctx.v61.u32[3] << (ctx.v61.u8[12] & 0x1F);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vsldoi128 v49,v0,v63,12
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 4));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r11,2592
	ctx.r3.s64 = ctx.r11.s64 + 2592;
	// vslw128 v6,v59,v59
	ctx.v6.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v6.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v6.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v6.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// addi r11,r7,2608
	ctx.r11.s64 = ctx.r7.s64 + 2608;
	// addi r7,r6,2576
	ctx.r7.s64 = ctx.r6.s64 + 2576;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// addi r6,r6,2544
	ctx.r6.s64 = ctx.r6.s64 + 2544;
	// addi r31,r31,2560
	ctx.r31.s64 = ctx.r31.s64 + 2560;
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lvx128 v3,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v4,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r8,2624
	ctx.r6.s64 = ctx.r8.s64 + 2624;
	// lvx128 v27,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,12
	ctx.r7.s64 = 12;
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v8,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vmaddfp v11,v8,v3,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx128 v50,r30,r7
	temp.u32 = ctx.r30.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v23,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v22,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// vsel v5,v4,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vor128 v57,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vaddfp128 v56,v57,v5
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v55,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// vcsxwfp128 v11,v55,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vand128 v13,v55,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vadduws v5,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vand128 v54,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v53,v13,v60
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vand128 v52,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v51,v5,v60
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vcmpequw128 v19,v54,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v17,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vnmsubfp v8,v11,v29,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpequw128 v18,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v16,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vnmsubfp v8,v11,v2,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v11,v8,v8,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v28,v11,v27
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vmaddfp v9,v26,v11,v25
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v26.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v25.f32)));
	// vmaddfp v30,v11,v8,v0
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v21,v13,v11,v24
	simde_mm_store_ps(ctx.v21.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v24.f32)));
	// vmaddfp v20,v9,v11,v23
	simde_mm_store_ps(ctx.v20.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v23.f32)));
	// vmaddfp v11,v21,v11,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v21.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v3,v22,v3,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v22.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi128 v48,v63,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmaddfp v30,v20,v30,v8
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v20.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vslw128 v47,v63,v63
	ctx.v47.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v47.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v47.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v47.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// vsldoi128 v46,v0,v63,8
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 8));
	// vsldoi128 v45,v63,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vslw128 v43,v63,v63
	ctx.v43.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v43.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v43.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v43.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// vand128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vsldoi128 v1,v63,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// vsldoi128 v44,v10,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// vsldoi v13,v0,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// lfs f9,4(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// vand128 v9,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,21708(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vspltw v15,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v15.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vor128 v42,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vor v3,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vor128 v41,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vspltw128 v20,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// vor128 v11,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vsel v30,v4,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vor128 v11,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v4,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vaddfp128 v40,v42,v30
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v40.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v30.f32)));
	// vsel v30,v8,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vspltw v19,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v19.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vsel v11,v3,v4,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// vor128 v39,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vxor v11,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vxor128 v7,v7,v39
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vor128 v4,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// vcfpsxws128 v38,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// vsel v3,v11,v30,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v11,v7,v4,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// vspltw128 v16,v44,3
	simde_mm_store_si128((simde__m128i*)ctx.v16.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0x0));
	// vor128 v37,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor128 v36,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vxor128 v8,v37,v47
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vor128 v30,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vor128 v4,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vcsxwfp128 v35,v38,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vand128 v11,v38,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsel v7,v0,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vor128 v3,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vsel v8,v0,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// vadduws v21,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vand128 v34,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v33,v11,v60
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vsel v4,v7,v3,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8))));
	// vsel v7,v8,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vand128 v63,v21,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vand128 v32,v21,v12
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vor128 v57,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor128 v11,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vor128 v56,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor128 v7,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vcmpequw128 v61,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vspltw128 v63,v44,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xAA));
	// vnmsubfp v31,v11,v29,v22
	simde_mm_store_ps(ctx.v31.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v22.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpequw128 v58,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v60,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vspltw128 v3,v56,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xAA));
	// vcmpequw128 v59,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vspltw128 v14,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v14.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// vsel v8,v0,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vspltw128 v17,v56,3
	simde_mm_store_si128((simde__m128i*)ctx.v17.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x0));
	// vspltw128 v18,v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x0));
	// vspltw128 v21,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vspltw128 v22,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vnmsubfp v11,v7,v2,v31
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v31.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v11,v11,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v29,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v4,v8,v14,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v14.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v5,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// vmaddcfp128 v3,v8,v3,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v30,v44,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0x55));
	// vspltw128 v31,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x55));
	// vspltw128 v2,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x55));
	// vmaddfp v28,v28,v12,v27
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vmaddfp v7,v26,v12,v25
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v26.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v25.f32)));
	// vmaddfp v27,v12,v11,v0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v28,v28,v12,v24
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v24.f32)));
	// vmaddfp v7,v7,v12,v23
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v23.f32)));
	// vmaddfp v10,v28,v12,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vor128 v28,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vmaddfp v12,v7,v27,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v27,v13,v17,v3
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v17.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vor128 v55,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v7,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v11,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vsel128 v28,v7,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vor128 v10,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vxor v7,v6,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vsel128 v10,v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor128 v54,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// vmaddfp v28,v13,v18,v4
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v18.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vxor128 v11,v6,v54
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vor128 v6,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v12,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vsel128 v6,v7,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vor128 v10,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vsel128 v10,v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor128 v53,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vxor128 v10,v6,v43
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vsel v6,v0,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vor128 v11,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vor128 v12,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vsel v7,v0,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vor128 v1,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v11,v6,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vspltw128 v6,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vsel v12,v7,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vmaddfp v10,v8,v15,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v15.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddcfp128 v1,v8,v1,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v7,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v9,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v8,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v3,v12,v21,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v21.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v12,v22,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v22.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v26,v13,v16,v1
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v16.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v1,v13,v19,v10
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v19.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v13,v12,v20,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v20.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v12,v29,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v11,v31,v3
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v4,v11,v2,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v13,v11,v30,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v11,v5,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp v12,v12,v27
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v27.f32)));
	// vaddfp v11,v4,v28
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v28.f32)));
	// vaddfp v13,v13,v26
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v26.f32)));
	// vaddfp v10,v10,v1
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v13,v13,v6,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v12,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v11,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v52,v13,v0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v50,v52,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xAA));
	// vspltw128 v51,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// vspltw128 v49,v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0x55));
	// stvx128 v50,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// stvx128 v51,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f5,16(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stvx128 v49,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,20(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lfs f1,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f13,24(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d72cc
	if (!cr6.eq) goto loc_839D72CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c4
	ctx.lr = 0x839D72C8;
	__restfpr_28(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D72CC:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839d72e0
	if (!cr6.eq) goto loc_839D72E0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lfs f0,15344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15344);
	ctx.f0.f64 = double(temp.f32);
	// b 0x839d7318
	goto loc_839D7318;
loc_839D72E0:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x839d7308
	if (!cr6.eq) goto loc_839D7308;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,3184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c4
	ctx.lr = 0x839D7304;
	__restfpr_28(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D7308:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x839d7320
	if (!cr6.eq) goto loc_839D7320;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-8332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8332);
	ctx.f0.f64 = double(temp.f32);
loc_839D7318:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_839D7320:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c4
	ctx.lr = 0x839D732C;
	__restfpr_28(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D7330"))) PPC_WEAK_FUNC(sub_839D7330);
PPC_FUNC_IMPL(__imp__sub_839D7330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,-29892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29892);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19176);
	ctx.f12.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r5,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r5.u8);
	// lfs f12,-7352(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4460(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4460);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
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
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D739C"))) PPC_WEAK_FUNC(sub_839D739C);
PPC_FUNC_IMPL(__imp__sub_839D739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D73A0"))) PPC_WEAK_FUNC(sub_839D73A0);
PPC_FUNC_IMPL(__imp__sub_839D73A0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-29892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29892);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19176);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// stb r30,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r30.u8);
	// lfs f0,-7352(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f13,-4460(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4460);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f30,8(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f31,24(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f30,32(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f30,40(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// bl 0x8378b870
	ctx.lr = 0x839D742C;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d7450
	if (cr6.eq) goto loc_839D7450;
	// bl 0x8378b870
	ctx.lr = 0x839D7438;
	sub_8378B870(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839D7450;
	sub_8378A8C8(ctx, base);
loc_839D7450:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_839D7494"))) PPC_WEAK_FUNC(sub_839D7494);
PPC_FUNC_IMPL(__imp__sub_839D7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D7498"))) PPC_WEAK_FUNC(sub_839D7498);
PPC_FUNC_IMPL(__imp__sub_839D7498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839D74A0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x839D74A8;
	__savefpr_27(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831d1254
	ctx.lr = 0x839D74B0;
	__savevmx_124(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x839D74CC;
	sub_8353B168(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f27,20048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x839d7db8
	if (cr6.eq) goto loc_839D7DB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D74F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D7510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839D752C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f30,-26260(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839d75a0
	if (cr6.eq) goto loc_839D75A0;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,-29892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29892);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19176);
	ctx.f13.f64 = double(temp.f32);
	// stb r7,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r7.u8);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-4460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f30,32(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f30,40(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_839D75A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f28,-28496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28496);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f29,f28
	ctx.f29.f64 = ctx.f28.f64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839D75C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839d75dc
	if (cr6.eq) goto loc_839D75DC;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x839d7608
	goto loc_839D7608;
loc_839D75DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D75F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d760c
	if (cr6.eq) goto loc_839D760C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f29.f64 = double(temp.f32);
loc_839D7608:
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_839D760C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmadds f13,f1,f27,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 + ctx.f0.f64));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D7650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fnmsubs f10,f1,f27,f11
	ctx.f10.f64 = double(float(-(ctx.f1.f64 * ctx.f27.f64 - ctx.f11.f64)));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r4,2496
	ctx.r11.s64 = ctx.r4.s64 + 2496;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f0,22072(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22072);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r5,2480
	ctx.r3.s64 = ctx.r5.s64 + 2480;
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,22068(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22068);
	ctx.f13.f64 = double(temp.f32);
	// vspltisw128 v60,-1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltisw128 v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x3)));
	// addi r8,r10,2528
	ctx.r8.s64 = ctx.r10.s64 + 2528;
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r7,r9,2512
	ctx.r7.s64 = ctx.r9.s64 + 2512;
	// lvlx128 v50,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v58,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vupkd3d128 v13,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v13 = vTemp;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r6,2544
	ctx.r4.s64 = ctx.r6.s64 + 2544;
	// vslw128 v8,v58,v58
	ctx.v8.u32[0] = ctx.v58.u32[0] << (ctx.v58.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v58.u32[1] << (ctx.v58.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v58.u32[2] << (ctx.v58.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v58.u32[3] << (ctx.v58.u8[12] & 0x1F);
	// fsel f8,f9,f12,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsel f6,f7,f8,f13
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lvlx128 v57,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v7,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vspltw128 v9,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v10,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vmaddcfp128 v11,v9,v11,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v4,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lvx128 v6,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v5,v12,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vor128 v56,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vaddfp128 v55,v56,v5
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v54,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v55.f32)));
	// vcsxwfp128 v5,v54,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vand128 v11,v54,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vadduws v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vand128 v53,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v52,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vcmpequw128 v18,v53,v127
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vnmsubfp v9,v5,v10,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vand128 v51,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpequw128 v19,v51,v127
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vnmsubfp v9,v5,v4,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v25,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmaddcfp128 v12,v9,v12,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v25,v12,v25,v127
	simde_mm_store_ps(ctx.v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v25.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// addi r10,r5,2560
	ctx.r10.s64 = ctx.r5.s64 + 2560;
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r9,r3,2592
	ctx.r9.s64 = ctx.r3.s64 + 2592;
	// vspltw128 v23,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// addi r8,r11,2608
	ctx.r8.s64 = ctx.r11.s64 + 2608;
	// vor128 v49,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vor128 v30,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vspltisw128 v48,2
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_set1_epi32(int(0x2)));
	// lvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r7,2576
	ctx.r5.s64 = ctx.r7.s64 + 2576;
	// lvx128 v4,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v29,v6,v12,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// lvx128 v3,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r6,2624
	ctx.r4.s64 = ctx.r6.s64 + 2624;
	// vmaddfp v24,v4,v12,v3
	simde_mm_store_ps(ctx.v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vslw128 v31,v49,v49
	ctx.v31.u32[0] = ctx.v49.u32[0] << (ctx.v49.u8[0] & 0x1F);
	ctx.v31.u32[1] = ctx.v49.u32[1] << (ctx.v49.u8[4] & 0x1F);
	ctx.v31.u32[2] = ctx.v49.u32[2] << (ctx.v49.u8[8] & 0x1F);
	ctx.v31.u32[3] = ctx.v49.u32[3] << (ctx.v49.u8[12] & 0x1F);
	// vmaddcfp128 v10,v23,v10,v127
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v23.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vand128 v47,v52,v48
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvx128 v2,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v45,v11,v48
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vsldoi128 v46,v127,v60,12
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 4));
	// vslw128 v43,v60,v60
	ctx.v43.u32[0] = ctx.v60.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v43.u32[1] = ctx.v60.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v43.u32[2] = ctx.v60.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v43.u32[3] = ctx.v60.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// lvx128 v1,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v44,v60,v127,8
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 8));
	// vcmpequw128 v17,v47,v127
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vsldoi128 v42,v127,v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 8));
	// vcmpequw128 v16,v45,v127
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vsldoi128 v41,v60,v127,4
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 12));
	// vor128 v28,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// li r3,24
	ctx.r3.s64 = 24;
	// vand128 v11,v44,v46
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vsldoi128 v39,v13,v127,12
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 4));
	// vor128 v27,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vmaddfp v22,v29,v12,v2
	simde_mm_store_ps(ctx.v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vor128 v37,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v26,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vmaddfp v21,v24,v12,v1
	simde_mm_store_ps(ctx.v21.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v24.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// lvlx128 v38,r31,r3
	temp.u32 = ctx.r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v40,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vand128 v10,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vor128 v24,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vslw128 v55,v60,v60
	ctx.v55.u32[0] = ctx.v60.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v60.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v60.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v60.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// vor128 v29,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vsel v20,v30,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8))));
	// vmaddfp v12,v22,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v22.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v22,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xFF));
	// vmaddfp v9,v21,v25,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v21.f32), simde_mm_load_ps(ctx.v25.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vaddfp128 v36,v40,v20
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v20.f32)));
	// vor128 v34,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v33,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsel v25,v12,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vcfpsxws128 v35,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v36.f32)));
	// vor128 v30,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vor128 v29,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vsel v12,v30,v29,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8))));
	// vor128 v32,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vxor v12,v8,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// vcsxwfp128 v57,v35,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vxor128 v8,v8,v32
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vor128 v30,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vsel v29,v12,v25,v17
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8))));
	// vor128 v25,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vsel v12,v8,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v9,v28,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8))));
	// vor128 v58,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vxor128 v8,v58,v43
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v30,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vsel v12,v27,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v8,v9,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsldoi128 v9,v60,v127,12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 4));
	// vslw128 v30,v37,v37
	ctx.v30.u32[0] = ctx.v37.u32[0] << (ctx.v37.u8[0] & 0x1F);
	ctx.v30.u32[1] = ctx.v37.u32[1] << (ctx.v37.u8[4] & 0x1F);
	ctx.v30.u32[2] = ctx.v37.u32[2] << (ctx.v37.u8[8] & 0x1F);
	ctx.v30.u32[3] = ctx.v37.u32[3] << (ctx.v37.u8[12] & 0x1F);
	// vsel v28,v12,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8))));
	// vor128 v56,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vand128 v12,v35,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vor v8,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vadduws v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmaddcfp128 v8,v22,v8,v127
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v22.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vand128 v54,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v53,v12,v48
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vor128 v12,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// vor128 v51,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vor128 v7,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vor128 v47,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vnmsubfp v20,v12,v26,v23
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v20.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v23.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vand128 v50,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// vcmpequw128 v19,v54,v127
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vand128 v49,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vsel128 v12,v63,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vcmpequw128 v18,v50,v127
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vcmpequw128 v21,v53,v127
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vcmpequw128 v23,v49,v127
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vaddfp128 v46,v47,v12
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v52,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// vor128 v28,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vslw128 v33,v60,v60
	ctx.v33.u32[0] = ctx.v60.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v33.u32[1] = ctx.v60.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v33.u32[2] = ctx.v60.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v33.u32[3] = ctx.v60.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// vnmsubfp v8,v7,v24,v20
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v24.f32)), simde_mm_load_ps(ctx.v20.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcfpsxws128 v45,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// vor v12,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v24,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmaddcfp128 v12,v8,v12,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vcsxwfp128 v44,v45,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmaddfp v7,v6,v12,v5
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v26,v4,v12,v3
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddcfp128 v24,v12,v24,v127
	simde_mm_store_ps(ctx.v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v24.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v7,v7,v12,v2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v26,v26,v12,v1
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v26.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v12,v7,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v8,v26,v24,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v26.f32), simde_mm_load_ps(ctx.v24.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vor128 v43,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v42,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsel v24,v12,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vor128 v7,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vor128 v26,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vsel v12,v7,v26,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8))));
	// vxor v26,v31,v24
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8)));
	// vxor v8,v31,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vsel v31,v26,v24,v21
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8))));
	// vsel v7,v8,v12,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vsel v26,v25,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8))));
	// vor128 v41,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vxor128 v7,v31,v55
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v12,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v8,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vsel v31,v27,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vand128 v12,v45,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vsel v27,v28,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v29,v31,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// vadduws v28,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vsel v7,v26,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vand128 v37,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v36,v12,v48
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vspltw v20,v29,0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), 0xFF));
	// vand128 v35,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltw v24,v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), 0xAA));
	// vor128 v8,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v40,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// vspltw v27,v29,2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), 0x55));
	// vor128 v38,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor128 v12,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vor v0,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vsel v31,v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vspltw128 v21,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vand128 v34,v28,v48
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vspltw128 v23,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xFF));
	// vor128 v7,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vspltw128 v25,v40,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xAA));
	// vcmpequw128 v18,v37,v127
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vspltw128 v26,v38,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xAA));
	// vcmpequw128 v19,v36,v127
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vspltw128 v28,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x55));
	// vcmpequw128 v17,v35,v127
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vspltw128 v29,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0x55));
	// vnmsubfp128 v0,v12,v62,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v62.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v10,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v124,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v124.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0x55));
	// vcmpequw128 v22,v34,v127
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vspltw128 v125,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v125.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x55));
	// vspltw128 v126,v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0x55));
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// vnmsubfp128 v12,v7,v61,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v61.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v0,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmaddcfp128 v0,v12,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v6,v6,v0,v5
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vor v5,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmaddfp v7,v4,v0,v3
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vspltw128 v3,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// vspltw128 v4,v39,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xAA));
	// vmaddcfp128 v5,v0,v5,v127
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v6,v6,v0,v2
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vspltw128 v2,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vmaddfp v7,v7,v0,v1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vspltw128 v1,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// vmaddfp v13,v6,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v7,v5,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v5,v56,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xAA));
	// vsel v6,v13,v0,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsel v12,v13,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vxor v7,v30,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vor128 v32,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsel v6,v7,v6,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vor128 v0,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vxor128 v13,v30,v32
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vor128 v63,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vspltw128 v6,v52,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xAA));
	// vsel v12,v13,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v62,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsel v7,v8,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vxor128 v0,v62,v33
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vsel v8,v7,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vsel v12,v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsel v0,v12,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor v12,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v20.u8));
	// vor v13,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vor v11,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vmaddcfp128 v12,v8,v12,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v13,v8,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v11,v8,v11,v127
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor v8,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vmaddfp v12,v0,v24,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v24.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v0,v25,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v25.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v26,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vor v11,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmaddfp v12,v31,v27,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v31,v28,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v31,v29,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddcfp128 v11,v12,v11,v127
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v2,v12,v2,v127
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v8,v12,v8,v127
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v11,v13,v4,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v13,v5,v2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v13,v13,v6,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddcfp128 v124,v0,v124,v11
	simde_mm_store_ps(ctx.v124.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v124.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v125,v0,v125,v12
	simde_mm_store_ps(ctx.v125.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v125.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddcfp128 v126,v0,v126,v13
	simde_mm_store_ps(ctx.v126.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// bctrl 
	ctx.lr = 0x839D7AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839d7b24
	if (!cr6.eq) goto loc_839D7B24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7B04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D7B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_839D7B24:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d7b4c
	if (cr6.eq) goto loc_839D7B4C;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839d7b44
	if (!cr6.eq) goto loc_839D7B44;
	// stfs f28,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x839d7b64
	goto loc_839D7B64;
loc_839D7B44:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d7b64
	if (!cr6.eq) goto loc_839D7B64;
loc_839D7B4C:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d7b64
	if (cr6.eq) goto loc_839D7B64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,11768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_839D7B64:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v0,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vmaddcfp128 v0,v13,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw v12,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmaddcfp128 v12,v124,v12,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v124.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v13,v125,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddcfp128 v0,v126,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839D7BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839d7c24
	if (cr6.eq) goto loc_839D7C24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7C08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,8976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_839D7C24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddcfp128 v12,v124,v12,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v124.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw128 v13,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lfs f9,12(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f31,f29,f27
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// vmaddcfp128 v13,v125,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddcfp128 v0,v126,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v59,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v60,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw128 v58,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// stvx128 v59,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// stvx128 v58,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f3,36(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839D7CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d7d0c
	if (cr6.eq) goto loc_839D7D0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7CF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d7d0c
	if (cr6.eq) goto loc_839D7D0C;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x839d7d5c
	goto loc_839D7D5C;
loc_839D7D0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7D24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d7d60
	if (cr6.eq) goto loc_839D7D60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d7d60
	if (cr6.eq) goto loc_839D7D60;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_839D7D5C:
	// stfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_839D7D60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d7db8
	if (cr6.eq) goto loc_839D7DB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D7D9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d7db8
	if (cr6.eq) goto loc_839D7DB8;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r9.u8);
loc_839D7DB8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839d7e04
	if (!cr6.lt) goto loc_839D7E04;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_839D7E04:
	// lvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v56,1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_set1_epi32(int(0x1)));
	// lvx128 v55,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_set1_epi32(int(0x0)));
	// vsubfp128 v13,v55,v57
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v57.f32)));
	// addi r11,r29,92
	ctx.r11.s64 = ctx.r29.s64 + 92;
	// stfs f0,92(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vcsxwfp128 v9,v56,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvlx128 v54,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v8,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// vmsum3fp128 v53,v13,v13
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lfs f0,-23580(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// vrsqrtefp128 v0,v52
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v52.f32))));
	// vmulfp128 v11,v52,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v11,v12,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v0,v8,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp128 v51,v0,v57
	simde_mm_store_ps(ctx.v51.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v51,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stfs f27,68(r29)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// stfs f0,72(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// lbz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// stb r9,90(r29)
	PPC_STORE_U8(ctx.r29.u32 + 90, ctx.r9.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831d14ec
	ctx.lr = 0x839D7E84;
	__restvmx_124(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x839D7E8C;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D7E90"))) PPC_WEAK_FUNC(sub_839D7E90);
PPC_FUNC_IMPL(__imp__sub_839D7E90) {
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
	// bl 0x839dfa70
	ctx.lr = 0x839D7EB0;
	sub_839DFA70(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,22704
	ctx.r9.s64 = ctx.r11.s64 + 22704;
	// addi r8,r10,22692
	ctx.r8.s64 = ctx.r10.s64 + 22692;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_839D7EE8"))) PPC_WEAK_FUNC(sub_839D7EE8);
PPC_FUNC_IMPL(__imp__sub_839D7EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// stvx128 v58,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D7F38"))) PPC_WEAK_FUNC(sub_839D7F38);
PPC_FUNC_IMPL(__imp__sub_839D7F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D7F60"))) PPC_WEAK_FUNC(sub_839D7F60);
PPC_FUNC_IMPL(__imp__sub_839D7F60) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,22704
	ctx.r9.s64 = ctx.r11.s64 + 22704;
	// addi r8,r10,22692
	ctx.r8.s64 = ctx.r10.s64 + 22692;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839df730
	ctx.lr = 0x839D7F98;
	sub_839DF730(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d7fb8
	if (cr6.eq) goto loc_839D7FB8;
	// bl 0x82595188
	ctx.lr = 0x839D7FA8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839D7FB8;
	sub_825952B8(ctx, base);
loc_839D7FB8:
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

__attribute__((alias("__imp__sub_839D7FD4"))) PPC_WEAK_FUNC(sub_839D7FD4);
PPC_FUNC_IMPL(__imp__sub_839D7FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D7FD8"))) PPC_WEAK_FUNC(sub_839D7FD8);
PPC_FUNC_IMPL(__imp__sub_839D7FD8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839dfa70
	ctx.lr = 0x839D7FF8;
	sub_839DFA70(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r8,r10,22792
	ctx.r8.s64 = ctx.r10.s64 + 22792;
	// addi r7,r9,22784
	ctx.r7.s64 = ctx.r9.s64 + 22784;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_839D803C"))) PPC_WEAK_FUNC(sub_839D803C);
PPC_FUNC_IMPL(__imp__sub_839D803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8040"))) PPC_WEAK_FUNC(sub_839D8040);
PPC_FUNC_IMPL(__imp__sub_839D8040) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,22792
	ctx.r9.s64 = ctx.r11.s64 + 22792;
	// addi r8,r10,22784
	ctx.r8.s64 = ctx.r10.s64 + 22784;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839df730
	ctx.lr = 0x839D8078;
	sub_839DF730(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d8098
	if (cr6.eq) goto loc_839D8098;
	// bl 0x82595188
	ctx.lr = 0x839D8088;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839D8098;
	sub_825952B8(ctx, base);
loc_839D8098:
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

__attribute__((alias("__imp__sub_839D80B4"))) PPC_WEAK_FUNC(sub_839D80B4);
PPC_FUNC_IMPL(__imp__sub_839D80B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D80B8"))) PPC_WEAK_FUNC(sub_839D80B8);
PPC_FUNC_IMPL(__imp__sub_839D80B8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839dfa70
	ctx.lr = 0x839D80D8;
	sub_839DFA70(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,22880
	ctx.r9.s64 = ctx.r11.s64 + 22880;
	// addi r8,r10,22872
	ctx.r8.s64 = ctx.r10.s64 + 22872;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stb r7,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_839D8118"))) PPC_WEAK_FUNC(sub_839D8118);
PPC_FUNC_IMPL(__imp__sub_839D8118) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,22880
	ctx.r9.s64 = ctx.r11.s64 + 22880;
	// addi r8,r10,22872
	ctx.r8.s64 = ctx.r10.s64 + 22872;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839df730
	ctx.lr = 0x839D8150;
	sub_839DF730(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839d8170
	if (cr6.eq) goto loc_839D8170;
	// bl 0x82595188
	ctx.lr = 0x839D8160;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839D8170;
	sub_825952B8(ctx, base);
loc_839D8170:
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

__attribute__((alias("__imp__sub_839D818C"))) PPC_WEAK_FUNC(sub_839D818C);
PPC_FUNC_IMPL(__imp__sub_839D818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8190"))) PPC_WEAK_FUNC(sub_839D8190);
PPC_FUNC_IMPL(__imp__sub_839D8190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,42
	ctx.r11.s64 = ctx.r4.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d81b4
	if (cr6.eq) goto loc_839D81B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_839D81B4:
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// lwz r11,4752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4752);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4752, ctx.r11.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
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
}

__attribute__((alias("__imp__sub_839D81F0"))) PPC_WEAK_FUNC(sub_839D81F0);
PPC_FUNC_IMPL(__imp__sub_839D81F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,316(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// blt cr6,0x839d8250
	if (cr6.lt) goto loc_839D8250;
	// lhz r11,310(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 310);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fneg f1,f10
	ctx.f1.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_839D8250:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D8258"))) PPC_WEAK_FUNC(sub_839D8258);
PPC_FUNC_IMPL(__imp__sub_839D8258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r11,310(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 310);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D82B4"))) PPC_WEAK_FUNC(sub_839D82B4);
PPC_FUNC_IMPL(__imp__sub_839D82B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D82B8"))) PPC_WEAK_FUNC(sub_839D82B8);
PPC_FUNC_IMPL(__imp__sub_839D82B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D82C0;
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8353b168
	ctx.lr = 0x839D82E4;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d84f4
	if (cr6.eq) goto loc_839D84F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d84f4
	if (cr6.eq) goto loc_839D84F4;
	// bl 0x82a52b70
	ctx.lr = 0x839D8310;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839d84f4
	if (!cr6.eq) goto loc_839D84F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8330;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,15(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839d834c
	if (cr6.eq) goto loc_839D834C;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_839D834C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d8380
	if (cr6.eq) goto loc_839D8380;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f0,22156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22156);
	ctx.f0.f64 = double(temp.f32);
	// b 0x839d83ac
	goto loc_839D83AC;
loc_839D8380:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d83b8
	if (cr6.eq) goto loc_839D83B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-11416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11416);
	ctx.f0.f64 = double(temp.f32);
loc_839D83AC:
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stb r29,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_839D83B8:
	// fabs f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x839d83e8
	if (cr6.lt) goto loc_839D83E8;
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stb r29,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// lfs f0,7380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x839d84cc
	goto loc_839D84CC;
loc_839D83E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8400;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d841c
	if (cr6.eq) goto loc_839D841C;
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stb r9,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r9.u8);
	// b 0x839d84cc
	goto loc_839D84CC;
loc_839D841C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d8474
	if (cr6.eq) goto loc_839D8474;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d8474
	if (cr6.eq) goto loc_839D8474;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d81f0
	ctx.lr = 0x839D8470;
	sub_839D81F0(ctx, base);
	// b 0x839d84c8
	goto loc_839D84C8;
loc_839D8474:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D848C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d84cc
	if (cr6.eq) goto loc_839D84CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D84B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d84cc
	if (cr6.eq) goto loc_839D84CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839d8258
	ctx.lr = 0x839D84C8;
	sub_839D8258(ctx, base);
loc_839D84C8:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_839D84CC:
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d84e0
	if (cr6.eq) goto loc_839D84E0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_839D84E0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839D84F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D850C"))) PPC_WEAK_FUNC(sub_839D850C);
PPC_FUNC_IMPL(__imp__sub_839D850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8510"))) PPC_WEAK_FUNC(sub_839D8510);
PPC_FUNC_IMPL(__imp__sub_839D8510) {
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
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// lhz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839d8570
	if (cr6.eq) goto loc_839D8570;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d8570
	if (cr6.eq) goto loc_839D8570;
	// addi r31,r3,168
	ctx.r31.s64 = ctx.r3.s64 + 168;
	// li r30,26
	ctx.r30.s64 = 26;
loc_839D8548:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d8564
	if (cr6.eq) goto loc_839D8564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D8564:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d8548
	if (!cr0.eq) goto loc_839D8548;
loc_839D8570:
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

__attribute__((alias("__imp__sub_839D8588"))) PPC_WEAK_FUNC(sub_839D8588);
PPC_FUNC_IMPL(__imp__sub_839D8588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D8590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r3,168
	ctx.r31.s64 = ctx.r3.s64 + 168;
	// li r30,26
	ctx.r30.s64 = 26;
loc_839D85A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d85c8
	if (cr6.eq) goto loc_839D85C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D85BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// and r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_839D85C8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d85a0
	if (!cr0.eq) goto loc_839D85A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D85E0"))) PPC_WEAK_FUNC(sub_839D85E0);
PPC_FUNC_IMPL(__imp__sub_839D85E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// lfs f7,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// fcmpu cr6,f1,f7
	cr6.compare(ctx.f1.f64, ctx.f7.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lhz r8,310(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 310);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// beq cr6,0x839d8668
	if (cr6.eq) goto loc_839D8668;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
loc_839D8668:
	// fcmpu cr6,f12,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// bgt cr6,0x839d86a8
	if (cr6.gt) goto loc_839D86A8;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839d867c
	if (!cr6.lt) goto loc_839D867C;
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
loc_839D867C:
	// fadds f11,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x839d86ec
	if (cr6.gt) goto loc_839D86EC;
	// fsubs f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f12,22960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22960);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x839d86ec
	goto loc_839D86EC;
loc_839D86A8:
	// fmr f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f10.f64;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839d86b8
	if (!cr6.lt) goto loc_839D86B8;
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
loc_839D86B8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x839d86c4
	if (!cr6.lt) goto loc_839D86C4;
	// fadds f11,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
loc_839D86C4:
	// fadds f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x839d86ec
	if (cr6.gt) goto loc_839D86EC;
	// fsubs f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,22960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22960);
	ctx.f13.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
loc_839D86EC:
	// fadds f0,f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f8
	cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x839d8710
	if (!cr6.gt) goto loc_839D8710;
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// b 0x839d871c
	goto loc_839D871C;
loc_839D8710:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x839d8720
	if (!cr6.lt) goto loc_839D8720;
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
loc_839D871C:
	// stfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_839D8720:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,23372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lhz r10,310(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 310);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// divw r8,r9,r10
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// andc r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// twllei r10,0
	// twlgei r4,-1
	// sth r5,308(r3)
	PPC_STORE_U16(ctx.r3.u32 + 308, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D876C"))) PPC_WEAK_FUNC(sub_839D876C);
PPC_FUNC_IMPL(__imp__sub_839D876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8770"))) PPC_WEAK_FUNC(sub_839D8770);
PPC_FUNC_IMPL(__imp__sub_839D8770) {
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
	// lhz r8,312(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// ble cr6,0x839d87a8
	if (!cr6.gt) goto loc_839D87A8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x839d87bc
	if (!cr6.lt) goto loc_839D87BC;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x839d87bc
	if (!cr6.gt) goto loc_839D87BC;
	// b 0x839d87b8
	goto loc_839D87B8;
loc_839D87A8:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x839d87b8
	if (cr6.gt) goto loc_839D87B8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x839d87bc
	if (!cr6.lt) goto loc_839D87BC;
loc_839D87B8:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_839D87BC:
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r9,310(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 310);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// divw r6,r10,r9
	ctx.r6.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f1,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// andc r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// sth r11,308(r3)
	PPC_STORE_U16(ctx.r3.u32 + 308, ctx.r11.u16);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// twllei r9,0
	// twlgei r10,-1
	// bl 0x839d85e0
	ctx.lr = 0x839D8810;
	sub_839D85E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D8820"))) PPC_WEAK_FUNC(sub_839D8820);
PPC_FUNC_IMPL(__imp__sub_839D8820) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bgt cr6,0x839d884c
	if (cr6.gt) goto loc_839D884C;
loc_839D8838:
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
loc_839D884C:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lhz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839d8898
	if (!cr6.lt) goto loc_839D8898;
	// lhz r8,318(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 318);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// twllei r8,0
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mullw r4,r6,r8
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
	// andc r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// twlgei r8,-1
	// b 0x839d88a4
	goto loc_839D88A4;
loc_839D8898:
	// lhz r8,314(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 314);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_839D88A4:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x839d8838
	if (!cr6.gt) goto loc_839D8838;
	// lhz r8,318(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 318);
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// twllei r8,0
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r6,r7,r8
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r8.u32);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x839d8770
	ctx.lr = 0x839D88D0;
	sub_839D8770(ctx, base);
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

__attribute__((alias("__imp__sub_839D88E4"))) PPC_WEAK_FUNC(sub_839D88E4);
PPC_FUNC_IMPL(__imp__sub_839D88E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D88E8"))) PPC_WEAK_FUNC(sub_839D88E8);
PPC_FUNC_IMPL(__imp__sub_839D88E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D88F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,172
	ctx.r31.s64 = ctx.r3.s64 + 172;
	// li r30,25
	ctx.r30.s64 = 25;
loc_839D8900:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d8920
	if (cr6.eq) goto loc_839D8920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8920;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D8920:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d8900
	if (!cr0.eq) goto loc_839D8900;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8934"))) PPC_WEAK_FUNC(sub_839D8934);
PPC_FUNC_IMPL(__imp__sub_839D8934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8938"))) PPC_WEAK_FUNC(sub_839D8938);
PPC_FUNC_IMPL(__imp__sub_839D8938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D8940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,172
	ctx.r31.s64 = ctx.r3.s64 + 172;
	// li r30,25
	ctx.r30.s64 = 25;
loc_839D8950:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d8970
	if (cr6.eq) goto loc_839D8970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D8970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D8970:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d8950
	if (!cr0.eq) goto loc_839D8950;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8984"))) PPC_WEAK_FUNC(sub_839D8984);
PPC_FUNC_IMPL(__imp__sub_839D8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8988"))) PPC_WEAK_FUNC(sub_839D8988);
PPC_FUNC_IMPL(__imp__sub_839D8988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,26
	cr6.compare<int32_t>(ctx.r4.s32, 26, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839D89C4"))) PPC_WEAK_FUNC(sub_839D89C4);
PPC_FUNC_IMPL(__imp__sub_839D89C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D89C8"))) PPC_WEAK_FUNC(sub_839D89C8);
PPC_FUNC_IMPL(__imp__sub_839D89C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,26
	cr6.compare<int32_t>(ctx.r4.s32, 26, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839D8A04"))) PPC_WEAK_FUNC(sub_839D8A04);
PPC_FUNC_IMPL(__imp__sub_839D8A04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D8A08"))) PPC_WEAK_FUNC(sub_839D8A08);
PPC_FUNC_IMPL(__imp__sub_839D8A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d8a1c
	if (cr6.eq) goto loc_839D8A1C;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// blr 
	return;
loc_839D8A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D8A24"))) PPC_WEAK_FUNC(sub_839D8A24);
PPC_FUNC_IMPL(__imp__sub_839D8A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8A28"))) PPC_WEAK_FUNC(sub_839D8A28);
PPC_FUNC_IMPL(__imp__sub_839D8A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839D8A3C"))) PPC_WEAK_FUNC(sub_839D8A3C);
PPC_FUNC_IMPL(__imp__sub_839D8A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8A40"))) PPC_WEAK_FUNC(sub_839D8A40);
PPC_FUNC_IMPL(__imp__sub_839D8A40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839d8118
	sub_839D8118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8A48"))) PPC_WEAK_FUNC(sub_839D8A48);
PPC_FUNC_IMPL(__imp__sub_839D8A48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839d8040
	sub_839D8040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8A50"))) PPC_WEAK_FUNC(sub_839D8A50);
PPC_FUNC_IMPL(__imp__sub_839D8A50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839d7f60
	sub_839D7F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8A58"))) PPC_WEAK_FUNC(sub_839D8A58);
PPC_FUNC_IMPL(__imp__sub_839D8A58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x839d82b8
	ctx.lr = 0x839D8A80;
	sub_839D82B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64;
	// bl 0x839d85e0
	ctx.lr = 0x839D8A90;
	sub_839D85E0(ctx, base);
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

__attribute__((alias("__imp__sub_839D8AA8"))) PPC_WEAK_FUNC(sub_839D8AA8);
PPC_FUNC_IMPL(__imp__sub_839D8AA8) {
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
	ctx.lr = 0x839D8AB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839d8b5c
	if (cr6.eq) goto loc_839D8B5C;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d8b54
	if (cr6.eq) goto loc_839D8B54;
	// lhz r30,308(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 308);
	// bl 0x83935df8
	ctx.lr = 0x839D8ADC;
	sub_83935DF8(ctx, base);
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r28,r29,168
	ctx.r28.s64 = ctx.r29.s64 + 168;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r27,26
	ctx.r27.s64 = 26;
	// divw r9,r10,r31
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r31.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r8,r9,r31
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// andc r5,r31,r7
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// twllei r31,0
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// twlgei r5,-1
loc_839D8B14:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d8b48
	if (cr6.eq) goto loc_839D8B48;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// rlwinm r11,r30,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFF0;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D8B48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D8B48:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x839d8b14
	if (!cr0.eq) goto loc_839D8B14;
loc_839D8B54:
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c8120
	ctx.lr = 0x839D8B5C;
	sub_833C8120(ctx, base);
loc_839D8B5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8B64"))) PPC_WEAK_FUNC(sub_839D8B64);
PPC_FUNC_IMPL(__imp__sub_839D8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8B68"))) PPC_WEAK_FUNC(sub_839D8B68);
PPC_FUNC_IMPL(__imp__sub_839D8B68) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r30,636(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a57dd8
	ctx.lr = 0x839D8B9C;
	sub_82A57DD8(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r10.u16);
	// mulli r10,r8,6456
	ctx.r10.s64 = ctx.r8.s64 * 6456;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// sth r9,314(r31)
	PPC_STORE_U16(ctx.r31.u32 + 314, ctx.r9.u16);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,6200(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6200);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r11,r11,-32767
	ctx.r11.s64 = ctx.r11.s64 + -32767;
	// addic r5,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfe r3,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_839D8BE8"))) PPC_WEAK_FUNC(sub_839D8BE8);
PPC_FUNC_IMPL(__imp__sub_839D8BE8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r30,636(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a57ef0
	ctx.lr = 0x839D8C1C;
	sub_82A57EF0(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r10.u16);
	// mulli r10,r8,6456
	ctx.r10.s64 = ctx.r8.s64 * 6456;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// sth r9,318(r31)
	PPC_STORE_U16(ctx.r31.u32 + 318, ctx.r9.u16);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,6200(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6200);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r11,r11,-32767
	ctx.r11.s64 = ctx.r11.s64 + -32767;
	// addic r5,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfe r3,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_839D8C68"))) PPC_WEAK_FUNC(sub_839D8C68);
PPC_FUNC_IMPL(__imp__sub_839D8C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839D8C70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d8e0c
	if (cr6.eq) goto loc_839D8E0C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r27,636(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// lhz r26,14(r27)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x839d8d10
	if (!cr6.gt) goto loc_839D8D10;
	// li r28,0
	ctx.r28.s64 = 0;
loc_839D8CA4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mulli r9,r30,6456
	ctx.r9.s64 = ctx.r30.s64 * 6456;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,52(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839d8cf0
	if (cr6.eq) goto loc_839D8CF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83572958
	ctx.lr = 0x839D8CD4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d8cf0
	if (cr6.eq) goto loc_839D8CF0;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mulli r10,r30,2000
	ctx.r10.s64 = ctx.r30.s64 * 2000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x839d8cf4
	goto loc_839D8CF4;
loc_839D8CF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839D8CF4:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blt cr6,0x839d8ca4
	if (cr6.lt) goto loc_839D8CA4;
loc_839D8D10:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// ble cr6,0x839d8d3c
	if (!cr6.gt) goto loc_839D8D3C;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839D8D24:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x839d8d24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839D8D24;
loc_839D8D3C:
	// addic. r10,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r10.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x839d8d64
	if (!cr0.gt) goto loc_839D8D64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839D8D4C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x839d8d4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839D8D4C;
loc_839D8D64:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,-12(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12, ctx.r11.u32);
	// bl 0x83935df8
	ctx.lr = 0x839D8D88;
	sub_83935DF8(ctx, base);
	// mulli r6,r3,60
	ctx.r6.s64 = ctx.r3.s64 * 60;
	// lhz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 312);
	// lhz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// divw r9,r4,r5
	ctx.r9.s32 = PPCDivide(ctx.r4.s32, ctx.r5.s32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mullw r6,r9,r5
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// divw r7,r3,r5
	ctx.r7.s32 = PPCDivide(ctx.r3.s32, ctx.r5.s32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// twllei r5,0
	// twllei r5,0
	// subf r5,r6,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r6.s64;
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// subf r5,r9,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r9,r7,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFF0;
	// rotlwi r7,r3,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r6,r4,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r5,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFF0;
	// andc r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// twlgei r5,-1
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// twlgei r6,-1
loc_839D8E0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8E14"))) PPC_WEAK_FUNC(sub_839D8E14);
PPC_FUNC_IMPL(__imp__sub_839D8E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D8E18"))) PPC_WEAK_FUNC(sub_839D8E18);
PPC_FUNC_IMPL(__imp__sub_839D8E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D8E20;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d8f14
	if (cr6.eq) goto loc_839D8F14;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,6260
	ctx.r31.s64 = ctx.r11.s64 + 6260;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_839D8E64:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r9,r29,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r26,12(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r25,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r25.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r24,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r24.u32);
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r27.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stw r26,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r26.u32);
	// bl 0x82a5c818
	ctx.lr = 0x839D8ED8;
	sub_82A5C818(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x837b4168
	ctx.lr = 0x839D8F04;
	sub_837B4168(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x839d8e64
	if (cr6.lt) goto loc_839D8E64;
loc_839D8F14:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D8F28"))) PPC_WEAK_FUNC(sub_839D8F28);
PPC_FUNC_IMPL(__imp__sub_839D8F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839D8F30;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9068
	if (cr6.eq) goto loc_839D9068;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_839D8F6C:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r26,r10,6324
	ctx.r26.s64 = ctx.r10.s64 + 6324;
	// addi r25,r11,6324
	ctx.r25.s64 = ctx.r11.s64 + 6324;
	// lwz r7,6324(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6324);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r28,6324(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6324);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r27,6328(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6328);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r26,6328(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6328);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r25,6332(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6332);
	// lwz r24,6332(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6332);
	// lwz r10,6336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6336);
	// lwz r11,6336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6336);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r26,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r26.u32);
	// stw r25,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r25.u32);
	// stw r24,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r24.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// bl 0x82a5c818
	ctx.lr = 0x839D8FF0;
	sub_82A5C818(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bgt cr6,0x839d905c
	if (cr6.gt) goto loc_839D905C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839d9034
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839D9034;
	// bdzf 4*cr6+eq,0x839d9040
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839D9040;
	// bne cr6,0x839d904c
	if (!cr6.eq) goto loc_839D904C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839d9050
	goto loc_839D9050;
loc_839D9034:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x839d9054
	goto loc_839D9054;
loc_839D9040:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x839d9054
	goto loc_839D9054;
loc_839D904C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839D9050:
	// li r4,1
	ctx.r4.s64 = 1;
loc_839D9054:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x837a59c0
	ctx.lr = 0x839D905C;
	sub_837A59C0(ctx, base);
loc_839D905C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x839d8f6c
	if (cr6.lt) goto loc_839D8F6C;
loc_839D9068:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D907C"))) PPC_WEAK_FUNC(sub_839D907C);
PPC_FUNC_IMPL(__imp__sub_839D907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D9080"))) PPC_WEAK_FUNC(sub_839D9080);
PPC_FUNC_IMPL(__imp__sub_839D9080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D9088;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce75c
	ctx.lr = 0x839D9090;
	__savefpr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d93ac
	if (cr6.eq) goto loc_839D93AC;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// beq cr6,0x839d93ac
	if (cr6.eq) goto loc_839D93AC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d93ac
	if (cr6.eq) goto loc_839D93AC;
	// lhz r3,6246(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6246);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lhz r5,6244(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6244);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r31,6244(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6244);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r7,6246(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6246);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// lhz r4,6248(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6248);
	// lfs f0,-9408(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9408);
	ctx.f0.f64 = double(temp.f32);
	// lhz r9,6250(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6250);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lhz r6,6242(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6242);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lhz r29,6250(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6250);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// lhz r30,6248(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6248);
	// lhz r28,6242(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6242);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsh r7,r30
	ctx.r7.s64 = ctx.r30.s16;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f8,128(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f4,128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lbz r6,6256(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6256);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// lbz r4,6257(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6257);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// lbz r8,6257(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6257);
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// lhz r3,6252(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6252);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lhz r6,6254(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6254);
	// fcfid f12,f10
	ctx.f12.f64 = double(ctx.f10.s64);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// fcfid f9,f5
	ctx.f9.f64 = double(ctx.f5.s64);
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// frsp f6,f3
	ctx.f6.f64 = double(float(ctx.f3.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// frsp f31,f10
	ctx.f31.f64 = double(float(ctx.f10.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f30,f9
	ctx.f30.f64 = double(float(ctx.f9.f64));
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfd f5,128(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lhz r5,6254(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6254);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lfd f2,128(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// lbz r11,6256(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6256);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// fmuls f28,f31,f0
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f27,128(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f26,112(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfs f13,21700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21700);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lhz r6,6252(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6252);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f25,128(r1)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f31,128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// frsp f24,f31
	ctx.f24.f64 = double(float(ctx.f31.f64));
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// fcfid f23,f27
	ctx.f23.f64 = double(ctx.f27.s64);
	// lfs f12,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// fmuls f27,f30,f0
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fcfid f25,f25
	ctx.f25.f64 = double(ctx.f25.s64);
	// fmuls f30,f24,f13
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// frsp f24,f23
	ctx.f24.f64 = double(float(ctx.f23.f64));
	// lfd f23,128(r1)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f26,f26
	ctx.f26.f64 = double(float(ctx.f26.f64));
	// fcfid f23,f23
	ctx.f23.f64 = double(ctx.f23.s64);
	// fmuls f22,f5,f13
	ctx.f22.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmsubs f21,f6,f13,f30
	ctx.f21.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f30.f64));
	// fmuls f5,f26,f0
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// frsp f26,f23
	ctx.f26.f64 = double(float(ctx.f23.f64));
	// frsp f25,f25
	ctx.f25.f64 = double(float(ctx.f25.f64));
	// fmuls f6,f24,f0
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmsubs f13,f2,f13,f22
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 - ctx.f22.f64));
	// fmadds f2,f21,f1,f30
	ctx.f2.f64 = double(float(ctx.f21.f64 * ctx.f1.f64 + ctx.f30.f64));
	// fmuls f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmadds f30,f13,f1,f22
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f22.f64));
	// fcmpu cr6,f2,f12
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// ble cr6,0x839d92e4
	if (!cr6.gt) goto loc_839D92E4;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// b 0x839d92f0
	goto loc_839D92F0;
loc_839D92E4:
	// fcmpu cr6,f2,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bge cr6,0x839d92f0
	if (!cr6.lt) goto loc_839D92F0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
loc_839D92F0:
	// fcmpu cr6,f30,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// ble cr6,0x839d9300
	if (!cr6.gt) goto loc_839D9300;
	// fmr f30,f12
	ctx.f30.f64 = ctx.f12.f64;
	// b 0x839d930c
	goto loc_839D930C;
loc_839D9300:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x839d930c
	if (!cr6.lt) goto loc_839D930C;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_839D930C:
	// fsubs f12,f3,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fsubs f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f4,f28,f8
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fsubs f3,f27,f7
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f7.f64));
	// fsubs f28,f26,f6
	ctx.f28.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsubs f29,f29,f9
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f9.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f28,f28,f1
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f1,f29,f1,f9
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f29,f4,f8
	ctx.f29.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f27,f3,f7
	ctx.f27.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f28,f28,f6
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f6.f64));
	// fadds f26,f0,f5
	ctx.f26.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0d80
	ctx.lr = 0x839D9378;
	sub_837A0D80(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f28,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f26,136(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f27,120(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v1,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0cd0
	ctx.lr = 0x839D93AC;
	sub_837A0CD0(ctx, base);
loc_839D93AC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7a8
	ctx.lr = 0x839D93B8;
	__restfpr_21(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D93BC"))) PPC_WEAK_FUNC(sub_839D93BC);
PPC_FUNC_IMPL(__imp__sub_839D93BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D93C0"))) PPC_WEAK_FUNC(sub_839D93C0);
PPC_FUNC_IMPL(__imp__sub_839D93C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839D93C8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce770
	ctx.lr = 0x839D93D0;
	__savefpr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x837b37e8
	ctx.lr = 0x839D93E0;
	sub_837B37E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d9508
	if (cr6.eq) goto loc_839D9508;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839d9508
	if (cr6.eq) goto loc_839D9508;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r25,8(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_839D9404:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x839d9428
	if (cr6.gt) goto loc_839D9428;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839d9420
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839D9420;
	// bdzf 4*cr6+eq,0x839d9420
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839D9420;
	// bne cr6,0x839d9420
	if (!cr6.eq) goto loc_839D9420;
loc_839D9420:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x839d942c
	goto loc_839D942C;
loc_839D9428:
	// li r29,0
	ctx.r29.s64 = 0;
loc_839D942C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839d94fc
	if (cr6.eq) goto loc_839D94FC;
	// addi r28,r25,6392
	ctx.r28.s64 = ctx.r25.s64 + 6392;
	// addi r27,r24,6392
	ctx.r27.s64 = ctx.r24.s64 + 6392;
loc_839D9440:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a58d40
	ctx.lr = 0x839D9450;
	sub_82A58D40(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a58d40
	ctx.lr = 0x839D9464;
	sub_82A58D40(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// bl 0x82a58a58
	ctx.lr = 0x839D9470;
	sub_82A58A58(ctx, base);
	// lhz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r22.u32 + 4);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82a58a58
	ctx.lr = 0x839D947C;
	sub_82A58A58(ctx, base);
	// lhz r3,2(r22)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r22.u32 + 2);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82a58a58
	ctx.lr = 0x839D9488;
	sub_82A58A58(ctx, base);
	// lbz r21,1(r22)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lbz r22,0(r22)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// lhz r3,6(r23)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r23.u32 + 6);
	// bl 0x82a58a58
	ctx.lr = 0x839D949C;
	sub_82A58A58(ctx, base);
	// lhz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x82a58a58
	ctx.lr = 0x839D94A8;
	sub_82A58A58(ctx, base);
	// lhz r3,2(r23)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r23.u32 + 2);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x82a58a58
	ctx.lr = 0x839D94B4;
	sub_82A58A58(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r8,1(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stb r22,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r22.u8);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// stb r21,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r21.u8);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// bl 0x837b3810
	ctx.lr = 0x839D94F0;
	sub_837B3810(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x839d9440
	if (cr6.lt) goto loc_839D9440;
loc_839D94FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x839d9404
	if (cr6.lt) goto loc_839D9404;
loc_839D9508:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7bc
	ctx.lr = 0x839D9514;
	__restfpr_26(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D9518"))) PPC_WEAK_FUNC(sub_839D9518);
PPC_FUNC_IMPL(__imp__sub_839D9518) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8378b870
	ctx.lr = 0x839D9530;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839d959c
	if (cr6.eq) goto loc_839D959C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d959c
	if (cr6.eq) goto loc_839D959C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839d959c
	if (cr6.eq) goto loc_839D959C;
	// lwz r11,1956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d959c
	if (cr6.eq) goto loc_839D959C;
	// lwz r31,348(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839d959c
	if (cr6.eq) goto loc_839D959C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lbz r8,6388(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6388);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lhz r3,6390(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6390);
	// bl 0x82a58a58
	ctx.lr = 0x839D9588;
	sub_82A58A58(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b3ef0
	ctx.lr = 0x839D959C;
	sub_837B3EF0(ctx, base);
loc_839D959C:
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

__attribute__((alias("__imp__sub_839D95B0"))) PPC_WEAK_FUNC(sub_839D95B0);
PPC_FUNC_IMPL(__imp__sub_839D95B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D95B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9688
	if (cr6.eq) goto loc_839D9688;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839d9688
	if (cr6.eq) goto loc_839D9688;
	// lbz r11,6230(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6230);
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x839D95E4;
	sub_83102DB0(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x839d9688
	if (!cr6.eq) goto loc_839D9688;
loc_839D95EC:
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a58908
	ctx.lr = 0x839D95F8;
	sub_82A58908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d9618
	if (!cr6.eq) goto loc_839D9618;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// blt cr6,0x839d95ec
	if (cr6.lt) goto loc_839D95EC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839D9618:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
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
	// blt cr6,0x839d9664
	if (cr6.lt) goto loc_839D9664;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// bge cr6,0x839d9664
	if (!cr6.lt) goto loc_839D9664;
	// addi r11,r31,42
	ctx.r11.s64 = ctx.r31.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d9664
	if (cr6.eq) goto loc_839D9664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D9664:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x83102db0
	ctx.lr = 0x839D9688;
	sub_83102DB0(ctx, base);
loc_839D9688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D9690"))) PPC_WEAK_FUNC(sub_839D9690);
PPC_FUNC_IMPL(__imp__sub_839D9690) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x835360c0
	ctx.lr = 0x839D96B0;
	sub_835360C0(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,22992
	ctx.r9.s64 = ctx.r11.s64 + 22992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,22964
	ctx.r8.s64 = ctx.r10.s64 + 22964;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x83537ae8
	ctx.lr = 0x839D96F0;
	sub_83537AE8(ctx, base);
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

__attribute__((alias("__imp__sub_839D970C"))) PPC_WEAK_FUNC(sub_839D970C);
PPC_FUNC_IMPL(__imp__sub_839D970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D9710"))) PPC_WEAK_FUNC(sub_839D9710);
PPC_FUNC_IMPL(__imp__sub_839D9710) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x839d975c
	if (cr6.eq) goto loc_839D975C;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r9,r10,39
	ctx.r9.u64 = ctx.r10.u64 | 39;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x839d976c
	if (!cr6.eq) goto loc_839D976C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_839D975C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D976C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D976C:
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

__attribute__((alias("__imp__sub_839D9780"))) PPC_WEAK_FUNC(sub_839D9780);
PPC_FUNC_IMPL(__imp__sub_839D9780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839D9788;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82a52b70
	ctx.lr = 0x839D9798;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839d9800
	if (cr6.eq) goto loc_839D9800;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r28,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x839d9800
	if (cr0.eq) goto loc_839D9800;
	// li r30,0
	ctx.r30.s64 = 0;
loc_839D97C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x839d9808
	if (!cr6.gt) goto loc_839D9808;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D97F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x839d97c0
	if (cr6.lt) goto loc_839D97C0;
loc_839D9800:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839D9808:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D9814;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_839D9814"))) PPC_WEAK_FUNC(sub_839D9814);
PPC_FUNC_IMPL(__imp__sub_839D9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D9818"))) PPC_WEAK_FUNC(sub_839D9818);
PPC_FUNC_IMPL(__imp__sub_839D9818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839D9820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r29,r3,36
	ctx.r29.s64 = ctx.r3.s64 + 36;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r28,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x839d9880
	if (cr0.eq) goto loc_839D9880;
	// li r30,0
	ctx.r30.s64 = 0;
loc_839D9844:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x839d9888
	if (!cr6.gt) goto loc_839D9888;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9870;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x839d9844
	if (cr6.lt) goto loc_839D9844;
loc_839D9880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839D9888:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839D9894;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_839D9894"))) PPC_WEAK_FUNC(sub_839D9894);
PPC_FUNC_IMPL(__imp__sub_839D9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D9898"))) PPC_WEAK_FUNC(sub_839D9898);
PPC_FUNC_IMPL(__imp__sub_839D9898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839D98A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x839d991c
	if (cr0.eq) goto loc_839D991C;
loc_839D98C0:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x839D98D4;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x839d98f0
	if (cr6.gt) goto loc_839D98F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D98F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D98F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839d9908
	if (cr6.eq) goto loc_839D9908;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_839D9908:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x839d98c0
	if (!cr0.eq) goto loc_839D98C0;
loc_839D991C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D9924"))) PPC_WEAK_FUNC(sub_839D9924);
PPC_FUNC_IMPL(__imp__sub_839D9924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D9928"))) PPC_WEAK_FUNC(sub_839D9928);
PPC_FUNC_IMPL(__imp__sub_839D9928) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,22992
	ctx.r10.s64 = ctx.r11.s64 + 22992;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x839d9898
	ctx.lr = 0x839D9954;
	sub_839D9898(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9970
	if (cr6.eq) goto loc_839D9970;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839D9970;
	sub_825952B8(ctx, base);
loc_839D9970:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x83535be8
	ctx.lr = 0x839D9988;
	sub_83535BE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d99a8
	if (cr6.eq) goto loc_839D99A8;
	// bl 0x82595188
	ctx.lr = 0x839D9998;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x839D99A8;
	sub_825952B8(ctx, base);
loc_839D99A8:
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

__attribute__((alias("__imp__sub_839D99C4"))) PPC_WEAK_FUNC(sub_839D99C4);
PPC_FUNC_IMPL(__imp__sub_839D99C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839D99C8"))) PPC_WEAK_FUNC(sub_839D99C8);
PPC_FUNC_IMPL(__imp__sub_839D99C8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// bl 0x825749e0
	ctx.lr = 0x839D99E8;
	sub_825749E0(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x835977d8
	ctx.lr = 0x839D99F4;
	sub_835977D8(ctx, base);
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

__attribute__((alias("__imp__sub_839D9A08"))) PPC_WEAK_FUNC(sub_839D9A08);
PPC_FUNC_IMPL(__imp__sub_839D9A08) {
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
	ctx.lr = 0x839D9A10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8353f200
	ctx.lr = 0x839D9A1C;
	sub_8353F200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9A2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r29,1027
	ctx.r29.s64 = 67305472;
	// addi r30,r25,60
	ctx.r30.s64 = ctx.r25.s64 + 60;
	// li r27,26
	ctx.r27.s64 = 26;
	// li r26,0
	ctx.r26.s64 = 0;
loc_839D9A40:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839d9ab0
	if (cr6.eq) goto loc_839D9AB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9A60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D9A7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x839D9A8C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x839d9aa8
	if (cr6.gt) goto loc_839D9AA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9AA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D9AA8:
	// stw r26,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_839D9AB0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x839d9a40
	if (!cr0.eq) goto loc_839D9A40;
	// lwz r11,164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d9af4
	if (cr6.eq) goto loc_839D9AF4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r4,164(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D9AF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,164(r25)
	PPC_STORE_U32(ctx.r25.u32 + 164, ctx.r26.u32);
loc_839D9AF4:
	// addi r31,r25,272
	ctx.r31.s64 = ctx.r25.s64 + 272;
	// li r30,9
	ctx.r30.s64 = 9;
loc_839D9AFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d9b48
	if (cr6.eq) goto loc_839D9B48;
	// bl 0x82a585e8
	ctx.lr = 0x839D9B0C;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839D9B1C;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d9b3c
	if (cr6.eq) goto loc_839D9B3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9B3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839D9B3C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839D9B44;
	sub_82595170(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_839D9B48:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839d9afc
	if (!cr0.eq) goto loc_839D9AFC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d9b70
	if (cr6.eq) goto loc_839D9B70;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82a54f80
	ctx.lr = 0x839D9B70;
	sub_82A54F80(ctx, base);
loc_839D9B70:
	// lbz r11,344(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 344);
	// addi r29,r25,340
	ctx.r29.s64 = ctx.r25.s64 + 340;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d9bc8
	if (!cr6.eq) goto loc_839D9BC8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D9BB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825a9570
	ctx.lr = 0x839D9BC4;
	sub_825A9570(ctx, base);
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
loc_839D9BC8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d9be4
	if (!cr6.eq) goto loc_839D9BE4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_839D9BE4:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d9bf8
	if (cr6.eq) goto loc_839D9BF8;
	// bl 0x82a16ee8
	ctx.lr = 0x839D9BF4;
	sub_82A16EE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839D9BF8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d9c08
	if (cr6.eq) goto loc_839D9C08;
	// stw r26,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r26.u32);
loc_839D9C08:
	// bl 0x8378b870
	ctx.lr = 0x839D9C0C;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839d9c2c
	if (cr6.eq) goto loc_839D9C2C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d9c28
	if (cr6.eq) goto loc_839D9C28;
	// stb r30,2348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2348, ctx.r30.u8);
	// b 0x839d9c2c
	goto loc_839D9C2C;
loc_839D9C28:
	// stb r26,2348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2348, ctx.r26.u8);
loc_839D9C2C:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d9c60
	if (cr6.eq) goto loc_839D9C60;
	// li r11,34
	ctx.r11.s64 = 34;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839D9C4C;
	sub_82595150(ctx, base);
	// lwz r3,56(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// bl 0x82416268
	ctx.lr = 0x839D9C54;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839D9C5C;
	sub_82595170(ctx, base);
	// stw r26,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r26.u32);
loc_839D9C60:
	// bl 0x837b3c48
	ctx.lr = 0x839D9C64;
	sub_837B3C48(ctx, base);
	// lbz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d9c74
	if (cr6.eq) goto loc_839D9C74;
	// bl 0x83b576c0
	ctx.lr = 0x839D9C74;
	sub_83B576C0(ctx, base);
loc_839D9C74:
	// lwz r31,36(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839d9c8c
	if (cr6.eq) goto loc_839D9C8C;
	// bl 0x830ff290
	ctx.lr = 0x839D9C84;
	sub_830FF290(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ff798
	ctx.lr = 0x839D9C8C;
	sub_830FF798(ctx, base);
loc_839D9C8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,364(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 364);
	// addi r30,r25,360
	ctx.r30.s64 = ctx.r25.s64 + 360;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,360(r25)
	PPC_STORE_U32(ctx.r25.u32 + 360, ctx.r9.u32);
	// beq cr6,0x839d9cd0
	if (cr6.eq) goto loc_839D9CD0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9cd0
	if (cr6.eq) goto loc_839D9CD0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839D9CCC;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_839D9CD0:
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9cfc
	if (cr6.eq) goto loc_839D9CFC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839D9CF8;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_839D9CFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// beq cr6,0x839d9d3c
	if (cr6.eq) goto loc_839D9D3C;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9d3c
	if (cr6.eq) goto loc_839D9D3C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839D9D38;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_839D9D3C:
	// stb r26,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r26.u8);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9d68
	if (cr6.eq) goto loc_839D9D68;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839D9D64;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_839D9D68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,324(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 324);
	// addi r30,r25,320
	ctx.r30.s64 = ctx.r25.s64 + 320;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,320(r25)
	PPC_STORE_U32(ctx.r25.u32 + 320, ctx.r9.u32);
	// beq cr6,0x839d9dac
	if (cr6.eq) goto loc_839D9DAC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9dac
	if (cr6.eq) goto loc_839D9DAC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839D9DA8;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_839D9DAC:
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839d9dd8
	if (cr6.eq) goto loc_839D9DD8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839D9DD4;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_839D9DD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839D9DE0"))) PPC_WEAK_FUNC(sub_839D9DE0);
PPC_FUNC_IMPL(__imp__sub_839D9DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839D9DE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r31,r3,340
	ctx.r31.s64 = ctx.r3.s64 + 340;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d9e18
	if (!cr6.eq) goto loc_839D9E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a9e30
	ctx.lr = 0x839D9E18;
	sub_825A9E30(ctx, base);
loc_839D9E18:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d9e34
	if (!cr6.eq) goto loc_839D9E34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839D9E34:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839d9e58
	if (cr6.eq) goto loc_839D9E58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16ee8
	ctx.lr = 0x839D9E48;
	sub_82A16EE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16ef0
	ctx.lr = 0x839D9E54;
	sub_82A16EF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_839D9E58:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839d9e68
	if (cr6.eq) goto loc_839D9E68;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_839D9E68:
	// lwz r11,168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839d9ef4
	if (!cr6.eq) goto loc_839D9EF4;
	// bl 0x82a585e8
	ctx.lr = 0x839D9E78;
	sub_82A585E8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x839D9E8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// bl 0x839e2dc8
	ctx.lr = 0x839D9E98;
	sub_839E2DC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x825749e0
	ctx.lr = 0x839D9EAC;
	sub_825749E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9EC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839D9EDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839D9EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,168(r28)
	PPC_STORE_U32(ctx.r28.u32 + 168, ctx.r31.u32);
loc_839D9EF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r27,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r27.u8);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stb r27,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r27.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r27,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r27.u8);
	// stb r27,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, ctx.r27.u8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,-25156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// sth r8,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r8.u16);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r27,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r27.u8);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stb r27,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r27.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r29,r28,172
	ctx.r29.s64 = ctx.r28.s64 + 172;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
	// stw r27,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r27.u32);
	// stw r27,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r27.u32);
loc_839D9F88:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839d9ff0
	if (!cr6.eq) goto loc_839D9FF0;
	// bl 0x82a585e8
	ctx.lr = 0x839D9F98;
	sub_82A585E8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x839D9FAC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// bl 0x839e0b00
	ctx.lr = 0x839D9FC0;
	sub_839E0B00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x825749e0
	ctx.lr = 0x839D9FD4;
	sub_825749E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839D9FEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_839D9FF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,26
	cr6.compare<int32_t>(ctx.r30.s32, 26, xer);
	// blt cr6,0x839d9f88
	if (cr6.lt) goto loc_839D9F88;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da09c
	if (!cr6.eq) goto loc_839DA09C;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x839da028
	if (!cr6.gt) goto loc_839DA028;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_839DA028:
	// li r11,34
	ctx.r11.s64 = 34;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x839DA03C;
	sub_82595718(ctx, base);
	// stw r3,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x839da09c
	if (!cr6.gt) goto loc_839DA09C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839DA05C:
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r27,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u32);
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r27.u32);
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r27,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r27.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x839da05c
	if (cr6.lt) goto loc_839DA05C;
loc_839DA09C:
	// bl 0x8353f200
	ctx.lr = 0x839DA0A0;
	sub_8353F200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DA0B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// lis r23,1027
	ctx.r23.s64 = 67305472;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r29,r28,60
	ctx.r29.s64 = ctx.r28.s64 + 60;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r25,13
	ctx.r25.s64 = 13;
	// addi r24,r11,22176
	ctx.r24.s64 = ctx.r11.s64 + 22176;
loc_839DA0E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da16c
	if (!cr6.eq) goto loc_839DA16C;
	// bl 0x82a585e8
	ctx.lr = 0x839DA0F4;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839DA108;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839d9690
	ctx.lr = 0x839DA118;
	sub_839D9690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// addi r11,r24,-16
	ctx.r11.s64 = ctx.r24.s64 + -16;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839DA150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839DA168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_839DA16C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r11,r23,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r23.s64;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// blt cr6,0x839da0e4
	if (cr6.lt) goto loc_839DA0E4;
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da1f8
	if (!cr6.eq) goto loc_839DA1F8;
	// bl 0x82a585e8
	ctx.lr = 0x839DA190;
	sub_82A585E8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x839DA1A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da1c0
	if (cr6.eq) goto loc_839DA1C0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x839e0048
	ctx.lr = 0x839DA1B8;
	sub_839E0048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x839da1c4
	goto loc_839DA1C4;
loc_839DA1C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_839DA1C4:
	// stw r4,164(r28)
	PPC_STORE_U32(ctx.r28.u32 + 164, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839da204
	if (cr6.eq) goto loc_839DA204;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839DA1F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DA1F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839DA204:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DA210"))) PPC_WEAK_FUNC(sub_839DA210);
PPC_FUNC_IMPL(__imp__sub_839DA210) {
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
	ctx.lr = 0x839DA218;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r31,636(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839da434
	if (cr6.eq) goto loc_839DA434;
	// lhz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// bl 0x839d8b68
	ctx.lr = 0x839DA23C;
	sub_839D8B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da434
	if (cr6.eq) goto loc_839DA434;
	// lhz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 312);
	// lhz r10,314(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 314);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da26c
	if (!cr6.eq) goto loc_839DA26C;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x839da278
	goto loc_839DA278;
loc_839DA26C:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
loc_839DA278:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839d8be8
	ctx.lr = 0x839DA280;
	sub_839D8BE8(ctx, base);
	// lhz r11,318(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 318);
	// lhz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 312);
	// twllei r11,0
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// sth r11,310(r29)
	PPC_STORE_U16(ctx.r29.u32 + 310, ctx.r11.u16);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// sth r6,308(r29)
	PPC_STORE_U16(ctx.r29.u32 + 308, ctx.r6.u16);
	// andc r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// twlgei r3,-1
	// bl 0x8378b870
	ctx.lr = 0x839DA2C4;
	sub_8378B870(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da394
	if (cr6.eq) goto loc_839DA394;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x839da394
	if (cr6.eq) goto loc_839DA394;
	// lbz r11,4007(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4007);
	// clrlwi r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r30,r11,31,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x839da2f8
	if (cr6.eq) goto loc_839DA2F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2348, ctx.r11.u8);
	// b 0x839da2fc
	goto loc_839DA2FC;
loc_839DA2F8:
	// stb r26,2348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2348, ctx.r26.u8);
loc_839DA2FC:
	// lwz r31,168(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839da338
	if (cr6.eq) goto loc_839DA338;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DA320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839DA338;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DA338:
	// addi r31,r29,172
	ctx.r31.s64 = ctx.r29.s64 + 172;
	// li r30,25
	ctx.r30.s64 = 25;
loc_839DA340:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da360
	if (cr6.eq) goto loc_839DA360;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DA360;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DA360:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x839da340
	if (!cr0.eq) goto loc_839DA340;
	// bl 0x8242a638
	ctx.lr = 0x839DA370;
	sub_8242A638(ctx, base);
	// lbz r9,4005(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4005);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14604);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,28(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
loc_839DA394:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839d8c68
	ctx.lr = 0x839DA39C;
	sub_839D8C68(ctx, base);
	// lbz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 364);
	// addi r27,r29,360
	ctx.r27.s64 = ctx.r29.s64 + 360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da3b4
	if (!cr6.eq) goto loc_839DA3B4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825aa080
	ctx.lr = 0x839DA3B4;
	sub_825AA080(ctx, base);
loc_839DA3B4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da3d0
	if (!cr6.eq) goto loc_839DA3D0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
loc_839DA3D0:
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839da654
	if (cr6.eq) goto loc_839DA654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d10
	ctx.lr = 0x839DA3E4;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da654
	if (cr6.eq) goto loc_839DA654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a970c8
	ctx.lr = 0x839DA3F8;
	sub_83A970C8(ctx, base);
	// bl 0x82a189f0
	ctx.lr = 0x839DA3FC;
	sub_82A189F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x839DA408;
	sub_83102DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837475e8
	ctx.lr = 0x839DA414;
	sub_837475E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839da440
	if (!cr6.eq) goto loc_839DA440;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da42c
	if (cr6.eq) goto loc_839DA42C;
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
loc_839DA42C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x839DA434;
	sub_83102DB0(ctx, base);
loc_839DA434:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839DA440:
	// lwz r11,4284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4284);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839da4d8
	if (cr6.eq) goto loc_839DA4D8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x839da554
	if (!cr6.eq) goto loc_839DA554;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r11,r11,22560
	ctx.r11.s64 = ctx.r11.s64 + 22560;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-320
	ctx.r10.s64 = ctx.r11.s64 + -320;
	// addi r9,r11,-276
	ctx.r9.s64 = ctx.r11.s64 + -276;
	// addi r8,r11,-232
	ctx.r8.s64 = ctx.r11.s64 + -232;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r11,-188
	ctx.r7.s64 = ctx.r11.s64 + -188;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r28,r29,268
	ctx.r28.s64 = ctx.r29.s64 + 268;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_839DA488:
	// bl 0x82a585e8
	ctx.lr = 0x839DA48C;
	sub_82A585E8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x839DA4A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da4bc
	if (cr6.eq) goto loc_839DA4BC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d7e90
	ctx.lr = 0x839DA4B8;
	sub_839D7E90(ctx, base);
	// b 0x839da4c0
	goto loc_839DA4C0;
loc_839DA4BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_839DA4C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x839da488
	if (cr6.lt) goto loc_839DA488;
	// b 0x839da554
	goto loc_839DA554;
loc_839DA4D8:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r11,r11,22560
	ctx.r11.s64 = ctx.r11.s64 + 22560;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-144
	ctx.r10.s64 = ctx.r11.s64 + -144;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r11,-96
	ctx.r9.s64 = ctx.r11.s64 + -96;
	// addi r8,r11,-48
	ctx.r8.s64 = ctx.r11.s64 + -48;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r28,r29,268
	ctx.r28.s64 = ctx.r29.s64 + 268;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_839DA508:
	// bl 0x82a585e8
	ctx.lr = 0x839DA50C;
	sub_82A585E8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x839DA520;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da53c
	if (cr6.eq) goto loc_839DA53C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839d7e90
	ctx.lr = 0x839DA538;
	sub_839D7E90(ctx, base);
	// b 0x839da540
	goto loc_839DA540;
loc_839DA53C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_839DA540:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x839da508
	if (cr6.lt) goto loc_839DA508;
loc_839DA554:
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da5a0
	if (cr6.eq) goto loc_839DA5A0;
	// bl 0x82a585e8
	ctx.lr = 0x839DA564;
	sub_82A585E8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x839DA574;
	sub_82595150(ctx, base);
	// lwz r3,304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da594
	if (cr6.eq) goto loc_839DA594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DA594;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DA594:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x839DA59C;
	sub_82595170(ctx, base);
	// stw r26,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r26.u32);
loc_839DA5A0:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da5ec
	if (cr6.eq) goto loc_839DA5EC;
	// bl 0x82a585e8
	ctx.lr = 0x839DA5B0;
	sub_82A585E8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x839DA5C0;
	sub_82595150(ctx, base);
	// lwz r3,300(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da5e0
	if (cr6.eq) goto loc_839DA5E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DA5E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DA5E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x839DA5E8;
	sub_82595170(ctx, base);
	// stw r26,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r26.u32);
loc_839DA5EC:
	// bl 0x82a585e8
	ctx.lr = 0x839DA5F0;
	sub_82A585E8(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82595718
	ctx.lr = 0x839DA604;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da614
	if (cr6.eq) goto loc_839DA614;
	// bl 0x839d7fd8
	ctx.lr = 0x839DA610;
	sub_839D7FD8(ctx, base);
	// b 0x839da618
	goto loc_839DA618;
loc_839DA614:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_839DA618:
	// stw r3,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r3.u32);
	// bl 0x82a585e8
	ctx.lr = 0x839DA620;
	sub_82A585E8(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595718
	ctx.lr = 0x839DA634;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da644
	if (cr6.eq) goto loc_839DA644;
	// bl 0x839d80b8
	ctx.lr = 0x839DA640;
	sub_839D80B8(ctx, base);
	// b 0x839da648
	goto loc_839DA648;
loc_839DA644:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_839DA648:
	// stw r3,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x839DA654;
	sub_83102DB0(ctx, base);
loc_839DA654:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da664
	if (cr6.eq) goto loc_839DA664;
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
loc_839DA664:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DA670"))) PPC_WEAK_FUNC(sub_839DA670);
PPC_FUNC_IMPL(__imp__sub_839DA670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839DA678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r29,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r29.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r30,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r30.u8);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r30,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r30.u8);
	// stb r30,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// bl 0x83740868
	ctx.lr = 0x839DA6CC;
	sub_83740868(ctx, base);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x83740858
	ctx.lr = 0x839DA6D4;
	sub_83740858(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x83935df8
	ctx.lr = 0x839DA6E0;
	sub_83935DF8(ctx, base);
	// mulli r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 * 60;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// bl 0x83935df8
	ctx.lr = 0x839DA6FC;
	sub_83935DF8(ctx, base);
	// mulli r7,r3,60
	ctx.r7.s64 = ctx.r3.s64 * 60;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// divw r5,r6,r6
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r6.s32);
	// sth r6,310(r31)
	PPC_STORE_U16(ctx.r31.u32 + 310, ctx.r6.u16);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r3,308(r31)
	PPC_STORE_U16(ctx.r31.u32 + 308, ctx.r3.u16);
	// twllei r6,0
	// andc r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// twlgei r9,-1
	// bl 0x83935df8
	ctx.lr = 0x839DA730;
	sub_83935DF8(ctx, base);
	// mulli r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 * 60;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// divw r6,r7,r7
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r7.s32);
	// sth r7,314(r31)
	PPC_STORE_U16(ctx.r31.u32 + 314, ctx.r7.u16);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// sth r4,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r4.u16);
	// twllei r7,0
	// andc r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// twlgei r10,-1
	// bl 0x83935df8
	ctx.lr = 0x839DA764;
	sub_83935DF8(ctx, base);
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// divw r6,r8,r8
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r8.s32);
	// sth r8,318(r31)
	PPC_STORE_U16(ctx.r31.u32 + 318, ctx.r8.u16);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// sth r4,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r4.u16);
	// addi r10,r7,-24692
	ctx.r10.s64 = ctx.r7.s64 + -24692;
	// stb r30,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r30.u8);
	// twllei r8,0
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// andc r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r7,r9,-24672
	ctx.r7.s64 = ctx.r9.s64 + -24672;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// twlgei r8,-1
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r7,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// addi r5,r6,-24636
	ctx.r5.s64 = ctx.r6.s64 + -24636;
	// stb r30,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r30.u8);
	// addi r29,r31,340
	ctx.r29.s64 = ctx.r31.s64 + 340;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// addi r28,r31,360
	ctx.r28.s64 = ctx.r31.s64 + 360;
	// stw r5,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r5.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x839DA7F8;
	sub_825AB6C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a9e30
	ctx.lr = 0x839DA800;
	sub_825A9E30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825aa080
	ctx.lr = 0x839DA808;
	sub_825AA080(ctx, base);
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839DA814:
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839da814
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839DA814;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839DA830:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839da830
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839DA830;
	// bl 0x837b3bd0
	ctx.lr = 0x839DA83C;
	sub_837B3BD0(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da84c
	if (cr6.eq) goto loc_839DA84C;
	// bl 0x83b57648
	ctx.lr = 0x839DA84C;
	sub_83B57648(ctx, base);
loc_839DA84C:
	// bl 0x830ff290
	ctx.lr = 0x839DA850;
	sub_830FF290(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x830ff290
	ctx.lr = 0x839DA868;
	sub_830FF290(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x830ff798
	ctx.lr = 0x839DA870;
	sub_830FF798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d9de0
	ctx.lr = 0x839DA87C;
	sub_839D9DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DA888"))) PPC_WEAK_FUNC(sub_839DA888);
PPC_FUNC_IMPL(__imp__sub_839DA888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839DA890;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839daa20
	if (cr6.eq) goto loc_839DAA20;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839daa20
	if (cr6.eq) goto loc_839DAA20;
	// lhz r31,308(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 308);
	// bl 0x83935df8
	ctx.lr = 0x839DA8BC;
	sub_83935DF8(ctx, base);
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r22,0
	ctx.r22.s64 = 0;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r26,r28,168
	ctx.r26.s64 = ctx.r28.s64 + 168;
	// clrlwi r24,r5,16
	ctx.r24.u64 = ctx.r5.u32 & 0xFFFF;
	// twlgei r4,-1
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
loc_839DA900:
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839daa0c
	if (cr6.eq) goto loc_839DAA0C;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da990
	if (!cr6.eq) goto loc_839DA990;
	// rlwinm r11,r24,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFF0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da990
	if (cr6.eq) goto loc_839DA990;
	// lwz r10,712(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 712);
	// lwz r10,636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 636);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x839daa20
	if (cr6.eq) goto loc_839DAA20;
	// lhz r10,6200(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6200);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lhz r8,6202(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6202);
	// addi r7,r11,6200
	ctx.r7.s64 = ctx.r11.s64 + 6200;
	// lhz r6,6204(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6204);
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// sth r8,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// sth r6,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r6.u16);
	// blt cr6,0x839da978
	if (cr6.lt) goto loc_839DA978;
	// cmpwi cr6,r27,26
	cr6.compare<int32_t>(ctx.r27.s32, 26, xer);
	// bge cr6,0x839da978
	if (!cr6.lt) goto loc_839DA978;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,-76(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -76);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_839DA978:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-32767
	ctx.r11.s64 = ctx.r11.s64 + -32767;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
loc_839DA990:
	// lbz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 324);
	// addi r31,r28,320
	ctx.r31.s64 = ctx.r28.s64 + 320;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da9a8
	if (!cr6.eq) goto loc_839DA9A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x839DA9A8;
	sub_825AB6C8(ctx, base);
loc_839DA9A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839da9c4
	if (!cr6.eq) goto loc_839DA9C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839DA9C4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839da9e4
	if (cr6.eq) goto loc_839DA9E4;
	// bl 0x82a1aaa8
	ctx.lr = 0x839DA9D4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
loc_839DA9E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839da9f4
	if (cr6.eq) goto loc_839DA9F4;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
loc_839DA9F4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DAA0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DAA0C:
	// addi r29,r29,248
	ctx.r29.s64 = ctx.r29.s64 + 248;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r29,6448
	cr6.compare<int32_t>(ctx.r29.s32, 6448, xer);
	// blt cr6,0x839da900
	if (cr6.lt) goto loc_839DA900;
loc_839DAA20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DAA28"))) PPC_WEAK_FUNC(sub_839DAA28);
PPC_FUNC_IMPL(__imp__sub_839DAA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839DAA30;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dae98
	if (cr6.eq) goto loc_839DAE98;
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// lhz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839dae98
	if (cr6.eq) goto loc_839DAE98;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r23,636(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// lhz r30,308(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 308);
	// fsubs f30,f0,f10
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// bl 0x83935df8
	ctx.lr = 0x839DAA98;
	sub_83935DF8(ctx, base);
	// mulli r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 * 60;
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// divwu r6,r30,r8
	ctx.r6.u32 = PPCDivide(ctx.r30.u32, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r4,r5,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r5.s64;
	// twllei r8,0
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// mulli r10,r3,6456
	ctx.r10.s64 = ctx.r3.s64 * 6456;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,6200(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6200);
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// beq cr6,0x839daafc
	if (cr6.eq) goto loc_839DAAFC;
	// lbz r9,6228(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6228);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f0,14604(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14604);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x830ff290
	ctx.lr = 0x839DAAF4;
	sub_830FF290(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x830ff798
	ctx.lr = 0x839DAAFC;
	sub_830FF798(ctx, base);
loc_839DAAFC:
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lhz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lhz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 312);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// lfs f11,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// bge cr6,0x839dab60
	if (!cr6.lt) goto loc_839DAB60;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r11,318(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// twllei r11,0
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// andc r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// twlgei r11,-1
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// b 0x839daba8
	goto loc_839DABA8;
loc_839DAB60:
	// lhz r9,310(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 310);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f12,f4,f7
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
loc_839DABA8:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839dabf0
	if (!cr6.lt) goto loc_839DABF0;
	// lhz r11,310(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 310);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
loc_839DABF0:
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// fsubs f13,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lhz r29,308(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 308);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fadds f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// bl 0x83935df8
	ctx.lr = 0x839DAC18;
	sub_83935DF8(ctx, base);
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r26,13(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r25,r31,168
	ctx.r25.s64 = ctx.r31.s64 + 168;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r22,26
	ctx.r22.s64 = 26;
	// divw r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// clrlwi r29,r5,16
	ctx.r29.u64 = ctx.r5.u32 & 0xFFFF;
	// andc r3,r30,r4
	ctx.r3.u64 = ctx.r30.u64 & ~ctx.r4.u64;
	// rlwinm r11,r29,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFF0;
	// twllei r30,0
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// twlgei r3,-1
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_839DAC68:
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x839dacc8
	if (cr6.eq) goto loc_839DACC8;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DAC98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// sth r30,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r30.u16);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839DACC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DACC8:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x839dac68
	if (!cr0.eq) goto loc_839DAC68;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x837a5a28
	ctx.lr = 0x839DACE0;
	sub_837A5A28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x837a5a28
	ctx.lr = 0x839DACEC;
	sub_837A5A28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x839d93c0
	ctx.lr = 0x839DACFC;
	sub_839D93C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x839d8e18
	ctx.lr = 0x839DAD0C;
	sub_839D8E18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x839d9080
	ctx.lr = 0x839DAD1C;
	sub_839D9080(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x839d8f28
	ctx.lr = 0x839DAD2C;
	sub_839D8F28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x839d9518
	ctx.lr = 0x839DAD3C;
	sub_839D9518(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x839d95b0
	ctx.lr = 0x839DAD4C;
	sub_839D95B0(ctx, base);
	// bl 0x8379f5d8
	ctx.lr = 0x839DAD50;
	sub_8379F5D8(ctx, base);
	// bl 0x8379fdc8
	ctx.lr = 0x839DAD54;
	sub_8379FDC8(ctx, base);
	// li r28,26
	ctx.r28.s64 = 26;
	// li r27,0
	ctx.r27.s64 = 0;
loc_839DAD5C:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839dadf4
	if (cr6.eq) goto loc_839DADF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DAD7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 324);
	// addi r30,r31,320
	ctx.r30.s64 = ctx.r31.s64 + 320;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839dad94
	if (!cr6.eq) goto loc_839DAD94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x839DAD94;
	sub_825AB6C8(ctx, base);
loc_839DAD94:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dadb0
	if (!cr6.eq) goto loc_839DADB0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_839DADB0:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839dade4
	if (cr6.eq) goto loc_839DADE4;
	// bl 0x82a1aaa8
	ctx.lr = 0x839DADC0;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dade4
	if (cr6.eq) goto loc_839DADE4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DADE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DADE4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dadf4
	if (cr6.eq) goto loc_839DADF4;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
loc_839DADF4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x839dad5c
	if (!cr0.eq) goto loc_839DAD5C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dae68
	if (cr6.eq) goto loc_839DAE68;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mulli r10,r21,148
	ctx.r10.s64 = ctx.r21.s64 * 148;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r31,272
	ctx.r30.s64 = ctx.r31.s64 + 272;
	// li r29,9
	ctx.r29.s64 = 9;
loc_839DAE24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dae5c
	if (cr6.eq) goto loc_839DAE5C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DAE48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839DAE5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DAE5C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x839dae24
	if (!cr0.eq) goto loc_839DAE24;
loc_839DAE68:
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837a0aa8
	ctx.lr = 0x839DAE74;
	sub_837A0AA8(ctx, base);
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c8120
	ctx.lr = 0x839DAE7C;
	sub_833C8120(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,22220
	ctx.r3.s64 = ctx.r11.s64 + 22220;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r4,r3,-12
	ctx.r4.s64 = ctx.r3.s64 + -12;
	// bl 0x833c7fc8
	ctx.lr = 0x839DAE98;
	sub_833C7FC8(ctx, base);
loc_839DAE98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DAEA8"))) PPC_WEAK_FUNC(sub_839DAEA8);
PPC_FUNC_IMPL(__imp__sub_839DAEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839DAEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,712(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839db124
	if (cr6.eq) goto loc_839DB124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x839db124
	if (cr6.gt) goto loc_839DB124;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839daf10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DAF10;
	// bdzf 4*cr6+eq,0x839dafac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DAFAC;
	// bdzf 4*cr6+eq,0x839dafac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DAFAC;
	// bdzf 4*cr6+eq,0x839db0ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DB0AC;
	// bdzf 4*cr6+eq,0x839db0e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DB0E4;
	// bne cr6,0x839db11c
	if (!cr6.eq) goto loc_839DB11C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d9de0
	ctx.lr = 0x839DAEFC;
	sub_839D9DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839db124
	if (cr6.eq) goto loc_839DB124;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_839DAF10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839daf80
	if (cr6.eq) goto loc_839DAF80;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839daf80
	if (cr6.eq) goto loc_839DAF80;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x839daf34
	if (!cr6.lt) goto loc_839DAF34;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x839daf4c
	goto loc_839DAF4C;
loc_839DAF34:
	// li r10,11
	ctx.r10.s64 = 11;
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
loc_839DAF4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839daf94
	if (cr6.eq) goto loc_839DAF94;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DAF74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x839db124
	if (cr6.eq) goto loc_839DB124;
loc_839DAF80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x839daf94
	if (!cr6.eq) goto loc_839DAF94;
	// lwz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_839DAF94:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a54f80
	ctx.lr = 0x839DAFA4;
	sub_82A54F80(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_839DAFAC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x839dafc0
	if (!cr6.lt) goto loc_839DAFC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x839dafd8
	goto loc_839DAFD8;
loc_839DAFC0:
	// li r11,11
	ctx.r11.s64 = 11;
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
loc_839DAFD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839db054
	if (cr6.eq) goto loc_839DB054;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DB000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839db124
	if (!cr6.eq) goto loc_839DB124;
	// lwz r3,636(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// lwz r30,624(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// bl 0x82a57c78
	ctx.lr = 0x839DB018;
	sub_82A57C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839db054
	if (!cr6.eq) goto loc_839DB054;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DB03C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839db124
	if (!cr6.eq) goto loc_839DB124;
loc_839DB048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839DB054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839da210
	ctx.lr = 0x839DB05C;
	sub_839DA210(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839db048
	if (cr6.eq) goto loc_839DB048;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x839db080
	if (!cr6.eq) goto loc_839DB080;
	// lhz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// b 0x839db084
	goto loc_839DB084;
loc_839DB080:
	// lhz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 312);
loc_839DB084:
	// bl 0x839d8770
	ctx.lr = 0x839DB088;
	sub_839D8770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839da888
	ctx.lr = 0x839DB090;
	sub_839DA888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d8aa8
	ctx.lr = 0x839DB098;
	sub_839D8AA8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839DB0AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d8588
	ctx.lr = 0x839DB0B4;
	sub_839D8588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839db124
	if (cr6.eq) goto loc_839DB124;
	// bl 0x8378cba8
	ctx.lr = 0x839DB0C4;
	sub_8378CBA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x8378d2e8
	ctx.lr = 0x839DB0D0;
	sub_8378D2E8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839DB0E4:
	// bl 0x8378cba8
	ctx.lr = 0x839DB0E8;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x839DB0EC;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839db124
	if (cr6.eq) goto loc_839DB124;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x839daa28
	ctx.lr = 0x839DB108;
	sub_839DAA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839d8510
	ctx.lr = 0x839DB110;
	sub_839D8510(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839DB11C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839daa28
	ctx.lr = 0x839DB124;
	sub_839DAA28(ctx, base);
loc_839DB124:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DB130"))) PPC_WEAK_FUNC(sub_839DB130);
PPC_FUNC_IMPL(__imp__sub_839DB130) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -29628);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x828e4200
	ctx.lr = 0x839DB164;
	sub_828E4200(ctx, base);
	// srawi r9,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f11,-29628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -29628);
	ctx.f11.f64 = double(temp.f32);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// subf r3,r5,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lfs f13,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfs f12,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f12.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,22240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22240);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// fmadds f7,f8,f13,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

__attribute__((alias("__imp__sub_839DB1DC"))) PPC_WEAK_FUNC(sub_839DB1DC);
PPC_FUNC_IMPL(__imp__sub_839DB1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

