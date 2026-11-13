#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B3A810"))) PPC_WEAK_FUNC(sub_82B3A810);
PPC_FUNC_IMPL(__imp__sub_82B3A810) {
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
	// bl 0x82b3a770
	ctx.lr = 0x82B3A830;
	sub_82B3A770(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3a848
	if (cr6.eq) goto loc_82B3A848;
	// bl 0x82416268
	ctx.lr = 0x82B3A844;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3A848:
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

__attribute__((alias("__imp__sub_82B3A860"))) PPC_WEAK_FUNC(sub_82B3A860);
PPC_FUNC_IMPL(__imp__sub_82B3A860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B3A868;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B3A878;
	sub_82D19A88(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82b34b90
	ctx.lr = 0x82B3A88C;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3a8b4
	if (!cr6.eq) goto loc_82B3A8B4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,96(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c27150
	ctx.lr = 0x82B3A8B0;
	sub_82C27150(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B3A8B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B3A8BC;
	sub_82D33C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// blt cr6,0x82b3a8f0
	if (cr6.lt) goto loc_82B3A8F0;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r4,1512(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1512);
	// bctrl 
	ctx.lr = 0x82B3A8E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82b3a980
	goto loc_82B3A980;
loc_82B3A8F0:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r4,1508(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// bctrl 
	ctx.lr = 0x82B3A8FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// subf r5,r29,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r29.s64;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B3A920;
	sub_82D042A8(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r8,-17800
	ctx.r4.s64 = ctx.r8.s64 + -17800;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B3A93C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3a954
	if (cr6.eq) goto loc_82B3A954;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82B3A954;
	sub_82D291E0(ctx, base);
loc_82B3A954:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3a974
	if (cr6.lt) goto loc_82B3A974;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3A974;
	sub_825952B8(ctx, base);
loc_82B3A974:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
loc_82B3A980:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B3A990;
	sub_82D1ED60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3A998"))) PPC_WEAK_FUNC(sub_82B3A998);
PPC_FUNC_IMPL(__imp__sub_82B3A998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B3A9A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B3A9C8;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r7,r11,-17336
	ctx.r7.s64 = ctx.r11.s64 + -17336;
	// addi r6,r10,-17088
	ctx.r6.s64 = ctx.r10.s64 + -17088;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r8,65535
	ctx.r4.u64 = ctx.r8.u64 | 65535;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r31,144
	ctx.r28.s64 = ctx.r31.s64 + 144;
	// addi r27,r31,172
	ctx.r27.s64 = ctx.r31.s64 + 172;
	// addi r23,r8,1364
	ctx.r23.s64 = ctx.r8.s64 + 1364;
	// lwz r10,1460(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1460);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stb r5,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r5.u8);
	// stb r11,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stb r25,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r25.u8);
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// stb r24,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r24.u8);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// lwz r4,1364(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1364);
	// bl 0x82d20ae0
	ctx.lr = 0x82B3AA6C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B3AA7C;
	sub_82D23390(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82B3AA80;
	sub_8308E078(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r30,r11,-18334
	ctx.r30.s64 = ctx.r11.s64 + -18334;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r30,314
	ctx.r3.s64 = ctx.r30.s64 + 314;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82b391a0
	ctx.lr = 0x82B3AAA4;
	sub_82B391A0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82d23900
	ctx.lr = 0x82B3AABC;
	sub_82D23900(ctx, base);
	// addi r4,r30,338
	ctx.r4.s64 = ctx.r30.s64 + 338;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B3AACC;
	sub_8259CC28(ctx, base);
	// addi r4,r30,346
	ctx.r4.s64 = ctx.r30.s64 + 346;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B3AADC;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x82b3ab3c
	if (cr6.eq) goto loc_82B3AB3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B3AAF0;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82B3AAFC;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3ab10
	if (!cr6.lt) goto loc_82B3AB10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B3AB10:
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1f880
	ctx.lr = 0x82B3AB1C;
	sub_82D1F880(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3ab3c
	if (cr6.lt) goto loc_82B3AB3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3AB3C;
	sub_825952B8(ctx, base);
loc_82B3AB3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3AB48"))) PPC_WEAK_FUNC(sub_82B3AB48);
PPC_FUNC_IMPL(__imp__sub_82B3AB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B3AB50;
	__savegprlr_20(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3AB5C;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B3AB6C;
	sub_82D19A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82b34b90
	ctx.lr = 0x82B3AB78;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82b3ab9c
	if (!cr6.eq) goto loc_82B3AB9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3AB94;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B3AB9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3ABA4;
	sub_82D2AEC8(ctx, base);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82b356e8
	ctx.lr = 0x82B3ABAC;
	sub_82B356E8(ctx, base);
	// cmplwi cr6,r3,67
	cr6.compare<uint32_t>(ctx.r3.u32, 67, xer);
	// bgt cr6,0x82b3ada0
	if (cr6.gt) goto loc_82B3ADA0;
	// beq cr6,0x82b3acc0
	if (cr6.eq) goto loc_82B3ACC0;
	// cmplwi cr6,r3,30
	cr6.compare<uint32_t>(ctx.r3.u32, 30, xer);
	// bgt cr6,0x82b3abd8
	if (cr6.gt) goto loc_82B3ABD8;
	// beq cr6,0x82b3b198
	if (cr6.eq) goto loc_82B3B198;
	// cmplwi cr6,r3,26
	cr6.compare<uint32_t>(ctx.r3.u32, 26, xer);
	// blt cr6,0x82b3adb0
	if (cr6.lt) goto loc_82B3ADB0;
	// cmplwi cr6,r3,29
	cr6.compare<uint32_t>(ctx.r3.u32, 29, xer);
	// ble cr6,0x82b3abe0
	if (!cr6.gt) goto loc_82B3ABE0;
	// b 0x82b3adb0
	goto loc_82B3ADB0;
loc_82B3ABD8:
	// cmplwi cr6,r3,65
	cr6.compare<uint32_t>(ctx.r3.u32, 65, xer);
	// bne cr6,0x82b3adb0
	if (!cr6.eq) goto loc_82B3ADB0;
loc_82B3ABE0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-17432
	ctx.r29.s64 = ctx.r11.s64 + -17432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-328
	ctx.r4.s64 = ctx.r29.s64 + -328;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3AC04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B3AC0C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-312
	ctx.r4.s64 = ctx.r29.s64 + -312;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B3AC24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b260
	if (cr6.eq) goto loc_82B3B260;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// ori r4,r4,181
	ctx.r4.u64 = ctx.r4.u64 | 181;
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// stw r26,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// stb r26,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r26.u8);
	// bl 0x82d04220
	ctx.lr = 0x82B3AC60;
	sub_82D04220(ctx, base);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// ori r4,r4,172
	ctx.r4.u64 = ctx.r4.u64 | 172;
	// bl 0x82d04220
	ctx.lr = 0x82B3AC70;
	sub_82D04220(ctx, base);
	// addi r4,r29,-300
	ctx.r4.s64 = ctx.r29.s64 + -300;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1eb8
	ctx.lr = 0x82B3AC80;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1da8
	ctx.lr = 0x82B3AC94;
	sub_825A1DA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B3ACA8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3ACB0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3ACB8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B3ACC0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-17432
	ctx.r29.s64 = ctx.r11.s64 + -17432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-360
	ctx.r4.s64 = ctx.r29.s64 + -360;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3ACE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B3ACEC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-344
	ctx.r4.s64 = ctx.r29.s64 + -344;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B3AD04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b260
	if (cr6.eq) goto loc_82B3B260;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r26.u8);
	// ori r4,r4,171
	ctx.r4.u64 = ctx.r4.u64 | 171;
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// stb r26,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r26.u8);
	// bl 0x82d04220
	ctx.lr = 0x82B3AD40;
	sub_82D04220(ctx, base);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// ori r4,r4,173
	ctx.r4.u64 = ctx.r4.u64 | 173;
	// bl 0x82d04220
	ctx.lr = 0x82B3AD50;
	sub_82D04220(ctx, base);
	// addi r4,r29,-332
	ctx.r4.s64 = ctx.r29.s64 + -332;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1eb8
	ctx.lr = 0x82B3AD60;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x82B3AD74;
	sub_825A1DA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B3AD88;
	sub_82D291E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3AD90;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3AD98;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B3ADA0:
	// cmplwi cr6,r3,68
	cr6.compare<uint32_t>(ctx.r3.u32, 68, xer);
	// beq cr6,0x82b3b198
	if (cr6.eq) goto loc_82B3B198;
	// cmplwi cr6,r3,71
	cr6.compare<uint32_t>(ctx.r3.u32, 71, xer);
	// beq cr6,0x82b3b0b8
	if (cr6.eq) goto loc_82B3B0B8;
loc_82B3ADB0:
	// bl 0x8314e610
	ctx.lr = 0x82B3ADB4;
	sub_8314E610(ctx, base);
	// bl 0x82c1f4e0
	ctx.lr = 0x82B3ADB8;
	sub_82C1F4E0(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,428
	ctx.r10.s64 = ctx.r1.s64 + 428;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B3ADC8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b3adc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B3ADC8;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82c1f550
	ctx.lr = 0x82B3ADDC;
	sub_82C1F550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82b3b260
	if (cr6.eq) goto loc_82B3B260;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r24,r11,-17432
	ctx.r24.s64 = ctx.r11.s64 + -17432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r24,-196
	ctx.r4.s64 = ctx.r24.s64 + -196;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3AE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r27,r29,100
	ctx.r27.s64 = ctx.r29.s64 + 100;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r28,r11,1532
	ctx.r28.s64 = ctx.r11.s64 + 1532;
loc_82B3AE24:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3AE3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r1,436
	ctx.r31.s64 = ctx.r1.s64 + 436;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r9,r29,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82b3ae60
	if (!cr6.eq) goto loc_82B3AE60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3AE5C;
	sub_82D2AEC8(ctx, base);
	// b 0x82b3ae98
	goto loc_82B3AE98;
loc_82B3AE60:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3AE68;
	sub_82D2AEC8(ctx, base);
	// lwzx r31,r29,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b3ae7c
	if (!cr6.gt) goto loc_82B3AE7C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82B3AE7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B3AE84;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82B3AE98;
	sub_82D32C58(ctx, base);
loc_82B3AE98:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82b3ae24
	if (cr6.lt) goto loc_82B3AE24;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// stb r26,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r26.u8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r21,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r21.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r21,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r21.u32);
	// stw r26,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r26.u32);
	// stb r26,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r26.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3AED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,464(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82b3aef0
	if (cr6.eq) goto loc_82B3AEF0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B3AEF0:
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r20,1
	cr6.compare<uint32_t>(ctx.r20.u32, 1, xer);
	// bne cr6,0x82b3af74
	if (!cr6.eq) goto loc_82B3AF74;
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8315e518
	ctx.lr = 0x82B3AF1C;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8259cb28
	ctx.lr = 0x82B3AF30;
	sub_8259CB28(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3AF38;
	sub_8387E8E0(ctx, base);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8315e518
	ctx.lr = 0x82B3AF4C;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// bl 0x8259cb28
	ctx.lr = 0x82B3AF60;
	sub_8259CB28(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3AF68;
	sub_8387E8E0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// b 0x82b3af7c
	goto loc_82B3AF7C;
loc_82B3AF74:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
loc_82B3AF7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B3AF84;
	sub_82D29598(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r22,r1,368
	ctx.r22.s64 = ctx.r1.s64 + 368;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r24,r11,1524
	ctx.r24.s64 = ctx.r11.s64 + 1524;
	// addi r23,r10,1516
	ctx.r23.s64 = ctx.r10.s64 + 1516;
loc_82B3AF9C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r23.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3AFB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B3AFD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,1
	cr6.compare<uint32_t>(ctx.r20.u32, 1, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b3b048
	if (!cr6.eq) goto loc_82B3B048;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3AFEC;
	sub_82D2AEC8(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b3b004
	if (!cr6.gt) goto loc_82B3B004;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82B3B004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B3B00C;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82B3B020;
	sub_82D32C58(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3B030;
	sub_82D2AEC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B3B044;
	sub_82D291E0(ctx, base);
	// b 0x82b3b060
	goto loc_82B3B060;
loc_82B3B048:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3B050;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3B060;
	sub_82D2AEC8(ctx, base);
loc_82B3B060:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// blt cr6,0x82b3af9c
	if (cr6.lt) goto loc_82B3AF9C;
	// addi r31,r1,424
	ctx.r31.s64 = ctx.r1.s64 + 424;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82B3B07C:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3b09c
	if (cr6.lt) goto loc_82B3B09C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3B09C;
	sub_825952B8(ctx, base);
loc_82B3B09C:
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bge 0x82b3b07c
	if (!cr0.lt) goto loc_82B3B07C;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B3B0B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-17432
	ctx.r29.s64 = ctx.r11.s64 + -17432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-296
	ctx.r4.s64 = ctx.r29.s64 + -296;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3B0DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B3B0E4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-280
	ctx.r4.s64 = ctx.r29.s64 + -280;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B3B0FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b260
	if (cr6.eq) goto loc_82B3B260;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// ori r4,r4,171
	ctx.r4.u64 = ctx.r4.u64 | 171;
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// stb r26,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r26.u8);
	// bl 0x82d04220
	ctx.lr = 0x82B3B138;
	sub_82D04220(ctx, base);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,172
	ctx.r4.u64 = ctx.r4.u64 | 172;
	// bl 0x82d04220
	ctx.lr = 0x82B3B148;
	sub_82D04220(ctx, base);
	// addi r4,r29,-268
	ctx.r4.s64 = ctx.r29.s64 + -268;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x82B3B158;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82B3B16C;
	sub_825A1DA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B3B180;
	sub_82D291E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3B188;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3B190;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B3B198:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r10,-17432
	ctx.r29.s64 = ctx.r10.s64 + -17432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-264
	ctx.r4.s64 = ctx.r29.s64 + -264;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3B1BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B3B1C4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-248
	ctx.r4.s64 = ctx.r29.s64 + -248;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B3B1DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b260
	if (cr6.eq) goto loc_82B3B260;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r26,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r26.u8);
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// bl 0x82d04220
	ctx.lr = 0x82B3B218;
	sub_82D04220(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3b22c
	if (!cr6.lt) goto loc_82B3B22C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82B3B22C:
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ori r4,r4,174
	ctx.r4.u64 = ctx.r4.u64 | 174;
	// bl 0x82d042a8
	ctx.lr = 0x82B3B23C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B3B250;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3B258;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3B260;
	sub_8387E8E0(ctx, base);
loc_82B3B260:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B268"))) PPC_WEAK_FUNC(sub_82B3B268);
PPC_FUNC_IMPL(__imp__sub_82B3B268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3B270;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x82B3B2A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b2c8
	if (cr6.eq) goto loc_82B3B2C8;
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
	// bl 0x82b3a998
	ctx.lr = 0x82B3B2C0;
	sub_82B3A998(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B3B2C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B2D4"))) PPC_WEAK_FUNC(sub_82B3B2D4);
PPC_FUNC_IMPL(__imp__sub_82B3B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3B2D8"))) PPC_WEAK_FUNC(sub_82B3B2D8);
PPC_FUNC_IMPL(__imp__sub_82B3B2D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b3b304
	if (!cr6.eq) goto loc_82B3B304;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b3b308
	if (cr6.eq) goto loc_82B3B308;
loc_82B3B304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3B308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3b31c
	if (cr6.eq) goto loc_82B3B31C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B3B31C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b3b340
	if (!cr6.eq) goto loc_82B3B340;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3b344
	if (cr6.eq) goto loc_82B3B344;
loc_82B3B340:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3B344:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3B358"))) PPC_WEAK_FUNC(sub_82B3B358);
PPC_FUNC_IMPL(__imp__sub_82B3B358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r9,1628(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1628);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82B3B380:
	// ld r9,1632(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 1632);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stwu r10,36(r11)
	ea = 36 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b3b380
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B3B380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3B3AC"))) PPC_WEAK_FUNC(sub_82B3B3AC);
PPC_FUNC_IMPL(__imp__sub_82B3B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3B3B0"))) PPC_WEAK_FUNC(sub_82B3B3B0);
PPC_FUNC_IMPL(__imp__sub_82B3B3B0) {
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
	// bl 0x82d26ed8
	ctx.lr = 0x82B3B3C8;
	sub_82D26ED8(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x82d26b18
	ctx.lr = 0x82B3B3D0;
	sub_82D26B18(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82B3B3D4;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,190
	ctx.r3.s64 = 190;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d444b0
	ctx.lr = 0x82B3B3E4;
	sub_82D444B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b3f8
	if (cr6.eq) goto loc_82B3B3F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B3B3F8;
	sub_83103100(ctx, base);
loc_82B3B3F8:
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

__attribute__((alias("__imp__sub_82B3B40C"))) PPC_WEAK_FUNC(sub_82B3B40C);
PPC_FUNC_IMPL(__imp__sub_82B3B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3B410"))) PPC_WEAK_FUNC(sub_82B3B410);
PPC_FUNC_IMPL(__imp__sub_82B3B410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B3B418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B3B424;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311d640
	ctx.lr = 0x82B3B434;
	sub_8311D640(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,1680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1680);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b3b468
	if (!cr6.eq) goto loc_82B3B468;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3b46c
	if (cr6.eq) goto loc_82B3B46C;
loc_82B3B468:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B3B46C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3b520
	if (cr6.eq) goto loc_82B3B520;
	// bl 0x831156e8
	ctx.lr = 0x82B3B47C;
	sub_831156E8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-16984
	ctx.r5.s64 = ctx.r10.s64 + -16984;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831178a0
	ctx.lr = 0x82B3B4A0;
	sub_831178A0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B3B4C4;
	sub_831156E8(ctx, base);
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r30,r5,5
	ctx.r30.s64 = ctx.r5.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123768
	ctx.lr = 0x82B3B4D8;
	sub_83123768(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82b3b520
	if (cr6.eq) goto loc_82B3B520;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123a08
	ctx.lr = 0x82B3B4F4;
	sub_83123A08(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x82b3b524
	if (!cr6.eq) goto loc_82B3B524;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,57076
	ctx.r10.u64 = ctx.r11.u64 | 57076;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B3B520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3B524:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B52C"))) PPC_WEAK_FUNC(sub_82B3B52C);
PPC_FUNC_IMPL(__imp__sub_82B3B52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3B530"))) PPC_WEAK_FUNC(sub_82B3B530);
PPC_FUNC_IMPL(__imp__sub_82B3B530) {
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
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B3B568:
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r9,1632(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 1632);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stwu r10,36(r11)
	ea = 36 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b3b568
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B3B568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3b358
	ctx.lr = 0x82B3B5A0;
	sub_82B3B358(ctx, base);
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

__attribute__((alias("__imp__sub_82B3B5B8"))) PPC_WEAK_FUNC(sub_82B3B5B8);
PPC_FUNC_IMPL(__imp__sub_82B3B5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3B5C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b3b600
	if (cr6.eq) goto loc_82B3B600;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B3B5D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b3b5f0
	if (cr6.eq) goto loc_82B3B5F0;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,1160
	ctx.r5.s64 = 1160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B3B5F0;
	sub_831CE980(ctx, base);
loc_82B3B5F0:
	// addi r31,r31,1160
	ctx.r31.s64 = ctx.r31.s64 + 1160;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b3b5d8
	if (!cr6.eq) goto loc_82B3B5D8;
loc_82B3B600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B60C"))) PPC_WEAK_FUNC(sub_82B3B60C);
PPC_FUNC_IMPL(__imp__sub_82B3B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3B610"))) PPC_WEAK_FUNC(sub_82B3B610);
PPC_FUNC_IMPL(__imp__sub_82B3B610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3B618;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,32542
	ctx.r10.u64 = ctx.r11.u64 | 32542;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b3b63c
	if (!cr6.gt) goto loc_82B3B63C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B3B63C;
	sub_831CC150(ctx, base);
loc_82B3B63C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,1160
	ctx.r28.s64 = 1160;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b3b6c8
	if (!cr6.lt) goto loc_82B3B6C8;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,1160
	ctx.r29.s64 = ctx.r4.s64 * 1160;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B3B674;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b3b5b8
	ctx.lr = 0x82B3B68C;
	sub_82B3B5B8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x82b3b6b0
	if (cr6.eq) goto loc_82B3B6B0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B3B6B0;
	sub_825952B8(ctx, base);
loc_82B3B6B0:
	// mulli r11,r28,1160
	ctx.r11.s64 = ctx.r28.s64 * 1160;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82B3B6C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B6D0"))) PPC_WEAK_FUNC(sub_82B3B6D0);
PPC_FUNC_IMPL(__imp__sub_82B3B6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1160
	ctx.r9.s64 = 1160;
	// ori r8,r10,32542
	ctx.r8.u64 = ctx.r10.u64 | 32542;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b3b704
	if (!cr6.lt) goto loc_82B3B704;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B3B704:
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
	// blt cr6,0x82b3b734
	if (cr6.lt) goto loc_82B3B734;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B3B734:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b3b740
	if (!cr6.lt) goto loc_82B3B740;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B3B740:
	// b 0x82b3b610
	sub_82B3B610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B744"))) PPC_WEAK_FUNC(sub_82B3B744);
PPC_FUNC_IMPL(__imp__sub_82B3B744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3B748"))) PPC_WEAK_FUNC(sub_82B3B748);
PPC_FUNC_IMPL(__imp__sub_82B3B748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B3B750;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82b3b530
	ctx.lr = 0x82B3B768;
	sub_82B3B530(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x83161dc0
	ctx.lr = 0x82B3B784;
	sub_83161DC0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// srawi. r7,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b3b7c0
	if (cr0.eq) goto loc_82B3B7C0;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// addi r9,r30,-28
	ctx.r9.s64 = ctx.r30.s64 + -28;
loc_82B3B7A4:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82b3b7c0
	if (!cr6.lt) goto loc_82B3B7C0;
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// stdu r8,36(r9)
	ea = 36 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// blt cr6,0x82b3b7a4
	if (cr6.lt) goto loc_82B3B7A4;
loc_82B3B7C0:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// sth r28,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r28.u16);
	// beq cr6,0x82b3b7e0
	if (cr6.eq) goto loc_82B3B7E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3B7E0;
	sub_825952B8(ctx, base);
loc_82B3B7E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B7EC"))) PPC_WEAK_FUNC(sub_82B3B7EC);
PPC_FUNC_IMPL(__imp__sub_82B3B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3B7F0"))) PPC_WEAK_FUNC(sub_82B3B7F0);
PPC_FUNC_IMPL(__imp__sub_82B3B7F0) {
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
	// bge cr6,0x82b3b828
	if (!cr6.lt) goto loc_82B3B828;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b3b82c
	if (!cr6.gt) goto loc_82B3B82C;
loc_82B3B828:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B3B82C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3b87c
	if (cr6.eq) goto loc_82B3B87C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1160
	ctx.r9.s64 = 1160;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b3b860
	if (!cr6.eq) goto loc_82B3B860;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3b6d0
	ctx.lr = 0x82B3B860;
	sub_82B3B6D0(ctx, base);
loc_82B3B860:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,1160
	ctx.r11.s64 = ctx.r30.s64 * 1160;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b8ac
	if (cr6.eq) goto loc_82B3B8AC;
	// b 0x82b3b8a4
	goto loc_82B3B8A4;
loc_82B3B87C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b3b894
	if (!cr6.eq) goto loc_82B3B894;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3b6d0
	ctx.lr = 0x82B3B894;
	sub_82B3B6D0(ctx, base);
loc_82B3B894:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3b8ac
	if (cr6.eq) goto loc_82B3B8AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B3B8A4:
	// li r5,1160
	ctx.r5.s64 = 1160;
	// bl 0x831ce980
	ctx.lr = 0x82B3B8AC;
	sub_831CE980(ctx, base);
loc_82B3B8AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1160
	ctx.r11.s64 = ctx.r11.s64 + 1160;
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

__attribute__((alias("__imp__sub_82B3B8D0"))) PPC_WEAK_FUNC(sub_82B3B8D0);
PPC_FUNC_IMPL(__imp__sub_82B3B8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3B8D8;
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
	ctx.lr = 0x82B3B8EC;
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
	ctx.lr = 0x82B3B904;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r8,r11,-15976
	ctx.r8.s64 = ctx.r11.s64 + -15976;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1728(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1728);
	// lwz r10,1680(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1680);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r6,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r6.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82B3B954;
	sub_82D20AE0(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,-16424
	ctx.r4.s64 = ctx.r4.s64 + -16424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B3B968;
	sub_82D23390(ctx, base);
	// lis r3,-31777
	ctx.r3.s64 = -2082537472;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r3,1580
	ctx.r11.s64 = ctx.r3.s64 + 1580;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82B3B978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82d20ae0
	ctx.lr = 0x82B3B984;
	sub_82D20AE0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82b3b978
	if (!cr0.eq) goto loc_82B3B978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3B998"))) PPC_WEAK_FUNC(sub_82B3B998);
PPC_FUNC_IMPL(__imp__sub_82B3B998) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15976
	ctx.r9.s64 = ctx.r11.s64 + -15976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,108(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b3b9e0
	if (cr6.eq) goto loc_82B3B9E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3B9E0;
	sub_825952B8(ctx, base);
loc_82B3B9E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B3B9F8;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82B3BA0C"))) PPC_WEAK_FUNC(sub_82B3BA0C);
PPC_FUNC_IMPL(__imp__sub_82B3BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3BA10"))) PPC_WEAK_FUNC(sub_82B3BA10);
PPC_FUNC_IMPL(__imp__sub_82B3BA10) {
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
	// bl 0x82b3b998
	ctx.lr = 0x82B3BA30;
	sub_82B3B998(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3ba48
	if (cr6.eq) goto loc_82B3BA48;
	// bl 0x82416268
	ctx.lr = 0x82B3BA44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3BA48:
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

__attribute__((alias("__imp__sub_82B3BA60"))) PPC_WEAK_FUNC(sub_82B3BA60);
PPC_FUNC_IMPL(__imp__sub_82B3BA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3BA68;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3BA74;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B3BA7C;
	sub_831156E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addis r31,r9,5
	ctx.r31.s64 = ctx.r9.s64 + 327680;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r28,r11,-16108
	ctx.r28.s64 = ctx.r11.s64 + -16108;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,-244
	ctx.r4.s64 = ctx.r28.s64 + -244;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// bl 0x8259cc28
	ctx.lr = 0x82B3BAB4;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82B3BABC;
	sub_83123778(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x82b3bb64
	if (cr6.eq) goto loc_82B3BB64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82B3BAD0;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B3BADC;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b3baf0
	if (!cr6.eq) goto loc_82B3BAF0;
	// addi r4,r28,-232
	ctx.r4.s64 = ctx.r28.s64 + -232;
	// b 0x82b3bb5c
	goto loc_82B3BB5C;
loc_82B3BAF0:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b3bb00
	if (!cr6.eq) goto loc_82B3BB00;
	// addi r4,r28,-220
	ctx.r4.s64 = ctx.r28.s64 + -220;
	// b 0x82b3bb5c
	goto loc_82B3BB5C;
loc_82B3BB00:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82b3bb10
	if (!cr6.eq) goto loc_82B3BB10;
	// addi r4,r28,-208
	ctx.r4.s64 = ctx.r28.s64 + -208;
	// b 0x82b3bb5c
	goto loc_82B3BB5C;
loc_82B3BB10:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82b3bb58
	if (cr6.eq) goto loc_82B3BB58;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82b3bb58
	if (cr6.eq) goto loc_82B3BB58;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b3bb50
	if (cr6.eq) goto loc_82B3BB50;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82b3bb50
	if (cr6.eq) goto loc_82B3BB50;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x82b3bb40
	if (!cr6.eq) goto loc_82B3BB40;
	// addi r4,r28,-160
	ctx.r4.s64 = ctx.r28.s64 + -160;
	// b 0x82b3bb5c
	goto loc_82B3BB5C;
loc_82B3BB40:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82b3bb64
	if (!cr6.eq) goto loc_82B3BB64;
	// addi r4,r28,-148
	ctx.r4.s64 = ctx.r28.s64 + -148;
	// b 0x82b3bb5c
	goto loc_82B3BB5C;
loc_82B3BB50:
	// addi r4,r28,-184
	ctx.r4.s64 = ctx.r28.s64 + -184;
	// b 0x82b3bb5c
	goto loc_82B3BB5C;
loc_82B3BB58:
	// addi r4,r28,-196
	ctx.r4.s64 = ctx.r28.s64 + -196;
loc_82B3BB5C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82B3BB64;
	sub_8259D6C0(ctx, base);
loc_82B3BB64:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3BB6C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3BB74;
	sub_82D33DB0(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,1732
	ctx.r31.s64 = ctx.r11.s64 + 1732;
loc_82B3BB80:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3BB98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3bc0c
	if (cr6.eq) goto loc_82B3BC0C;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3bbb4
	if (!cr6.lt) goto loc_82B3BBB4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B3BBB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3BBC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x82b3bb80
	if (cr6.lt) goto loc_82B3BB80;
	// lbz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3bc30
	if (!cr6.eq) goto loc_82B3BC30;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3bc90
	if (cr6.lt) goto loc_82B3BC90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3BC04;
	sub_825952B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B3BC0C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3bc90
	if (cr6.lt) goto loc_82B3BC90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3BC28;
	sub_825952B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B3BC30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3BC48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d47120
	ctx.lr = 0x82B3BC50;
	sub_82D47120(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B3BC68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d47120
	ctx.lr = 0x82B3BC70;
	sub_82D47120(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82b3bc90
	if (cr6.lt) goto loc_82B3BC90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3BC90;
	sub_825952B8(ctx, base);
loc_82B3BC90:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3BC98"))) PPC_WEAK_FUNC(sub_82B3BC98);
PPC_FUNC_IMPL(__imp__sub_82B3BC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B3BCA0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,1160
	ctx.r10.s64 = 1160;
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b3bf64
	if (!cr6.lt) goto loc_82B3BF64;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x82b3bf64
	if (!cr6.lt) goto loc_82B3BF64;
	// bl 0x831156e8
	ctx.lr = 0x82B3BCE4;
	sub_831156E8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r7,1160
	ctx.r10.s64 = ctx.r7.s64 * 1160;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82B3BD1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b3bd1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B3BD1C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,1632
	ctx.r11.s64 = ctx.r11.s64 + 1632;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b3bd4c
	if (!cr6.eq) goto loc_82B3BD4C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b3bd74
	goto loc_82B3BD74;
loc_82B3BD4C:
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b3bd6c
	if (!cr6.eq) goto loc_82B3BD6C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b3bd70
	if (cr6.eq) goto loc_82B3BD70;
loc_82B3BD6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3BD70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B3BD74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3bf64
	if (!cr6.eq) goto loc_82B3BF64;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8311bf98
	ctx.lr = 0x82B3BD88;
	sub_8311BF98(ctx, base);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-16072
	ctx.r30.s64 = ctx.r11.s64 + -16072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3BDB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82B3BDCC;
	sub_83120738(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82B3BDD8;
	sub_82D39310(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,1556
	ctx.r28.s64 = ctx.r11.s64 + 1556;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B3BDF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3be0c
	if (cr6.eq) goto loc_82B3BE0C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3BE0C;
	sub_82D2AEC8(ctx, base);
loc_82B3BE0C:
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
	ctx.lr = 0x82B3BE24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B3BE34;
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
	ctx.lr = 0x82B3BE48;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3BE50;
	sub_8387E8E0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r25,156(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r24,144(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f31,20048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f31.f64 = double(temp.f32);
	// lwz r23,140(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r22,136(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82B3BE7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3BE94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3bf54
	if (cr6.eq) goto loc_82B3BF54;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bgt cr6,0x82b3bf54
	if (cr6.gt) goto loc_82B3BF54;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b3bec8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B3BEC8;
	// bdzf 4*cr6+eq,0x82b3bed0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B3BED0;
	// bdzf 4*cr6+eq,0x82b3bed8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B3BED8;
	// bdzf 4*cr6+eq,0x82b3bf44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B3BF44;
	// bne cr6,0x82b3bf4c
	if (!cr6.eq) goto loc_82B3BF4C;
	// clrldi r4,r22,32
	ctx.r4.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// b 0x82b3bf50
	goto loc_82B3BF50;
loc_82B3BEC8:
	// clrldi r4,r23,32
	ctx.r4.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// b 0x82b3bf50
	goto loc_82B3BF50;
loc_82B3BED0:
	// clrldi r4,r24,32
	ctx.r4.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// b 0x82b3bf50
	goto loc_82B3BF50;
loc_82B3BED8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b3bf34
	if (cr6.eq) goto loc_82B3BF34;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f30,f8,f31
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// bl 0x837b0c10
	ctx.lr = 0x82B3BF1C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82a6b1b8
	ctx.lr = 0x82B3BF30;
	sub_82A6B1B8(ctx, base);
	// b 0x82b3bf54
	goto loc_82B3BF54;
loc_82B3BF34:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// ori r4,r4,186
	ctx.r4.u64 = ctx.r4.u64 | 186;
	// bl 0x82d29598
	ctx.lr = 0x82B3BF40;
	sub_82D29598(ctx, base);
	// b 0x82b3bf54
	goto loc_82B3BF54;
loc_82B3BF44:
	// clrldi r4,r25,32
	ctx.r4.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// b 0x82b3bf50
	goto loc_82B3BF50;
loc_82B3BF4C:
	// clrldi r4,r26,32
	ctx.r4.u64 = ctx.r26.u64 & 0xFFFFFFFF;
loc_82B3BF50:
	// bl 0x82d294d0
	ctx.lr = 0x82B3BF54;
	sub_82D294D0(ctx, base);
loc_82B3BF54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82b3be7c
	if (cr6.lt) goto loc_82B3BE7C;
loc_82B3BF64:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3BF74"))) PPC_WEAK_FUNC(sub_82B3BF74);
PPC_FUNC_IMPL(__imp__sub_82B3BF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3BF78"))) PPC_WEAK_FUNC(sub_82B3BF78);
PPC_FUNC_IMPL(__imp__sub_82B3BF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B3BF80;
	__savegprlr_14(ctx, base);
	// stwu r1,-3216(r1)
	ea = -3216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,3252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3252, ctx.r5.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3BF94;
	sub_831156E8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r5,3252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3252);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// ori r19,r10,65535
	ctx.r19.u64 = ctx.r10.u64 | 65535;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lwz r20,48(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r6,1628(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	// bl 0x82b3b748
	ctx.lr = 0x82B3BFC0;
	sub_82B3B748(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r4,r1,3252
	ctx.r4.s64 = ctx.r1.s64 + 3252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// bl 0x8319e5e8
	ctx.lr = 0x82B3BFE4;
	sub_8319E5E8(ctx, base);
	// addi r4,r1,3252
	ctx.r4.s64 = ctx.r1.s64 + 3252;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319ea40
	ctx.lr = 0x82B3BFF0;
	sub_8319EA40(ctx, base);
	// addis r16,r20,111
	ctx.r16.s64 = ctx.r20.s64 + 7274496;
	// li r15,-1
	ctx.r15.s64 = -1;
	// addi r16,r16,5452
	ctx.r16.s64 = ctx.r16.s64 + 5452;
	// li r22,1160
	ctx.r22.s64 = 1160;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// lwz r28,3252(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3252);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B3C010:
	// cmplwi cr6,r18,9000
	cr6.compare<uint32_t>(ctx.r18.u32, 9000, xer);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bge cr6,0x82b3c020
	if (!cr6.lt) goto loc_82B3C020;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82B3C020:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,588
	ctx.r5.s64 = 588;
	// bl 0x831ce980
	ctx.lr = 0x82B3C02C;
	sub_831CE980(ctx, base);
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b3c658
	if (cr6.eq) goto loc_82B3C658;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b3c060
	if (!cr6.eq) goto loc_82B3C060;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b3c064
	if (cr6.eq) goto loc_82B3C064;
loc_82B3C060:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3C064:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3c078
	if (cr6.eq) goto loc_82B3C078;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82b3c0b0
	goto loc_82B3C0B0;
loc_82B3C078:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b3c09c
	if (!cr6.eq) goto loc_82B3C09C;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3c0a0
	if (cr6.eq) goto loc_82B3C0A0;
loc_82B3C09C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3C0A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3c658
	if (cr6.eq) goto loc_82B3C658;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82B3C0B0:
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r11,r30,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b3c0d4
	if (cr6.eq) goto loc_82B3C0D4;
	// subfc r11,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x82b3c108
	goto loc_82B3C108;
loc_82B3C0D4:
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b3c0f4
	if (cr6.eq) goto loc_82B3C0F4;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x82b3c108
	goto loc_82B3C108;
loc_82B3C0F4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_82B3C108:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3c658
	if (!cr6.eq) goto loc_82B3C658;
	// rlwinm r11,r29,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b3c130
	if (cr6.eq) goto loc_82B3C130;
	// subfc r11,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82b3c164
	goto loc_82B3C164;
loc_82B3C130:
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b3c150
	if (cr6.eq) goto loc_82B3C150;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82b3c164
	goto loc_82B3C164;
loc_82B3C150:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82B3C164:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3c658
	if (!cr6.eq) goto loc_82B3C658;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// beq cr6,0x82b3c658
	if (cr6.eq) goto loc_82B3C658;
	// cmplwi cr6,r31,103
	cr6.compare<uint32_t>(ctx.r31.u32, 103, xer);
	// beq cr6,0x82b3c658
	if (cr6.eq) goto loc_82B3C658;
	// cmplwi cr6,r31,58
	cr6.compare<uint32_t>(ctx.r31.u32, 58, xer);
	// beq cr6,0x82b3c658
	if (cr6.eq) goto loc_82B3C658;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B3C1A0;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// lwz r29,88(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x83194a40
	ctx.lr = 0x82B3C1BC;
	sub_83194A40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3c1cc
	if (cr6.eq) goto loc_82B3C1CC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82B3C1CC:
	// clrlwi r27,r28,16
	ctx.r27.u64 = ctx.r28.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// cmplwi cr6,r27,65535
	cr6.compare<uint32_t>(ctx.r27.u32, 65535, xer);
	// beq cr6,0x82b3c1f0
	if (cr6.eq) goto loc_82B3C1F0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B3C1EC;
	sub_8311C338(ctx, base);
	// lhz r30,78(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
loc_82B3C1F0:
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x82b3c284
	if (cr6.eq) goto loc_82B3C284;
	// subf r11,r25,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r25.s64;
	// li r31,1
	ctx.r31.s64 = 1;
	// divw. r9,r11,r22
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82b3c24c
	if (cr0.eq) goto loc_82B3C24C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82B3C214:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b3c22c
	if (!cr6.eq) goto loc_82B3C22C;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b3c240
	if (cr6.eq) goto loc_82B3C240;
loc_82B3C22C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1160
	ctx.r11.s64 = ctx.r11.s64 + 1160;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b3c214
	if (cr6.lt) goto loc_82B3C214;
	// b 0x82b3c24c
	goto loc_82B3C24C;
loc_82B3C240:
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82b3c284
	if (!cr6.eq) goto loc_82B3C284;
loc_82B3C24C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,3252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3252);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82b3b748
	ctx.lr = 0x82B3C264;
	sub_82B3B748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b3b7f0
	ctx.lr = 0x82B3C270;
	sub_82B3B7F0(ctx, base);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r25,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r25.s64;
	// divw r11,r11,r22
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
loc_82B3C284:
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b3c2a0
	if (cr6.eq) goto loc_82B3C2A0;
	// subf r11,r25,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r25.s64;
	// divw r10,r11,r22
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b3c6cc
	if (!cr6.lt) goto loc_82B3C6CC;
loc_82B3C2A0:
	// subf r11,r25,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r25.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// divw r11,r11,r22
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3c2f0
	if (cr6.eq) goto loc_82B3C2F0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82B3C2B8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b3c2d0
	if (!cr6.eq) goto loc_82B3C2D0;
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, xer);
	// beq cr6,0x82b3c2e4
	if (cr6.eq) goto loc_82B3C2E4;
loc_82B3C2D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1160
	ctx.r10.s64 = ctx.r10.s64 + 1160;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b3c2b8
	if (cr6.lt) goto loc_82B3C2B8;
	// b 0x82b3c2f0
	goto loc_82B3C2F0;
loc_82B3C2E4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82b3c328
	if (!cr6.eq) goto loc_82B3C328;
loc_82B3C2F0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,3252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3252);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82b3b748
	ctx.lr = 0x82B3C308;
	sub_82B3B748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b3b7f0
	ctx.lr = 0x82B3C314;
	sub_82B3B7F0(ctx, base);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r25,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r25.s64;
	// divw r11,r11,r22
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82B3C328:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82b3c64c
	if (!cr6.lt) goto loc_82B3C64C;
	// mulli r11,r10,1160
	ctx.r11.s64 = ctx.r10.s64 * 1160;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r4,12
	ctx.r30.s64 = ctx.r4.s64 + 12;
loc_82B3C340:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// blt cr6,0x82b3c350
	if (cr6.lt) goto loc_82B3C350;
	// addi r11,r1,716
	ctx.r11.s64 = ctx.r1.s64 + 716;
	// b 0x82b3c378
	goto loc_82B3C378;
loc_82B3C350:
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// blt cr6,0x82b3c360
	if (cr6.lt) goto loc_82B3C360;
	// addi r11,r1,716
	ctx.r11.s64 = ctx.r1.s64 + 716;
	// b 0x82b3c378
	goto loc_82B3C378;
loc_82B3C360:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B3C378:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
loc_82B3C3AC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b3c3c4
	if (!cr6.eq) goto loc_82B3C3C4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82b3c3ec
	goto loc_82B3C3EC;
loc_82B3C3C4:
	// lhz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b3c3e4
	if (!cr6.eq) goto loc_82B3C3E4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b3c3e8
	if (cr6.eq) goto loc_82B3C3E8;
loc_82B3C3E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3C3E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B3C3EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3c40c
	if (!cr6.eq) goto loc_82B3C40C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// blt cr6,0x82b3c3ac
	if (cr6.lt) goto loc_82B3C3AC;
	// b 0x82b3c640
	goto loc_82B3C640;
loc_82B3C40C:
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r5,0,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFE000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3c470
	if (cr6.eq) goto loc_82B3C470;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,752
	ctx.r9.s64 = ctx.r1.s64 + 752;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// beq cr6,0x82b3c470
	if (cr6.eq) goto loc_82B3C470;
	// mulli r10,r26,1160
	ctx.r10.s64 = ctx.r26.s64 * 1160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82B3C470:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// addi r8,r1,756
	ctx.r8.s64 = ctx.r1.s64 + 756;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// beq cr6,0x82b3c4c4
	if (cr6.eq) goto loc_82B3C4C4;
	// mulli r8,r26,1160
	ctx.r8.s64 = ctx.r26.s64 * 1160;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + ctx.r25.u64;
	// addi r7,r8,20
	ctx.r7.s64 = ctx.r8.s64 + 20;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
loc_82B3C4C4:
	// addi r9,r1,760
	ctx.r9.s64 = ctx.r1.s64 + 760;
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lbz r8,137(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// beq cr6,0x82b3c508
	if (cr6.eq) goto loc_82B3C508;
	// mulli r9,r26,1160
	ctx.r9.s64 = ctx.r26.s64 * 1160;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// addi r7,r9,24
	ctx.r7.s64 = ctx.r9.s64 + 24;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
loc_82B3C508:
	// rlwinm r9,r5,14,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x7F;
	// rlwinm r6,r5,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3FFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b3c564
	if (cr6.eq) goto loc_82B3C564;
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r1,764
	ctx.r9.s64 = ctx.r1.s64 + 764;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// beq cr6,0x82b3c564
	if (cr6.eq) goto loc_82B3C564;
	// mulli r9,r26,1160
	ctx.r9.s64 = ctx.r26.s64 * 1160;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// addi r8,r9,28
	ctx.r8.s64 = ctx.r9.s64 + 28;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
loc_82B3C564:
	// addi r9,r1,768
	ctx.r9.s64 = ctx.r1.s64 + 768;
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// clrlwi r8,r6,25
	ctx.r8.u64 = ctx.r6.u32 & 0x7F;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// beq cr6,0x82b3c5a8
	if (cr6.eq) goto loc_82B3C5A8;
	// mulli r9,r26,1160
	ctx.r9.s64 = ctx.r26.s64 * 1160;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
loc_82B3C5A8:
	// addi r9,r1,772
	ctx.r9.s64 = ctx.r1.s64 + 772;
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r8,r5,21,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x3;
	// rlwinm r6,r5,21,11,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1FFFFF;
	// add r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r29,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r29.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// beq cr6,0x82b3c5f0
	if (cr6.eq) goto loc_82B3C5F0;
	// mulli r9,r26,1160
	ctx.r9.s64 = ctx.r26.s64 * 1160;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// addi r7,r9,36
	ctx.r7.s64 = ctx.r9.s64 + 36;
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
loc_82B3C5F0:
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bge cr6,0x82b3c640
	if (!cr6.lt) goto loc_82B3C640;
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r9,r5,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x1;
	// addi r8,r1,776
	ctx.r8.s64 = ctx.r1.s64 + 776;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r7,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r7.u32);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// beq cr6,0x82b3c640
	if (cr6.eq) goto loc_82B3C640;
	// mulli r10,r26,1160
	ctx.r10.s64 = ctx.r26.s64 * 1160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_82B3C640:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// blt cr6,0x82b3c340
	if (cr6.lt) goto loc_82B3C340;
loc_82B3C64C:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,3252(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3252);
loc_82B3C658:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r17,r17,588
	ctx.r17.s64 = ctx.r17.s64 + 588;
	// cmplwi cr6,r18,9000
	cr6.compare<uint32_t>(ctx.r18.u32, 9000, xer);
	// blt cr6,0x82b3c010
	if (cr6.lt) goto loc_82B3C010;
	// subf r11,r25,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r25.s64;
	// divw r31,r11,r22
	ctx.r31.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82b3c684
	if (cr6.eq) goto loc_82B3C684;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82b3b7f0
	ctx.lr = 0x82B3C684;
	sub_82B3B7F0(ctx, base);
loc_82B3C684:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b3c6a8
	if (cr6.eq) goto loc_82B3C6A8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82B3C690:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82b3b7f0
	ctx.lr = 0x82B3C69C;
	sub_82B3B7F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1160
	ctx.r30.s64 = ctx.r30.s64 + 1160;
	// bne 0x82b3c690
	if (!cr0.eq) goto loc_82B3C690;
loc_82B3C6A8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b3c6c4
	if (cr6.eq) goto loc_82B3C6C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82B3C6C4;
	sub_825952B8(ctx, base);
loc_82B3C6C4:
	// addi r1,r1,3216
	ctx.r1.s64 = ctx.r1.s64 + 3216;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82B3C6CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82B3C6D4;
	sub_82F73D60(ctx, base);
	// addi r1,r1,3216
	ctx.r1.s64 = ctx.r1.s64 + 3216;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3C6DC"))) PPC_WEAK_FUNC(sub_82B3C6DC);
PPC_FUNC_IMPL(__imp__sub_82B3C6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3C6E0"))) PPC_WEAK_FUNC(sub_82B3C6E0);
PPC_FUNC_IMPL(__imp__sub_82B3C6E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b3bc98
	sub_82B3BC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3C6E4"))) PPC_WEAK_FUNC(sub_82B3C6E4);
PPC_FUNC_IMPL(__imp__sub_82B3C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3C6E8"))) PPC_WEAK_FUNC(sub_82B3C6E8);
PPC_FUNC_IMPL(__imp__sub_82B3C6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3C6F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3C6FC;
	sub_831156E8(ctx, base);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82B3C708;
	sub_8311C148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3C714;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3C71C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3c78c
	if (cr6.eq) goto loc_82B3C78C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82B3C734;
	sub_82D19D40(ctx, base);
	// lhz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 808);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r29,r11,25
	ctx.r29.u64 = ctx.r11.u32 & 0x7F;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b3c78c
	if (cr6.eq) goto loc_82B3C78C;
loc_82B3C74C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B3C754;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b3c78c
	if (!cr6.gt) goto loc_82B3C78C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3C768;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3c78c
	if (cr6.eq) goto loc_82B3C78C;
	// add r5,r31,r28
	ctx.r5.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b3bc98
	ctx.lr = 0x82B3C780;
	sub_82B3BC98(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82b3c74c
	if (cr6.lt) goto loc_82B3C74C;
loc_82B3C78C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3C794"))) PPC_WEAK_FUNC(sub_82B3C794);
PPC_FUNC_IMPL(__imp__sub_82B3C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3C798"))) PPC_WEAK_FUNC(sub_82B3C798);
PPC_FUNC_IMPL(__imp__sub_82B3C798) {
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
	// blt cr6,0x82b3c7c0
	if (cr6.lt) goto loc_82B3C7C0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b3c7c4
	goto loc_82B3C7C4;
loc_82B3C7C0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B3C7C4:
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
	ctx.lr = 0x82B3C7E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3c7fc
	if (cr6.eq) goto loc_82B3C7FC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b3b8d0
	ctx.lr = 0x82B3C7F4;
	sub_82B3B8D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3c800
	if (!cr6.eq) goto loc_82B3C800;
loc_82B3C7FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B3C800:
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

__attribute__((alias("__imp__sub_82B3C818"))) PPC_WEAK_FUNC(sub_82B3C818);
PPC_FUNC_IMPL(__imp__sub_82B3C818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B3C820;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3C82C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B3C83C;
	sub_82D2D510(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3ca08
	if (cr6.eq) goto loc_82B3CA08;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// li r26,1160
	ctx.r26.s64 = 1160;
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// addi r30,r28,108
	ctx.r30.s64 = ctx.r28.s64 + 108;
	// lwz r9,100(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r26
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b3ca08
	if (!cr6.lt) goto loc_82B3CA08;
	// bl 0x831156e8
	ctx.lr = 0x82B3C870;
	sub_831156E8(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r9,r11,1160
	ctx.r9.s64 = ctx.r11.s64 * 1160;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,1628(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1628);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b3c8d0
	if (!cr6.eq) goto loc_82B3C8D0;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b3c8d0
	if (!cr6.eq) goto loc_82B3C8D0;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,570
	ctx.r4.u64 = ctx.r4.u64 | 570;
	// bl 0x82d042a8
	ctx.lr = 0x82B3C8CC;
	sub_82D042A8(ctx, base);
	// b 0x82b3c924
	goto loc_82B3C924;
loc_82B3C8D0:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b3c8fc
	if (cr6.eq) goto loc_82B3C8FC;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c338
	ctx.lr = 0x82B3C8E8;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82B3C8F8;
	sub_83125548(ctx, base);
	// b 0x82b3c908
	goto loc_82B3C908;
loc_82B3C8FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8315d6c8
	ctx.lr = 0x82B3C908;
	sub_8315D6C8(ctx, base);
loc_82B3C908:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B3C91C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3C924;
	sub_8387E8E0(ctx, base);
loc_82B3C924:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x8319dc20
	ctx.lr = 0x82B3C938;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319dab0
	ctx.lr = 0x82B3C944;
	sub_8319DAB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82B3C960;
	sub_82D042A8(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-16092
	ctx.r4.s64 = ctx.r10.s64 + -16092;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a6b900
	ctx.lr = 0x82B3C974;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B3C988;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3C990;
	sub_8387E8E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b3c9a4
	if (!cr6.lt) goto loc_82B3C9A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B3C9A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d30208
	ctx.lr = 0x82B3C9AC;
	sub_82D30208(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// blt cr6,0x82b3c9f0
	if (cr6.lt) goto loc_82B3C9F0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82B3C9CC;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3c9f0
	if (cr6.eq) goto loc_82B3C9F0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// divw r5,r8,r26
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	// bl 0x82d3d968
	ctx.lr = 0x82B3C9F0;
	sub_82D3D968(ctx, base);
loc_82B3C9F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b3c6e8
	ctx.lr = 0x82B3C9F8;
	sub_82B3C6E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3CA00;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3CA08;
	sub_8387E8E0(ctx, base);
loc_82B3CA08:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3CA10"))) PPC_WEAK_FUNC(sub_82B3CA10);
PPC_FUNC_IMPL(__imp__sub_82B3CA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B3CA18;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3CA24;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82b3b410
	ctx.lr = 0x82B3CA34;
	sub_82B3B410(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bl 0x8311c148
	ctx.lr = 0x82B3CA64;
	sub_8311C148(ctx, base);
	// lwz r5,788(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r4,r5,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b3ca9c
	if (cr6.eq) goto loc_82B3CA9C;
	// stb r26,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3CA8C;
	sub_82D19A78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-16364
	ctx.r30.s64 = ctx.r11.s64 + -16364;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// b 0x82b3cab4
	goto loc_82B3CAB4;
loc_82B3CA9C:
	// stb r28,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3CAA8;
	sub_82D19A78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-16364
	ctx.r30.s64 = ctx.r11.s64 + -16364;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
loc_82B3CAB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3CAC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3ba60
	ctx.lr = 0x82B3CAD0;
	sub_82B3BA60(ctx, base);
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b3bf78
	ctx.lr = 0x82B3CAE4;
	sub_82B3BF78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3CAEC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3CB04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3cc4c
	if (cr6.eq) goto loc_82B3CC4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d30450
	ctx.lr = 0x82B3CB18;
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
	// bne cr6,0x82b3cb48
	if (!cr6.eq) goto loc_82B3CB48;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82b3cb44
	if (cr6.eq) goto loc_82B3CB44;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82B3CB44:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82B3CB48:
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B3CB54;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82a990c8
	ctx.lr = 0x82B3CB60;
	sub_82A990C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3cb80
	if (cr6.lt) goto loc_82B3CB80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3CB80;
	sub_825952B8(ctx, base);
loc_82B3CB80:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,1160
	ctx.r10.s64 = 1160;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// blt cr6,0x82b3cbd4
	if (cr6.lt) goto loc_82B3CBD4;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B3CBBC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3CBCC;
	sub_82D19788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b3cbf0
	goto loc_82B3CBF0;
loc_82B3CBD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B3CBDC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3CBEC;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B3CBF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d30530
	ctx.lr = 0x82B3CBF8;
	sub_82D30530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3c818
	ctx.lr = 0x82B3CC00;
	sub_82B3C818(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8311c148
	ctx.lr = 0x82B3CC0C;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,808(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 808);
	// clrlwi r5,r10,25
	ctx.r5.u64 = ctx.r10.u32 & 0x7F;
	// bl 0x82d20f50
	ctx.lr = 0x82B3CC2C;
	sub_82D20F50(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3CC3C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3CC4C;
	sub_82D19788(ctx, base);
loc_82B3CC4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3CC58"))) PPC_WEAK_FUNC(sub_82B3CC58);
PPC_FUNC_IMPL(__imp__sub_82B3CC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3cc84
	if (!cr6.eq) goto loc_82B3CC84;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,1160
	ctx.r10.s64 = 1160;
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// b 0x82b3cc8c
	goto loc_82B3CC8C;
loc_82B3CC84:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_82B3CC8C:
	// b 0x82b3c818
	sub_82B3C818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3CC90"))) PPC_WEAK_FUNC(sub_82B3CC90);
PPC_FUNC_IMPL(__imp__sub_82B3CC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,1160
	ctx.r10.s64 = 1160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82b3ccc0
	if (cr6.lt) goto loc_82B3CCC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_82B3CCC0:
	// b 0x82b3c818
	sub_82B3C818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3CCC4"))) PPC_WEAK_FUNC(sub_82B3CCC4);
PPC_FUNC_IMPL(__imp__sub_82B3CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3CCC8"))) PPC_WEAK_FUNC(sub_82B3CCC8);
PPC_FUNC_IMPL(__imp__sub_82B3CCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,10400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10400);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82B3CCE0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82b3cd08
	if (!cr6.eq) goto loc_82B3CD08;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b3cd0c
	if (cr6.eq) goto loc_82B3CD0C;
loc_82B3CD08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3CD0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3cd2c
	if (!cr6.eq) goto loc_82B3CD2C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82b3cce0
	if (cr6.lt) goto loc_82B3CCE0;
	// blr 
	return;
loc_82B3CD2C:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3CD38"))) PPC_WEAK_FUNC(sub_82B3CD38);
PPC_FUNC_IMPL(__imp__sub_82B3CD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3cd48
	if (cr6.lt) goto loc_82B3CD48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B3CD48:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82c2aa88
	sub_82C2AA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3CD50"))) PPC_WEAK_FUNC(sub_82B3CD50);
PPC_FUNC_IMPL(__imp__sub_82B3CD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3CD58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3CD64;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3CD6C;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82B3CD78;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3ce00
	if (cr6.eq) goto loc_82B3CE00;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-14108
	ctx.r28.s64 = ctx.r11.s64 + -14108;
loc_82B3CD88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3CD94;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3ce00
	if (cr6.eq) goto loc_82B3CE00;
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
	ctx.lr = 0x82B3CDB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3cdec
	if (cr6.eq) goto loc_82B3CDEC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3CDD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b3cde8
	if (!cr6.eq) goto loc_82B3CDE8;
	// bl 0x82d3c750
	ctx.lr = 0x82B3CDE4;
	sub_82D3C750(ctx, base);
	// b 0x82b3cdec
	goto loc_82B3CDEC;
loc_82B3CDE8:
	// bl 0x82d3c780
	ctx.lr = 0x82B3CDEC;
	sub_82D3C780(ctx, base);
loc_82B3CDEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82B3CDF8;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b3cd88
	if (cr6.lt) goto loc_82B3CD88;
loc_82B3CE00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3CE08"))) PPC_WEAK_FUNC(sub_82B3CE08);
PPC_FUNC_IMPL(__imp__sub_82B3CE08) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B3CE18;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3CE30"))) PPC_WEAK_FUNC(sub_82B3CE30);
PPC_FUNC_IMPL(__imp__sub_82B3CE30) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b3ce88
	if (!cr6.eq) goto loc_82B3CE88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3CE60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3CE6C;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b3ce88
	if (!cr6.eq) goto loc_82B3CE88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3CE84;
	sub_82D19788(ctx, base);
	// b 0x82b3ce9c
	goto loc_82B3CE9C;
loc_82B3CE88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3CE9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B3CE9C:
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

__attribute__((alias("__imp__sub_82B3CEB4"))) PPC_WEAK_FUNC(sub_82B3CEB4);
PPC_FUNC_IMPL(__imp__sub_82B3CEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3CEB8"))) PPC_WEAK_FUNC(sub_82B3CEB8);
PPC_FUNC_IMPL(__imp__sub_82B3CEB8) {
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
	ctx.lr = 0x82B3CED0;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3cefc
	if (cr6.lt) goto loc_82B3CEFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B3CEE0;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3cefc
	if (cr6.lt) goto loc_82B3CEFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-14096
	ctx.r5.s64 = ctx.r11.s64 + -14096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B3CEFC;
	sub_82D20DA8(ctx, base);
loc_82B3CEFC:
	// bl 0x831156e8
	ctx.lr = 0x82B3CF00;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,37446
	ctx.r8.u64 = ctx.r10.u64 | 37446;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stbx r9,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u8);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3CF20;
	sub_82D1C1A8(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r3,2940(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2940, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82B3CF3C"))) PPC_WEAK_FUNC(sub_82B3CF3C);
PPC_FUNC_IMPL(__imp__sub_82B3CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3CF40"))) PPC_WEAK_FUNC(sub_82B3CF40);
PPC_FUNC_IMPL(__imp__sub_82B3CF40) {
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
	ctx.lr = 0x82B3CF58;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,207
	ctx.r3.s64 = 207;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d444b0
	ctx.lr = 0x82B3CF68;
	sub_82D444B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3cf7c
	if (cr6.eq) goto loc_82B3CF7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B3CF7C;
	sub_83103100(ctx, base);
loc_82B3CF7C:
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

__attribute__((alias("__imp__sub_82B3CF90"))) PPC_WEAK_FUNC(sub_82B3CF90);
PPC_FUNC_IMPL(__imp__sub_82B3CF90) {
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
	ctx.lr = 0x82B3CFA8;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3cfe4
	if (cr6.lt) goto loc_82B3CFE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B3CFB8;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3cfe4
	if (cr6.lt) goto loc_82B3CFE4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-14028
	ctx.r5.s64 = ctx.r11.s64 + -14028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B3CFD4;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3CFDC;
	sub_82D1C1A8(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stw r3,2940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2940, ctx.r3.u32);
loc_82B3CFE4:
	// bl 0x82d26ed8
	ctx.lr = 0x82B3CFE8;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26b18
	ctx.lr = 0x82B3CFF0;
	sub_82D26B18(ctx, base);
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

__attribute__((alias("__imp__sub_82B3D004"))) PPC_WEAK_FUNC(sub_82B3D004);
PPC_FUNC_IMPL(__imp__sub_82B3D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3D008"))) PPC_WEAK_FUNC(sub_82B3D008);
PPC_FUNC_IMPL(__imp__sub_82B3D008) {
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
	ctx.lr = 0x82B3D020;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3d05c
	if (cr6.lt) goto loc_82B3D05C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B3D030;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3d05c
	if (cr6.lt) goto loc_82B3D05C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-13960
	ctx.r5.s64 = ctx.r11.s64 + -13960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B3D04C;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3D054;
	sub_82D1C1A8(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stw r3,2940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2940, ctx.r3.u32);
loc_82B3D05C:
	// bl 0x82d26ed8
	ctx.lr = 0x82B3D060;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26b18
	ctx.lr = 0x82B3D068;
	sub_82D26B18(ctx, base);
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

__attribute__((alias("__imp__sub_82B3D07C"))) PPC_WEAK_FUNC(sub_82B3D07C);
PPC_FUNC_IMPL(__imp__sub_82B3D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3D080"))) PPC_WEAK_FUNC(sub_82B3D080);
PPC_FUNC_IMPL(__imp__sub_82B3D080) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
	// bl 0x82d04220
	ctx.lr = 0x82B3D0B8;
	sub_82D04220(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b3d0cc
	if (!cr6.lt) goto loc_82B3D0CC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B3D0CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D0E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3D0F4;
	sub_82D19788(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B3D0F8;
	sub_830FF290(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b3d118
	if (cr6.lt) goto loc_82B3D118;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3D118;
	sub_825952B8(ctx, base);
loc_82B3D118:
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

__attribute__((alias("__imp__sub_82B3D12C"))) PPC_WEAK_FUNC(sub_82B3D12C);
PPC_FUNC_IMPL(__imp__sub_82B3D12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3D130"))) PPC_WEAK_FUNC(sub_82B3D130);
PPC_FUNC_IMPL(__imp__sub_82B3D130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3D138;
	__savegprlr_29(ctx, base);
	// stwu r1,-2960(r1)
	ea = -2960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-14088
	ctx.r3.s64 = ctx.r11.s64 + -14088;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B3D158;
	sub_82D2FA90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3D160;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,52(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3D170;
	sub_82D1C1A8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mulli r11,r9,2800
	ctx.r11.s64 = ctx.r9.s64 * 2800;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x82B3D18C;
	sub_831CE980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,278
	ctx.r4.s64 = 18219008;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,390
	ctx.r4.u64 = ctx.r4.u64 | 390;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B3D1B4;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x82B3D1C0;
	sub_82D2AAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82B3D1CC;
	sub_83103100(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3D1D0;
	sub_831156E8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,52(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3D1E0;
	sub_82D1C1A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b3cd50
	ctx.lr = 0x82B3D1EC;
	sub_82B3CD50(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3D1F0;
	sub_831156E8(ctx, base);
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r6,37446
	ctx.r9.u64 = ctx.r6.u64 | 37446;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// bl 0x82d19788
	ctx.lr = 0x82B3D214;
	sub_82D19788(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82B3D218;
	sub_82D26ED8(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x82d26b18
	ctx.lr = 0x82B3D220;
	sub_82D26B18(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b3d240
	if (cr6.lt) goto loc_82B3D240;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3D240;
	sub_825952B8(ctx, base);
loc_82B3D240:
	// addi r1,r1,2960
	ctx.r1.s64 = ctx.r1.s64 + 2960;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3D248"))) PPC_WEAK_FUNC(sub_82B3D248);
PPC_FUNC_IMPL(__imp__sub_82B3D248) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// bl 0x82d04220
	ctx.lr = 0x82B3D280;
	sub_82D04220(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b3d294
	if (!cr6.lt) goto loc_82B3D294;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B3D294:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D2AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3D2BC;
	sub_82D19788(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b3d2dc
	if (cr6.lt) goto loc_82B3D2DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3D2DC;
	sub_825952B8(ctx, base);
loc_82B3D2DC:
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

__attribute__((alias("__imp__sub_82B3D2F0"))) PPC_WEAK_FUNC(sub_82B3D2F0);
PPC_FUNC_IMPL(__imp__sub_82B3D2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B3D2F8;
	__savegprlr_19(ctx, base);
	// stwu r1,-3168(r1)
	ea = -3168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3D304;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r25,r11,-14132
	ctx.r25.s64 = ctx.r11.s64 + -14132;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-104
	ctx.r4.s64 = ctx.r25.s64 + -104;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3d3a0
	if (cr6.eq) goto loc_82B3D3A0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D354;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b3d368
	if (cr6.lt) goto loc_82B3D368;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b3d36c
	goto loc_82B3D36C;
loc_82B3D368:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B3D36C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82B3D378;
	sub_82D30138(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3d394
	if (cr6.lt) goto loc_82B3D394;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B3D394;
	sub_825952B8(ctx, base);
loc_82B3D394:
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r28,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r28.u8);
loc_82B3D3A0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3D3AC;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B3D3B8;
	sub_82D19BA0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B3D3D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3D3D8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3D3E0;
	sub_82D33DB0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3d678
	if (cr6.eq) goto loc_82B3D678;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// ori r21,r11,24064
	ctx.r21.u64 = ctx.r11.u64 | 24064;
loc_82B3D3FC:
	// bl 0x831156e8
	ctx.lr = 0x82B3D400;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x82B3D41C;
	sub_831CE980(ctx, base);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r24,r27,1
	ctx.r24.s64 = ctx.r27.s64 + 1;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ori r4,r4,308
	ctx.r4.u64 = ctx.r4.u64 | 308;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82B3D440;
	sub_82D042A8(ctx, base);
	// addi r10,r25,-434
	ctx.r10.s64 = ctx.r25.s64 + -434;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
loc_82B3D448:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82b3d46c
	if (cr6.eq) goto loc_82B3D46C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82b3d448
	if (cr6.eq) goto loc_82B3D448;
loc_82B3D46C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82b3d4dc
	if (!cr6.eq) goto loc_82B3D4DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3d488
	if (!cr6.lt) goto loc_82B3D488;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82B3D488:
	// bl 0x831156e8
	ctx.lr = 0x82B3D48C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x82b3d4b4
	if (cr6.eq) goto loc_82B3D4B4;
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B3D4B0;
	sub_831CE980(ctx, base);
	// stb r28,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r28.u8);
loc_82B3D4B4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3d590
	if (cr6.lt) goto loc_82B3D590;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b3d4dc
	if (cr6.eq) goto loc_82B3D4DC;
loc_82B3D4CC:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,46
	ctx.r5.s64 = 46;
	// bl 0x831ce980
	ctx.lr = 0x82B3D4D8;
	sub_831CE980(ctx, base);
	// stb r28,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r28.u8);
loc_82B3D4DC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3D4E8;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3d640
	if (cr6.eq) goto loc_82B3D640;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-92
	ctx.r4.s64 = ctx.r25.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3d520
	if (cr6.eq) goto loc_82B3D520;
	// clrldi r4,r24,32
	ctx.r4.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82B3D520;
	sub_82D294D0(ctx, base);
loc_82B3D520:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-80
	ctx.r4.s64 = ctx.r25.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3d5c0
	if (cr6.eq) goto loc_82B3D5C0;
	// addi r10,r25,-433
	ctx.r10.s64 = ctx.r25.s64 + -433;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
loc_82B3D54C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82b3d570
	if (cr6.eq) goto loc_82B3D570;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82b3d54c
	if (cr6.eq) goto loc_82B3D54C;
loc_82B3D570:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82b3d598
	if (!cr6.eq) goto loc_82B3D598;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3d59c
	if (!cr6.lt) goto loc_82B3D59C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x82b3d59c
	goto loc_82B3D59C;
loc_82B3D590:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x82b3d4cc
	goto loc_82B3D4CC;
loc_82B3D598:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_82B3D59C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B3D5A4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B3D5B8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3D5C0;
	sub_8387E8E0(ctx, base);
loc_82B3D5C0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B3D5D4;
	sub_82D21408(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B3D5D8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B3D5DC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bne cr6,0x82b3d640
	if (!cr6.eq) goto loc_82B3D640;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r25,-68
	ctx.r4.s64 = ctx.r25.s64 + -68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B3D614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b3d640
	if (!cr6.eq) goto loc_82B3D640;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-40
	ctx.r4.s64 = ctx.r25.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3d640
	if (cr6.eq) goto loc_82B3D640;
	// bl 0x82d3c750
	ctx.lr = 0x82B3D640;
	sub_82D3C750(ctx, base);
loc_82B3D640:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3d65c
	if (cr6.lt) goto loc_82B3D65C;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82B3D65C;
	sub_825952B8(ctx, base);
loc_82B3D65C:
	// addi r26,r26,2800
	ctx.r26.s64 = ctx.r26.s64 + 2800;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// cmplw cr6,r26,r21
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, xer);
	// blt cr6,0x82b3d3fc
	if (cr6.lt) goto loc_82B3D3FC;
loc_82B3D678:
	// bl 0x830ff290
	ctx.lr = 0x82B3D67C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B3D680;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bne cr6,0x82b3d6b8
	if (!cr6.eq) goto loc_82B3D6B8;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3D69C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B3D6AC;
	sub_82D1EAC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3168
	ctx.r1.s64 = ctx.r1.s64 + 3168;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82B3D6B8:
	// bl 0x830ff290
	ctx.lr = 0x82B3D6BC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B3D6C0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82b3d72c
	if (!cr6.eq) goto loc_82B3D72C;
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// addi r4,r25,-28
	ctx.r4.s64 = ctx.r25.s64 + -28;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// li r5,25
	ctx.r5.s64 = 25;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82B3D6E4;
	sub_8259CC28(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B3D6E8;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x8311d4d8
	ctx.lr = 0x82B3D6F8;
	sub_8311D4D8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// blt cr6,0x82b3d71c
	if (cr6.lt) goto loc_82B3D71C;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B3D71C;
	sub_825952B8(ctx, base);
loc_82B3D71C:
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// b 0x82b3d770
	goto loc_82B3D770;
loc_82B3D72C:
	// bl 0x830ff290
	ctx.lr = 0x82B3D730;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B3D734;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bne cr6,0x82b3d7b0
	if (!cr6.eq) goto loc_82B3D7B0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B3D748;
	sub_837B0C10(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B3D74C;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// bl 0x8311d4d8
	ctx.lr = 0x82B3D75C;
	sub_8311D4D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// bl 0x8387e8e0
	ctx.lr = 0x82B3D770;
	sub_8387E8E0(ctx, base);
loc_82B3D770:
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x82b3d7b0
	if (cr6.eq) goto loc_82B3D7B0;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x82b3d7b0
	if (cr6.eq) goto loc_82B3D7B0;
	// bl 0x831156e8
	ctx.lr = 0x82B3D78C;
	sub_831156E8(ctx, base);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// ori r9,r10,40145
	ctx.r9.u64 = ctx.r10.u64 | 40145;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82d1eac0
	ctx.lr = 0x82B3D7B0;
	sub_82D1EAC0(ctx, base);
loc_82B3D7B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3168
	ctx.r1.s64 = ctx.r1.s64 + 3168;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3D7BC"))) PPC_WEAK_FUNC(sub_82B3D7BC);
PPC_FUNC_IMPL(__imp__sub_82B3D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3D7C0"))) PPC_WEAK_FUNC(sub_82B3D7C0);
PPC_FUNC_IMPL(__imp__sub_82B3D7C0) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3d850
	if (cr6.eq) goto loc_82B3D850;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-14076
	ctx.r4.s64 = ctx.r11.s64 + -14076;
	// bl 0x837b0c10
	ctx.lr = 0x82B3D7F0;
	sub_837B0C10(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B3D7F4;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8311d4d8
	ctx.lr = 0x82B3D804;
	sub_8311D4D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3D808;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3D818;
	sub_82D1C1A8(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r8,220
	ctx.r8.s64 = 14417920;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r6,r8,40145
	ctx.r6.u64 = ctx.r8.u64 | 40145;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r3,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82b3d850
	if (cr6.lt) goto loc_82B3D850;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3D850;
	sub_825952B8(ctx, base);
loc_82B3D850:
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

__attribute__((alias("__imp__sub_82B3D868"))) PPC_WEAK_FUNC(sub_82B3D868);
PPC_FUNC_IMPL(__imp__sub_82B3D868) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82B3D884;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3d90c
	if (cr6.lt) goto loc_82B3D90C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B3D894;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3d90c
	if (cr6.lt) goto loc_82B3D90C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82B3D8B0;
	sub_82D19858(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B3D8B4;
	sub_8311E3D0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-14052
	ctx.r4.s64 = ctx.r10.s64 + -14052;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B3D8C8;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311d4d8
	ctx.lr = 0x82B3D8D8;
	sub_8311D4D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3D8E0;
	sub_8387E8E0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3D8E4;
	sub_831156E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addis r31,r8,221
	ctx.r31.s64 = ctx.r8.s64 + 14483456;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3D8FC;
	sub_82D1C1A8(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,1121(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1121, ctx.r3.u8);
loc_82B3D90C:
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

__attribute__((alias("__imp__sub_82B3D924"))) PPC_WEAK_FUNC(sub_82B3D924);
PPC_FUNC_IMPL(__imp__sub_82B3D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3D928"))) PPC_WEAK_FUNC(sub_82B3D928);
PPC_FUNC_IMPL(__imp__sub_82B3D928) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3d9b8
	if (cr6.eq) goto loc_82B3D9B8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-14016
	ctx.r4.s64 = ctx.r11.s64 + -14016;
	// bl 0x837b0c10
	ctx.lr = 0x82B3D958;
	sub_837B0C10(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B3D95C;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8311d4d8
	ctx.lr = 0x82B3D96C;
	sub_8311D4D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3D970;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3D980;
	sub_82D1C1A8(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r8,220
	ctx.r8.s64 = 14417920;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r6,r8,40145
	ctx.r6.u64 = ctx.r8.u64 | 40145;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r3,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82b3d9b8
	if (cr6.lt) goto loc_82B3D9B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3D9B8;
	sub_825952B8(ctx, base);
loc_82B3D9B8:
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

__attribute__((alias("__imp__sub_82B3D9D0"))) PPC_WEAK_FUNC(sub_82B3D9D0);
PPC_FUNC_IMPL(__imp__sub_82B3D9D0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82d04220
	ctx.lr = 0x82B3DA04;
	sub_82D04220(ctx, base);
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

__attribute__((alias("__imp__sub_82B3DA1C"))) PPC_WEAK_FUNC(sub_82B3DA1C);
PPC_FUNC_IMPL(__imp__sub_82B3DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3DA20"))) PPC_WEAK_FUNC(sub_82B3DA20);
PPC_FUNC_IMPL(__imp__sub_82B3DA20) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82B3DA3C;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3dac4
	if (cr6.lt) goto loc_82B3DAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B3DA4C;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b3dac4
	if (cr6.lt) goto loc_82B3DAC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82B3DA68;
	sub_82D19858(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B3DA6C;
	sub_8311E3D0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-13988
	ctx.r4.s64 = ctx.r10.s64 + -13988;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B3DA80;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311d4d8
	ctx.lr = 0x82B3DA90;
	sub_8311D4D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3DA98;
	sub_8387E8E0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3DA9C;
	sub_831156E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addis r31,r8,221
	ctx.r31.s64 = ctx.r8.s64 + 14483456;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B3DAB4;
	sub_82D1C1A8(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,1121(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1121, ctx.r3.u8);
loc_82B3DAC4:
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

__attribute__((alias("__imp__sub_82B3DADC"))) PPC_WEAK_FUNC(sub_82B3DADC);
PPC_FUNC_IMPL(__imp__sub_82B3DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3DAE0"))) PPC_WEAK_FUNC(sub_82B3DAE0);
PPC_FUNC_IMPL(__imp__sub_82B3DAE0) {
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
	// addi r9,r11,-13864
	ctx.r9.s64 = ctx.r11.s64 + -13864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3db44
	if (cr6.eq) goto loc_82B3DB44;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82B3DB30;
	sub_838ADAB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3DB44;
	sub_825952B8(ctx, base);
loc_82B3DB44:
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
	// bl 0x82d25548
	ctx.lr = 0x82B3DB5C;
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

__attribute__((alias("__imp__sub_82B3DB74"))) PPC_WEAK_FUNC(sub_82B3DB74);
PPC_FUNC_IMPL(__imp__sub_82B3DB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3DB78"))) PPC_WEAK_FUNC(sub_82B3DB78);
PPC_FUNC_IMPL(__imp__sub_82B3DB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3DB80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B3DB94;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B3DBAC;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13864
	ctx.r9.s64 = ctx.r11.s64 + -13864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// addi r31,r7,-14256
	ctx.r31.s64 = ctx.r7.s64 + -14256;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x82d20ae0
	ctx.lr = 0x82B3DBE8;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B3DBF8;
	sub_82D23390(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B3DBFC;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B3DC04;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B3DC10;
	sub_82D195D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3DC1C"))) PPC_WEAK_FUNC(sub_82B3DC1C);
PPC_FUNC_IMPL(__imp__sub_82B3DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3DC20"))) PPC_WEAK_FUNC(sub_82B3DC20);
PPC_FUNC_IMPL(__imp__sub_82B3DC20) {
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
	// bl 0x82b3dae0
	ctx.lr = 0x82B3DC40;
	sub_82B3DAE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3dc58
	if (cr6.eq) goto loc_82B3DC58;
	// bl 0x82416268
	ctx.lr = 0x82B3DC54;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3DC58:
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

__attribute__((alias("__imp__sub_82B3DC70"))) PPC_WEAK_FUNC(sub_82B3DC70);
PPC_FUNC_IMPL(__imp__sub_82B3DC70) {
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
	// addi r9,r11,-13560
	ctx.r9.s64 = ctx.r11.s64 + -13560;
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
	// bl 0x82b3dae0
	ctx.lr = 0x82B3DCA8;
	sub_82B3DAE0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b3dcc0
	if (cr6.eq) goto loc_82B3DCC0;
	// bl 0x82416268
	ctx.lr = 0x82B3DCBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3DCC0:
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

__attribute__((alias("__imp__sub_82B3DCD8"))) PPC_WEAK_FUNC(sub_82B3DCD8);
PPC_FUNC_IMPL(__imp__sub_82B3DCD8) {
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
	// addi r9,r11,-13256
	ctx.r9.s64 = ctx.r11.s64 + -13256;
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
	// bl 0x82b3dae0
	ctx.lr = 0x82B3DD10;
	sub_82B3DAE0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b3dd28
	if (cr6.eq) goto loc_82B3DD28;
	// bl 0x82416268
	ctx.lr = 0x82B3DD24;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3DD28:
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

__attribute__((alias("__imp__sub_82B3DD40"))) PPC_WEAK_FUNC(sub_82B3DD40);
PPC_FUNC_IMPL(__imp__sub_82B3DD40) {
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
	// blt cr6,0x82b3dd68
	if (cr6.lt) goto loc_82B3DD68;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b3dd6c
	goto loc_82B3DD6C;
loc_82B3DD68:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B3DD6C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B3DD88;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3dda4
	if (cr6.eq) goto loc_82B3DDA4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b3db78
	ctx.lr = 0x82B3DD9C;
	sub_82B3DB78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3dda8
	if (!cr6.eq) goto loc_82B3DDA8;
loc_82B3DDA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B3DDA8:
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

__attribute__((alias("__imp__sub_82B3DDC0"))) PPC_WEAK_FUNC(sub_82B3DDC0);
PPC_FUNC_IMPL(__imp__sub_82B3DDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3DDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B3DDEC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3de30
	if (cr6.eq) goto loc_82B3DE30;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b3db78
	ctx.lr = 0x82B3DE04;
	sub_82B3DB78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13560
	ctx.r9.s64 = ctx.r11.s64 + -13560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3DE30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3DE3C"))) PPC_WEAK_FUNC(sub_82B3DE3C);
PPC_FUNC_IMPL(__imp__sub_82B3DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3DE40"))) PPC_WEAK_FUNC(sub_82B3DE40);
PPC_FUNC_IMPL(__imp__sub_82B3DE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3de50
	if (cr6.lt) goto loc_82B3DE50;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B3DE50:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b3ddc0
	sub_82B3DDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3DE58"))) PPC_WEAK_FUNC(sub_82B3DE58);
PPC_FUNC_IMPL(__imp__sub_82B3DE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3DE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B3DE84;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3dec8
	if (cr6.eq) goto loc_82B3DEC8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b3db78
	ctx.lr = 0x82B3DE9C;
	sub_82B3DB78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13256
	ctx.r9.s64 = ctx.r11.s64 + -13256;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3DEC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3DED4"))) PPC_WEAK_FUNC(sub_82B3DED4);
PPC_FUNC_IMPL(__imp__sub_82B3DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3DED8"))) PPC_WEAK_FUNC(sub_82B3DED8);
PPC_FUNC_IMPL(__imp__sub_82B3DED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3dee8
	if (cr6.lt) goto loc_82B3DEE8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B3DEE8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b3de58
	sub_82B3DE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3DEF0"))) PPC_WEAK_FUNC(sub_82B3DEF0);
PPC_FUNC_IMPL(__imp__sub_82B3DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3DEF8;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B3DF10;
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
	ctx.lr = 0x82B3DF28;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// addi r9,r11,-12328
	ctx.r9.s64 = ctx.r11.s64 + -12328;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stb r28,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r28.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B3DF50;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B3DF54;
	sub_830FFAA8(ctx, base);
	// addi r7,r3,-8
	ctx.r7.s64 = ctx.r3.s64 + -8;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r5,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r5.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B3DF68;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r30,r27,221
	ctx.r30.s64 = ctx.r27.s64 + 14483456;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// bl 0x831156e8
	ctx.lr = 0x82B3DF78;
	sub_831156E8(ctx, base);
	// lis r4,236
	ctx.r4.s64 = 15466496;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r3,r4,5128
	ctx.r3.u64 = ctx.r4.u64 | 5128;
	// lwzx r11,r27,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b3dfc0
	if (!cr6.eq) goto loc_82B3DFC0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3dfc0
	if (!cr6.eq) goto loc_82B3DFC0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stb r28,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r28.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r8,r9,24160
	ctx.r8.u64 = ctx.r9.u64 | 24160;
	// stb r11,1100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1100, ctx.r11.u8);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stb r11,7702(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7702, ctx.r11.u8);
loc_82B3DFC0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	// bl 0x82d20ae0
	ctx.lr = 0x82B3DFD0;
	sub_82D20AE0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12552
	ctx.r4.s64 = ctx.r10.s64 + -12552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B3DFE4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9a8
	ctx.lr = 0x82B3DFEC;
	sub_82D1A9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3DFF8"))) PPC_WEAK_FUNC(sub_82B3DFF8);
PPC_FUNC_IMPL(__imp__sub_82B3DFF8) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82b3e08c
	if (!cr6.eq) goto loc_82B3E08C;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E01C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E024;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e08c
	if (cr6.eq) goto loc_82B3E08C;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E034;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e08c
	if (cr6.eq) goto loc_82B3E08C;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bge cr6,0x82b3e078
	if (!cr6.lt) goto loc_82B3E078;
	// bl 0x831156e8
	ctx.lr = 0x82B3E04C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r10,r11,221
	ctx.r10.s64 = ctx.r11.s64 + 14483456;
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// lwz r11,1288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1288);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// beq cr6,0x82b3e078
	if (cr6.eq) goto loc_82B3E078;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82b3e078
	if (cr6.eq) goto loc_82B3E078;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82b3e07c
	if (!cr6.eq) goto loc_82B3E07C;
loc_82B3E078:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B3E07C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B3E08C;
	sub_82D2B608(ctx, base);
loc_82B3E08C:
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

__attribute__((alias("__imp__sub_82B3E0A4"))) PPC_WEAK_FUNC(sub_82B3E0A4);
PPC_FUNC_IMPL(__imp__sub_82B3E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3E0A8"))) PPC_WEAK_FUNC(sub_82B3E0A8);
PPC_FUNC_IMPL(__imp__sub_82B3E0A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E0C0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E0C8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3e0e8
	if (!cr6.eq) goto loc_82B3E0E8;
loc_82B3E0D0:
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
loc_82B3E0E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E0F0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e0d0
	if (cr6.eq) goto loc_82B3E0D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B3E108;
	sub_82D2D510(ctx, base);
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

__attribute__((alias("__imp__sub_82B3E11C"))) PPC_WEAK_FUNC(sub_82B3E11C);
PPC_FUNC_IMPL(__imp__sub_82B3E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3E120"))) PPC_WEAK_FUNC(sub_82B3E120);
PPC_FUNC_IMPL(__imp__sub_82B3E120) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b3e174
	if (cr6.eq) goto loc_82B3E174;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r31,r11,-12668
	ctx.r31.s64 = ctx.r11.s64 + -12668;
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3E160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e174
	if (cr6.eq) goto loc_82B3E174;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B3E174;
	sub_82D29598(ctx, base);
loc_82B3E174:
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

__attribute__((alias("__imp__sub_82B3E18C"))) PPC_WEAK_FUNC(sub_82B3E18C);
PPC_FUNC_IMPL(__imp__sub_82B3E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3E190"))) PPC_WEAK_FUNC(sub_82B3E190);
PPC_FUNC_IMPL(__imp__sub_82B3E190) {
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
	// addi r9,r11,-12328
	ctx.r9.s64 = ctx.r11.s64 + -12328;
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
	ctx.lr = 0x82B3E1C8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b3e1e0
	if (cr6.eq) goto loc_82B3E1E0;
	// bl 0x82416268
	ctx.lr = 0x82B3E1DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3E1E0:
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

__attribute__((alias("__imp__sub_82B3E1F8"))) PPC_WEAK_FUNC(sub_82B3E1F8);
PPC_FUNC_IMPL(__imp__sub_82B3E1F8) {
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
	// blt cr6,0x82b3e220
	if (cr6.lt) goto loc_82B3E220;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b3e224
	goto loc_82B3E224;
loc_82B3E220:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B3E224:
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
	ctx.lr = 0x82B3E240;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e260
	if (cr6.eq) goto loc_82B3E260;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b3def0
	ctx.lr = 0x82B3E258;
	sub_82B3DEF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3e264
	if (!cr6.eq) goto loc_82B3E264;
loc_82B3E260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B3E264:
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

__attribute__((alias("__imp__sub_82B3E27C"))) PPC_WEAK_FUNC(sub_82B3E27C);
PPC_FUNC_IMPL(__imp__sub_82B3E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3E280"))) PPC_WEAK_FUNC(sub_82B3E280);
PPC_FUNC_IMPL(__imp__sub_82B3E280) {
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
	// blt cr6,0x82b3e2a8
	if (cr6.lt) goto loc_82B3E2A8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b3e2ac
	goto loc_82B3E2AC;
loc_82B3E2A8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B3E2AC:
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
	ctx.lr = 0x82B3E2C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e2e8
	if (cr6.eq) goto loc_82B3E2E8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b3def0
	ctx.lr = 0x82B3E2E0;
	sub_82B3DEF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3e2ec
	if (!cr6.eq) goto loc_82B3E2EC;
loc_82B3E2E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B3E2EC:
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

__attribute__((alias("__imp__sub_82B3E304"))) PPC_WEAK_FUNC(sub_82B3E304);
PPC_FUNC_IMPL(__imp__sub_82B3E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3E308"))) PPC_WEAK_FUNC(sub_82B3E308);
PPC_FUNC_IMPL(__imp__sub_82B3E308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B3E310;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3E31C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e4ac
	if (cr6.eq) goto loc_82B3E4AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E32C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E334;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e4ac
	if (cr6.eq) goto loc_82B3E4AC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B3E358;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r31,r9,221
	ctx.r31.s64 = ctx.r9.s64 + 14483456;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E374;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e4a4
	if (cr6.eq) goto loc_82B3E4A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B3E38C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e4a4
	if (cr6.eq) goto loc_82B3E4A4;
	// bl 0x83a970c8
	ctx.lr = 0x82B3E398;
	sub_83A970C8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E3AC;
	sub_82B3E0A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e3bc
	if (cr6.eq) goto loc_82B3E3BC;
	// bl 0x83a970c8
	ctx.lr = 0x82B3E3B8;
	sub_83A970C8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82B3E3BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E3C8;
	sub_82B3E0A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e3fc
	if (cr6.eq) goto loc_82B3E3FC;
	// bl 0x831156e8
	ctx.lr = 0x82B3E3D8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x83a970c8
	ctx.lr = 0x82B3E3E8;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,24160
	ctx.r3.s64 = ctx.r3.s64 + 24160;
	// bl 0x82acd678
	ctx.lr = 0x82B3E3F8;
	sub_82ACD678(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
loc_82B3E3FC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E408;
	sub_82B3E0A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e4a4
	if (cr6.eq) goto loc_82B3E4A4;
	// bl 0x83a970c8
	ctx.lr = 0x82B3E414;
	sub_83A970C8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3e428
	if (!cr6.eq) goto loc_82B3E428;
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// b 0x82b3e42c
	goto loc_82B3E42C;
loc_82B3E428:
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
loc_82B3E42C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E438;
	sub_82B3E0A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e4a4
	if (cr6.eq) goto loc_82B3E4A4;
	// bl 0x83a970c8
	ctx.lr = 0x82B3E444;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3e454
	if (!cr6.eq) goto loc_82B3E454;
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// b 0x82b3e458
	goto loc_82B3E458;
loc_82B3E454:
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
loc_82B3E458:
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x82b3e490
	if (cr6.eq) goto loc_82B3E490;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E470;
	sub_82B3E0A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e4a4
	if (cr6.eq) goto loc_82B3E4A4;
	// bl 0x83a970c8
	ctx.lr = 0x82B3E47C;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3e48c
	if (!cr6.eq) goto loc_82B3E48C;
	// stb r28,7702(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7702, ctx.r28.u8);
	// b 0x82b3e490
	goto loc_82B3E490;
loc_82B3E48C:
	// stb r30,7702(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7702, ctx.r30.u8);
loc_82B3E490:
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3e4a4
	if (cr6.eq) goto loc_82B3E4A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8316bc30
	ctx.lr = 0x82B3E4A4;
	sub_8316BC30(ctx, base);
loc_82B3E4A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3E4AC;
	sub_8387E8E0(ctx, base);
loc_82B3E4AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3E4B8"))) PPC_WEAK_FUNC(sub_82B3E4B8);
PPC_FUNC_IMPL(__imp__sub_82B3E4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B3E4C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3E4CC;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3ed88
	if (cr6.eq) goto loc_82B3ED88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E4DC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E4E4;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3ed88
	if (cr6.eq) goto loc_82B3ED88;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// bl 0x82d19a78
	ctx.lr = 0x82B3E50C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r24,r11,-12620
	ctx.r24.s64 = ctx.r11.s64 + -12620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,80
	ctx.r4.s64 = ctx.r24.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3E52C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3e548
	if (!cr6.eq) goto loc_82B3E548;
loc_82B3E534:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3E53C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B3E548:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,91
	ctx.r4.u64 = ctx.r4.u64 | 91;
	// bl 0x82d30340
	ctx.lr = 0x82B3E558;
	sub_82D30340(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3E55C;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r11,97(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 97);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r22,r27,221
	ctx.r22.s64 = ctx.r27.s64 + 14483456;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r22,r22,-26512
	ctx.r22.s64 = ctx.r22.s64 + -26512;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82b3e594
	if (cr6.eq) goto loc_82B3E594;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d1ed60
	ctx.lr = 0x82B3E584;
	sub_82D1ED60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E58C;
	sub_82D19A78(ctx, base);
	// addi r4,r24,92
	ctx.r4.s64 = ctx.r24.s64 + 92;
	// b 0x82b3e5cc
	goto loc_82B3E5CC;
loc_82B3E594:
	// lwz r11,1288(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1288);
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x82b3e5b8
	if (cr6.eq) goto loc_82B3E5B8;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d1ed60
	ctx.lr = 0x82B3E5A8;
	sub_82D1ED60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E5B0;
	sub_82D19A78(ctx, base);
	// addi r4,r24,108
	ctx.r4.s64 = ctx.r24.s64 + 108;
	// b 0x82b3e5cc
	goto loc_82B3E5CC;
loc_82B3E5B8:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d1ed60
	ctx.lr = 0x82B3E5C0;
	sub_82D1ED60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E5C8;
	sub_82D19A78(ctx, base);
	// addi r4,r24,124
	ctx.r4.s64 = ctx.r24.s64 + 124;
loc_82B3E5CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3E5E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E5E8;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,140
	ctx.r4.s64 = ctx.r24.s64 + 140;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3E600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E608;
	sub_82D19A78(ctx, base);
	// addi r4,r24,160
	ctx.r4.s64 = ctx.r24.s64 + 160;
	// bl 0x82d2f098
	ctx.lr = 0x82B3E610;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// lbz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3e65c
	if (!cr6.eq) goto loc_82B3E65C;
	// bl 0x82d19a78
	ctx.lr = 0x82B3E630;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,168
	ctx.r4.s64 = ctx.r24.s64 + 168;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3E648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3E658;
	sub_82D2AEC8(ctx, base);
	// b 0x82b3e6ac
	goto loc_82B3E6AC;
loc_82B3E65C:
	// bl 0x82d19a78
	ctx.lr = 0x82B3E660;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,180
	ctx.r4.s64 = ctx.r24.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3E678;
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
	ctx.lr = 0x82B3E68C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3E69C;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3E6AC;
	sub_82D19788(ctx, base);
loc_82B3E6AC:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,25360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3e6dc
	if (cr6.eq) goto loc_82B3E6DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r23,5(r22)
	PPC_STORE_U8(ctx.r22.u32 + 5, ctx.r23.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r23,6(r22)
	PPC_STORE_U8(ctx.r22.u32 + 6, ctx.r23.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r11,1100(r22)
	PPC_STORE_U8(ctx.r22.u32 + 1100, ctx.r11.u8);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// stb r9,4(r22)
	PPC_STORE_U8(ctx.r22.u32 + 4, ctx.r9.u8);
loc_82B3E6DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E6E8;
	sub_82B3E0A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E6F8;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e120
	ctx.lr = 0x82B3E71C;
	sub_82B3E120(ctx, base);
	// lbz r30,1120(r22)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1120);
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x82b3e72c
	if (cr6.lt) goto loc_82B3E72C;
	// li r30,32
	ctx.r30.s64 = 32;
loc_82B3E72C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b3e768
	if (cr6.eq) goto loc_82B3E768;
loc_82B3E738:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r5,r24,192
	ctx.r5.s64 = ctx.r24.s64 + 192;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82573118
	ctx.lr = 0x82B3E750;
	sub_82573118(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B3E75C;
	sub_82D3B548(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b3e738
	if (cr6.lt) goto loc_82B3E738;
loc_82B3E768:
	// lbz r11,1100(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1100);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b3e780
	if (!cr6.gt) goto loc_82B3E780;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_82B3E780:
	// bl 0x82d3b298
	ctx.lr = 0x82B3E784;
	sub_82D3B298(ctx, base);
	// addis r27,r27,236
	ctx.r27.s64 = ctx.r27.s64 + 15466496;
	// addi r27,r27,5128
	ctx.r27.s64 = ctx.r27.s64 + 5128;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b3e7ac
	if (cr6.eq) goto loc_82B3E7AC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B3E7AC;
	sub_82D2B608(ctx, base);
loc_82B3E7AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E7B8;
	sub_82B3E0A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E7C8;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e120
	ctx.lr = 0x82B3E7E8;
	sub_82B3E120(ctx, base);
	// addi r11,r24,-24
	ctx.r11.s64 = ctx.r24.s64 + -24;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B3E7F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B3E800;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b3e7f4
	if (!cr0.eq) goto loc_82B3E7F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82d3b298
	ctx.lr = 0x82B3E814;
	sub_82D3B298(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E820;
	sub_82B3E0A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E830;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e120
	ctx.lr = 0x82B3E850;
	sub_82B3E120(ctx, base);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3E858;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,24160
	ctx.r30.s64 = ctx.r30.s64 + 24160;
loc_82B3E868:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82acd678
	ctx.lr = 0x82B3E874;
	sub_82ACD678(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82acd748
	ctx.lr = 0x82B3E884;
	sub_82ACD748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b620
	ctx.lr = 0x82B3E890;
	sub_82D3B620(ctx, base);
	// lbz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 4);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bne cr6,0x82b3e8a0
	if (!cr6.eq) goto loc_82B3E8A0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82B3E8A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,14
	cr6.compare<uint32_t>(ctx.r31.u32, 14, xer);
	// blt cr6,0x82b3e868
	if (cr6.lt) goto loc_82B3E868;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B3E8B8;
	sub_82D3B298(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E8C4;
	sub_82B3E0A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E8D4;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e120
	ctx.lr = 0x82B3E8F8;
	sub_82B3E120(ctx, base);
	// addi r31,r24,-64
	ctx.r31.s64 = ctx.r24.s64 + -64;
loc_82B3E8FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d3b620
	ctx.lr = 0x82B3E908;
	sub_82D3B620(ctx, base);
	// addi r11,r24,-64
	ctx.r11.s64 = ctx.r24.s64 + -64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82b3e8fc
	if (cr6.lt) goto loc_82B3E8FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,5(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 5);
	// bl 0x82d3b298
	ctx.lr = 0x82B3E928;
	sub_82D3B298(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b3e948
	if (cr6.eq) goto loc_82B3E948;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B3E948;
	sub_82D2B608(ctx, base);
loc_82B3E948:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E954;
	sub_82B3E0A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3E964;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e120
	ctx.lr = 0x82B3E988;
	sub_82B3E120(ctx, base);
	// addi r31,r24,-64
	ctx.r31.s64 = ctx.r24.s64 + -64;
loc_82B3E98C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d3b620
	ctx.lr = 0x82B3E998;
	sub_82D3B620(ctx, base);
	// addi r11,r24,-64
	ctx.r11.s64 = ctx.r24.s64 + -64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82b3e98c
	if (cr6.lt) goto loc_82B3E98C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,6(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 6);
	// bl 0x82d3b298
	ctx.lr = 0x82B3E9B8;
	sub_82D3B298(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b3e9d8
	if (cr6.eq) goto loc_82B3E9D8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B3E9D8;
	sub_82D2B608(ctx, base);
loc_82B3E9D8:
	// lwz r11,1288(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1288);
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x82b3eaec
	if (cr6.eq) goto loc_82B3EAEC;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e0a8
	ctx.lr = 0x82B3E9F0;
	sub_82B3E0A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B3EA00;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b3e534
	if (cr6.eq) goto loc_82B3E534;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b3e120
	ctx.lr = 0x82B3EA24;
	sub_82B3E120(ctx, base);
	// addi r31,r24,-56
	ctx.r31.s64 = ctx.r24.s64 + -56;
loc_82B3EA28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d3b620
	ctx.lr = 0x82B3EA34;
	sub_82D3B620(ctx, base);
	// addi r11,r24,-56
	ctx.r11.s64 = ctx.r24.s64 + -56;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82b3ea28
	if (cr6.lt) goto loc_82B3EA28;
	// lwz r11,1288(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1288);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// beq cr6,0x82b3eaac
	if (cr6.eq) goto loc_82B3EAAC;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82b3eaac
	if (cr6.eq) goto loc_82B3EAAC;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// beq cr6,0x82b3eaac
	if (cr6.eq) goto loc_82B3EAAC;
	// lbz r11,1100(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 1100);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82b3ea8c
	if (!cr6.gt) goto loc_82B3EA8C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B3EA84;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b3eac4
	goto loc_82B3EAC4;
loc_82B3EA8C:
	// lbz r11,7702(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 7702);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3eaa4
	if (cr6.eq) goto loc_82B3EAA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b3eac8
	goto loc_82B3EAC8;
loc_82B3EAA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b3eac8
	goto loc_82B3EAC8;
loc_82B3EAAC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B3EAC0;
	sub_82D2B608(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B3EAC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B3EAC8:
	// bl 0x82d3b298
	ctx.lr = 0x82B3EACC;
	sub_82D3B298(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b3eaec
	if (cr6.eq) goto loc_82B3EAEC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B3EAEC;
	sub_82D2B608(ctx, base);
loc_82B3EAEC:
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// li r27,39
	ctx.r27.s64 = 39;
	// li r28,41
	ctx.r28.s64 = 41;
	// li r29,40
	ctx.r29.s64 = 40;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82B3EB10:
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// stw r21,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stb r23,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r23.u8);
	// bne cr6,0x82b3eb40
	if (!cr6.eq) goto loc_82B3EB40;
	// lbz r11,97(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3ec50
	if (cr6.eq) goto loc_82B3EC50;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x838760e0
	ctx.lr = 0x82B3EB3C;
	sub_838760E0(ctx, base);
	// b 0x82b3ec90
	goto loc_82B3EC90;
loc_82B3EB40:
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bne cr6,0x82b3ec50
	if (!cr6.eq) goto loc_82B3EC50;
	// lbz r11,97(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3eb60
	if (!cr6.eq) goto loc_82B3EB60;
	// lbz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3eb6c
	if (cr6.eq) goto loc_82B3EB6C;
loc_82B3EB60:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x838760e0
	ctx.lr = 0x82B3EB68;
	sub_838760E0(ctx, base);
	// b 0x82b3ec90
	goto loc_82B3EC90;
loc_82B3EB6C:
	// lwz r11,1288(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1288);
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x82b3ec5c
	if (cr6.eq) goto loc_82B3EC5C;
	// addi r4,r24,-281
	ctx.r4.s64 = ctx.r24.s64 + -281;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82B3EB84;
	sub_837B0C10(ctx, base);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8315e518
	ctx.lr = 0x82B3EB9C;
	sub_8315E518(ctx, base);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8315e518
	ctx.lr = 0x82B3EBB4;
	sub_8315E518(ctx, base);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8315e518
	ctx.lr = 0x82B3EBCC;
	sub_8315E518(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3ebe0
	if (!cr6.lt) goto loc_82B3EBE0;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
loc_82B3EBE0:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3ebf4
	if (!cr6.lt) goto loc_82B3EBF4;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
loc_82B3EBF4:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3ec08
	if (!cr6.lt) goto loc_82B3EC08;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
loc_82B3EC08:
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82B3EC18;
	sub_82D042A8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8259cb28
	ctx.lr = 0x82B3EC2C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3EC34;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3EC3C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3EC44;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3EC4C;
	sub_8387E8E0(ctx, base);
	// b 0x82b3ec5c
	goto loc_82B3EC5C;
loc_82B3EC50:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
loc_82B3EC5C:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x830f6558
	ctx.lr = 0x82B3EC68;
	sub_830F6558(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3ec84
	if (cr6.lt) goto loc_82B3EC84;
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825952b8
	ctx.lr = 0x82B3EC84;
	sub_825952B8(ctx, base);
loc_82B3EC84:
	// stw r21,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stb r23,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r23.u8);
loc_82B3EC90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x82b3eb10
	if (cr6.lt) goto loc_82B3EB10;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B3ECAC;
	sub_82D24C38(ctx, base);
	// lis r11,269
	ctx.r11.s64 = 17629184;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,176
	ctx.r10.u64 = ctx.r11.u64 | 176;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stb r23,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r23.u8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x830f6558
	ctx.lr = 0x82B3ECDC;
	sub_830F6558(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B3ECEC;
	sub_82D24C38(ctx, base);
	// lbz r9,96(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b3ed08
	if (!cr6.eq) goto loc_82B3ED08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B3ED08;
	sub_82D1EAC0(ctx, base);
loc_82B3ED08:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3ed24
	if (cr6.lt) goto loc_82B3ED24;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82B3ED24;
	sub_825952B8(ctx, base);
loc_82B3ED24:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3ed50
	if (cr6.eq) goto loc_82B3ED50;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x830f6290
	ctx.lr = 0x82B3ED40;
	sub_830F6290(ctx, base);
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B3ED50;
	sub_825952B8(ctx, base);
loc_82B3ED50:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// beq cr6,0x82b3ed88
	if (cr6.eq) goto loc_82B3ED88;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x830f6290
	ctx.lr = 0x82B3ED78;
	sub_830F6290(ctx, base);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B3ED88;
	sub_825952B8(ctx, base);
loc_82B3ED88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3ED94"))) PPC_WEAK_FUNC(sub_82B3ED94);
PPC_FUNC_IMPL(__imp__sub_82B3ED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3ED98"))) PPC_WEAK_FUNC(sub_82B3ED98);
PPC_FUNC_IMPL(__imp__sub_82B3ED98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r31,48
	cr6.compare<uint32_t>(ctx.r31.u32, 48, xer);
	// bge cr6,0x82b3ee78
	if (!cr6.lt) goto loc_82B3EE78;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r9,r3,1300
	ctx.r9.s64 = ctx.r3.s64 + 1300;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82B3EDBC:
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b3ee04
	if (cr6.eq) goto loc_82B3EE04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82b3edbc
	if (cr6.lt) goto loc_82B3EDBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82B3EDE0:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// beq cr6,0x82b3ee38
	if (cr6.eq) goto loc_82B3EE38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82b3ede0
	if (cr6.lt) goto loc_82B3EDE0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82B3EE04:
	// mulli r11,r11,49
	ctx.r11.s64 = ctx.r11.s64 * 49;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,326
	ctx.r9.s64 = ctx.r11.s64 + 326;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r7,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82B3EE38:
	// mulli r10,r11,196
	ctx.r10.s64 = ctx.r11.s64 * 196;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mulli r11,r11,49
	ctx.r11.s64 = ctx.r11.s64 * 49;
	// sth r8,1300(r10)
	PPC_STORE_U16(ctx.r10.u32 + 1300, ctx.r8.u16);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,326
	ctx.r8.s64 = ctx.r11.s64 + 326;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
loc_82B3EE78:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3EE80"))) PPC_WEAK_FUNC(sub_82B3EE80);
PPC_FUNC_IMPL(__imp__sub_82B3EE80) {
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
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3eeb4
	if (cr6.eq) goto loc_82B3EEB4;
	// bl 0x82d17d90
	ctx.lr = 0x82B3EEA4;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3eeb4
	if (!cr6.eq) goto loc_82B3EEB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
loc_82B3EEB4:
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

__attribute__((alias("__imp__sub_82B3EEC8"))) PPC_WEAK_FUNC(sub_82B3EEC8);
PPC_FUNC_IMPL(__imp__sub_82B3EEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B3EED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3EEE0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// addi r11,r28,2268
	ctx.r11.s64 = ctx.r28.s64 + 2268;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3EF00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3EF0C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,2268(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2268);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B3EF24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b3ef3c
	if (cr6.eq) goto loc_82B3EF3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d303d0
	ctx.lr = 0x82B3EF3C;
	sub_82D303D0(ctx, base);
loc_82B3EF3C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b3ef50
	if (cr6.eq) goto loc_82B3EF50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d303d0
	ctx.lr = 0x82B3EF50;
	sub_82D303D0(ctx, base);
loc_82B3EF50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3EF58"))) PPC_WEAK_FUNC(sub_82B3EF58);
PPC_FUNC_IMPL(__imp__sub_82B3EF58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3EF70;
	sub_82D19A78(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82B3EF74;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b3ef98
	if (cr6.gt) goto loc_82B3EF98;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-11979
	ctx.r3.s64 = ctx.r11.s64 + -11979;
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
loc_82B3EF98:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,2416
	ctx.r9.s64 = ctx.r11.s64 + 2416;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82B3EFBC"))) PPC_WEAK_FUNC(sub_82B3EFBC);
PPC_FUNC_IMPL(__imp__sub_82B3EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3EFC0"))) PPC_WEAK_FUNC(sub_82B3EFC0);
PPC_FUNC_IMPL(__imp__sub_82B3EFC0) {
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
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3eff4
	if (cr6.eq) goto loc_82B3EFF4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B3EFEC;
	sub_82D19788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b3f1e8
	goto loc_82B3F1E8;
loc_82B3EFF4:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b3f1d8
	if (cr6.gt) goto loc_82B3F1D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b3f098
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B3F098;
	// bdzf 4*cr6+eq,0x82b3f134
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B3F134;
	// bne cr6,0x82b3f198
	if (!cr6.eq) goto loc_82B3F198;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3F034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B3F054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3F064;
	sub_82D19788(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B3F084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3F094;
	sub_82D19788(ctx, base);
	// b 0x82b3f1d8
	goto loc_82B3F1D8;
loc_82B3F098:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,478
	ctx.r5.u64 = ctx.r5.u64 | 478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3F0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B3F0D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3F0E8;
	sub_82D19788(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B3F108;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3F118;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,537
	ctx.r5.u64 = ctx.r5.u64 | 537;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82b3f1d0
	goto loc_82B3F1D0;
loc_82B3F134:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,478
	ctx.r5.u64 = ctx.r5.u64 | 478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3F154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B3F174;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3F184;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3F194;
	sub_82D19788(ctx, base);
	// b 0x82b3f1d8
	goto loc_82B3F1D8;
loc_82B3F198:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3F1B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82B3F1D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B3F1D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B3F1D8:
	// lbz r11,145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3f1f4
	if (cr6.eq) goto loc_82B3F1F4;
	// li r4,3
	ctx.r4.s64 = 3;
loc_82B3F1E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B3F1F4;
	sub_82D19788(ctx, base);
loc_82B3F1F4:
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

__attribute__((alias("__imp__sub_82B3F208"))) PPC_WEAK_FUNC(sub_82B3F208);
PPC_FUNC_IMPL(__imp__sub_82B3F208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82d19a78
	ctx.lr = 0x82B3F220;
	sub_82D19A78(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82B3F224;
	sub_82D33C10(ctx, base);
	// addic. r4,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82b3f248
	if (cr0.lt) goto loc_82B3F248;
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
	ctx.lr = 0x82B3F248;
	sub_82D1EBF8(ctx, base);
loc_82B3F248:
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

__attribute__((alias("__imp__sub_82B3F260"))) PPC_WEAK_FUNC(sub_82B3F260);
PPC_FUNC_IMPL(__imp__sub_82B3F260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3F268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3F278;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,2276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2276);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3F294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,2368(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2368);
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b3f2c8
	if (!cr6.eq) goto loc_82B3F2C8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3f2cc
	if (cr6.eq) goto loc_82B3F2CC;
loc_82B3F2C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3F2CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b3f310
	if (cr6.eq) goto loc_82B3F310;
	// bl 0x82d19a88
	ctx.lr = 0x82B3F2E4;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b3f300
	if (!cr6.eq) goto loc_82B3F300;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b3efc0
	ctx.lr = 0x82B3F2F8;
	sub_82B3EFC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3F300:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b3efc0
	ctx.lr = 0x82B3F308;
	sub_82B3EFC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3F310:
	// bl 0x82d19a88
	ctx.lr = 0x82B3F314;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// beq cr6,0x82b3f328
	if (cr6.eq) goto loc_82B3F328;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82B3F328:
	// bl 0x82b3efc0
	ctx.lr = 0x82B3F32C;
	sub_82B3EFC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3F334"))) PPC_WEAK_FUNC(sub_82B3F334);
PPC_FUNC_IMPL(__imp__sub_82B3F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3F338"))) PPC_WEAK_FUNC(sub_82B3F338);
PPC_FUNC_IMPL(__imp__sub_82B3F338) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82B3F354;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,2276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2276);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3F370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3f410
	if (cr6.eq) goto loc_82B3F410;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,2368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2368);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b3f3ac
	if (!cr6.eq) goto loc_82B3F3AC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3f3b0
	if (cr6.eq) goto loc_82B3F3B0;
loc_82B3F3AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B3F3B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3f3ec
	if (cr6.eq) goto loc_82B3F3EC;
	// bl 0x82d19ba0
	ctx.lr = 0x82B3F3C4;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B3F3D0;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b3f3e4
	if (!cr6.eq) goto loc_82B3F3E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b3f40c
	goto loc_82B3F40C;
loc_82B3F3E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b3f40c
	goto loc_82B3F40C;
loc_82B3F3EC:
	// bl 0x82d19ba0
	ctx.lr = 0x82B3F3F0;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B3F3FC;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b3f410
	if (!cr6.eq) goto loc_82B3F410;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B3F40C:
	// bl 0x82b3efc0
	ctx.lr = 0x82B3F410;
	sub_82B3EFC0(ctx, base);
loc_82B3F410:
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

__attribute__((alias("__imp__sub_82B3F428"))) PPC_WEAK_FUNC(sub_82B3F428);
PPC_FUNC_IMPL(__imp__sub_82B3F428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r7,r10
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b3f478
	if (!cr6.gt) goto loc_82B3F478;
loc_82B3F454:
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b3f484
	if (cr6.eq) goto loc_82B3F484;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b3f454
	if (cr6.gt) goto loc_82B3F454;
	// blr 
	return;
loc_82B3F478:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82B3F484:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3F48C"))) PPC_WEAK_FUNC(sub_82B3F48C);
PPC_FUNC_IMPL(__imp__sub_82B3F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3F490"))) PPC_WEAK_FUNC(sub_82B3F490);
PPC_FUNC_IMPL(__imp__sub_82B3F490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B3F498;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3F4A4;
	sub_831156E8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r26,20
	ctx.r26.s64 = 20;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b3f57c
	if (cr0.eq) goto loc_82B3F57C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82B3F4CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B3F4D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b3f584
	if (!cr6.gt) goto loc_82B3F584;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b3f55c
	if (!cr6.lt) goto loc_82B3F55C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b3f590
	if (!cr6.gt) goto loc_82B3F590;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x8311bdf0
	ctx.lr = 0x82B3F530;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3f55c
	if (cr6.eq) goto loc_82B3F55C;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82b3f550
	if (cr6.eq) goto loc_82B3F550;
	// oris r11,r11,510
	ctx.r11.u64 = ctx.r11.u64 | 33423360;
	// stw r11,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r11.u32);
loc_82B3F550:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x82b3f4d4
	goto loc_82B3F4D4;
loc_82B3F55C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b3f4cc
	if (cr6.lt) goto loc_82B3F4CC;
loc_82B3F57C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B3F584:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B3F590;
	sub_831CC188(ctx, base);
loc_82B3F590:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B3F59C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B3F59C"))) PPC_WEAK_FUNC(sub_82B3F59C);
PPC_FUNC_IMPL(__imp__sub_82B3F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3F5A0"))) PPC_WEAK_FUNC(sub_82B3F5A0);
PPC_FUNC_IMPL(__imp__sub_82B3F5A0) {
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
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3f5f8
	if (cr6.eq) goto loc_82B3F5F8;
	// bl 0x82b3f490
	ctx.lr = 0x82B3F5BC;
	sub_82B3F490(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x82B3F5C0;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r8,r11,19008
	ctx.r8.u64 = ctx.r11.u64 | 19008;
	// ori r7,r10,19012
	ctx.r7.u64 = ctx.r10.u64 | 19012;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// sthx r5,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r5.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B3F5F8:
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

__attribute__((alias("__imp__sub_82B3F60C"))) PPC_WEAK_FUNC(sub_82B3F60C);
PPC_FUNC_IMPL(__imp__sub_82B3F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3F610"))) PPC_WEAK_FUNC(sub_82B3F610);
PPC_FUNC_IMPL(__imp__sub_82B3F610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3F618;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3F624;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r9,r10,40316
	ctx.r9.u64 = ctx.r10.u64 | 40316;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x8316b780
	ctx.lr = 0x82B3F648;
	sub_8316B780(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x831682b8
	ctx.lr = 0x82B3F664;
	sub_831682B8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r5,r4,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r4.s64;
	// srawi. r29,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x82b3f698
	if (!cr0.eq) goto loc_82B3F698;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b3f750
	if (cr6.eq) goto loc_82B3F750;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3F690;
	sub_825952B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B3F698:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b3f6f0
	if (cr6.eq) goto loc_82B3F6F0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82B3F6B8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b3f758
	if (!cr6.gt) goto loc_82B3F758;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83164e80
	ctx.lr = 0x82B3F6D8;
	sub_83164E80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82b3f6b8
	if (cr6.lt) goto loc_82B3F6B8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82B3F6F0:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,156(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82b3f710
	if (cr6.gt) goto loc_82B3F710;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,145(r27)
	PPC_STORE_U8(ctx.r27.u32 + 145, ctx.r10.u8);
loc_82B3F710:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b3f730
	if (cr6.eq) goto loc_82B3F730;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B3F72C;
	sub_825952B8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B3F730:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// beq cr6,0x82b3f750
	if (cr6.eq) goto loc_82B3F750;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82B3F750;
	sub_825952B8(ctx, base);
loc_82B3F750:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B3F758:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B3F764;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B3F764"))) PPC_WEAK_FUNC(sub_82B3F764);
PPC_FUNC_IMPL(__imp__sub_82B3F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3F768"))) PPC_WEAK_FUNC(sub_82B3F768);
PPC_FUNC_IMPL(__imp__sub_82B3F768) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b3f930
	if (cr6.eq) goto loc_82B3F930;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82b3f7b8
	if (!cr0.eq) goto loc_82B3F7B8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82aa2cc0
	ctx.lr = 0x82B3F7B4;
	sub_82AA2CC0(ctx, base);
	// b 0x82b3f930
	goto loc_82B3F930;
loc_82B3F7B8:
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// srawi r8,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82b3f830
	if (cr6.gt) goto loc_82B3F830;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b3f80c
	if (cr6.eq) goto loc_82B3F80C;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_82B3F7E0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bne cr6,0x82b3f7e0
	if (!cr6.eq) goto loc_82B3F7E0;
loc_82B3F80C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// b 0x82b3f930
	goto loc_82B3F930;
loc_82B3F830:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r7,r4,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82b3f8bc
	if (cr6.gt) goto loc_82B3F8BC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b3f884
	if (cr6.eq) goto loc_82B3F884;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_82B3F858:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bne cr6,0x82b3f858
	if (!cr6.eq) goto loc_82B3F858;
loc_82B3F884:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b3f92c
	if (cr6.eq) goto loc_82B3F92C;
loc_82B3F898:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3f8a8
	if (cr6.eq) goto loc_82B3F8A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82B3F8A8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b3f898
	if (!cr6.eq) goto loc_82B3F898;
	// b 0x82b3f92c
	goto loc_82B3F92C;
loc_82B3F8BC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b3f8d4
	if (cr6.eq) goto loc_82B3F8D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3F8D4;
	sub_825952B8(ctx, base);
loc_82B3F8D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x8378d6d8
	ctx.lr = 0x82B3F8EC;
	sub_8378D6D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b3f930
	if (cr6.eq) goto loc_82B3F930;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b3f92c
	if (cr6.eq) goto loc_82B3F92C;
loc_82B3F90C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b3f91c
	if (cr6.eq) goto loc_82B3F91C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82B3F91C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b3f90c
	if (!cr6.eq) goto loc_82B3F90C;
loc_82B3F92C:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82B3F930:
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

__attribute__((alias("__imp__sub_82B3F94C"))) PPC_WEAK_FUNC(sub_82B3F94C);
PPC_FUNC_IMPL(__imp__sub_82B3F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3F950"))) PPC_WEAK_FUNC(sub_82B3F950);
PPC_FUNC_IMPL(__imp__sub_82B3F950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r10,-13896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r7,57(r10)
	PPC_STORE_U8(ctx.r10.u32 + 57, ctx.r7.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,-13896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// lwz r10,-13896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,-13896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	// stb r8,56(r10)
	PPC_STORE_U8(ctx.r10.u32 + 56, ctx.r8.u8);
	// lwz r11,-13896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3F9A4"))) PPC_WEAK_FUNC(sub_82B3F9A4);
PPC_FUNC_IMPL(__imp__sub_82B3F9A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B3F9A8"))) PPC_WEAK_FUNC(sub_82B3F9A8);
PPC_FUNC_IMPL(__imp__sub_82B3F9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B3F9B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3F9BC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r25,r11,2280
	ctx.r25.s64 = ctx.r11.s64 + 2280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3F9DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3F9E8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B3FA00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b3fa30
	if (cr6.eq) goto loc_82B3FA30;
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b3fa30
	if (!cr6.eq) goto loc_82B3FA30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30530
	ctx.lr = 0x82B3FA24;
	sub_82D30530(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d30530
	ctx.lr = 0x82B3FA30;
	sub_82D30530(ctx, base);
loc_82B3FA30:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r28,132
	ctx.r29.s64 = ctx.r28.s64 + 132;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8315d6c8
	ctx.lr = 0x82B3FA4C;
	sub_8315D6C8(ctx, base);
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b3fa84
	if (!cr6.eq) goto loc_82B3FA84;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82b3fa80
	if (cr6.eq) goto loc_82B3FA80;
	// stb r27,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r27.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
loc_82B3FA80:
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
loc_82B3FA84:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b3fa98
	if (!cr6.lt) goto loc_82B3FA98;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B3FA98:
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
loc_82B3FAAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b3faac
	if (!cr6.eq) goto loc_82B3FAAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B3FAD0;
	sub_8259CC28(ctx, base);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b3fb20
	if (!cr6.eq) goto loc_82B3FB20;
	// stb r27,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r27.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82B3FB20;
	sub_8259CB28(ctx, base);
loc_82B3FB20:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3fb3c
	if (cr6.lt) goto loc_82B3FB3C;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B3FB3C;
	sub_825952B8(ctx, base);
loc_82B3FB3C:
	// lbz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 128);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x82b3fb74
	if (cr6.eq) goto loc_82B3FB74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B3FB5C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3FB74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B3FB74:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3fb90
	if (cr6.lt) goto loc_82B3FB90;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B3FB90;
	sub_825952B8(ctx, base);
loc_82B3FB90:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3FB98"))) PPC_WEAK_FUNC(sub_82B3FB98);
PPC_FUNC_IMPL(__imp__sub_82B3FB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B3FBA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3FBB0;
	sub_831156E8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8311bdf0
	ctx.lr = 0x82B3FBD0;
	sub_8311BDF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b3fc04
	if (!cr6.eq) goto loc_82B3FC04;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3fcf0
	if (cr6.lt) goto loc_82B3FCF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B3FBFC;
	sub_825952B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B3FC04:
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-11432
	ctx.r30.s64 = ctx.r11.s64 + -11432;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B3FC28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82b3fcec
	if (cr6.eq) goto loc_82B3FCEC;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// bl 0x8259d6c0
	ctx.lr = 0x82B3FC40;
	sub_8259D6C0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B3FC54;
	sub_82D291E0(ctx, base);
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
	ctx.lr = 0x82B3FC6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3FC7C;
	sub_82D2AEC8(ctx, base);
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82b3fc94
	if (cr6.eq) goto loc_82B3FC94;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B3FC94:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82B3FCA8;
	sub_82D329F8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,2284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2284);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B3FCC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b3fce8
	if (cr6.eq) goto loc_82B3FCE8;
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82d2aec8
	ctx.lr = 0x82B3FCE8;
	sub_82D2AEC8(ctx, base);
loc_82B3FCE8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82B3FCEC:
	// bl 0x8387e8e0
	ctx.lr = 0x82B3FCF0;
	sub_8387E8E0(ctx, base);
loc_82B3FCF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3FCF8"))) PPC_WEAK_FUNC(sub_82B3FCF8);
PPC_FUNC_IMPL(__imp__sub_82B3FCF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3FD00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b3fd94
	if (!cr6.gt) goto loc_82B3FD94;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a45e18
	ctx.lr = 0x82B3FD34;
	sub_82A45E18(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r30,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 1;
	// bl 0x82d19ba0
	ctx.lr = 0x82B3FD4C;
	sub_82D19BA0(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// bge cr6,0x82b3fd8c
	if (!cr6.lt) goto loc_82B3FD8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B3FD5C;
	sub_82D19BA0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82b3fd70
	if (cr6.gt) goto loc_82B3FD70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B3FD70;
	sub_831CC188(ctx, base);
loc_82B3FD70:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82f73d60
	ctx.lr = 0x82B3FD80;
	sub_82F73D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3FD8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x82B3FD94;
	sub_82F73D60(ctx, base);
loc_82B3FD94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3FDA0"))) PPC_WEAK_FUNC(sub_82B3FDA0);
PPC_FUNC_IMPL(__imp__sub_82B3FDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B3FDA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B3FDB8;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82B3FDC0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x82b3feb0
	if (cr6.gt) goto loc_82B3FEB0;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// bge cr6,0x82b3fe6c
	if (!cr6.lt) goto loc_82B3FE6C;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// beq cr6,0x82b3fe28
	if (cr6.eq) goto loc_82B3FE28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x82b3feb8
	if (!cr6.eq) goto loc_82B3FEB8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3fdf8
	if (cr6.lt) goto loc_82B3FDF8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b3fdfc
	goto loc_82B3FDFC;
loc_82B3FDF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B3FDFC:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82B3FE04;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c2ef70
	ctx.lr = 0x82B3FE10;
	sub_82C2EF70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3FE1C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3FE28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3fe3c
	if (cr6.lt) goto loc_82B3FE3C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b3fe40
	goto loc_82B3FE40;
loc_82B3FE3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B3FE40:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B3FE48;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c2ef70
	ctx.lr = 0x82B3FE54;
	sub_82C2EF70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3FE60;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3FE6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3fe80
	if (cr6.lt) goto loc_82B3FE80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b3fe84
	goto loc_82B3FE84;
loc_82B3FE80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B3FE84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B3FE8C;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c2df40
	ctx.lr = 0x82B3FE98;
	sub_82C2DF40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3FEA4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3FEB0:
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// beq cr6,0x82b3ff50
	if (cr6.eq) goto loc_82B3FF50;
loc_82B3FEB8:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40312
	ctx.r10.u64 = ctx.r11.u64 | 40312;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x82b3ff10
	if (!cr6.eq) goto loc_82B3FF10;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3fee0
	if (cr6.lt) goto loc_82B3FEE0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b3fee4
	goto loc_82B3FEE4;
loc_82B3FEE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B3FEE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B3FEEC;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c2df40
	ctx.lr = 0x82B3FEF8;
	sub_82C2DF40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3FF04;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3FF10:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3ff20
	if (cr6.lt) goto loc_82B3FF20;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b3ff24
	goto loc_82B3FF24;
loc_82B3FF20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B3FF24:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B3FF2C;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82c2ef70
	ctx.lr = 0x82B3FF38;
	sub_82C2EF70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3FF44;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B3FF50:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b3ff64
	if (cr6.lt) goto loc_82B3FF64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b3ff68
	goto loc_82B3FF68;
loc_82B3FF64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B3FF68:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82B3FF70;
	sub_837B0C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82c2ef70
	ctx.lr = 0x82B3FF7C;
	sub_82C2EF70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82B3FF88;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B3FF94"))) PPC_WEAK_FUNC(sub_82B3FF94);
PPC_FUNC_IMPL(__imp__sub_82B3FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B3FF98"))) PPC_WEAK_FUNC(sub_82B3FF98);
PPC_FUNC_IMPL(__imp__sub_82B3FF98) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-11452
	ctx.r5.s64 = ctx.r11.s64 + -11452;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B3FFC0;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B3FFC8;
	sub_82D19BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B3FFD0;
	sub_82D19BB0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B3FFD4;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r30,r8,221
	ctx.r30.s64 = ctx.r8.s64 + 14483456;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// bl 0x82b3fcf8
	ctx.lr = 0x82B3FFEC;
	sub_82B3FCF8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B3FFF8;
	sub_82D19BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ae2d58
	ctx.lr = 0x82B40010;
	sub_82AE2D58(ctx, base);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r7,14
	ctx.r4.u64 = ctx.r7.u32 & 0x3FFFF;
	// bl 0x82d17d80
	ctx.lr = 0x82B40020;
	sub_82D17D80(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x82B40024;
	sub_82F00728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B40030;
	sub_82D19BB0(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r6,r6,19008
	ctx.r6.u64 = ctx.r6.u64 | 19008;
	// stwx r3,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3fcf8
	ctx.lr = 0x82B40044;
	sub_82B3FCF8(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r5,r5,19012
	ctx.r5.u64 = ctx.r5.u64 | 19012;
	// sthx r3,r30,r5
	PPC_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u16);
	// bl 0x82d26ed8
	ctx.lr = 0x82B40054;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26b18
	ctx.lr = 0x82B4005C;
	sub_82D26B18(ctx, base);
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

__attribute__((alias("__imp__sub_82B40074"))) PPC_WEAK_FUNC(sub_82B40074);
PPC_FUNC_IMPL(__imp__sub_82B40074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B40078"))) PPC_WEAK_FUNC(sub_82B40078);
PPC_FUNC_IMPL(__imp__sub_82B40078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B40080;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,2368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2368);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b400b8
	if (!cr6.eq) goto loc_82B400B8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b400bc
	if (cr6.eq) goto loc_82B400BC;
loc_82B400B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B400BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b40254
	if (!cr6.eq) goto loc_82B40254;
	// bl 0x831156e8
	ctx.lr = 0x82B400CC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r29,r10,221
	ctx.r29.s64 = ctx.r10.s64 + 14483456;
	// addi r29,r29,-26512
	ctx.r29.s64 = ctx.r29.s64 + -26512;
	// bl 0x82b3fcf8
	ctx.lr = 0x82B400E4;
	sub_82B3FCF8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82d19bb0
	ctx.lr = 0x82B400F4;
	sub_82D19BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ae2d58
	ctx.lr = 0x82B4010C;
	sub_82AE2D58(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r29,20
	ctx.r29.s64 = 20;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw. r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82b40254
	if (cr0.eq) goto loc_82B40254;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B40134:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82B4013C:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r29
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// ble cr6,0x82b4025c
	if (!cr6.gt) goto loc_82B4025C;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b40244
	if (!cr6.lt) goto loc_82B40244;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x82b40268
	if (!cr6.gt) goto loc_82B40268;
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r9,r30,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b401b4
	if (!cr6.eq) goto loc_82B401B4;
	// xor r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// clrlwi r9,r9,14
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x82b401b8
	if (cr6.eq) goto loc_82B401B8;
loc_82B401B4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82B401B8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b401ec
	if (cr6.eq) goto loc_82B401EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// ble cr6,0x82b40274
	if (!cr6.gt) goto loc_82B40274;
	// stwx r31,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x82b4013c
	goto loc_82B4013C;
loc_82B401EC:
	// rlwinm r9,r31,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b4020c
	if (!cr6.eq) goto loc_82B4020C;
	// xor r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r31.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b40210
	if (cr6.eq) goto loc_82B40210;
loc_82B4020C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B40210:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b40238
	if (cr6.eq) goto loc_82B40238;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// ble cr6,0x82b40280
	if (!cr6.gt) goto loc_82B40280;
	// stwx r30,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r30.u32);
loc_82B40238:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x82b4013c
	goto loc_82B4013C;
loc_82B40244:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b40134
	if (cr6.lt) goto loc_82B40134;
loc_82B40254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B4025C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40268;
	sub_831CC188(ctx, base);
loc_82B40268:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40274;
	sub_831CC188(ctx, base);
loc_82B40274:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40280;
	sub_831CC188(ctx, base);
loc_82B40280:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B4028C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B4028C"))) PPC_WEAK_FUNC(sub_82B4028C);
PPC_FUNC_IMPL(__imp__sub_82B4028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B40290"))) PPC_WEAK_FUNC(sub_82B40290);
PPC_FUNC_IMPL(__imp__sub_82B40290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82B40298;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B402A4;
	sub_831156E8(ctx, base);
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// addi r22,r28,112
	ctx.r22.s64 = ctx.r28.s64 + 112;
	// lwz r9,116(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b4068c
	if (!cr6.gt) goto loc_82B4068C;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r21,20
	ctx.r21.s64 = 20;
	// lis r18,-31777
	ctx.r18.s64 = -2082537472;
loc_82B402D4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r23,r7
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b405c0
	if (!cr6.lt) goto loc_82B405C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B402FC;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4031C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B40330;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b405c0
	if (cr6.eq) goto loc_82B405C0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b40578
	if (!cr6.gt) goto loc_82B40578;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r23
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, xer);
	// ble cr6,0x82b40584
	if (!cr6.gt) goto loc_82B40584;
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r26,r28,96
	ctx.r26.s64 = ctx.r28.s64 + 96;
	// lwz r8,96(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lhzx r7,r11,r20
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r10,r9,r21
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b403d0
	if (cr0.eq) goto loc_82B403D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b40590
	if (!cr6.gt) goto loc_82B40590;
loc_82B403A8:
	// lhzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b403cc
	if (cr6.eq) goto loc_82B403CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b403a8
	if (cr6.gt) goto loc_82B403A8;
	// b 0x82b403d0
	goto loc_82B403D0;
loc_82B403CC:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82B403D0:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82B403D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r21
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b4059c
	if (!cr6.gt) goto loc_82B4059C;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b40548
	if (!cr6.lt) goto loc_82B40548;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B40428;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4053c
	if (cr6.eq) goto loc_82B4053C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r21
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b405a8
	if (!cr6.gt) goto loc_82B405A8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82b405b4
	if (!cr6.gt) goto loc_82B405B4;
	// lwzx r31,r10,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// lwz r11,2368(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2368);
	// rlwinm r30,r31,14,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b40498
	if (!cr6.eq) goto loc_82B40498;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b4049c
	if (cr6.eq) goto loc_82B4049C;
loc_82B40498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B4049C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b40520
	if (!cr6.eq) goto loc_82B40520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b3fb98
	ctx.lr = 0x82B404B8;
	sub_82B3FB98(ctx, base);
	// lwz r11,168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b404dc
	if (!cr6.eq) goto loc_82B404DC;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b404e0
	if (cr6.eq) goto loc_82B404E0;
loc_82B404DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B404E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82b4050c
	if (cr6.eq) goto loc_82B4050C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B40500;
	sub_82D2B608(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x82b403d8
	goto loc_82B403D8;
loc_82B4050C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B40514;
	sub_82D2B608(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x82b403d8
	goto loc_82B403D8;
loc_82B40520:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4053C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4053C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x82b403d8
	goto loc_82B403D8;
loc_82B40548:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// lwz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b402d4
	if (cr6.gt) goto loc_82B402D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40578;
	sub_831CC188(ctx, base);
loc_82B40578:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40584;
	sub_831CC188(ctx, base);
loc_82B40584:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40590;
	sub_831CC188(ctx, base);
loc_82B40590:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B4059C;
	sub_831CC188(ctx, base);
loc_82B4059C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B405A8;
	sub_831CC188(ctx, base);
loc_82B405A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B405B4;
	sub_831CC188(ctx, base);
loc_82B405B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B405C0;
	sub_831CC188(ctx, base);
loc_82B405C0:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b40680
	if (!cr6.gt) goto loc_82B40680;
loc_82B405E0:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b4068c
	if (!cr6.lt) goto loc_82B4068C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B40608;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B40628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B4063C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4068c
	if (cr6.eq) goto loc_82B4068C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B40660;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b405e0
	if (cr6.gt) goto loc_82B405E0;
loc_82B40680:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B4068C;
	sub_831CC188(ctx, base);
loc_82B4068C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B40694"))) PPC_WEAK_FUNC(sub_82B40694);
PPC_FUNC_IMPL(__imp__sub_82B40694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B40698"))) PPC_WEAK_FUNC(sub_82B40698);
PPC_FUNC_IMPL(__imp__sub_82B40698) {
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
	ctx.lr = 0x82B406B0;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b407ac
	if (cr6.lt) goto loc_82B407AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B406C0;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b407ac
	if (cr6.lt) goto loc_82B407AC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r9,2368(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2368);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b406f8
	if (!cr6.eq) goto loc_82B406F8;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b406fc
	if (cr6.eq) goto loc_82B406FC;
loc_82B406F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B406FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b4076c
	if (!cr6.eq) goto loc_82B4076C;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,2368(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2368);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// lwz r11,2368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2368);
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// sth r8,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r8.u16);
	// bl 0x82b40290
	ctx.lr = 0x82B40740;
	sub_82B40290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3f338
	ctx.lr = 0x82B40748;
	sub_82B3F338(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82B4074C;
	sub_82D35198(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82B40758;
	sub_82D36760(ctx, base);
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
loc_82B4076C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-11468
	ctx.r3.s64 = ctx.r11.s64 + -11468;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B40788;
	sub_82D2F6D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// beq cr6,0x82b407ac
	if (cr6.eq) goto loc_82B407AC;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,132
	ctx.r4.u64 = ctx.r4.u64 | 132;
	// bl 0x82d2ada8
	ctx.lr = 0x82B407A0;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x83103100
	ctx.lr = 0x82B407AC;
	sub_83103100(ctx, base);
loc_82B407AC:
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

__attribute__((alias("__imp__sub_82B407C0"))) PPC_WEAK_FUNC(sub_82B407C0);
PPC_FUNC_IMPL(__imp__sub_82B407C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82B407C8;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B407D4;
	sub_831156E8(ctx, base);
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,116(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// addi r21,r27,112
	ctx.r21.s64 = ctx.r27.s64 + 112;
	// lwz r17,48(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r22,r17,221
	ctx.r22.s64 = ctx.r17.s64 + 14483456;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r22,r22,-26512
	ctx.r22.s64 = ctx.r22.s64 + -26512;
	// beq 0x82b40a0c
	if (cr0.eq) goto loc_82B40A0C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// li r23,20
	ctx.r23.s64 = 20;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// li r18,2
	ctx.r18.s64 = 2;
loc_82B40814:
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82B4081C:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r20
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, xer);
	// ble cr6,0x82b40a14
	if (!cr6.gt) goto loc_82B40A14;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// cmplw cr6,r24,r6
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b409fc
	if (!cr6.lt) goto loc_82B409FC;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, xer);
	// ble cr6,0x82b40a20
	if (!cr6.gt) goto loc_82B40A20;
	// lhzx r31,r10,r25
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r9,96(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r8,100(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// sth r26,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r26.u16);
	// divw. r10,r7,r23
	ctx.r10.s32 = PPCDivide(ctx.r7.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// beq 0x82b408fc
	if (cr0.eq) goto loc_82B408FC;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b40a2c
	if (!cr6.gt) goto loc_82B40A2C;
loc_82B408AC:
	// lhzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r6,r31,16
	ctx.r6.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b408d0
	if (cr6.eq) goto loc_82B408D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b408ac
	if (cr6.gt) goto loc_82B408AC;
	// b 0x82b408fc
	goto loc_82B408FC;
loc_82B408D0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// bl 0x82b3f768
	ctx.lr = 0x82B408F4;
	sub_82B3F768(ctx, base);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82B408FC:
	// lbz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b40954
	if (cr6.eq) goto loc_82B40954;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// srawi r30,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b409cc
	if (cr6.eq) goto loc_82B409CC;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b40a38
	if (!cr6.gt) goto loc_82B40A38;
loc_82B40928:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b3ed98
	ctx.lr = 0x82B40940;
	sub_82B3ED98(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b40928
	if (cr6.gt) goto loc_82B40928;
	// b 0x82b409cc
	goto loc_82B409CC;
loc_82B40954:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8311bf00
	ctx.lr = 0x82B40960;
	sub_8311BF00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b4097c
	if (!cr6.eq) goto loc_82B4097C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b409e4
	if (cr6.eq) goto loc_82B409E4;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x82b409dc
	goto loc_82B409DC;
loc_82B4097C:
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// srawi r7,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b409cc
	if (cr6.eq) goto loc_82B409CC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b40a44
	if (!cr6.gt) goto loc_82B40A44;
loc_82B409A0:
	// lwz r6,540(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r6,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82b409b8
	if (!cr6.lt) goto loc_82B409B8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82B409B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b409a0
	if (cr6.gt) goto loc_82B409A0;
loc_82B409CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b409e4
	if (cr6.eq) goto loc_82B409E4;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_82B409DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B409E4;
	sub_825952B8(ctx, base);
loc_82B409E4:
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// b 0x82b4081c
	goto loc_82B4081C;
loc_82B409FC:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,16
	ctx.r19.s64 = ctx.r19.s64 + 16;
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b40814
	if (cr6.lt) goto loc_82B40814;
loc_82B40A0C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82B40A14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40A20;
	sub_831CC188(ctx, base);
loc_82B40A20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40A2C;
	sub_831CC188(ctx, base);
loc_82B40A2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40A38;
	sub_831CC188(ctx, base);
loc_82B40A38:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40A44;
	sub_831CC188(ctx, base);
loc_82B40A44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B40A50;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B40A50"))) PPC_WEAK_FUNC(sub_82B40A50);
PPC_FUNC_IMPL(__imp__sub_82B40A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B40A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b40a9c
	if (cr6.eq) goto loc_82B40A9C;
	// subf r28,r5,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B40A74:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// bl 0x82b3f768
	ctx.lr = 0x82B40A8C;
	sub_82B3F768(ctx, base);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b40a74
	if (!cr6.eq) goto loc_82B40A74;
loc_82B40A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B40AA8"))) PPC_WEAK_FUNC(sub_82B40AA8);
PPC_FUNC_IMPL(__imp__sub_82B40AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B40AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b40ad4
	if (cr6.eq) goto loc_82B40AD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19858
	ctx.lr = 0x82B40ACC;
	sub_82D19858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B40AD4:
	// bl 0x82d19ba0
	ctx.lr = 0x82B40AD8;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b40ca4
	if (cr6.lt) goto loc_82B40CA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B40AE8;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b40ca4
	if (cr6.lt) goto loc_82B40CA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B40AF8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,2276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2276);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B40B14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B40B20;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B40B2C;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b40b6c
	if (!cr6.eq) goto loc_82B40B6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19858
	ctx.lr = 0x82B40B40;
	sub_82D19858(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x82B40B44;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,19012
	ctx.r9.u64 = ctx.r11.u64 | 19012;
	// ori r8,r10,19008
	ctx.r8.u64 = ctx.r10.u64 | 19008;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// sthx r7,r3,r9
	PPC_STORE_U16(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u16);
	// stwx r6,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B40B6C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82b3efc0
	ctx.lr = 0x82B40B74;
	sub_82B3EFC0(ctx, base);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,2368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2368);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b40ba4
	if (!cr6.eq) goto loc_82B40BA4;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b40ba8
	if (cr6.eq) goto loc_82B40BA8;
loc_82B40BA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B40BA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b40c3c
	if (cr6.eq) goto loc_82B40C3C;
	// bl 0x831156e8
	ctx.lr = 0x82B40BB8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r29,r10,221
	ctx.r29.s64 = ctx.r10.s64 + 14483456;
	// addi r29,r29,-26512
	ctx.r29.s64 = ctx.r29.s64 + -26512;
	// bl 0x82b3fcf8
	ctx.lr = 0x82B40BD0;
	sub_82B3FCF8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,172
	ctx.r30.s64 = ctx.r31.s64 + 172;
	// bl 0x82d19bb0
	ctx.lr = 0x82B40BE0;
	sub_82D19BB0(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ae2d58
	ctx.lr = 0x82B40BF8;
	sub_82AE2D58(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// bl 0x82b40290
	ctx.lr = 0x82B40C24;
	sub_82B40290(ctx, base);
	// lwz r31,168(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82d35198
	ctx.lr = 0x82B40C2C;
	sub_82D35198(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d37288
	ctx.lr = 0x82B40C34;
	sub_82D37288(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B40C3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b40078
	ctx.lr = 0x82B40C44;
	sub_82B40078(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2368);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// lwz r11,2368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2368);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// sth r9,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r9.u16);
	// bl 0x82b407c0
	ctx.lr = 0x82B40C80;
	sub_82B407C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b40290
	ctx.lr = 0x82B40C88;
	sub_82B40290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3efc0
	ctx.lr = 0x82B40C94;
	sub_82B3EFC0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82B40C98;
	sub_82D35198(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82B40CA4;
	sub_82D36760(ctx, base);
loc_82B40CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B40CAC"))) PPC_WEAK_FUNC(sub_82B40CAC);
PPC_FUNC_IMPL(__imp__sub_82B40CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B40CB0"))) PPC_WEAK_FUNC(sub_82B40CB0);
PPC_FUNC_IMPL(__imp__sub_82B40CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B40CB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b40cdc
	if (!cr6.gt) goto loc_82B40CDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B40CDC;
	sub_831CC150(ctx, base);
loc_82B40CDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b40d98
	if (!cr6.lt) goto loc_82B40D98;
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r26,r4,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B40D10;
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
	// beq cr6,0x82b40d4c
	if (cr6.eq) goto loc_82B40D4C;
loc_82B40D28:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b40d3c
	if (cr6.eq) goto loc_82B40D3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a45e18
	ctx.lr = 0x82B40D3C;
	sub_82A45E18(ctx, base);
loc_82B40D3C:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b40d28
	if (!cr6.eq) goto loc_82B40D28;
loc_82B40D4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r30,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 4;
	// beq cr6,0x82b40d80
	if (cr6.eq) goto loc_82B40D80;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bbbf28
	ctx.lr = 0x82B40D70;
	sub_82BBBF28(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B40D80;
	sub_825952B8(ctx, base);
loc_82B40D80:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
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
loc_82B40D98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B40DA0"))) PPC_WEAK_FUNC(sub_82B40DA0);
PPC_FUNC_IMPL(__imp__sub_82B40DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B40DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b40dec
	if (cr6.eq) goto loc_82B40DEC;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B40DC0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b40ddc
	if (cr6.eq) goto loc_82B40DDC;
	// lhzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x82a8e3a8
	ctx.lr = 0x82B40DDC;
	sub_82A8E3A8(ctx, base);
loc_82B40DDC:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b40dc0
	if (!cr6.eq) goto loc_82B40DC0;
loc_82B40DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B40DF8"))) PPC_WEAK_FUNC(sub_82B40DF8);
PPC_FUNC_IMPL(__imp__sub_82B40DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b40e28
	if (!cr6.lt) goto loc_82B40E28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B40E28:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b40e58
	if (cr6.lt) goto loc_82B40E58;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B40E58:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b40e64
	if (!cr6.lt) goto loc_82B40E64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82B40E64:
	// b 0x82b40cb0
	sub_82B40CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B40E68"))) PPC_WEAK_FUNC(sub_82B40E68);
PPC_FUNC_IMPL(__imp__sub_82B40E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B40E6C"))) PPC_WEAK_FUNC(sub_82B40E6C);
PPC_FUNC_IMPL(__imp__sub_82B40E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B40E70"))) PPC_WEAK_FUNC(sub_82B40E70);
PPC_FUNC_IMPL(__imp__sub_82B40E70) {
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
	// bge cr6,0x82b40ea8
	if (!cr6.lt) goto loc_82B40EA8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b40eac
	if (!cr6.gt) goto loc_82B40EAC;
loc_82B40EA8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B40EAC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b40ef8
	if (cr6.eq) goto loc_82B40EF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 4;
	// bne cr6,0x82b40edc
	if (!cr6.eq) goto loc_82B40EDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b40df8
	ctx.lr = 0x82B40EDC;
	sub_82B40DF8(ctx, base);
loc_82B40EDC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b40f24
	if (cr6.eq) goto loc_82B40F24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b40f20
	goto loc_82B40F20;
loc_82B40EF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b40f10
	if (!cr6.eq) goto loc_82B40F10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b40df8
	ctx.lr = 0x82B40F10;
	sub_82B40DF8(ctx, base);
loc_82B40F10:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b40f24
	if (cr6.eq) goto loc_82B40F24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B40F20:
	// bl 0x82a45e18
	ctx.lr = 0x82B40F24;
	sub_82A45E18(ctx, base);
loc_82B40F24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82B40F48"))) PPC_WEAK_FUNC(sub_82B40F48);
PPC_FUNC_IMPL(__imp__sub_82B40F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B40F50;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b40f74
	if (!cr6.gt) goto loc_82B40F74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B40F74;
	sub_831CC150(ctx, base);
loc_82B40F74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,20
	ctx.r27.s64 = 20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b41024
	if (!cr6.lt) goto loc_82B41024;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x82B40FB4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82b40da0
	ctx.lr = 0x82B40FD0;
	sub_82B40DA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x82b41004
	if (cr6.eq) goto loc_82B41004;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x831b31b0
	ctx.lr = 0x82B40FF4;
	sub_831B31B0(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B41004;
	sub_825952B8(ctx, base);
loc_82B41004:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82B41024:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4102C"))) PPC_WEAK_FUNC(sub_82B4102C);
PPC_FUNC_IMPL(__imp__sub_82B4102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B41030"))) PPC_WEAK_FUNC(sub_82B41030);
PPC_FUNC_IMPL(__imp__sub_82B41030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B41038;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B41044;
	sub_831156E8(ctx, base);
	// lwz r11,132(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 132);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r26,132
	ctx.r29.s64 = ctx.r26.s64 + 132;
	// li r23,2
	ctx.r23.s64 = 2;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// beq cr6,0x82b41130
	if (cr6.eq) goto loc_82B41130;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// bl 0x83197d10
	ctx.lr = 0x82B41088;
	sub_83197D10(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi. r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b41114
	if (cr0.eq) goto loc_82B41114;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b4125c
	if (!cr6.gt) goto loc_82B4125C;
loc_82B410AC:
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82badd90
	ctx.lr = 0x82B410B8;
	sub_82BADD90(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b410ac
	if (cr6.gt) goto loc_82B410AC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b410fc
	if (cr6.eq) goto loc_82B410FC;
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82b40e70
	ctx.lr = 0x82B410F4;
	sub_82B40E70(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82B410FC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b41114
	if (cr6.eq) goto loc_82B41114;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B41110;
	sub_825952B8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B41114:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b41130
	if (cr6.eq) goto loc_82B41130;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce420
	ctx.lr = 0x82B4112C;
	sub_831CE420(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_82B41130:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83197d10
	ctx.lr = 0x82B41140;
	sub_83197D10(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// srawi. r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b4119c
	if (cr0.eq) goto loc_82B4119C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b41268
	if (!cr6.gt) goto loc_82B41268;
loc_82B41170:
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82badd90
	ctx.lr = 0x82B4117C;
	sub_82BADD90(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b41170
	if (cr6.gt) goto loc_82B41170;
loc_82B4119C:
	// addi r29,r26,112
	ctx.r29.s64 = ctx.r26.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b40e70
	ctx.lr = 0x82B411AC;
	sub_82B40E70(ctx, base);
	// lwz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// lwz r10,112(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b41284
	if (cr0.eq) goto loc_82B41284;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82B411C8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82B411D0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b412bc
	if (!cr6.gt) goto loc_82B412BC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b41274
	if (!cr6.lt) goto loc_82B41274;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b412c8
	if (!cr6.gt) goto loc_82B412C8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x8311bf00
	ctx.lr = 0x82B41228;
	sub_8311BF00(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lhz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B41244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,540(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 540);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// rlwimi r9,r3,9,16,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 9) & 0xFE00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF01FF);
	// stw r9,540(r22)
	PPC_STORE_U32(ctx.r22.u32 + 540, ctx.r9.u32);
	// b 0x82b411d0
	goto loc_82B411D0;
loc_82B4125C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41268;
	sub_831CC188(ctx, base);
loc_82B41268:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41274;
	sub_831CC188(ctx, base);
loc_82B41274:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b411c8
	if (cr6.lt) goto loc_82B411C8;
loc_82B41284:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b4129c
	if (cr6.eq) goto loc_82B4129C;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B4129C;
	sub_825952B8(ctx, base);
loc_82B4129C:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b412b4
	if (cr6.eq) goto loc_82B412B4;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B412B4;
	sub_825952B8(ctx, base);
loc_82B412B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82B412BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B412C8;
	sub_831CC188(ctx, base);
loc_82B412C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B412D4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B412D4"))) PPC_WEAK_FUNC(sub_82B412D4);
PPC_FUNC_IMPL(__imp__sub_82B412D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B412D8"))) PPC_WEAK_FUNC(sub_82B412D8);
PPC_FUNC_IMPL(__imp__sub_82B412D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,20
	ctx.r9.s64 = 20;
	// ori r8,r10,52428
	ctx.r8.u64 = ctx.r10.u64 | 52428;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b4130c
	if (!cr6.lt) goto loc_82B4130C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B4130C:
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
	// blt cr6,0x82b4133c
	if (cr6.lt) goto loc_82B4133C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B4133C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b41348
	if (!cr6.lt) goto loc_82B41348;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B41348:
	// b 0x82b40f48
	sub_82B40F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4134C"))) PPC_WEAK_FUNC(sub_82B4134C);
PPC_FUNC_IMPL(__imp__sub_82B4134C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B41350"))) PPC_WEAK_FUNC(sub_82B41350);
PPC_FUNC_IMPL(__imp__sub_82B41350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B41358;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11336
	ctx.r9.s64 = ctx.r11.s64 + -11336;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82f00728
	ctx.lr = 0x82B4137C;
	sub_82F00728(ctx, base);
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// addi r7,r7,19016
	ctx.r7.s64 = ctx.r7.s64 + 19016;
	// lwz r11,2368(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2368);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,2368(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2368);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// bl 0x82d35198
	ctx.lr = 0x82B413AC;
	sub_82D35198(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82B413B8;
	sub_82D36760(ctx, base);
	// lwz r3,112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r31,r29,112
	ctx.r31.s64 = ctx.r29.s64 + 112;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b413ec
	if (cr6.eq) goto loc_82B413EC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x82B413DC;
	sub_82BBBF28(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B413EC;
	sub_825952B8(ctx, base);
loc_82B413EC:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r29,96
	ctx.r30.s64 = ctx.r29.s64 + 96;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4142c
	if (cr6.eq) goto loc_82B4142C;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831b31b0
	ctx.lr = 0x82B4141C;
	sub_831B31B0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B4142C;
	sub_825952B8(ctx, base);
loc_82B4142C:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B41440;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B41448"))) PPC_WEAK_FUNC(sub_82B41448);
PPC_FUNC_IMPL(__imp__sub_82B41448) {
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
	// bge cr6,0x82b41480
	if (!cr6.lt) goto loc_82B41480;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b41484
	if (!cr6.gt) goto loc_82B41484;
loc_82B41480:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B41484:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b414e8
	if (cr6.eq) goto loc_82B414E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b414b8
	if (!cr6.eq) goto loc_82B414B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b412d8
	ctx.lr = 0x82B414B8;
	sub_82B412D8(ctx, base);
loc_82B414B8:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82b41520
	if (cr6.eq) goto loc_82B41520;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// b 0x82b41518
	goto loc_82B41518;
loc_82B414E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b41500
	if (!cr6.eq) goto loc_82B41500;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b412d8
	ctx.lr = 0x82B41500;
	sub_82B412D8(ctx, base);
loc_82B41500:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b41520
	if (cr6.eq) goto loc_82B41520;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82B41518:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B41520;
	sub_82A8E3A8(ctx, base);
loc_82B41520:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
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

__attribute__((alias("__imp__sub_82B41544"))) PPC_WEAK_FUNC(sub_82B41544);
PPC_FUNC_IMPL(__imp__sub_82B41544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B41548"))) PPC_WEAK_FUNC(sub_82B41548);
PPC_FUNC_IMPL(__imp__sub_82B41548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B41550;
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
	ctx.lr = 0x82B41568;
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
	ctx.lr = 0x82B41580;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11336
	ctx.r9.s64 = ctx.r11.s64 + -11336;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r28,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r28.u8);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// stb r11,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r11.u8);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// lwz r11,2368(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2368);
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r5.u32);
	// lwz r11,2368(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2368);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r4.u32);
	// sth r6,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r6.u16);
	// bl 0x831156e8
	ctx.lr = 0x82B4161C;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r29,r3,236
	ctx.r29.s64 = ctx.r3.s64 + 15466496;
	// addis r30,r3,221
	ctx.r30.s64 = ctx.r3.s64 + 14483456;
	// addi r29,r29,5128
	ctx.r29.s64 = ctx.r29.s64 + 5128;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b41644
	if (!cr6.eq) goto loc_82B41644;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
loc_82B41644:
	// bl 0x82f00728
	ctx.lr = 0x82B41648;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,19008
	ctx.r10.u64 = ctx.r11.u64 | 19008;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82b416c8
	if (!cr6.eq) goto loc_82B416C8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,19012
	ctx.r10.u64 = ctx.r11.u64 | 19012;
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x82b416c8
	if (!cr6.eq) goto loc_82B416C8;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b416c8
	if (!cr6.eq) goto loc_82B416C8;
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82B41690;
	sub_82D20EB8(ctx, base);
	// lwz r11,1292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82b416c8
	if (cr6.eq) goto loc_82B416C8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b416c8
	if (cr6.eq) goto loc_82B416C8;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82b416c8
	if (cr6.eq) goto loc_82B416C8;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82b416c8
	if (cr6.eq) goto loc_82B416C8;
	// lis r4,277
	ctx.r4.s64 = 18153472;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,252
	ctx.r4.u64 = ctx.r4.u64 | 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82B416C8;
	sub_82D21730(ctx, base);
loc_82B416C8:
	// lwz r11,1288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b416e4
	if (cr6.eq) goto loc_82B416E4;
	// lwz r11,1292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82B416E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b416f8
	if (cr6.eq) goto loc_82B416F8;
	// lwz r3,1292(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// bl 0x82a673c0
	ctx.lr = 0x82B416F8;
	sub_82A673C0(ctx, base);
loc_82B416F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B41704"))) PPC_WEAK_FUNC(sub_82B41704);
PPC_FUNC_IMPL(__imp__sub_82B41704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B41708"))) PPC_WEAK_FUNC(sub_82B41708);
PPC_FUNC_IMPL(__imp__sub_82B41708) {
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
	// bl 0x82b41350
	ctx.lr = 0x82B41728;
	sub_82B41350(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b41740
	if (cr6.eq) goto loc_82B41740;
	// bl 0x82416268
	ctx.lr = 0x82B4173C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B41740:
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

__attribute__((alias("__imp__sub_82B41758"))) PPC_WEAK_FUNC(sub_82B41758);
PPC_FUNC_IMPL(__imp__sub_82B41758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82B41760;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r19,r3,96
	ctx.r19.s64 = ctx.r3.s64 + 96;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b4179c
	if (cr6.eq) goto loc_82B4179C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b40a50
	ctx.lr = 0x82B41784;
	sub_82B40A50(ctx, base);
	// addi r5,r19,12
	ctx.r5.s64 = ctx.r19.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// bl 0x831b31b0
	ctx.lr = 0x82B41798;
	sub_831B31B0(ctx, base);
	// stw r30,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r30.u32);
loc_82B4179C:
	// bl 0x831156e8
	ctx.lr = 0x82B417A0;
	sub_831156E8(ctx, base);
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addis r28,r20,221
	ctx.r28.s64 = ctx.r20.s64 + 14483456;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r28,r28,-26512
	ctx.r28.s64 = ctx.r28.s64 + -26512;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82b41954
	if (cr6.eq) goto loc_82B41954;
	// addi r22,r31,112
	ctx.r22.s64 = ctx.r31.s64 + 112;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// beq 0x82b41934
	if (cr0.eq) goto loc_82B41934;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// li r18,2
	ctx.r18.s64 = 2;
	// lis r25,-31777
	ctx.r25.s64 = -2082537472;
loc_82B417E4:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82B417EC:
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, xer);
	// ble cr6,0x82b4193c
	if (!cr6.gt) goto loc_82B4193C;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b41924
	if (!cr6.lt) goto loc_82B41924;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// ble cr6,0x82b41948
	if (!cr6.gt) goto loc_82B41948;
	// lhzx r30,r26,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r10.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B41848;
	sub_8311C338(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r10,540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rlwinm r9,r10,0,16,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE00;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b418cc
	if (cr6.eq) goto loc_82B418CC;
loc_82B41874:
	// cmplwi cr6,r31,48
	cr6.compare<uint32_t>(ctx.r31.u32, 48, xer);
	// bge cr6,0x82b418a4
	if (!cr6.lt) goto loc_82B418A4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r10,r28,1300
	ctx.r10.s64 = ctx.r28.s64 + 1300;
loc_82B41888:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b41908
	if (cr6.eq) goto loc_82B41908;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82b41888
	if (cr6.lt) goto loc_82B41888;
loc_82B418A4:
	// lwz r11,2368(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2368);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82B418AC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x835977d8
	ctx.lr = 0x82B418B8;
	sub_835977D8(ctx, base);
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r11,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b41874
	if (cr6.lt) goto loc_82B41874;
loc_82B418CC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82b41448
	ctx.lr = 0x82B418D8;
	sub_82B41448(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b418f0
	if (cr6.eq) goto loc_82B418F0;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B418F0;
	sub_825952B8(ctx, base);
loc_82B418F0:
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// b 0x82b417ec
	goto loc_82B417EC;
loc_82B41908:
	// mulli r11,r11,49
	ctx.r11.s64 = ctx.r11.s64 * 49;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,326
	ctx.r11.s64 = ctx.r11.s64 + 326;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82b418ac
	goto loc_82B418AC;
loc_82B41924:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b417e4
	if (cr6.lt) goto loc_82B417E4;
loc_82B41934:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82B4193C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41948;
	sub_831CC188(ctx, base);
loc_82B41948:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41954;
	sub_831CC188(ctx, base);
loc_82B41954:
	// addi r25,r31,112
	ctx.r25.s64 = ctx.r31.s64 + 112;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// beq 0x82b41934
	if (cr0.eq) goto loc_82B41934;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// li r18,2
	ctx.r18.s64 = 2;
	// addi r22,r11,2368
	ctx.r22.s64 = ctx.r11.s64 + 2368;
loc_82B41970:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82B41978:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// ble cr6,0x82b41a90
	if (!cr6.gt) goto loc_82B41A90;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// cmplw cr6,r28,r6
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b41a78
	if (!cr6.lt) goto loc_82B41A78;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b41a9c
	if (!cr6.gt) goto loc_82B41A9C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lhzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r10.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// bl 0x8311c338
	ctx.lr = 0x82B419DC;
	sub_8311C338(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,540(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rlwinm r11,r9,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7F;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b41a3c
	if (cr6.eq) goto loc_82B41A3C;
	// addi r29,r3,328
	ctx.r29.s64 = ctx.r3.s64 + 328;
loc_82B41A00:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82b41a10
	if (cr6.lt) goto loc_82B41A10;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82B41A10:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82B41A24;
	sub_835977D8(ctx, base);
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r10,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b41a00
	if (cr6.lt) goto loc_82B41A00;
loc_82B41A3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82b41448
	ctx.lr = 0x82B41A48;
	sub_82B41448(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b41a60
	if (cr6.eq) goto loc_82B41A60;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82B41A60;
	sub_825952B8(ctx, base);
loc_82B41A60:
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// b 0x82b41978
	goto loc_82B41978;
loc_82B41A78:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b41970
	if (cr6.lt) goto loc_82B41970;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82B41A90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41A9C;
	sub_831CC188(ctx, base);
loc_82B41A9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41AA8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B41AA8"))) PPC_WEAK_FUNC(sub_82B41AA8);
PPC_FUNC_IMPL(__imp__sub_82B41AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B41AB0;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B41AC0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r30,r11,221
	ctx.r30.s64 = ctx.r11.s64 + 14483456;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// lbz r10,1100(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b41b74
	if (cr6.eq) goto loc_82B41B74;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
	// lwz r10,2368(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2368);
loc_82B41B0C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r11,r11,289
	ctx.r11.s64 = ctx.r11.s64 + 289;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b41b44
	if (!cr6.eq) goto loc_82B41B44;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b41b48
	if (cr6.eq) goto loc_82B41B48;
loc_82B41B44:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B41B48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b41b64
	if (!cr6.eq) goto loc_82B41B64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82B41B60;
	sub_835977D8(ctx, base);
	// lwz r10,2368(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2368);
loc_82B41B64:
	// lbz r11,1100(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1100);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b41b0c
	if (cr6.lt) goto loc_82B41B0C;
loc_82B41B74:
	// lwz r11,1292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8316b780
	ctx.lr = 0x82B41B88;
	sub_8316B780(ctx, base);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// lwz r4,156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82b41bb4
	if (!cr6.eq) goto loc_82B41BB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831ba958
	ctx.lr = 0x82B41BB0;
	sub_831BA958(ctx, base);
	// b 0x82b41bb8
	goto loc_82B41BB8;
loc_82B41BB4:
	// bl 0x831bb5b0
	ctx.lr = 0x82B41BB8;
	sub_831BB5B0(ctx, base);
loc_82B41BB8:
	// lwz r10,116(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// addi r23,r29,112
	ctx.r23.s64 = ctx.r29.s64 + 112;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// li r20,2
	ctx.r20.s64 = 2;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// srawi. r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b41d28
	if (cr0.eq) goto loc_82B41D28;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b41d90
	if (!cr6.gt) goto loc_82B41D90;
loc_82B41BE8:
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b41c10
	if (cr6.lt) goto loc_82B41C10;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
loc_82B41C10:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82b41d08
	if (cr6.eq) goto loc_82B41D08;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82B41C20:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r22
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r22.u32, xer);
	// ble cr6,0x82b41d9c
	if (!cr6.gt) goto loc_82B41D9C;
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwzx r11,r24,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// ble cr6,0x82b41da8
	if (!cr6.gt) goto loc_82B41DA8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r9,300(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// sth r4,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r4.u16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B41C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b41cc8
	if (cr6.eq) goto loc_82B41CC8;
	// rlwinm r30,r25,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B41C8C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B41C9C;
	sub_835977D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B41CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b41c8c
	if (cr6.lt) goto loc_82B41C8C;
loc_82B41CC8:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x82b41448
	ctx.lr = 0x82B41CD4;
	sub_82B41448(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b41cec
	if (cr6.eq) goto loc_82B41CEC;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B41CEC;
	sub_825952B8(ctx, base);
loc_82B41CEC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// cmplw cr6,r27,r21
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, xer);
	// blt cr6,0x82b41c20
	if (cr6.lt) goto loc_82B41C20;
loc_82B41D08:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// bgt cr6,0x82b41be8
	if (cr6.gt) goto loc_82B41BE8;
loc_82B41D28:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b41d40
	if (cr6.eq) goto loc_82B41D40;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82B41D40;
	sub_825952B8(ctx, base);
loc_82B41D40:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// beq cr6,0x82b41d64
	if (cr6.eq) goto loc_82B41D64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82B41D64;
	sub_825952B8(ctx, base);
loc_82B41D64:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// beq cr6,0x82b41d88
	if (cr6.eq) goto loc_82B41D88;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82B41D88;
	sub_825952B8(ctx, base);
loc_82B41D88:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B41D90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41D9C;
	sub_831CC188(ctx, base);
loc_82B41D9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41DA8;
	sub_831CC188(ctx, base);
loc_82B41DA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41DB4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B41DB4"))) PPC_WEAK_FUNC(sub_82B41DB4);
PPC_FUNC_IMPL(__imp__sub_82B41DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B41DB8"))) PPC_WEAK_FUNC(sub_82B41DB8);
PPC_FUNC_IMPL(__imp__sub_82B41DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B41DC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82B41DCC;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// ori r10,r11,19016
	ctx.r10.u64 = ctx.r11.u64 | 19016;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,2368(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2368);
	// lwzx r26,r3,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// xor r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b41e08
	if (!cr6.eq) goto loc_82B41E08;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b41e0c
	if (cr6.eq) goto loc_82B41E0C;
loc_82B41E08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B41E0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b41f18
	if (!cr6.eq) goto loc_82B41F18;
	// bl 0x82b41758
	ctx.lr = 0x82B41E20;
	sub_82B41758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B41E28;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r27,r10,19012
	ctx.r27.u64 = ctx.r10.u64 | 19012;
	// ori r28,r9,19008
	ctx.r28.u64 = ctx.r9.u64 | 19008;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b41f04
	if (!cr6.eq) goto loc_82B41F04;
	// lhzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r30,r29,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82b3f428
	ctx.lr = 0x82B41E5C;
	sub_82B3F428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82b41f04
	if (cr6.eq) goto loc_82B41F04;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82b41e90
	if (cr6.gt) goto loc_82B41E90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41E90;
	sub_831CC188(ctx, base);
loc_82B41E90:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b41f04
	if (!cr6.lt) goto loc_82B41F04;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b41ee0
	if (cr6.gt) goto loc_82B41EE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B41EE0;
	sub_831CC188(ctx, base);
loc_82B41EE0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lfs f2,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B41F04;
	sub_82D1EBF8(ctx, base);
loc_82B41F04:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r11,r29,r27
	PPC_STORE_U16(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u16);
	// stwx r10,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r10.u32);
	// b 0x82b41f98
	goto loc_82B41F98;
loc_82B41F18:
	// bl 0x82d199f0
	ctx.lr = 0x82B41F1C;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b41f44
	if (!cr6.eq) goto loc_82B41F44;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b41f44
	if (!cr6.eq) goto loc_82B41F44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b41aa8
	ctx.lr = 0x82B41F40;
	sub_82B41AA8(ctx, base);
	// b 0x82b41f98
	goto loc_82B41F98;
loc_82B41F44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b41758
	ctx.lr = 0x82B41F4C;
	sub_82B41758(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,19012
	ctx.r10.u64 = ctx.r11.u64 | 19012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x82b3f428
	ctx.lr = 0x82B41F68;
	sub_82B3F428(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r7,r8,19008
	ctx.r7.u64 = ctx.r8.u64 | 19008;
	// lwzx r5,r29,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82b41f98
	if (cr6.eq) goto loc_82B41F98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B41F98;
	sub_82D1EBF8(ctx, base);
loc_82B41F98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b40290
	ctx.lr = 0x82B41FA0;
	sub_82B40290(ctx, base);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b4200c
	if (cr6.eq) goto loc_82B4200C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B41FB4;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82B41FB8;
	sub_82D2EC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B41FC8;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B41FD4;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B41FDC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-11668
	ctx.r4.s64 = ctx.r11.s64 + -11668;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B41FF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4200c
	if (cr6.eq) goto loc_82B4200C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B4200C;
	sub_82D2AEC8(ctx, base);
loc_82B4200C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B42014"))) PPC_WEAK_FUNC(sub_82B42014);
PPC_FUNC_IMPL(__imp__sub_82B42014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42018"))) PPC_WEAK_FUNC(sub_82B42018);
PPC_FUNC_IMPL(__imp__sub_82B42018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82d34e50
	ctx.lr = 0x82B42030;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82B42034;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b42058
	if (!cr6.eq) goto loc_82B42058;
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
loc_82B42058:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// bl 0x82b3eec8
	ctx.lr = 0x82B42068;
	sub_82B3EEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4207C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b41030
	ctx.lr = 0x82B42084;
	sub_82B41030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3f9a8
	ctx.lr = 0x82B4208C;
	sub_82B3F9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b41db8
	ctx.lr = 0x82B42094;
	sub_82B41DB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b407c0
	ctx.lr = 0x82B4209C;
	sub_82B407C0(ctx, base);
	// lbz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b420b0
	if (!cr6.eq) goto loc_82B420B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3f610
	ctx.lr = 0x82B420B0;
	sub_82B3F610(ctx, base);
loc_82B420B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3f338
	ctx.lr = 0x82B420B8;
	sub_82B3F338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B420C0;
	sub_82D19A78(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82B420C4;
	sub_82D33C10(ctx, base);
	// addic. r4,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82b420e8
	if (cr0.lt) goto loc_82B420E8;
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
	ctx.lr = 0x82B420E8;
	sub_82D1EBF8(ctx, base);
loc_82B420E8:
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

__attribute__((alias("__imp__sub_82B42100"))) PPC_WEAK_FUNC(sub_82B42100);
PPC_FUNC_IMPL(__imp__sub_82B42100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B42108;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b42144
	if (cr6.eq) goto loc_82B42144;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b40a50
	ctx.lr = 0x82B4212C;
	sub_82B40A50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831b31b0
	ctx.lr = 0x82B42140;
	sub_831B31B0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82B42144:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b41aa8
	ctx.lr = 0x82B42150;
	sub_82B41AA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b407c0
	ctx.lr = 0x82B42158;
	sub_82B407C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b40290
	ctx.lr = 0x82B42160;
	sub_82B40290(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82B42164;
	sub_82D26ED8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82d26b18
	ctx.lr = 0x82B4216C;
	sub_82D26B18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B42174"))) PPC_WEAK_FUNC(sub_82B42174);
PPC_FUNC_IMPL(__imp__sub_82B42174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42178"))) PPC_WEAK_FUNC(sub_82B42178);
PPC_FUNC_IMPL(__imp__sub_82B42178) {
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
	// bl 0x82d26ed8
	ctx.lr = 0x82B42188;
	sub_82D26ED8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82d26900
	ctx.lr = 0x82B42190;
	sub_82D26900(ctx, base);
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

__attribute__((alias("__imp__sub_82B421A4"))) PPC_WEAK_FUNC(sub_82B421A4);
PPC_FUNC_IMPL(__imp__sub_82B421A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B421A8"))) PPC_WEAK_FUNC(sub_82B421A8);
PPC_FUNC_IMPL(__imp__sub_82B421A8) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B421C0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addis r9,r11,221
	ctx.r9.s64 = ctx.r11.s64 + 14483456;
	// addi r9,r9,-26512
	ctx.r9.s64 = ctx.r9.s64 + -26512;
	// lwz r11,1292(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1292);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b421e0
	if (cr6.eq) goto loc_82B421E0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B421E0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,13400
	cr6.compare<uint32_t>(ctx.r11.u32, 13400, xer);
	// beq cr6,0x82b4220c
	if (cr6.eq) goto loc_82B4220C;
	// cmplwi cr6,r11,13401
	cr6.compare<uint32_t>(ctx.r11.u32, 13401, xer);
	// beq cr6,0x82b4220c
	if (cr6.eq) goto loc_82B4220C;
	// cmplwi cr6,r11,10200
	cr6.compare<uint32_t>(ctx.r11.u32, 10200, xer);
	// beq cr6,0x82b42204
	if (cr6.eq) goto loc_82B42204;
	// cmplwi cr6,r11,10201
	cr6.compare<uint32_t>(ctx.r11.u32, 10201, xer);
	// bne cr6,0x82b42214
	if (!cr6.eq) goto loc_82B42214;
loc_82B42204:
	// li r11,51
	ctx.r11.s64 = 51;
	// b 0x82b42210
	goto loc_82B42210;
loc_82B4220C:
	// li r11,67
	ctx.r11.s64 = 67;
loc_82B42210:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B42214:
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

__attribute__((alias("__imp__sub_82B42228"))) PPC_WEAK_FUNC(sub_82B42228);
PPC_FUNC_IMPL(__imp__sub_82B42228) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B42248;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82B42254;
	sub_8311C338(ctx, base);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// lwz r10,540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// lwz r9,524(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// lwz r7,536(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r5,r11,25,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// rlwinm r6,r10,30,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// rlwinm r4,r7,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3F;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stb r4,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b422a8
	if (!cr6.eq) goto loc_82B422A8;
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b422ac
	if (cr6.eq) goto loc_82B422AC;
loc_82B422A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B422AC:
	// lwz r10,532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stb r9,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r9.u8);
	// stb r8,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82B422E0"))) PPC_WEAK_FUNC(sub_82B422E0);
PPC_FUNC_IMPL(__imp__sub_82B422E0) {
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
	// lbz r11,117(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 117);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b42334
	if (cr6.eq) goto loc_82B42334;
	// bl 0x831156e8
	ctx.lr = 0x82B42308;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r30,r10,221
	ctx.r30.s64 = ctx.r10.s64 + 14483456;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B42320;
	sub_82D1C1A8(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,1112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82B42334;
	sub_82D19858(ctx, base);
loc_82B42334:
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

__attribute__((alias("__imp__sub_82B4234C"))) PPC_WEAK_FUNC(sub_82B4234C);
PPC_FUNC_IMPL(__imp__sub_82B4234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42350"))) PPC_WEAK_FUNC(sub_82B42350);
PPC_FUNC_IMPL(__imp__sub_82B42350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B42358;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42364;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4244c
	if (cr6.eq) goto loc_82B4244C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B42378;
	sub_82D19A88(ctx, base);
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// lwz r10,104(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// li r27,88
	ctx.r27.s64 = 88;
	// addi r30,r26,100
	ctx.r30.s64 = ctx.r26.s64 + 100;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// divw. r4,r9,r27
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x82b42440
	if (cr0.eq) goto loc_82B42440;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,2480
	ctx.r28.s64 = ctx.r11.s64 + 2480;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r25,r11,-10312
	ctx.r25.s64 = ctx.r11.s64 + -10312;
loc_82B423B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B423BC;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B423D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4241c
	if (cr6.eq) goto loc_82B4241C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b42454
	if (!cr6.gt) goto loc_82B42454;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82B423FC;
	sub_82D29598(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42404;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B4241C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4241C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r27
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x82b423b0
	if (cr6.lt) goto loc_82B423B0;
loc_82B42440:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B4244C;
	sub_82D1ED60(ctx, base);
loc_82B4244C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B42454:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B42460;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B42460"))) PPC_WEAK_FUNC(sub_82B42460);
PPC_FUNC_IMPL(__imp__sub_82B42460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B42468;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B424A8;
	sub_8259CB28(ctx, base);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B424C8;
	sub_8259CB28(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82B424E8;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B424F4"))) PPC_WEAK_FUNC(sub_82B424F4);
PPC_FUNC_IMPL(__imp__sub_82B424F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B424F8"))) PPC_WEAK_FUNC(sub_82B424F8);
PPC_FUNC_IMPL(__imp__sub_82B424F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B42500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r28,r9,-22544
	ctx.r28.s64 = ctx.r9.s64 + -22544;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82B42558;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B42568;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B42578;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B42584"))) PPC_WEAK_FUNC(sub_82B42584);
PPC_FUNC_IMPL(__imp__sub_82B42584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42588"))) PPC_WEAK_FUNC(sub_82B42588);
PPC_FUNC_IMPL(__imp__sub_82B42588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B42590;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,88
	ctx.r10.s64 = 88;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82b425c0
	if (cr6.gt) goto loc_82B425C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B425C0;
	sub_831CC188(ctx, base);
loc_82B425C0:
	// mulli r10,r4,88
	ctx.r10.s64 = ctx.r4.s64 * 88;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b42460
	ctx.lr = 0x82B425D0;
	sub_82B42460(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r31,r11,-10104
	ctx.r31.s64 = ctx.r11.s64 + -10104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r31,-703
	ctx.r6.s64 = ctx.r31.s64 + -703;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x82B425F0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b426f8
	if (cr6.eq) goto loc_82B426F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42600;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B42618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42620;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B42638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42644;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B4265C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42668;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B42680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B4268C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B426A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,211
	ctx.r4.u64 = ctx.r4.u64 | 211;
	// bl 0x82d29598
	ctx.lr = 0x82B426D0;
	sub_82D29598(ctx, base);
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,212
	ctx.r4.u64 = ctx.r4.u64 | 212;
	// bl 0x82d29598
	ctx.lr = 0x82B426E0;
	sub_82D29598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B426F4;
	sub_82D291E0(ctx, base);
	// b 0x82b42890
	goto loc_82B42890;
loc_82B426F8:
	// addi r6,r31,-702
	ctx.r6.s64 = ctx.r31.s64 + -702;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x827a8810
	ctx.lr = 0x82B42710;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82b42818
	if (cr6.eq) goto loc_82B42818;
	// bl 0x82d19a78
	ctx.lr = 0x82B42720;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B42738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42740;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B42758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42764;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B4277C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42788;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B427A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B427AC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B427C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,61
	ctx.r4.u64 = ctx.r4.u64 | 61;
	// bl 0x82d29598
	ctx.lr = 0x82B427F0;
	sub_82D29598(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// bl 0x82d29598
	ctx.lr = 0x82B42800;
	sub_82D29598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B42814;
	sub_82D291E0(ctx, base);
	// b 0x82b42890
	goto loc_82B42890;
loc_82B42818:
	// bl 0x82d19a78
	ctx.lr = 0x82B4281C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B42834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B4283C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B42854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42860;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B42878;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d29598
	ctx.lr = 0x82B42890;
	sub_82D29598(ctx, base);
loc_82B42890:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b428ac
	if (cr6.eq) goto loc_82B428AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B428AC;
	sub_82D291E0(ctx, base);
loc_82B428AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B428B4;
	sub_82C16C98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B428BC"))) PPC_WEAK_FUNC(sub_82B428BC);
PPC_FUNC_IMPL(__imp__sub_82B428BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B428C0"))) PPC_WEAK_FUNC(sub_82B428C0);
PPC_FUNC_IMPL(__imp__sub_82B428C0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b428f8
	if (cr6.eq) goto loc_82B428F8;
loc_82B428E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16c98
	ctx.lr = 0x82B428EC;
	sub_82C16C98(ctx, base);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b428e4
	if (!cr6.eq) goto loc_82B428E4;
loc_82B428F8:
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

__attribute__((alias("__imp__sub_82B42910"))) PPC_WEAK_FUNC(sub_82B42910);
PPC_FUNC_IMPL(__imp__sub_82B42910) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82b42588
	sub_82B42588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B42918"))) PPC_WEAK_FUNC(sub_82B42918);
PPC_FUNC_IMPL(__imp__sub_82B42918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B42920;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,47662
	ctx.r10.u64 = ctx.r11.u64 | 47662;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b42944
	if (!cr6.gt) goto loc_82B42944;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B42944;
	sub_831CC150(ctx, base);
loc_82B42944:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,88
	ctx.r24.s64 = 88;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b42a00
	if (!cr6.lt) goto loc_82B42A00;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,88
	ctx.r26.s64 = ctx.r4.s64 * 88;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B4297C;
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
	// beq cr6,0x82b429b8
	if (cr6.eq) goto loc_82B429B8;
loc_82B42994:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b429a8
	if (cr6.eq) goto loc_82B429A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b42460
	ctx.lr = 0x82B429A8;
	sub_82B42460(ctx, base);
loc_82B429A8:
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b42994
	if (!cr6.eq) goto loc_82B42994;
loc_82B429B8:
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
	// beq cr6,0x82b429e8
	if (cr6.eq) goto loc_82B429E8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82b428c0
	ctx.lr = 0x82B429D8;
	sub_82B428C0(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B429E8;
	sub_825952B8(ctx, base);
loc_82B429E8:
	// mulli r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 * 88;
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
loc_82B42A00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B42A08"))) PPC_WEAK_FUNC(sub_82B42A08);
PPC_FUNC_IMPL(__imp__sub_82B42A08) {
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
	// addi r9,r11,-10000
	ctx.r9.s64 = ctx.r11.s64 + -10000;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b42a68
	if (cr6.eq) goto loc_82B42A68;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b428c0
	ctx.lr = 0x82B42A54;
	sub_82B428C0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B42A68;
	sub_825952B8(ctx, base);
loc_82B42A68:
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
	// bl 0x82d25548
	ctx.lr = 0x82B42A80;
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

__attribute__((alias("__imp__sub_82B42A98"))) PPC_WEAK_FUNC(sub_82B42A98);
PPC_FUNC_IMPL(__imp__sub_82B42A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,744
	ctx.r10.s64 = 48758784;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,88
	ctx.r9.s64 = 88;
	// ori r8,r10,47662
	ctx.r8.u64 = ctx.r10.u64 | 47662;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b42acc
	if (!cr6.lt) goto loc_82B42ACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B42ACC:
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
	// blt cr6,0x82b42afc
	if (cr6.lt) goto loc_82B42AFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B42AFC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b42b08
	if (!cr6.lt) goto loc_82B42B08;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B42B08:
	// b 0x82b42918
	sub_82B42918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B42B0C"))) PPC_WEAK_FUNC(sub_82B42B0C);
PPC_FUNC_IMPL(__imp__sub_82B42B0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B42B10"))) PPC_WEAK_FUNC(sub_82B42B10);
PPC_FUNC_IMPL(__imp__sub_82B42B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B42B18;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B42B34;
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
	ctx.lr = 0x82B42B4C;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r8,r11,-10000
	ctx.r8.s64 = ctx.r11.s64 + -10000;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2512(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2512);
	// lwz r10,2548(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2548);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stb r28,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r28.u8);
	// stb r27,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r27.u8);
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B42B9C;
	sub_82D20AE0(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,-10392
	ctx.r4.s64 = ctx.r4.s64 + -10392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B42BB0;
	sub_82D23390(ctx, base);
	// lbz r3,117(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b42bd4
	if (!cr6.eq) goto loc_82B42BD4;
	// bl 0x831156e8
	ctx.lr = 0x82B42BC0;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82a673c0
	ctx.lr = 0x82B42BD4;
	sub_82A673C0(ctx, base);
loc_82B42BD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B42BE0"))) PPC_WEAK_FUNC(sub_82B42BE0);
PPC_FUNC_IMPL(__imp__sub_82B42BE0) {
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
	// bl 0x82b42a08
	ctx.lr = 0x82B42C00;
	sub_82B42A08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b42c18
	if (cr6.eq) goto loc_82B42C18;
	// bl 0x82416268
	ctx.lr = 0x82B42C14;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B42C18:
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

__attribute__((alias("__imp__sub_82B42C30"))) PPC_WEAK_FUNC(sub_82B42C30);
PPC_FUNC_IMPL(__imp__sub_82B42C30) {
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
	// bge cr6,0x82b42c68
	if (!cr6.lt) goto loc_82B42C68;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b42c6c
	if (!cr6.gt) goto loc_82B42C6C;
loc_82B42C68:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B42C6C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b42cbc
	if (cr6.eq) goto loc_82B42CBC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,88
	ctx.r9.s64 = 88;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b42ca0
	if (!cr6.eq) goto loc_82B42CA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b42a98
	ctx.lr = 0x82B42CA0;
	sub_82B42A98(ctx, base);
loc_82B42CA0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b42ce8
	if (cr6.eq) goto loc_82B42CE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 * 88;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b42ce4
	goto loc_82B42CE4;
loc_82B42CBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b42cd4
	if (!cr6.eq) goto loc_82B42CD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b42a98
	ctx.lr = 0x82B42CD4;
	sub_82B42A98(ctx, base);
loc_82B42CD4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b42ce8
	if (cr6.eq) goto loc_82B42CE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B42CE4:
	// bl 0x82b42460
	ctx.lr = 0x82B42CE8;
	sub_82B42460(ctx, base);
loc_82B42CE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
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

__attribute__((alias("__imp__sub_82B42D0C"))) PPC_WEAK_FUNC(sub_82B42D0C);
PPC_FUNC_IMPL(__imp__sub_82B42D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42D10"))) PPC_WEAK_FUNC(sub_82B42D10);
PPC_FUNC_IMPL(__imp__sub_82B42D10) {
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
	// blt cr6,0x82b42d38
	if (cr6.lt) goto loc_82B42D38;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b42d3c
	goto loc_82B42D3C;
loc_82B42D38:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B42D3C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B42D58;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b42d78
	if (cr6.eq) goto loc_82B42D78;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b42b10
	ctx.lr = 0x82B42D74;
	sub_82B42B10(ctx, base);
	// b 0x82b42d7c
	goto loc_82B42D7C;
loc_82B42D78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B42D7C:
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

__attribute__((alias("__imp__sub_82B42D94"))) PPC_WEAK_FUNC(sub_82B42D94);
PPC_FUNC_IMPL(__imp__sub_82B42D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42D98"))) PPC_WEAK_FUNC(sub_82B42D98);
PPC_FUNC_IMPL(__imp__sub_82B42D98) {
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
	// blt cr6,0x82b42dc0
	if (cr6.lt) goto loc_82B42DC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b42dc4
	goto loc_82B42DC4;
loc_82B42DC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B42DC4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B42DE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b42e00
	if (cr6.eq) goto loc_82B42E00;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b42b10
	ctx.lr = 0x82B42DFC;
	sub_82B42B10(ctx, base);
	// b 0x82b42e04
	goto loc_82B42E04;
loc_82B42E00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B42E04:
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

__attribute__((alias("__imp__sub_82B42E1C"))) PPC_WEAK_FUNC(sub_82B42E1C);
PPC_FUNC_IMPL(__imp__sub_82B42E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42E20"))) PPC_WEAK_FUNC(sub_82B42E20);
PPC_FUNC_IMPL(__imp__sub_82B42E20) {
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
	// blt cr6,0x82b42e48
	if (cr6.lt) goto loc_82B42E48;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b42e4c
	goto loc_82B42E4C;
loc_82B42E48:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B42E4C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B42E68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b42e88
	if (cr6.eq) goto loc_82B42E88;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b42b10
	ctx.lr = 0x82B42E84;
	sub_82B42B10(ctx, base);
	// b 0x82b42e8c
	goto loc_82B42E8C;
loc_82B42E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B42E8C:
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

__attribute__((alias("__imp__sub_82B42EA4"))) PPC_WEAK_FUNC(sub_82B42EA4);
PPC_FUNC_IMPL(__imp__sub_82B42EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B42EA8"))) PPC_WEAK_FUNC(sub_82B42EA8);
PPC_FUNC_IMPL(__imp__sub_82B42EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B42EB0;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r25,r11,2480
	ctx.r25.s64 = ctx.r11.s64 + 2480;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,990
	ctx.r9.s64 = 64880640;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r21,r3,100
	ctx.r21.s64 = ctx.r3.s64 + 100;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r20,2
	ctx.r20.s64 = 2;
	// ori r22,r9,211
	ctx.r22.u64 = ctx.r9.u64 | 211;
	// addi r30,r11,-10724
	ctx.r30.s64 = ctx.r11.s64 + -10724;
	// addi r24,r10,-22544
	ctx.r24.s64 = ctx.r10.s64 + -22544;
loc_82B42EEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B42EF8;
	sub_82D19A88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B42F00;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,380
	ctx.r4.s64 = ctx.r30.s64 + 380;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B42F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// clrlwi r27,r28,24
	ctx.r27.u64 = ctx.r28.u32 & 0xFF;
	// beq cr6,0x82b42fb8
	if (cr6.eq) goto loc_82B42FB8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B42F34;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B42F4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r30,-250
	ctx.r4.s64 = ctx.r30.s64 + -250;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B42F68;
	sub_8259CC28(ctx, base);
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// ori r4,r4,97
	ctx.r4.u64 = ctx.r4.u64 | 97;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B42F7C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B42F90;
	sub_82D291E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b42fac
	if (cr6.lt) goto loc_82B42FAC;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B42FAC;
	sub_825952B8(ctx, base);
loc_82B42FAC:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82B42FB8:
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82B42FF0;
	sub_8259CC28(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B43000;
	sub_8259CC28(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8259cc28
	ctx.lr = 0x82B43010;
	sub_8259CC28(ctx, base);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// rlwinm r27,r27,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B43028;
	sub_82D04220(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r27,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B43034;
	sub_82D04220(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b42c30
	ctx.lr = 0x82B43040;
	sub_82B42C30(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c16c98
	ctx.lr = 0x82B43048;
	sub_82C16C98(ctx, base);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// blt cr6,0x82b42eec
	if (cr6.lt) goto loc_82B42EEC;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r10,88
	ctx.r10.s64 = 88;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r4,r8,r10
	ctx.r4.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// bl 0x82d1ed60
	ctx.lr = 0x82B43074;
	sub_82D1ED60(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4307C"))) PPC_WEAK_FUNC(sub_82B4307C);
PPC_FUNC_IMPL(__imp__sub_82B4307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B43080"))) PPC_WEAK_FUNC(sub_82B43080);
PPC_FUNC_IMPL(__imp__sub_82B43080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B43088;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x82B430A0;
	sub_8316B780(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b43168
	if (cr6.eq) goto loc_82B43168;
	// bl 0x830ff290
	ctx.lr = 0x82B430B4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// beq cr6,0x82b43168
	if (cr6.eq) goto loc_82B43168;
	// bl 0x831156e8
	ctx.lr = 0x82B430C4;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82B430D0;
	sub_8311C338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B430DC;
	sub_82B424F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x82b43128
	if (cr6.gt) goto loc_82B43128;
	// beq cr6,0x82b43130
	if (cr6.eq) goto loc_82B43130;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82b43114
	if (cr6.eq) goto loc_82B43114;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x82b43160
	if (!cr6.gt) goto loc_82B43160;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x82b43130
	if (!cr6.gt) goto loc_82B43130;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B4310C;
	sub_82C16C98(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B43114:
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 | 26;
	// ori r4,r4,783
	ctx.r4.u64 = ctx.r4.u64 | 783;
	// b 0x82b43140
	goto loc_82B43140;
loc_82B43128:
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// bne cr6,0x82b43160
	if (!cr6.eq) goto loc_82B43160;
loc_82B43130:
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,94
	ctx.r10.u64 = ctx.r11.u64 | 94;
	// ori r4,r4,853
	ctx.r4.u64 = ctx.r4.u64 | 853;
loc_82B43140:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r9,540(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// rlwinm r5,r9,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7F;
	// bl 0x82d042a8
	ctx.lr = 0x82B43154;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B43160;
	sub_82B42C30(ctx, base);
loc_82B43160:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B43168;
	sub_82C16C98(ctx, base);
loc_82B43168:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B43170"))) PPC_WEAK_FUNC(sub_82B43170);
PPC_FUNC_IMPL(__imp__sub_82B43170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B43178;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B43184;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r28,96
	ctx.r29.s64 = ctx.r28.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8316b780
	ctx.lr = 0x82B4319C;
	sub_8316B780(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b434e0
	if (cr6.eq) goto loc_82B434E0;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40128
	ctx.r10.u64 = ctx.r11.u64 | 40128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82b431cc
	if (!cr6.eq) goto loc_82B431CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// beq cr6,0x82b434e0
	if (cr6.eq) goto loc_82B434E0;
loc_82B431CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B431D4;
	sub_8311C338(ctx, base);
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b434e0
	if (cr6.eq) goto loc_82B434E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B431F0;
	sub_82B424F8(ctx, base);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r10,540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwz r9,532(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r8,r11,30,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// rlwinm r7,r10,30,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// divwu r11,r7,r8
	ctx.r11.u32 = PPCDivide(ctx.r7.u32, ctx.r8.u32);
	// twllei r8,0
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x82b43220
	if (cr6.eq) goto loc_82B43220;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B43220:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x82b43360
	if (cr6.gt) goto loc_82B43360;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bge cr6,0x82b43304
	if (!cr6.lt) goto loc_82B43304;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b43480
	if (cr6.gt) goto loc_82B43480;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b432ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B432AC;
	// bdzf 4*cr6+eq,0x82b43480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B43480;
	// bdzf 4*cr6+eq,0x82b43408
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B43408;
	// bdzf 4*cr6+eq,0x82b43454
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B43454;
	// bdzf 4*cr6+eq,0x82b43480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B43480;
	// bne cr6,0x82b432d0
	if (!cr6.eq) goto loc_82B432D0;
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B43270;
	sub_830FF290(ctx, base);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// lwz r10,540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// rlwinm r9,r11,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// rlwinm r5,r10,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r8,r11,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// twllei r9,0
	// divwu r6,r5,r9
	ctx.r6.u32 = PPCDivide(ctx.r5.u32, ctx.r9.u32);
	// beq cr6,0x82b433c4
	if (cr6.eq) goto loc_82B433C4;
	// ori r4,r4,784
	ctx.r4.u64 = ctx.r4.u64 | 784;
	// b 0x82b434c8
	goto loc_82B434C8;
loc_82B432AC:
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B432BC;
	sub_830FF290(ctx, base);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
loc_82B432C8:
	// ori r4,r4,851
	ctx.r4.u64 = ctx.r4.u64 | 851;
	// b 0x82b434a4
	goto loc_82B434A4;
loc_82B432D0:
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// ori r4,r4,851
	ctx.r4.u64 = ctx.r4.u64 | 851;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwz r8,536(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// rlwinm r6,r8,30,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3F;
	// rlwinm r5,r9,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7F;
	// twllei r6,0
	// rlwinm r8,r8,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xF;
	// divwu r6,r5,r6
	ctx.r6.u32 = PPCDivide(ctx.r5.u32, ctx.r6.u32);
	// b 0x82b434c0
	goto loc_82B434C0;
loc_82B43304:
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// rlwinm r9,r11,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// rlwinm r5,r10,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// bne cr6,0x82b43344
	if (!cr6.eq) goto loc_82B43344;
	// rlwinm r7,r11,24,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r4,r4,948
	ctx.r4.u64 = ctx.r4.u64 | 948;
	// bl 0x82d042a8
	ctx.lr = 0x82B43340;
	sub_82D042A8(ctx, base);
	// b 0x82b434cc
	goto loc_82B434CC;
loc_82B43344:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// ori r4,r4,850
	ctx.r4.u64 = ctx.r4.u64 | 850;
	// rlwinm r9,r11,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// rlwinm r8,r11,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// divwu r6,r5,r9
	ctx.r6.u32 = PPCDivide(ctx.r5.u32, ctx.r9.u32);
	// twllei r9,0
	// b 0x82b434c4
	goto loc_82B434C4;
loc_82B43360:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x82b4343c
	if (cr6.gt) goto loc_82B4343C;
	// beq cr6,0x82b43408
	if (cr6.eq) goto loc_82B43408;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// beq cr6,0x82b433d4
	if (cr6.eq) goto loc_82B433D4;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x82b43480
	if (!cr6.eq) goto loc_82B43480;
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// clrlwi r11,r8,29
	ctx.r11.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// rlwinm r6,r7,30,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3F;
	// rlwinm r5,r9,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7F;
	// twllei r6,0
	// divwu r6,r5,r6
	ctx.r6.u32 = PPCDivide(ctx.r5.u32, ctx.r6.u32);
	// rlwinm r8,r7,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xF;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// beq cr6,0x82b433cc
	if (cr6.eq) goto loc_82B433CC;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B433C4:
	// ori r4,r4,851
	ctx.r4.u64 = ctx.r4.u64 | 851;
	// b 0x82b434c8
	goto loc_82B434C8;
loc_82B433CC:
	// ori r4,r4,849
	ctx.r4.u64 = ctx.r4.u64 | 849;
	// b 0x82b434c8
	goto loc_82B434C8;
loc_82B433D4:
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// ori r4,r4,942
	ctx.r4.u64 = ctx.r4.u64 | 942;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r5,540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// rlwinm r5,r5,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x7F;
	// lwz r9,536(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// rlwinm r6,r9,30,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// rlwinm r8,r9,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF;
	// twllei r6,0
	// divwu r6,r5,r6
	ctx.r6.u32 = PPCDivide(ctx.r5.u32, ctx.r6.u32);
	// b 0x82b434c0
	goto loc_82B434C0;
loc_82B43408:
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,95
	ctx.r10.u64 = ctx.r11.u64 | 95;
	// ori r4,r4,851
	ctx.r4.u64 = ctx.r4.u64 | 851;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,536(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r5,540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// rlwinm r6,r9,30,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// rlwinm r5,r5,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x7F;
	// twllei r6,0
	// rlwinm r8,r9,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF;
	// divwu r6,r5,r6
	ctx.r6.u32 = PPCDivide(ctx.r5.u32, ctx.r6.u32);
	// b 0x82b434c0
	goto loc_82B434C0;
loc_82B4343C:
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// blt cr6,0x82b43480
	if (cr6.lt) goto loc_82B43480;
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(ctx.r11.u32, 63, xer);
	// ble cr6,0x82b434cc
	if (!cr6.gt) goto loc_82B434CC;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// bne cr6,0x82b43480
	if (!cr6.eq) goto loc_82B43480;
loc_82B43454:
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,95
	ctx.r10.u64 = ctx.r11.u64 | 95;
	// ori r4,r4,853
	ctx.r4.u64 = ctx.r4.u64 | 853;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r9,540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// rlwinm r11,r9,30,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7F;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82d042a8
	ctx.lr = 0x82B4347C;
	sub_82D042A8(ctx, base);
	// b 0x82b434cc
	goto loc_82B434CC;
loc_82B43480:
	// lis r11,75
	ctx.r11.s64 = 4915200;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,532(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b432c8
	if (!cr6.eq) goto loc_82B432C8;
	// ori r4,r4,849
	ctx.r4.u64 = ctx.r4.u64 | 849;
loc_82B434A4:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r10,540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// rlwinm r9,r11,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// rlwinm r5,r10,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// twllei r9,0
	// divwu r6,r5,r9
	ctx.r6.u32 = PPCDivide(ctx.r5.u32, ctx.r9.u32);
	// rlwinm r8,r11,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
loc_82B434C0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82B434C4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82B434C8:
	// bl 0x82d042a8
	ctx.lr = 0x82B434CC;
	sub_82D042A8(ctx, base);
loc_82B434CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B434D8;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B434E0;
	sub_82C16C98(ctx, base);
loc_82B434E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B434E8"))) PPC_WEAK_FUNC(sub_82B434E8);
PPC_FUNC_IMPL(__imp__sub_82B434E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B434F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316b780
	ctx.lr = 0x82B43508;
	sub_8316B780(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x82B43518;
	sub_8316B780(ctx, base);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b4353c
	if (!cr6.eq) goto loc_82B4353C;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b435e8
	if (cr6.eq) goto loc_82B435E8;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b4353c
	if (!cr6.eq) goto loc_82B4353C;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82B4353C:
	// bl 0x831156e8
	ctx.lr = 0x82B43540;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82b424f8
	ctx.lr = 0x82B43550;
	sub_82B424F8(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r9,r10,53
	ctx.r9.u64 = ctx.r10.u64 | 53;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82b435a0
	if (cr6.eq) goto loc_82B435A0;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82b435a0
	if (cr6.eq) goto loc_82B435A0;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82b43590
	if (!cr6.eq) goto loc_82B43590;
	// bl 0x8311c338
	ctx.lr = 0x82B43584;
	sub_8311C338(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,946
	ctx.r4.u64 = ctx.r4.u64 | 946;
	// b 0x82b435bc
	goto loc_82B435BC;
loc_82B43590:
	// bl 0x8311c338
	ctx.lr = 0x82B43594;
	sub_8311C338(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,593
	ctx.r4.u64 = ctx.r4.u64 | 593;
	// b 0x82b435bc
	goto loc_82B435BC;
loc_82B435A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a683c0
	ctx.lr = 0x82B435A8;
	sub_82A683C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B435B4;
	sub_8311C338(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,890
	ctx.r4.u64 = ctx.r4.u64 | 890;
loc_82B435BC:
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// lwz r10,532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r5,r11,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// rlwinm r6,r10,25,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x3F;
	// bl 0x82d042a8
	ctx.lr = 0x82B435D4;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B435E0;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B435E8;
	sub_82C16C98(ctx, base);
loc_82B435E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B435F0"))) PPC_WEAK_FUNC(sub_82B435F0);
PPC_FUNC_IMPL(__imp__sub_82B435F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B435F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B43604;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r28,r27,96
	ctx.r28.s64 = ctx.r27.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8316b780
	ctx.lr = 0x82B4361C;
	sub_8316B780(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b4364c
	if (cr6.eq) goto loc_82B4364C;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40128
	ctx.r10.u64 = ctx.r11.u64 | 40128;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82b43688
	if (!cr6.eq) goto loc_82B43688;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x82b43688
	if (!cr6.eq) goto loc_82B43688;
loc_82B4364C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82b43688
	if (cr6.eq) goto loc_82B43688;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82b43688
	if (cr6.eq) goto loc_82B43688;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82b43688
	if (cr6.eq) goto loc_82B43688;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b43688
	if (cr6.eq) goto loc_82B43688;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82b43688
	if (cr6.eq) goto loc_82B43688;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82b43688
	if (cr6.eq) goto loc_82B43688;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82b437d4
	if (!cr6.eq) goto loc_82B437D4;
loc_82B43688:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b424f8
	ctx.lr = 0x82B43690;
	sub_82B424F8(ctx, base);
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r9,r10,183
	ctx.r9.u64 = ctx.r10.u64 | 183;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// beq cr6,0x82b437cc
	if (cr6.eq) goto loc_82B437CC;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82b437cc
	if (cr6.eq) goto loc_82B437CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B436BC;
	sub_8311C338(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,528(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r31,r11,-10692
	ctx.r31.s64 = ctx.r11.s64 + -10692;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82B436D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82b436f4
	if (cr6.eq) goto loc_82B436F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82b436d4
	if (cr6.lt) goto loc_82B436D4;
	// b 0x82b4370c
	goto loc_82B4370C;
loc_82B436F4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B4370C;
	sub_82D04220(ctx, base);
loc_82B4370C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bne cr6,0x82b437c0
	if (!cr6.eq) goto loc_82B437C0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r4,r31,-281
	ctx.r4.s64 = ctx.r31.s64 + -281;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B43738;
	sub_8259CC28(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,941
	ctx.r4.u64 = ctx.r4.u64 | 941;
	// bl 0x82d04220
	ctx.lr = 0x82B43748;
	sub_82D04220(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a6b900
	ctx.lr = 0x82B43758;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x825a1da8
	ctx.lr = 0x82B4376C;
	sub_825A1DA8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b4378c
	if (cr6.lt) goto loc_82B4378C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B4378C;
	sub_825952B8(ctx, base);
loc_82B4378C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// blt cr6,0x82b437b4
	if (cr6.lt) goto loc_82B437B4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B437B4;
	sub_825952B8(ctx, base);
loc_82B437B4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82B437C0:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B437CC;
	sub_82B42C30(ctx, base);
loc_82B437CC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c16c98
	ctx.lr = 0x82B437D4;
	sub_82C16C98(ctx, base);
loc_82B437D4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B437DC"))) PPC_WEAK_FUNC(sub_82B437DC);
PPC_FUNC_IMPL(__imp__sub_82B437DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B437E0"))) PPC_WEAK_FUNC(sub_82B437E0);
PPC_FUNC_IMPL(__imp__sub_82B437E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B437E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,96
	ctx.r28.s64 = ctx.r3.s64 + 96;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316b780
	ctx.lr = 0x82B43800;
	sub_8316B780(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b439b0
	if (cr6.eq) goto loc_82B439B0;
	// bl 0x831156e8
	ctx.lr = 0x82B43814;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43824;
	sub_8311C338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b424f8
	ctx.lr = 0x82B43830;
	sub_82B424F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316b780
	ctx.lr = 0x82B4383C;
	sub_8316B780(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b43870
	if (!cr6.eq) goto loc_82B43870;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,53
	ctx.r10.u64 = ctx.r11.u64 | 53;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,536(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// rlwinm r8,r9,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b438ac
	if (cr6.eq) goto loc_82B438AC;
	// rlwinm r30,r11,23,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// b 0x82b438b0
	goto loc_82B438B0;
loc_82B43870:
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bne cr6,0x82b438a8
	if (!cr6.eq) goto loc_82B438A8;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43894;
	sub_8311C338(ctx, base);
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// rlwinm r9,r11,24,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// mullw r30,r10,r9
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// b 0x82b438b0
	goto loc_82B438B0;
loc_82B438A8:
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
loc_82B438AC:
	// rlwinm r30,r11,30,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
loc_82B438B0:
	// lwz r11,532(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 532);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b438ec
	if (cr6.lt) goto loc_82B438EC;
	// beq cr6,0x82b438d0
	if (cr6.eq) goto loc_82B438D0;
	// ori r4,r4,779
	ctx.r4.u64 = ctx.r4.u64 | 779;
	// b 0x82b438f0
	goto loc_82B438F0;
loc_82B438D0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b438e4
	if (!cr6.eq) goto loc_82B438E4;
	// ori r4,r4,897
	ctx.r4.u64 = ctx.r4.u64 | 897;
	// b 0x82b438f0
	goto loc_82B438F0;
loc_82B438E4:
	// ori r4,r4,791
	ctx.r4.u64 = ctx.r4.u64 | 791;
	// b 0x82b438f0
	goto loc_82B438F0;
loc_82B438EC:
	// ori r4,r4,790
	ctx.r4.u64 = ctx.r4.u64 | 790;
loc_82B438F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82d042a8
	ctx.lr = 0x82B438FC;
	sub_82D042A8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-10332
	ctx.r31.s64 = ctx.r11.s64 + -10332;
	// addi r4,r31,-610
	ctx.r4.s64 = ctx.r31.s64 + -610;
	// bl 0x837b0c10
	ctx.lr = 0x82B43910;
	sub_837B0C10(ctx, base);
	// lwz r11,536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82b4393c
	if (cr6.eq) goto loc_82B4393C;
	// ori r4,r4,715
	ctx.r4.u64 = ctx.r4.u64 | 715;
	// bl 0x82d042a8
	ctx.lr = 0x82B43934;
	sub_82D042A8(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// b 0x82b43948
	goto loc_82B43948;
loc_82B4393C:
	// ori r4,r4,707
	ctx.r4.u64 = ctx.r4.u64 | 707;
	// bl 0x82d042a8
	ctx.lr = 0x82B43944;
	sub_82D042A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B43948:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825a1eb8
	ctx.lr = 0x82B43954;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825a1da8
	ctx.lr = 0x82B43968;
	sub_825A1DA8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B43974;
	sub_82B42C30(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43994
	if (cr6.lt) goto loc_82B43994;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B43994;
	sub_825952B8(ctx, base);
loc_82B43994:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82c16c98
	ctx.lr = 0x82B439B0;
	sub_82C16C98(ctx, base);
loc_82B439B0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B439B8"))) PPC_WEAK_FUNC(sub_82B439B8);
PPC_FUNC_IMPL(__imp__sub_82B439B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B439C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316b780
	ctx.lr = 0x82B439D8;
	sub_8316B780(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x82B439E8;
	sub_8316B780(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b43a0c
	if (!cr6.eq) goto loc_82B43A0C;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b43a94
	if (cr6.eq) goto loc_82B43A94;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b43a0c
	if (!cr6.eq) goto loc_82B43A0C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B43A0C:
	// bl 0x831156e8
	ctx.lr = 0x82B43A10;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82b424f8
	ctx.lr = 0x82B43A20;
	sub_82B424F8(ctx, base);
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r9,r10,183
	ctx.r9.u64 = ctx.r10.u64 | 183;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8311c338
	ctx.lr = 0x82B43A38;
	sub_8311C338(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r8,528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10688
	ctx.r9.s64 = ctx.r11.s64 + -10688;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B43A4C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82b43a6c
	if (cr6.eq) goto loc_82B43A6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82b43a4c
	if (cr6.lt) goto loc_82B43A4C;
	// b 0x82b43a80
	goto loc_82B43A80;
loc_82B43A6C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B43A80;
	sub_82D04220(ctx, base);
loc_82B43A80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B43A8C;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B43A94;
	sub_82C16C98(ctx, base);
loc_82B43A94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B43A9C"))) PPC_WEAK_FUNC(sub_82B43A9C);
PPC_FUNC_IMPL(__imp__sub_82B43A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B43AA0"))) PPC_WEAK_FUNC(sub_82B43AA0);
PPC_FUNC_IMPL(__imp__sub_82B43AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B43AA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8316b780
	ctx.lr = 0x82B43AC0;
	sub_8316B780(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8316b780
	ctx.lr = 0x82B43AD0;
	sub_8316B780(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316b780
	ctx.lr = 0x82B43AE0;
	sub_8316B780(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8316b780
	ctx.lr = 0x82B43AF0;
	sub_8316B780(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x82B43B00;
	sub_8316B780(ctx, base);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b43b40
	if (!cr6.eq) goto loc_82B43B40;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b43b40
	if (!cr6.eq) goto loc_82B43B40;
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b43b40
	if (!cr6.eq) goto loc_82B43B40;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b43b40
	if (!cr6.eq) goto loc_82B43B40;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b43c88
	if (cr6.eq) goto loc_82B43C88;
loc_82B43B40:
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x82b43b7c
	if (cr6.eq) goto loc_82B43B7C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82b42228
	ctx.lr = 0x82B43B5C;
	sub_82B42228(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B43B6C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b43b6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B43B6C;
	// b 0x82b43c34
	goto loc_82B43C34;
loc_82B43B7C:
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b43bac
	if (cr6.eq) goto loc_82B43BAC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82b42228
	ctx.lr = 0x82B43B8C;
	sub_82B42228(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B43B9C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b43b9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B43B9C;
	// b 0x82b43c34
	goto loc_82B43C34;
loc_82B43BAC:
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b43be0
	if (cr6.eq) goto loc_82B43BE0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82b42228
	ctx.lr = 0x82B43BC0;
	sub_82B42228(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B43BD0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b43bd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B43BD0;
	// b 0x82b43c34
	goto loc_82B43C34;
loc_82B43BE0:
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b43c14
	if (cr6.eq) goto loc_82B43C14;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82b42228
	ctx.lr = 0x82B43BF4;
	sub_82B42228(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B43C04:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b43c04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B43C04;
	// b 0x82b43c34
	goto loc_82B43C34;
loc_82B43C14:
	// bl 0x82b42228
	ctx.lr = 0x82B43C18;
	sub_82B42228(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B43C28:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b43c28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B43C28;
loc_82B43C34:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b424f8
	ctx.lr = 0x82B43C3C;
	sub_82B424F8(ctx, base);
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r8,r11,184
	ctx.r8.u64 = ctx.r11.u64 | 184;
	// addi r31,r10,-10724
	ctx.r31.s64 = ctx.r10.s64 + -10724;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,-32
	ctx.r7.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B43C68;
	sub_82D04220(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B43C74;
	sub_82D04220(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B43C80;
	sub_82B42C30(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c16c98
	ctx.lr = 0x82B43C88;
	sub_82C16C98(ctx, base);
loc_82B43C88:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B43C90"))) PPC_WEAK_FUNC(sub_82B43C90);
PPC_FUNC_IMPL(__imp__sub_82B43C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B43C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B43CA4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r29,96
	ctx.r30.s64 = ctx.r29.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8316b780
	ctx.lr = 0x82B43CBC;
	sub_8316B780(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b43cd4
	if (!cr6.eq) goto loc_82B43CD4;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8316b780
	ctx.lr = 0x82B43CD4;
	sub_8316B780(ctx, base);
loc_82B43CD4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b44058
	if (cr6.eq) goto loc_82B44058;
	// bl 0x830ff290
	ctx.lr = 0x82B43CE4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B43CE8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82b43d10
	if (cr6.eq) goto loc_82B43D10;
	// bl 0x830ff290
	ctx.lr = 0x82B43CF4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B43CF8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82b43d10
	if (cr6.eq) goto loc_82B43D10;
	// bl 0x830ff290
	ctx.lr = 0x82B43D04;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B43D08;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82b44058
	if (!cr6.eq) goto loc_82B44058;
loc_82B43D10:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40124
	ctx.r10.u64 = ctx.r11.u64 | 40124;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x82b44058
	if (cr6.gt) goto loc_82B44058;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b424f8
	ctx.lr = 0x82B43D2C;
	sub_82B424F8(ctx, base);
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r9,r10,71
	ctx.r9.u64 = ctx.r10.u64 | 71;
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bgt cr6,0x82b43e14
	if (cr6.gt) goto loc_82B43E14;
	// beq cr6,0x82b43d68
	if (cr6.eq) goto loc_82B43D68;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b43e2c
	if (cr6.gt) goto loc_82B43E2C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b43e40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B43E40;
	// bdzf 4*cr6+eq,0x82b43f98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B43F98;
	// bne cr6,0x82b43eec
	if (!cr6.eq) goto loc_82B43EEC;
loc_82B43D68:
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43D74;
	sub_8311C338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43D84;
	sub_8311C338(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83125548
	ctx.lr = 0x82B43DA0;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43db4
	if (cr6.lt) goto loc_82B43DB4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b43db8
	goto loc_82B43DB8;
loc_82B43DB4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B43DB8:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// ori r4,r4,916
	ctx.r4.u64 = ctx.r4.u64 | 916;
	// bl 0x82d042a8
	ctx.lr = 0x82B43DC8;
	sub_82D042A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B43DD0;
	sub_8387E8E0(ctx, base);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x83125548
	ctx.lr = 0x82B43DE4;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43df8
	if (cr6.lt) goto loc_82B43DF8;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b43dfc
	goto loc_82B43DFC;
loc_82B43DF8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B43DFC:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,917
	ctx.r4.u64 = ctx.r4.u64 | 917;
	// bl 0x82d042a8
	ctx.lr = 0x82B43E0C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// b 0x82b44040
	goto loc_82B44040;
loc_82B43E14:
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// beq cr6,0x82b43f98
	if (cr6.eq) goto loc_82B43F98;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x82b43eec
	if (cr6.eq) goto loc_82B43EEC;
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// beq cr6,0x82b43e40
	if (cr6.eq) goto loc_82B43E40;
loc_82B43E2C:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,921
	ctx.r4.u64 = ctx.r4.u64 | 921;
	// bl 0x82d04220
	ctx.lr = 0x82B43E3C;
	sub_82D04220(ctx, base);
	// b 0x82b44044
	goto loc_82B44044;
loc_82B43E40:
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43E4C;
	sub_8311C338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43E5C;
	sub_8311C338(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r31.u8);
	// addi r5,r1,86
	ctx.r5.s64 = ctx.r1.s64 + 86;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83125548
	ctx.lr = 0x82B43E78;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43e8c
	if (cr6.lt) goto loc_82B43E8C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b43e90
	goto loc_82B43E90;
loc_82B43E8C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B43E90:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// ori r4,r4,916
	ctx.r4.u64 = ctx.r4.u64 | 916;
	// bl 0x82d042a8
	ctx.lr = 0x82B43EA0;
	sub_82D042A8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B43EA8;
	sub_8387E8E0(ctx, base);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83125548
	ctx.lr = 0x82B43EBC;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43ed0
	if (cr6.lt) goto loc_82B43ED0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b43ed4
	goto loc_82B43ED4;
loc_82B43ED0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B43ED4:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,920
	ctx.r4.u64 = ctx.r4.u64 | 920;
	// bl 0x82d042a8
	ctx.lr = 0x82B43EE4;
	sub_82D042A8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// b 0x82b44040
	goto loc_82B44040;
loc_82B43EEC:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43EF8;
	sub_8311C338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,81
	ctx.r4.s64 = 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43F08;
	sub_8311C338(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83125548
	ctx.lr = 0x82B43F24;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43f38
	if (cr6.lt) goto loc_82B43F38;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b43f3c
	goto loc_82B43F3C;
loc_82B43F38:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B43F3C:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// ori r4,r4,949
	ctx.r4.u64 = ctx.r4.u64 | 949;
	// bl 0x82d042a8
	ctx.lr = 0x82B43F4C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x82B43F54;
	sub_8387E8E0(ctx, base);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83125548
	ctx.lr = 0x82B43F68;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43f7c
	if (cr6.lt) goto loc_82B43F7C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b43f80
	goto loc_82B43F80;
loc_82B43F7C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B43F80:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,950
	ctx.r4.u64 = ctx.r4.u64 | 950;
	// bl 0x82d042a8
	ctx.lr = 0x82B43F90;
	sub_82D042A8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x82b44040
	goto loc_82B44040;
loc_82B43F98:
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43FA4;
	sub_8311C338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B43FB4;
	sub_8311C338(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// addi r5,r1,85
	ctx.r5.s64 = ctx.r1.s64 + 85;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83125548
	ctx.lr = 0x82B43FD0;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b43fe4
	if (cr6.lt) goto loc_82B43FE4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b43fe8
	goto loc_82B43FE8;
loc_82B43FE4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B43FE8:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// ori r4,r4,916
	ctx.r4.u64 = ctx.r4.u64 | 916;
	// bl 0x82d042a8
	ctx.lr = 0x82B43FF8;
	sub_82D042A8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82B44000;
	sub_8387E8E0(ctx, base);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// addi r5,r1,87
	ctx.r5.s64 = ctx.r1.s64 + 87;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x83125548
	ctx.lr = 0x82B44014;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44028
	if (cr6.lt) goto loc_82B44028;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b4402c
	goto loc_82B4402C;
loc_82B44028:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B4402C:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,918
	ctx.r4.u64 = ctx.r4.u64 | 918;
	// bl 0x82d042a8
	ctx.lr = 0x82B4403C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_82B44040:
	// bl 0x8387e8e0
	ctx.lr = 0x82B44044;
	sub_8387E8E0(ctx, base);
loc_82B44044:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B44050;
	sub_82B42C30(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c16c98
	ctx.lr = 0x82B44058;
	sub_82C16C98(ctx, base);
loc_82B44058:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B44060"))) PPC_WEAK_FUNC(sub_82B44060);
PPC_FUNC_IMPL(__imp__sub_82B44060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B44068;
	__savegprlr_19(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// bne cr6,0x82b44398
	if (!cr6.eq) goto loc_82B44398;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82b424f8
	ctx.lr = 0x82B44084;
	sub_82B424F8(ctx, base);
	// lis r10,930
	ctx.r10.s64 = 60948480;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// ori r9,r10,175
	ctx.r9.u64 = ctx.r10.u64 | 175;
	// addi r22,r11,-10320
	ctx.r22.s64 = ctx.r11.s64 + -10320;
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r22,-621
	ctx.r4.s64 = ctx.r22.s64 + -621;
	// bl 0x837b0c10
	ctx.lr = 0x82B440A4;
	sub_837B0C10(ctx, base);
	// addi r4,r22,-591
	ctx.r4.s64 = ctx.r22.s64 + -591;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82B440B0;
	sub_837B0C10(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B440B4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B440C4;
	sub_8311C338(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B440D4;
	sub_8311C338(ctx, base);
	// lwz r8,540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r8,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7F;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b44204
	if (cr6.eq) goto loc_82B44204;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r28,r3,328
	ctx.r28.s64 = ctx.r3.s64 + 328;
	// addi r29,r10,2600
	ctx.r29.s64 = ctx.r10.s64 + 2600;
loc_82B44118:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x82b44128
	if (cr6.lt) goto loc_82B44128;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82B44128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82B44134;
	sub_8311C148(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1292);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b44160
	if (!cr6.eq) goto loc_82B44160;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b44164
	if (cr6.eq) goto loc_82B44164;
loc_82B44160:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B44164:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b441dc
	if (!cr6.eq) goto loc_82B441DC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
loc_82B44184:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b44184
	if (!cr6.eq) goto loc_82B44184;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B441A8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8291fdc8
	ctx.lr = 0x82B441B4;
	sub_8291FDC8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b441d0
	if (cr6.lt) goto loc_82B441D0;
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B441D0;
	sub_825952B8(ctx, base);
loc_82B441D0:
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
loc_82B441DC:
	// lwz r11,540(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 540);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r11,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b44118
	if (cr6.lt) goto loc_82B44118;
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r25,164(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b443a0
	if (!cr6.eq) goto loc_82B443A0;
loc_82B44204:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x83125548
	ctx.lr = 0x82B44218;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b4422c
	if (cr6.lt) goto loc_82B4422C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b44230
	goto loc_82B44230;
loc_82B4422C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B44230:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,931
	ctx.r4.u64 = ctx.r4.u64 | 931;
	// bl 0x82d042a8
	ctx.lr = 0x82B44240;
	sub_82D042A8(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b4425c
	if (cr6.lt) goto loc_82B4425C;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82B4425C;
	sub_825952B8(ctx, base);
loc_82B4425C:
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// addi r4,r22,-8
	ctx.r4.s64 = ctx.r22.s64 + -8;
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r27,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B44278;
	sub_825A1EB8(ctx, base);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83125548
	ctx.lr = 0x82B4428C;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b442a0
	if (cr6.lt) goto loc_82B442A0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b442a4
	goto loc_82B442A4;
loc_82B442A0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B442A4:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,932
	ctx.r4.u64 = ctx.r4.u64 | 932;
	// bl 0x82d042a8
	ctx.lr = 0x82B442B4;
	sub_82D042A8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b442d0
	if (cr6.lt) goto loc_82B442D0;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82B442D0;
	sub_825952B8(ctx, base);
loc_82B442D0:
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B442F4;
	sub_825A1DA8(ctx, base);
loc_82B442F4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x8259cb28
	ctx.lr = 0x82B44308;
	sub_8259CB28(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r19,100
	ctx.r3.s64 = ctx.r19.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B44314;
	sub_82B42C30(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82b44340
	if (cr6.eq) goto loc_82B44340;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838adab0
	ctx.lr = 0x82B44330;
	sub_838ADAB0(ctx, base);
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825952b8
	ctx.lr = 0x82B44340;
	sub_825952B8(ctx, base);
loc_82B44340:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b4435c
	if (cr6.lt) goto loc_82B4435C;
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82B4435C;
	sub_825952B8(ctx, base);
loc_82B4435C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// blt cr6,0x82b44384
	if (cr6.lt) goto loc_82B44384;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B44384;
	sub_825952B8(ctx, base);
loc_82B44384:
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x82c16c98
	ctx.lr = 0x82B44398;
	sub_82C16C98(ctx, base);
loc_82B44398:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82B443A0:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83125548
	ctx.lr = 0x82B443B4;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b443c8
	if (cr6.lt) goto loc_82B443C8;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b443cc
	goto loc_82B443CC;
loc_82B443C8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B443CC:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,931
	ctx.r4.u64 = ctx.r4.u64 | 931;
	// bl 0x82d042a8
	ctx.lr = 0x82B443DC;
	sub_82D042A8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b443f8
	if (cr6.lt) goto loc_82B443F8;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82B443F8;
	sub_825952B8(ctx, base);
loc_82B443F8:
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// addi r4,r22,-4
	ctx.r4.s64 = ctx.r22.s64 + -4;
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B44414;
	sub_825A1EB8(ctx, base);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83125548
	ctx.lr = 0x82B44428;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b4443c
	if (cr6.lt) goto loc_82B4443C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b44440
	goto loc_82B44440;
loc_82B4443C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B44440:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,933
	ctx.r4.u64 = ctx.r4.u64 | 933;
	// bl 0x82d042a8
	ctx.lr = 0x82B44450;
	sub_82D042A8(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b4446c
	if (cr6.lt) goto loc_82B4446C;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82B4446C;
	sub_825952B8(ctx, base);
loc_82B4446C:
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r27.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B44490;
	sub_825A1DA8(ctx, base);
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// divw r30,r11,r10
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b442f4
	if (cr6.eq) goto loc_82B442F4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82B444AC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B444BC;
	sub_825A1EB8(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b444ec
	if (!cr6.gt) goto loc_82B444EC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B444D8;
	sub_825A1DA8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b444ac
	if (cr6.lt) goto loc_82B444AC;
	// b 0x82b442f4
	goto loc_82B442F4;
loc_82B444EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B444F8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B444F8"))) PPC_WEAK_FUNC(sub_82B444F8);
PPC_FUNC_IMPL(__imp__sub_82B444F8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b424f8
	ctx.lr = 0x82B44514;
	sub_82B424F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B4451C;
	sub_82B424F8(ctx, base);
	// lis r10,29
	ctx.r10.s64 = 1900544;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r8,r10,521
	ctx.r8.u64 = ctx.r10.u64 | 521;
	// ori r7,r9,53
	ctx.r7.u64 = ctx.r9.u64 | 53;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x82b44588
	if (cr6.eq) goto loc_82B44588;
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(ctx.r11.u32, 71, xer);
	// beq cr6,0x82b4456c
	if (cr6.eq) goto loc_82B4456C;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// bne cr6,0x82b445a8
	if (!cr6.eq) goto loc_82B445A8;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// ori r4,r4,927
	ctx.r4.u64 = ctx.r4.u64 | 927;
	// bl 0x82d04220
	ctx.lr = 0x82B44560;
	sub_82D04220(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,930
	ctx.r4.u64 = ctx.r4.u64 | 930;
	// b 0x82b445a0
	goto loc_82B445A0;
loc_82B4456C:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// ori r4,r4,926
	ctx.r4.u64 = ctx.r4.u64 | 926;
	// bl 0x82d04220
	ctx.lr = 0x82B4457C;
	sub_82D04220(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,929
	ctx.r4.u64 = ctx.r4.u64 | 929;
	// b 0x82b445a0
	goto loc_82B445A0;
loc_82B44588:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// ori r4,r4,925
	ctx.r4.u64 = ctx.r4.u64 | 925;
	// bl 0x82d04220
	ctx.lr = 0x82B44598;
	sub_82D04220(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,928
	ctx.r4.u64 = ctx.r4.u64 | 928;
loc_82B445A0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d04220
	ctx.lr = 0x82B445A8;
	sub_82D04220(ctx, base);
loc_82B445A8:
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b42c30
	ctx.lr = 0x82B445B8;
	sub_82B42C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b42c30
	ctx.lr = 0x82B445C4;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B445CC;
	sub_82C16C98(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82c16c98
	ctx.lr = 0x82B445D4;
	sub_82C16C98(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B445E8"))) PPC_WEAK_FUNC(sub_82B445E8);
PPC_FUNC_IMPL(__imp__sub_82B445E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B445F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82b424f8
	ctx.lr = 0x82B44600;
	sub_82B424F8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82b424f8
	ctx.lr = 0x82B44608;
	sub_82B424F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,29
	ctx.r10.s64 = 1900544;
	// addi r11,r11,-9712
	ctx.r11.s64 = ctx.r11.s64 + -9712;
	// lis r9,700
	ctx.r9.s64 = 45875200;
	// ori r8,r10,521
	ctx.r8.u64 = ctx.r10.u64 | 521;
	// addi r26,r11,6
	ctx.r26.s64 = ctx.r11.s64 + 6;
	// ori r7,r9,313
	ctx.r7.u64 = ctx.r9.u64 | 313;
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,274
	ctx.r10.s64 = 17956864;
	// stw r7,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// li r21,12
	ctx.r21.s64 = 12;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r23,r10,934
	ctx.r23.u64 = ctx.r10.u64 | 934;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r25,r11,-10909
	ctx.r25.s64 = ctx.r11.s64 + -10909;
loc_82B44650:
	// lwz r11,-6(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6);
	// lwz r10,96(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b449cc
	if (!cr6.eq) goto loc_82B449CC;
	// bl 0x831156e8
	ctx.lr = 0x82B44664;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,-2(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + -2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B44674;
	sub_8311C338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82B44684;
	sub_8311C338(ctx, base);
	// lwz r11,2(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b44818
	if (cr6.lt) goto loc_82B44818;
	// beq cr6,0x82b446b4
	if (cr6.eq) goto loc_82B446B4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b4498c
	if (!cr6.lt) goto loc_82B4498C;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// ori r4,r4,937
	ctx.r4.u64 = ctx.r4.u64 | 937;
	// bl 0x82d04220
	ctx.lr = 0x82B446B0;
	sub_82D04220(ctx, base);
	// b 0x82b4498c
	goto loc_82B4498C;
loc_82B446B4:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B446D0;
	sub_8259CC28(ctx, base);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83125548
	ctx.lr = 0x82B446E8;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b446fc
	if (cr6.lt) goto loc_82B446FC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b44700
	goto loc_82B44700;
loc_82B446FC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B44700:
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83125548
	ctx.lr = 0x82B44710;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44724
	if (cr6.lt) goto loc_82B44724;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b44728
	goto loc_82B44728;
loc_82B44724:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B44728:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82d042a8
	ctx.lr = 0x82B44738;
	sub_82D042A8(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44754
	if (cr6.lt) goto loc_82B44754;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82B44754;
	sub_825952B8(ctx, base);
loc_82B44754:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x82b4477c
	if (cr6.lt) goto loc_82B4477C;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82B4477C;
	sub_825952B8(ctx, base);
loc_82B4477C:
	// lwz r11,-6(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// beq cr6,0x82b447d8
	if (cr6.eq) goto loc_82B447D8;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x83125548
	ctx.lr = 0x82B447A8;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b447bc
	if (cr6.lt) goto loc_82B447BC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b447c0
	goto loc_82B447C0;
loc_82B447BC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B447C0:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,936
	ctx.r4.u64 = ctx.r4.u64 | 936;
	// bl 0x82d042a8
	ctx.lr = 0x82B447D0;
	sub_82D042A8(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8387e8e0
	ctx.lr = 0x82B447D8;
	sub_8387E8E0(ctx, base);
loc_82B447D8:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x825a1da8
	ctx.lr = 0x82B447EC;
	sub_825A1DA8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44808
	if (cr6.lt) goto loc_82B44808;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B44808;
	sub_825952B8(ctx, base);
loc_82B44808:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// b 0x82b4498c
	goto loc_82B4498C;
loc_82B44818:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r4,r25,-1
	ctx.r4.s64 = ctx.r25.s64 + -1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B44834;
	sub_8259CC28(ctx, base);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83125548
	ctx.lr = 0x82B4484C;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44860
	if (cr6.lt) goto loc_82B44860;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b44864
	goto loc_82B44864;
loc_82B44860:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B44864:
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83125548
	ctx.lr = 0x82B44874;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44888
	if (cr6.lt) goto loc_82B44888;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b4488c
	goto loc_82B4488C;
loc_82B44888:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B4488C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82d042a8
	ctx.lr = 0x82B4489C;
	sub_82D042A8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b448b8
	if (cr6.lt) goto loc_82B448B8;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82B448B8;
	sub_825952B8(ctx, base);
loc_82B448B8:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x82b448e0
	if (cr6.lt) goto loc_82B448E0;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B448E0;
	sub_825952B8(ctx, base);
loc_82B448E0:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r5,r1,85
	ctx.r5.s64 = ctx.r1.s64 + 85;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// bl 0x83125548
	ctx.lr = 0x82B44900;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44914
	if (cr6.lt) goto loc_82B44914;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b44918
	goto loc_82B44918;
loc_82B44914:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B44918:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,935
	ctx.r4.u64 = ctx.r4.u64 | 935;
	// bl 0x82d042a8
	ctx.lr = 0x82B44928;
	sub_82D042A8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44944
	if (cr6.lt) goto loc_82B44944;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B44944;
	sub_825952B8(ctx, base);
loc_82B44944:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x825a1da8
	ctx.lr = 0x82B44964;
	sub_825A1DA8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44980
	if (cr6.lt) goto loc_82B44980;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B44980;
	sub_825952B8(ctx, base);
loc_82B44980:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82B4498C:
	// lwz r11,6(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b449bc
	if (cr6.lt) goto loc_82B449BC;
	// beq cr6,0x82b449b0
	if (cr6.eq) goto loc_82B449B0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b449cc
	if (!cr6.lt) goto loc_82B449CC;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,940
	ctx.r4.u64 = ctx.r4.u64 | 940;
	// b 0x82b449c4
	goto loc_82B449C4;
loc_82B449B0:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,939
	ctx.r4.u64 = ctx.r4.u64 | 939;
	// b 0x82b449c4
	goto loc_82B449C4;
loc_82B449BC:
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r4,r4,938
	ctx.r4.u64 = ctx.r4.u64 | 938;
loc_82B449C4:
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// bl 0x82d04220
	ctx.lr = 0x82B449CC;
	sub_82D04220(ctx, base);
loc_82B449CC:
	// addic. r21,r21,-1
	xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	cr0.compare<int32_t>(ctx.r21.s32, 0, xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bne 0x82b44650
	if (!cr0.eq) goto loc_82B44650;
	// addi r31,r20,100
	ctx.r31.s64 = ctx.r20.s64 + 100;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b42c30
	ctx.lr = 0x82B449E8;
	sub_82B42C30(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b42c30
	ctx.lr = 0x82B449F4;
	sub_82B42C30(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82c16c98
	ctx.lr = 0x82B449FC;
	sub_82C16C98(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82c16c98
	ctx.lr = 0x82B44A04;
	sub_82C16C98(ctx, base);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B44A0C"))) PPC_WEAK_FUNC(sub_82B44A0C);
PPC_FUNC_IMPL(__imp__sub_82B44A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B44A10"))) PPC_WEAK_FUNC(sub_82B44A10);
PPC_FUNC_IMPL(__imp__sub_82B44A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B44A18;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b424f8
	ctx.lr = 0x82B44A28;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,200
	ctx.r10.u64 = ctx.r11.u64 | 200;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// addi r31,r9,-10819
	ctx.r31.s64 = ctx.r9.s64 + -10819;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// bl 0x8259cc28
	ctx.lr = 0x82B44A60;
	sub_8259CC28(ctx, base);
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r4,r4,195
	ctx.r4.u64 = ctx.r4.u64 | 195;
	// bl 0x82d042a8
	ctx.lr = 0x82B44A70;
	sub_82D042A8(ctx, base);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r4,r31,-71
	ctx.r4.s64 = ctx.r31.s64 + -71;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82B44A8C;
	sub_8259CC28(ctx, base);
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,196
	ctx.r4.u64 = ctx.r4.u64 | 196;
	// bl 0x82d042a8
	ctx.lr = 0x82B44A9C;
	sub_82D042A8(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r31,-70
	ctx.r4.s64 = ctx.r31.s64 + -70;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B44AB8;
	sub_8259CC28(ctx, base);
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,197
	ctx.r4.u64 = ctx.r4.u64 | 197;
	// bl 0x82d042a8
	ctx.lr = 0x82B44AC8;
	sub_82D042A8(ctx, base);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x82B44AE4;
	sub_8259CC28(ctx, base);
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,198
	ctx.r4.u64 = ctx.r4.u64 | 198;
	// bl 0x82d042a8
	ctx.lr = 0x82B44AF4;
	sub_82D042A8(ctx, base);
	// li r27,5
	ctx.r27.s64 = 5;
	// li r29,5
	ctx.r29.s64 = 5;
	// li r31,10
	ctx.r31.s64 = 10;
	// bl 0x82d86078
	ctx.lr = 0x82B44B04;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b44bbc
	if (cr6.eq) goto loc_82B44BBC;
	// bl 0x82d86078
	ctx.lr = 0x82B44B10;
	sub_82D86078(ctx, base);
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82B44B1C;
	sub_82DA24B0(ctx, base);
	// bl 0x835d31a8
	ctx.lr = 0x82B44B20;
	sub_835D31A8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b44b30
	if (!cr6.eq) goto loc_82B44B30;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x82b44b4c
	goto loc_82B44B4C;
loc_82B44B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82B44B38;
	sub_82DA24B0(ctx, base);
	// bl 0x835d31a8
	ctx.lr = 0x82B44B3C;
	sub_835D31A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r27,10
	ctx.r27.s64 = 10;
	// beq cr6,0x82b44b4c
	if (cr6.eq) goto loc_82B44B4C;
	// li r27,5
	ctx.r27.s64 = 5;
loc_82B44B4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82B44B54;
	sub_82DA24B0(ctx, base);
	// bl 0x835d3130
	ctx.lr = 0x82B44B58;
	sub_835D3130(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b44b68
	if (!cr6.eq) goto loc_82B44B68;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82b44b84
	goto loc_82B44B84;
loc_82B44B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82B44B70;
	sub_82DA24B0(ctx, base);
	// bl 0x835d3130
	ctx.lr = 0x82B44B74;
	sub_835D3130(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r29,10
	ctx.r29.s64 = 10;
	// beq cr6,0x82b44b84
	if (cr6.eq) goto loc_82B44B84;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82B44B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82B44B8C;
	sub_82DA24B0(ctx, base);
	// bl 0x835d3138
	ctx.lr = 0x82B44B90;
	sub_835D3138(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b44ba0
	if (!cr6.eq) goto loc_82B44BA0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82b44bbc
	goto loc_82B44BBC;
loc_82B44BA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82B44BA8;
	sub_82DA24B0(ctx, base);
	// bl 0x835d3138
	ctx.lr = 0x82B44BAC;
	sub_835D3138(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r31,10
	ctx.r31.s64 = 10;
	// beq cr6,0x82b44bbc
	if (cr6.eq) goto loc_82B44BBC;
	// li r31,5
	ctx.r31.s64 = 5;
loc_82B44BBC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bge cr6,0x82b44bd4
	if (!cr6.lt) goto loc_82B44BD4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82B44BD4:
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b44be8
	if (!cr6.lt) goto loc_82B44BE8;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
loc_82B44BE8:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b44bf4
	if (!cr6.lt) goto loc_82B44BF4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82B44BF4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// bge cr6,0x82b44c0c
	if (!cr6.lt) goto loc_82B44C0C;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
loc_82B44C0C:
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x82b44c20
	if (!cr6.lt) goto loc_82B44C20;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
loc_82B44C20:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b44c2c
	if (!cr6.lt) goto loc_82B44C2C;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
loc_82B44C2C:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// ori r4,r4,170
	ctx.r4.u64 = ctx.r4.u64 | 170;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82d042a8
	ctx.lr = 0x82B44C50;
	sub_82D042A8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B44C5C;
	sub_82B42C30(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44c7c
	if (cr6.lt) goto loc_82B44C7C;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B44C7C;
	sub_825952B8(ctx, base);
loc_82B44C7C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// blt cr6,0x82b44ca4
	if (cr6.lt) goto loc_82B44CA4;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B44CA4;
	sub_825952B8(ctx, base);
loc_82B44CA4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x82b44ccc
	if (cr6.lt) goto loc_82B44CCC;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B44CCC;
	sub_825952B8(ctx, base);
loc_82B44CCC:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// blt cr6,0x82b44cf4
	if (cr6.lt) goto loc_82B44CF4;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B44CF4;
	sub_825952B8(ctx, base);
loc_82B44CF4:
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// bl 0x82c16c98
	ctx.lr = 0x82B44D08;
	sub_82C16C98(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B44D10"))) PPC_WEAK_FUNC(sub_82B44D10);
PPC_FUNC_IMPL(__imp__sub_82B44D10) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B44D2C;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r10,r11,136
	ctx.r10.u64 = ctx.r11.u64 | 136;
	// ori r4,r4,108
	ctx.r4.u64 = ctx.r4.u64 | 108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d042a8
	ctx.lr = 0x82B44D48;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B44D54;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B44D5C;
	sub_82C16C98(ctx, base);
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

__attribute__((alias("__imp__sub_82B44D70"))) PPC_WEAK_FUNC(sub_82B44D70);
PPC_FUNC_IMPL(__imp__sub_82B44D70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B44D8C;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// ori r10,r11,91
	ctx.r10.u64 = ctx.r11.u64 | 91;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d95f98
	ctx.lr = 0x82B44D9C;
	sub_82D95F98(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// beq cr6,0x82b44db8
	if (cr6.eq) goto loc_82B44DB8;
	// ori r4,r4,104
	ctx.r4.u64 = ctx.r4.u64 | 104;
	// b 0x82b44dbc
	goto loc_82B44DBC;
loc_82B44DB8:
	// ori r4,r4,161
	ctx.r4.u64 = ctx.r4.u64 | 161;
loc_82B44DBC:
	// bl 0x82d042a8
	ctx.lr = 0x82B44DC0;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B44DCC;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B44DD4;
	sub_82C16C98(ctx, base);
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

__attribute__((alias("__imp__sub_82B44DE8"))) PPC_WEAK_FUNC(sub_82B44DE8);
PPC_FUNC_IMPL(__imp__sub_82B44DE8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B44E04;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r10,r11,137
	ctx.r10.u64 = ctx.r11.u64 | 137;
	// ori r4,r4,109
	ctx.r4.u64 = ctx.r4.u64 | 109;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d042a8
	ctx.lr = 0x82B44E20;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B44E2C;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B44E34;
	sub_82C16C98(ctx, base);
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

__attribute__((alias("__imp__sub_82B44E48"))) PPC_WEAK_FUNC(sub_82B44E48);
PPC_FUNC_IMPL(__imp__sub_82B44E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B44E50;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b424f8
	ctx.lr = 0x82B44E60;
	sub_82B424F8(ctx, base);
	// lis r11,513
	ctx.r11.s64 = 33619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,154
	ctx.r10.u64 = ctx.r11.u64 | 154;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r30,r9,-10316
	ctx.r30.s64 = ctx.r9.s64 + -10316;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r30,-502
	ctx.r4.s64 = ctx.r30.s64 + -502;
	// bl 0x8259cc28
	ctx.lr = 0x82B44E98;
	sub_8259CC28(ctx, base);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,151
	ctx.r4.u64 = ctx.r4.u64 | 151;
	// bl 0x82d042a8
	ctx.lr = 0x82B44EA8;
	sub_82D042A8(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r30,-501
	ctx.r4.s64 = ctx.r30.s64 + -501;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B44EC4;
	sub_8259CC28(ctx, base);
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
	// bl 0x82d042a8
	ctx.lr = 0x82B44ED4;
	sub_82D042A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ab6970
	ctx.lr = 0x82B44EE4;
	sub_82AB6970(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B44EF8;
	sub_825A1DA8(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a448
	ctx.lr = 0x82B44F10;
	sub_8292A448(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x8259cb28
	ctx.lr = 0x82B44F24;
	sub_8259CB28(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b44f44
	if (cr6.lt) goto loc_82B44F44;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B44F44;
	sub_825952B8(ctx, base);
loc_82B44F44:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82b44f6c
	if (cr6.lt) goto loc_82B44F6C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B44F6C;
	sub_825952B8(ctx, base);
loc_82B44F6C:
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82b42c30
	ctx.lr = 0x82B44F84;
	sub_82B42C30(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b44fa0
	if (cr6.lt) goto loc_82B44FA0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B44FA0;
	sub_825952B8(ctx, base);
loc_82B44FA0:
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
	// blt cr6,0x82b44fc8
	if (cr6.lt) goto loc_82B44FC8;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B44FC8;
	sub_825952B8(ctx, base);
loc_82B44FC8:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82c16c98
	ctx.lr = 0x82B44FDC;
	sub_82C16C98(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B44FE4"))) PPC_WEAK_FUNC(sub_82B44FE4);
PPC_FUNC_IMPL(__imp__sub_82B44FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B44FE8"))) PPC_WEAK_FUNC(sub_82B44FE8);
PPC_FUNC_IMPL(__imp__sub_82B44FE8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B45004;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// ori r10,r11,127
	ctx.r10.u64 = ctx.r11.u64 | 127;
	// ori r4,r4,908
	ctx.r4.u64 = ctx.r4.u64 | 908;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d042a8
	ctx.lr = 0x82B45020;
	sub_82D042A8(ctx, base);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,914
	ctx.r4.u64 = ctx.r4.u64 | 914;
	// bl 0x82d042a8
	ctx.lr = 0x82B45030;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B4503C;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B45044;
	sub_82C16C98(ctx, base);
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

__attribute__((alias("__imp__sub_82B45058"))) PPC_WEAK_FUNC(sub_82B45058);
PPC_FUNC_IMPL(__imp__sub_82B45058) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B45074;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r10,r11,101
	ctx.r10.u64 = ctx.r11.u64 | 101;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r4,r4,92
	ctx.r4.u64 = ctx.r4.u64 | 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d042a8
	ctx.lr = 0x82B45094;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B450A0;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B450A8;
	sub_82C16C98(ctx, base);
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

__attribute__((alias("__imp__sub_82B450BC"))) PPC_WEAK_FUNC(sub_82B450BC);
PPC_FUNC_IMPL(__imp__sub_82B450BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B450C0"))) PPC_WEAK_FUNC(sub_82B450C0);
PPC_FUNC_IMPL(__imp__sub_82B450C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B450DC;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r10,r11,139
	ctx.r10.u64 = ctx.r11.u64 | 139;
	// ori r4,r4,113
	ctx.r4.u64 = ctx.r4.u64 | 113;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d042a8
	ctx.lr = 0x82B450F8;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B45104;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B4510C;
	sub_82C16C98(ctx, base);
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

__attribute__((alias("__imp__sub_82B45120"))) PPC_WEAK_FUNC(sub_82B45120);
PPC_FUNC_IMPL(__imp__sub_82B45120) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B4513C;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r10,r11,138
	ctx.r10.u64 = ctx.r11.u64 | 138;
	// ori r4,r4,112
	ctx.r4.u64 = ctx.r4.u64 | 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d042a8
	ctx.lr = 0x82B45158;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B45164;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B4516C;
	sub_82C16C98(ctx, base);
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

__attribute__((alias("__imp__sub_82B45180"))) PPC_WEAK_FUNC(sub_82B45180);
PPC_FUNC_IMPL(__imp__sub_82B45180) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B4519C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r9,r10,40316
	ctx.r9.u64 = ctx.r10.u64 | 40316;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x8316b780
	ctx.lr = 0x82B451C0;
	sub_8316B780(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b421a8
	ctx.lr = 0x82B451CC;
	sub_82B421A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// beq cr6,0x82b451ec
	if (cr6.eq) goto loc_82B451EC;
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(ctx.r11.u32, 71, xer);
	// beq cr6,0x82b451ec
	if (cr6.eq) goto loc_82B451EC;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b451f0
	if (!cr6.eq) goto loc_82B451F0;
loc_82B451EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B451F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b45208
	if (cr6.eq) goto loc_82B45208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b444f8
	ctx.lr = 0x82B45204;
	sub_82B444F8(ctx, base);
	// b 0x82b4526c
	goto loc_82B4526C;
loc_82B45208:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83195c48
	ctx.lr = 0x82B45210;
	sub_83195C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b45228
	if (cr6.eq) goto loc_82B45228;
	// bl 0x82b445e8
	ctx.lr = 0x82B45224;
	sub_82B445E8(ctx, base);
	// b 0x82b4526c
	goto loc_82B4526C;
loc_82B45228:
	// bl 0x82b43080
	ctx.lr = 0x82B4522C;
	sub_82B43080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b43170
	ctx.lr = 0x82B45234;
	sub_82B43170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b434e8
	ctx.lr = 0x82B4523C;
	sub_82B434E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b435f0
	ctx.lr = 0x82B45244;
	sub_82B435F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b437e0
	ctx.lr = 0x82B4524C;
	sub_82B437E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b439b8
	ctx.lr = 0x82B45254;
	sub_82B439B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b43aa0
	ctx.lr = 0x82B4525C;
	sub_82B43AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b43c90
	ctx.lr = 0x82B45264;
	sub_82B43C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b44060
	ctx.lr = 0x82B4526C;
	sub_82B44060(ctx, base);
loc_82B4526C:
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

__attribute__((alias("__imp__sub_82B45284"))) PPC_WEAK_FUNC(sub_82B45284);
PPC_FUNC_IMPL(__imp__sub_82B45284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45288"))) PPC_WEAK_FUNC(sub_82B45288);
PPC_FUNC_IMPL(__imp__sub_82B45288) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d96060
	ctx.lr = 0x82B452A0;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b452d8
	if (!cr6.eq) goto loc_82B452D8;
	// bl 0x82b44a10
	ctx.lr = 0x82B452B4;
	sub_82B44A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b44d10
	ctx.lr = 0x82B452BC;
	sub_82B44D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b44d70
	ctx.lr = 0x82B452C4;
	sub_82B44D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b44de8
	ctx.lr = 0x82B452CC;
	sub_82B44DE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b44e48
	ctx.lr = 0x82B452D4;
	sub_82B44E48(ctx, base);
	// b 0x82b452ec
	goto loc_82B452EC;
loc_82B452D8:
	// bl 0x82b45058
	ctx.lr = 0x82B452DC;
	sub_82B45058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b450c0
	ctx.lr = 0x82B452E4;
	sub_82B450C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b45120
	ctx.lr = 0x82B452EC;
	sub_82B45120(ctx, base);
loc_82B452EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b424f8
	ctx.lr = 0x82B452F4;
	sub_82B424F8(ctx, base);
	// lis r11,509
	ctx.r11.s64 = 33357824;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r10,r11,211
	ctx.r10.u64 = ctx.r11.u64 | 211;
	// ori r4,r4,181
	ctx.r4.u64 = ctx.r4.u64 | 181;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d042a8
	ctx.lr = 0x82B45310;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b42c30
	ctx.lr = 0x82B4531C;
	sub_82B42C30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c16c98
	ctx.lr = 0x82B45324;
	sub_82C16C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b44fe8
	ctx.lr = 0x82B4532C;
	sub_82B44FE8(ctx, base);
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

__attribute__((alias("__imp__sub_82B45340"))) PPC_WEAK_FUNC(sub_82B45340);
PPC_FUNC_IMPL(__imp__sub_82B45340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B45348;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d34e50
	ctx.lr = 0x82B45354;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82B45358;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b45370
	if (!cr6.eq) goto loc_82B45370;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B45370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B45378;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r11,-10360
	ctx.r27.s64 = ctx.r11.s64 + -10360;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B45398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b4547c
	if (!cr6.eq) goto loc_82B4547C;
	// bl 0x831156e8
	ctx.lr = 0x82B453AC;
	sub_831156E8(ctx, base);
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,1
	ctx.r28.s64 = 1;
	// addis r29,r11,221
	ctx.r29.s64 = ctx.r11.s64 + 14483456;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r29,r29,-26512
	ctx.r29.s64 = ctx.r29.s64 + -26512;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b453f0
	if (!cr6.eq) goto loc_82B453F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82b453e8
	if (cr6.eq) goto loc_82B453E8;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
loc_82B453E8:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82B453F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a6aff8
	ctx.lr = 0x82B453FC;
	sub_82A6AFF8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b45410
	if (cr6.lt) goto loc_82B45410;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82B45410:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B45418;
	sub_837B0C10(ctx, base);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// lwz r10,1292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1292);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b45468
	if (!cr6.eq) goto loc_82B45468;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// stb r8,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r8.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82B45468;
	sub_8259CB28(ctx, base);
loc_82B45468:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B45470;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B45478;
	sub_8387E8E0(ctx, base);
	// b 0x82b4548c
	goto loc_82B4548C;
loc_82B4547C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B4548C;
	sub_82D2AEC8(ctx, base);
loc_82B4548C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B45494;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B454AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,605
	ctx.r4.u64 = ctx.r4.u64 | 605;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d30340
	ctx.lr = 0x82B454C0;
	sub_82D30340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30530
	ctx.lr = 0x82B454CC;
	sub_82D30530(ctx, base);
	// lbz r9,117(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 117);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b45510
	if (cr6.eq) goto loc_82B45510;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,604
	ctx.r4.u64 = ctx.r4.u64 | 604;
	// bl 0x82d303d0
	ctx.lr = 0x82B454E8;
	sub_82D303D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b42ea8
	ctx.lr = 0x82B454F0;
	sub_82B42EA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30530
	ctx.lr = 0x82B454FC;
	sub_82D30530(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B4550C;
	sub_82D19788(ctx, base);
	// b 0x82b45554
	goto loc_82B45554;
loc_82B45510:
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b45528
	if (cr6.eq) goto loc_82B45528;
	// bl 0x82b45288
	ctx.lr = 0x82B45524;
	sub_82B45288(ctx, base);
	// b 0x82b4552c
	goto loc_82B4552C;
loc_82B45528:
	// bl 0x82b45180
	ctx.lr = 0x82B4552C;
	sub_82B45180(ctx, base);
loc_82B4552C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b42350
	ctx.lr = 0x82B45534;
	sub_82B42350(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B45544;
	sub_82D19788(ctx, base);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,45
	ctx.r4.u64 = ctx.r4.u64 | 45;
	// bl 0x82d303d0
	ctx.lr = 0x82B45554;
	sub_82D303D0(ctx, base);
loc_82B45554:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b42588
	ctx.lr = 0x82B45560;
	sub_82B42588(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4556C"))) PPC_WEAK_FUNC(sub_82B4556C);
PPC_FUNC_IMPL(__imp__sub_82B4556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45570"))) PPC_WEAK_FUNC(sub_82B45570);
PPC_FUNC_IMPL(__imp__sub_82B45570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B45578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b455b0
	if (!cr6.eq) goto loc_82B455B0;
	// bl 0x82d19a78
	ctx.lr = 0x82B45594;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,2668
	ctx.r10.s64 = ctx.r11.s64 + 2668;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82b455c8
	goto loc_82B455C8;
loc_82B455B0:
	// bl 0x82d19a78
	ctx.lr = 0x82B455B4;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,2668(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2668);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B455C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x82B455D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B455D8;
	sub_82D19A78(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-8760
	ctx.r4.s64 = ctx.r11.s64 + -8760;
	// bl 0x82d2f098
	ctx.lr = 0x82B455E4;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B455F0;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B455FC;
	sub_82D19A88(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b4563c
	if (!cr6.eq) goto loc_82B4563C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B45624;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B45634;
	sub_82D19788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B4563C:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b45680
	if (!cr6.eq) goto loc_82B45680;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,537
	ctx.r5.u64 = ctx.r5.u64 | 537;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B45668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B45678;
	sub_82D19788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B45680:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B45690;
	sub_82D19788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B45698"))) PPC_WEAK_FUNC(sub_82B45698);
PPC_FUNC_IMPL(__imp__sub_82B45698) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B456B8;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B456C4;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B456D4;
	sub_82D2D510(ctx, base);
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

__attribute__((alias("__imp__sub_82B456EC"))) PPC_WEAK_FUNC(sub_82B456EC);
PPC_FUNC_IMPL(__imp__sub_82B456EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B456F0"))) PPC_WEAK_FUNC(sub_82B456F0);
PPC_FUNC_IMPL(__imp__sub_82B456F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B456F8;
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
	// bl 0x831156e8
	ctx.lr = 0x82B4570C;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45718;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,-8740
	ctx.r4.s64 = ctx.r10.s64 + -8740;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B45738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45748
	if (cr6.eq) goto loc_82B45748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B45748;
	sub_82D29598(ctx, base);
loc_82B45748:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B45750"))) PPC_WEAK_FUNC(sub_82B45750);
PPC_FUNC_IMPL(__imp__sub_82B45750) {
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
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45800
	if (cr6.eq) goto loc_82B45800;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b457d4
	if (cr6.lt) goto loc_82B457D4;
	// beq cr6,0x82b457bc
	if (cr6.eq) goto loc_82B457BC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b45800
	if (!cr6.lt) goto loc_82B45800;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bdf720
	ctx.lr = 0x82B45798;
	sub_82BDF720(ctx, base);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B457B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// b 0x82b45800
	goto loc_82B45800;
loc_82B457BC:
	// bl 0x82bdf6a0
	ctx.lr = 0x82B457C0;
	sub_82BDF6A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b45800
	if (cr6.eq) goto loc_82B45800;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82b457fc
	goto loc_82B457FC;
loc_82B457D4:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82d39cd0
	ctx.lr = 0x82B457DC;
	sub_82D39CD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82be0158
	ctx.lr = 0x82B457EC;
	sub_82BE0158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b45800
	if (cr6.eq) goto loc_82B45800;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B457FC:
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82B45800:
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

__attribute__((alias("__imp__sub_82B45818"))) PPC_WEAK_FUNC(sub_82B45818);
PPC_FUNC_IMPL(__imp__sub_82B45818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B45820;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45830;
	sub_831156E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B4583C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45844;
	sub_831156E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45850;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B45860;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b45910
	if (cr6.eq) goto loc_82B45910;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45910
	if (cr6.eq) goto loc_82B45910;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ori r5,r5,53
	ctx.r5.u64 = ctx.r5.u64 | 53;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b456f0
	ctx.lr = 0x82B45888;
	sub_82B456F0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,-9244
	ctx.r11.s64 = ctx.r11.s64 + -9244;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B45898:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B458A4;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b45898
	if (!cr0.eq) goto loc_82B45898;
	// bl 0x831156e8
	ctx.lr = 0x82B458B0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r10,r11,221
	ctx.r10.s64 = ctx.r11.s64 + 14483456;
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// lwz r11,1104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82b458f8
	if (cr6.eq) goto loc_82B458F8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b458f8
	if (cr6.eq) goto loc_82B458F8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82b4590c
	if (!cr6.eq) goto loc_82B4590C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B458E4;
	sub_82D3B298(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r27.u32);
	// stb r11,112(r29)
	PPC_STORE_U8(ctx.r29.u32 + 112, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B458F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B45904;
	sub_82D3B298(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,112(r29)
	PPC_STORE_U8(ctx.r29.u32 + 112, ctx.r11.u8);
loc_82B4590C:
	// stw r27,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r27.u32);
loc_82B45910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B45918"))) PPC_WEAK_FUNC(sub_82B45918);
PPC_FUNC_IMPL(__imp__sub_82B45918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B45920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45930;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B4593C;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45944;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45950;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B45960;
	sub_82D2D510(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45968;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45974;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r28,r10,-8740
	ctx.r28.s64 = ctx.r10.s64 + -8740;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B45998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b459ac
	if (cr6.eq) goto loc_82B459AC;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x82d29598
	ctx.lr = 0x82B459AC;
	sub_82D29598(ctx, base);
loc_82B459AC:
	// addi r29,r28,-512
	ctx.r29.s64 = ctx.r28.s64 + -512;
loc_82B459B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d3b620
	ctx.lr = 0x82B459BC;
	sub_82D3B620(ctx, base);
	// addi r11,r28,-512
	ctx.r11.s64 = ctx.r28.s64 + -512;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82b459b0
	if (cr6.lt) goto loc_82B459B0;
	// bl 0x831156e8
	ctx.lr = 0x82B459D4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addis r11,r11,221
	ctx.r11.s64 = ctx.r11.s64 + 14483456;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// lbz r10,1120(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1120);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82b45a18
	if (cr6.gt) goto loc_82B45A18;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d3b298
	ctx.lr = 0x82B459F8;
	sub_82D3B298(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B45A0C;
	sub_82D2B608(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B45A18:
	// lbz r4,1116(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1116);
	// bl 0x82d3b298
	ctx.lr = 0x82B45A20;
	sub_82D3B298(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B45A2C"))) PPC_WEAK_FUNC(sub_82B45A2C);
PPC_FUNC_IMPL(__imp__sub_82B45A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45A30"))) PPC_WEAK_FUNC(sub_82B45A30);
PPC_FUNC_IMPL(__imp__sub_82B45A30) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B45A40;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r3,221
	ctx.r11.s64 = ctx.r3.s64 + 14483456;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b45a70
	if (!cr6.eq) goto loc_82B45A70;
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x8311bf00
	ctx.lr = 0x82B45A60;
	sub_8311BF00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B45A70:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r4,99
	ctx.r4.s64 = 99;
	// beq cr6,0x82b45a80
	if (cr6.eq) goto loc_82B45A80;
	// li r4,48
	ctx.r4.s64 = 48;
loc_82B45A80:
	// bl 0x8311bf00
	ctx.lr = 0x82B45A84;
	sub_8311BF00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B45A94"))) PPC_WEAK_FUNC(sub_82B45A94);
PPC_FUNC_IMPL(__imp__sub_82B45A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45A98"))) PPC_WEAK_FUNC(sub_82B45A98);
PPC_FUNC_IMPL(__imp__sub_82B45A98) {
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
	// lwz r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45AB8;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45AC4;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B45AD4;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45b04
	if (cr6.eq) goto loc_82B45B04;
	// bl 0x83a970c8
	ctx.lr = 0x82B45AE0;
	sub_83A970C8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-9244
	ctx.r9.s64 = ctx.r11.s64 + -9244;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 | 56;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
loc_82B45B04:
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

__attribute__((alias("__imp__sub_82B45B1C"))) PPC_WEAK_FUNC(sub_82B45B1C);
PPC_FUNC_IMPL(__imp__sub_82B45B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45B20"))) PPC_WEAK_FUNC(sub_82B45B20);
PPC_FUNC_IMPL(__imp__sub_82B45B20) {
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
	// lwz r30,172(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45B40;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45B4C;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B45B5C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45bac
	if (cr6.eq) goto loc_82B45BAC;
	// bl 0x83a970c8
	ctx.lr = 0x82B45B68;
	sub_83A970C8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82b45b8c
	if (cr6.gt) goto loc_82B45B8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B45B8C;
	sub_831CC188(ctx, base);
loc_82B45B8C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b45bac
	if (cr6.eq) goto loc_82B45BAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
loc_82B45BAC:
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

__attribute__((alias("__imp__sub_82B45BC4"))) PPC_WEAK_FUNC(sub_82B45BC4);
PPC_FUNC_IMPL(__imp__sub_82B45BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45BC8"))) PPC_WEAK_FUNC(sub_82B45BC8);
PPC_FUNC_IMPL(__imp__sub_82B45BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B45BD0;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b45d48
	if (cr6.eq) goto loc_82B45D48;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d3b3f8
	ctx.lr = 0x82B45BF0;
	sub_82D3B3F8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82B45BF8;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,40128
	ctx.r9.u64 = ctx.r11.u64 | 40128;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82b45c78
	if (!cr6.eq) goto loc_82B45C78;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-8744
	ctx.r30.s64 = ctx.r11.s64 + -8744;
	// addi r31,r30,-384
	ctx.r31.s64 = ctx.r30.s64 + -384;
loc_82B45C20:
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573118
	ctx.lr = 0x82B45C34;
	sub_82573118(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B45C40;
	sub_82D3B548(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b45c54
	if (!cr6.eq) goto loc_82B45C54;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82B45C54:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// blt cr6,0x82b45c20
	if (cr6.lt) goto loc_82B45C20;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B45C70;
	sub_82D3B298(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B45C78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b45a98
	ctx.lr = 0x82B45C80;
	sub_82B45A98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-8744
	ctx.r30.s64 = ctx.r11.s64 + -8744;
	// beq cr6,0x82b45cf4
	if (cr6.eq) goto loc_82B45CF4;
	// addi r31,r30,-492
	ctx.r31.s64 = ctx.r30.s64 + -492;
loc_82B45C9C:
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573118
	ctx.lr = 0x82B45CB0;
	sub_82573118(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B45CBC;
	sub_82D3B548(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b45cd0
	if (!cr6.eq) goto loc_82B45CD0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82B45CD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// blt cr6,0x82b45c9c
	if (cr6.lt) goto loc_82B45C9C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B45CEC;
	sub_82D3B298(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B45CF4:
	// addi r31,r30,-464
	ctx.r31.s64 = ctx.r30.s64 + -464;
loc_82B45CF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573118
	ctx.lr = 0x82B45D0C;
	sub_82573118(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B45D18;
	sub_82D3B548(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b45d2c
	if (!cr6.eq) goto loc_82B45D2C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82B45D2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,20
	cr6.compare<uint32_t>(ctx.r29.u32, 20, xer);
	// blt cr6,0x82b45cf8
	if (cr6.lt) goto loc_82B45CF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B45D48;
	sub_82D3B298(ctx, base);
loc_82B45D48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B45D50"))) PPC_WEAK_FUNC(sub_82B45D50);
PPC_FUNC_IMPL(__imp__sub_82B45D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B45D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45D68;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45D74;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45D7C;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45D88;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B45D98;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b45dec
	if (cr6.eq) goto loc_82B45DEC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45dec
	if (cr6.eq) goto loc_82B45DEC;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b456f0
	ctx.lr = 0x82B45DC0;
	sub_82B456F0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B45DC4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r9,r10,40144
	ctx.r9.u64 = ctx.r10.u64 | 40144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lbzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82b45bc8
	ctx.lr = 0x82B45DE8;
	sub_82B45BC8(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_82B45DEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B45DF4"))) PPC_WEAK_FUNC(sub_82B45DF4);
PPC_FUNC_IMPL(__imp__sub_82B45DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45DF8"))) PPC_WEAK_FUNC(sub_82B45DF8);
PPC_FUNC_IMPL(__imp__sub_82B45DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B45E00;
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
	ctx.lr = 0x82B45E14;
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
	ctx.lr = 0x82B45E2C;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-8544
	ctx.r8.s64 = ctx.r11.s64 + -8544;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// ori r6,r9,65535
	ctx.r6.u64 = ctx.r9.u64 | 65535;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r9,r31,152
	ctx.r9.s64 = ctx.r31.s64 + 152;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// stw r5,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
loc_82B45E98:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b45e98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B45E98;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2832(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// bl 0x82d20ae0
	ctx.lr = 0x82B45EB0;
	sub_82D20AE0(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2648(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2648);
	// bl 0x82d20ae0
	ctx.lr = 0x82B45EC0;
	sub_82D20AE0(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-8804
	ctx.r4.s64 = ctx.r9.s64 + -8804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B45ED4;
	sub_82D23390(ctx, base);
	// bl 0x82bdfa98
	ctx.lr = 0x82B45ED8;
	sub_82BDFA98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b45ef4
	if (cr6.eq) goto loc_82B45EF4;
	// bl 0x83103100
	ctx.lr = 0x82B45EF0;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B45EF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B45EFC"))) PPC_WEAK_FUNC(sub_82B45EFC);
PPC_FUNC_IMPL(__imp__sub_82B45EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45F00"))) PPC_WEAK_FUNC(sub_82B45F00);
PPC_FUNC_IMPL(__imp__sub_82B45F00) {
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
	// addi r9,r11,-8544
	ctx.r9.s64 = ctx.r11.s64 + -8544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45f40
	if (cr6.eq) goto loc_82B45F40;
	// bl 0x82416268
	ctx.lr = 0x82B45F40;
	sub_82416268(ctx, base);
loc_82B45F40:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b45f60
	if (cr6.eq) goto loc_82B45F60;
	// bl 0x82416268
	ctx.lr = 0x82B45F60;
	sub_82416268(ctx, base);
loc_82B45F60:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B45F74;
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

__attribute__((alias("__imp__sub_82B45F8C"))) PPC_WEAK_FUNC(sub_82B45F8C);
PPC_FUNC_IMPL(__imp__sub_82B45F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B45F90"))) PPC_WEAK_FUNC(sub_82B45F90);
PPC_FUNC_IMPL(__imp__sub_82B45F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B45F98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B45FA4;
	sub_831156E8(ctx, base);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// lwz r31,160(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// ori r29,r10,39024
	ctx.r29.u64 = ctx.r10.u64 | 39024;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// add r28,r9,r29
	ctx.r28.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r27,r11,-9020
	ctx.r27.s64 = ctx.r11.s64 + -9020;
	// ble cr6,0x82b46028
	if (!cr6.gt) goto loc_82B46028;
	// bl 0x831156e8
	ctx.lr = 0x82B45FCC;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B45FD8;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B45FE8;
	sub_82D2D510(ctx, base);
	// bl 0x83a970c8
	ctx.lr = 0x82B45FEC;
	sub_83A970C8(ctx, base);
	// addi r11,r27,-224
	ctx.r11.s64 = ctx.r27.s64 + -224;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,56
	ctx.r8.u64 = ctx.r9.u64 | 56;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b46020
	if (cr6.eq) goto loc_82B46020;
	// lis r10,930
	ctx.r10.s64 = 60948480;
	// ori r9,r10,40
	ctx.r9.u64 = ctx.r10.u64 | 40;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b46028
	if (!cr6.eq) goto loc_82B46028;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82b46024
	goto loc_82B46024;
loc_82B46020:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82B46024:
	// stw r11,1104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1104, ctx.r11.u32);
loc_82B46028:
	// bl 0x831156e8
	ctx.lr = 0x82B4602C;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b46048
	if (!cr6.eq) goto loc_82B46048;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82b46058
	goto loc_82B46058;
loc_82B46048:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r4,99
	ctx.r4.s64 = 99;
	// beq cr6,0x82b46058
	if (cr6.eq) goto loc_82B46058;
	// li r4,48
	ctx.r4.s64 = 48;
loc_82B46058:
	// bl 0x8311bf00
	ctx.lr = 0x82B4605C;
	sub_8311BF00(ctx, base);
	// lwz r31,152(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// ble cr6,0x82b46154
	if (!cr6.gt) goto loc_82B46154;
	// bl 0x831156e8
	ctx.lr = 0x82B46070;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B4607C;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B4608C;
	sub_82D2D510(ctx, base);
	// lwz r11,1104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b460c0
	if (!cr6.eq) goto loc_82B460C0;
	// bl 0x83a970c8
	ctx.lr = 0x82B460A0;
	sub_83A970C8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,-108
	ctx.r10.s64 = ctx.r27.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stb r9,1120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1120, ctx.r9.u8);
	// bl 0x83a970c8
	ctx.lr = 0x82B460B8;
	sub_83A970C8(ctx, base);
	// addi r7,r27,-108
	ctx.r7.s64 = ctx.r27.s64 + -108;
	// b 0x82b46140
	goto loc_82B46140;
loc_82B460C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b45a98
	ctx.lr = 0x82B460C8;
	sub_82B45A98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b46120
	if (cr6.eq) goto loc_82B46120;
	// bl 0x83a970c8
	ctx.lr = 0x82B460DC;
	sub_83A970C8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,-216
	ctx.r10.s64 = ctx.r27.s64 + -216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stb r9,1120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1120, ctx.r9.u8);
	// bl 0x83a970c8
	ctx.lr = 0x82B460F4;
	sub_83A970C8(ctx, base);
	// addi r7,r27,-216
	ctx.r7.s64 = ctx.r27.s64 + -216;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,540(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// lwz r4,536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwimi r5,r3,9,16,22
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r3.u32, 9) & 0xFE00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF01FF);
	// rlwinm r11,r5,21,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0xFF;
	// rlwimi r4,r11,2,25,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x7C) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF83);
	// rlwinm r10,r4,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 536, ctx.r10.u32);
	// b 0x82b46150
	goto loc_82B46150;
loc_82B46120:
	// bl 0x83a970c8
	ctx.lr = 0x82B46124;
	sub_83A970C8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,-188
	ctx.r10.s64 = ctx.r27.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stb r9,1120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1120, ctx.r9.u8);
	// bl 0x83a970c8
	ctx.lr = 0x82B4613C;
	sub_83A970C8(ctx, base);
	// addi r7,r27,-188
	ctx.r7.s64 = ctx.r27.s64 + -188;
loc_82B46140:
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,540(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwimi r5,r4,9,16,22
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 9) & 0xFE00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF01FF);
loc_82B46150:
	// stw r5,540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 540, ctx.r5.u32);
loc_82B46154:
	// lwz r31,156(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// ble cr6,0x82b46190
	if (!cr6.gt) goto loc_82B46190;
	// bl 0x831156e8
	ctx.lr = 0x82B46164;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B46170;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B46180;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b46190
	if (cr6.eq) goto loc_82B46190;
	// bl 0x83a970c8
	ctx.lr = 0x82B4618C;
	sub_83A970C8(ctx, base);
	// stw r3,1108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1108, ctx.r3.u32);
loc_82B46190:
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// ble cr6,0x82b461a4
	if (!cr6.gt) goto loc_82B461A4;
	// lwz r11,1112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1112);
	// stw r11,524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 524, ctx.r11.u32);
loc_82B461A4:
	// lwz r31,168(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// ble cr6,0x82b461f0
	if (!cr6.gt) goto loc_82B461F0;
	// bl 0x831156e8
	ctx.lr = 0x82B461B4;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B461C0;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B461D0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b461f0
	if (cr6.eq) goto loc_82B461F0;
	// bl 0x83a970c8
	ctx.lr = 0x82B461DC;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82b461ec
	if (cr6.eq) goto loc_82B461EC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B461EC:
	// stb r11,1116(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1116, ctx.r11.u8);
loc_82B461F0:
	// lwz r31,172(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// ble cr6,0x82b46250
	if (!cr6.gt) goto loc_82B46250;
	// bl 0x831156e8
	ctx.lr = 0x82B46200;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B4620C;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B4621C;
	sub_82D2D510(ctx, base);
	// bl 0x83a970c8
	ctx.lr = 0x82B46220;
	sub_83A970C8(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82b46244
	if (cr6.gt) goto loc_82B46244;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B46244;
	sub_831CC188(ctx, base);
loc_82B46244:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// sth r9,1118(r28)
	PPC_STORE_U16(ctx.r28.u32 + 1118, ctx.r9.u16);
loc_82B46250:
	// lwz r31,176(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// ble cr6,0x82b4628c
	if (!cr6.gt) goto loc_82B4628C;
	// bl 0x831156e8
	ctx.lr = 0x82B46260;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B4626C;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B4627C;
	sub_82D2D510(ctx, base);
	// bl 0x83a970c8
	ctx.lr = 0x82B46280;
	sub_83A970C8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 528, ctx.r10.u32);
loc_82B4628C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B46298"))) PPC_WEAK_FUNC(sub_82B46298);
PPC_FUNC_IMPL(__imp__sub_82B46298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B462A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B462AC;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r29,221
	ctx.r31.s64 = ctx.r29.s64 + 14483456;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// bl 0x82f00728
	ctx.lr = 0x82B462BC;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b46368
	if (cr6.eq) goto loc_82B46368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b45a30
	ctx.lr = 0x82B462CC;
	sub_82B45A30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b46368
	if (cr6.eq) goto loc_82B46368;
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r3,r29,236
	ctx.r3.s64 = ctx.r29.s64 + 15466496;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r3,19252
	ctx.r3.s64 = ctx.r3.s64 + 19252;
	// bl 0x8312a278
	ctx.lr = 0x82B462FC;
	sub_8312A278(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b46360
	if (cr0.eq) goto loc_82B46360;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82b4633c
	if (!cr6.eq) goto loc_82B4633C;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,528(r28)
	PPC_STORE_U32(ctx.r28.u32 + 528, ctx.r9.u32);
	// b 0x82b46358
	goto loc_82B46358;
loc_82B4633C:
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r30,1116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1116, ctx.r30.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// stw r9,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r9.u32);
loc_82B46358:
	// stw r8,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r8.u32);
	// sth r11,1118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1118, ctx.r11.u16);
loc_82B46360:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9af88
	ctx.lr = 0x82B46368;
	sub_82D9AF88(ctx, base);
loc_82B46368:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B46370"))) PPC_WEAK_FUNC(sub_82B46370);
PPC_FUNC_IMPL(__imp__sub_82B46370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B46378;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B46388;
	sub_831156E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B46394;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B4639C;
	sub_831156E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B463A8;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B463B8;
	sub_82D2D510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// beq cr6,0x82b4648c
	if (cr6.eq) goto loc_82B4648C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4648c
	if (cr6.eq) goto loc_82B4648C;
	// lis r5,106
	ctx.r5.s64 = 6946816;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,9
	ctx.r5.u64 = ctx.r5.u64 | 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b456f0
	ctx.lr = 0x82B463F4;
	sub_82B456F0(ctx, base);
	// li r31,3
	ctx.r31.s64 = 3;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82B46410:
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,97
	ctx.r4.u64 = ctx.r4.u64 | 97;
	// bl 0x82d042a8
	ctx.lr = 0x82B46424;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b46438
	if (!cr6.lt) goto loc_82B46438;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82B46438:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B46440;
	sub_82D3B548(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82b46410
	if (!cr0.eq) goto loc_82B46410;
	// bl 0x831156e8
	ctx.lr = 0x82B46450;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r9,r10,40132
	ctx.r9.u64 = ctx.r10.u64 | 40132;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82d3b298
	ctx.lr = 0x82B4646C;
	sub_82D3B298(ctx, base);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r28.u32);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82b4648c
	if (cr6.lt) goto loc_82B4648C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B4648C;
	sub_825952B8(ctx, base);
loc_82B4648C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B46494"))) PPC_WEAK_FUNC(sub_82B46494);
PPC_FUNC_IMPL(__imp__sub_82B46494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B46498"))) PPC_WEAK_FUNC(sub_82B46498);
PPC_FUNC_IMPL(__imp__sub_82B46498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B464A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B464B0;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B464BC;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B464C4;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B464D0;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B464E0;
	sub_82D2D510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x82b465e8
	if (cr6.eq) goto loc_82B465E8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b465e8
	if (cr6.eq) goto loc_82B465E8;
	// bl 0x831156e8
	ctx.lr = 0x82B46508;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addis r26,r11,221
	ctx.r26.s64 = ctx.r11.s64 + 14483456;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r26,-26512
	ctx.r26.s64 = ctx.r26.s64 + -26512;
	// bl 0x82d21408
	ctx.lr = 0x82B46528;
	sub_82D21408(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,-8640
	ctx.r27.s64 = ctx.r11.s64 + -8640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B4654C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B46560;
	sub_82D233B0(ctx, base);
	// lwz r28,1112(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1112);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82b46584
	if (!cr6.eq) goto loc_82B46584;
	// lwz r11,1104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1104);
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82b46580
	if (cr6.eq) goto loc_82B46580;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B46580:
	// stw r28,1112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1112, ctx.r28.u32);
loc_82B46584:
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,515
	ctx.r5.u64 = ctx.r5.u64 | 515;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b456f0
	ctx.lr = 0x82B46598;
	sub_82B456F0(ctx, base);
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,97
	ctx.r4.u64 = ctx.r4.u64 | 97;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82B465AC;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B465C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b465dc
	if (cr6.eq) goto loc_82B465DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d291e0
	ctx.lr = 0x82B465DC;
	sub_82D291E0(ctx, base);
loc_82B465DC:
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B465E8;
	sub_8387E8E0(ctx, base);
loc_82B465E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B465F0"))) PPC_WEAK_FUNC(sub_82B465F0);
PPC_FUNC_IMPL(__imp__sub_82B465F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B465F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B46608;
	sub_831156E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B46614;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B4661C;
	sub_831156E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B46628;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B46638;
	sub_82D2D510(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x82b4674c
	if (cr6.eq) goto loc_82B4674C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4674c
	if (cr6.eq) goto loc_82B4674C;
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ori r5,r5,589
	ctx.r5.u64 = ctx.r5.u64 | 589;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b456f0
	ctx.lr = 0x82B46674;
	sub_82B456F0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B46678:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,97
	ctx.r4.u64 = ctx.r4.u64 | 97;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B46690;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b466a4
	if (!cr6.lt) goto loc_82B466A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B466A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B466AC;
	sub_82D3B548(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82b46678
	if (cr6.lt) goto loc_82B46678;
	// bl 0x831156e8
	ctx.lr = 0x82B466BC;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r3,221
	ctx.r11.s64 = ctx.r3.s64 + 14483456;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b466dc
	if (!cr6.eq) goto loc_82B466DC;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82b466ec
	goto loc_82B466EC;
loc_82B466DC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r4,99
	ctx.r4.s64 = 99;
	// beq cr6,0x82b466ec
	if (cr6.eq) goto loc_82B466EC;
	// li r4,48
	ctx.r4.s64 = 48;
loc_82B466EC:
	// bl 0x8311bf00
	ctx.lr = 0x82B466F0;
	sub_8311BF00(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,528(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-9020
	ctx.r11.s64 = ctx.r11.s64 + -9020;
loc_82B46700:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82b46720
	if (cr6.eq) goto loc_82B46720;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// blt cr6,0x82b46700
	if (cr6.lt) goto loc_82B46700;
	// b 0x82b46728
	goto loc_82B46728;
loc_82B46720:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B46728;
	sub_82D3B298(ctx, base);
loc_82B46728:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b4674c
	if (cr6.lt) goto loc_82B4674C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B4674C;
	sub_825952B8(ctx, base);
loc_82B4674C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B46754"))) PPC_WEAK_FUNC(sub_82B46754);
PPC_FUNC_IMPL(__imp__sub_82B46754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B46758"))) PPC_WEAK_FUNC(sub_82B46758);
PPC_FUNC_IMPL(__imp__sub_82B46758) {
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
	// blt cr6,0x82b46780
	if (cr6.lt) goto loc_82B46780;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b46784
	goto loc_82B46784;
loc_82B46780:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B46784:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,180
	ctx.r4.s64 = 180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B467A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b467bc
	if (cr6.eq) goto loc_82B467BC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b45df8
	ctx.lr = 0x82B467B4;
	sub_82B45DF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b467c0
	if (!cr6.eq) goto loc_82B467C0;
loc_82B467BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B467C0:
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

__attribute__((alias("__imp__sub_82B467D8"))) PPC_WEAK_FUNC(sub_82B467D8);
PPC_FUNC_IMPL(__imp__sub_82B467D8) {
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
	// bl 0x82b45f00
	ctx.lr = 0x82B467F8;
	sub_82B45F00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b46810
	if (cr6.eq) goto loc_82B46810;
	// bl 0x82416268
	ctx.lr = 0x82B4680C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B46810:
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

__attribute__((alias("__imp__sub_82B46828"))) PPC_WEAK_FUNC(sub_82B46828);
PPC_FUNC_IMPL(__imp__sub_82B46828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B46830;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,172(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B46840;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B4684C;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B4685C;
	sub_82D2D510(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B46868;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,2672
	ctx.r30.s64 = ctx.r11.s64 + 2672;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B46888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4689c
	if (cr6.eq) goto loc_82B4689C;
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x82d3a058
	ctx.lr = 0x82B4689C;
	sub_82D3A058(ctx, base);
loc_82B4689C:
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b46ac4
	if (cr6.eq) goto loc_82B46AC4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B468C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,144(r22)
	PPC_STORE_U32(ctx.r22.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b46ac4
	if (cr6.eq) goto loc_82B46AC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B468E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r22,120
	ctx.r30.s64 = ctx.r22.s64 + 120;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82f04c50
	ctx.lr = 0x82B468FC;
	sub_82F04C50(ctx, base);
	// lwz r9,124(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 124);
	// lwz r8,120(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 120);
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// srawi. r24,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq 0x82b46a08
	if (cr0.eq) goto loc_82B46A08;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r25,r11,-9469
	ctx.r25.s64 = ctx.r11.s64 + -9469;
	// addi r29,r10,2804
	ctx.r29.s64 = ctx.r10.s64 + 2804;
loc_82B46938:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B46954;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b46a64
	if (!cr6.gt) goto loc_82B46A64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82f048a8
	ctx.lr = 0x82B4697C;
	sub_82F048A8(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b46990
	if (cr6.lt) goto loc_82B46990;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82b46994
	goto loc_82B46994;
loc_82B46990:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82B46994:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x827a8810
	ctx.lr = 0x82B469A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b469b4
	if (!cr6.eq) goto loc_82B469B4;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_82B469B4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b469c8
	if (!cr6.lt) goto loc_82B469C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B469C8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B469D0;
	sub_82D3B548(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b469ec
	if (cr6.lt) goto loc_82B469EC;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B469EC;
	sub_825952B8(ctx, base);
loc_82B469EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b46938
	if (cr6.lt) goto loc_82B46938;
loc_82B46A08:
	// bl 0x831156e8
	ctx.lr = 0x82B46A0C;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addis r7,r10,221
	ctx.r7.s64 = ctx.r10.s64 + 14483456;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// addi r7,r7,-26512
	ctx.r7.s64 = ctx.r7.s64 + -26512;
	// beq cr6,0x82b46a80
	if (cr6.eq) goto loc_82B46A80;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82B46A30:
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b46a70
	if (!cr6.gt) goto loc_82B46A70;
	// lhz r6,1118(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 1118);
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b46a7c
	if (cr6.eq) goto loc_82B46A7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b46a30
	if (cr6.lt) goto loc_82B46A30;
	// b 0x82b46a80
	goto loc_82B46A80;
loc_82B46A64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B46A70;
	sub_831CC188(ctx, base);
loc_82B46A70:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B46A7C;
	sub_831CC188(ctx, base);
loc_82B46A7C:
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82B46A80:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B46A8C;
	sub_82D3B298(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b46ac4
	if (cr0.eq) goto loc_82B46AC4;
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, xer);
	// bgt cr6,0x82b46ab4
	if (cr6.gt) goto loc_82B46AB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B46AB4;
	sub_831CC188(ctx, base);
loc_82B46AB4:
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r26,136(r22)
	PPC_STORE_U32(ctx.r22.u32 + 136, ctx.r26.u32);
	// stw r9,116(r22)
	PPC_STORE_U32(ctx.r22.u32 + 116, ctx.r9.u32);
loc_82B46AC4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B46ACC"))) PPC_WEAK_FUNC(sub_82B46ACC);
PPC_FUNC_IMPL(__imp__sub_82B46ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B46AD0"))) PPC_WEAK_FUNC(sub_82B46AD0);
PPC_FUNC_IMPL(__imp__sub_82B46AD0) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B46AF0;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82d33db0
	ctx.lr = 0x82B46AFC;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,-8740
	ctx.r4.s64 = ctx.r10.s64 + -8740;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B46B1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b46b30
	if (cr6.eq) goto loc_82B46B30;
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// ori r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 | 48;
	// bl 0x82d29598
	ctx.lr = 0x82B46B30;
	sub_82D29598(ctx, base);
loc_82B46B30:
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b46828
	ctx.lr = 0x82B46B3C;
	sub_82B46828(ctx, base);
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

__attribute__((alias("__imp__sub_82B46B54"))) PPC_WEAK_FUNC(sub_82B46B54);
PPC_FUNC_IMPL(__imp__sub_82B46B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

