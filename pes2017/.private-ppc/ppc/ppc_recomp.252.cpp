#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8302AB04"))) PPC_WEAK_FUNC(sub_8302AB04);
PPC_FUNC_IMPL(__imp__sub_8302AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302AB08"))) PPC_WEAK_FUNC(sub_8302AB08);
PPC_FUNC_IMPL(__imp__sub_8302AB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8302AB10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302AB24;
	sub_83061E98(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stb r29,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r29.u8);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,29480
	ctx.r4.s64 = ctx.r10.s64 + 29480;
	// addi r3,r7,-17088
	ctx.r3.s64 = ctx.r7.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// and r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r11.u8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302AB78"))) PPC_WEAK_FUNC(sub_8302AB78);
PPC_FUNC_IMPL(__imp__sub_8302AB78) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// bne cr6,0x8302abd0
	if (!cr6.eq) goto loc_8302ABD0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302abe0
	if (!cr6.eq) goto loc_8302ABE0;
	// bl 0x82d17d90
	ctx.lr = 0x8302ABB8;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x8302abe0
	goto loc_8302ABE0;
loc_8302ABD0:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302abe0
	if (!cr6.eq) goto loc_8302ABE0;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302ABE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8302ABEC;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_8302AC04"))) PPC_WEAK_FUNC(sub_8302AC04);
PPC_FUNC_IMPL(__imp__sub_8302AC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302AC08"))) PPC_WEAK_FUNC(sub_8302AC08);
PPC_FUNC_IMPL(__imp__sub_8302AC08) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302ac2c
	if (cr6.lt) goto loc_8302AC2C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302ac30
	goto loc_8302AC30;
loc_8302AC2C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8302AC30:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302AC48;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302ac68
	if (cr6.eq) goto loc_8302AC68;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8302ab08
	ctx.lr = 0x8302AC60;
	sub_8302AB08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302ac6c
	if (!cr6.eq) goto loc_8302AC6C;
loc_8302AC68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302AC6C:
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

__attribute__((alias("__imp__sub_8302AC80"))) PPC_WEAK_FUNC(sub_8302AC80);
PPC_FUNC_IMPL(__imp__sub_8302AC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8302AC88;
	__savegprlr_27(ctx, base);
	// stwu r1,-2400(r1)
	ea = -2400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302AC98;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302acf8
	if (!cr6.eq) goto loc_8302ACF8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,29388
	ctx.r11.s64 = ctx.r11.s64 + 29388;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x8302ACB8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302ACC4;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302ace4
	if (cr6.lt) goto loc_8302ACE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302ACE4;
	sub_825952B8(ctx, base);
loc_8302ACE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302ACF8:
	// bl 0x831156e8
	ctx.lr = 0x8302ACFC;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302ad40
	if (!cr6.eq) goto loc_8302AD40;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,29388
	ctx.r11.s64 = ctx.r11.s64 + 29388;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x8302AD18;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302AD24;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8302AD2C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302AD40:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r31,116(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8302b1c4
	if (cr6.gt) goto loc_8302B1C4;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21144
	ctx.r12.s64 = ctx.r12.s64 + -21144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8302AD90;
	case 1:
		goto loc_8302B0EC;
	case 2:
		goto loc_8302AE64;
	case 3:
		goto loc_8302AF1C;
	case 4:
		goto loc_8302AFB4;
	case 5:
		goto loc_8302B0AC;
	case 6:
		goto loc_8302B018;
	case 7:
		goto loc_8302B0EC;
	case 8:
		goto loc_8302B0F8;
	case 9:
		goto loc_8302B134;
	default:
		return;
	}
	// lwz r24,-21104(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21104);
	// lwz r24,-20244(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20244);
	// lwz r24,-20892(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20892);
	// lwz r24,-20708(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20708);
	// lwz r24,-20556(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20556);
	// lwz r24,-20308(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20308);
	// lwz r24,-20456(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20456);
	// lwz r24,-20244(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20244);
	// lwz r24,-20232(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20232);
	// lwz r24,-20172(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20172);
loc_8302AD90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302AD98;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302ADA4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8302ADA8;
	sub_83102DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8302ADB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97758
	ctx.lr = 0x8302ADC0;
	sub_82D97758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302adf4
	if (cr6.eq) goto loc_8302ADF4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302ADD4;
	sub_82D9A868(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302adf0
	if (!cr6.eq) goto loc_8302ADF0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// blt cr6,0x8302adb4
	if (cr6.lt) goto loc_8302ADB4;
	// b 0x8302adf4
	goto loc_8302ADF4;
loc_8302ADF0:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8302ADF4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302ae50
	if (cr6.eq) goto loc_8302AE50;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,29388
	ctx.r11.s64 = ctx.r11.s64 + 29388;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8302AE20;
	sub_82D2F6D8(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// bl 0x82d2ada8
	ctx.lr = 0x8302AE30;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302AE3C;
	sub_83103100(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302AE50:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302AE64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302AE6C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8302AE70;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302AE7C;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8302AE88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97758
	ctx.lr = 0x8302AE94;
	sub_82D97758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302aed0
	if (cr6.eq) goto loc_8302AED0;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r11.u32);
	// bl 0x82d9a868
	ctx.lr = 0x8302AEB4;
	sub_82D9A868(ctx, base);
	// lbz r10,66(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8302aec4
	if (cr6.eq) goto loc_8302AEC4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8302AEC4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// blt cr6,0x8302ae88
	if (cr6.lt) goto loc_8302AE88;
loc_8302AED0:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r31,r27,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r27.s64;
	// bl 0x825832e0
	ctx.lr = 0x8302AEE0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302AEEC;
	sub_82D9A868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9a628
	ctx.lr = 0x8302AEF4;
	sub_82D9A628(ctx, base);
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// li r9,18
	ctx.r9.s64 = 18;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// stw r6,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r6.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302AF1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302AF24;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302AF30;
	sub_825832E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82b54cc0
	ctx.lr = 0x8302AF3C;
	sub_82B54CC0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x831cdcf0
	ctx.lr = 0x8302AF54;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302AF5C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8302AF60;
	sub_83102DB0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,288
	ctx.r30.s64 = ctx.r1.s64 + 288;
loc_8302AF68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97758
	ctx.lr = 0x8302AF74;
	sub_82D97758(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302af8c
	if (cr6.eq) goto loc_8302AF8C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// blt cr6,0x8302af68
	if (cr6.lt) goto loc_8302AF68;
loc_8302AF8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302AF94;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302AFA0;
	sub_82DA4370(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302AFB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302AFBC;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302AFC4;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b0ec
	if (cr6.eq) goto loc_8302B0EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302AFD8;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302aff8
	if (cr6.eq) goto loc_8302AFF8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302AFF8:
	// bl 0x82d26ed8
	ctx.lr = 0x8302AFFC;
	sub_82D26ED8(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x82d26b18
	ctx.lr = 0x8302B004;
	sub_82D26B18(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302B018:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b030
	if (cr6.eq) goto loc_8302B030;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82d84728
	ctx.lr = 0x8302B030;
	sub_82D84728(ctx, base);
loc_8302B030:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r31,r11,29388
	ctx.r31.s64 = ctx.r11.s64 + 29388;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,-56
	ctx.r3.s64 = ctx.r31.s64 + -56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302B04C;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-306
	ctx.r4.s64 = ctx.r31.s64 + -306;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302B05C;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// ori r4,r4,366
	ctx.r4.u64 = ctx.r4.u64 | 366;
	// bl 0x82d042a8
	ctx.lr = 0x8302B070;
	sub_82D042A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x8302B07C;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302B088;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r9,102(r29)
	PPC_STORE_U8(ctx.r29.u32 + 102, ctx.r9.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x8302B0A0;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302B0AC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,29388
	ctx.r11.s64 = ctx.r11.s64 + 29388;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302B0C8;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,364
	ctx.r4.u64 = ctx.r4.u64 | 364;
	// bl 0x82d2ada8
	ctx.lr = 0x8302B0D8;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302B0E4;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
loc_8302B0EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302B0F8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,29388
	ctx.r11.s64 = ctx.r11.s64 + 29388;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302B10C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B118;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B120;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302B134:
	// lbz r11,101(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b188
	if (cr6.eq) goto loc_8302B188;
	// lbz r11,102(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 102);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b188
	if (cr6.eq) goto loc_8302B188;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,29388
	ctx.r11.s64 = ctx.r11.s64 + 29388;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302B160;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B16C;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B174;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302B188:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,29388
	ctx.r11.s64 = ctx.r11.s64 + 29388;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302B19C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B1A8;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B1B0;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302B1C4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,29388
	ctx.r4.s64 = ctx.r11.s64 + 29388;
	// bl 0x837b0c10
	ctx.lr = 0x8302B1D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B1E0;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B1E8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302B1FC"))) PPC_WEAK_FUNC(sub_8302B1FC);
PPC_FUNC_IMPL(__imp__sub_8302B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302B200"))) PPC_WEAK_FUNC(sub_8302B200);
PPC_FUNC_IMPL(__imp__sub_8302B200) {
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
	ctx.lr = 0x8302B210;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302b23c
	if (cr6.eq) goto loc_8302B23C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8302B220;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x8302B224;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302b238
	if (!cr6.eq) goto loc_8302B238;
	// li r3,254
	ctx.r3.s64 = 254;
loc_8302B238:
	// bl 0x82d84728
	ctx.lr = 0x8302B23C;
	sub_82D84728(ctx, base);
loc_8302B23C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302B24C"))) PPC_WEAK_FUNC(sub_8302B24C);
PPC_FUNC_IMPL(__imp__sub_8302B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302B250"))) PPC_WEAK_FUNC(sub_8302B250);
PPC_FUNC_IMPL(__imp__sub_8302B250) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302B280;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302b2c8
	if (cr6.eq) goto loc_8302B2C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302B294;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,30032
	ctx.r8.s64 = ctx.r10.s64 + 30032;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// b 0x8302b2cc
	goto loc_8302B2CC;
loc_8302B2C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302B2CC:
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

__attribute__((alias("__imp__sub_8302B2E4"))) PPC_WEAK_FUNC(sub_8302B2E4);
PPC_FUNC_IMPL(__imp__sub_8302B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302B2E8"))) PPC_WEAK_FUNC(sub_8302B2E8);
PPC_FUNC_IMPL(__imp__sub_8302B2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302b2f8
	if (cr6.lt) goto loc_8302B2F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302B2F8:
	// b 0x8302b250
	sub_8302B250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302B2FC"))) PPC_WEAK_FUNC(sub_8302B2FC);
PPC_FUNC_IMPL(__imp__sub_8302B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302B300"))) PPC_WEAK_FUNC(sub_8302B300);
PPC_FUNC_IMPL(__imp__sub_8302B300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8302B308;
	__savegprlr_24(ctx, base);
	// stwu r1,-2400(r1)
	ea = -2400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302B318;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302b378
	if (!cr6.eq) goto loc_8302B378;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,29940
	ctx.r11.s64 = ctx.r11.s64 + 29940;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x8302B338;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B344;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302b364
	if (cr6.lt) goto loc_8302B364;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302B364;
	sub_825952B8(ctx, base);
loc_8302B364:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B378:
	// bl 0x831156e8
	ctx.lr = 0x8302B37C;
	sub_831156E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302b3bc
	if (!cr6.eq) goto loc_8302B3BC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,29940
	ctx.r11.s64 = ctx.r11.s64 + 29940;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x8302B39C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B3A8;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B3B0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B3BC:
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r31,116(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8302b968
	if (cr6.gt) goto loc_8302B968;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19484
	ctx.r12.s64 = ctx.r12.s64 + -19484;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8302B40C;
	case 1:
		goto loc_8302B8E4;
	case 2:
		goto loc_8302B5BC;
	case 3:
		goto loc_8302B6C0;
	case 4:
		goto loc_8302B750;
	case 5:
		goto loc_8302B8E4;
	case 6:
		goto loc_8302B8A4;
	case 7:
		goto loc_8302B8E4;
	case 8:
		goto loc_8302B8F0;
	case 9:
		goto loc_8302B92C;
	default:
		return;
	}
	// lwz r24,-19444(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -19444);
	// lwz r24,-18204(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r24,-19012(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -19012);
	// lwz r24,-18752(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18752);
	// lwz r24,-18608(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18608);
	// lwz r24,-18204(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r24,-18268(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18268);
	// lwz r24,-18204(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18204);
	// lwz r24,-18192(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18192);
	// lwz r24,-18132(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18132);
loc_8302B40C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302B414;
	sub_82DAB6D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302B420;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x8302B428;
	sub_83102DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d97758
	ctx.lr = 0x8302B438;
	sub_82D97758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x8302B444;
	sub_83102DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302B44C;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302b46c
	if (!cr6.eq) goto loc_8302B46C;
loc_8302B458:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B46C:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r27.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8302B480:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d97758
	ctx.lr = 0x8302B48C;
	sub_82D97758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302b50c
	if (cr6.eq) goto loc_8302B50C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302B4A0;
	sub_82D9A868(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b4b8
	if (cr6.eq) goto loc_8302B4B8;
	// stb r27,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r27.u8);
	// b 0x8302b500
	goto loc_8302B500;
loc_8302B4B8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// cmplwi cr6,r11,8910
	cr6.compare<uint32_t>(ctx.r11.u32, 8910, xer);
	// ble cr6,0x8302b4d0
	if (!cr6.gt) goto loc_8302B4D0;
	// stb r27,105(r28)
	PPC_STORE_U8(ctx.r28.u32 + 105, ctx.r27.u8);
	// b 0x8302b500
	goto loc_8302B500;
loc_8302B4D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d975e8
	ctx.lr = 0x8302B4D8;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b4ec
	if (cr6.eq) goto loc_8302B4EC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x8302b4f0
	goto loc_8302B4F0;
loc_8302B4EC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_8302B4F0:
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
loc_8302B500:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// blt cr6,0x8302b480
	if (cr6.lt) goto loc_8302B480;
loc_8302B50C:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302b52c
	if (!cr6.eq) goto loc_8302B52C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B52C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r31,r11,29940
	ctx.r31.s64 = ctx.r11.s64 + 29940;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8302B54C;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-298
	ctx.r4.s64 = ctx.r31.s64 + -298;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8302B55C;
	sub_837B0C10(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d975e8
	ctx.lr = 0x8302B564;
	sub_82D975E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8302b584
	if (cr6.eq) goto loc_8302B584;
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x8302b588
	goto loc_8302B588;
loc_8302B584:
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
loc_8302B588:
	// bl 0x82d042a8
	ctx.lr = 0x8302B58C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302B598;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x8302B5A4;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B5AC;
	sub_8387E8E0(ctx, base);
	// stw r27,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B5BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302B5C4;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302B5D0;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8302B5D4;
	sub_83102DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302B5E0;
	sub_825832E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b54cc0
	ctx.lr = 0x8302B5EC;
	sub_82B54CC0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x831cdcf0
	ctx.lr = 0x8302B604;
	sub_831CDCF0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stb r27,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r27.u8);
	// stw r27,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r27.u32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_8302B618:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97758
	ctx.lr = 0x8302B624;
	sub_82D97758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302b68c
	if (cr6.eq) goto loc_8302B68C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302B63C;
	sub_82D9A868(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b650
	if (cr6.eq) goto loc_8302B650;
	// stb r27,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r27.u8);
	// b 0x8302b680
	goto loc_8302B680;
loc_8302B650:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// cmplwi cr6,r11,8910
	cr6.compare<uint32_t>(ctx.r11.u32, 8910, xer);
	// ble cr6,0x8302b668
	if (!cr6.gt) goto loc_8302B668;
	// stb r27,105(r28)
	PPC_STORE_U8(ctx.r28.u32 + 105, ctx.r27.u8);
	// b 0x8302b680
	goto loc_8302B680;
loc_8302B668:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r10,r1,260
	ctx.r10.s64 = ctx.r1.s64 + 260;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r8.u32);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
loc_8302B680:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// blt cr6,0x8302b618
	if (cr6.lt) goto loc_8302B618;
loc_8302B68C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975e8
	ctx.lr = 0x8302B694;
	sub_82D975E8(ctx, base);
	// stb r3,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r3.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302B6A0;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302B6AC;
	sub_82DA4370(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302B6C8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302B6D0;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b8e4
	if (cr6.eq) goto loc_8302B8E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302B6E4;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302b458
	if (!cr6.eq) goto loc_8302B458;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8302b200
	ctx.lr = 0x8302B6F8;
	sub_8302B200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302B700;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x8302B704;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b730
	if (cr6.eq) goto loc_8302B730;
	// bl 0x82d26ed8
	ctx.lr = 0x8302B714;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x8302B71C;
	sub_82D26B18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B730:
	// bl 0x82d26ed8
	ctx.lr = 0x8302B734;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82d26b18
	ctx.lr = 0x8302B73C;
	sub_82D26B18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302B758;
	sub_82DAB6D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,29940
	ctx.r30.s64 = ctx.r11.s64 + 29940;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-48
	ctx.r3.s64 = ctx.r30.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302B778;
	sub_82D2FA90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r30,-297
	ctx.r4.s64 = ctx.r30.s64 + -297;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8302B788;
	sub_837B0C10(ctx, base);
	// lwz r5,100(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lbz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 104);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x8302b84c
	if (!cr6.eq) goto loc_8302B84C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b7b0
	if (cr6.eq) goto loc_8302B7B0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8302B7A8:
	// ori r4,r4,368
	ctx.r4.u64 = ctx.r4.u64 | 368;
	// b 0x8302b868
	goto loc_8302B868;
loc_8302B7B0:
	// lbz r11,105(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 105);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302b7cc
	if (cr6.eq) goto loc_8302B7CC;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8302B7C4:
	// ori r4,r4,367
	ctx.r4.u64 = ctx.r4.u64 | 367;
	// b 0x8302b868
	goto loc_8302B868;
loc_8302B7CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302B7D4;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8302B7D8;
	sub_83102DB0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8302B7E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d97758
	ctx.lr = 0x8302B7F0;
	sub_82D97758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302B800;
	sub_82D9A868(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8302b81c
	if (cr6.eq) goto loc_8302B81C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// cmplwi cr6,r11,8910
	cr6.compare<uint32_t>(ctx.r11.u32, 8910, xer);
	// blt cr6,0x8302b828
	if (cr6.lt) goto loc_8302B828;
loc_8302B81C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// blt cr6,0x8302b7e4
	if (cr6.lt) goto loc_8302B7E4;
loc_8302B828:
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// sth r27,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r27.u16);
	// lwz r3,48(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8311bf98
	ctx.lr = 0x8302B83C;
	sub_8311BF98(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// b 0x8302b868
	goto loc_8302B868;
loc_8302B84C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// bne cr6,0x8302b7a8
	if (!cr6.eq) goto loc_8302B7A8;
	// lbz r11,105(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 105);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302b7c4
	if (!cr6.eq) goto loc_8302B7C4;
	// ori r4,r4,365
	ctx.r4.u64 = ctx.r4.u64 | 365;
loc_8302B868:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x8302B870;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302B87C;
	sub_82D2AAB0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x8302B888;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B890;
	sub_8387E8E0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B8A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,29940
	ctx.r11.s64 = ctx.r11.s64 + 29940;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302B8C0;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,161
	ctx.r4.u64 = ctx.r4.u64 | 161;
	// bl 0x82d2ada8
	ctx.lr = 0x8302B8D0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x8302B8DC;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r10.u32);
loc_8302B8E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B8F0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,29940
	ctx.r11.s64 = ctx.r11.s64 + 29940;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302B904;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B910;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B918;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B92C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,29940
	ctx.r11.s64 = ctx.r11.s64 + 29940;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302B940;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B94C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B954;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302B968:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,29940
	ctx.r4.s64 = ctx.r11.s64 + 29940;
	// bl 0x837b0c10
	ctx.lr = 0x8302B978;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302B984;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302B98C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302B9A0"))) PPC_WEAK_FUNC(sub_8302B9A0);
PPC_FUNC_IMPL(__imp__sub_8302B9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8302B9A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302B9BC;
	sub_83061E98(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stb r29,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r29.u8);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,30592
	ctx.r4.s64 = ctx.r10.s64 + 30592;
	// addi r3,r7,-17088
	ctx.r3.s64 = ctx.r7.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// and r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302BA0C"))) PPC_WEAK_FUNC(sub_8302BA0C);
PPC_FUNC_IMPL(__imp__sub_8302BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302BA10"))) PPC_WEAK_FUNC(sub_8302BA10);
PPC_FUNC_IMPL(__imp__sub_8302BA10) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302ba34
	if (cr6.lt) goto loc_8302BA34;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302ba38
	goto loc_8302BA38;
loc_8302BA34:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8302BA38:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302BA50;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302ba70
	if (cr6.eq) goto loc_8302BA70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8302b9a0
	ctx.lr = 0x8302BA68;
	sub_8302B9A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302ba74
	if (!cr6.eq) goto loc_8302BA74;
loc_8302BA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302BA74:
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

__attribute__((alias("__imp__sub_8302BA88"))) PPC_WEAK_FUNC(sub_8302BA88);
PPC_FUNC_IMPL(__imp__sub_8302BA88) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302baac
	if (cr6.lt) goto loc_8302BAAC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302bab0
	goto loc_8302BAB0;
loc_8302BAAC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8302BAB0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302BAC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302bae8
	if (cr6.eq) goto loc_8302BAE8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8302b9a0
	ctx.lr = 0x8302BAE0;
	sub_8302B9A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302baec
	if (!cr6.eq) goto loc_8302BAEC;
loc_8302BAE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302BAEC:
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

__attribute__((alias("__imp__sub_8302BB00"))) PPC_WEAK_FUNC(sub_8302BB00);
PPC_FUNC_IMPL(__imp__sub_8302BB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8302BB08;
	__savegprlr_28(ctx, base);
	// stwu r1,-2864(r1)
	ea = -2864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302BB18;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302bb78
	if (!cr6.eq) goto loc_8302BB78;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,30500
	ctx.r11.s64 = ctx.r11.s64 + 30500;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x8302BB38;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302BB44;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302bb64
	if (cr6.lt) goto loc_8302BB64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302BB64;
	sub_825952B8(ctx, base);
loc_8302BB64:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BB78:
	// bl 0x831156e8
	ctx.lr = 0x8302BB7C;
	sub_831156E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302bbc4
	if (!cr6.eq) goto loc_8302BBC4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,30500
	ctx.r11.s64 = ctx.r11.s64 + 30500;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x8302BB9C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302BBA8;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8302BBB0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BBC4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8302c000
	if (cr6.gt) goto loc_8302C000;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17428
	ctx.r12.s64 = ctx.r12.s64 + -17428;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8302BC14;
	case 1:
		goto loc_8302BF28;
	case 2:
		goto loc_8302BCF4;
	case 3:
		goto loc_8302BD64;
	case 4:
		goto loc_8302BDD0;
	case 5:
		goto loc_8302BEE8;
	case 6:
		goto loc_8302BE20;
	case 7:
		goto loc_8302BF28;
	case 8:
		goto loc_8302BF34;
	case 9:
		goto loc_8302BF70;
	default:
		return;
	}
	// lwz r24,-17388(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17388);
	// lwz r24,-16600(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16600);
	// lwz r24,-17164(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17164);
	// lwz r24,-17052(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -17052);
	// lwz r24,-16944(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16944);
	// lwz r24,-16664(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16664);
	// lwz r24,-16864(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16864);
	// lwz r24,-16600(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16600);
	// lwz r24,-16588(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16588);
	// lwz r24,-16528(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -16528);
loc_8302BC14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302BC1C;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302BC28;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x8302BC34;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x8302BC40;
	sub_83102DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302BC48;
	sub_82D9A868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d8d258
	ctx.lr = 0x8302BC58;
	sub_82D8D258(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302bc78
	if (!cr6.eq) goto loc_8302BC78;
loc_8302BC64:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BC78:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,30500
	ctx.r29.s64 = ctx.r11.s64 + 30500;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r29,-72
	ctx.r3.s64 = ctx.r29.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8302BC98;
	sub_82D2F6D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-306
	ctx.r4.s64 = ctx.r29.s64 + -306;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302BCA8;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x8302BCC0;
	sub_82D042A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x8302BCCC;
	sub_82D2AAB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302BCD8;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8302BCE0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BCF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302BCFC;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8302BD00;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302BD0C;
	sub_82DAB6D0(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8302BD10;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a868
	ctx.lr = 0x8302BD1C;
	sub_82D9A868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a628
	ctx.lr = 0x8302BD28;
	sub_82D9A628(ctx, base);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// bgt cr6,0x8302bd50
	if (cr6.gt) goto loc_8302BD50;
	// lbz r11,66(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302bd50
	if (!cr6.eq) goto loc_8302BD50;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BD50:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BD64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302BD6C;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302BD78;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82b54cc0
	ctx.lr = 0x8302BD84;
	sub_82B54CC0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// bl 0x831cdcf0
	ctx.lr = 0x8302BD9C;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x8302BDA4;
	sub_825832E0(ctx, base);
	// stw r3,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302BDB0;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302BDBC;
	sub_82DA4370(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BDD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302BDD8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302BDE0;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302bf28
	if (cr6.eq) goto loc_8302BF28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302BDF4;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302bc64
	if (!cr6.eq) goto loc_8302BC64;
	// bl 0x82d26ed8
	ctx.lr = 0x8302BE04;
	sub_82D26ED8(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x82d26b18
	ctx.lr = 0x8302BE0C;
	sub_82D26B18(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BE20:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302be38
	if (cr6.eq) goto loc_8302BE38;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82d84728
	ctx.lr = 0x8302BE38;
	sub_82D84728(ctx, base);
loc_8302BE38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302BE40;
	sub_82DAB6D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// bl 0x825832e0
	ctx.lr = 0x8302BE4C;
	sub_825832E0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8311bf98
	ctx.lr = 0x8302BE5C;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x8302BE6C;
	sub_831CE980(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r10,30500
	ctx.r30.s64 = ctx.r10.s64 + 30500;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,-56
	ctx.r3.s64 = ctx.r30.s64 + -56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302BE88;
	sub_82D2FA90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-305
	ctx.r4.s64 = ctx.r30.s64 + -305;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302BE98;
	sub_837B0C10(ctx, base);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// addi r5,r1,584
	ctx.r5.s64 = ctx.r1.s64 + 584;
	// ori r4,r4,263
	ctx.r4.u64 = ctx.r4.u64 | 263;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x8302BEAC;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x8302BEB8;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302BEC4;
	sub_83103100(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r8,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r8.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x8302BEDC;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BEE8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,30500
	ctx.r11.s64 = ctx.r11.s64 + 30500;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302BF04;
	sub_82D2FA90(ctx, base);
	// lis r4,31
	ctx.r4.s64 = 2031616;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d2ada8
	ctx.lr = 0x8302BF14;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302BF20;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_8302BF28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BF34:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,30500
	ctx.r11.s64 = ctx.r11.s64 + 30500;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302BF48;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302BF54;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x8302BF5C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BF70:
	// lbz r11,101(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302bfc4
	if (cr6.eq) goto loc_8302BFC4;
	// lbz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 102);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302bfc4
	if (cr6.eq) goto loc_8302BFC4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,30500
	ctx.r11.s64 = ctx.r11.s64 + 30500;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302BF9C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302BFA8;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8302BFB0;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302BFC4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,30500
	ctx.r11.s64 = ctx.r11.s64 + 30500;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302BFD8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302BFE4;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x8302BFEC;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302C000:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,30500
	ctx.r4.s64 = ctx.r11.s64 + 30500;
	// bl 0x837b0c10
	ctx.lr = 0x8302C010;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302C01C;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8302C024;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302C038"))) PPC_WEAK_FUNC(sub_8302C038);
PPC_FUNC_IMPL(__imp__sub_8302C038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8302c060
	if (!cr6.eq) goto loc_8302C060;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_8302C060:
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8302c0b0
	if (cr6.eq) goto loc_8302C0B0;
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// ori r8,r9,3
	ctx.r8.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8302c0b0
	if (cr6.eq) goto loc_8302C0B0;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// ori r8,r9,5
	ctx.r8.u64 = ctx.r9.u64 | 5;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8302c0a8
	if (!cr6.eq) goto loc_8302C0A8;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8302c0a8
	if (!cr6.eq) goto loc_8302C0A8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_8302C0A8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
loc_8302C0B0:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302C0BC"))) PPC_WEAK_FUNC(sub_8302C0BC);
PPC_FUNC_IMPL(__imp__sub_8302C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C0C0"))) PPC_WEAK_FUNC(sub_8302C0C0);
PPC_FUNC_IMPL(__imp__sub_8302C0C0) {
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
	ctx.lr = 0x8302C0D4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302c0f4
	if (!cr6.eq) goto loc_8302C0F4;
loc_8302C0DC:
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
loc_8302C0F4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x8302C0FC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302C100;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x8302C104;
	sub_825832F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302c0dc
	if (cr6.eq) goto loc_8302C0DC;
	// bl 0x82d98820
	ctx.lr = 0x8302C114;
	sub_82D98820(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// blt cr6,0x8302c0dc
	if (cr6.lt) goto loc_8302C0DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98830
	ctx.lr = 0x8302C124;
	sub_82D98830(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_8302C148"))) PPC_WEAK_FUNC(sub_8302C148);
PPC_FUNC_IMPL(__imp__sub_8302C148) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,31096
	ctx.r9.s64 = ctx.r11.s64 + 31096;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x83072d48
	ctx.lr = 0x8302C17C;
	sub_83072D48(ctx, base);
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8302c1a0
	if (cr6.lt) goto loc_8302C1A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302C1A0;
	sub_825952B8(ctx, base);
loc_8302C1A0:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r7,r10,-19088
	ctx.r7.s64 = ctx.r10.s64 + -19088;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// bl 0x82f42278
	ctx.lr = 0x8302C1D4;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_8302C1EC"))) PPC_WEAK_FUNC(sub_8302C1EC);
PPC_FUNC_IMPL(__imp__sub_8302C1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C1F0"))) PPC_WEAK_FUNC(sub_8302C1F0);
PPC_FUNC_IMPL(__imp__sub_8302C1F0) {
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
	// bl 0x8302c148
	ctx.lr = 0x8302C210;
	sub_8302C148(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302c228
	if (cr6.eq) goto loc_8302C228;
	// bl 0x82416268
	ctx.lr = 0x8302C224;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8302C228:
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

__attribute__((alias("__imp__sub_8302C240"))) PPC_WEAK_FUNC(sub_8302C240);
PPC_FUNC_IMPL(__imp__sub_8302C240) {
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
	// bl 0x83061e98
	ctx.lr = 0x8302C258;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,31096
	ctx.r8.s64 = ctx.r10.s64 + 31096;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// addi r4,r4,30754
	ctx.r4.s64 = ctx.r4.s64 + 30754;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x8259cc28
	ctx.lr = 0x8302C2A8;
	sub_8259CC28(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8302C2B8;
	sub_831CDCF0(ctx, base);
	// bl 0x830730c8
	ctx.lr = 0x8302C2BC;
	sub_830730C8(ctx, base);
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

__attribute__((alias("__imp__sub_8302C2D4"))) PPC_WEAK_FUNC(sub_8302C2D4);
PPC_FUNC_IMPL(__imp__sub_8302C2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C2D8"))) PPC_WEAK_FUNC(sub_8302C2D8);
PPC_FUNC_IMPL(__imp__sub_8302C2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8302C2E0;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6176(r1)
	ea = -6176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302c6bc
	if (!cr6.eq) goto loc_8302C6BC;
	// bl 0x831156e8
	ctx.lr = 0x8302C2FC;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83072c30
	ctx.lr = 0x8302C304;
	sub_83072C30(ctx, base);
	// stw r3,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r3.u32);
	// bl 0x82d91ad0
	ctx.lr = 0x8302C30C;
	sub_82D91AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302c6bc
	if (cr6.eq) goto loc_8302C6BC;
	// addis r31,r24,222
	ctx.r31.s64 = ctx.r24.s64 + 14548992;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// addi r31,r31,-12208
	ctx.r31.s64 = ctx.r31.s64 + -12208;
	// addi r4,r31,1952
	ctx.r4.s64 = ctx.r31.s64 + 1952;
	// bl 0x82b818d0
	ctx.lr = 0x8302C32C;
	sub_82B818D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,2464
	ctx.r4.s64 = ctx.r1.s64 + 2464;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e58ec0
	ctx.lr = 0x8302C344;
	sub_82E58EC0(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,4256
	ctx.r3.s64 = ctx.r1.s64 + 4256;
	// bl 0x82e59698
	ctx.lr = 0x8302C358;
	sub_82E59698(ctx, base);
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// addi r4,r1,4736
	ctx.r4.s64 = ctx.r1.s64 + 4736;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x8302C368;
	sub_831CE980(ctx, base);
	// addi r4,r1,2464
	ctx.r4.s64 = ctx.r1.s64 + 2464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83132ae0
	ctx.lr = 0x8302C374;
	sub_83132AE0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,2464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2464);
	// bl 0x8311c148
	ctx.lr = 0x8302C380;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x8302C390;
	sub_831CE980(ctx, base);
	// lhz r11,5288(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 5288);
	// lwz r10,5292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5292);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// sth r11,3072(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3072, ctx.r11.u16);
	// stw r10,3076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3076, ctx.r10.u32);
	// bl 0x82ae4800
	ctx.lr = 0x8302C3A8;
	sub_82AE4800(ctx, base);
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x82d8ce60
	ctx.lr = 0x8302C3B0;
	sub_82D8CE60(ctx, base);
	// addi r5,r1,1824
	ctx.r5.s64 = ctx.r1.s64 + 1824;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x82e59408
	ctx.lr = 0x8302C3C0;
	sub_82E59408(ctx, base);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// bl 0x82ace470
	ctx.lr = 0x8302C3D0;
	sub_82ACE470(ctx, base);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r1,1824
	ctx.r4.s64 = ctx.r1.s64 + 1824;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82d8a4d8
	ctx.lr = 0x8302C3E0;
	sub_82D8A4D8(ctx, base);
	// lwz r9,1320(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1320);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// rlwinm r11,r9,16,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302c564
	if (cr6.eq) goto loc_8302C564;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r10,-26316
	ctx.r30.s64 = ctx.r10.s64 + -26316;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r25,r1,760
	ctx.r25.s64 = ctx.r1.s64 + 760;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8302C40C:
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bge cr6,0x8302c424
	if (!cr6.lt) goto loc_8302C424;
	// ld r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
loc_8302C424:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8302c43c
	if (!cr6.eq) goto loc_8302C43C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8302c464
	goto loc_8302C464;
loc_8302C43C:
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8302c45c
	if (!cr6.eq) goto loc_8302C45C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8302c460
	if (cr6.eq) goto loc_8302C460;
loc_8302C45C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8302C460:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8302C464:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302c54c
	if (!cr6.eq) goto loc_8302C54C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8302C478;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x8302C488;
	sub_831CE980(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8302c4a4
	if (!cr6.eq) goto loc_8302C4A4;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8302c4cc
	goto loc_8302C4CC;
loc_8302C4A4:
	// lhz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 332);
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8302c4c4
	if (!cr6.eq) goto loc_8302C4C4;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8302c4c8
	if (cr6.eq) goto loc_8302C4C8;
loc_8302C4C4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8302C4C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8302C4CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302c54c
	if (!cr6.eq) goto loc_8302C54C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d9dcf0
	ctx.lr = 0x8302C4E0;
	sub_82D9DCF0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x83179380
	ctx.lr = 0x8302C4E8;
	sub_83179380(ctx, base);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,2024
	ctx.r3.s64 = ctx.r11.s64 + 2024;
	// bl 0x82b1e0e8
	ctx.lr = 0x8302C4FC;
	sub_82B1E0E8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8302C50C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8302c50c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8302C50C;
	// bl 0x831156e8
	ctx.lr = 0x8302C518;
	sub_831156E8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x8311d1d0
	ctx.lr = 0x8302C528;
	sub_8311D1D0(ctx, base);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,9192
	ctx.r3.s64 = ctx.r11.s64 + 9192;
	// bl 0x831ce980
	ctx.lr = 0x8302C540;
	sub_831CE980(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
loc_8302C54C:
	// lwz r11,1320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1320);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// rlwinm r11,r11,16,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7F;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x8302c40c
	if (cr6.lt) goto loc_8302C40C;
loc_8302C564:
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,136(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// bl 0x8308f4e0
	ctx.lr = 0x8302C570;
	sub_8308F4E0(ctx, base);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// bl 0x8308e078
	ctx.lr = 0x8302C57C;
	sub_8308E078(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r27,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r27.u8);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// bl 0x8308e078
	ctx.lr = 0x8302C598;
	sub_8308E078(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r11,r1,516
	ctx.r11.s64 = ctx.r1.s64 + 516;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
loc_8302C5BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8302c5bc
	if (!cr6.eq) goto loc_8302C5BC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,516
	ctx.r4.s64 = ctx.r1.s64 + 516;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8302C5E4;
	sub_8259CC28(ctx, base);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,351
	ctx.r4.u64 = ctx.r4.u64 | 351;
	// bl 0x82d04220
	ctx.lr = 0x8302C600;
	sub_82D04220(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8302c614
	if (!cr6.lt) goto loc_8302C614;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_8302C614:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8302c628
	if (!cr6.lt) goto loc_8302C628;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
loc_8302C628:
	// addi r31,r28,140
	ctx.r31.s64 = ctx.r28.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308ec70
	ctx.lr = 0x8302C638;
	sub_8308EC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8308ec70
	ctx.lr = 0x8302C648;
	sub_8308EC70(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,136(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8307f4f0
	ctx.lr = 0x8302C660;
	sub_8307F4F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x8302C674;
	sub_83103100(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302c694
	if (cr6.lt) goto loc_8302C694;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8302C694;
	sub_825952B8(ctx, base);
loc_8302C694:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// blt cr6,0x8302c6bc
	if (cr6.lt) goto loc_8302C6BC;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8302C6BC;
	sub_825952B8(ctx, base);
loc_8302C6BC:
	// addi r1,r1,6176
	ctx.r1.s64 = ctx.r1.s64 + 6176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302C6C4"))) PPC_WEAK_FUNC(sub_8302C6C4);
PPC_FUNC_IMPL(__imp__sub_8302C6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C6C8"))) PPC_WEAK_FUNC(sub_8302C6C8);
PPC_FUNC_IMPL(__imp__sub_8302C6C8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8302C6E8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302c738
	if (!cr6.eq) goto loc_8302C738;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,31004
	ctx.r11.s64 = ctx.r11.s64 + 31004;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x8302C704;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302C710;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302c730
	if (cr6.lt) goto loc_8302C730;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302C730;
	sub_825952B8(ctx, base);
loc_8302C730:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8302c7ac
	goto loc_8302C7AC;
loc_8302C738:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8302c7a8
	if (cr6.gt) goto loc_8302C7A8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302c774
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302C774;
	// bdzf 4*cr6+eq,0x8302c798
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302C798;
	// bdzf 4*cr6+eq,0x8302c7a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302C7A8;
	// bdzf 4*cr6+eq,0x8302c7c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302C7C4;
	// bdzf 4*cr6+eq,0x8302c7a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302C7A8;
	// bdzf 4*cr6+eq,0x8302c808
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302C808;
	// bdzf 4*cr6+eq,0x8302c810
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302C810;
	// bne cr6,0x8302c848
	if (!cr6.eq) goto loc_8302C848;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302C774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302c0c0
	ctx.lr = 0x8302C77C;
	sub_8302C0C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302c7a8
	goto loc_8302C7A8;
loc_8302C798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302c2d8
	ctx.lr = 0x8302C7A0;
	sub_8302C2D8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8302C7A4:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302C7A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302C7AC:
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
loc_8302C7C4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,31004
	ctx.r11.s64 = ctx.r11.s64 + 31004;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302C7E0;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,232
	ctx.r4.u64 = ctx.r4.u64 | 232;
	// bl 0x82d2ada8
	ctx.lr = 0x8302C7F0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302C7FC;
	sub_83103100(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// b 0x8302c7a8
	goto loc_8302C7A8;
loc_8302C808:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8302c7a4
	goto loc_8302C7A4;
loc_8302C810:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,31004
	ctx.r11.s64 = ctx.r11.s64 + 31004;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302C824;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302C830;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302C838;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302c7ac
	goto loc_8302C7AC;
loc_8302C848:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// bl 0x837b0c10
	ctx.lr = 0x8302C858;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302C864;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302C86C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302c7ac
	goto loc_8302C7AC;
}

__attribute__((alias("__imp__sub_8302C87C"))) PPC_WEAK_FUNC(sub_8302C87C);
PPC_FUNC_IMPL(__imp__sub_8302C87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C880"))) PPC_WEAK_FUNC(sub_8302C880);
PPC_FUNC_IMPL(__imp__sub_8302C880) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302c8a4
	if (cr6.lt) goto loc_8302C8A4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302c8a8
	goto loc_8302C8A8;
loc_8302C8A4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8302C8A8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,524
	ctx.r4.s64 = 524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302C8C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302c8d8
	if (cr6.eq) goto loc_8302C8D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8302c240
	ctx.lr = 0x8302C8D0;
	sub_8302C240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302c8dc
	if (!cr6.eq) goto loc_8302C8DC;
loc_8302C8D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302C8DC:
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

__attribute__((alias("__imp__sub_8302C8F0"))) PPC_WEAK_FUNC(sub_8302C8F0);
PPC_FUNC_IMPL(__imp__sub_8302C8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302c928
	if (!cr6.eq) goto loc_8302C928;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8302c920
	if (cr6.eq) goto loc_8302C920;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x8302c928
	if (!cr6.eq) goto loc_8302C928;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8302c924
	goto loc_8302C924;
loc_8302C920:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8302C924:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_8302C928:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302C92C"))) PPC_WEAK_FUNC(sub_8302C92C);
PPC_FUNC_IMPL(__imp__sub_8302C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C930"))) PPC_WEAK_FUNC(sub_8302C930);
PPC_FUNC_IMPL(__imp__sub_8302C930) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302C960;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302c9a0
	if (cr6.eq) goto loc_8302C9A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302C974;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,31640
	ctx.r8.s64 = ctx.r10.s64 + 31640;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8302c9a4
	goto loc_8302C9A4;
loc_8302C9A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302C9A4:
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

__attribute__((alias("__imp__sub_8302C9BC"))) PPC_WEAK_FUNC(sub_8302C9BC);
PPC_FUNC_IMPL(__imp__sub_8302C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C9C0"))) PPC_WEAK_FUNC(sub_8302C9C0);
PPC_FUNC_IMPL(__imp__sub_8302C9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302c9d0
	if (cr6.lt) goto loc_8302C9D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302C9D0:
	// b 0x8302c930
	sub_8302C930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302C9D4"))) PPC_WEAK_FUNC(sub_8302C9D4);
PPC_FUNC_IMPL(__imp__sub_8302C9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302C9D8"))) PPC_WEAK_FUNC(sub_8302C9D8);
PPC_FUNC_IMPL(__imp__sub_8302C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8302C9E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302C9EC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302ca54
	if (cr6.eq) goto loc_8302CA54;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302C9FC;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302CA00;
	sub_8382E328(ctx, base);
	// lwz r30,256(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x8302ca54
	if (cr6.eq) goto loc_8302CA54;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,31544
	ctx.r31.s64 = ctx.r11.s64 + 31544;
	// addi r4,r31,-285
	ctx.r4.s64 = ctx.r31.s64 + -285;
	// bl 0x837b0c10
	ctx.lr = 0x8302CA20;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04220
	ctx.lr = 0x8302CA2C;
	sub_82D04220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x8302CA40;
	sub_82D2AD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302ca60
	if (!cr6.eq) goto loc_8302CA60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CA54;
	sub_8387E8E0(ctx, base);
loc_8302CA54:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302CA60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302CA6C;
	sub_82D2AAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302CA78;
	sub_83103100(ctx, base);
	// lis r11,550
	ctx.r11.s64 = 36044800;
	// ori r10,r11,197
	ctx.r10.u64 = ctx.r11.u64 | 197;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8302ca94
	if (!cr6.eq) goto loc_8302CA94;
	// bl 0x82d26ed8
	ctx.lr = 0x8302CA8C;
	sub_82D26ED8(ctx, base);
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x82d26b18
	ctx.lr = 0x8302CA94;
	sub_82D26B18(ctx, base);
loc_8302CA94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CA9C;
	sub_8387E8E0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302CAA8"))) PPC_WEAK_FUNC(sub_8302CAA8);
PPC_FUNC_IMPL(__imp__sub_8302CAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8302CAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302CABC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302cae0
	if (!cr6.eq) goto loc_8302CAE0;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-26220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26220);
	// bl 0x837b0c10
	ctx.lr = 0x8302CAD4;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302CAE0:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302CAE8;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302CAEC;
	sub_8382E328(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r3,260
	ctx.r4.s64 = ctx.r3.s64 + 260;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x8302CB18;
	sub_8259CB28(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302cb48
	if (!cr6.eq) goto loc_8302CB48;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-26220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26220);
	// bl 0x837b0c10
	ctx.lr = 0x8302CB34;
	sub_837B0C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CB3C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302CB48:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8302CB68;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CB70;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302CB7C"))) PPC_WEAK_FUNC(sub_8302CB7C);
PPC_FUNC_IMPL(__imp__sub_8302CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302CB80"))) PPC_WEAK_FUNC(sub_8302CB80);
PPC_FUNC_IMPL(__imp__sub_8302CB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8302CB88;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302CB94;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302cd00
	if (cr6.eq) goto loc_8302CD00;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302CBA8;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8302CBB4;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302CBB8;
	sub_8382E328(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b57f10
	ctx.lr = 0x8302CBC4;
	sub_82B57F10(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b57df0
	ctx.lr = 0x8302CBCC;
	sub_82B57DF0(ctx, base);
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// bl 0x82b57df0
	ctx.lr = 0x8302CBDC;
	sub_82B57DF0(ctx, base);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9f7b8
	ctx.lr = 0x8302CBF0;
	sub_82D9F7B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302cc10
	if (!cr6.eq) goto loc_8302CC10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c16c98
	ctx.lr = 0x8302CC04;
	sub_82C16C98(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302CC10:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8302cc54
	if (!cr6.eq) goto loc_8302CC54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x825832f8
	ctx.lr = 0x8302CC28;
	sub_825832F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x83131d70
	ctx.lr = 0x8302CC34;
	sub_83131D70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46f98
	ctx.lr = 0x8302CC40;
	sub_82A46F98(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c16c98
	ctx.lr = 0x8302CC48;
	sub_82C16C98(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302CC54:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8302cd40
	if (!cr6.eq) goto loc_8302CD40;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x8302CC70;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x8302CC7C;
	sub_8311BF98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,31536
	ctx.r31.s64 = ctx.r11.s64 + 31536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,-278
	ctx.r4.s64 = ctx.r31.s64 + -278;
	// bl 0x837b0c10
	ctx.lr = 0x8302CC94;
	sub_837B0C10(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r9,90
	ctx.r9.s64 = 90;
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// divwu r8,r11,r9
	ctx.r8.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// mullw. r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x8302ccb8
	if (!cr0.eq) goto loc_8302CCB8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302ccb8
	if (cr6.eq) goto loc_8302CCB8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8302CCB8:
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// ori r4,r4,392
	ctx.r4.u64 = ctx.r4.u64 | 392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x8302CCD0;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x8302CCE4;
	sub_82D2AD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302cd0c
	if (!cr6.eq) goto loc_8302CD0C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CCF8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c16c98
	ctx.lr = 0x8302CD00;
	sub_82C16C98(ctx, base);
loc_8302CD00:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302CD0C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302CD18;
	sub_82D2AAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302CD24;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CD2C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c16c98
	ctx.lr = 0x8302CD34;
	sub_82C16C98(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302CD40:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c16c98
	ctx.lr = 0x8302CD48;
	sub_82C16C98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302CD54"))) PPC_WEAK_FUNC(sub_8302CD54);
PPC_FUNC_IMPL(__imp__sub_8302CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302CD58"))) PPC_WEAK_FUNC(sub_8302CD58);
PPC_FUNC_IMPL(__imp__sub_8302CD58) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302CD78;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302cdcc
	if (!cr6.eq) goto loc_8302CDCC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,31528
	ctx.r11.s64 = ctx.r11.s64 + 31528;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x8302CD94;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302CDA0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302cdc0
	if (cr6.lt) goto loc_8302CDC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302CDC0;
	sub_825952B8(ctx, base);
loc_8302CDC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x8302cfa0
	goto loc_8302CFA0;
loc_8302CDCC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8302cf74
	if (cr6.gt) goto loc_8302CF74;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12816
	ctx.r12.s64 = ctx.r12.s64 + -12816;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8302CE20;
	case 1:
		goto loc_8302CE28;
	case 2:
		goto loc_8302CF14;
	case 3:
		goto loc_8302CE3C;
	case 4:
		goto loc_8302CF14;
	case 5:
		goto loc_8302CE80;
	case 6:
		goto loc_8302CEC8;
	case 7:
		goto loc_8302CF48;
	case 8:
		goto loc_8302CF74;
	case 9:
		goto loc_8302CE50;
	case 10:
		goto loc_8302CE78;
	case 11:
		goto loc_8302CF1C;
	default:
		return;
	}
	// lwz r24,-12768(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12768);
	// lwz r24,-12760(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12760);
	// lwz r24,-12524(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12524);
	// lwz r24,-12740(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12740);
	// lwz r24,-12524(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12524);
	// lwz r24,-12672(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12672);
	// lwz r24,-12600(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12600);
	// lwz r24,-12472(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12472);
	// lwz r24,-12428(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12428);
	// lwz r24,-12720(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12720);
	// lwz r24,-12680(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12680);
	// lwz r24,-12516(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12516);
loc_8302CE20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8302CE28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302cb80
	ctx.lr = 0x8302CE30;
	sub_8302CB80(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302cfa4
	goto loc_8302CFA4;
loc_8302CE3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302c9d8
	ctx.lr = 0x8302CE44;
	sub_8302C9D8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302cfa4
	goto loc_8302CFA4;
loc_8302CE50:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,31528
	ctx.r11.s64 = ctx.r11.s64 + 31528;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x8302CE64;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302CE70;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x8302cf94
	goto loc_8302CF94;
loc_8302CE78:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8302CE80:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,31528
	ctx.r11.s64 = ctx.r11.s64 + 31528;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302CE94;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302CEA0;
	sub_82D894E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CEAC;
	sub_8387E8E0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// b 0x8302cfa4
	goto loc_8302CFA4;
loc_8302CEC8:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82ddcec8
	ctx.lr = 0x8302CED0;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302cf14
	if (cr6.eq) goto loc_8302CF14;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302cf00
	if (cr6.eq) goto loc_8302CF00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302CEF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_8302CF00:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// li r11,11
	ctx.r11.s64 = 11;
	// beq cr6,0x8302cf10
	if (cr6.eq) goto loc_8302CF10;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8302CF10:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8302CF14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302cfa4
	goto loc_8302CFA4;
loc_8302CF1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8302caa8
	ctx.lr = 0x8302CF28;
	sub_8302CAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302CF34;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CF3C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x8302cfa0
	goto loc_8302CFA0;
loc_8302CF48:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-26220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26220);
	// bl 0x837b0c10
	ctx.lr = 0x8302CF58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302CF64;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302CF6C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8302cf9c
	goto loc_8302CF9C;
loc_8302CF74:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,31528
	ctx.r4.s64 = ctx.r11.s64 + 31528;
	// bl 0x837b0c10
	ctx.lr = 0x8302CF84;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302CF90;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_8302CF94:
	// bl 0x8387e8e0
	ctx.lr = 0x8302CF98;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8302CF9C:
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8302CFA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8302CFA4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302CFBC"))) PPC_WEAK_FUNC(sub_8302CFBC);
PPC_FUNC_IMPL(__imp__sub_8302CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302CFC0"))) PPC_WEAK_FUNC(sub_8302CFC0);
PPC_FUNC_IMPL(__imp__sub_8302CFC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302CFD8;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,32328
	ctx.r7.s64 = ctx.r10.s64 + 32328;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r5,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
loc_8302D024:
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8302d024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8302D024;
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

__attribute__((alias("__imp__sub_8302D048"))) PPC_WEAK_FUNC(sub_8302D048);
PPC_FUNC_IMPL(__imp__sub_8302D048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302d064
	if (!cr6.eq) goto loc_8302D064;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8302D064:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302D068"))) PPC_WEAK_FUNC(sub_8302D068);
PPC_FUNC_IMPL(__imp__sub_8302D068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8302D070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x8302D078;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d0e0
	if (cr6.eq) goto loc_8302D0E0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302D088;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302D08C;
	sub_8382E328(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d9e258
	ctx.lr = 0x8302D098;
	sub_82D9E258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d9e258
	ctx.lr = 0x8302D0A8;
	sub_82D9E258(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d9e258
	ctx.lr = 0x8302D0B8;
	sub_82D9E258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9e258
	ctx.lr = 0x8302D0C8;
	sub_82D9E258(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8302d0e0
	if (cr6.eq) goto loc_8302D0E0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8302d0e4
	if (cr6.eq) goto loc_8302D0E4;
loc_8302D0E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302D0E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302D0EC"))) PPC_WEAK_FUNC(sub_8302D0EC);
PPC_FUNC_IMPL(__imp__sub_8302D0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302D0F0"))) PPC_WEAK_FUNC(sub_8302D0F0);
PPC_FUNC_IMPL(__imp__sub_8302D0F0) {
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
	ctx.lr = 0x8302D100;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302d118
	if (!cr6.eq) goto loc_8302D118;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8302D118:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302D120;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302D124;
	sub_8382E328(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d9e648
	ctx.lr = 0x8302D12C;
	sub_82D9E648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302D13C"))) PPC_WEAK_FUNC(sub_8302D13C);
PPC_FUNC_IMPL(__imp__sub_8302D13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302D140"))) PPC_WEAK_FUNC(sub_8302D140);
PPC_FUNC_IMPL(__imp__sub_8302D140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8302D148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x8302D150;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302d168
	if (!cr6.eq) goto loc_8302D168;
	// lis r3,507
	ctx.r3.s64 = 33226752;
	// ori r3,r3,62
	ctx.r3.u64 = ctx.r3.u64 | 62;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D168:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302D170;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302D174;
	sub_8382E328(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d9e258
	ctx.lr = 0x8302D180;
	sub_82D9E258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d9e258
	ctx.lr = 0x8302D190;
	sub_82D9E258(ctx, base);
	// add r29,r3,r30
	ctx.r29.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d9e258
	ctx.lr = 0x8302D1A0;
	sub_82D9E258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d9e258
	ctx.lr = 0x8302D1B0;
	sub_82D9E258(ctx, base);
	// add r28,r3,r30
	ctx.r28.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d9e490
	ctx.lr = 0x8302D1C4;
	sub_82D9E490(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x8302d1d0
	if (!cr6.gt) goto loc_8302D1D0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8302D1D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d274
	if (cr6.eq) goto loc_8302D274;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8302d238
	if (!cr6.eq) goto loc_8302D238;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9e258
	ctx.lr = 0x8302D1F0;
	sub_82D9E258(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d228
	if (cr6.eq) goto loc_8302D228;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9e258
	ctx.lr = 0x8302D204;
	sub_82D9E258(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r3,550
	ctx.r3.s64 = 36044800;
	// bne cr6,0x8302d21c
	if (!cr6.eq) goto loc_8302D21C;
loc_8302D210:
	// ori r3,r3,200
	ctx.r3.u64 = ctx.r3.u64 | 200;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D21C:
	// ori r3,r3,198
	ctx.r3.u64 = ctx.r3.u64 | 198;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D228:
	// lis r3,550
	ctx.r3.s64 = 36044800;
	// ori r3,r3,199
	ctx.r3.u64 = ctx.r3.u64 | 199;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D238:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8302d250
	if (!cr6.eq) goto loc_8302D250;
	// lis r3,550
	ctx.r3.s64 = 36044800;
	// ori r3,r3,197
	ctx.r3.u64 = ctx.r3.u64 | 197;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D250:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9e258
	ctx.lr = 0x8302D25C;
	sub_82D9E258(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r3,550
	ctx.r3.s64 = 36044800;
	// bne cr6,0x8302d21c
	if (!cr6.eq) goto loc_8302D21C;
	// ori r3,r3,394
	ctx.r3.u64 = ctx.r3.u64 | 394;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D274:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8302d2a0
	if (!cr6.eq) goto loc_8302D2A0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9e258
	ctx.lr = 0x8302D288;
	sub_82D9E258(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r3,550
	ctx.r3.s64 = 36044800;
	// beq cr6,0x8302d210
	if (cr6.eq) goto loc_8302D210;
	// ori r3,r3,199
	ctx.r3.u64 = ctx.r3.u64 | 199;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D2A0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302D2AC"))) PPC_WEAK_FUNC(sub_8302D2AC);
PPC_FUNC_IMPL(__imp__sub_8302D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302D2B0"))) PPC_WEAK_FUNC(sub_8302D2B0);
PPC_FUNC_IMPL(__imp__sub_8302D2B0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302d2d4
	if (cr6.lt) goto loc_8302D2D4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302d2d8
	goto loc_8302D2D8;
loc_8302D2D4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8302D2D8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302D2F0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d308
	if (cr6.eq) goto loc_8302D308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8302cfc0
	ctx.lr = 0x8302D300;
	sub_8302CFC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302d30c
	if (!cr6.eq) goto loc_8302D30C;
loc_8302D308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302D30C:
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

__attribute__((alias("__imp__sub_8302D320"))) PPC_WEAK_FUNC(sub_8302D320);
PPC_FUNC_IMPL(__imp__sub_8302D320) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302D33C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d394
	if (cr6.eq) goto loc_8302D394;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302D34C;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302D350;
	sub_8382E328(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302D360;
	sub_837B0C10(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x8259cb28
	ctx.lr = 0x8302D374;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302d394
	if (cr6.lt) goto loc_8302D394;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302D394;
	sub_825952B8(ctx, base);
loc_8302D394:
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

__attribute__((alias("__imp__sub_8302D3AC"))) PPC_WEAK_FUNC(sub_8302D3AC);
PPC_FUNC_IMPL(__imp__sub_8302D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302D3B0"))) PPC_WEAK_FUNC(sub_8302D3B0);
PPC_FUNC_IMPL(__imp__sub_8302D3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8302D3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302D3C8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302d424
	if (!cr6.eq) goto loc_8302D424;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x837b0c10
	ctx.lr = 0x8302D3E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302D3F0;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302d410
	if (cr6.lt) goto loc_8302D410;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302D410;
	sub_825952B8(ctx, base);
loc_8302D410:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D424:
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302D430;
	sub_82DAB6D0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8302dbf4
	if (cr6.gt) goto loc_8302DBF4;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11176
	ctx.r12.s64 = ctx.r12.s64 + -11176;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8302D48C;
	case 1:
		goto loc_8302D4FC;
	case 2:
		goto loc_8302D5D4;
	case 3:
		goto loc_8302D624;
	case 4:
		goto loc_8302D6BC;
	case 5:
		goto loc_8302D830;
	case 6:
		goto loc_8302D898;
	case 7:
		goto loc_8302D8A4;
	case 8:
		goto loc_8302D8CC;
	case 9:
		goto loc_8302D98C;
	case 10:
		goto loc_8302DA4C;
	case 11:
		goto loc_8302DA74;
	case 12:
		goto loc_8302DB34;
	default:
		return;
	}
	// lwz r24,-11124(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11124);
	// lwz r24,-11012(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11012);
	// lwz r24,-10796(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10796);
	// lwz r24,-10716(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10716);
	// lwz r24,-10564(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10564);
	// lwz r24,-10192(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10192);
	// lwz r24,-10088(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10088);
	// lwz r24,-10076(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10076);
	// lwz r24,-10036(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10036);
	// lwz r24,-9844(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9844);
	// lwz r24,-9652(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9652);
	// lwz r24,-9612(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9612);
	// lwz r24,-9420(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -9420);
loc_8302D48C:
	// bl 0x82d86078
	ctx.lr = 0x8302D490;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d4a8
	if (cr6.eq) goto loc_8302D4A8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302D4A0;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302D4A4;
	sub_8382E328(ctx, base);
	// bl 0x82d9fb88
	ctx.lr = 0x8302D4A8;
	sub_82D9FB88(ctx, base);
loc_8302D4A8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x837b0c10
	ctx.lr = 0x8302D4BC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302D4C8;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x8302D4D4;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D4FC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x8302D504;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302d898
	if (cr6.eq) goto loc_8302D898;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x83574b00
	ctx.lr = 0x8302D514;
	sub_83574B00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302d528
	if (cr6.lt) goto loc_8302D528;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302d52c
	goto loc_8302D52C;
loc_8302D528:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8302D52C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302D534;
	sub_837B0C10(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d558
	if (cr6.eq) goto loc_8302D558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302D550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_8302D558:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x82a64a88
	ctx.lr = 0x8302D56C;
	sub_82A64A88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8302d5a0
	if (cr6.eq) goto loc_8302D5A0;
loc_8302D578:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97600
	ctx.lr = 0x8302D584;
	sub_82D97600(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302D594;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D5A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d0f0
	ctx.lr = 0x8302D5A8;
	sub_8302D0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302D5C8;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D5D4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x837b0c10
	ctx.lr = 0x8302D5E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302D5F4;
	sub_82D894E0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x8302D600;
	sub_8387E8E0(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D624:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82ddcec8
	ctx.lr = 0x8302D62C;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302d898
	if (cr6.eq) goto loc_8302D898;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x83574b00
	ctx.lr = 0x8302D63C;
	sub_83574B00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302d650
	if (cr6.lt) goto loc_8302D650;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302d654
	goto loc_8302D654;
loc_8302D650:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8302D654:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302D65C;
	sub_837B0C10(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d680
	if (cr6.eq) goto loc_8302D680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302D678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_8302D680:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x82a64a88
	ctx.lr = 0x8302D694;
	sub_82A64A88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8302d578
	if (!cr6.eq) goto loc_8302D578;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302D6B0;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D6BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97608
	ctx.lr = 0x8302D6C4;
	sub_82D97608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d7b4
	if (cr6.eq) goto loc_8302D7B4;
	// bl 0x8302d068
	ctx.lr = 0x8302D6D8;
	sub_8302D068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d750
	if (cr6.eq) goto loc_8302D750;
	// bl 0x8302d0f0
	ctx.lr = 0x8302D6EC;
	sub_8302D0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d704
	if (cr6.eq) goto loc_8302D704;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8302d720
	goto loc_8302D720;
loc_8302D704:
	// lis r11,550
	ctx.r11.s64 = 36044800;
	// li r10,11
	ctx.r10.s64 = 11;
	// ori r9,r11,197
	ctx.r9.u64 = ctx.r11.u64 | 197;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_8302D720:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d79c
	if (cr6.eq) goto loc_8302D79C;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d84728
	ctx.lr = 0x8302D738;
	sub_82D84728(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97600
	ctx.lr = 0x8302D744;
	sub_82D97600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D750:
	// bl 0x8302d0f0
	ctx.lr = 0x8302D754;
	sub_8302D0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d780
	if (cr6.eq) goto loc_8302D780;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97600
	ctx.lr = 0x8302D774;
	sub_82D97600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d140
	ctx.lr = 0x8302D788;
	sub_8302D140(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_8302D79C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97600
	ctx.lr = 0x8302D7A8;
	sub_82D97600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D7B4:
	// bl 0x8302d068
	ctx.lr = 0x8302D7B8;
	sub_8302D068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d808
	if (cr6.eq) goto loc_8302D808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8200
	ctx.lr = 0x8302D7CC;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x8302D7D0;
	sub_82D9E470(ctx, base);
	// bl 0x82d9e6a0
	ctx.lr = 0x8302D7D4;
	sub_82D9E6A0(ctx, base);
	// subfic r11,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r3.s64;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lwz r11,24080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d898
	if (cr6.eq) goto loc_8302D898;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d84728
	ctx.lr = 0x8302D7FC;
	sub_82D84728(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D808:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d140
	ctx.lr = 0x8302D810;
	sub_8302D140(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D830:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x8302D84C;
	sub_82D2AD40(ctx, base);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x8302D858;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302D864;
	sub_83103100(ctx, base);
	// lis r10,550
	ctx.r10.s64 = 36044800;
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// ori r9,r10,197
	ctx.r9.u64 = ctx.r10.u64 | 197;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302d890
	if (!cr6.eq) goto loc_8302D890;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8302d890
	if (!cr6.eq) goto loc_8302D890;
	// bl 0x82d26ed8
	ctx.lr = 0x8302D888;
	sub_82D26ED8(ctx, base);
	// li r4,74
	ctx.r4.s64 = 74;
	// bl 0x82d26b18
	ctx.lr = 0x8302D890;
	sub_82D26B18(ctx, base);
loc_8302D890:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302D898:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D8A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x8302D8B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302D8C4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x8302dc14
	goto loc_8302DC14;
loc_8302D8CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d0f0
	ctx.lr = 0x8302D8D4;
	sub_8302D0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302d950
	if (cr6.eq) goto loc_8302D950;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-26084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26084);
	// bl 0x8302d320
	ctx.lr = 0x8302D8F0;
	sub_8302D320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d140
	ctx.lr = 0x8302D8F8;
	sub_8302D140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302D900;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d918
	if (cr6.eq) goto loc_8302D918;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302D910;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302D914;
	sub_8382E328(ctx, base);
	// stw r30,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r30.u32);
loc_8302D918:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r4,-26088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26088);
	// bl 0x837b0c10
	ctx.lr = 0x8302D928;
	sub_837B0C10(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302D934;
	sub_82E88020(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x8302D93C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D950:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x8302D964;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302D970;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302D978;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302D98C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d0f0
	ctx.lr = 0x8302D994;
	sub_8302D0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302da10
	if (cr6.eq) goto loc_8302DA10;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-26072(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26072);
	// bl 0x8302d320
	ctx.lr = 0x8302D9B0;
	sub_8302D320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d140
	ctx.lr = 0x8302D9B8;
	sub_8302D140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302D9C0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302d9d8
	if (cr6.eq) goto loc_8302D9D8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302D9D0;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302D9D4;
	sub_8382E328(ctx, base);
	// stw r30,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r30.u32);
loc_8302D9D8:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,-26088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26088);
	// bl 0x837b0c10
	ctx.lr = 0x8302D9E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302D9F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x8302D9FC;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302DA10:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x8302DA24;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DA30;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DA38;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302DA4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x8302DA60;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DA6C;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x8302dc14
	goto loc_8302DC14;
loc_8302DA74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d0f0
	ctx.lr = 0x8302DA7C;
	sub_8302D0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302daf8
	if (cr6.eq) goto loc_8302DAF8;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-26080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26080);
	// bl 0x8302d320
	ctx.lr = 0x8302DA98;
	sub_8302D320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d140
	ctx.lr = 0x8302DAA0;
	sub_8302D140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302DAA8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302dac0
	if (cr6.eq) goto loc_8302DAC0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302DAB8;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302DABC;
	sub_8382E328(ctx, base);
	// stw r30,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r30.u32);
loc_8302DAC0:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,-26088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26088);
	// bl 0x837b0c10
	ctx.lr = 0x8302DAD0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DADC;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DAE4;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302DAF8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302DB0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DB18;
	sub_82E88020(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DB20;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302DB34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d0f0
	ctx.lr = 0x8302DB3C;
	sub_8302D0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302dbb8
	if (cr6.eq) goto loc_8302DBB8;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-26076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26076);
	// bl 0x8302d320
	ctx.lr = 0x8302DB58;
	sub_8302D320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302d140
	ctx.lr = 0x8302DB60;
	sub_8302D140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302DB68;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302db80
	if (cr6.eq) goto loc_8302DB80;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302DB78;
	sub_831F8200(ctx, base);
	// bl 0x8382e328
	ctx.lr = 0x8302DB7C;
	sub_8382E328(ctx, base);
	// stw r30,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r30.u32);
loc_8302DB80:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r4,-26088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26088);
	// bl 0x837b0c10
	ctx.lr = 0x8302DB90;
	sub_837B0C10(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DB9C;
	sub_82E88020(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DBA4;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302DBB8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302DBCC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DBD8;
	sub_82E88020(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DBE0;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302DBF4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,32232
	ctx.r4.s64 = ctx.r11.s64 + 32232;
	// bl 0x837b0c10
	ctx.lr = 0x8302DC04;
	sub_837B0C10(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DC10;
	sub_82E88020(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
loc_8302DC14:
	// bl 0x8387e8e0
	ctx.lr = 0x8302DC18;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302DC2C"))) PPC_WEAK_FUNC(sub_8302DC2C);
PPC_FUNC_IMPL(__imp__sub_8302DC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302DC30"))) PPC_WEAK_FUNC(sub_8302DC30);
PPC_FUNC_IMPL(__imp__sub_8302DC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302dc4c
	if (!cr6.eq) goto loc_8302DC4C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8302DC4C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302DC50"))) PPC_WEAK_FUNC(sub_8302DC50);
PPC_FUNC_IMPL(__imp__sub_8302DC50) {
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
	ctx.lr = 0x8302DC60;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302dc7c
	if (!cr6.eq) goto loc_8302DC7C;
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
loc_8302DC7C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302DC84;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x8302DC88;
	sub_82D9E470(ctx, base);
	// bl 0x82d9e6a0
	ctx.lr = 0x8302DC8C;
	sub_82D9E6A0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302DCA4"))) PPC_WEAK_FUNC(sub_8302DCA4);
PPC_FUNC_IMPL(__imp__sub_8302DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302DCA8"))) PPC_WEAK_FUNC(sub_8302DCA8);
PPC_FUNC_IMPL(__imp__sub_8302DCA8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302DCD8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302dd18
	if (cr6.eq) goto loc_8302DD18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302DCEC;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-32672
	ctx.r8.s64 = ctx.r10.s64 + -32672;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8302dd1c
	goto loc_8302DD1C;
loc_8302DD18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302DD1C:
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

__attribute__((alias("__imp__sub_8302DD34"))) PPC_WEAK_FUNC(sub_8302DD34);
PPC_FUNC_IMPL(__imp__sub_8302DD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302DD38"))) PPC_WEAK_FUNC(sub_8302DD38);
PPC_FUNC_IMPL(__imp__sub_8302DD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302dd48
	if (cr6.lt) goto loc_8302DD48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302DD48:
	// b 0x8302dca8
	sub_8302DCA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302DD4C"))) PPC_WEAK_FUNC(sub_8302DD4C);
PPC_FUNC_IMPL(__imp__sub_8302DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302DD50"))) PPC_WEAK_FUNC(sub_8302DD50);
PPC_FUNC_IMPL(__imp__sub_8302DD50) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8302df3c
	if (cr6.gt) goto loc_8302DF3C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302dde0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302DDE0;
	// bdzf 4*cr6+eq,0x8302dea0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302DEA0;
	// bdzf 4*cr6+eq,0x8302ded4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302DED4;
	// bdzf 4*cr6+eq,0x8302de58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302DE58;
	// bdzf 4*cr6+eq,0x8302de98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302DE98;
	// bne cr6,0x8302df08
	if (!cr6.eq) goto loc_8302DF08;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-32764
	ctx.r11.s64 = ctx.r11.s64 + -32764;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x8302DDAC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302DDB8;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DDC4;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302df84
	goto loc_8302DF84;
loc_8302DDE0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8302DDE8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302de98
	if (cr6.eq) goto loc_8302DE98;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302de18
	if (cr6.eq) goto loc_8302DE18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302DE10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8302DE18:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8302de48
	if (!cr6.eq) goto loc_8302DE48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302dc50
	ctx.lr = 0x8302DE28;
	sub_8302DC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302df84
	goto loc_8302DF84;
loc_8302DE48:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8302df84
	goto loc_8302DF84;
loc_8302DE58:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-32764
	ctx.r11.s64 = ctx.r11.s64 + -32764;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302DE74;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,196
	ctx.r4.u64 = ctx.r4.u64 | 196;
	// bl 0x82d2ada8
	ctx.lr = 0x8302DE84;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302DE90;
	sub_83103100(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_8302DE98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302df84
	goto loc_8302DF84;
loc_8302DEA0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-32764
	ctx.r11.s64 = ctx.r11.s64 + -32764;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302DEB4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DEC0;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DEC8;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302df80
	goto loc_8302DF80;
loc_8302DED4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-32764
	ctx.r11.s64 = ctx.r11.s64 + -32764;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302DEE8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DEF4;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DEFC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302df80
	goto loc_8302DF80;
loc_8302DF08:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-32764
	ctx.r11.s64 = ctx.r11.s64 + -32764;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302DF1C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DF28;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302DF30;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302df80
	goto loc_8302DF80;
loc_8302DF3C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32764
	ctx.r4.s64 = ctx.r11.s64 + -32764;
	// bl 0x837b0c10
	ctx.lr = 0x8302DF4C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302DF58;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302df78
	if (cr6.lt) goto loc_8302DF78;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302DF78;
	sub_825952B8(ctx, base);
loc_8302DF78:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8302DF80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8302DF84:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302DF9C"))) PPC_WEAK_FUNC(sub_8302DF9C);
PPC_FUNC_IMPL(__imp__sub_8302DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302DFA0"))) PPC_WEAK_FUNC(sub_8302DFA0);
PPC_FUNC_IMPL(__imp__sub_8302DFA0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8302e198
	if (cr6.gt) goto loc_8302E198;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302dff8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302DFF8;
	// bdzf 4*cr6+eq,0x8302e044
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E044;
	// bdzf 4*cr6+eq,0x8302e0a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E0A0;
	// bdzf 4*cr6+eq,0x8302e0e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E0E8;
	// bdzf 4*cr6+eq,0x8302e168
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E168;
	// bne cr6,0x8302e134
	if (!cr6.eq) goto loc_8302E134;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8302e1e4
	goto loc_8302E1E4;
loc_8302DFF8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-32216
	ctx.r11.s64 = ctx.r11.s64 + -32216;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x8302E00C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302E018;
	sub_82D894E0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E024;
	sub_8387E8E0(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8302e1e4
	goto loc_8302E1E4;
loc_8302E044:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e080
	if (cr6.eq) goto loc_8302E080;
	// bl 0x82ddcec8
	ctx.lr = 0x8302E054;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302e12c
	if (cr6.eq) goto loc_8302E12C;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e080
	if (cr6.eq) goto loc_8302E080;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302E078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_8302E080:
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302e1e4
	goto loc_8302E1E4;
loc_8302E0A0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-32216
	ctx.r11.s64 = ctx.r11.s64 + -32216;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x8302E0B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302E0C0;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E0CC;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302e1e4
	goto loc_8302E1E4;
loc_8302E0E8:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e124
	if (cr6.eq) goto loc_8302E124;
	// bl 0x82ddcec8
	ctx.lr = 0x8302E0F8;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302e12c
	if (cr6.eq) goto loc_8302E12C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e124
	if (cr6.eq) goto loc_8302E124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302E11C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_8302E124:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302E12C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302e1e4
	goto loc_8302E1E4;
loc_8302E134:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-32216
	ctx.r11.s64 = ctx.r11.s64 + -32216;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302E148;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E154;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E15C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302e1e0
	goto loc_8302E1E0;
loc_8302E168:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-32216
	ctx.r4.s64 = ctx.r11.s64 + -32216;
	// bl 0x837b0c10
	ctx.lr = 0x8302E178;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E184;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E18C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302e1e0
	goto loc_8302E1E0;
loc_8302E198:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-32216
	ctx.r11.s64 = ctx.r11.s64 + -32216;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302E1AC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E1B8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302e1d8
	if (cr6.lt) goto loc_8302E1D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302E1D8;
	sub_825952B8(ctx, base);
loc_8302E1D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8302E1E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8302E1E4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302E1FC"))) PPC_WEAK_FUNC(sub_8302E1FC);
PPC_FUNC_IMPL(__imp__sub_8302E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E200"))) PPC_WEAK_FUNC(sub_8302E200);
PPC_FUNC_IMPL(__imp__sub_8302E200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8302E208;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302E214;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-32120
	ctx.r9.s64 = ctx.r11.s64 + -32120;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r8,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r8.u32);
	// stb r31,100(r29)
	PPC_STORE_U8(ctx.r29.u32 + 100, ctx.r31.u8);
	// stw r31,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r31.u32);
	// stw r31,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r31.u32);
	// bl 0x82d86078
	ctx.lr = 0x8302E244;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e328
	if (cr6.eq) goto loc_8302E328;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8302E254;
	sub_831F8200(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
loc_8302E264:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stb r28,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r28.u8);
	// stb r31,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r31.u8);
	// bl 0x82d9e478
	ctx.lr = 0x8302E28C;
	sub_82D9E478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82da0320
	ctx.lr = 0x8302E298;
	sub_82DA0320(ctx, base);
	// lbz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8302e2b0
	if (!cr6.eq) goto loc_8302E2B0;
	// lbz r10,125(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8302e2fc
	if (cr6.eq) goto loc_8302E2FC;
loc_8302E2B0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e2d8
	if (cr6.eq) goto loc_8302E2D8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82c93f88
	ctx.lr = 0x8302E2C8;
	sub_82C93F88(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8302E2D8;
	sub_825952B8(ctx, base);
loc_8302E2D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r30,28
	cr6.compare<uint32_t>(ctx.r30.u32, 28, xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// blt cr6,0x8302e264
	if (cr6.lt) goto loc_8302E264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8302E2FC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r28,100(r29)
	PPC_STORE_U8(ctx.r29.u32 + 100, ctx.r28.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e328
	if (cr6.eq) goto loc_8302E328;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82c93f88
	ctx.lr = 0x8302E318;
	sub_82C93F88(ctx, base);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8302E328;
	sub_825952B8(ctx, base);
loc_8302E328:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302E334"))) PPC_WEAK_FUNC(sub_8302E334);
PPC_FUNC_IMPL(__imp__sub_8302E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E338"))) PPC_WEAK_FUNC(sub_8302E338);
PPC_FUNC_IMPL(__imp__sub_8302E338) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302e35c
	if (cr6.lt) goto loc_8302E35C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302e360
	goto loc_8302E360;
loc_8302E35C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8302E360:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302E378;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e390
	if (cr6.eq) goto loc_8302E390;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8302e200
	ctx.lr = 0x8302E388;
	sub_8302E200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302e394
	if (!cr6.eq) goto loc_8302E394;
loc_8302E390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302E394:
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

__attribute__((alias("__imp__sub_8302E3A8"))) PPC_WEAK_FUNC(sub_8302E3A8);
PPC_FUNC_IMPL(__imp__sub_8302E3A8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302E3D8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e418
	if (cr6.eq) goto loc_8302E418;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302E3EC;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-31608
	ctx.r8.s64 = ctx.r10.s64 + -31608;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8302e41c
	goto loc_8302E41C;
loc_8302E418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302E41C:
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

__attribute__((alias("__imp__sub_8302E434"))) PPC_WEAK_FUNC(sub_8302E434);
PPC_FUNC_IMPL(__imp__sub_8302E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E438"))) PPC_WEAK_FUNC(sub_8302E438);
PPC_FUNC_IMPL(__imp__sub_8302E438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302e448
	if (cr6.lt) goto loc_8302E448;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302E448:
	// b 0x8302e3a8
	sub_8302E3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302E44C"))) PPC_WEAK_FUNC(sub_8302E44C);
PPC_FUNC_IMPL(__imp__sub_8302E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E450"))) PPC_WEAK_FUNC(sub_8302E450);
PPC_FUNC_IMPL(__imp__sub_8302E450) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8302e528
	if (cr6.gt) goto loc_8302E528;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302e49c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E49C;
	// bdzf 4*cr6+eq,0x8302e4e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E4E0;
	// bdzf 4*cr6+eq,0x8302e54c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E54C;
	// bdzf 4*cr6+eq,0x8302e554
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E554;
	// bne cr6,0x8302e58c
	if (!cr6.eq) goto loc_8302E58C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302E49C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-31704
	ctx.r11.s64 = ctx.r11.s64 + -31704;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x8302E4B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302E4BC;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E4C8;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302e528
	goto loc_8302E528;
loc_8302E4E0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8302E4E8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302e528
	if (cr6.eq) goto loc_8302E528;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e518
	if (cr6.eq) goto loc_8302E518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302E510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8302E518:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8302e544
	if (!cr6.eq) goto loc_8302E544;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8302E524:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302E528:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302E52C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8302E544:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8302e524
	goto loc_8302E524;
loc_8302E54C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8302e524
	goto loc_8302E524;
loc_8302E554:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-31704
	ctx.r11.s64 = ctx.r11.s64 + -31704;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302E568;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E574;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E57C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302e52c
	goto loc_8302E52C;
loc_8302E58C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-31704
	ctx.r4.s64 = ctx.r11.s64 + -31704;
	// bl 0x837b0c10
	ctx.lr = 0x8302E59C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E5A8;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E5B0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302e52c
	goto loc_8302E52C;
}

__attribute__((alias("__imp__sub_8302E5C0"))) PPC_WEAK_FUNC(sub_8302E5C0);
PPC_FUNC_IMPL(__imp__sub_8302E5C0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302E5F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e62c
	if (cr6.eq) goto loc_8302E62C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302E604;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31112
	ctx.r9.s64 = ctx.r11.s64 + -31112;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8302e630
	goto loc_8302E630;
loc_8302E62C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302E630:
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

__attribute__((alias("__imp__sub_8302E648"))) PPC_WEAK_FUNC(sub_8302E648);
PPC_FUNC_IMPL(__imp__sub_8302E648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302e658
	if (cr6.lt) goto loc_8302E658;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302E658:
	// b 0x8302e5c0
	sub_8302E5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302E65C"))) PPC_WEAK_FUNC(sub_8302E65C);
PPC_FUNC_IMPL(__imp__sub_8302E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E660"))) PPC_WEAK_FUNC(sub_8302E660);
PPC_FUNC_IMPL(__imp__sub_8302E660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8302E668;
	__savegprlr_29(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302E678;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302e6d4
	if (!cr6.eq) goto loc_8302E6D4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-31204
	ctx.r11.s64 = ctx.r11.s64 + -31204;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302E694;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E6A0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302e6c0
	if (cr6.lt) goto loc_8302E6C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302E6C0;
	sub_825952B8(ctx, base);
loc_8302E6C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302E6D4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8302e840
	if (cr6.gt) goto loc_8302E840;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302e798
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E798;
	// bdzf 4*cr6+eq,0x8302e7dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302E7DC;
	// bne cr6,0x8302e818
	if (!cr6.eq) goto loc_8302E818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302E700;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302E70C;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b54cc0
	ctx.lr = 0x8302E718;
	sub_82B54CC0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,70
	ctx.r5.s64 = 70;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x831cdcf0
	ctx.lr = 0x8302E738;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97528
	ctx.lr = 0x8302E740;
	sub_82D97528(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8302e754
	if (cr6.lt) goto loc_8302E754;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302e758
	goto loc_8302E758;
loc_8302E754:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8302E758:
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x831ce7d8
	ctx.lr = 0x8302E764;
	sub_831CE7D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832f0
	ctx.lr = 0x8302E76C;
	sub_825832F0(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302E778;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302E784;
	sub_82DA4370(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302E798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302E7A0;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302E7A8;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302e7d0
	if (cr6.eq) goto loc_8302E7D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302E7BC;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
loc_8302E7D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302E7DC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-31204
	ctx.r11.s64 = ctx.r11.s64 + -31204;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302E7F0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E7FC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302E804;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302E818:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-31204
	ctx.r11.s64 = ctx.r11.s64 + -31204;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302E82C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E838;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x8302e860
	goto loc_8302E860;
loc_8302E840:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-31204
	ctx.r4.s64 = ctx.r11.s64 + -31204;
	// bl 0x837b0c10
	ctx.lr = 0x8302E850;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E85C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_8302E860:
	// bl 0x8387e8e0
	ctx.lr = 0x8302E864;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302E878"))) PPC_WEAK_FUNC(sub_8302E878);
PPC_FUNC_IMPL(__imp__sub_8302E878) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// bne cr6,0x8302e8d0
	if (!cr6.eq) goto loc_8302E8D0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302e8e0
	if (!cr6.eq) goto loc_8302E8E0;
	// bl 0x82d17d90
	ctx.lr = 0x8302E8B8;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x8302e8e0
	goto loc_8302E8E0;
loc_8302E8D0:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302e8e0
	if (!cr6.eq) goto loc_8302E8E0;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302E8E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8302E8EC;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_8302E904"))) PPC_WEAK_FUNC(sub_8302E904);
PPC_FUNC_IMPL(__imp__sub_8302E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E908"))) PPC_WEAK_FUNC(sub_8302E908);
PPC_FUNC_IMPL(__imp__sub_8302E908) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302E938;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302e978
	if (cr6.eq) goto loc_8302E978;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302E94C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-30576
	ctx.r8.s64 = ctx.r10.s64 + -30576;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// b 0x8302e97c
	goto loc_8302E97C;
loc_8302E978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302E97C:
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

__attribute__((alias("__imp__sub_8302E994"))) PPC_WEAK_FUNC(sub_8302E994);
PPC_FUNC_IMPL(__imp__sub_8302E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E998"))) PPC_WEAK_FUNC(sub_8302E998);
PPC_FUNC_IMPL(__imp__sub_8302E998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302e9a8
	if (cr6.lt) goto loc_8302E9A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302E9A8:
	// b 0x8302e908
	sub_8302E908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302E9AC"))) PPC_WEAK_FUNC(sub_8302E9AC);
PPC_FUNC_IMPL(__imp__sub_8302E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302E9B0"))) PPC_WEAK_FUNC(sub_8302E9B0);
PPC_FUNC_IMPL(__imp__sub_8302E9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8302E9B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302E9C8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302ea14
	if (!cr6.eq) goto loc_8302EA14;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30668
	ctx.r4.s64 = ctx.r11.s64 + -30668;
	// bl 0x837b0c10
	ctx.lr = 0x8302E9E0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302E9EC;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302eab4
	if (cr6.lt) goto loc_8302EAB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302EA0C;
	sub_825952B8(ctx, base);
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EA14:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302EA20;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302EA2C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302EA30;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x8302EA34;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302ea50
	if (!cr6.eq) goto loc_8302EA50;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EA50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302EA58;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b54cc0
	ctx.lr = 0x8302EA64;
	sub_82B54CC0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bl 0x82df16a0
	ctx.lr = 0x8302EA8C;
	sub_82DF16A0(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x8302EA98;
	sub_825832E0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302EAA8;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302EAB4;
	sub_82DA4370(ctx, base);
loc_8302EAB4:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302EABC"))) PPC_WEAK_FUNC(sub_8302EABC);
PPC_FUNC_IMPL(__imp__sub_8302EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302EAC0"))) PPC_WEAK_FUNC(sub_8302EAC0);
PPC_FUNC_IMPL(__imp__sub_8302EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8302EAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302EAD8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302eb34
	if (!cr6.eq) goto loc_8302EB34;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-30676
	ctx.r11.s64 = ctx.r11.s64 + -30676;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x8302EAF4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302EB00;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302eb20
	if (cr6.lt) goto loc_8302EB20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302EB20;
	sub_825952B8(ctx, base);
loc_8302EB20:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EB34:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x8302efa8
	if (cr6.gt) goto loc_8302EFA8;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5284
	ctx.r12.s64 = ctx.r12.s64 + -5284;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8302EB88;
	case 1:
		goto loc_8302EC3C;
	case 2:
		goto loc_8302EEE8;
	case 3:
		goto loc_8302EDD8;
	case 4:
		goto loc_8302EDF8;
	case 5:
		goto loc_8302EE40;
	case 6:
		goto loc_8302EE60;
	case 7:
		goto loc_8302EEA8;
	case 8:
		goto loc_8302EEF4;
	case 9:
		goto loc_8302EF30;
	case 10:
		goto loc_8302EF6C;
	default:
		return;
	}
	// lwz r24,-5240(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -5240);
	// lwz r24,-5060(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -5060);
	// lwz r24,-4376(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4376);
	// lwz r24,-4648(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4648);
	// lwz r24,-4616(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4616);
	// lwz r24,-4544(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4544);
	// lwz r24,-4512(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4512);
	// lwz r24,-4440(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4440);
	// lwz r24,-4364(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4364);
	// lwz r24,-4304(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4304);
	// lwz r24,-4244(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -4244);
loc_8302EB88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302EB90;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83b4c700
	ctx.lr = 0x8302EB98;
	sub_83B4C700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302e9b0
	ctx.lr = 0x8302EBA4;
	sub_8302E9B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4c700
	ctx.lr = 0x8302EBAC;
	sub_83B4C700(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302ec2c
	if (!cr6.eq) goto loc_8302EC2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302EBC0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302EBC4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x8302EBC8;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302ed88
	if (cr6.eq) goto loc_8302ED88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d98848
	ctx.lr = 0x8302EBDC;
	sub_82D98848(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x8302EBEC;
	sub_82D98848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8302ed88
	if (cr6.eq) goto loc_8302ED88;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302ed88
	if (cr6.eq) goto loc_8302ED88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8302EC08;
	sub_82DF16A0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x8302ec28
	if (!cr6.eq) goto loc_8302EC28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8302EC1C;
	sub_82DF16A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8302ec2c
	if (cr6.eq) goto loc_8302EC2C;
loc_8302EC28:
	// stb r27,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r27.u8);
loc_8302EC2C:
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EC3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302EC44;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302EC4C;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302eee8
	if (cr6.eq) goto loc_8302EEE8;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8302ed24
	if (!cr6.eq) goto loc_8302ED24;
	// bl 0x82dab6d0
	ctx.lr = 0x8302EC6C;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8302EC74;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82df16a0
	ctx.lr = 0x8302EC8C;
	sub_82DF16A0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311c260
	ctx.lr = 0x8302EC9C;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x8302ECAC;
	sub_831CE980(ctx, base);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r9,-30676
	ctx.r30.s64 = ctx.r9.s64 + -30676;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-48
	ctx.r3.s64 = ctx.r30.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8302ECCC;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-274
	ctx.r4.s64 = ctx.r30.s64 + -274;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302ECDC;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r1,340
	ctx.r5.s64 = ctx.r1.s64 + 340;
	// ori r4,r4,423
	ctx.r4.u64 = ctx.r4.u64 | 423;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x8302ECF0;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x8302ECFC;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302ED08;
	sub_83103100(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302ED18;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302ED24:
	// bl 0x82dab6d0
	ctx.lr = 0x8302ED28;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302ED34;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302ed9c
	if (cr6.eq) goto loc_8302ED9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302ED48;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302ED4C;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x8302ED50;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302ed88
	if (cr6.eq) goto loc_8302ED88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4c700
	ctx.lr = 0x8302ED64;
	sub_83B4C700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x8302ED70;
	sub_82D98848(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302ed88
	if (cr6.eq) goto loc_8302ED88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d97540
	ctx.lr = 0x8302ED88;
	sub_82D97540(ctx, base);
loc_8302ED88:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302ED9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4c700
	ctx.lr = 0x8302EDA4;
	sub_83B4C700(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302edc4
	if (cr6.eq) goto loc_8302EDC4;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302edc4
	if (cr6.eq) goto loc_8302EDC4;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82d84728
	ctx.lr = 0x8302EDC4;
	sub_82D84728(ctx, base);
loc_8302EDC4:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EDD8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302e9b0
	ctx.lr = 0x8302EDE4;
	sub_8302E9B0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EDF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302EE00;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302EE08;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302eee8
	if (cr6.eq) goto loc_8302EEE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302EE1C;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EE40:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302e9b0
	ctx.lr = 0x8302EE4C;
	sub_8302E9B0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EE60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302EE68;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302EE70;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302eee8
	if (cr6.eq) goto loc_8302EEE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302EE84;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EEA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8bb28
	ctx.lr = 0x8302EEB0;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302eee0
	if (cr6.eq) goto loc_8302EEE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 9;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EEE0:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302EEE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EEF4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-30676
	ctx.r11.s64 = ctx.r11.s64 + -30676;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x8302EF08;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302EF14;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8302EF1C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EF30:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-30676
	ctx.r11.s64 = ctx.r11.s64 + -30676;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302EF44;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302EF50;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302EF58;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EF6C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-30676
	ctx.r11.s64 = ctx.r11.s64 + -30676;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302EF80;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302EF8C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302EF94;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302EFA8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-30676
	ctx.r4.s64 = ctx.r11.s64 + -30676;
	// bl 0x837b0c10
	ctx.lr = 0x8302EFB8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302EFC4;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302EFCC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302EFE0"))) PPC_WEAK_FUNC(sub_8302EFE0);
PPC_FUNC_IMPL(__imp__sub_8302EFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8302f008
	if (!cr6.eq) goto loc_8302F008;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302f02c
	if (!cr6.eq) goto loc_8302F02C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8302f028
	goto loc_8302F028;
loc_8302F008:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8302f02c
	if (!cr6.eq) goto loc_8302F02C;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302f02c
	if (!cr6.eq) goto loc_8302F02C;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8302F028:
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8302F02C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302F030"))) PPC_WEAK_FUNC(sub_8302F030);
PPC_FUNC_IMPL(__imp__sub_8302F030) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302F060;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f0a0
	if (cr6.eq) goto loc_8302F0A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302F074;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-30024
	ctx.r8.s64 = ctx.r10.s64 + -30024;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8302f0a4
	goto loc_8302F0A4;
loc_8302F0A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302F0A4:
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

__attribute__((alias("__imp__sub_8302F0BC"))) PPC_WEAK_FUNC(sub_8302F0BC);
PPC_FUNC_IMPL(__imp__sub_8302F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302F0C0"))) PPC_WEAK_FUNC(sub_8302F0C0);
PPC_FUNC_IMPL(__imp__sub_8302F0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302f0d0
	if (cr6.lt) goto loc_8302F0D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302F0D0:
	// b 0x8302f030
	sub_8302F030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302F0D4"))) PPC_WEAK_FUNC(sub_8302F0D4);
PPC_FUNC_IMPL(__imp__sub_8302F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302F0D8"))) PPC_WEAK_FUNC(sub_8302F0D8);
PPC_FUNC_IMPL(__imp__sub_8302F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8302F0E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302F0F0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302f14c
	if (!cr6.eq) goto loc_8302F14C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-30116
	ctx.r11.s64 = ctx.r11.s64 + -30116;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x8302F10C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302F118;
	sub_82E88020(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302f138
	if (cr6.lt) goto loc_8302F138;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302F138;
	sub_825952B8(ctx, base);
loc_8302F138:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F14C:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8302f600
	if (cr6.gt) goto loc_8302F600;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302f590
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F590;
	// bdzf 4*cr6+eq,0x8302f340
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F340;
	// bdzf 4*cr6+eq,0x8302f41c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F41C;
	// bdzf 4*cr6+eq,0x8302f49c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F49C;
	// bdzf 4*cr6+eq,0x8302f590
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F590;
	// bdzf 4*cr6+eq,0x8302f59c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F59C;
	// bne cr6,0x8302f5d8
	if (!cr6.eq) goto loc_8302F5D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302F188;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302F18C;
	sub_82D99C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302F198;
	sub_82DAB6D0(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x8302F19C;
	sub_8332F198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8302F1A8;
	sub_82D9AA60(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-30116
	ctx.r30.s64 = ctx.r11.s64 + -30116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-298
	ctx.r4.s64 = ctx.r30.s64 + -298;
	// bl 0x837b0c10
	ctx.lr = 0x8302F1C0;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98830
	ctx.lr = 0x8302F1C8;
	sub_82D98830(ctx, base);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// bne cr6,0x8302f298
	if (!cr6.eq) goto loc_8302F298;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98e10
	ctx.lr = 0x8302F1DC;
	sub_82D98E10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302f298
	if (cr6.eq) goto loc_8302F298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98770
	ctx.lr = 0x8302F1F0;
	sub_82D98770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302f27c
	if (!cr6.eq) goto loc_8302F27C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x8302F204;
	sub_83767D18(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302f218
	if (cr6.lt) goto loc_8302F218;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302f21c
	goto loc_8302F21C;
loc_8302F218:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8302F21C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,390
	ctx.r4.u64 = ctx.r4.u64 | 390;
	// bl 0x82d042a8
	ctx.lr = 0x8302F22C;
	sub_82D042A8(ctx, base);
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x8302F240;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f324
	if (cr6.eq) goto loc_8302F324;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8302f260
	if (!cr6.lt) goto loc_8302F260;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8302F260:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x8302F268;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302F274;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x8302f314
	goto loc_8302F314;
loc_8302F27C:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302F28C;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F298:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x8302F2A0;
	sub_83767D18(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302f2b4
	if (cr6.lt) goto loc_8302F2B4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302f2b8
	goto loc_8302F2B8;
loc_8302F2B4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8302F2B8:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,389
	ctx.r4.u64 = ctx.r4.u64 | 389;
	// bl 0x82d042a8
	ctx.lr = 0x8302F2C8;
	sub_82D042A8(ctx, base);
	// addi r3,r30,-72
	ctx.r3.s64 = ctx.r30.s64 + -72;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x8302F2DC;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f324
	if (cr6.eq) goto loc_8302F324;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8302f2fc
	if (!cr6.lt) goto loc_8302F2FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8302F2FC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x8302F304;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302F310;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_8302F314:
	// bl 0x8387e8e0
	ctx.lr = 0x8302F318;
	sub_8387E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302F324;
	sub_83103100(ctx, base);
loc_8302F324:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302F334;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302F348;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302F354;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302F360;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302F364;
	sub_82D99C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8332f198
	ctx.lr = 0x8302F370;
	sub_8332F198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8302F37C;
	sub_82D9AA60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b54cc0
	ctx.lr = 0x8302F388;
	sub_82B54CC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stw r11,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// bl 0x8332f198
	ctx.lr = 0x8302F3A4;
	sub_8332F198(ctx, base);
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d999a0
	ctx.lr = 0x8302F3B0;
	sub_82D999A0(ctx, base);
	// stw r3,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302F3BC;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302F3C8;
	sub_82DA4370(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302f40c
	if (!cr6.eq) goto loc_8302F40C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-30116
	ctx.r11.s64 = ctx.r11.s64 + -30116;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x8302F3E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302F3F4;
	sub_82D894E0(ctx, base);
	// stw r3,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x8302F400;
	sub_8387E8E0(ctx, base);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r10,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r10.u32);
loc_8302F40C:
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F41C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302F424;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302F42C;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302f590
	if (cr6.eq) goto loc_8302F590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302F440;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302f460
	if (cr6.eq) goto loc_8302F460;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F460:
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f488
	if (cr6.eq) goto loc_8302F488;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302F47C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8302f590
	if (cr6.eq) goto loc_8302F590;
loc_8302F488:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F49C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,-30116
	ctx.r30.s64 = ctx.r11.s64 + -30116;
	// addi r4,r30,-297
	ctx.r4.s64 = ctx.r30.s64 + -297;
	// bl 0x837b0c10
	ctx.lr = 0x8302F4B0;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302F4B8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302F4BC;
	sub_82D99C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302F4C8;
	sub_82DAB6D0(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x8302F4CC;
	sub_8332F198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8302F4D8;
	sub_82D9AA60(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302f4f4
	if (cr6.eq) goto loc_8302F4F4;
	// li r3,259
	ctx.r3.s64 = 259;
	// bl 0x82d84728
	ctx.lr = 0x8302F4F4;
	sub_82D84728(ctx, base);
loc_8302F4F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x8302F4FC;
	sub_83767D18(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302f510
	if (cr6.lt) goto loc_8302F510;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302f514
	goto loc_8302F514;
loc_8302F510:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8302F514:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,416
	ctx.r4.u64 = ctx.r4.u64 | 416;
	// bl 0x82d042a8
	ctx.lr = 0x8302F524;
	sub_82D042A8(ctx, base);
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x8302F538;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f580
	if (cr6.eq) goto loc_8302F580;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8302f558
	if (!cr6.lt) goto loc_8302F558;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8302F558:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x8302F560;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302F56C;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x8302F574;
	sub_8387E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302F580;
	sub_83103100(ctx, base);
loc_8302F580:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302F590;
	sub_8387E8E0(ctx, base);
loc_8302F590:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F59C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-30116
	ctx.r11.s64 = ctx.r11.s64 + -30116;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302F5B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302F5BC;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302F5C4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302F5D8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-30116
	ctx.r11.s64 = ctx.r11.s64 + -30116;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302F5EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302F5F8;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x8302f620
	goto loc_8302F620;
loc_8302F600:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-30116
	ctx.r4.s64 = ctx.r11.s64 + -30116;
	// bl 0x837b0c10
	ctx.lr = 0x8302F610;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302F61C;
	sub_82E88020(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_8302F620:
	// bl 0x8387e8e0
	ctx.lr = 0x8302F624;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302F638"))) PPC_WEAK_FUNC(sub_8302F638);
PPC_FUNC_IMPL(__imp__sub_8302F638) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302F668;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f6ac
	if (cr6.eq) goto loc_8302F6AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302F67C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-29472
	ctx.r8.s64 = ctx.r10.s64 + -29472;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x8302f6b0
	goto loc_8302F6B0;
loc_8302F6AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302F6B0:
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

__attribute__((alias("__imp__sub_8302F6C8"))) PPC_WEAK_FUNC(sub_8302F6C8);
PPC_FUNC_IMPL(__imp__sub_8302F6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302f6d8
	if (cr6.lt) goto loc_8302F6D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302F6D8:
	// b 0x8302f638
	sub_8302F638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302F6DC"))) PPC_WEAK_FUNC(sub_8302F6DC);
PPC_FUNC_IMPL(__imp__sub_8302F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302F6E0"))) PPC_WEAK_FUNC(sub_8302F6E0);
PPC_FUNC_IMPL(__imp__sub_8302F6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8302F6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-2400(r1)
	ea = -2400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302F6F8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302f754
	if (!cr6.eq) goto loc_8302F754;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-29568
	ctx.r11.s64 = ctx.r11.s64 + -29568;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x8302F714;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302F720;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302f740
	if (cr6.lt) goto loc_8302F740;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302F740;
	sub_825952B8(ctx, base);
loc_8302F740:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F754:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8302fa48
	if (cr6.gt) goto loc_8302FA48;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302f824
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F824;
	// bdzf 4*cr6+eq,0x8302f86c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F86C;
	// bdzf 4*cr6+eq,0x8302f8bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F8BC;
	// bdzf 4*cr6+eq,0x8302f924
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F924;
	// bdzf 4*cr6+eq,0x8302f98c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F98C;
	// bdzf 4*cr6+eq,0x8302f9e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302F9E4;
	// bne cr6,0x8302fa20
	if (!cr6.eq) goto loc_8302FA20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302F790;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302F79C;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302F7A8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302F7AC;
	sub_82D99C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832f0
	ctx.lr = 0x8302F7B8;
	sub_825832F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8302F7C4;
	sub_82D9AA60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82b54cc0
	ctx.lr = 0x8302F7D0;
	sub_82B54CC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// bl 0x825832f0
	ctx.lr = 0x8302F7EC;
	sub_825832F0(ctx, base);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d999a0
	ctx.lr = 0x8302F7F8;
	sub_82D999A0(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302F804;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302F810;
	sub_82DA4370(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F824:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302F82C;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302F834;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302f9d8
	if (cr6.eq) goto loc_8302F9D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302F848;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F86C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-29568
	ctx.r11.s64 = ctx.r11.s64 + -29568;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x8302F880;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302F88C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302F898;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F8BC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8302F8C4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302f9d8
	if (cr6.eq) goto loc_8302F9D8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f8f4
	if (cr6.eq) goto loc_8302F8F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302F8EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8302F8F4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8302f910
	if (!cr6.eq) goto loc_8302F910;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F910:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F924:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302F92C;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x8302F934;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976a8
	ctx.lr = 0x8302F940;
	sub_82D976A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-29568
	ctx.r11.s64 = ctx.r11.s64 + -29568;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8302F954;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302F960;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302F96C;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F98C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x8302F994;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302f9d8
	if (cr6.eq) goto loc_8302F9D8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302f9c4
	if (cr6.eq) goto loc_8302F9C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302F9BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_8302F9C4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_8302F9D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302F9E4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-29568
	ctx.r11.s64 = ctx.r11.s64 + -29568;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302F9F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302FA04;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8302FA0C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302FA20:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-29568
	ctx.r11.s64 = ctx.r11.s64 + -29568;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302FA34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302FA40;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8302fa68
	goto loc_8302FA68;
loc_8302FA48:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-29568
	ctx.r4.s64 = ctx.r11.s64 + -29568;
	// bl 0x837b0c10
	ctx.lr = 0x8302FA58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302FA64;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
loc_8302FA68:
	// bl 0x8387e8e0
	ctx.lr = 0x8302FA6C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302FA80"))) PPC_WEAK_FUNC(sub_8302FA80);
PPC_FUNC_IMPL(__imp__sub_8302FA80) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302FAB0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302faec
	if (cr6.eq) goto loc_8302FAEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302FAC4;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28984
	ctx.r9.s64 = ctx.r11.s64 + -28984;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8302faf0
	goto loc_8302FAF0;
loc_8302FAEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302FAF0:
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

__attribute__((alias("__imp__sub_8302FB08"))) PPC_WEAK_FUNC(sub_8302FB08);
PPC_FUNC_IMPL(__imp__sub_8302FB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302fb18
	if (cr6.lt) goto loc_8302FB18;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302FB18:
	// b 0x8302fa80
	sub_8302FA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302FB1C"))) PPC_WEAK_FUNC(sub_8302FB1C);
PPC_FUNC_IMPL(__imp__sub_8302FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302FB20"))) PPC_WEAK_FUNC(sub_8302FB20);
PPC_FUNC_IMPL(__imp__sub_8302FB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8302FB28;
	__savegprlr_29(ctx, base);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302FB38;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302fb94
	if (!cr6.eq) goto loc_8302FB94;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-29076
	ctx.r11.s64 = ctx.r11.s64 + -29076;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302FB54;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302FB60;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302fb80
	if (cr6.lt) goto loc_8302FB80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302FB80;
	sub_825952B8(ctx, base);
loc_8302FB80:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302FB94:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8302fc58
	if (cr6.lt) goto loc_8302FC58;
	// beq cr6,0x8302fc20
	if (cr6.eq) goto loc_8302FC20;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// beq cr6,0x8302fbe8
	if (cr6.eq) goto loc_8302FBE8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29076
	ctx.r4.s64 = ctx.r11.s64 + -29076;
	// bl 0x837b0c10
	ctx.lr = 0x8302FBC0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302FBCC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302FBD4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302FBE8:
	// addi r11,r11,-29076
	ctx.r11.s64 = ctx.r11.s64 + -29076;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302FBF8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302FC04;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302FC0C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302FC20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302FC28;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302FC30;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302fcb0
	if (cr6.eq) goto loc_8302FCB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302FC44;
	sub_82DA43B8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302FC58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302FC60;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302FC6C;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b54cc0
	ctx.lr = 0x8302FC78;
	sub_82B54CC0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// bl 0x825832f0
	ctx.lr = 0x8302FC90;
	sub_825832F0(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302FC9C;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302FCA8;
	sub_82DA4370(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_8302FCB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302FCBC"))) PPC_WEAK_FUNC(sub_8302FCBC);
PPC_FUNC_IMPL(__imp__sub_8302FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302FCC0"))) PPC_WEAK_FUNC(sub_8302FCC0);
PPC_FUNC_IMPL(__imp__sub_8302FCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302fcdc
	if (!cr6.eq) goto loc_8302FCDC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8302FCDC:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302FCE0"))) PPC_WEAK_FUNC(sub_8302FCE0);
PPC_FUNC_IMPL(__imp__sub_8302FCE0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302FD10;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302fd4c
	if (cr6.eq) goto loc_8302FD4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302FD24;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28472
	ctx.r9.s64 = ctx.r11.s64 + -28472;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8302fd50
	goto loc_8302FD50;
loc_8302FD4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302FD50:
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

__attribute__((alias("__imp__sub_8302FD68"))) PPC_WEAK_FUNC(sub_8302FD68);
PPC_FUNC_IMPL(__imp__sub_8302FD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8302fd78
	if (cr6.lt) goto loc_8302FD78;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8302FD78:
	// b 0x8302fce0
	sub_8302FCE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302FD7C"))) PPC_WEAK_FUNC(sub_8302FD7C);
PPC_FUNC_IMPL(__imp__sub_8302FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8302FD80"))) PPC_WEAK_FUNC(sub_8302FD80);
PPC_FUNC_IMPL(__imp__sub_8302FD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8302FD88;
	__savegprlr_26(ctx, base);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302FD98;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302fdf4
	if (!cr6.eq) goto loc_8302FDF4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-28564
	ctx.r11.s64 = ctx.r11.s64 + -28564;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8302FDB4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302FDC0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302fde0
	if (cr6.lt) goto loc_8302FDE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302FDE0;
	sub_825952B8(ctx, base);
loc_8302FDE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8302FDF4:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8303037c
	if (cr6.gt) goto loc_8303037C;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-484
	ctx.r12.s64 = ctx.r12.s64 + -484;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8302FE50;
	case 1:
		goto loc_8302FEEC;
	case 2:
		goto loc_8302FF4C;
	case 3:
		goto loc_8302FFE8;
	case 4:
		goto loc_83030030;
	case 5:
		goto loc_83030134;
	case 6:
		goto loc_8303017C;
	case 7:
		goto loc_8303024C;
	case 8:
		goto loc_830302CC;
	case 9:
		goto loc_8303030C;
	case 10:
		goto loc_83030318;
	case 11:
		goto loc_8303037C;
	case 12:
		goto loc_83030354;
	default:
		return;
	}
	// lwz r24,-432(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -432);
	// lwz r24,-276(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -276);
	// lwz r24,-180(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -180);
	// lwz r24,-24(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r24,308(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r24,380(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// lwz r24,588(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// lwz r24,716(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// lwz r24,780(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// lwz r24,792(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// lwz r24,892(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 892);
	// lwz r24,852(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
loc_8302FE50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302FE58;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302FE64;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b54cc0
	ctx.lr = 0x8302FE70;
	sub_82B54CC0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r5,70
	ctx.r5.s64 = 70;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x831cdcf0
	ctx.lr = 0x8302FE90;
	sub_831CDCF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97528
	ctx.lr = 0x8302FE98;
	sub_82D97528(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302feac
	if (cr6.lt) goto loc_8302FEAC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302feb0
	goto loc_8302FEB0;
loc_8302FEAC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8302FEB0:
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x831ce7d8
	ctx.lr = 0x8302FEBC;
	sub_831CE7D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8302FEC4;
	sub_82DF16A0(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302FED0;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302FEDC;
	sub_82DA4370(ctx, base);
	// stw r29,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8302FEEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302FEF4;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302FEFC;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303030c
	if (cr6.eq) goto loc_8303030C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302FF10;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302ff30
	if (cr6.eq) goto loc_8302FF30;
loc_8302FF1C:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8302FF30:
	// li r3,258
	ctx.r3.s64 = 258;
	// bl 0x82d84728
	ctx.lr = 0x8302FF38;
	sub_82D84728(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8302FF4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302FF54;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302FF60;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302FF6C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8302FF70;
	sub_82D99C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x8302FF7C;
	sub_825832F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8302FF88;
	sub_82D9AA60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b54cc0
	ctx.lr = 0x8302FF94;
	sub_82B54CC0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// bl 0x825832f0
	ctx.lr = 0x8302FFB0;
	sub_825832F0(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d999a0
	ctx.lr = 0x8302FFBC;
	sub_82D999A0(ctx, base);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8302FFC8;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302FFD4;
	sub_82DA4370(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8302FFE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302FFF0;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302FFF8;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303030c
	if (cr6.eq) goto loc_8303030C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8303000C;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83030038;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83030044;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83030050;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x8303005C;
	sub_82D99C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x83030068;
	sub_825832F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x83030074;
	sub_82D9AA60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b54cc0
	ctx.lr = 0x83030080;
	sub_82B54CC0(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8303009C:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stbu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8303009c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8303009C;
	// stb r31,376(r1)
	PPC_STORE_U8(ctx.r1.u32 + 376, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// bl 0x825832e0
	ctx.lr = 0x830300B8;
	sub_825832E0(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// addi r30,r1,228
	ctx.r30.s64 = ctx.r1.s64 + 228;
loc_830300C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d987f8
	ctx.lr = 0x830300CC;
	sub_82D987F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x825832e0
	ctx.lr = 0x830300D4;
	sub_825832E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82a47dc0
	ctx.lr = 0x830300E4;
	sub_82A47DC0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbu r3,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x830300c0
	if (cr6.lt) goto loc_830300C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98c30
	ctx.lr = 0x830300FC;
	sub_82D98C30(ctx, base);
	// stb r3,376(r1)
	PPC_STORE_U8(ctx.r1.u32 + 376, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d999a0
	ctx.lr = 0x83030108;
	sub_82D999A0(ctx, base);
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83030114;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x83030120;
	sub_82DA4370(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303013C;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83030144;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303030c
	if (cr6.eq) goto loc_8303030C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83030158;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303017C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83030184;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83030190;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x8303019C;
	sub_82D99C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830301A8;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x825832f0
	ctx.lr = 0x830301B0;
	sub_825832F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x830301BC;
	sub_82D9AA60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83133f38
	ctx.lr = 0x830301C4;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302ff1c
	if (!cr6.eq) goto loc_8302FF1C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b54cc0
	ctx.lr = 0x830301D8;
	sub_82B54CC0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// stw r31,2280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2280, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x830301FC;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832f0
	ctx.lr = 0x83030204;
	sub_825832F0(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98930
	ctx.lr = 0x83030210;
	sub_82D98930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r6,r1,2280
	ctx.r6.s64 = ctx.r1.s64 + 2280;
	// bl 0x82d8d090
	ctx.lr = 0x83030224;
	sub_82D8D090(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8303022C;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4370
	ctx.lr = 0x83030238;
	sub_82DA4370(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303024C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83030254;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8303025C;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303030c
	if (cr6.eq) goto loc_8303030C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83030270;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302ff1c
	if (!cr6.eq) goto loc_8302FF1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83030284;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d976d8
	ctx.lr = 0x8303028C;
	sub_82D976D8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830302b8
	if (cr6.eq) goto loc_830302B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d976d8
	ctx.lr = 0x8303029C;
	sub_82D976D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x830302b8
	if (cr6.eq) goto loc_830302B8;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830302B8:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830302CC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-28564
	ctx.r11.s64 = ctx.r11.s64 + -28564;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x830302E8;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,250
	ctx.r4.u64 = ctx.r4.u64 | 250;
	// bl 0x82d2ada8
	ctx.lr = 0x830302F8;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83103100
	ctx.lr = 0x83030304;
	sub_83103100(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r10.u32);
loc_8303030C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030318:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-28564
	ctx.r11.s64 = ctx.r11.s64 + -28564;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8303032C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030338;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83030340;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030354:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-28564
	ctx.r11.s64 = ctx.r11.s64 + -28564;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83030368;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030374;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x8303039c
	goto loc_8303039C;
loc_8303037C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28564
	ctx.r4.s64 = ctx.r11.s64 + -28564;
	// bl 0x837b0c10
	ctx.lr = 0x8303038C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030398;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_8303039C:
	// bl 0x8387e8e0
	ctx.lr = 0x830303A0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830303B4"))) PPC_WEAK_FUNC(sub_830303B4);
PPC_FUNC_IMPL(__imp__sub_830303B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830303B8"))) PPC_WEAK_FUNC(sub_830303B8);
PPC_FUNC_IMPL(__imp__sub_830303B8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83030410
	if (!cr6.eq) goto loc_83030410;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83030440
	if (!cr6.eq) goto loc_83030440;
	// bl 0x82d17d90
	ctx.lr = 0x830303F8;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83030440
	goto loc_83030440;
loc_83030410:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// bne cr6,0x83030430
	if (!cr6.eq) goto loc_83030430;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83030440
	if (!cr6.eq) goto loc_83030440;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8303043c
	goto loc_8303043C;
loc_83030430:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83030440
	if (!cr6.eq) goto loc_83030440;
	// li r11,8
	ctx.r11.s64 = 8;
loc_8303043C:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83030440:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8303044C;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_83030464"))) PPC_WEAK_FUNC(sub_83030464);
PPC_FUNC_IMPL(__imp__sub_83030464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83030468"))) PPC_WEAK_FUNC(sub_83030468);
PPC_FUNC_IMPL(__imp__sub_83030468) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83030498;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830304d8
	if (cr6.eq) goto loc_830304D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830304AC;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-27920
	ctx.r8.s64 = ctx.r10.s64 + -27920;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// b 0x830304dc
	goto loc_830304DC;
loc_830304D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830304DC:
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

__attribute__((alias("__imp__sub_830304F4"))) PPC_WEAK_FUNC(sub_830304F4);
PPC_FUNC_IMPL(__imp__sub_830304F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830304F8"))) PPC_WEAK_FUNC(sub_830304F8);
PPC_FUNC_IMPL(__imp__sub_830304F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83030508
	if (cr6.lt) goto loc_83030508;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83030508:
	// b 0x83030468
	sub_83030468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303050C"))) PPC_WEAK_FUNC(sub_8303050C);
PPC_FUNC_IMPL(__imp__sub_8303050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83030510"))) PPC_WEAK_FUNC(sub_83030510);
PPC_FUNC_IMPL(__imp__sub_83030510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83030518;
	__savegprlr_26(ctx, base);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83030528;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83030588
	if (!cr6.eq) goto loc_83030588;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-28012
	ctx.r11.s64 = ctx.r11.s64 + -28012;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x83030548;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030554;
	sub_82E88020(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83030574
	if (cr6.lt) goto loc_83030574;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83030574;
	sub_825952B8(ctx, base);
loc_83030574:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030588:
	// bl 0x831156e8
	ctx.lr = 0x8303058C;
	sub_831156E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830305cc
	if (!cr6.eq) goto loc_830305CC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-28012
	ctx.r11.s64 = ctx.r11.s64 + -28012;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x830305AC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x830305B8;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x830305C0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830305CC:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r29,116(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x830309e8
	if (cr6.gt) goto loc_830309E8;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1524
	ctx.r12.s64 = ctx.r12.s64 + 1524;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8303061C;
	case 1:
		goto loc_83030964;
	case 2:
		goto loc_83030740;
	case 3:
		goto loc_83030814;
	case 4:
		goto loc_83030874;
	case 5:
		goto loc_83030964;
	case 6:
		goto loc_83030924;
	case 7:
		goto loc_83030964;
	case 8:
		goto loc_83030970;
	case 9:
		goto loc_830309AC;
	default:
		return;
	}
	// lwz r24,1564(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1564);
	// lwz r24,2404(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2404);
	// lwz r24,1856(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1856);
	// lwz r24,2068(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2068);
	// lwz r24,2164(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2164);
	// lwz r24,2404(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2404);
	// lwz r24,2340(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2340);
	// lwz r24,2404(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2404);
	// lwz r24,2416(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// lwz r24,2476(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2476);
loc_8303061C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8200
	ctx.lr = 0x83030624;
	sub_831F8200(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x82d9f020
	ctx.lr = 0x83030654;
	sub_82D9F020(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83030674
	if (!cr6.eq) goto loc_83030674;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030674:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8303067C;
	sub_82DAB6D0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r11,-28012
	ctx.r29.s64 = ctx.r11.s64 + -28012;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r29,-64
	ctx.r3.s64 = ctx.r29.s64 + -64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x830306A0;
	sub_82D2F6D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bl 0x825832e0
	ctx.lr = 0x830306B0;
	sub_825832E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x830306C0;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r29,-298
	ctx.r4.s64 = ctx.r29.s64 + -298;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x830306D0;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r4,r4,163
	ctx.r4.u64 = ctx.r4.u64 | 163;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x830306E8;
	sub_82D042A8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x830306fc
	if (!cr6.lt) goto loc_830306FC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_830306FC:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x837b0c10
	ctx.lr = 0x83030704;
	sub_837B0C10(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83030710;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x83030718;
	sub_8387E8E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83030724;
	sub_83103100(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8303072C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030740:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x83030748;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8200
	ctx.lr = 0x83030754;
	sub_831F8200(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83030760;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82b54cc0
	ctx.lr = 0x8303076C;
	sub_82B54CC0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,14
	ctx.r11.s64 = 14;
	// li r5,44
	ctx.r5.s64 = 44;
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// stb r31,405(r1)
	PPC_STORE_U8(ctx.r1.u32 + 405, ctx.r31.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x83030790;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x83030798;
	sub_825832E0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stb r31,405(r1)
	PPC_STORE_U8(ctx.r1.u32 + 405, ctx.r31.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// bl 0x82d9f020
	ctx.lr = 0x830307D4;
	sub_82D9F020(ctx, base);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830307ec
	if (!cr6.eq) goto loc_830307EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r11.u8);
	// stb r11,405(r1)
	PPC_STORE_U8(ctx.r1.u32 + 405, ctx.r11.u8);
loc_830307EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x830307F4;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x83030800;
	sub_82DA4370(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030814:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303081C;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83030824;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83030964
	if (cr6.eq) goto loc_83030964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83030838;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83030858
	if (cr6.eq) goto loc_83030858;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030858:
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x82d84728
	ctx.lr = 0x83030860;
	sub_82D84728(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030874:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8303087C;
	sub_82DAB6D0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-28012
	ctx.r31.s64 = ctx.r11.s64 + -28012;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8303089C;
	sub_82D2FA90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x825832e0
	ctx.lr = 0x830308B0;
	sub_825832E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x830308C0;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-297
	ctx.r4.s64 = ctx.r31.s64 + -297;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x830308D0;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r29,56
	ctx.r5.s64 = ctx.r29.s64 + 56;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x830308E4;
	sub_82D042A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82d2aab0
	ctx.lr = 0x830308F0;
	sub_82D2AAB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x830308FC;
	sub_83103100(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x83030900;
	sub_82D26ED8(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82d26b18
	ctx.lr = 0x83030908;
	sub_82D26B18(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83030910;
	sub_8387E8E0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030924:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-28012
	ctx.r11.s64 = ctx.r11.s64 + -28012;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83030940;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,166
	ctx.r4.u64 = ctx.r4.u64 | 166;
	// bl 0x82d2ada8
	ctx.lr = 0x83030950;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x8303095C;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
loc_83030964:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83030970:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-28012
	ctx.r11.s64 = ctx.r11.s64 + -28012;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83030984;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030990;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83030998;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830309AC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-28012
	ctx.r11.s64 = ctx.r11.s64 + -28012;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830309C0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x830309CC;
	sub_82E88020(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x830309D4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830309E8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-28012
	ctx.r4.s64 = ctx.r11.s64 + -28012;
	// bl 0x837b0c10
	ctx.lr = 0x830309F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030A04;
	sub_82E88020(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x83030A0C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83030A20"))) PPC_WEAK_FUNC(sub_83030A20);
PPC_FUNC_IMPL(__imp__sub_83030A20) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// bne cr6,0x83030a78
	if (!cr6.eq) goto loc_83030A78;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83030a88
	if (!cr6.eq) goto loc_83030A88;
	// bl 0x82d17d90
	ctx.lr = 0x83030A60;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83030a88
	goto loc_83030A88;
loc_83030A78:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83030a88
	if (!cr6.eq) goto loc_83030A88;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83030A88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83030A94;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_83030AAC"))) PPC_WEAK_FUNC(sub_83030AAC);
PPC_FUNC_IMPL(__imp__sub_83030AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83030AB0"))) PPC_WEAK_FUNC(sub_83030AB0);
PPC_FUNC_IMPL(__imp__sub_83030AB0) {
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
	ctx.lr = 0x83030AC0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83030aec
	if (cr6.eq) goto loc_83030AEC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83030AD0;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x83030AD4;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,265
	ctx.r3.s64 = 265;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83030ae8
	if (!cr6.eq) goto loc_83030AE8;
	// li r3,264
	ctx.r3.s64 = 264;
loc_83030AE8:
	// bl 0x82d84728
	ctx.lr = 0x83030AEC;
	sub_82D84728(ctx, base);
loc_83030AEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83030AFC"))) PPC_WEAK_FUNC(sub_83030AFC);
PPC_FUNC_IMPL(__imp__sub_83030AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83030B00"))) PPC_WEAK_FUNC(sub_83030B00);
PPC_FUNC_IMPL(__imp__sub_83030B00) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83030B30;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83030b6c
	if (cr6.eq) goto loc_83030B6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83030B44;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27392
	ctx.r9.s64 = ctx.r11.s64 + -27392;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83030b70
	goto loc_83030B70;
loc_83030B6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83030B70:
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

__attribute__((alias("__imp__sub_83030B88"))) PPC_WEAK_FUNC(sub_83030B88);
PPC_FUNC_IMPL(__imp__sub_83030B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83030b98
	if (cr6.lt) goto loc_83030B98;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83030B98:
	// b 0x83030b00
	sub_83030B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83030B9C"))) PPC_WEAK_FUNC(sub_83030B9C);
PPC_FUNC_IMPL(__imp__sub_83030B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83030BA0"))) PPC_WEAK_FUNC(sub_83030BA0);
PPC_FUNC_IMPL(__imp__sub_83030BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83030BA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-2480(r1)
	ea = -2480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83030BB8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83030c14
	if (!cr6.eq) goto loc_83030C14;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-27484
	ctx.r11.s64 = ctx.r11.s64 + -27484;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x83030BD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030BE0;
	sub_82E88020(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83030c00
	if (cr6.lt) goto loc_83030C00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83030C00;
	sub_825952B8(ctx, base);
loc_83030C00:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83030C14:
	// lwz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83031034
	if (cr6.gt) goto loc_83031034;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83030fb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83030FB0;
	// bdzf 4*cr6+eq,0x83030da0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83030DA0;
	// bdzf 4*cr6+eq,0x83030ee0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83030EE0;
	// bdzf 4*cr6+eq,0x83030f64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83030F64;
	// bdzf 4*cr6+eq,0x83030fb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83030FB0;
	// bdzf 4*cr6+eq,0x83030fbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83030FBC;
	// bne cr6,0x83030ff8
	if (!cr6.eq) goto loc_83030FF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83030C50;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x83030C5C;
	sub_831F8200(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83030C68;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83030C6C;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83030C70;
	sub_825832F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83030fb0
	if (cr6.eq) goto loc_83030FB0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// bl 0x82d9f020
	ctx.lr = 0x83030CB4;
	sub_82D9F020(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r31,r10,-27484
	ctx.r31.s64 = ctx.r10.s64 + -27484;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83030CD4;
	sub_82D2F6D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r31,-274
	ctx.r4.s64 = ctx.r31.s64 + -274;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x83030CE4;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83030CEC;
	sub_82D975E8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83030d08
	if (cr6.eq) goto loc_83030D08;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x83030d68
	goto loc_83030D68;
loc_83030D08:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_83030D0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83030D18;
	sub_82D987F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83030D20;
	sub_82D983F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83030d50
	if (cr6.eq) goto loc_83030D50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83133f38
	ctx.lr = 0x83030D34;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83030d50
	if (!cr6.eq) goto loc_83030D50;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83030d50
	if (cr6.eq) goto loc_83030D50;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_83030D50:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x83030d0c
	if (cr6.lt) goto loc_83030D0C;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
loc_83030D68:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x83030D70;
	sub_82D042A8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83030D7C;
	sub_82D2AAB0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103100
	ctx.lr = 0x83030D88;
	sub_83103100(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83030D90;
	sub_8387E8E0(ctx, base);
	// stw r25,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83030DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83030DA8;
	sub_825832E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x83030DB4;
	sub_831F8200(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83030DC0;
	sub_82DAB6D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b54cc0
	ctx.lr = 0x83030DCC;
	sub_82B54CC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,14
	ctx.r11.s64 = 14;
	// li r5,44
	ctx.r5.s64 = 44;
	// stb r30,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,341(r1)
	PPC_STORE_U8(ctx.r1.u32 + 341, ctx.r30.u8);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83030DF0;
	sub_831CDCF0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83030DF8;
	sub_82D975E8(ctx, base);
	// stb r3,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83030E04;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83030E08;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83030E0C;
	sub_825832F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r27,r1,340
	ctx.r27.s64 = ctx.r1.s64 + 340;
loc_83030E18:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83030E24;
	sub_82D987F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83030E2C;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83030e58
	if (cr6.eq) goto loc_83030E58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83030e58
	if (cr6.eq) goto loc_83030E58;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83030e58
	if (cr6.eq) goto loc_83030E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x83030E54;
	sub_825832E0(ctx, base);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
loc_83030E58:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x83030e18
	if (cr6.lt) goto loc_83030E18;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83030E6C;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83030e84
	if (cr6.eq) goto loc_83030E84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,341(r1)
	PPC_STORE_U8(ctx.r1.u32 + 341, ctx.r11.u8);
	// b 0x83030eb8
	goto loc_83030EB8;
loc_83030E84:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// bl 0x82d9f020
	ctx.lr = 0x83030EB4;
	sub_82D9F020(ctx, base);
	// stb r30,341(r1)
	PPC_STORE_U8(ctx.r1.u32 + 341, ctx.r30.u8);
loc_83030EB8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83030EC0;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da4370
	ctx.lr = 0x83030ECC;
	sub_82DA4370(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83030EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83030EE8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83030EF0;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83030fb0
	if (cr6.eq) goto loc_83030FB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83030F04;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83030f24
	if (cr6.eq) goto loc_83030F24;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83030F24:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83030ab0
	ctx.lr = 0x83030F2C;
	sub_83030AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83030F34;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x83030F38;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83030f50
	if (cr6.eq) goto loc_83030F50;
	// bl 0x82d26ed8
	ctx.lr = 0x83030F48;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x83030F50;
	sub_82D26B18(ctx, base);
loc_83030F50:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83030F64:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-27484
	ctx.r11.s64 = ctx.r11.s64 + -27484;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83030F80;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,231
	ctx.r4.u64 = ctx.r4.u64 | 231;
	// bl 0x82d2ada8
	ctx.lr = 0x83030F90;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103100
	ctx.lr = 0x83030F9C;
	sub_83103100(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x83030FA0;
	sub_82D26ED8(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82d26b18
	ctx.lr = 0x83030FA8;
	sub_82D26B18(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r10.u32);
loc_83030FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83030FBC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-27484
	ctx.r11.s64 = ctx.r11.s64 + -27484;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83030FD0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e88020
	ctx.lr = 0x83030FDC;
	sub_82E88020(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x83030FE4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83030FF8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-27484
	ctx.r11.s64 = ctx.r11.s64 + -27484;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303100C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e88020
	ctx.lr = 0x83031018;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83031020;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83031034:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-27484
	ctx.r4.s64 = ctx.r11.s64 + -27484;
	// bl 0x837b0c10
	ctx.lr = 0x83031044;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e88020
	ctx.lr = 0x83031050;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83031058;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303106C"))) PPC_WEAK_FUNC(sub_8303106C);
PPC_FUNC_IMPL(__imp__sub_8303106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83031070"))) PPC_WEAK_FUNC(sub_83031070);
PPC_FUNC_IMPL(__imp__sub_83031070) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830310cc
	if (!cr6.eq) goto loc_830310CC;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830310f8
	if (!cr6.eq) goto loc_830310F8;
	// bl 0x82d17d90
	ctx.lr = 0x830310B0;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x830310f8
	goto loc_830310F8;
loc_830310CC:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r8,r10,5
	ctx.r8.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x830310f8
	if (!cr6.eq) goto loc_830310F8;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_830310F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83031104;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_8303111C"))) PPC_WEAK_FUNC(sub_8303111C);
PPC_FUNC_IMPL(__imp__sub_8303111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83031120"))) PPC_WEAK_FUNC(sub_83031120);
PPC_FUNC_IMPL(__imp__sub_83031120) {
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
	ctx.lr = 0x83031130;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83031158
	if (cr6.eq) goto loc_83031158;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83031140;
	sub_82DAB6D0(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83031158
	if (cr6.eq) goto loc_83031158;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x82d84728
	ctx.lr = 0x83031158;
	sub_82D84728(ctx, base);
loc_83031158:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83031168"))) PPC_WEAK_FUNC(sub_83031168);
PPC_FUNC_IMPL(__imp__sub_83031168) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83031198;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830311d4
	if (cr6.eq) goto loc_830311D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830311AC;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26824
	ctx.r9.s64 = ctx.r11.s64 + -26824;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x830311d8
	goto loc_830311D8;
loc_830311D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830311D8:
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

__attribute__((alias("__imp__sub_830311F0"))) PPC_WEAK_FUNC(sub_830311F0);
PPC_FUNC_IMPL(__imp__sub_830311F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83031200
	if (cr6.lt) goto loc_83031200;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83031200:
	// b 0x83031168
	sub_83031168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83031204"))) PPC_WEAK_FUNC(sub_83031204);
PPC_FUNC_IMPL(__imp__sub_83031204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83031208"))) PPC_WEAK_FUNC(sub_83031208);
PPC_FUNC_IMPL(__imp__sub_83031208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83031210;
	__savegprlr_26(ctx, base);
	// stwu r1,-2432(r1)
	ea = -2432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83031220;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83031280
	if (!cr6.eq) goto loc_83031280;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-26916
	ctx.r11.s64 = ctx.r11.s64 + -26916;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x837b0c10
	ctx.lr = 0x83031240;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303124C;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303126c
	if (cr6.lt) goto loc_8303126C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303126C;
	sub_825952B8(ctx, base);
loc_8303126C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031280:
	// bl 0x831156e8
	ctx.lr = 0x83031284;
	sub_831156E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830312c4
	if (!cr6.eq) goto loc_830312C4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-26916
	ctx.r11.s64 = ctx.r11.s64 + -26916;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x830312A4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830312B0;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830312B8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830312C4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x83031810
	if (cr6.gt) goto loc_83031810;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4844
	ctx.r12.s64 = ctx.r12.s64 + 4844;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83031324;
	case 1:
		goto loc_8303178C;
	case 2:
		goto loc_83031490;
	case 3:
		goto loc_83031504;
	case 4:
		goto loc_83031550;
	case 5:
		goto loc_83031614;
	case 6:
		goto loc_8303165C;
	case 7:
		goto loc_8303178C;
	case 8:
		goto loc_83031700;
	case 9:
		goto loc_8303178C;
	case 10:
		goto loc_8303174C;
	case 11:
		goto loc_8303178C;
	case 12:
		goto loc_83031798;
	case 13:
		goto loc_830317D4;
	default:
		return;
	}
	// lwz r24,4900(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4900);
	// lwz r24,6028(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6028);
	// lwz r24,5264(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5264);
	// lwz r24,5380(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5380);
	// lwz r24,5456(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5456);
	// lwz r24,5652(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5652);
	// lwz r24,5724(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5724);
	// lwz r24,6028(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6028);
	// lwz r24,5888(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5888);
	// lwz r24,6028(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6028);
	// lwz r24,5964(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5964);
	// lwz r24,6028(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6028);
	// lwz r24,6040(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6040);
	// lwz r24,6100(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6100);
loc_83031324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8303132C;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83031338;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832e0
	ctx.lr = 0x83031344;
	sub_825832E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x83031350;
	sub_83102DB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d9a868
	ctx.lr = 0x83031358;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303137c
	if (!cr6.eq) goto loc_8303137C;
loc_83031368:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303137C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8200
	ctx.lr = 0x83031384;
	sub_831F8200(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,8
	ctx.r27.s64 = 8;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// bl 0x82d9f020
	ctx.lr = 0x830313B8;
	sub_82D9F020(ctx, base);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r10,90
	cr6.compare<uint32_t>(ctx.r10.u32, 90, xer);
	// blt cr6,0x830313d4
	if (cr6.lt) goto loc_830313D4;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830313D4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830313f4
	if (!cr6.eq) goto loc_830313F4;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830313F4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,-26916
	ctx.r29.s64 = ctx.r11.s64 + -26916;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r29,-80
	ctx.r3.s64 = ctx.r29.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83031414;
	sub_82D2F6D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-314
	ctx.r4.s64 = ctx.r29.s64 + -314;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83031424;
	sub_837B0C10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// bl 0x825832e0
	ctx.lr = 0x83031430;
	sub_825832E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x83031440;
	sub_8311BF98(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// ori r4,r4,370
	ctx.r4.u64 = ctx.r4.u64 | 370;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x8303145C;
	sub_82D042A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d2aab0
	ctx.lr = 0x83031468;
	sub_82D2AAB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83031474;
	sub_83103100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8303147C;
	sub_8387E8E0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031490:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83031498;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x830314A4;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b54cc0
	ctx.lr = 0x830314B0;
	sub_82B54CC0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x831cdcf0
	ctx.lr = 0x830314C8;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,708(r1)
	PPC_STORE_U8(ctx.r1.u32 + 708, ctx.r10.u8);
	// bl 0x825832e0
	ctx.lr = 0x830314D8;
	sub_825832E0(ctx, base);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da44b8
	ctx.lr = 0x830314E4;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4370
	ctx.lr = 0x830314F0;
	sub_82DA4370(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303150C;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83031514;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303178c
	if (cr6.eq) goto loc_8303178C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83031528;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83031368
	if (!cr6.eq) goto loc_83031368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83031120
	ctx.lr = 0x8303153C;
	sub_83031120(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031550:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83031558;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83031564;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x8303156C;
	sub_82D99C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83031578;
	sub_82D99C10(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x8303157C;
	sub_8332F198(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8303158C;
	sub_82D9AA60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830315c4
	if (!cr6.eq) goto loc_830315C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830315A0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830315A4;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830315bc
	if (!cr6.eq) goto loc_830315BC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830315BC:
	// bl 0x825832e0
	ctx.lr = 0x830315C0;
	sub_825832E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830315C4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b54cc0
	ctx.lr = 0x830315CC;
	sub_82B54CC0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// bl 0x82d999a0
	ctx.lr = 0x830315E8;
	sub_82D999A0(ctx, base);
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x830315F4;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x83031600;
	sub_82DA4370(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303161C;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83031624;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303178c
	if (cr6.eq) goto loc_8303178C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83031638;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303165C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83031664;
	sub_82DAB6D0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-26916
	ctx.r30.s64 = ctx.r11.s64 + -26916;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83031684;
	sub_82D2FA90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x825832e0
	ctx.lr = 0x83031698;
	sub_825832E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x830316A8;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-313
	ctx.r4.s64 = ctx.r30.s64 + -313;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x830316B8;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r29,56
	ctx.r5.s64 = ctx.r29.s64 + 56;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x830316CC;
	sub_82D042A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d2aab0
	ctx.lr = 0x830316D8;
	sub_82D2AAB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830316E4;
	sub_83103100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830316EC;
	sub_8387E8E0(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031700:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-26916
	ctx.r11.s64 = ctx.r11.s64 + -26916;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8303171C;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,388
	ctx.r4.u64 = ctx.r4.u64 | 388;
	// bl 0x82d2ada8
	ctx.lr = 0x8303172C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83031738;
	sub_83103100(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303174C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-26916
	ctx.r11.s64 = ctx.r11.s64 + -26916;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83031768;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,414
	ctx.r4.u64 = ctx.r4.u64 | 414;
	// bl 0x82d2ada8
	ctx.lr = 0x83031778;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83031784;
	sub_83103100(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_8303178C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031798:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-26916
	ctx.r11.s64 = ctx.r11.s64 + -26916;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830317AC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830317B8;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x830317C0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830317D4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-26916
	ctx.r11.s64 = ctx.r11.s64 + -26916;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830317E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830317F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x830317FC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83031810:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-26916
	ctx.r4.s64 = ctx.r11.s64 + -26916;
	// bl 0x837b0c10
	ctx.lr = 0x83031820;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303182C;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83031834;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83031848"))) PPC_WEAK_FUNC(sub_83031848);
PPC_FUNC_IMPL(__imp__sub_83031848) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830318a0
	if (!cr6.eq) goto loc_830318A0;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830318cc
	if (!cr6.eq) goto loc_830318CC;
	// bl 0x82d17d90
	ctx.lr = 0x83031888;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x830318cc
	goto loc_830318CC;
loc_830318A0:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r8,r10,5
	ctx.r8.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x830318cc
	if (!cr6.eq) goto loc_830318CC;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_830318CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x830318D8;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_830318F0"))) PPC_WEAK_FUNC(sub_830318F0);
PPC_FUNC_IMPL(__imp__sub_830318F0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83031920;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303195c
	if (cr6.eq) goto loc_8303195C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83031934;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26272
	ctx.r9.s64 = ctx.r11.s64 + -26272;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83031960
	goto loc_83031960;
loc_8303195C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83031960:
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

__attribute__((alias("__imp__sub_83031978"))) PPC_WEAK_FUNC(sub_83031978);
PPC_FUNC_IMPL(__imp__sub_83031978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83031988
	if (cr6.lt) goto loc_83031988;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83031988:
	// b 0x830318f0
	sub_830318F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303198C"))) PPC_WEAK_FUNC(sub_8303198C);
PPC_FUNC_IMPL(__imp__sub_8303198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83031990"))) PPC_WEAK_FUNC(sub_83031990);
PPC_FUNC_IMPL(__imp__sub_83031990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83031998;
	__savegprlr_27(ctx, base);
	// stwu r1,-2384(r1)
	ea = -2384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x830319A8;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83031a08
	if (!cr6.eq) goto loc_83031A08;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x830319C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x830319D4;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830319f4
	if (cr6.lt) goto loc_830319F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830319F4;
	sub_825952B8(ctx, base);
loc_830319F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031A08:
	// bl 0x831156e8
	ctx.lr = 0x83031A0C;
	sub_831156E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83031a4c
	if (!cr6.eq) goto loc_83031A4C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x83031A2C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83031A38;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83031A40;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031A4C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r31,116(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83031f3c
	if (cr6.gt) goto loc_83031F3C;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6772
	ctx.r12.s64 = ctx.r12.s64 + 6772;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83031AA4;
	case 1:
		goto loc_83031EB8;
	case 2:
		goto loc_83031BB8;
	case 3:
		goto loc_83031C38;
	case 4:
		goto loc_83031CC8;
	case 5:
		goto loc_83031D8C;
	case 6:
		goto loc_83031DD4;
	case 7:
		goto loc_83031EB8;
	case 8:
		goto loc_83031E78;
	case 9:
		goto loc_83031EB8;
	case 10:
		goto loc_83031EC4;
	case 11:
		goto loc_83031F00;
	default:
		return;
	}
	// lwz r24,6820(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6820);
	// lwz r24,7864(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7864);
	// lwz r24,7096(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7096);
	// lwz r24,7224(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7224);
	// lwz r24,7368(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7368);
	// lwz r24,7564(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7564);
	// lwz r24,7636(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7636);
	// lwz r24,7864(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7864);
	// lwz r24,7800(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7800);
	// lwz r24,7864(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7864);
	// lwz r24,7876(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7876);
	// lwz r24,7936(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7936);
loc_83031AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83031AAC;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83031AB8;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x83031AC4;
	sub_825832E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83031AD0;
	sub_83102DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x83031AD8;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83031afc
	if (!cr6.eq) goto loc_83031AFC;
loc_83031AE8:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031AFC:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// cmplwi cr6,r11,8910
	cr6.compare<uint32_t>(ctx.r11.u32, 8910, xer);
	// ble cr6,0x83031b20
	if (!cr6.gt) goto loc_83031B20;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031B20:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r31,r11,-26364
	ctx.r31.s64 = ctx.r11.s64 + -26364;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83031B40;
	sub_82D2F6D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,-298
	ctx.r4.s64 = ctx.r31.s64 + -298;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83031B50;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83031B58;
	sub_82D975E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83031b78
	if (cr6.eq) goto loc_83031B78;
	// lwz r5,76(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x83031b80
	goto loc_83031B80;
loc_83031B78:
	// lwz r5,72(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
loc_83031B80:
	// bl 0x82d042a8
	ctx.lr = 0x83031B84;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83031B90;
	sub_82D2AAB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83031B9C;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83031BA4;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83031BC0;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83031BCC;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82b54cc0
	ctx.lr = 0x83031BD8;
	sub_82B54CC0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x831cdcf0
	ctx.lr = 0x83031BF0;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,676(r1)
	PPC_STORE_U8(ctx.r1.u32 + 676, ctx.r10.u8);
	// bl 0x825832e0
	ctx.lr = 0x83031C00;
	sub_825832E0(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83031C0C;
	sub_82D975E8(ctx, base);
	// stb r3,676(r1)
	PPC_STORE_U8(ctx.r1.u32 + 676, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83031C18;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4370
	ctx.lr = 0x83031C24;
	sub_82DA4370(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031C38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83031C40;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83031C48;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83031eb8
	if (cr6.eq) goto loc_83031EB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83031C5C;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83031ae8
	if (!cr6.eq) goto loc_83031AE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8302b200
	ctx.lr = 0x83031C70;
	sub_8302B200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83031C78;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x83031C7C;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83031ca8
	if (cr6.eq) goto loc_83031CA8;
	// bl 0x82d26ed8
	ctx.lr = 0x83031C8C;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x83031C94;
	sub_82D26B18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031CA8:
	// bl 0x82d26ed8
	ctx.lr = 0x83031CAC;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82d26b18
	ctx.lr = 0x83031CB4;
	sub_82D26B18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031CC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83031CD0;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83031CDC;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83031CE4;
	sub_82D99C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83031CF0;
	sub_82D99C10(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x83031CF4;
	sub_8332F198(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x83031D04;
	sub_82D9AA60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83031d3c
	if (!cr6.eq) goto loc_83031D3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83031D18;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83031D1C;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83031d34
	if (!cr6.eq) goto loc_83031D34;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031D34:
	// bl 0x825832e0
	ctx.lr = 0x83031D38;
	sub_825832E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83031D3C:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82b54cc0
	ctx.lr = 0x83031D44;
	sub_82B54CC0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// bl 0x82d999a0
	ctx.lr = 0x83031D60;
	sub_82D999A0(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83031D6C;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x83031D78;
	sub_82DA4370(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031D8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83031D94;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83031D9C;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83031eb8
	if (cr6.eq) goto loc_83031EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83031DB0;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031DD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83031DDC;
	sub_82DAB6D0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-26364
	ctx.r31.s64 = ctx.r11.s64 + -26364;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83031DFC;
	sub_82D2FA90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// bl 0x825832e0
	ctx.lr = 0x83031E10;
	sub_825832E0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8311bf98
	ctx.lr = 0x83031E20;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-297
	ctx.r4.s64 = ctx.r31.s64 + -297;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83031E30;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r29,56
	ctx.r5.s64 = ctx.r29.s64 + 56;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x83031E44;
	sub_82D042A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x83031E50;
	sub_82D2AAB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83031E5C;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83031E64;
	sub_8387E8E0(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031E78:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83031E94;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,161
	ctx.r4.u64 = ctx.r4.u64 | 161;
	// bl 0x82d2ada8
	ctx.lr = 0x83031EA4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83031EB0;
	sub_83103100(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
loc_83031EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031EC4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83031ED8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83031EE4;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83031EEC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031F00:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83031F14;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83031F20;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83031F28;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83031F3C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-26364
	ctx.r4.s64 = ctx.r11.s64 + -26364;
	// bl 0x837b0c10
	ctx.lr = 0x83031F4C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83031F58;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83031F60;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83031F74"))) PPC_WEAK_FUNC(sub_83031F74);
PPC_FUNC_IMPL(__imp__sub_83031F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83031F78"))) PPC_WEAK_FUNC(sub_83031F78);
PPC_FUNC_IMPL(__imp__sub_83031F78) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83031fd0
	if (!cr6.eq) goto loc_83031FD0;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83031ffc
	if (!cr6.eq) goto loc_83031FFC;
	// bl 0x82d17d90
	ctx.lr = 0x83031FB8;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83031ffc
	goto loc_83031FFC;
loc_83031FD0:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r8,r10,5
	ctx.r8.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83031ffc
	if (!cr6.eq) goto loc_83031FFC;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_83031FFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83032008;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_83032020"))) PPC_WEAK_FUNC(sub_83032020);
PPC_FUNC_IMPL(__imp__sub_83032020) {
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
	ctx.lr = 0x83032030;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303205c
	if (cr6.eq) goto loc_8303205C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83032040;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x83032044;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,257
	ctx.r3.s64 = 257;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83032058
	if (!cr6.eq) goto loc_83032058;
	// li r3,256
	ctx.r3.s64 = 256;
loc_83032058:
	// bl 0x82d84728
	ctx.lr = 0x8303205C;
	sub_82D84728(ctx, base);
loc_8303205C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303206C"))) PPC_WEAK_FUNC(sub_8303206C);
PPC_FUNC_IMPL(__imp__sub_8303206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83032070"))) PPC_WEAK_FUNC(sub_83032070);
PPC_FUNC_IMPL(__imp__sub_83032070) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830320A0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830320dc
	if (cr6.eq) goto loc_830320DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830320B4;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25720
	ctx.r9.s64 = ctx.r11.s64 + -25720;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x830320e0
	goto loc_830320E0;
loc_830320DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830320E0:
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

__attribute__((alias("__imp__sub_830320F8"))) PPC_WEAK_FUNC(sub_830320F8);
PPC_FUNC_IMPL(__imp__sub_830320F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83032108
	if (cr6.lt) goto loc_83032108;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83032108:
	// b 0x83032070
	sub_83032070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303210C"))) PPC_WEAK_FUNC(sub_8303210C);
PPC_FUNC_IMPL(__imp__sub_8303210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83032110"))) PPC_WEAK_FUNC(sub_83032110);
PPC_FUNC_IMPL(__imp__sub_83032110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83032118;
	__savegprlr_25(ctx, base);
	// stwu r1,-2544(r1)
	ea = -2544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83032128;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83032188
	if (!cr6.eq) goto loc_83032188;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-25812
	ctx.r11.s64 = ctx.r11.s64 + -25812;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x83032148;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032154;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83032174
	if (cr6.lt) goto loc_83032174;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83032174;
	sub_825952B8(ctx, base);
loc_83032174:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032188:
	// bl 0x831156e8
	ctx.lr = 0x8303218C;
	sub_831156E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830321cc
	if (!cr6.eq) goto loc_830321CC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-25812
	ctx.r11.s64 = ctx.r11.s64 + -25812;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x830321AC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x830321B8;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x830321C0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830321CC:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r31,116(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83032668
	if (cr6.gt) goto loc_83032668;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8692
	ctx.r12.s64 = ctx.r12.s64 + 8692;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8303221C;
	case 1:
		goto loc_8303251C;
	case 2:
		goto loc_83032330;
	case 3:
		goto loc_830323A8;
	case 4:
		goto loc_83032438;
	case 5:
		goto loc_8303251C;
	case 6:
		goto loc_830324DC;
	case 7:
		goto loc_8303251C;
	case 8:
		goto loc_83032528;
	case 9:
		goto loc_83032564;
	default:
		return;
	}
	// lwz r24,8732(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8732);
	// lwz r24,9500(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9500);
	// lwz r24,9008(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	// lwz r24,9128(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9128);
	// lwz r24,9272(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9272);
	// lwz r24,9500(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9500);
	// lwz r24,9436(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9436);
	// lwz r24,9500(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9500);
	// lwz r24,9512(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9512);
	// lwz r24,9572(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9572);
loc_8303221C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83032224;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83032230;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8303223C;
	sub_82DF16A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d99c08
	ctx.lr = 0x83032248;
	sub_82D99C08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a978
	ctx.lr = 0x83032250;
	sub_82D9A978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x83032274
	if (!cr6.eq) goto loc_83032274;
loc_83032260:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032274:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// ble cr6,0x83032298
	if (!cr6.gt) goto loc_83032298;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032298:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r31,r11,-25812
	ctx.r31.s64 = ctx.r11.s64 + -25812;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x830322B8;
	sub_82D2F6D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,-298
	ctx.r4.s64 = ctx.r31.s64 + -298;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830322C8;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975e8
	ctx.lr = 0x830322D0;
	sub_82D975E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x830322f0
	if (cr6.eq) goto loc_830322F0;
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x830322f8
	goto loc_830322F8;
loc_830322F0:
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
loc_830322F8:
	// bl 0x82d042a8
	ctx.lr = 0x830322FC;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83032308;
	sub_82D2AAB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83032314;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8303231C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83032338;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83032344;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b54cc0
	ctx.lr = 0x83032350;
	sub_82B54CC0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r9,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r9.u8);
	// bl 0x82df16a0
	ctx.lr = 0x83032370;
	sub_82DF16A0(ctx, base);
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975e8
	ctx.lr = 0x8303237C;
	sub_82D975E8(ctx, base);
	// stb r3,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83032388;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4370
	ctx.lr = 0x83032394;
	sub_82DA4370(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830323A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x830323B0;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x830323B8;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303251c
	if (cr6.eq) goto loc_8303251C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da43b8
	ctx.lr = 0x830323CC;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83032260
	if (!cr6.eq) goto loc_83032260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83032020
	ctx.lr = 0x830323E0;
	sub_83032020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830323E8;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x830323EC;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83032418
	if (cr6.eq) goto loc_83032418;
	// bl 0x82d26ed8
	ctx.lr = 0x830323FC;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x83032404;
	sub_82D26B18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032418:
	// bl 0x82d26ed8
	ctx.lr = 0x8303241C;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82d26b18
	ctx.lr = 0x83032424;
	sub_82D26B18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83032440;
	sub_82DAB6D0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-25812
	ctx.r31.s64 = ctx.r11.s64 + -25812;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83032460;
	sub_82D2FA90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x82df16a0
	ctx.lr = 0x83032474;
	sub_82DF16A0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x83032484;
	sub_8311C260(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-297
	ctx.r4.s64 = ctx.r31.s64 + -297;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83032494;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r29,52
	ctx.r5.s64 = ctx.r29.s64 + 52;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x830324A8;
	sub_82D042A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x830324B4;
	sub_82D2AAB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x830324C0;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x830324C8;
	sub_8387E8E0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830324DC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-25812
	ctx.r11.s64 = ctx.r11.s64 + -25812;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x830324F8;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,161
	ctx.r4.u64 = ctx.r4.u64 | 161;
	// bl 0x82d2ada8
	ctx.lr = 0x83032508;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83032514;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
loc_8303251C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032528:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-25812
	ctx.r11.s64 = ctx.r11.s64 + -25812;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8303253C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032548;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83032550;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8303256C;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x83032570;
	sub_82D9E470(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8303257C;
	sub_82DAB6D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83032588;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x8303258C;
	sub_82D99C08(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b57f10
	ctx.lr = 0x83032594;
	sub_82B57F10(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8303259C;
	sub_82DF16A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x82df16a0
	ctx.lr = 0x830325C0;
	sub_82DF16A0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x830325D0;
	sub_8311C260(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x830325E4;
	sub_8259D6C0(ctx, base);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,179
	ctx.r4.u64 = ctx.r4.u64 | 179;
	// bl 0x82d042a8
	ctx.lr = 0x830325F4;
	sub_82D042A8(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,297
	ctx.r4.u64 = ctx.r4.u64 | 297;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x82d042a8
	ctx.lr = 0x83032608;
	sub_82D042A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9fc48
	ctx.lr = 0x83032610;
	sub_82D9FC48(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da0318
	ctx.lr = 0x8303261C;
	sub_82DA0318(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d975f0
	ctx.lr = 0x83032628;
	sub_82D975F0(ctx, base);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r9,-25812
	ctx.r11.s64 = ctx.r9.s64 + -25812;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303263C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032648;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83032650;
	sub_8387E8E0(ctx, base);
	// stb r29,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r29.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82c16c98
	ctx.lr = 0x8303265C;
	sub_82C16C98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83032668:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-25812
	ctx.r4.s64 = ctx.r11.s64 + -25812;
	// bl 0x837b0c10
	ctx.lr = 0x83032678;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032684;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8303268C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830326A0"))) PPC_WEAK_FUNC(sub_830326A0);
PPC_FUNC_IMPL(__imp__sub_830326A0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830326D0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83032710
	if (cr6.eq) goto loc_83032710;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830326E4;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-25160
	ctx.r8.s64 = ctx.r10.s64 + -25160;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83032714
	goto loc_83032714;
loc_83032710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83032714:
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

__attribute__((alias("__imp__sub_8303272C"))) PPC_WEAK_FUNC(sub_8303272C);
PPC_FUNC_IMPL(__imp__sub_8303272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83032730"))) PPC_WEAK_FUNC(sub_83032730);
PPC_FUNC_IMPL(__imp__sub_83032730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83032740
	if (cr6.lt) goto loc_83032740;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83032740:
	// b 0x830326a0
	sub_830326A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83032744"))) PPC_WEAK_FUNC(sub_83032744);
PPC_FUNC_IMPL(__imp__sub_83032744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83032748"))) PPC_WEAK_FUNC(sub_83032748);
PPC_FUNC_IMPL(__imp__sub_83032748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83032750;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83032760;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830327b4
	if (!cr6.eq) goto loc_830327B4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-25252
	ctx.r11.s64 = ctx.r11.s64 + -25252;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8303277C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032788;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830329c8
	if (cr6.lt) goto loc_830329C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830327A8;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830327B4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8303299c
	if (cr6.gt) goto loc_8303299C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83032864
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83032864;
	// bdzf 4*cr6+eq,0x8303292c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303292C;
	// bdzf 4*cr6+eq,0x83032938
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83032938;
	// bne cr6,0x83032974
	if (!cr6.eq) goto loc_83032974;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x830327E0;
	sub_82DAB6D0(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1352
	ctx.r4.s64 = 1352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830327FC;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303283c
	if (cr6.eq) goto loc_8303283C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97528
	ctx.lr = 0x83032810;
	sub_82D97528(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303282c
	if (cr6.lt) goto loc_8303282C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e712a8
	ctx.lr = 0x83032828;
	sub_82E712A8(ctx, base);
	// b 0x83032840
	goto loc_83032840;
loc_8303282C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e712a8
	ctx.lr = 0x83032838;
	sub_82E712A8(ctx, base);
	// b 0x83032840
	goto loc_83032840;
loc_8303283C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83032840:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83032864:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e716d8
	ctx.lr = 0x8303286C;
	sub_82E716D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303292c
	if (cr6.eq) goto loc_8303292C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e716d8
	ctx.lr = 0x8303287C;
	sub_82E716D8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830328c8
	if (cr6.eq) goto loc_830328C8;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x830328A0;
	sub_82595150(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830328c0
	if (cr6.eq) goto loc_830328C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830328C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830328C0:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x830328C8;
	sub_82595170(ctx, base);
loc_830328C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bne cr6,0x830328ec
	if (!cr6.eq) goto loc_830328EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830328EC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-25252
	ctx.r11.s64 = ctx.r11.s64 + -25252;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83032908;
	sub_82D2FA90(ctx, base);
	// lis r4,501
	ctx.r4.s64 = 32833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x82d2ada8
	ctx.lr = 0x83032918;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83032924;
	sub_83103100(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_8303292C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83032938:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-25252
	ctx.r11.s64 = ctx.r11.s64 + -25252;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8303294C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032958;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83032960;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83032974:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-25252
	ctx.r11.s64 = ctx.r11.s64 + -25252;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83032988;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032994;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x830329bc
	goto loc_830329BC;
loc_8303299C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-25252
	ctx.r4.s64 = ctx.r11.s64 + -25252;
	// bl 0x837b0c10
	ctx.lr = 0x830329AC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830329B8;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_830329BC:
	// bl 0x8387e8e0
	ctx.lr = 0x830329C0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_830329C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830329D4"))) PPC_WEAK_FUNC(sub_830329D4);
PPC_FUNC_IMPL(__imp__sub_830329D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830329D8"))) PPC_WEAK_FUNC(sub_830329D8);
PPC_FUNC_IMPL(__imp__sub_830329D8) {
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83032a40
	if (!cr6.eq) goto loc_83032A40;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83032a30
	if (!cr6.eq) goto loc_83032A30;
	// bl 0x82d17d90
	ctx.lr = 0x83032A18;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83032a40
	goto loc_83032A40;
loc_83032A30:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83032a40
	if (!cr6.eq) goto loc_83032A40;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83032A40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83032A4C;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_83032A64"))) PPC_WEAK_FUNC(sub_83032A64);
PPC_FUNC_IMPL(__imp__sub_83032A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83032A68"))) PPC_WEAK_FUNC(sub_83032A68);
PPC_FUNC_IMPL(__imp__sub_83032A68) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83032A98;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83032ad8
	if (cr6.eq) goto loc_83032AD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83032AAC;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-24568
	ctx.r8.s64 = ctx.r10.s64 + -24568;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83032adc
	goto loc_83032ADC;
loc_83032AD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83032ADC:
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

__attribute__((alias("__imp__sub_83032AF4"))) PPC_WEAK_FUNC(sub_83032AF4);
PPC_FUNC_IMPL(__imp__sub_83032AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83032AF8"))) PPC_WEAK_FUNC(sub_83032AF8);
PPC_FUNC_IMPL(__imp__sub_83032AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83032b08
	if (cr6.lt) goto loc_83032B08;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83032B08:
	// b 0x83032a68
	sub_83032A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83032B0C"))) PPC_WEAK_FUNC(sub_83032B0C);
PPC_FUNC_IMPL(__imp__sub_83032B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83032B10"))) PPC_WEAK_FUNC(sub_83032B10);
PPC_FUNC_IMPL(__imp__sub_83032B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83032B18;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83032B28;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83032b80
	if (!cr6.eq) goto loc_83032B80;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x837b0c10
	ctx.lr = 0x83032B48;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032B54;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83032b74
	if (cr6.lt) goto loc_83032B74;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83032B74;
	sub_825952B8(ctx, base);
loc_83032B74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032B80:
	// bl 0x831156e8
	ctx.lr = 0x83032B84;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83032bc0
	if (!cr6.eq) goto loc_83032BC0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x837b0c10
	ctx.lr = 0x83032BA0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032BAC;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83032BB4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032BC0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83032c78
	if (cr6.gt) goto loc_83032C78;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11236
	ctx.r12.s64 = ctx.r12.s64 + 11236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83032C14;
	case 1:
		goto loc_83032C1C;
	case 2:
		goto loc_83032C78;
	case 3:
		goto loc_83032D50;
	case 4:
		goto loc_83032DA0;
	case 5:
		goto loc_83032EB8;
	case 6:
		goto loc_83032C78;
	case 7:
		goto loc_83032F04;
	case 8:
		goto loc_83032F18;
	case 9:
		goto loc_83032F54;
	case 10:
		goto loc_83032F90;
	case 11:
		goto loc_83032FCC;
	default:
		return;
	}
	// lwz r24,11284(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11284);
	// lwz r24,11292(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11292);
	// lwz r24,11384(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11384);
	// lwz r24,11600(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11600);
	// lwz r24,11680(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11680);
	// lwz r24,11960(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11960);
	// lwz r24,11384(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11384);
	// lwz r24,12036(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12036);
	// lwz r24,12056(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12056);
	// lwz r24,12116(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12116);
	// lwz r24,12176(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12176);
	// lwz r24,12236(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12236);
loc_83032C14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83032C1C:
	// lwz r28,116(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83032C28;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832d8
	ctx.lr = 0x83032C34;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x83032C38;
	sub_82D99C08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8332f198
	ctx.lr = 0x83032C44;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x83032C48;
	sub_8382E338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83032C54;
	sub_82DF16A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9c418
	ctx.lr = 0x83032C60;
	sub_82D9C418(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x83032c84
	if (!cr6.eq) goto loc_83032C84;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83032C78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032C84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83032C8C;
	sub_82DF16A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9a9b8
	ctx.lr = 0x83032C98;
	sub_82D9A9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83032cb8
	if (cr6.eq) goto loc_83032CB8;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032CB8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,-24664
	ctx.r29.s64 = ctx.r11.s64 + -24664;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r29,-100
	ctx.r3.s64 = ctx.r29.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83032CD8;
	sub_82D2F6D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-334
	ctx.r4.s64 = ctx.r29.s64 + -334;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83032CE8;
	sub_837B0C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83032CF0;
	sub_82D975E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83032d10
	if (cr6.eq) goto loc_83032D10;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x83032d18
	goto loc_83032D18;
loc_83032D10:
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
loc_83032D18:
	// bl 0x82d042a8
	ctx.lr = 0x83032D1C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83032D28;
	sub_82D2AAB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83032D34;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83032D3C;
	sub_8387E8E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032D50:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x837b0c10
	ctx.lr = 0x83032D64;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83032D70;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83032D7C;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032DA0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83032DA8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83032c78
	if (cr6.eq) goto loc_83032C78;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83574b00
	ctx.lr = 0x83032DBC;
	sub_83574B00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83032dd0
	if (cr6.lt) goto loc_83032DD0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83032dd4
	goto loc_83032DD4;
loc_83032DD0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83032DD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824209f8
	ctx.lr = 0x83032DDC;
	sub_824209F8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83032e00
	if (cr6.eq) goto loc_83032E00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83032DF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83032E00:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83032e78
	if (!cr6.eq) goto loc_83032E78;
	// li r3,262
	ctx.r3.s64 = 262;
	// bl 0x82d84728
	ctx.lr = 0x83032E10;
	sub_82D84728(ctx, base);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83032E18;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x83032E1C;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83032e50
	if (cr6.eq) goto loc_83032E50;
	// bl 0x82d26ed8
	ctx.lr = 0x83032E2C;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x83032E34;
	sub_82D26B18(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8241fe60
	ctx.lr = 0x83032E44;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032E50:
	// bl 0x82d26ed8
	ctx.lr = 0x83032E54;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82d26b18
	ctx.lr = 0x83032E5C;
	sub_82D26B18(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8241fe60
	ctx.lr = 0x83032E6C;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032E78:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x82450880
	ctx.lr = 0x83032E8C;
	sub_82450880(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// bl 0x8241fe60
	ctx.lr = 0x83032EAC;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032EB8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83032ED4;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,242
	ctx.r4.u64 = ctx.r4.u64 | 242;
	// bl 0x82d2ada8
	ctx.lr = 0x83032EE4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83032EF0;
	sub_83103100(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032F04:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032F18:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83032F2C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032F38;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83032F40;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032F54:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83032F68;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032F74;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83032F7C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032F90:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83032FA4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032FB0;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83032FB8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83032FCC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-24664
	ctx.r4.s64 = ctx.r11.s64 + -24664;
	// bl 0x837b0c10
	ctx.lr = 0x83032FDC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83032FE8;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83032FF0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83033004"))) PPC_WEAK_FUNC(sub_83033004);
PPC_FUNC_IMPL(__imp__sub_83033004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83033008"))) PPC_WEAK_FUNC(sub_83033008);
PPC_FUNC_IMPL(__imp__sub_83033008) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83033038;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83033078
	if (cr6.eq) goto loc_83033078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303304C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-24056
	ctx.r8.s64 = ctx.r10.s64 + -24056;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303307c
	goto loc_8303307C;
loc_83033078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303307C:
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

__attribute__((alias("__imp__sub_83033094"))) PPC_WEAK_FUNC(sub_83033094);
PPC_FUNC_IMPL(__imp__sub_83033094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83033098"))) PPC_WEAK_FUNC(sub_83033098);
PPC_FUNC_IMPL(__imp__sub_83033098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830330a8
	if (cr6.lt) goto loc_830330A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830330A8:
	// b 0x83033008
	sub_83033008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830330AC"))) PPC_WEAK_FUNC(sub_830330AC);
PPC_FUNC_IMPL(__imp__sub_830330AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830330B0"))) PPC_WEAK_FUNC(sub_830330B0);
PPC_FUNC_IMPL(__imp__sub_830330B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8303318c
	if (cr6.gt) goto loc_8303318C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83033100
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83033100;
	// bdzf 4*cr6+eq,0x83033144
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83033144;
	// bdzf 4*cr6+eq,0x830331b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830331B0;
	// bdzf 4*cr6+eq,0x830331b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830331B8;
	// bdzf 4*cr6+eq,0x8303318c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303318C;
	// bne cr6,0x830331f0
	if (!cr6.eq) goto loc_830331F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83033100:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-24148
	ctx.r11.s64 = ctx.r11.s64 + -24148;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83033114;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83033120;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303312C;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303318c
	goto loc_8303318C;
loc_83033144:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303314C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303318c
	if (cr6.eq) goto loc_8303318C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303317c
	if (cr6.eq) goto loc_8303317C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83033174;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303317C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830331a8
	if (!cr6.eq) goto loc_830331A8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_83033188:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303318C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83033190:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830331A8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83033188
	goto loc_83033188;
loc_830331B0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83033188
	goto loc_83033188;
loc_830331B8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-24148
	ctx.r11.s64 = ctx.r11.s64 + -24148;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830331CC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830331D8;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830331E0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83033190
	goto loc_83033190;
loc_830331F0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-24148
	ctx.r4.s64 = ctx.r11.s64 + -24148;
	// bl 0x837b0c10
	ctx.lr = 0x83033200;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303320C;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83033214;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83033190
	goto loc_83033190;
}

__attribute__((alias("__imp__sub_83033224"))) PPC_WEAK_FUNC(sub_83033224);
PPC_FUNC_IMPL(__imp__sub_83033224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83033228"))) PPC_WEAK_FUNC(sub_83033228);
PPC_FUNC_IMPL(__imp__sub_83033228) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83033258;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83033298
	if (cr6.eq) goto loc_83033298;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303326C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-23544
	ctx.r8.s64 = ctx.r10.s64 + -23544;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303329c
	goto loc_8303329C;
loc_83033298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303329C:
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

__attribute__((alias("__imp__sub_830332B4"))) PPC_WEAK_FUNC(sub_830332B4);
PPC_FUNC_IMPL(__imp__sub_830332B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830332B8"))) PPC_WEAK_FUNC(sub_830332B8);
PPC_FUNC_IMPL(__imp__sub_830332B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830332c8
	if (cr6.lt) goto loc_830332C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830332C8:
	// b 0x83033228
	sub_83033228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830332CC"))) PPC_WEAK_FUNC(sub_830332CC);
PPC_FUNC_IMPL(__imp__sub_830332CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830332D0"))) PPC_WEAK_FUNC(sub_830332D0);
PPC_FUNC_IMPL(__imp__sub_830332D0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x830333ac
	if (cr6.gt) goto loc_830333AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83033320
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83033320;
	// bdzf 4*cr6+eq,0x83033364
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83033364;
	// bdzf 4*cr6+eq,0x830333d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830333D0;
	// bdzf 4*cr6+eq,0x830333d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830333D8;
	// bdzf 4*cr6+eq,0x830333ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830333AC;
	// bne cr6,0x83033410
	if (!cr6.eq) goto loc_83033410;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83033320:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-23640
	ctx.r11.s64 = ctx.r11.s64 + -23640;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x83033334;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83033340;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303334C;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x830333ac
	goto loc_830333AC;
loc_83033364:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303336C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830333ac
	if (cr6.eq) goto loc_830333AC;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303339c
	if (cr6.eq) goto loc_8303339C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83033394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303339C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830333c8
	if (!cr6.eq) goto loc_830333C8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_830333A8:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830333AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830333B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830333C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830333a8
	goto loc_830333A8;
loc_830333D0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x830333a8
	goto loc_830333A8;
loc_830333D8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-23640
	ctx.r11.s64 = ctx.r11.s64 + -23640;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830333EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830333F8;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83033400;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830333b0
	goto loc_830333B0;
loc_83033410:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-23640
	ctx.r4.s64 = ctx.r11.s64 + -23640;
	// bl 0x837b0c10
	ctx.lr = 0x83033420;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303342C;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83033434;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830333b0
	goto loc_830333B0;
}

__attribute__((alias("__imp__sub_83033444"))) PPC_WEAK_FUNC(sub_83033444);
PPC_FUNC_IMPL(__imp__sub_83033444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83033448"))) PPC_WEAK_FUNC(sub_83033448);
PPC_FUNC_IMPL(__imp__sub_83033448) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830334a0
	if (!cr6.eq) goto loc_830334A0;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830334e8
	if (!cr6.eq) goto loc_830334E8;
	// bl 0x82d17d90
	ctx.lr = 0x83033488;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x830334e8
	goto loc_830334E8;
loc_830334A0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// bne cr6,0x830334d8
	if (!cr6.eq) goto loc_830334D8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830334e8
	if (!cr6.eq) goto loc_830334E8;
	// bl 0x82d17d90
	ctx.lr = 0x830334BC;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x830334e8
	goto loc_830334E8;
loc_830334D8:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830334e8
	if (!cr6.eq) goto loc_830334E8;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830334E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x830334F4;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_8303350C"))) PPC_WEAK_FUNC(sub_8303350C);
PPC_FUNC_IMPL(__imp__sub_8303350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83033510"))) PPC_WEAK_FUNC(sub_83033510);
PPC_FUNC_IMPL(__imp__sub_83033510) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83033540;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83033584
	if (cr6.eq) goto loc_83033584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83033554;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22968
	ctx.r9.s64 = ctx.r11.s64 + -22968;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// b 0x83033588
	goto loc_83033588;
loc_83033584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83033588:
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

__attribute__((alias("__imp__sub_830335A0"))) PPC_WEAK_FUNC(sub_830335A0);
PPC_FUNC_IMPL(__imp__sub_830335A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830335b0
	if (cr6.lt) goto loc_830335B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830335B0:
	// b 0x83033510
	sub_83033510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830335B4"))) PPC_WEAK_FUNC(sub_830335B4);
PPC_FUNC_IMPL(__imp__sub_830335B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830335B8"))) PPC_WEAK_FUNC(sub_830335B8);
PPC_FUNC_IMPL(__imp__sub_830335B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830335C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x830338bc
	if (cr6.gt) goto loc_830338BC;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13808
	ctx.r12.s64 = ctx.r12.s64 + 13808;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8303361C;
	case 1:
		goto loc_830337A0;
	case 2:
		goto loc_8303366C;
	case 3:
		goto loc_830337A0;
	case 4:
		goto loc_830336BC;
	case 5:
		goto loc_8303370C;
	case 6:
		goto loc_83033760;
	case 7:
		goto loc_830337A0;
	case 8:
		goto loc_830337E8;
	case 9:
		goto loc_830337AC;
	case 10:
		goto loc_83033824;
	default:
		return;
	}
	// lwz r24,13852(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13852);
	// lwz r24,14240(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14240);
	// lwz r24,13932(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13932);
	// lwz r24,14240(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14240);
	// lwz r24,14012(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14012);
	// lwz r24,14092(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14092);
	// lwz r24,14176(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14176);
	// lwz r24,14240(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14240);
	// lwz r24,14312(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14312);
	// lwz r24,14252(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14252);
	// lwz r24,14372(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14372);
loc_8303361C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8303363C;
	sub_82D2F6D8(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,142
	ctx.r4.u64 = ctx.r4.u64 | 142;
	// bl 0x82d2ada8
	ctx.lr = 0x8303364C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83033658;
	sub_83103100(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8303366C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8303368C;
	sub_82D2F6D8(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,312
	ctx.r4.u64 = ctx.r4.u64 | 312;
	// bl 0x82d2ada8
	ctx.lr = 0x8303369C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830336A8;
	sub_83103100(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830336BC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x830336D0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830336DC;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x830336E8;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8303370C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83033714;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830337a0
	if (cr6.eq) goto loc_830337A0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// beq cr6,0x8303372c
	if (cr6.eq) goto loc_8303372C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_8303372C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830337a0
	if (cr6.eq) goto loc_830337A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303374C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83033760:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8303377C;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,143
	ctx.r4.u64 = ctx.r4.u64 | 143;
	// bl 0x82d2ada8
	ctx.lr = 0x8303378C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83033798;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_830337A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830337AC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x830337C0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830337CC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830337D4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830337E8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830337FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83033808;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83033810;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83033824:
	// bl 0x82d86078
	ctx.lr = 0x83033828;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83033868
	if (!cr6.eq) goto loc_83033868;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83033848;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83033854;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8303385C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83033868:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83033870;
	sub_831F8200(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,752(r3)
	PPC_STORE_U8(ctx.r3.u32 + 752, ctx.r28.u8);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83033880;
	sub_825832D8(ctx, base);
	// bl 0x82d9b4e0
	ctx.lr = 0x83033884;
	sub_82D9B4E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-23064
	ctx.r11.s64 = ctx.r11.s64 + -23064;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83033898;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830338A4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x830338AC;
	sub_8387E8E0(ctx, base);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830338BC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23064
	ctx.r4.s64 = ctx.r11.s64 + -23064;
	// bl 0x837b0c10
	ctx.lr = 0x830338CC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830338D8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830338f8
	if (cr6.lt) goto loc_830338F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830338F8;
	sub_825952B8(ctx, base);
loc_830338F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303390C"))) PPC_WEAK_FUNC(sub_8303390C);
PPC_FUNC_IMPL(__imp__sub_8303390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83033910"))) PPC_WEAK_FUNC(sub_83033910);
PPC_FUNC_IMPL(__imp__sub_83033910) {
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
	// bl 0x83061e98
	ctx.lr = 0x8303392C;
	sub_83061E98(ctx, base);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83062130
	ctx.lr = 0x83033938;
	sub_83062130(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// addi r7,r10,-22392
	ctx.r7.s64 = ctx.r10.s64 + -22392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r5,r8,-22400
	ctx.r5.s64 = ctx.r8.s64 + -22400;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82da4040
	ctx.lr = 0x83033988;
	sub_82DA4040(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r3.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830339a0
	if (!cr6.eq) goto loc_830339A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83062230
	ctx.lr = 0x830339A0;
	sub_83062230(ctx, base);
loc_830339A0:
	// bl 0x82d86078
	ctx.lr = 0x830339A4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830339c0
	if (cr6.eq) goto loc_830339C0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830339B4;
	sub_825832D8(ctx, base);
	// lwz r10,2188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2188);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
loc_830339C0:
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

__attribute__((alias("__imp__sub_830339DC"))) PPC_WEAK_FUNC(sub_830339DC);
PPC_FUNC_IMPL(__imp__sub_830339DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830339E0"))) PPC_WEAK_FUNC(sub_830339E0);
PPC_FUNC_IMPL(__imp__sub_830339E0) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r11,-22392
	ctx.r8.s64 = ctx.r11.s64 + -22392;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-22400
	ctx.r6.s64 = ctx.r9.s64 + -22400;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// bl 0x83062070
	ctx.lr = 0x83033A20;
	sub_83062070(ctx, base);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// addi r3,r5,-19088
	ctx.r3.s64 = ctx.r5.s64 + -19088;
	// addi r11,r4,-17088
	ctx.r11.s64 = ctx.r4.s64 + -17088;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82f42278
	ctx.lr = 0x83033A40;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_83033A54"))) PPC_WEAK_FUNC(sub_83033A54);
PPC_FUNC_IMPL(__imp__sub_83033A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83033A58"))) PPC_WEAK_FUNC(sub_83033A58);
PPC_FUNC_IMPL(__imp__sub_83033A58) {
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
	// bl 0x830339e0
	ctx.lr = 0x83033A78;
	sub_830339E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83033a90
	if (cr6.eq) goto loc_83033A90;
	// bl 0x82416268
	ctx.lr = 0x83033A8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83033A90:
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

__attribute__((alias("__imp__sub_83033AA8"))) PPC_WEAK_FUNC(sub_83033AA8);
PPC_FUNC_IMPL(__imp__sub_83033AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-96
	ctx.r3.s64 = ctx.r3.s64 + -96;
	// b 0x83033a58
	sub_83033A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83033AB0"))) PPC_WEAK_FUNC(sub_83033AB0);
PPC_FUNC_IMPL(__imp__sub_83033AB0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83033ad4
	if (cr6.lt) goto loc_83033AD4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83033ad8
	goto loc_83033AD8;
loc_83033AD4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83033AD8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83033AF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83033b08
	if (cr6.eq) goto loc_83033B08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83033910
	ctx.lr = 0x83033B00;
	sub_83033910(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83033b0c
	if (!cr6.eq) goto loc_83033B0C;
loc_83033B08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83033B0C:
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

__attribute__((alias("__imp__sub_83033B20"))) PPC_WEAK_FUNC(sub_83033B20);
PPC_FUNC_IMPL(__imp__sub_83033B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83033B28;
	__savegprlr_22(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8303405c
	if (cr6.gt) goto loc_8303405C;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15196
	ctx.r12.s64 = ctx.r12.s64 + 15196;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83033B84;
	case 1:
		goto loc_83033BD4;
	case 2:
		goto loc_83033C24;
	case 3:
		goto loc_83033D08;
	case 4:
		goto loc_83033ED8;
	case 5:
		goto loc_83033F24;
	case 6:
		goto loc_83033F74;
	case 7:
		goto loc_83033FAC;
	case 8:
		goto loc_83033FE4;
	case 9:
		goto loc_83034020;
	default:
		return;
	}
	// lwz r24,15236(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15236);
	// lwz r24,15316(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15316);
	// lwz r24,15396(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15396);
	// lwz r24,15624(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15624);
	// lwz r24,16088(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16088);
	// lwz r24,16164(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16164);
	// lwz r24,16244(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16244);
	// lwz r24,16300(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16300);
	// lwz r24,16356(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16356);
	// lwz r24,16416(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16416);
loc_83033B84:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x837b0c10
	ctx.lr = 0x83033B98;
	sub_837B0C10(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83033BA4;
	sub_82D894E0(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x83033BB0;
	sub_8387E8E0(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033BD4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82ddcec8
	ctx.lr = 0x83033BDC;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83033f68
	if (cr6.eq) goto loc_83033F68;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x83033bf4
	if (cr6.eq) goto loc_83033BF4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83033BF4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83033f68
	if (cr6.eq) goto loc_83033F68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83033C14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033C24:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83033cf4
	if (!cr6.eq) goto loc_83033CF4;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830620c8
	ctx.lr = 0x83033C3C;
	sub_830620C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83033f68
	if (cr6.eq) goto loc_83033F68;
	// bl 0x82d86078
	ctx.lr = 0x83033C4C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83033c5c
	if (!cr6.eq) goto loc_83033C5C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83033C5C:
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83033C68;
	sub_82DAB6D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83033C70;
	sub_825832D8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// lwz r4,2188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// bl 0x83062308
	ctx.lr = 0x83033CA4;
	sub_83062308(ctx, base);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,2192
	ctx.r3.s64 = ctx.r30.s64 + 2192;
	// bl 0x8259cb28
	ctx.lr = 0x83033CBC;
	sub_8259CB28(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,2220
	ctx.r3.s64 = ctx.r30.s64 + 2220;
	// bl 0x8259cb28
	ctx.lr = 0x83033CD0;
	sub_8259CB28(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83033CE0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83033CE8;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033CF4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033D08:
	// bl 0x831156e8
	ctx.lr = 0x83033D0C;
	sub_831156E8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r24,-1
	ctx.r24.s64 = -1;
	// ori r23,r11,65535
	ctx.r23.u64 = ctx.r11.u64 | 65535;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, xer);
	// ble cr6,0x83033d30
	if (!cr6.gt) goto loc_83033D30;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_83033D30:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8311c148
	ctx.lr = 0x83033D38;
	sub_8311C148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83033D40;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83033d50
	if (!cr6.eq) goto loc_83033D50;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83033D50:
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83033D5C;
	sub_82DAB6D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83033D68;
	sub_825832D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// bl 0x82aba208
	ctx.lr = 0x83033D80;
	sub_82ABA208(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83033D84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83033d84
	if (!cr6.eq) goto loc_83033D84;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x83033DB0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83033e08
	if (!cr6.eq) goto loc_83033E08;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r30,r29,74
	ctx.r30.s64 = ctx.r29.s64 + 74;
	// bl 0x82cabb48
	ctx.lr = 0x83033DCC;
	sub_82CABB48(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83033DD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83033dd0
	if (!cr6.eq) goto loc_83033DD0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x83033DFC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83033e0c
	if (cr6.eq) goto loc_83033E0C;
loc_83033E08:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83033E0C:
	// rlwinm r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83033e28
	if (cr6.eq) goto loc_83033E28;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r28,r28,0,31,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x8387e8e0
	ctx.lr = 0x83033E28;
	sub_8387E8E0(ctx, base);
loc_83033E28:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83033e3c
	if (cr6.eq) goto loc_83033E3C;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x83033E3C;
	sub_8387E8E0(ctx, base);
loc_83033E3C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83033ec4
	if (cr6.eq) goto loc_83033EC4;
	// lwz r11,2188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2188);
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// ble cr6,0x83033e5c
	if (!cr6.gt) goto loc_83033E5C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_83033E5C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8311c148
	ctx.lr = 0x83033E64;
	sub_8311C148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x83033E74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d979f0
	ctx.lr = 0x83033E80;
	sub_82D979F0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83033E88;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,74
	ctx.r4.s64 = ctx.r30.s64 + 74;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x83033E94;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d97a00
	ctx.lr = 0x83033EA0;
	sub_82D97A00(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83033EA8;
	sub_8387E8E0(ctx, base);
	// lhz r10,78(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 78);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,84(r26)
	PPC_STORE_U16(ctx.r26.u32 + 84, ctx.r10.u16);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033EC4:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033ED8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x83033EEC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83033EF8;
	sub_82D894E0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x83033F04;
	sub_8387E8E0(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033F24:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82ddcec8
	ctx.lr = 0x83033F2C;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83033f68
	if (cr6.eq) goto loc_83033F68;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// beq cr6,0x83033f68
	if (cr6.eq) goto loc_83033F68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83033F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
loc_83033F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033F74:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83033F88;
	sub_837B0C10(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83033F94;
	sub_82E88020(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x83033F9C;
	sub_8387E8E0(ctx, base);
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033FAC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83033FC0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83033FCC;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83033FD4;
	sub_8387E8E0(ctx, base);
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83033FE4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x83033FF8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034004;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x8303400C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83034020:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83034034;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034040;
	sub_82E88020(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x83034048;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8303405C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-22492
	ctx.r4.s64 = ctx.r11.s64 + -22492;
	// bl 0x837b0c10
	ctx.lr = 0x8303406C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034078;
	sub_82E88020(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83034098
	if (cr6.lt) goto loc_83034098;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83034098;
	sub_825952B8(ctx, base);
loc_83034098:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830340AC"))) PPC_WEAK_FUNC(sub_830340AC);
PPC_FUNC_IMPL(__imp__sub_830340AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830340B0"))) PPC_WEAK_FUNC(sub_830340B0);
PPC_FUNC_IMPL(__imp__sub_830340B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830340cc
	if (!cr6.eq) goto loc_830340CC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_830340CC:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830340D0"))) PPC_WEAK_FUNC(sub_830340D0);
PPC_FUNC_IMPL(__imp__sub_830340D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830340D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83061e98
	ctx.lr = 0x830340E8;
	sub_83061E98(ctx, base);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83062130
	ctx.lr = 0x830340F4;
	sub_83062130(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-21776
	ctx.r7.s64 = ctx.r10.s64 + -21776;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r5,r8,-21784
	ctx.r5.s64 = ctx.r8.s64 + -21784;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r29,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r29.u8);
	// bl 0x83062230
	ctx.lr = 0x83034158;
	sub_83062230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83034164"))) PPC_WEAK_FUNC(sub_83034164);
PPC_FUNC_IMPL(__imp__sub_83034164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034168"))) PPC_WEAK_FUNC(sub_83034168);
PPC_FUNC_IMPL(__imp__sub_83034168) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-96
	ctx.r3.s64 = ctx.r3.s64 + -96;
	// b 0x83034240
	sub_83034240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83034170"))) PPC_WEAK_FUNC(sub_83034170);
PPC_FUNC_IMPL(__imp__sub_83034170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83034178;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r11,-21776
	ctx.r8.s64 = ctx.r11.s64 + -21776;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-21784
	ctx.r6.s64 = ctx.r9.s64 + -21784;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// addi r29,r3,152
	ctx.r29.s64 = ctx.r3.s64 + 152;
	// lwz r5,172(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r26,r3,96
	ctx.r26.s64 = ctx.r3.s64 + 96;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x830341cc
	if (cr6.lt) goto loc_830341CC;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830341CC;
	sub_825952B8(ctx, base);
loc_830341CC:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83034200
	if (cr6.lt) goto loc_83034200;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83034200;
	sub_825952B8(ctx, base);
loc_83034200:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// bl 0x83062070
	ctx.lr = 0x83034214;
	sub_83062070(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19088
	ctx.r9.s64 = ctx.r11.s64 + -19088;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82f42278
	ctx.lr = 0x83034234;
	sub_82F42278(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303423C"))) PPC_WEAK_FUNC(sub_8303423C);
PPC_FUNC_IMPL(__imp__sub_8303423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034240"))) PPC_WEAK_FUNC(sub_83034240);
PPC_FUNC_IMPL(__imp__sub_83034240) {
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
	// bl 0x83034170
	ctx.lr = 0x83034260;
	sub_83034170(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83034278
	if (cr6.eq) goto loc_83034278;
	// bl 0x82416268
	ctx.lr = 0x83034274;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83034278:
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

__attribute__((alias("__imp__sub_83034290"))) PPC_WEAK_FUNC(sub_83034290);
PPC_FUNC_IMPL(__imp__sub_83034290) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830342b4
	if (cr6.lt) goto loc_830342B4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830342b8
	goto loc_830342B8;
loc_830342B4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830342B8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830342D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830342ec
	if (cr6.eq) goto loc_830342EC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830340d0
	ctx.lr = 0x830342E4;
	sub_830340D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830342f0
	if (!cr6.eq) goto loc_830342F0;
loc_830342EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830342F0:
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

__attribute__((alias("__imp__sub_83034304"))) PPC_WEAK_FUNC(sub_83034304);
PPC_FUNC_IMPL(__imp__sub_83034304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034308"))) PPC_WEAK_FUNC(sub_83034308);
PPC_FUNC_IMPL(__imp__sub_83034308) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303432c
	if (cr6.lt) goto loc_8303432C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83034330
	goto loc_83034330;
loc_8303432C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83034330:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83034348;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83034364
	if (cr6.eq) goto loc_83034364;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830340d0
	ctx.lr = 0x8303435C;
	sub_830340D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83034368
	if (!cr6.eq) goto loc_83034368;
loc_83034364:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83034368:
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

__attribute__((alias("__imp__sub_8303437C"))) PPC_WEAK_FUNC(sub_8303437C);
PPC_FUNC_IMPL(__imp__sub_8303437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034380"))) PPC_WEAK_FUNC(sub_83034380);
PPC_FUNC_IMPL(__imp__sub_83034380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83034388;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83034398;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,9
	ctx.r27.s64 = 9;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830343ac
	if (!cr6.eq) goto loc_830343AC;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
loc_830343AC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83034884
	if (cr6.gt) goto loc_83034884;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17364
	ctx.r12.s64 = ctx.r12.s64 + 17364;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83034404;
	case 1:
		goto loc_83034440;
	case 2:
		goto loc_83034500;
	case 3:
		goto loc_83034580;
	case 4:
		goto loc_830347C4;
	case 5:
		goto loc_83034688;
	case 6:
		goto loc_830346D8;
	case 7:
		goto loc_8303472C;
	case 8:
		goto loc_83034778;
	case 9:
		goto loc_830347D0;
	case 10:
		goto loc_8303480C;
	case 11:
		goto loc_83034848;
	default:
		return;
	}
	// lwz r24,17412(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17412);
	// lwz r24,17472(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17472);
	// lwz r24,17664(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17664);
	// lwz r24,17792(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17792);
	// lwz r24,18372(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18372);
	// lwz r24,18056(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18056);
	// lwz r24,18136(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18136);
	// lwz r24,18220(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18220);
	// lwz r24,18296(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18296);
	// lwz r24,18384(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18384);
	// lwz r24,18444(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18444);
	// lwz r24,18504(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18504);
loc_83034404:
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830620c8
	ctx.lr = 0x83034410;
	sub_830620C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830347c4
	if (cr6.eq) goto loc_830347C4;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83034424;
	sub_82DAB6D0(ctx, base);
	// bl 0x8307e040
	ctx.lr = 0x83034428;
	sub_8307E040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
	// addi r5,r31,124
	ctx.r5.s64 = ctx.r31.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83062308
	ctx.lr = 0x8303443C;
	sub_83062308(ctx, base);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
loc_83034440:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83034448;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83542800
	ctx.lr = 0x83034450;
	sub_83542800(ctx, base);
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// bl 0x82aa1508
	ctx.lr = 0x83034458;
	sub_82AA1508(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303447c
	if (cr6.eq) goto loc_8303447C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r28.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8303447C:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,1352
	ctx.r4.s64 = 1352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83034494;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830344d4
	if (cr6.eq) goto loc_830344D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83542800
	ctx.lr = 0x830344A8;
	sub_83542800(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830344c4
	if (cr6.lt) goto loc_830344C4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e712a8
	ctx.lr = 0x830344C0;
	sub_82E712A8(ctx, base);
	// b 0x830344d8
	goto loc_830344D8;
loc_830344C4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e712a8
	ctx.lr = 0x830344D0;
	sub_82E712A8(ctx, base);
	// b 0x830344d8
	goto loc_830344D8;
loc_830344D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830344D8:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83034500:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83034508;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82638f20
	ctx.lr = 0x83034510;
	sub_82638F20(ctx, base);
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// bl 0x82aa1508
	ctx.lr = 0x83034518;
	sub_82AA1508(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83034538
	if (cr6.eq) goto loc_83034538;
loc_83034524:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83034538:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,1352
	ctx.r4.s64 = 1352;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x83034550;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830344d4
	if (cr6.eq) goto loc_830344D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82638f20
	ctx.lr = 0x83034564;
	sub_82638F20(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830344c4
	if (cr6.lt) goto loc_830344C4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e712a8
	ctx.lr = 0x8303457C;
	sub_82E712A8(ctx, base);
	// b 0x830344d8
	goto loc_830344D8;
loc_83034580:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82e716d8
	ctx.lr = 0x83034588;
	sub_82E716D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830347c4
	if (cr6.eq) goto loc_830347C4;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82e716d8
	ctx.lr = 0x83034598;
	sub_82E716D8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830345e4
	if (cr6.eq) goto loc_830345E4;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830345BC;
	sub_82595150(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830345dc
	if (cr6.eq) goto loc_830345DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830345DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830345DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x830345E4;
	sub_82595170(ctx, base);
loc_830345E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bne cr6,0x8303461c
	if (!cr6.eq) goto loc_8303461C;
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83034524
	if (!cr6.eq) goto loc_83034524;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8303461C:
	// lbz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83034674
	if (cr6.eq) goto loc_83034674;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-21876
	ctx.r11.s64 = ctx.r11.s64 + -21876;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-88
	ctx.r3.s64 = ctx.r11.s64 + -88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83034644;
	sub_82D2FA90(ctx, base);
	// lis r4,501
	ctx.r4.s64 = 32833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x82d2ada8
	ctx.lr = 0x83034654;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83034660;
	sub_83103100(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83034674:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83034688:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-21876
	ctx.r11.s64 = ctx.r11.s64 + -21876;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x8303469C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830346A8;
	sub_82D894E0(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x830346B4;
	sub_8387E8E0(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830346D8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82ddcec8
	ctx.lr = 0x830346E0;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830347c4
	if (cr6.eq) goto loc_830347C4;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r11,11
	ctx.r11.s64 = 11;
	// beq cr6,0x830346f8
	if (cr6.eq) goto loc_830346F8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_830346F8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830347c4
	if (cr6.eq) goto loc_830347C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83034718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8303472C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-21876
	ctx.r11.s64 = ctx.r11.s64 + -21876;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83034740;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303474C;
	sub_82D894E0(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83034758;
	sub_8387E8E0(ctx, base);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83034778:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82ddcec8
	ctx.lr = 0x83034780;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830347c4
	if (cr6.eq) goto loc_830347C4;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8303479c
	if (!cr6.eq) goto loc_8303479C;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x830347a0
	goto loc_830347A0;
loc_8303479C:
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
loc_830347A0:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830347c4
	if (cr6.eq) goto loc_830347C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830347BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
loc_830347C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830347D0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-21876
	ctx.r11.s64 = ctx.r11.s64 + -21876;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830347E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830347F0;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x830347F8;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8303480C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-21876
	ctx.r11.s64 = ctx.r11.s64 + -21876;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83034820;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303482C;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83034834;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83034848:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-21876
	ctx.r11.s64 = ctx.r11.s64 + -21876;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303485C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034868;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83034870;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83034884:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-21876
	ctx.r4.s64 = ctx.r11.s64 + -21876;
	// bl 0x837b0c10
	ctx.lr = 0x83034894;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830348A0;
	sub_82E88020(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830348c0
	if (cr6.lt) goto loc_830348C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830348C0;
	sub_825952B8(ctx, base);
loc_830348C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830348D4"))) PPC_WEAK_FUNC(sub_830348D4);
PPC_FUNC_IMPL(__imp__sub_830348D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830348D8"))) PPC_WEAK_FUNC(sub_830348D8);
PPC_FUNC_IMPL(__imp__sub_830348D8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83034908;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303493c
	if (cr6.eq) goto loc_8303493C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303491C;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21288
	ctx.r9.s64 = ctx.r11.s64 + -21288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83034940
	goto loc_83034940;
loc_8303493C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83034940:
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

__attribute__((alias("__imp__sub_83034958"))) PPC_WEAK_FUNC(sub_83034958);
PPC_FUNC_IMPL(__imp__sub_83034958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83034968
	if (cr6.lt) goto loc_83034968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83034968:
	// b 0x830348d8
	sub_830348D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303496C"))) PPC_WEAK_FUNC(sub_8303496C);
PPC_FUNC_IMPL(__imp__sub_8303496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034970"))) PPC_WEAK_FUNC(sub_83034970);
PPC_FUNC_IMPL(__imp__sub_83034970) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83034988;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830349d4
	if (!cr6.eq) goto loc_830349D4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21380
	ctx.r11.s64 = ctx.r11.s64 + -21380;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830349A4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830349B0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83034a2c
	if (cr6.lt) goto loc_83034A2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830349D0;
	sub_825952B8(ctx, base);
	// b 0x83034a2c
	goto loc_83034A2C;
loc_830349D4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x830349DC;
	sub_831F8200(ctx, base);
	// addi r11,r3,772
	ctx.r11.s64 = ctx.r3.s64 + 772;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x83034a08
	if (!cr6.eq) goto loc_83034A08;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83034a08
	if (!cr6.gt) goto loc_83034A08;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,-21380
	ctx.r11.s64 = ctx.r11.s64 + -21380;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x83034a10
	goto loc_83034A10;
loc_83034A08:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-21380
	ctx.r4.s64 = ctx.r11.s64 + -21380;
loc_83034A10:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83034A18;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034A24;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83034A2C;
	sub_8387E8E0(ctx, base);
loc_83034A2C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83034A44"))) PPC_WEAK_FUNC(sub_83034A44);
PPC_FUNC_IMPL(__imp__sub_83034A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034A48"))) PPC_WEAK_FUNC(sub_83034A48);
PPC_FUNC_IMPL(__imp__sub_83034A48) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83034A78;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83034abc
	if (cr6.eq) goto loc_83034ABC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83034A8C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-20736
	ctx.r8.s64 = ctx.r10.s64 + -20736;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x83034ac0
	goto loc_83034AC0;
loc_83034ABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83034AC0:
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

__attribute__((alias("__imp__sub_83034AD8"))) PPC_WEAK_FUNC(sub_83034AD8);
PPC_FUNC_IMPL(__imp__sub_83034AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83034ae8
	if (cr6.lt) goto loc_83034AE8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83034AE8:
	// b 0x83034a48
	sub_83034A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83034AEC"))) PPC_WEAK_FUNC(sub_83034AEC);
PPC_FUNC_IMPL(__imp__sub_83034AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034AF0"))) PPC_WEAK_FUNC(sub_83034AF0);
PPC_FUNC_IMPL(__imp__sub_83034AF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82da8fd0
	ctx.lr = 0x83034B10;
	sub_82DA8FD0(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// bl 0x82da8bb0
	ctx.lr = 0x83034B44;
	sub_82DA8BB0(ctx, base);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x82bb0a60
	ctx.lr = 0x83034B68;
	sub_82BB0A60(ctx, base);
	// lbz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// stb r4,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r4.u8);
	// lbz r3,109(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 109);
	// stb r3,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83034B94"))) PPC_WEAK_FUNC(sub_83034B94);
PPC_FUNC_IMPL(__imp__sub_83034B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034B98"))) PPC_WEAK_FUNC(sub_83034B98);
PPC_FUNC_IMPL(__imp__sub_83034B98) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83034BB8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83034c08
	if (!cr6.eq) goto loc_83034C08;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-20832
	ctx.r11.s64 = ctx.r11.s64 + -20832;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x83034BD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034BE0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83034c00
	if (cr6.lt) goto loc_83034C00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83034C00;
	sub_825952B8(ctx, base);
loc_83034C00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83034cf0
	goto loc_83034CF0;
loc_83034C08:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83034cec
	if (cr6.gt) goto loc_83034CEC;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19500
	ctx.r12.s64 = ctx.r12.s64 + 19500;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83034C54;
	case 1:
		goto loc_83034C5C;
	case 2:
		goto loc_83034CA4;
	case 3:
		goto loc_83034D10;
	case 4:
		goto loc_83034D90;
	case 5:
		goto loc_83034DD4;
	case 6:
		goto loc_83034E1C;
	case 7:
		goto loc_83034E24;
	case 8:
		goto loc_83034E5C;
	case 9:
		goto loc_83034E94;
	default:
		return;
	}
	// lwz r24,19540(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19540);
	// lwz r24,19548(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19548);
	// lwz r24,19620(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19620);
	// lwz r24,19728(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19728);
	// lwz r24,19856(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19856);
	// lwz r24,19924(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19924);
	// lwz r24,19996(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19996);
	// lwz r24,20004(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20004);
	// lwz r24,20060(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20060);
	// lwz r24,20116(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20116);
loc_83034C54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83034C5C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-20832
	ctx.r11.s64 = ctx.r11.s64 + -20832;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83034C70;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83034C7C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83034C88;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83034cec
	goto loc_83034CEC;
loc_83034CA4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83034CAC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83034cec
	if (cr6.eq) goto loc_83034CEC;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83034cdc
	if (cr6.eq) goto loc_83034CDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83034CD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83034CDC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83034d08
	if (!cr6.eq) goto loc_83034D08;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83034CE8:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83034CEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83034CF0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83034D08:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83034ce8
	goto loc_83034CE8;
loc_83034D10:
	// bl 0x82d86078
	ctx.lr = 0x83034D14;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x83034D1C;
	sub_825832F0(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82da7598
	ctx.lr = 0x83034D34;
	sub_82DA7598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83034af0
	ctx.lr = 0x83034D40;
	sub_83034AF0(ctx, base);
	// lbz r7,396(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 396);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83034d5c
	if (!cr6.eq) goto loc_83034D5C;
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83034d60
	if (!cr6.eq) goto loc_83034D60;
loc_83034D5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83034D60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83034d80
	if (!cr6.eq) goto loc_83034D80;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82da7240
	ctx.lr = 0x83034D7C;
	sub_82DA7240(ctx, base);
	// b 0x83034cec
	goto loc_83034CEC;
loc_83034D80:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82da7240
	ctx.lr = 0x83034D8C;
	sub_82DA7240(ctx, base);
	// b 0x83034cec
	goto loc_83034CEC;
loc_83034D90:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-20832
	ctx.r11.s64 = ctx.r11.s64 + -20832;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83034DA4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83034DB0;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83034DBC;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83034cec
	goto loc_83034CEC;
loc_83034DD4:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83034DDC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83034cec
	if (cr6.eq) goto loc_83034CEC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83034e0c
	if (cr6.eq) goto loc_83034E0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83034E04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83034E0C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83034d08
	if (!cr6.eq) goto loc_83034D08;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x83034ce8
	goto loc_83034CE8;
loc_83034E1C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83034ce8
	goto loc_83034CE8;
loc_83034E24:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-20832
	ctx.r11.s64 = ctx.r11.s64 + -20832;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83034E38;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034E44;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83034E4C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83034cf0
	goto loc_83034CF0;
loc_83034E5C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-20832
	ctx.r11.s64 = ctx.r11.s64 + -20832;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83034E70;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034E7C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83034E84;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83034cf0
	goto loc_83034CF0;
loc_83034E94:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-20832
	ctx.r4.s64 = ctx.r11.s64 + -20832;
	// bl 0x837b0c10
	ctx.lr = 0x83034EA4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034EB0;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83034EB8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83034cf0
	goto loc_83034CF0;
}

__attribute__((alias("__imp__sub_83034EC8"))) PPC_WEAK_FUNC(sub_83034EC8);
PPC_FUNC_IMPL(__imp__sub_83034EC8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83034EF8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83034f38
	if (cr6.eq) goto loc_83034F38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83034F0C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-20192
	ctx.r8.s64 = ctx.r10.s64 + -20192;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83034f3c
	goto loc_83034F3C;
loc_83034F38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83034F3C:
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

__attribute__((alias("__imp__sub_83034F54"))) PPC_WEAK_FUNC(sub_83034F54);
PPC_FUNC_IMPL(__imp__sub_83034F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034F58"))) PPC_WEAK_FUNC(sub_83034F58);
PPC_FUNC_IMPL(__imp__sub_83034F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83034f68
	if (cr6.lt) goto loc_83034F68;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83034F68:
	// b 0x83034ec8
	sub_83034EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83034F6C"))) PPC_WEAK_FUNC(sub_83034F6C);
PPC_FUNC_IMPL(__imp__sub_83034F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83034F70"))) PPC_WEAK_FUNC(sub_83034F70);
PPC_FUNC_IMPL(__imp__sub_83034F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83034F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83034F88;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83034fe8
	if (!cr6.eq) goto loc_83034FE8;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83034FA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83034FB4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83034fd4
	if (cr6.lt) goto loc_83034FD4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83034FD4;
	sub_825952B8(ctx, base);
loc_83034FD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83034FE8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x830350d4
	if (cr6.gt) goto loc_830350D4;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20492
	ctx.r12.s64 = ctx.r12.s64 + 20492;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83035034;
	case 1:
		goto loc_8303503C;
	case 2:
		goto loc_8303508C;
	case 3:
		goto loc_830350F4;
	case 4:
		goto loc_83035150;
	case 5:
		goto loc_830351C4;
	case 6:
		goto loc_830351D8;
	case 7:
		goto loc_83035214;
	case 8:
		goto loc_83035250;
	case 9:
		goto loc_8303528C;
	default:
		return;
	}
	// lwz r24,20532(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20532);
	// lwz r24,20540(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20540);
	// lwz r24,20620(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20620);
	// lwz r24,20724(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20724);
	// lwz r24,20816(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20816);
	// lwz r24,20932(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20932);
	// lwz r24,20952(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20952);
	// lwz r24,21012(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21012);
	// lwz r24,21072(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21072);
	// lwz r24,21132(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21132);
loc_83035034:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303503C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x83035050;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303505C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83035068;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303508C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83035094;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830350d4
	if (cr6.eq) goto loc_830350D4;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830350c4
	if (cr6.eq) goto loc_830350C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830350BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830350C4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830350e0
	if (!cr6.eq) goto loc_830350E0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830350D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830350E0:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830350F4:
	// bl 0x83105358
	ctx.lr = 0x830350F8;
	sub_83105358(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b1b708
	ctx.lr = 0x83035108;
	sub_82B1B708(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r11,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303513c
	if (!cr6.eq) goto loc_8303513C;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x83035120;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x83035124;
	sub_82DA75F0(ctx, base);
	// lbz r11,45(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303513c
	if (cr6.eq) goto loc_8303513C;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b1b640
	ctx.lr = 0x8303513C;
	sub_82B1B640(ctx, base);
loc_8303513C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83035150:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x83035158;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x8303515C;
	sub_82DA75F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8303517c
	if (cr6.eq) goto loc_8303517C;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303517C:
	// bl 0x82d8a820
	ctx.lr = 0x83035180;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830351b0
	if (!cr6.eq) goto loc_830351B0;
	// bl 0x82d8a900
	ctx.lr = 0x83035190;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830351b0
	if (!cr6.eq) goto loc_830351B0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830351B0:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830351C4:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830351D8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x830351EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830351F8;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83035200;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83035214:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x83035228;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035234;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8303523C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83035250:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x83035264;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035270;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83035278;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303528C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-20288
	ctx.r4.s64 = ctx.r11.s64 + -20288;
	// bl 0x837b0c10
	ctx.lr = 0x8303529C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830352A8;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x830352B0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830352C4"))) PPC_WEAK_FUNC(sub_830352C4);
PPC_FUNC_IMPL(__imp__sub_830352C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830352C8"))) PPC_WEAK_FUNC(sub_830352C8);
PPC_FUNC_IMPL(__imp__sub_830352C8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830352F8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035338
	if (cr6.eq) goto loc_83035338;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303530C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-19664
	ctx.r8.s64 = ctx.r10.s64 + -19664;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303533c
	goto loc_8303533C;
loc_83035338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303533C:
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

__attribute__((alias("__imp__sub_83035354"))) PPC_WEAK_FUNC(sub_83035354);
PPC_FUNC_IMPL(__imp__sub_83035354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83035358"))) PPC_WEAK_FUNC(sub_83035358);
PPC_FUNC_IMPL(__imp__sub_83035358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83035368
	if (cr6.lt) goto loc_83035368;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83035368:
	// b 0x830352c8
	sub_830352C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303536C"))) PPC_WEAK_FUNC(sub_8303536C);
PPC_FUNC_IMPL(__imp__sub_8303536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83035370"))) PPC_WEAK_FUNC(sub_83035370);
PPC_FUNC_IMPL(__imp__sub_83035370) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83035390;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830353e8
	if (!cr6.eq) goto loc_830353E8;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-19760
	ctx.r11.s64 = ctx.r11.s64 + -19760;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x830353AC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830353B8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830353d8
	if (cr6.lt) goto loc_830353D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830353D8;
	sub_825952B8(ctx, base);
loc_830353D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x830354cc
	goto loc_830354CC;
loc_830353E8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x830354c8
	if (cr6.gt) goto loc_830354C8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303541c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303541C;
	// bdzf 4*cr6+eq,0x83035460
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83035460;
	// bdzf 4*cr6+eq,0x830354f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830354F4;
	// bdzf 4*cr6+eq,0x830354fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830354FC;
	// bdzf 4*cr6+eq,0x83035534
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83035534;
	// bne cr6,0x8303556c
	if (!cr6.eq) goto loc_8303556C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303541C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-19760
	ctx.r11.s64 = ctx.r11.s64 + -19760;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83035430;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303543C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83035448;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x830354c8
	goto loc_830354C8;
loc_83035460:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83035468;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830354c8
	if (cr6.eq) goto loc_830354C8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035498
	if (cr6.eq) goto loc_83035498;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83035490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83035498:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830354ec
	if (!cr6.eq) goto loc_830354EC;
	// bl 0x82d95ee0
	ctx.lr = 0x830354A4;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830354e4
	if (!cr6.eq) goto loc_830354E4;
	// bl 0x82d8a820
	ctx.lr = 0x830354B4;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830354e4
	if (!cr6.eq) goto loc_830354E4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_830354C4:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830354C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830354CC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830354E4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x830354c4
	goto loc_830354C4;
loc_830354EC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830354c4
	goto loc_830354C4;
loc_830354F4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x830354c4
	goto loc_830354C4;
loc_830354FC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-19760
	ctx.r11.s64 = ctx.r11.s64 + -19760;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83035510;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303551C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83035524;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830354cc
	goto loc_830354CC;
loc_83035534:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-19760
	ctx.r11.s64 = ctx.r11.s64 + -19760;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83035548;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035554;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8303555C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830354cc
	goto loc_830354CC;
loc_8303556C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-19760
	ctx.r4.s64 = ctx.r11.s64 + -19760;
	// bl 0x837b0c10
	ctx.lr = 0x8303557C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035588;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83035590;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830354cc
	goto loc_830354CC;
}

__attribute__((alias("__imp__sub_830355A0"))) PPC_WEAK_FUNC(sub_830355A0);
PPC_FUNC_IMPL(__imp__sub_830355A0) {
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
	// bl 0x83061e98
	ctx.lr = 0x830355C0;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-18976
	ctx.r8.s64 = ctx.r10.s64 + -18976;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
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
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83035620"))) PPC_WEAK_FUNC(sub_83035620);
PPC_FUNC_IMPL(__imp__sub_83035620) {
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
	ctx.lr = 0x83035630;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035664
	if (cr6.eq) goto loc_83035664;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035664
	if (cr6.eq) goto loc_83035664;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83ac2480
	ctx.lr = 0x83035650;
	sub_83AC2480(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x83035664
	if (!cr6.eq) goto loc_83035664;
	// li r3,229
	ctx.r3.s64 = 229;
	// bl 0x82d84728
	ctx.lr = 0x83035664;
	sub_82D84728(ctx, base);
loc_83035664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035674"))) PPC_WEAK_FUNC(sub_83035674);
PPC_FUNC_IMPL(__imp__sub_83035674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83035678"))) PPC_WEAK_FUNC(sub_83035678);
PPC_FUNC_IMPL(__imp__sub_83035678) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035714
	if (cr6.eq) goto loc_83035714;
	// bl 0x82e7f658
	ctx.lr = 0x830356A0;
	sub_82E7F658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830356bc
	if (!cr6.eq) goto loc_830356BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x830356B4;
	sub_82D17AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83035718
	goto loc_83035718;
loc_830356BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x830356C4;
	sub_82D17AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82e80188
	ctx.lr = 0x830356D0;
	sub_82E80188(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82e80250
	ctx.lr = 0x830356E0;
	sub_82E80250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x830356E8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83035714
	if (cr6.eq) goto loc_83035714;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(ctx.r31.u64, 0, xer);
	// ble cr6,0x83035714
	if (!cr6.gt) goto loc_83035714;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035714
	if (cr6.eq) goto loc_83035714;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832e0
	ctx.lr = 0x83035708;
	sub_825832E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82decb78
	ctx.lr = 0x83035714;
	sub_82DECB78(ctx, base);
loc_83035714:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83035718:
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

__attribute__((alias("__imp__sub_83035730"))) PPC_WEAK_FUNC(sub_83035730);
PPC_FUNC_IMPL(__imp__sub_83035730) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83035754
	if (cr6.lt) goto loc_83035754;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83035758
	goto loc_83035758;
loc_83035754:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83035758:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83035770;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303578c
	if (cr6.eq) goto loc_8303578C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830355a0
	ctx.lr = 0x83035784;
	sub_830355A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83035790
	if (!cr6.eq) goto loc_83035790;
loc_8303578C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83035790:
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

__attribute__((alias("__imp__sub_830357A4"))) PPC_WEAK_FUNC(sub_830357A4);
PPC_FUNC_IMPL(__imp__sub_830357A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830357A8"))) PPC_WEAK_FUNC(sub_830357A8);
PPC_FUNC_IMPL(__imp__sub_830357A8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830357cc
	if (cr6.lt) goto loc_830357CC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830357d0
	goto loc_830357D0;
loc_830357CC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830357D0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830357E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035804
	if (cr6.eq) goto loc_83035804;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830355a0
	ctx.lr = 0x830357FC;
	sub_830355A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83035808
	if (!cr6.eq) goto loc_83035808;
loc_83035804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83035808:
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

__attribute__((alias("__imp__sub_8303581C"))) PPC_WEAK_FUNC(sub_8303581C);
PPC_FUNC_IMPL(__imp__sub_8303581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83035820"))) PPC_WEAK_FUNC(sub_83035820);
PPC_FUNC_IMPL(__imp__sub_83035820) {
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
	ctx.lr = 0x8303583C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303584c
	if (!cr6.eq) goto loc_8303584C;
loc_83035844:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830358b8
	goto loc_830358B8;
loc_8303584C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832e0
	ctx.lr = 0x83035854;
	sub_825832E0(ctx, base);
	// bl 0x82dec940
	ctx.lr = 0x83035858;
	sub_82DEC940(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83035874;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035890
	if (cr6.eq) goto loc_83035890;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-19072
	ctx.r5.s64 = ctx.r11.s64 + -19072;
	// bl 0x82c31d28
	ctx.lr = 0x8303588C;
	sub_82C31D28(ctx, base);
	// b 0x83035894
	goto loc_83035894;
loc_83035890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83035894:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// beq cr6,0x83035844
	if (cr6.eq) goto loc_83035844;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e805c0
	ctx.lr = 0x830358A8;
	sub_82E805C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83103100
	ctx.lr = 0x830358B4;
	sub_83103100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830358B8:
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

__attribute__((alias("__imp__sub_830358D0"))) PPC_WEAK_FUNC(sub_830358D0);
PPC_FUNC_IMPL(__imp__sub_830358D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830358D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x83036014
	if (cr6.gt) goto loc_83036014;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22792
	ctx.r12.s64 = ctx.r12.s64 + 22792;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83035954;
	case 1:
		goto loc_830359A8;
	case 2:
		goto loc_830359FC;
	case 3:
		goto loc_83035A7C;
	case 4:
		goto loc_83035AD0;
	case 5:
		goto loc_83035B38;
	case 6:
		goto loc_83035B88;
	case 7:
		goto loc_83035BF4;
	case 8:
		goto loc_83035C48;
	case 9:
		goto loc_83035C90;
	case 10:
		goto loc_83035D8C;
	case 11:
		goto loc_83035DD8;
	case 12:
		goto loc_83035DFC;
	case 13:
		goto loc_83035E48;
	case 14:
		goto loc_83035EC0;
	case 15:
		goto loc_83036014;
	case 16:
		goto loc_83035EFC;
	case 17:
		goto loc_83035F4C;
	case 18:
		goto loc_83035F9C;
	default:
		return;
	}
	// lwz r24,22868(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22868);
	// lwz r24,22952(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22952);
	// lwz r24,23036(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23036);
	// lwz r24,23164(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23164);
	// lwz r24,23248(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23248);
	// lwz r24,23352(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23352);
	// lwz r24,23432(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23432);
	// lwz r24,23540(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23540);
	// lwz r24,23624(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23624);
	// lwz r24,23696(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23696);
	// lwz r24,23948(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23948);
	// lwz r24,24024(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24024);
	// lwz r24,24060(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24060);
	// lwz r24,24136(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24136);
	// lwz r24,24256(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24256);
	// lwz r24,24596(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24596);
	// lwz r24,24316(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24316);
	// lwz r24,24396(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24396);
	// lwz r24,24476(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24476);
loc_83035954:
	// bl 0x82d897b0
	ctx.lr = 0x83035958;
	sub_82D897B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035978
	if (cr6.eq) goto loc_83035978;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83027de0
	ctx.lr = 0x83035980;
	sub_83027DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035994
	if (cr6.eq) goto loc_83035994;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83035820
	ctx.lr = 0x83035994;
	sub_83035820(ctx, base);
loc_83035994:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830359A8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-204
	ctx.r4.s64 = ctx.r11.s64 + -204;
	// bl 0x837b0c10
	ctx.lr = 0x830359BC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830359C8;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x830359D4;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r7,r11,14
	ctx.r7.s64 = ctx.r11.s64 + 14;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830359FC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83035A04;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035a34
	if (cr6.eq) goto loc_83035A34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83035A2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83035A34:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83035a68
	if (!cr6.eq) goto loc_83035A68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83035620
	ctx.lr = 0x83035A44;
	sub_83035620(ctx, base);
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035A68:
	// li r11,14
	ctx.r11.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035A7C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-176
	ctx.r4.s64 = ctx.r11.s64 + -176;
	// bl 0x837b0c10
	ctx.lr = 0x83035A90;
	sub_837B0C10(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83035A9C;
	sub_82D894E0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x83035AA8;
	sub_8387E8E0(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035AD0:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82ddcec8
	ctx.lr = 0x83035AD8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035b08
	if (cr6.eq) goto loc_83035B08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83035B00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_83035B08:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83035b24
	if (!cr6.eq) goto loc_83035B24;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035B24:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035B38:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-152
	ctx.r4.s64 = ctx.r11.s64 + -152;
	// bl 0x837b0c10
	ctx.lr = 0x83035B4C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83035B58;
	sub_82D894E0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83035B64;
	sub_8387E8E0(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,14
	ctx.r7.s64 = ctx.r11.s64 + 14;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035B88:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82ddcec8
	ctx.lr = 0x83035B90;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035bbc
	if (cr6.eq) goto loc_83035BBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83035BB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_83035BBC:
	// bl 0x82d86078
	ctx.lr = 0x83035BC0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035c7c
	if (cr6.eq) goto loc_83035C7C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x824ce1d8
	ctx.lr = 0x83035BD0;
	sub_824CE1D8(ctx, base);
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035c7c
	if (cr6.eq) goto loc_83035C7C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r30,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035BF4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// bl 0x837b0c10
	ctx.lr = 0x83035C08;
	sub_837B0C10(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83035C14;
	sub_82D894E0(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x83035C20;
	sub_8387E8E0(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r11,14
	ctx.r7.s64 = ctx.r11.s64 + 14;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035C48:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82ddcec8
	ctx.lr = 0x83035C50;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035c7c
	if (cr6.eq) goto loc_83035C7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83035C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
loc_83035C7C:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035C90:
	// bl 0x82d86078
	ctx.lr = 0x83035C94;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035a68
	if (cr6.eq) goto loc_83035A68;
	// bl 0x82d86078
	ctx.lr = 0x83035CA0;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x83035CA8;
	sub_825832F0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x82da7598
	ctx.lr = 0x83035CC0;
	sub_82DA7598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x83034af0
	ctx.lr = 0x83035CCC;
	sub_83034AF0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da7598
	ctx.lr = 0x83035CE0;
	sub_82DA7598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83034af0
	ctx.lr = 0x83035CEC;
	sub_83034AF0(ctx, base);
	// lbz r10,652(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 652);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83035d08
	if (!cr6.eq) goto loc_83035D08;
	// lwz r11,608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x83035d0c
	if (!cr6.eq) goto loc_83035D0C;
loc_83035D08:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83035D0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035d24
	if (cr6.eq) goto loc_83035D24;
	// stb r30,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r30.u8);
	// stb r28,652(r1)
	PPC_STORE_U8(ctx.r1.u32 + 652, ctx.r28.u8);
	// b 0x83035d54
	goto loc_83035D54;
loc_83035D24:
	// lbz r10,540(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 540);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83035d3c
	if (!cr6.eq) goto loc_83035D3C;
	// lwz r11,496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83035d40
	if (!cr6.eq) goto loc_83035D40;
loc_83035D3C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83035D40:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035d58
	if (cr6.eq) goto loc_83035D58;
	// stb r28,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r28.u8);
	// stb r28,540(r1)
	PPC_STORE_U8(ctx.r1.u32 + 540, ctx.r28.u8);
loc_83035D54:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83035D58:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bl 0x82da7240
	ctx.lr = 0x83035D78;
	sub_82DA7240(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82da7240
	ctx.lr = 0x83035D80;
	sub_82DA7240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035D8C:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// bl 0x839e64d8
	ctx.lr = 0x83035DB0;
	sub_839E64D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x83035DC4;
	sub_83103100(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035DD8:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035DFC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x83035E10;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83035E1C;
	sub_82D894E0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x83035E28;
	sub_8387E8E0(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035E48:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82ddcec8
	ctx.lr = 0x83035E50;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035e80
	if (cr6.eq) goto loc_83035E80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83035E78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_83035E80:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83035a68
	if (!cr6.eq) goto loc_83035A68;
	// bl 0x82d86078
	ctx.lr = 0x83035E8C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83035a68
	if (cr6.eq) goto loc_83035A68;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x83035E9C;
	sub_82921C20(ctx, base);
	// bl 0x82deabc0
	ctx.lr = 0x83035EA0;
	sub_82DEABC0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035EC0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83035ED4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035EE0;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83035EE8;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035EFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83035678
	ctx.lr = 0x83035F04;
	sub_83035678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83035F24;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035F30;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83035F38;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035F4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83035678
	ctx.lr = 0x83035F54;
	sub_83035678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83035fb0
	if (cr6.eq) goto loc_83035FB0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x83035F74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035F80;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83035F88;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035F9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83035678
	ctx.lr = 0x83035FA4;
	sub_83035678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83035fbc
	if (!cr6.eq) goto loc_83035FBC;
loc_83035FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83035FBC:
	// bl 0x830ff290
	ctx.lr = 0x83035FC0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// beq cr6,0x83035fd8
	if (cr6.eq) goto loc_83035FD8;
	// bl 0x830ff290
	ctx.lr = 0x83035FD0;
	sub_830FF290(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_83035FD8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83035FEC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83035FF8;
	sub_82E88020(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x83036000;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83036014:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-19080
	ctx.r4.s64 = ctx.r11.s64 + -19080;
	// bl 0x837b0c10
	ctx.lr = 0x83036024;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036030;
	sub_82E88020(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83036050
	if (cr6.lt) goto loc_83036050;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83036050;
	sub_825952B8(ctx, base);
loc_83036050:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83036064"))) PPC_WEAK_FUNC(sub_83036064);
PPC_FUNC_IMPL(__imp__sub_83036064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83036068"))) PPC_WEAK_FUNC(sub_83036068);
PPC_FUNC_IMPL(__imp__sub_83036068) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d897b0
	ctx.lr = 0x83036080;
	sub_82D897B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830360a4
	if (cr6.eq) goto loc_830360A4;
loc_8303608C:
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
loc_830360A4:
	// bl 0x82d86078
	ctx.lr = 0x830360A8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303608c
	if (cr6.eq) goto loc_8303608C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x830360B8;
	sub_831F8200(ctx, base);
	// lbz r11,696(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 696);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830360cc
	if (!cr6.eq) goto loc_830360CC;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r31,696(r3)
	PPC_STORE_U8(ctx.r3.u32 + 696, ctx.r31.u8);
loc_830360CC:
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

__attribute__((alias("__imp__sub_830360E4"))) PPC_WEAK_FUNC(sub_830360E4);
PPC_FUNC_IMPL(__imp__sub_830360E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830360E8"))) PPC_WEAK_FUNC(sub_830360E8);
PPC_FUNC_IMPL(__imp__sub_830360E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830360F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83036144
	if (cr6.eq) goto loc_83036144;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83036120
	if (cr6.eq) goto loc_83036120;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x82d84728
	ctx.lr = 0x83036120;
	sub_82D84728(ctx, base);
loc_83036120:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x83036144
	if (cr6.lt) goto loc_83036144;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x83036144
	if (!cr6.gt) goto loc_83036144;
	// li r3,270
	ctx.r3.s64 = 270;
	// bl 0x82d84728
	ctx.lr = 0x83036144;
	sub_82D84728(ctx, base);
loc_83036144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303614C"))) PPC_WEAK_FUNC(sub_8303614C);
PPC_FUNC_IMPL(__imp__sub_8303614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83036150"))) PPC_WEAK_FUNC(sub_83036150);
PPC_FUNC_IMPL(__imp__sub_83036150) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83036180;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830361c4
	if (cr6.eq) goto loc_830361C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83036194;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-18432
	ctx.r8.s64 = ctx.r10.s64 + -18432;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x830361c8
	goto loc_830361C8;
loc_830361C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830361C8:
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

__attribute__((alias("__imp__sub_830361E0"))) PPC_WEAK_FUNC(sub_830361E0);
PPC_FUNC_IMPL(__imp__sub_830361E0) {
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
	// bl 0x82d86078
	ctx.lr = 0x830361F8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83036218
	if (!cr6.eq) goto loc_83036218;
loc_83036200:
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
loc_83036218:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83036220;
	sub_831F8200(ctx, base);
	// bl 0x82d9f458
	ctx.lr = 0x83036224;
	sub_82D9F458(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036200
	if (cr6.eq) goto loc_83036200;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83036200
	if (cr6.eq) goto loc_83036200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830360e8
	ctx.lr = 0x83036250;
	sub_830360E8(ctx, base);
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

__attribute__((alias("__imp__sub_83036268"))) PPC_WEAK_FUNC(sub_83036268);
PPC_FUNC_IMPL(__imp__sub_83036268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83036278
	if (cr6.lt) goto loc_83036278;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83036278:
	// b 0x83036150
	sub_83036150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303627C"))) PPC_WEAK_FUNC(sub_8303627C);
PPC_FUNC_IMPL(__imp__sub_8303627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83036280"))) PPC_WEAK_FUNC(sub_83036280);
PPC_FUNC_IMPL(__imp__sub_83036280) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x830364e4
	if (cr6.gt) goto loc_830364E4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830362f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830362F4;
	// bdzf 4*cr6+eq,0x83036340
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036340;
	// bdzf 4*cr6+eq,0x830363a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830363A0;
	// bdzf 4*cr6+eq,0x830363c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830363C8;
	// bdzf 4*cr6+eq,0x83036410
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036410;
	// bdzf 4*cr6+eq,0x83036464
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036464;
	// bne cr6,0x830364b0
	if (!cr6.eq) goto loc_830364B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83036068
	ctx.lr = 0x830362D4;
	sub_83036068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303652c
	goto loc_8303652C;
loc_830362F4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-18528
	ctx.r11.s64 = ctx.r11.s64 + -18528;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83036308;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83036314;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83036320;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8303652c
	goto loc_8303652C;
loc_83036340:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83036348;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303645c
	if (cr6.eq) goto loc_8303645C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036378
	if (cr6.eq) goto loc_83036378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83036370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83036378:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83036390
	if (!cr6.eq) goto loc_83036390;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8303652c
	goto loc_8303652C;
loc_83036390:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8303652c
	goto loc_8303652C;
loc_830363A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830361e0
	ctx.lr = 0x830363A8;
	sub_830361E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303652c
	goto loc_8303652C;
loc_830363C8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-18528
	ctx.r11.s64 = ctx.r11.s64 + -18528;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x830363DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830363E8;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830363F4;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303652c
	goto loc_8303652C;
loc_83036410:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83036418;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303645c
	if (cr6.eq) goto loc_8303645C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036448
	if (cr6.eq) goto loc_83036448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83036440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83036448:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_8303645C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8303652c
	goto loc_8303652C;
loc_83036464:
	// bl 0x82d86078
	ctx.lr = 0x83036468;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303647c
	if (cr6.eq) goto loc_8303647C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83036478;
	sub_831F8200(ctx, base);
	// bl 0x82d9f0e8
	ctx.lr = 0x8303647C;
	sub_82D9F0E8(ctx, base);
loc_8303647C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-18528
	ctx.r11.s64 = ctx.r11.s64 + -18528;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83036490;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303649C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830364A4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036528
	goto loc_83036528;
loc_830364B0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-18528
	ctx.r11.s64 = ctx.r11.s64 + -18528;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830364C4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830364D0;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x830364D8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036528
	goto loc_83036528;
loc_830364E4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18528
	ctx.r4.s64 = ctx.r11.s64 + -18528;
	// bl 0x837b0c10
	ctx.lr = 0x830364F4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036500;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83036520
	if (cr6.lt) goto loc_83036520;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83036520;
	sub_825952B8(ctx, base);
loc_83036520:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83036528:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8303652C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036544"))) PPC_WEAK_FUNC(sub_83036544);
PPC_FUNC_IMPL(__imp__sub_83036544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83036548"))) PPC_WEAK_FUNC(sub_83036548);
PPC_FUNC_IMPL(__imp__sub_83036548) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83036578;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830365b8
	if (cr6.eq) goto loc_830365B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303658C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-17920
	ctx.r8.s64 = ctx.r10.s64 + -17920;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x830365bc
	goto loc_830365BC;
loc_830365B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830365BC:
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

__attribute__((alias("__imp__sub_830365D4"))) PPC_WEAK_FUNC(sub_830365D4);
PPC_FUNC_IMPL(__imp__sub_830365D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830365D8"))) PPC_WEAK_FUNC(sub_830365D8);
PPC_FUNC_IMPL(__imp__sub_830365D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830365e8
	if (cr6.lt) goto loc_830365E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830365E8:
	// b 0x83036548
	sub_83036548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830365EC"))) PPC_WEAK_FUNC(sub_830365EC);
PPC_FUNC_IMPL(__imp__sub_830365EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830365F0"))) PPC_WEAK_FUNC(sub_830365F0);
PPC_FUNC_IMPL(__imp__sub_830365F0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83036610;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83036620
	if (!cr6.eq) goto loc_83036620;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83036620:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8303668c
	if (cr6.gt) goto loc_8303668C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83036658
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036658;
	// bdzf 4*cr6+eq,0x830366f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830366F0;
	// bdzf 4*cr6+eq,0x83036744
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036744;
	// bdzf 4*cr6+eq,0x8303676c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303676C;
	// bdzf 4*cr6+eq,0x83036774
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036774;
	// bdzf 4*cr6+eq,0x830367ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830367AC;
	// bne cr6,0x830367e4
	if (!cr6.eq) goto loc_830367E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83036658:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d8bb28
	ctx.lr = 0x83036668;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x83036684
	if (cr6.eq) goto loc_83036684;
	// bl 0x82d897b0
	ctx.lr = 0x83036678;
	sub_82D897B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830366a8
	if (cr6.eq) goto loc_830366A8;
loc_83036684:
	// li r11,6
	ctx.r11.s64 = 6;
loc_83036688:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303668C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83036690:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830366A8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-18012
	ctx.r11.s64 = ctx.r11.s64 + -18012;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x830366BC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830366C8;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x830366D4;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8303668c
	goto loc_8303668C;
loc_830366F0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830366F8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303668c
	if (cr6.eq) goto loc_8303668C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036728
	if (cr6.eq) goto loc_83036728;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83036720;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83036728:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303668c
	goto loc_8303668C;
loc_83036744:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x8303674C;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x83036750;
	sub_82D9E470(ctx, base);
	// bl 0x82d9e6b8
	ctx.lr = 0x83036754;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x8303668c
	goto loc_8303668C;
loc_8303676C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83036688
	goto loc_83036688;
loc_83036774:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-18012
	ctx.r11.s64 = ctx.r11.s64 + -18012;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83036788;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036794;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8303679C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036690
	goto loc_83036690;
loc_830367AC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-18012
	ctx.r11.s64 = ctx.r11.s64 + -18012;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830367C0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830367CC;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830367D4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036690
	goto loc_83036690;
loc_830367E4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-18012
	ctx.r4.s64 = ctx.r11.s64 + -18012;
	// bl 0x837b0c10
	ctx.lr = 0x830367F4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036800;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83036808;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036690
	goto loc_83036690;
}

__attribute__((alias("__imp__sub_83036818"))) PPC_WEAK_FUNC(sub_83036818);
PPC_FUNC_IMPL(__imp__sub_83036818) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83036848;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036894
	if (cr6.eq) goto loc_83036894;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303685C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-17328
	ctx.r8.s64 = ctx.r10.s64 + -17328;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x83036898
	goto loc_83036898;
loc_83036894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83036898:
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

__attribute__((alias("__imp__sub_830368B0"))) PPC_WEAK_FUNC(sub_830368B0);
PPC_FUNC_IMPL(__imp__sub_830368B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830368c0
	if (cr6.lt) goto loc_830368C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830368C0:
	// b 0x83036818
	sub_83036818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830368C4"))) PPC_WEAK_FUNC(sub_830368C4);
PPC_FUNC_IMPL(__imp__sub_830368C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830368C8"))) PPC_WEAK_FUNC(sub_830368C8);
PPC_FUNC_IMPL(__imp__sub_830368C8) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x830368E8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303693c
	if (!cr6.eq) goto loc_8303693C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x837b0c10
	ctx.lr = 0x83036904;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036910;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83036930
	if (cr6.lt) goto loc_83036930;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83036930;
	sub_825952B8(ctx, base);
loc_83036930:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83036d28
	goto loc_83036D28;
loc_8303693C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x83036cfc
	if (cr6.gt) goto loc_83036CFC;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26980
	ctx.r12.s64 = ctx.r12.s64 + 26980;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83036998;
	case 1:
		goto loc_83036A54;
	case 2:
		goto loc_83036AA8;
	case 3:
		goto loc_83036AE4;
	case 4:
		goto loc_83036B34;
	case 5:
		goto loc_83036B70;
	case 6:
		goto loc_83036BBC;
	case 7:
		goto loc_83036BF8;
	case 8:
		goto loc_83036C4C;
	case 9:
		goto loc_830369A8;
	case 10:
		goto loc_83036CA4;
	case 11:
		goto loc_83036CFC;
	case 12:
		goto loc_83036CD4;
	default:
		return;
	}
	// lwz r24,27032(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27032);
	// lwz r24,27220(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27220);
	// lwz r24,27304(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27304);
	// lwz r24,27364(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27364);
	// lwz r24,27444(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27444);
	// lwz r24,27504(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27504);
	// lwz r24,27580(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27580);
	// lwz r24,27640(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27640);
	// lwz r24,27724(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27724);
	// lwz r24,27048(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27048);
	// lwz r24,27812(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27812);
	// lwz r24,27900(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27900);
	// lwz r24,27860(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27860);
loc_83036998:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_830369A8:
	// bl 0x831f8200
	ctx.lr = 0x830369AC;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x830369B0;
	sub_82D9E470(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d9e2f8
	ctx.lr = 0x830369BC;
	sub_82D9E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830369d8
	if (cr6.eq) goto loc_830369D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_830369D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9e2f8
	ctx.lr = 0x830369E4;
	sub_82D9E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83036a00
	if (cr6.eq) goto loc_83036A00;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036A00:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9e2f8
	ctx.lr = 0x83036A0C;
	sub_82D9E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83036a28
	if (cr6.eq) goto loc_83036A28;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036A28:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9e2f8
	ctx.lr = 0x83036A34;
	sub_82D9E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036A54:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x837b0c10
	ctx.lr = 0x83036A68;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83036A74;
	sub_82D894E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83036A80;
	sub_8387E8E0(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036AA8:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82ddcec8
	ctx.lr = 0x83036AB0;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83036c9c
	if (cr6.eq) goto loc_83036C9C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036c84
	if (cr6.eq) goto loc_83036C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83036AD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83036c84
	goto loc_83036C84;
loc_83036AE4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x83036AF8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83036B04;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83036B10;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 10;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036B34:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83036B3C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83036c9c
	if (cr6.eq) goto loc_83036C9C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036c84
	if (cr6.eq) goto loc_83036C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83036B64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// b 0x83036c84
	goto loc_83036C84;
loc_83036B70:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x83036B84;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83036B90;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83036B9C;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 10;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036BBC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83036BC4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83036c9c
	if (cr6.eq) goto loc_83036C9C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036c84
	if (cr6.eq) goto loc_83036C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83036BEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// b 0x83036c84
	goto loc_83036C84;
loc_83036BF8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83036C0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83036C18;
	sub_82D894E0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83036C24;
	sub_8387E8E0(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r10,8
	ctx.r10.s64 = 8;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036C4C:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82ddcec8
	ctx.lr = 0x83036C54;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83036c9c
	if (cr6.eq) goto loc_83036C9C;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036c84
	if (cr6.eq) goto loc_83036C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83036C7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_83036C84:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 9;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
loc_83036C9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83036d2c
	goto loc_83036D2C;
loc_83036CA4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83036CB8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036CC4;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83036CCC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83036d24
	goto loc_83036D24;
loc_83036CD4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83036CE8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036CF4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x83036d1c
	goto loc_83036D1C;
loc_83036CFC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-17420
	ctx.r4.s64 = ctx.r11.s64 + -17420;
	// bl 0x837b0c10
	ctx.lr = 0x83036D0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036D18;
	sub_82E88020(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
loc_83036D1C:
	// bl 0x8387e8e0
	ctx.lr = 0x83036D20;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_83036D24:
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_83036D28:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83036D2C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036D44"))) PPC_WEAK_FUNC(sub_83036D44);
PPC_FUNC_IMPL(__imp__sub_83036D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83036D48"))) PPC_WEAK_FUNC(sub_83036D48);
PPC_FUNC_IMPL(__imp__sub_83036D48) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83036D78;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83036db4
	if (cr6.eq) goto loc_83036DB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83036D8C;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16776
	ctx.r9.s64 = ctx.r11.s64 + -16776;
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83036db8
	goto loc_83036DB8;
loc_83036DB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83036DB8:
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

