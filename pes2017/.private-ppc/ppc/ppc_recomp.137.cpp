#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B81DF0"))) PPC_WEAK_FUNC(sub_82B81DF0);
PPC_FUNC_IMPL(__imp__sub_82B81DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B81DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B81E0C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B81E24;
	sub_82D253F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-15944
	ctx.r7.s64 = ctx.r11.s64 + -15944;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r6,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r6.u32);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12120);
	// stb r31,104(r30)
	PPC_STORE_U8(ctx.r30.u32 + 104, ctx.r31.u8);
	// stb r10,105(r30)
	PPC_STORE_U8(ctx.r30.u32 + 105, ctx.r10.u8);
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// lwz r4,12012(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12012);
	// bl 0x82d20ae0
	ctx.lr = 0x82B81E6C;
	sub_82D20AE0(ctx, base);
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12016(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12016);
	// bl 0x82d23390
	ctx.lr = 0x82B81E80;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82d195d8
	ctx.lr = 0x82B81E8C;
	sub_82D195D8(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82B81E90;
	sub_8308E078(ctx, base);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r4,-16108
	ctx.r3.s64 = ctx.r4.s64 + -16108;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82b391a0
	ctx.lr = 0x82B81EB0;
	sub_82B391A0(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r4,12016(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12016);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,12020(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12020);
	// bl 0x82d23900
	ctx.lr = 0x82B81ED0;
	sub_82D23900(ctx, base);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stb r31,100(r9)
	PPC_STORE_U8(ctx.r9.u32 + 100, ctx.r31.u8);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// bl 0x82b34cd8
	ctx.lr = 0x82B81EEC;
	sub_82B34CD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B81EF8"))) PPC_WEAK_FUNC(sub_82B81EF8);
PPC_FUNC_IMPL(__imp__sub_82B81EF8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15944
	ctx.r9.s64 = ctx.r11.s64 + -15944;
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
	ctx.lr = 0x82B81F30;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b81f48
	if (cr6.eq) goto loc_82B81F48;
	// bl 0x82416268
	ctx.lr = 0x82B81F44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B81F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B81F60"))) PPC_WEAK_FUNC(sub_82B81F60);
PPC_FUNC_IMPL(__imp__sub_82B81F60) {
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
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,159(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b81ff0
	if (cr6.eq) goto loc_82B81FF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b36188
	ctx.lr = 0x82B81F8C;
	sub_82B36188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82b36578
	ctx.lr = 0x82B81FB8;
	sub_82B36578(ctx, base);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r5,r7,-14844
	ctx.r5.s64 = ctx.r7.s64 + -14844;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82B81FCC;
	sub_82D20DA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x831c5dd0
	ctx.lr = 0x82B81FDC;
	sub_831C5DD0(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r6,-16088
	ctx.r5.s64 = ctx.r6.s64 + -16088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B81FF0;
	sub_82D20DA8(ctx, base);
loc_82B81FF0:
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
}

__attribute__((alias("__imp__sub_82B82008"))) PPC_WEAK_FUNC(sub_82B82008);
PPC_FUNC_IMPL(__imp__sub_82B82008) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// addis r10,r11,-264
	ctx.r10.s64 = ctx.r11.s64 + -17301504;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addic. r10,r10,-10
	xer.ca = ctx.r10.u32 > 9;
	ctx.r10.s64 = ctx.r10.s64 + -10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b820ac
	if (cr0.eq) goto loc_82B820AC;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82b8206c
	if (cr6.eq) goto loc_82B8206C;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x82b820c0
	if (!cr6.eq) goto loc_82B820C0;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b820c0
	if (!cr6.eq) goto loc_82B820C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b38128
	ctx.lr = 0x82B8205C;
	sub_82B38128(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B82068;
	sub_82D17DA0(ctx, base);
	// b 0x82b820c0
	goto loc_82B820C0;
loc_82B8206C:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b820c0
	if (!cr6.eq) goto loc_82B820C0;
	// lbz r11,159(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b820c0
	if (!cr6.eq) goto loc_82B820C0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,23548
	ctx.r5.s64 = ctx.r11.s64 + 23548;
	// bl 0x82d20da8
	ctx.lr = 0x82B82094;
	sub_82D20DA8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-16080
	ctx.r5.s64 = ctx.r10.s64 + -16080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B820A8;
	sub_82D20DA8(ctx, base);
	// b 0x82b820c0
	goto loc_82B820C0;
loc_82B820AC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b820c0
	if (!cr6.eq) goto loc_82B820C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b36578
	ctx.lr = 0x82B820C0;
	sub_82B36578(ctx, base);
loc_82B820C0:
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

__attribute__((alias("__imp__sub_82B820DC"))) PPC_WEAK_FUNC(sub_82B820DC);
PPC_FUNC_IMPL(__imp__sub_82B820DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B820E0"))) PPC_WEAK_FUNC(sub_82B820E0);
PPC_FUNC_IMPL(__imp__sub_82B820E0) {
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
	// blt cr6,0x82b82108
	if (cr6.lt) goto loc_82B82108;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b8210c
	goto loc_82B8210C;
loc_82B82108:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8210C:
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
	ctx.lr = 0x82B82128;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82140
	if (cr6.eq) goto loc_82B82140;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b81df0
	ctx.lr = 0x82B8213C;
	sub_82B81DF0(ctx, base);
	// b 0x82b82144
	goto loc_82B82144;
loc_82B82140:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B82144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8215C"))) PPC_WEAK_FUNC(sub_82B8215C);
PPC_FUNC_IMPL(__imp__sub_82B8215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B82160"))) PPC_WEAK_FUNC(sub_82B82160);
PPC_FUNC_IMPL(__imp__sub_82B82160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B82168;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b823b0
	if (cr6.eq) goto loc_82B823B0;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r30,r4,100
	ctx.r30.s64 = ctx.r4.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,12028(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12028);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B821A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,12032(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12032);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B821C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r4,12036(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12036);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B821E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12120);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b82218
	if (!cr6.eq) goto loc_82B82218;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8221c
	if (cr6.eq) goto loc_82B8221C;
loc_82B82218:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82B8221C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b822c0
	if (cr6.eq) goto loc_82B822C0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r11,-16032
	ctx.r31.s64 = ctx.r11.s64 + -16032;
	// beq cr6,0x82b82258
	if (cr6.eq) goto loc_82B82258;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B82244;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d32958
	ctx.lr = 0x82B82250;
	sub_82D32958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B82258;
	sub_8387E8E0(ctx, base);
loc_82B82258:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b82288
	if (cr6.eq) goto loc_82B82288;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8226C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B82280;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B82288;
	sub_8387E8E0(ctx, base);
loc_82B82288:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b823b0
	if (cr6.eq) goto loc_82B823B0;
	// addi r4,r31,-430
	ctx.r4.s64 = ctx.r31.s64 + -430;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8229C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B822B0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B822B8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B822C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b822f0
	if (cr6.eq) goto loc_82B822F0;
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// stw r5,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r5.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b822dc
	if (cr6.eq) goto loc_82B822DC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B822DC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82B822F0;
	sub_82D329F8(ctx, base);
loc_82B822F0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b82334
	if (cr6.eq) goto loc_82B82334;
	// bl 0x831156e8
	ctx.lr = 0x82B822FC;
	sub_831156E8(ctx, base);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82B82308;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82B82318;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B8232C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B82334;
	sub_8387E8E0(ctx, base);
loc_82B82334:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b823b0
	if (cr6.eq) goto loc_82B823B0;
	// bl 0x82d86078
	ctx.lr = 0x82B82340;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b823b0
	if (cr6.eq) goto loc_82B823B0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82da1838
	ctx.lr = 0x82B82354;
	sub_82DA1838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,96(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// bl 0x82b36078
	ctx.lr = 0x82B82364;
	sub_82B36078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b823a4
	if (!cr6.eq) goto loc_82B823A4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16032
	ctx.r4.s64 = ctx.r11.s64 + -16032;
	// bl 0x837b0c10
	ctx.lr = 0x82B82380;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B82394;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8239C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B823A4:
	// clrldi r4,r31,32
	ctx.r4.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82B823B0;
	sub_82D294D0(ctx, base);
loc_82B823B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B823B8"))) PPC_WEAK_FUNC(sub_82B823B8);
PPC_FUNC_IMPL(__imp__sub_82B823B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B823C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82B823CC;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82488
	if (cr6.eq) goto loc_82B82488;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r23,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r8.s32 >> 2;
	// bl 0x82d19a78
	ctx.lr = 0x82B823F4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12024(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12024);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B82410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82488
	if (cr6.eq) goto loc_82B82488;
	// bl 0x82d33c10
	ctx.lr = 0x82B82420;
	sub_82D33C10(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82488
	if (cr6.eq) goto loc_82B82488;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
loc_82B82434:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,12120(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12120);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B82444;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8247c
	if (cr6.eq) goto loc_82B8247C;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bge cr6,0x82b8246c
	if (!cr6.lt) goto loc_82B8246C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da18d8
	ctx.lr = 0x82B82468;
	sub_82DA18D8(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B8246C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b82160
	ctx.lr = 0x82B8247C;
	sub_82B82160(ctx, base);
loc_82B8247C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b82434
	if (cr6.lt) goto loc_82B82434;
loc_82B82488:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B82490"))) PPC_WEAK_FUNC(sub_82B82490);
PPC_FUNC_IMPL(__imp__sub_82B82490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B82498;
	__savegprlr_26(ctx, base);
	// stwu r1,-2096(r1)
	ea = -2096 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B824A4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82B824B4;
	sub_82D2B608(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82aa2cc0
	ctx.lr = 0x82B824D8;
	sub_82AA2CC0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82B824DC;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82500
	if (cr6.eq) goto loc_82B82500;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82da1a90
	ctx.lr = 0x82B82500;
	sub_82DA1A90(ctx, base);
loc_82B82500:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r3,49
	ctx.r3.s64 = 49;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r9,67
	ctx.r9.s64 = 67;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// li r3,30
	ctx.r3.s64 = 30;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r4,71
	ctx.r4.s64 = 71;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// bl 0x8310fab0
	ctx.lr = 0x82B825CC;
	sub_8310FAB0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b825f8
	if (cr6.eq) goto loc_82B825F8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r4,39
	ctx.r4.s64 = 39;
	// bl 0x82b393f8
	ctx.lr = 0x82B825E8;
	sub_82B393F8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b393f8
	ctx.lr = 0x82B825F8;
	sub_82B393F8(ctx, base);
loc_82B825F8:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r31,25
	ctx.r31.s64 = 25;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B82604:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b393f8
	ctx.lr = 0x82B82614;
	sub_82B393F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b82604
	if (!cr0.eq) goto loc_82B82604;
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b82674
	if (cr6.eq) goto loc_82B82674;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,12120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12120);
	// lwz r31,28(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// xor r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b82674
	if (cr6.eq) goto loc_82B82674;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b36078
	ctx.lr = 0x82B82650;
	sub_82B36078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82674
	if (cr6.eq) goto loc_82B82674;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b363e8
	ctx.lr = 0x82B82668;
	sub_82B363E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b362c8
	ctx.lr = 0x82B82674;
	sub_82B362C8(ctx, base);
loc_82B82674:
	// bl 0x831156e8
	ctx.lr = 0x82B82678;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,24112
	ctx.r9.u64 = ctx.r11.u64 | 24112;
	// lwz r11,12120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12120);
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// xor r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b826b0
	if (!cr6.eq) goto loc_82B826B0;
	// xor r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b826b4
	if (cr6.eq) goto loc_82B826B4;
loc_82B826B0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B826B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b826f0
	if (!cr6.eq) goto loc_82B826F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b36078
	ctx.lr = 0x82B826CC;
	sub_82B36078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b826f0
	if (cr6.eq) goto loc_82B826F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b363e8
	ctx.lr = 0x82B826E4;
	sub_82B363E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b362c8
	ctx.lr = 0x82B826F0;
	sub_82B362C8(ctx, base);
loc_82B826F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B826F8;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82744
	if (cr6.eq) goto loc_82B82744;
	// bl 0x82d86078
	ctx.lr = 0x82B82708;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82744
	if (cr6.eq) goto loc_82B82744;
	// bl 0x831156e8
	ctx.lr = 0x82B82714;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r4,r10,222
	ctx.r4.s64 = ctx.r10.s64 + 14548992;
	// addi r4,r4,-10256
	ctx.r4.s64 = ctx.r4.s64 + -10256;
	// bl 0x82b818d0
	ctx.lr = 0x82B8272C;
	sub_82B818D0(ctx, base);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b363e8
	ctx.lr = 0x82B82738;
	sub_82B363E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82b36228
	ctx.lr = 0x82B82744;
	sub_82B36228(ctx, base);
loc_82B82744:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b823b8
	ctx.lr = 0x82B8274C;
	sub_82B823B8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82B82750;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82B82754;
	sub_82D25AB8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8276c
	if (cr6.eq) goto loc_82B8276C;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82B8276C;
	sub_825952B8(ctx, base);
loc_82B8276C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B82778"))) PPC_WEAK_FUNC(sub_82B82778);
PPC_FUNC_IMPL(__imp__sub_82B82778) {
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
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B827AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b827e0
	if (cr6.eq) goto loc_82B827E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b827d0
	if (cr6.lt) goto loc_82B827D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c596b0
	ctx.lr = 0x82B827CC;
	sub_82C596B0(ctx, base);
	// b 0x82b827e4
	goto loc_82B827E4;
loc_82B827D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c596b0
	ctx.lr = 0x82B827DC;
	sub_82C596B0(ctx, base);
	// b 0x82b827e4
	goto loc_82B827E4;
loc_82B827E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B827E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B827FC"))) PPC_WEAK_FUNC(sub_82B827FC);
PPC_FUNC_IMPL(__imp__sub_82B827FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B82800"))) PPC_WEAK_FUNC(sub_82B82800);
PPC_FUNC_IMPL(__imp__sub_82B82800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B82808;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r27,r11,-14208
	ctx.r27.s64 = ctx.r11.s64 + -14208;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r29,r11,65534
	ctx.r29.u64 = ctx.r11.u64 | 65534;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_82B8282C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b82854
	if (!cr6.lt) goto loc_82B82854;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b82858
	if (!cr6.gt) goto loc_82B82858;
loc_82B82854:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B82858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b828f0
	if (cr6.eq) goto loc_82B828F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x82b828d0
	if (!cr6.eq) goto loc_82B828D0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b82980
	if (cr6.gt) goto loc_82B82980;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b828d0
	if (!cr6.gt) goto loc_82B828D0;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b828bc
	if (cr6.lt) goto loc_82B828BC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B828BC:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b828c8
	if (!cr6.lt) goto loc_82B828C8;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B828C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B828D0;
	sub_82AD5E38(ctx, base);
loc_82B828D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8295c
	if (cr6.eq) goto loc_82B8295C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82b8295c
	goto loc_82B8295C;
loc_82B828F0:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b8294c
	if (!cr6.eq) goto loc_82B8294C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b8298c
	if (cr6.gt) goto loc_82B8298C;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b8294c
	if (!cr6.gt) goto loc_82B8294C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b82938
	if (cr6.lt) goto loc_82B82938;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B82938:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b82944
	if (!cr6.lt) goto loc_82B82944;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B82944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B8294C;
	sub_82AD5E38(ctx, base);
loc_82B8294C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8295c
	if (cr6.eq) goto loc_82B8295C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82B8295C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r26,224
	cr6.compare<uint32_t>(ctx.r26.u32, 224, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82b8282c
	if (cr6.lt) goto loc_82B8282C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B82980:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B8298C;
	sub_831CC150(ctx, base);
loc_82B8298C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B82998;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82B82998"))) PPC_WEAK_FUNC(sub_82B82998);
PPC_FUNC_IMPL(__imp__sub_82B82998) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15448
	ctx.r9.s64 = ctx.r11.s64 + -15448;
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
	ctx.lr = 0x82B829D0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b829e8
	if (cr6.eq) goto loc_82B829E8;
	// bl 0x82416268
	ctx.lr = 0x82B829E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B829E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B82A00"))) PPC_WEAK_FUNC(sub_82B82A00);
PPC_FUNC_IMPL(__imp__sub_82B82A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B82A08;
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B82A2C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82a68
	if (cr6.eq) goto loc_82B82A68;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a622d8
	ctx.lr = 0x82B82A44;
	sub_82A622D8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11136
	ctx.r9.s64 = ctx.r11.s64 + -11136;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B82A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B82A74"))) PPC_WEAK_FUNC(sub_82B82A74);
PPC_FUNC_IMPL(__imp__sub_82B82A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B82A78"))) PPC_WEAK_FUNC(sub_82B82A78);
PPC_FUNC_IMPL(__imp__sub_82B82A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b82a88
	if (cr6.lt) goto loc_82B82A88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B82A88:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b82a00
	sub_82B82A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B82A90"))) PPC_WEAK_FUNC(sub_82B82A90);
PPC_FUNC_IMPL(__imp__sub_82B82A90) {
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
	// blt cr6,0x82b82ab8
	if (cr6.lt) goto loc_82B82AB8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b82abc
	goto loc_82B82ABC;
loc_82B82AB8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B82ABC:
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
	ctx.lr = 0x82B82AD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82af0
	if (cr6.eq) goto loc_82B82AF0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c66838
	ctx.lr = 0x82B82AEC;
	sub_82C66838(ctx, base);
	// b 0x82b82af4
	goto loc_82B82AF4;
loc_82B82AF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B82AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B82B0C"))) PPC_WEAK_FUNC(sub_82B82B0C);
PPC_FUNC_IMPL(__imp__sub_82B82B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B82B10"))) PPC_WEAK_FUNC(sub_82B82B10);
PPC_FUNC_IMPL(__imp__sub_82B82B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B82B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r27,r11,-11576
	ctx.r27.s64 = ctx.r11.s64 + -11576;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r29,r11,65534
	ctx.r29.u64 = ctx.r11.u64 | 65534;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_82B82B3C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b82b64
	if (!cr6.lt) goto loc_82B82B64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b82b68
	if (!cr6.gt) goto loc_82B82B68;
loc_82B82B64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B82B68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82c00
	if (cr6.eq) goto loc_82B82C00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x82b82be0
	if (!cr6.eq) goto loc_82B82BE0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b82c90
	if (cr6.gt) goto loc_82B82C90;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b82be0
	if (!cr6.gt) goto loc_82B82BE0;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b82bcc
	if (cr6.lt) goto loc_82B82BCC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B82BCC:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b82bd8
	if (!cr6.lt) goto loc_82B82BD8;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B82BD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B82BE0;
	sub_82AD5E38(ctx, base);
loc_82B82BE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82c6c
	if (cr6.eq) goto loc_82B82C6C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82b82c6c
	goto loc_82B82C6C;
loc_82B82C00:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b82c5c
	if (!cr6.eq) goto loc_82B82C5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b82c9c
	if (cr6.gt) goto loc_82B82C9C;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b82c5c
	if (!cr6.gt) goto loc_82B82C5C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b82c48
	if (cr6.lt) goto loc_82B82C48;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B82C48:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b82c54
	if (!cr6.lt) goto loc_82B82C54;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B82C54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B82C5C;
	sub_82AD5E38(ctx, base);
loc_82B82C5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82c6c
	if (cr6.eq) goto loc_82B82C6C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82B82C6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r26,368
	cr6.compare<uint32_t>(ctx.r26.u32, 368, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82b82b3c
	if (cr6.lt) goto loc_82B82B3C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B82C90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B82C9C;
	sub_831CC150(ctx, base);
loc_82B82C9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B82CA8;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82B82CA8"))) PPC_WEAK_FUNC(sub_82B82CA8);
PPC_FUNC_IMPL(__imp__sub_82B82CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B82CB0;
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
	ctx.lr = 0x82B82CC4;
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
	ctx.lr = 0x82B82CDC;
	sub_82D253F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8832
	ctx.r9.s64 = ctx.r11.s64 + -8832;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-8844
	ctx.r4.s64 = ctx.r7.s64 + -8844;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B82D08;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B82D14"))) PPC_WEAK_FUNC(sub_82B82D14);
PPC_FUNC_IMPL(__imp__sub_82B82D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B82D18"))) PPC_WEAK_FUNC(sub_82B82D18);
PPC_FUNC_IMPL(__imp__sub_82B82D18) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8832
	ctx.r9.s64 = ctx.r11.s64 + -8832;
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
	ctx.lr = 0x82B82D50;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b82d68
	if (cr6.eq) goto loc_82B82D68;
	// bl 0x82416268
	ctx.lr = 0x82B82D64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B82D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B82D80"))) PPC_WEAK_FUNC(sub_82B82D80);
PPC_FUNC_IMPL(__imp__sub_82B82D80) {
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
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B82DB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82dcc
	if (cr6.eq) goto loc_82B82DCC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c6a680
	ctx.lr = 0x82B82DC8;
	sub_82C6A680(ctx, base);
	// b 0x82b82dd0
	goto loc_82B82DD0;
loc_82B82DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B82DD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B82DE8"))) PPC_WEAK_FUNC(sub_82B82DE8);
PPC_FUNC_IMPL(__imp__sub_82B82DE8) {
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
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B82E1C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b82e50
	if (cr6.eq) goto loc_82B82E50;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b82e40
	if (cr6.lt) goto loc_82B82E40;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b82ca8
	ctx.lr = 0x82B82E3C;
	sub_82B82CA8(ctx, base);
	// b 0x82b82e54
	goto loc_82B82E54;
loc_82B82E40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b82ca8
	ctx.lr = 0x82B82E4C;
	sub_82B82CA8(ctx, base);
	// b 0x82b82e54
	goto loc_82B82E54;
loc_82B82E50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B82E54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B82E6C"))) PPC_WEAK_FUNC(sub_82B82E6C);
PPC_FUNC_IMPL(__imp__sub_82B82E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B82E70"))) PPC_WEAK_FUNC(sub_82B82E70);
PPC_FUNC_IMPL(__imp__sub_82B82E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B82E78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r27,r11,-9184
	ctx.r27.s64 = ctx.r11.s64 + -9184;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r29,r11,65534
	ctx.r29.u64 = ctx.r11.u64 | 65534;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_82B82E9C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b82ec4
	if (!cr6.lt) goto loc_82B82EC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b82ec8
	if (!cr6.gt) goto loc_82B82EC8;
loc_82B82EC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B82EC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82f60
	if (cr6.eq) goto loc_82B82F60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x82b82f40
	if (!cr6.eq) goto loc_82B82F40;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b82ff0
	if (cr6.gt) goto loc_82B82FF0;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b82f40
	if (!cr6.gt) goto loc_82B82F40;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b82f2c
	if (cr6.lt) goto loc_82B82F2C;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B82F2C:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b82f38
	if (!cr6.lt) goto loc_82B82F38;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B82F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B82F40;
	sub_82AD5E38(ctx, base);
loc_82B82F40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82fcc
	if (cr6.eq) goto loc_82B82FCC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82b82fcc
	goto loc_82B82FCC;
loc_82B82F60:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b82fbc
	if (!cr6.eq) goto loc_82B82FBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b82ffc
	if (cr6.gt) goto loc_82B82FFC;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b82fbc
	if (!cr6.gt) goto loc_82B82FBC;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b82fa8
	if (cr6.lt) goto loc_82B82FA8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B82FA8:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b82fb4
	if (!cr6.lt) goto loc_82B82FB4;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B82FB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B82FBC;
	sub_82AD5E38(ctx, base);
loc_82B82FBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b82fcc
	if (cr6.eq) goto loc_82B82FCC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82B82FCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r26,256
	cr6.compare<uint32_t>(ctx.r26.u32, 256, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82b82e9c
	if (cr6.lt) goto loc_82B82E9C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B82FF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B82FFC;
	sub_831CC150(ctx, base);
loc_82B82FFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B83008;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82B83008"))) PPC_WEAK_FUNC(sub_82B83008);
PPC_FUNC_IMPL(__imp__sub_82B83008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B83010;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r27,r11,12256
	ctx.r27.s64 = ctx.r11.s64 + 12256;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r29,r11,65534
	ctx.r29.u64 = ctx.r11.u64 | 65534;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_82B83034:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b8305c
	if (!cr6.lt) goto loc_82B8305C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b83060
	if (!cr6.gt) goto loc_82B83060;
loc_82B8305C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B83060:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b830f8
	if (cr6.eq) goto loc_82B830F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x82b830d8
	if (!cr6.eq) goto loc_82B830D8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b83188
	if (cr6.gt) goto loc_82B83188;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b830d8
	if (!cr6.gt) goto loc_82B830D8;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b830c4
	if (cr6.lt) goto loc_82B830C4;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B830C4:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b830d0
	if (!cr6.lt) goto loc_82B830D0;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B830D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B830D8;
	sub_82AD5E38(ctx, base);
loc_82B830D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b83164
	if (cr6.eq) goto loc_82B83164;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82b83164
	goto loc_82B83164;
loc_82B830F8:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b83154
	if (!cr6.eq) goto loc_82B83154;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b83194
	if (cr6.gt) goto loc_82B83194;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b83154
	if (!cr6.gt) goto loc_82B83154;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b83140
	if (cr6.lt) goto loc_82B83140;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B83140:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b8314c
	if (!cr6.lt) goto loc_82B8314C;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B8314C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B83154;
	sub_82AD5E38(ctx, base);
loc_82B83154:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b83164
	if (cr6.eq) goto loc_82B83164;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82B83164:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r26,3600
	cr6.compare<uint32_t>(ctx.r26.u32, 3600, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82b83034
	if (cr6.lt) goto loc_82B83034;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B83188:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B83194;
	sub_831CC150(ctx, base);
loc_82B83194:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B831A0;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82B831A0"))) PPC_WEAK_FUNC(sub_82B831A0);
PPC_FUNC_IMPL(__imp__sub_82B831A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B831A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r27,r11,18200
	ctx.r27.s64 = ctx.r11.s64 + 18200;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r29,r11,65534
	ctx.r29.u64 = ctx.r11.u64 | 65534;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_82B831CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b831f4
	if (!cr6.lt) goto loc_82B831F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82b831f8
	if (!cr6.gt) goto loc_82B831F8;
loc_82B831F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B831F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b83290
	if (cr6.eq) goto loc_82B83290;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x82b83270
	if (!cr6.eq) goto loc_82B83270;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b83320
	if (cr6.gt) goto loc_82B83320;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b83270
	if (!cr6.gt) goto loc_82B83270;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b8325c
	if (cr6.lt) goto loc_82B8325C;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B8325C:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b83268
	if (!cr6.lt) goto loc_82B83268;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B83268:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B83270;
	sub_82AD5E38(ctx, base);
loc_82B83270:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b832fc
	if (cr6.eq) goto loc_82B832FC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82b832fc
	goto loc_82B832FC;
loc_82B83290:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b832ec
	if (!cr6.eq) goto loc_82B832EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b8332c
	if (cr6.gt) goto loc_82B8332C;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b832ec
	if (!cr6.gt) goto loc_82B832EC;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b832d8
	if (cr6.lt) goto loc_82B832D8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B832D8:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b832e4
	if (!cr6.lt) goto loc_82B832E4;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82B832E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82B832EC;
	sub_82AD5E38(ctx, base);
loc_82B832EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b832fc
	if (cr6.eq) goto loc_82B832FC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82B832FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r26,416
	cr6.compare<uint32_t>(ctx.r26.u32, 416, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82b831cc
	if (cr6.lt) goto loc_82B831CC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B83320:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B8332C;
	sub_831CC150(ctx, base);
loc_82B8332C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B83338;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82B83338"))) PPC_WEAK_FUNC(sub_82B83338);
PPC_FUNC_IMPL(__imp__sub_82B83338) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r8,196(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B8336C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b83388
	if (cr6.eq) goto loc_82B83388;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,20460
	ctx.r5.s64 = ctx.r11.s64 + 20460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B83388;
	sub_82D20DA8(ctx, base);
loc_82B83388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B833A0"))) PPC_WEAK_FUNC(sub_82B833A0);
PPC_FUNC_IMPL(__imp__sub_82B833A0) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bne cr6,0x82b833d8
	if (!cr6.eq) goto loc_82B833D8;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// addi r4,r11,-66
	ctx.r4.s64 = ctx.r11.s64 + -66;
	// bl 0x82d48500
	ctx.lr = 0x82B833D0;
	sub_82D48500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82b833e8
	goto loc_82B833E8;
loc_82B833D8:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,19224
	ctx.r9.s64 = ctx.r10.s64 + 19224;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82B833E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82B833F0;
	sub_82D042A8(ctx, base);
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

__attribute__((alias("__imp__sub_82B83404"))) PPC_WEAK_FUNC(sub_82B83404);
PPC_FUNC_IMPL(__imp__sub_82B83404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B83408"))) PPC_WEAK_FUNC(sub_82B83408);
PPC_FUNC_IMPL(__imp__sub_82B83408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B83410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8341C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r31,r11,20712
	ctx.r31.s64 = ctx.r11.s64 + 20712;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B8343C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B83450;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B83460;
	sub_82D2AEC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B83468;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B83480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8348C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B834A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82b83504
	if (cr6.eq) goto loc_82B83504;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B834C8;
	sub_82D2B608(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B834DC;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B834EC;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B834FC;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B83504:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B8350C;
	sub_82D2B608(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B83520;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B83530;
	sub_82D2AEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B83540;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B83548"))) PPC_WEAK_FUNC(sub_82B83548);
PPC_FUNC_IMPL(__imp__sub_82B83548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bgt cr6,0x82b83560
	if (cr6.gt) goto loc_82B83560;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B83560:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x82b8357c
	if (cr6.lt) goto loc_82B8357C;
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// bgt cr6,0x82b8357c
	if (cr6.gt) goto loc_82B8357C;
	// li r11,11
	ctx.r11.s64 = 11;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B8357C:
	// cmplwi cr6,r10,19
	cr6.compare<uint32_t>(ctx.r10.u32, 19, xer);
	// blt cr6,0x82b83598
	if (cr6.lt) goto loc_82B83598;
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bgt cr6,0x82b83598
	if (cr6.gt) goto loc_82B83598;
	// li r11,19
	ctx.r11.s64 = 19;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B83598:
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82b835b4
	if (cr6.lt) goto loc_82B835B4;
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// bgt cr6,0x82b835b4
	if (cr6.gt) goto loc_82B835B4;
	// li r11,24
	ctx.r11.s64 = 24;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B835B4:
	// cmplwi cr6,r10,29
	cr6.compare<uint32_t>(ctx.r10.u32, 29, xer);
	// blt cr6,0x82b835d0
	if (cr6.lt) goto loc_82B835D0;
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bgt cr6,0x82b835d0
	if (cr6.gt) goto loc_82B835D0;
	// li r11,29
	ctx.r11.s64 = 29;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B835D0:
	// cmplwi cr6,r10,39
	cr6.compare<uint32_t>(ctx.r10.u32, 39, xer);
	// blt cr6,0x82b835ec
	if (cr6.lt) goto loc_82B835EC;
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bgt cr6,0x82b835ec
	if (cr6.gt) goto loc_82B835EC;
	// li r11,39
	ctx.r11.s64 = 39;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B835EC:
	// cmplwi cr6,r10,41
	cr6.compare<uint32_t>(ctx.r10.u32, 41, xer);
	// blt cr6,0x82b83608
	if (cr6.lt) goto loc_82B83608;
	// cmplwi cr6,r10,49
	cr6.compare<uint32_t>(ctx.r10.u32, 49, xer);
	// bgt cr6,0x82b83608
	if (cr6.gt) goto loc_82B83608;
	// li r11,41
	ctx.r11.s64 = 41;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B83608:
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// blt cr6,0x82b83624
	if (cr6.lt) goto loc_82B83624;
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bgt cr6,0x82b83624
	if (cr6.gt) goto loc_82B83624;
	// li r11,50
	ctx.r11.s64 = 50;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B83624:
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// blt cr6,0x82b83640
	if (cr6.lt) goto loc_82B83640;
	// cmplwi cr6,r10,56
	cr6.compare<uint32_t>(ctx.r10.u32, 56, xer);
	// bgt cr6,0x82b83640
	if (cr6.gt) goto loc_82B83640;
	// li r11,53
	ctx.r11.s64 = 53;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B83640:
	// cmplwi cr6,r10,57
	cr6.compare<uint32_t>(ctx.r10.u32, 57, xer);
	// blt cr6,0x82b8365c
	if (cr6.lt) goto loc_82B8365C;
	// cmplwi cr6,r10,61
	cr6.compare<uint32_t>(ctx.r10.u32, 61, xer);
	// bgt cr6,0x82b8365c
	if (cr6.gt) goto loc_82B8365C;
	// li r11,57
	ctx.r11.s64 = 57;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82B8365C:
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// blt cr6,0x82b83670
	if (cr6.lt) goto loc_82B83670;
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// li r11,62
	ctx.r11.s64 = 62;
	// ble cr6,0x82b83674
	if (!cr6.gt) goto loc_82B83674;
loc_82B83670:
	// li r11,66
	ctx.r11.s64 = 66;
loc_82B83674:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8367C"))) PPC_WEAK_FUNC(sub_82B8367C);
PPC_FUNC_IMPL(__imp__sub_82B8367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B83680"))) PPC_WEAK_FUNC(sub_82B83680);
PPC_FUNC_IMPL(__imp__sub_82B83680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B83688;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,20768
	ctx.r30.s64 = ctx.r11.s64 + 20768;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B836B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b836f8
	if (cr6.eq) goto loc_82B836F8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,120
	ctx.r3.s64 = ctx.r28.s64 + 120;
	// bl 0x82d48500
	ctx.lr = 0x82B836D0;
	sub_82D48500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B836DC;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B836F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B836F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B83700"))) PPC_WEAK_FUNC(sub_82B83700);
PPC_FUNC_IMPL(__imp__sub_82B83700) {
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
	ctx.lr = 0x82B83718;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B83728;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35289
	ctx.r8.u64 = ctx.r10.u64 | 35289;
	// lbzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// blt cr6,0x82b83754
	if (cr6.lt) goto loc_82B83754;
	// bl 0x831156e8
	ctx.lr = 0x82B83748;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
loc_82B83754:
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

__attribute__((alias("__imp__sub_82B83768"))) PPC_WEAK_FUNC(sub_82B83768);
PPC_FUNC_IMPL(__imp__sub_82B83768) {
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
	ctx.lr = 0x82B83788;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B83798;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35289
	ctx.r8.u64 = ctx.r10.u64 | 35289;
	// lbzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x82b837c4
	if (cr6.lt) goto loc_82B837C4;
	// bl 0x831156e8
	ctx.lr = 0x82B837B8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
loc_82B837C4:
	// bl 0x831156e8
	ctx.lr = 0x82B837C8;
	sub_831156E8(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r8,r9,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r7,708(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stw r6,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B83808"))) PPC_WEAK_FUNC(sub_82B83808);
PPC_FUNC_IMPL(__imp__sub_82B83808) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B83828;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B83838;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35289
	ctx.r8.u64 = ctx.r10.u64 | 35289;
	// lbzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x82b83864
	if (cr6.lt) goto loc_82B83864;
	// bl 0x831156e8
	ctx.lr = 0x82B83858;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
loc_82B83864:
	// bl 0x831156e8
	ctx.lr = 0x82B83868;
	sub_831156E8(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r7,r9,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r6,708(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 708);
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82B838A8"))) PPC_WEAK_FUNC(sub_82B838A8);
PPC_FUNC_IMPL(__imp__sub_82B838A8) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b83a58
	if (cr6.gt) goto loc_82B83A58;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b83944
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B83944;
	// bdzf 4*cr6+eq,0x82b8399c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B8399C;
	// bdzf 4*cr6+eq,0x82b83a20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B83A20;
	// bne cr6,0x82b83a28
	if (!cr6.eq) goto loc_82B83A28;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b83a58
	if (!cr6.eq) goto loc_82B83A58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B838F0;
	sub_82B83808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8392c
	if (!cr6.eq) goto loc_82B8392C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B83908;
	sub_82B83808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8392c
	if (!cr6.eq) goto loc_82B8392C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B83920;
	sub_82B83808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b83a58
	if (cr6.eq) goto loc_82B83A58;
loc_82B8392C:
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
loc_82B83944:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x82b83a00
	if (cr6.eq) goto loc_82B83A00;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bne cr6,0x82b83a58
	if (!cr6.eq) goto loc_82B83A58;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B83960;
	sub_82B83808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8392c
	if (!cr6.eq) goto loc_82B8392C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B83978;
	sub_82B83808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b83a58
	if (cr6.eq) goto loc_82B83A58;
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
loc_82B8399C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82b839f8
	if (!cr6.eq) goto loc_82B839F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b839d0
	if (!cr6.eq) goto loc_82B839D0;
loc_82B839B0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B839BC;
	sub_82B83808(ctx, base);
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
loc_82B839D0:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x82b83a58
	if (!cr6.eq) goto loc_82B83A58;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B839E4;
	sub_82B83808(ctx, base);
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
loc_82B839F8:
	// cmplwi cr6,r4,25
	cr6.compare<uint32_t>(ctx.r4.u32, 25, xer);
	// bne cr6,0x82b83a58
	if (!cr6.eq) goto loc_82B83A58;
loc_82B83A00:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B83A0C;
	sub_82B83808(ctx, base);
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
loc_82B83A20:
	// cmplwi cr6,r4,25
	cr6.compare<uint32_t>(ctx.r4.u32, 25, xer);
	// beq cr6,0x82b83a00
	if (cr6.eq) goto loc_82B83A00;
loc_82B83A28:
	// cmplwi cr6,r4,36
	cr6.compare<uint32_t>(ctx.r4.u32, 36, xer);
	// beq cr6,0x82b839b0
	if (cr6.eq) goto loc_82B839B0;
	// cmplwi cr6,r4,49
	cr6.compare<uint32_t>(ctx.r4.u32, 49, xer);
	// bne cr6,0x82b83a58
	if (!cr6.eq) goto loc_82B83A58;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83808
	ctx.lr = 0x82B83A44;
	sub_82B83808(ctx, base);
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
loc_82B83A58:
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

__attribute__((alias("__imp__sub_82B83A70"))) PPC_WEAK_FUNC(sub_82B83A70);
PPC_FUNC_IMPL(__imp__sub_82B83A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,49
	cr6.compare<uint32_t>(ctx.r10.u32, 49, xer);
	// bne cr6,0x82b83a9c
	if (!cr6.eq) goto loc_82B83A9C;
	// lis r9,262
	ctx.r9.s64 = 17170432;
	// lis r8,262
	ctx.r8.s64 = 17170432;
	// ori r9,r9,415
	ctx.r9.u64 = ctx.r9.u64 | 415;
	// ori r8,r8,416
	ctx.r8.u64 = ctx.r8.u64 | 416;
	// b 0x82b83ad0
	goto loc_82B83AD0;
loc_82B83A9C:
	// cmplwi cr6,r10,25
	cr6.compare<uint32_t>(ctx.r10.u32, 25, xer);
	// bne cr6,0x82b83ac0
	if (!cr6.eq) goto loc_82B83AC0;
	// lis r9,262
	ctx.r9.s64 = 17170432;
	// lis r8,262
	ctx.r8.s64 = 17170432;
	// lis r11,262
	ctx.r11.s64 = 17170432;
	// ori r9,r9,412
	ctx.r9.u64 = ctx.r9.u64 | 412;
	// ori r8,r8,413
	ctx.r8.u64 = ctx.r8.u64 | 413;
	// ori r11,r11,299
	ctx.r11.u64 = ctx.r11.u64 | 299;
	// b 0x82b83ad0
	goto loc_82B83AD0;
loc_82B83AC0:
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// bne cr6,0x82b83ad0
	if (!cr6.eq) goto loc_82B83AD0;
	// lis r9,262
	ctx.r9.s64 = 17170432;
	// ori r9,r9,312
	ctx.r9.u64 = ctx.r9.u64 | 312;
loc_82B83AD0:
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b83aec
	if (cr6.eq) goto loc_82B83AEC;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b83aec
	if (cr6.eq) goto loc_82B83AEC;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82B83AEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B83AF4"))) PPC_WEAK_FUNC(sub_82B83AF4);
PPC_FUNC_IMPL(__imp__sub_82B83AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B83AF8"))) PPC_WEAK_FUNC(sub_82B83AF8);
PPC_FUNC_IMPL(__imp__sub_82B83AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B83B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,20808
	ctx.r29.s64 = ctx.r11.s64 + 20808;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B83B2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b83b78
	if (cr6.eq) goto loc_82B83B78;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b83b70
	if (!cr6.eq) goto loc_82B83B70;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,12860(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12860);
	// bl 0x82d3a058
	ctx.lr = 0x82B83B54;
	sub_82D3A058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82B83B5C;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82B83B70;
	sub_83545640(ctx, base);
loc_82B83B70:
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// b 0x82b83b7c
	goto loc_82B83B7C;
loc_82B83B78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B83B7C:
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
	ctx.lr = 0x82B83B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B83B9C"))) PPC_WEAK_FUNC(sub_82B83B9C);
PPC_FUNC_IMPL(__imp__sub_82B83B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B83BA0"))) PPC_WEAK_FUNC(sub_82B83BA0);
PPC_FUNC_IMPL(__imp__sub_82B83BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B83BA8;
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
	ctx.lr = 0x82B83BBC;
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
	ctx.lr = 0x82B83BD4;
	sub_82D253F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,20904
	ctx.r9.s64 = ctx.r11.s64 + 20904;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r7,66
	ctx.r7.s64 = 66;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// bl 0x82d487b8
	ctx.lr = 0x82B83C14;
	sub_82D487B8(ctx, base);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// stb r30,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r30.u8);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,12856
	ctx.r29.s64 = ctx.r30.s64 + 12856;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B83C30;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12856);
	// bl 0x82d20ae0
	ctx.lr = 0x82B83C3C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82d23390
	ctx.lr = 0x82B83C4C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83102db0
	ctx.lr = 0x82B83C58;
	sub_83102DB0(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B83C5C;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B83C64;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B83C70;
	sub_82D195D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B83C74;
	sub_831156E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,52(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B83C84;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r3,r5,35289
	ctx.r3.u64 = ctx.r5.u64 | 35289;
	// lbzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82b83cb0
	if (cr6.lt) goto loc_82B83CB0;
	// bl 0x831156e8
	ctx.lr = 0x82B83CA4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B83CB0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d0ab60
	ctx.lr = 0x82B83CB8;
	sub_82D0AB60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B83CC4;
	sub_82D198D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B83CD0"))) PPC_WEAK_FUNC(sub_82B83CD0);
PPC_FUNC_IMPL(__imp__sub_82B83CD0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,20904
	ctx.r9.s64 = ctx.r11.s64 + 20904;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d48540
	ctx.lr = 0x82B83D0C;
	sub_82D48540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B83D14;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b83d2c
	if (cr6.eq) goto loc_82B83D2C;
	// bl 0x82416268
	ctx.lr = 0x82B83D28;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B83D2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B83D44"))) PPC_WEAK_FUNC(sub_82B83D44);
PPC_FUNC_IMPL(__imp__sub_82B83D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B83D48"))) PPC_WEAK_FUNC(sub_82B83D48);
PPC_FUNC_IMPL(__imp__sub_82B83D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B83D50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B83D5C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r27,r11,19152
	ctx.r27.s64 = ctx.r11.s64 + 19152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,1316
	ctx.r4.s64 = ctx.r27.s64 + 1316;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B83D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B83D98;
	sub_82D20F50(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r27,-4
	ctx.r28.s64 = ctx.r27.s64 + -4;
loc_82B83DA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B83DAC;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,1332
	ctx.r4.s64 = ctx.r27.s64 + 1332;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B83DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b838a8
	ctx.lr = 0x82B83DD8;
	sub_82B838A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b83af8
	ctx.lr = 0x82B83DE8;
	sub_82B83AF8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82d29598
	ctx.lr = 0x82B83DF4;
	sub_82D29598(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82b83da0
	if (cr6.lt) goto loc_82B83DA0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B83E08"))) PPC_WEAK_FUNC(sub_82B83E08);
PPC_FUNC_IMPL(__imp__sub_82B83E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B83E10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B83E1C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r27,r11,19160
	ctx.r27.s64 = ctx.r11.s64 + 19160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,1340
	ctx.r4.s64 = ctx.r27.s64 + 1340;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B83E3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B83E58;
	sub_82D20F50(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r27,-4
	ctx.r28.s64 = ctx.r27.s64 + -4;
loc_82B83E60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B83E6C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,1356
	ctx.r4.s64 = ctx.r27.s64 + 1356;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B83E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b838a8
	ctx.lr = 0x82B83E98;
	sub_82B838A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b83af8
	ctx.lr = 0x82B83EA8;
	sub_82B83AF8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82d29598
	ctx.lr = 0x82B83EB4;
	sub_82D29598(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82b83e60
	if (cr6.lt) goto loc_82B83E60;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B83EC8"))) PPC_WEAK_FUNC(sub_82B83EC8);
PPC_FUNC_IMPL(__imp__sub_82B83EC8) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b83f5c
	if (!cr6.eq) goto loc_82B83F5C;
	// bl 0x830ff290
	ctx.lr = 0x82B83EF0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B83EF4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x82b83f14
	if (!cr6.eq) goto loc_82B83F14;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82dad028
	ctx.lr = 0x82B83F0C;
	sub_82DAD028(ctx, base);
	// cmpwi cr6,r3,23
	cr6.compare<int32_t>(ctx.r3.s32, 23, xer);
	// beq cr6,0x82b83f5c
	if (cr6.eq) goto loc_82B83F5C;
loc_82B83F14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83700
	ctx.lr = 0x82B83F1C;
	sub_82B83700(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B83F24;
	sub_831156E8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,701(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 701);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b83f5c
	if (!cr6.eq) goto loc_82B83F5C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r11,-11
	ctx.r9.s64 = ctx.r11.s64 + -11;
	// addi r8,r10,13136
	ctx.r8.s64 = ctx.r10.s64 + 13136;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x82b83f74
	goto loc_82B83F74;
loc_82B83F5C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,13136
	ctx.r11.s64 = ctx.r11.s64 + 13136;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-264
	ctx.r8.s64 = ctx.r11.s64 + -264;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82B83F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B83F8C"))) PPC_WEAK_FUNC(sub_82B83F8C);
PPC_FUNC_IMPL(__imp__sub_82B83F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B83F90"))) PPC_WEAK_FUNC(sub_82B83F90);
PPC_FUNC_IMPL(__imp__sub_82B83F90) {
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
	// blt cr6,0x82b83fb8
	if (cr6.lt) goto loc_82B83FB8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b83fbc
	goto loc_82B83FBC;
loc_82B83FB8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B83FBC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B83FD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83ff4
	if (cr6.eq) goto loc_82B83FF4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b83ba0
	ctx.lr = 0x82B83FEC;
	sub_82B83BA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b83ff8
	if (!cr6.eq) goto loc_82B83FF8;
loc_82B83FF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B83FF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B84010"))) PPC_WEAK_FUNC(sub_82B84010);
PPC_FUNC_IMPL(__imp__sub_82B84010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B84018;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82B84038;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r27,r11,19224
	ctx.r27.s64 = ctx.r11.s64 + 19224;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,1308
	ctx.r4.s64 = ctx.r27.s64 + 1308;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B84058;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b840b0
	if (cr6.gt) goto loc_82B840B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b8409c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B8409C;
	// bdzf 4*cr6+eq,0x82b840a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B840A8;
	// bdzf 4*cr6+eq,0x82b84124
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84124;
	// bdzf 4*cr6+eq,0x82b8412c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B8412C;
	// bdzf 4*cr6+eq,0x82b84138
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84138;
	// bne cr6,0x82b84144
	if (!cr6.eq) goto loc_82B84144;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// li r24,11
	ctx.r24.s64 = 11;
	// b 0x82b840b0
	goto loc_82B840B0;
loc_82B8409C:
	// li r25,11
	ctx.r25.s64 = 11;
	// li r24,8
	ctx.r24.s64 = 8;
	// b 0x82b840b0
	goto loc_82B840B0;
loc_82B840A8:
	// li r25,19
	ctx.r25.s64 = 19;
loc_82B840AC:
	// li r24,5
	ctx.r24.s64 = 5;
loc_82B840B0:
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B840C8;
	sub_82D20F50(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82b841f4
	if (cr6.eq) goto loc_82B841F4;
	// rlwinm r28,r25,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B840D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B840E0;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,1324
	ctx.r4.s64 = ctx.r27.s64 + 1324;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B840FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x82b841ac
	if (!cr6.eq) goto loc_82B841AC;
	// addi r11,r27,264
	ctx.r11.s64 = ctx.r27.s64 + 264;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82B8411C;
	sub_82D042A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b841b8
	goto loc_82B841B8;
loc_82B84124:
	// li r25,24
	ctx.r25.s64 = 24;
	// b 0x82b840ac
	goto loc_82B840AC;
loc_82B8412C:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// li r24,6
	ctx.r24.s64 = 6;
	// b 0x82b840b0
	goto loc_82B840B0;
loc_82B84138:
	// li r25,62
	ctx.r25.s64 = 62;
	// li r24,4
	ctx.r24.s64 = 4;
	// b 0x82b840b0
	goto loc_82B840B0;
loc_82B84144:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b84174
	if (cr6.eq) goto loc_82B84174;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82d484a8
	ctx.lr = 0x82B84158;
	sub_82D484A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,13
	ctx.r7.s64 = 13;
	// bl 0x82d20f50
	ctx.lr = 0x82B84170;
	sub_82D20F50(ctx, base);
	// stb r29,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r29.u8);
loc_82B84174:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-66
	ctx.r5.s64 = ctx.r11.s64 + -66;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B8419C;
	sub_82D1EBF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B841A4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B841AC:
	// lwzx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82B841B4;
	sub_82D042A8(ctx, base);
	// add r4,r29,r25
	ctx.r4.u64 = ctx.r29.u64 + ctx.r25.u64;
loc_82B841B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b838a8
	ctx.lr = 0x82B841C0;
	sub_82B838A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83af8
	ctx.lr = 0x82B841D0;
	sub_82B83AF8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B841E4;
	sub_82D291E0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b840d4
	if (cr6.lt) goto loc_82B840D4;
loc_82B841F4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b84214
	if (cr6.lt) goto loc_82B84214;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B84214;
	sub_825952B8(ctx, base);
loc_82B84214:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8421C"))) PPC_WEAK_FUNC(sub_82B8421C);
PPC_FUNC_IMPL(__imp__sub_82B8421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B84220"))) PPC_WEAK_FUNC(sub_82B84220);
PPC_FUNC_IMPL(__imp__sub_82B84220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B84228;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82B84248;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r25,r11,19224
	ctx.r25.s64 = ctx.r11.s64 + 19224;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,1340
	ctx.r4.s64 = ctx.r25.s64 + 1340;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B84268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82b842e0
	if (cr6.gt) goto loc_82B842E0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b842a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B842A8;
	// bdzf 4*cr6+eq,0x82b842b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B842B4;
	// bdzf 4*cr6+eq,0x82b842c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B842C0;
	// bdzf 4*cr6+eq,0x82b842cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B842CC;
	// bne cr6,0x82b842d8
	if (!cr6.eq) goto loc_82B842D8;
	// li r26,29
	ctx.r26.s64 = 29;
	// li r27,10
	ctx.r27.s64 = 10;
	// b 0x82b842e0
	goto loc_82B842E0;
loc_82B842A8:
	// li r26,39
	ctx.r26.s64 = 39;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x82b842e0
	goto loc_82B842E0;
loc_82B842B4:
	// li r26,41
	ctx.r26.s64 = 41;
	// li r27,9
	ctx.r27.s64 = 9;
	// b 0x82b842e0
	goto loc_82B842E0;
loc_82B842C0:
	// li r26,50
	ctx.r26.s64 = 50;
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x82b842e0
	goto loc_82B842E0;
loc_82B842CC:
	// li r26,53
	ctx.r26.s64 = 53;
	// li r27,4
	ctx.r27.s64 = 4;
	// b 0x82b842e0
	goto loc_82B842E0;
loc_82B842D8:
	// li r26,57
	ctx.r26.s64 = 57;
	// li r27,5
	ctx.r27.s64 = 5;
loc_82B842E0:
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B842F8;
	sub_82D20F50(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b84380
	if (cr6.eq) goto loc_82B84380;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82B8430C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B84318;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r25,1356
	ctx.r4.s64 = ctx.r25.s64 + 1356;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B84334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B84344;
	sub_82D042A8(ctx, base);
	// add r4,r31,r26
	ctx.r4.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b838a8
	ctx.lr = 0x82B84350;
	sub_82B838A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b83af8
	ctx.lr = 0x82B84360;
	sub_82B83AF8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B84374;
	sub_82D291E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x82b8430c
	if (cr6.lt) goto loc_82B8430C;
loc_82B84380:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b843a0
	if (cr6.lt) goto loc_82B843A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B843A0;
	sub_825952B8(ctx, base);
loc_82B843A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B843A8"))) PPC_WEAK_FUNC(sub_82B843A8);
PPC_FUNC_IMPL(__imp__sub_82B843A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B843C0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b843d0
	if (cr6.eq) goto loc_82B843D0;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// b 0x82b84404
	goto loc_82B84404;
loc_82B843D0:
	// bl 0x831156e8
	ctx.lr = 0x82B843D4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B843E4;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35265
	ctx.r8.u64 = ctx.r10.u64 | 35265;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r31,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B84404:
	// bl 0x831156e8
	ctx.lr = 0x82B84408;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x82B84414;
	sub_8312B8F0(ctx, base);
	// bl 0x82d47a58
	ctx.lr = 0x82B84418;
	sub_82D47A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r9,20728
	ctx.r4.s64 = ctx.r9.s64 + 20728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B84440;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d47bb8
	ctx.lr = 0x82B84448;
	sub_82D47BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47b08
	ctx.lr = 0x82B84450;
	sub_82D47B08(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B84454;
	sub_82D476F0(ctx, base);
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

__attribute__((alias("__imp__sub_82B84468"))) PPC_WEAK_FUNC(sub_82B84468);
PPC_FUNC_IMPL(__imp__sub_82B84468) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,68
	ctx.r4.u64 = ctx.r4.u64 | 68;
	// bl 0x82d042a8
	ctx.lr = 0x82B844A0;
	sub_82D042A8(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,20780
	ctx.r4.s64 = ctx.r9.s64 + 20780;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825a1eb8
	ctx.lr = 0x82B844B4;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B844C8;
	sub_825A1DA8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b844e8
	if (cr6.lt) goto loc_82B844E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B844E8;
	sub_825952B8(ctx, base);
loc_82B844E8:
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

__attribute__((alias("__imp__sub_82B844FC"))) PPC_WEAK_FUNC(sub_82B844FC);
PPC_FUNC_IMPL(__imp__sub_82B844FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B84500"))) PPC_WEAK_FUNC(sub_82B84500);
PPC_FUNC_IMPL(__imp__sub_82B84500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B84508;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B84514;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r27,r11,20636
	ctx.r27.s64 = ctx.r11.s64 + 20636;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B84534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b84740
	if (cr6.eq) goto loc_82B84740;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B84554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b84740
	if (cr6.eq) goto loc_82B84740;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82b845a0
	if (!cr6.eq) goto loc_82B845A0;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// addi r4,r11,-66
	ctx.r4.s64 = ctx.r11.s64 + -66;
	// bl 0x82d484c0
	ctx.lr = 0x82B8457C;
	sub_82D484C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B84588;
	sub_82D29598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21188
	ctx.lr = 0x82B84598;
	sub_82D21188(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B845A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82b83ec8
	ctx.lr = 0x82B845BC;
	sub_82B83EC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82B845C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82b83a70
	ctx.lr = 0x82B845E0;
	sub_82B83A70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8467c
	if (cr6.eq) goto loc_82B8467C;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82b838a8
	ctx.lr = 0x82B84604;
	sub_82B838A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b84620
	if (cr6.eq) goto loc_82B84620;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b84468
	ctx.lr = 0x82B8461C;
	sub_82B84468(ctx, base);
	// b 0x82b84630
	goto loc_82B84630;
loc_82B84620:
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B84630;
	sub_8259CC28(ctx, base);
loc_82B84630:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b84644
	if (!cr6.lt) goto loc_82B84644;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B84644:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d042a8
	ctx.lr = 0x82B84650;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8466c
	if (cr6.lt) goto loc_82B8466C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B8466C;
	sub_825952B8(ctx, base);
loc_82B8466C:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// b 0x82b84684
	goto loc_82B84684;
loc_82B8467C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d04220
	ctx.lr = 0x82B84684;
	sub_82D04220(ctx, base);
loc_82B84684:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a1da8
	ctx.lr = 0x82B84698;
	sub_825A1DA8(ctx, base);
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82b846d4
	if (cr6.eq) goto loc_82B846D4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a1eb8
	ctx.lr = 0x82B846B4;
	sub_825A1EB8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b845c8
	if (cr6.lt) goto loc_82B845C8;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B846D0;
	sub_825952B8(ctx, base);
	// b 0x82b845c8
	goto loc_82B845C8;
loc_82B846D4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B846DC;
	sub_8387E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B846F0;
	sub_82D291E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21188
	ctx.lr = 0x82B84700;
	sub_82D21188(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// bne cr6,0x82b84714
	if (!cr6.eq) goto loc_82B84714;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b84730
	goto loc_82B84730;
loc_82B84714:
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bne cr6,0x82b84724
	if (!cr6.eq) goto loc_82B84724;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b84730
	goto loc_82B84730;
loc_82B84724:
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bne cr6,0x82b84738
	if (!cr6.eq) goto loc_82B84738;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82B84730:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b83768
	ctx.lr = 0x82B84738;
	sub_82B83768(ctx, base);
loc_82B84738:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B84740;
	sub_8387E8E0(ctx, base);
loc_82B84740:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B84748"))) PPC_WEAK_FUNC(sub_82B84748);
PPC_FUNC_IMPL(__imp__sub_82B84748) {
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
	// lbz r11,141(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 141);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8479c
	if (cr6.eq) goto loc_82B8479C;
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
	ctx.lr = 0x82B84780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b8479c
	if (!cr6.eq) goto loc_82B8479C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b843a8
	ctx.lr = 0x82B84794;
	sub_82B843A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r11.u8);
loc_82B8479C:
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

__attribute__((alias("__imp__sub_82B847B0"))) PPC_WEAK_FUNC(sub_82B847B0);
PPC_FUNC_IMPL(__imp__sub_82B847B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B847B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r30,r11,20676
	ctx.r30.s64 = ctx.r11.s64 + 20676;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r8,r30,-1516
	ctx.r8.s64 = ctx.r30.s64 + -1516;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d04220
	ctx.lr = 0x82B847F8;
	sub_82D04220(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B84810;
	sub_825A1DA8(ctx, base);
	// lwz r7,104(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// bge cr6,0x82b8487c
	if (!cr6.lt) goto loc_82B8487C;
	// lis r4,262
	ctx.r4.s64 = 17170432;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,209
	ctx.r4.u64 = ctx.r4.u64 | 209;
	// bl 0x82d04220
	ctx.lr = 0x82B84830;
	sub_82D04220(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a6b900
	ctx.lr = 0x82B84840;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B84854;
	sub_825A1DA8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b84870
	if (cr6.lt) goto loc_82B84870;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B84870;
	sub_825952B8(ctx, base);
loc_82B84870:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82B8487C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b84898
	if (cr6.lt) goto loc_82B84898;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B84898;
	sub_825952B8(ctx, base);
loc_82B84898:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B848A0"))) PPC_WEAK_FUNC(sub_82B848A0);
PPC_FUNC_IMPL(__imp__sub_82B848A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B848A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// addi r30,r10,19488
	ctx.r30.s64 = ctx.r10.s64 + 19488;
	// bgt cr6,0x82b849b0
	if (cr6.gt) goto loc_82B849B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b84900
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84900;
	// bdzf 4*cr6+eq,0x82b84910
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84910;
	// bne cr6,0x82b84994
	if (!cr6.eq) goto loc_82B84994;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// ori r4,r4,83
	ctx.r4.u64 = ctx.r4.u64 | 83;
	// b 0x82b849b8
	goto loc_82B849B8;
loc_82B84900:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b847b0
	ctx.lr = 0x82B8490C;
	sub_82B847B0(ctx, base);
	// b 0x82b849c0
	goto loc_82B849C0;
loc_82B84910:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b833a0
	ctx.lr = 0x82B8491C;
	sub_82B833A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B84924;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,1152
	ctx.r4.s64 = ctx.r30.s64 + 1152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8493C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,1168
	ctx.r4.s64 = ctx.r30.s64 + 1168;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B84958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82B84968;
	sub_82D291E0(ctx, base);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b849a4
	if (cr6.eq) goto loc_82B849A4;
	// addi r4,r30,-734
	ctx.r4.s64 = ctx.r30.s64 + -734;
	// bl 0x8259d6c0
	ctx.lr = 0x82B84980;
	sub_8259D6C0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// blt cr6,0x82b84900
	if (cr6.lt) goto loc_82B84900;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// bge cr6,0x82b84900
	if (!cr6.lt) goto loc_82B84900;
loc_82B84994:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x82b849b8
	goto loc_82B849B8;
loc_82B849A4:
	// bl 0x8387e8e0
	ctx.lr = 0x82B849A8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B849B0:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 | 48;
loc_82B849B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B849C0;
	sub_82D042A8(ctx, base);
loc_82B849C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B849C8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,1180
	ctx.r4.s64 = ctx.r30.s64 + 1180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B849E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82B849F0;
	sub_82D291E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b84a10
	if (cr6.lt) goto loc_82B84A10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B84A10;
	sub_825952B8(ctx, base);
loc_82B84A10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B84A18"))) PPC_WEAK_FUNC(sub_82B84A18);
PPC_FUNC_IMPL(__imp__sub_82B84A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// bgt cr6,0x82b84c08
	if (cr6.gt) goto loc_82B84C08;
	// lis r12,-32072
	ctx.r12.s64 = -2101870592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19004
	ctx.r12.s64 = ctx.r12.s64 + 19004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B84B48;
	case 1:
		goto loc_82B84C08;
	case 2:
		goto loc_82B84C08;
	case 3:
		goto loc_82B84C08;
	case 4:
		goto loc_82B84C08;
	case 5:
		goto loc_82B84C08;
	case 6:
		goto loc_82B84C08;
	case 7:
		goto loc_82B84C08;
	case 8:
		goto loc_82B84C08;
	case 9:
		goto loc_82B84C08;
	case 10:
		goto loc_82B84B48;
	case 11:
		goto loc_82B84B58;
	case 12:
		goto loc_82B84C08;
	case 13:
		goto loc_82B84C08;
	case 14:
		goto loc_82B84C08;
	case 15:
		goto loc_82B84C08;
	case 16:
		goto loc_82B84C08;
	case 17:
		goto loc_82B84C08;
	case 18:
		goto loc_82B84B58;
	case 19:
		goto loc_82B84B68;
	case 20:
		goto loc_82B84C08;
	case 21:
		goto loc_82B84C08;
	case 22:
		goto loc_82B84C08;
	case 23:
		goto loc_82B84B68;
	case 24:
		goto loc_82B84B78;
	case 25:
		goto loc_82B84C08;
	case 26:
		goto loc_82B84C08;
	case 27:
		goto loc_82B84C08;
	case 28:
		goto loc_82B84B78;
	case 29:
		goto loc_82B84B88;
	case 30:
		goto loc_82B84C08;
	case 31:
		goto loc_82B84C08;
	case 32:
		goto loc_82B84C08;
	case 33:
		goto loc_82B84C08;
	case 34:
		goto loc_82B84C08;
	case 35:
		goto loc_82B84C08;
	case 36:
		goto loc_82B84C08;
	case 37:
		goto loc_82B84C08;
	case 38:
		goto loc_82B84B88;
	case 39:
		goto loc_82B84BA0;
	case 40:
		goto loc_82B84BA0;
	case 41:
		goto loc_82B84BB0;
	case 42:
		goto loc_82B84C08;
	case 43:
		goto loc_82B84C08;
	case 44:
		goto loc_82B84C08;
	case 45:
		goto loc_82B84C08;
	case 46:
		goto loc_82B84C08;
	case 47:
		goto loc_82B84C08;
	case 48:
		goto loc_82B84C08;
	case 49:
		goto loc_82B84BB0;
	case 50:
		goto loc_82B84BC0;
	case 51:
		goto loc_82B84C08;
	case 52:
		goto loc_82B84BC0;
	case 53:
		goto loc_82B84BD0;
	case 54:
		goto loc_82B84C08;
	case 55:
		goto loc_82B84C08;
	case 56:
		goto loc_82B84BD0;
	case 57:
		goto loc_82B84BE0;
	case 58:
		goto loc_82B84C08;
	case 59:
		goto loc_82B84C08;
	case 60:
		goto loc_82B84C08;
	case 61:
		goto loc_82B84BE0;
	case 62:
		goto loc_82B84BF8;
	case 63:
		goto loc_82B84C08;
	case 64:
		goto loc_82B84C08;
	case 65:
		goto loc_82B84BF8;
	case 66:
		goto loc_82B84C18;
	default:
		return;
	}
	// lwz r21,19272(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19272);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19272(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19272);
	// lwz r21,19288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19288);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19288(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19288);
	// lwz r21,19304(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19304);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19304(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19304);
	// lwz r21,19320(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19320);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19320(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19320);
	// lwz r21,19336(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19336);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19336(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19336);
	// lwz r21,19360(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19360);
	// lwz r21,19360(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19360);
	// lwz r21,19376(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19376);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19376(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19376);
	// lwz r21,19392(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19392);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19392(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19392);
	// lwz r21,19408(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19408);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19408(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19408);
	// lwz r21,19424(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19424);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19424(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19424);
	// lwz r21,19448(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19448);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19464(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19464);
	// lwz r21,19448(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19448);
	// lwz r21,19480(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19480);
loc_82B84B48:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84B58:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84B68:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84B78:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84B88:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84BA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84BB0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84BC0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84BD0:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84BE0:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84BF8:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
loc_82B84C08:
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82B84C18:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x82b848a0
	sub_82B848A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B84C28"))) PPC_WEAK_FUNC(sub_82B84C28);
PPC_FUNC_IMPL(__imp__sub_82B84C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B84C2C"))) PPC_WEAK_FUNC(sub_82B84C2C);
PPC_FUNC_IMPL(__imp__sub_82B84C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B84C30"))) PPC_WEAK_FUNC(sub_82B84C30);
PPC_FUNC_IMPL(__imp__sub_82B84C30) {
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
	// bl 0x82b83408
	ctx.lr = 0x82B84C48;
	sub_82B83408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b848a0
	ctx.lr = 0x82B84C54;
	sub_82B848A0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b84cb0
	if (cr6.gt) goto loc_82B84CB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b84c84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84C84;
	// bdzf 4*cr6+eq,0x82b84c90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84C90;
	// bdzf 4*cr6+eq,0x82b84c9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84C9C;
	// bne cr6,0x82b84ca8
	if (!cr6.eq) goto loc_82B84CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83d48
	ctx.lr = 0x82B84C80;
	sub_82B83D48(ctx, base);
	// b 0x82b84cb0
	goto loc_82B84CB0;
loc_82B84C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83e08
	ctx.lr = 0x82B84C8C;
	sub_82B83E08(ctx, base);
	// b 0x82b84cb0
	goto loc_82B84CB0;
loc_82B84C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84010
	ctx.lr = 0x82B84C98;
	sub_82B84010(ctx, base);
	// b 0x82b84cb0
	goto loc_82B84CB0;
loc_82B84C9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84500
	ctx.lr = 0x82B84CA4;
	sub_82B84500(ctx, base);
	// b 0x82b84cb0
	goto loc_82B84CB0;
loc_82B84CA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84220
	ctx.lr = 0x82B84CB0;
	sub_82B84220(ctx, base);
loc_82B84CB0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b84cdc
	if (cr6.eq) goto loc_82B84CDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B84CDC;
	sub_82D1EBF8(ctx, base);
loc_82B84CDC:
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

__attribute__((alias("__imp__sub_82B84CF0"))) PPC_WEAK_FUNC(sub_82B84CF0);
PPC_FUNC_IMPL(__imp__sub_82B84CF0) {
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
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d48698
	ctx.lr = 0x82B84D18;
	sub_82D48698(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d484a8
	ctx.lr = 0x82B84D20;
	sub_82D484A8(ctx, base);
	// addi r11,r3,66
	ctx.r11.s64 = ctx.r3.s64 + 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82b84c30
	ctx.lr = 0x82B84D30;
	sub_82B84C30(ctx, base);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lwz r3,2056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,388(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 388);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B84D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B84D68"))) PPC_WEAK_FUNC(sub_82B84D68);
PPC_FUNC_IMPL(__imp__sub_82B84D68) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b84f54
	if (cr6.gt) goto loc_82B84F54;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b84de8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84DE8;
	// bdzf 4*cr6+eq,0x82b84e00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84E00;
	// bdzf 4*cr6+eq,0x82b84f54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84F54;
	// bne cr6,0x82b84eb4
	if (!cr6.eq) goto loc_82B84EB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B84DB4;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82b84dd8
	if (!cr6.eq) goto loc_82B84DD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r10,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r10.u8);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// b 0x82b84f4c
	goto loc_82B84F4C;
loc_82B84DD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82b84f4c
	goto loc_82B84F4C;
loc_82B84DE8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B84DF8;
	sub_82D1C1A8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// b 0x82b84f4c
	goto loc_82B84F4C;
loc_82B84E00:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82b84e44
	if (cr6.eq) goto loc_82B84E44;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B84E24;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B84E34;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B84E44;
	sub_82D19788(ctx, base);
loc_82B84E44:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82b84f3c
	if (cr6.gt) goto loc_82B84F3C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b84e78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84E78;
	// bdzf 4*cr6+eq,0x82b84e80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84E80;
	// bdzf 4*cr6+eq,0x82b84e88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84E88;
	// bdzf 4*cr6+eq,0x82b84ea4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84EA4;
	// bne cr6,0x82b84eac
	if (!cr6.eq) goto loc_82B84EAC;
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84E78:
	// li r30,19
	ctx.r30.s64 = 19;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84E80:
	// li r30,24
	ctx.r30.s64 = 24;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84E88:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r30,29
	ctx.r30.s64 = 29;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B84E9C;
	sub_82D1C1A8(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84EA4:
	// li r30,62
	ctx.r30.s64 = 62;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84EAC:
	// li r30,66
	ctx.r30.s64 = 66;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84EB4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B84ECC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B84EDC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B84EEC;
	sub_82D19788(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b84f3c
	if (cr6.gt) goto loc_82B84F3C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b84f20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84F20;
	// bdzf 4*cr6+eq,0x82b84f28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84F28;
	// bdzf 4*cr6+eq,0x82b84f30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84F30;
	// bne cr6,0x82b84f38
	if (!cr6.eq) goto loc_82B84F38;
	// li r30,39
	ctx.r30.s64 = 39;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84F20:
	// li r30,41
	ctx.r30.s64 = 41;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84F28:
	// li r30,50
	ctx.r30.s64 = 50;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84F30:
	// li r30,53
	ctx.r30.s64 = 53;
	// b 0x82b84f3c
	goto loc_82B84F3C;
loc_82B84F38:
	// li r30,57
	ctx.r30.s64 = 57;
loc_82B84F3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B84F44;
	sub_82D1C1A8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82B84F4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84c30
	ctx.lr = 0x82B84F54;
	sub_82B84C30(ctx, base);
loc_82B84F54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B84F6C"))) PPC_WEAK_FUNC(sub_82B84F6C);
PPC_FUNC_IMPL(__imp__sub_82B84F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B84F70"))) PPC_WEAK_FUNC(sub_82B84F70);
PPC_FUNC_IMPL(__imp__sub_82B84F70) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b850d4
	if (cr6.gt) goto loc_82B850D4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b84fd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B84FD0;
	// bdzf 4*cr6+eq,0x82b85038
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B85038;
	// bne cr6,0x82b850a8
	if (!cr6.eq) goto loc_82B850A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x82b84c30
	ctx.lr = 0x82B84FBC;
	sub_82B84C30(ctx, base);
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
loc_82B84FD0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82b8500c
	if (!cr6.eq) goto loc_82B8500C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82b84c30
	ctx.lr = 0x82B84FF8;
	sub_82B84C30(ctx, base);
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
loc_82B8500C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// bl 0x82b84c30
	ctx.lr = 0x82B85024;
	sub_82B84C30(ctx, base);
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
loc_82B85038:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x82b8504c
	if (cr6.eq) goto loc_82B8504C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82B8504C:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B85060;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B85070;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B85080;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b83548
	ctx.lr = 0x82B85088;
	sub_82B83548(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84c30
	ctx.lr = 0x82B85094;
	sub_82B84C30(ctx, base);
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
loc_82B850A8:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82b84c30
	ctx.lr = 0x82B850C0;
	sub_82B84C30(ctx, base);
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
loc_82B850D4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82B850E0;
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

__attribute__((alias("__imp__sub_82B850F4"))) PPC_WEAK_FUNC(sub_82B850F4);
PPC_FUNC_IMPL(__imp__sub_82B850F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B850F8"))) PPC_WEAK_FUNC(sub_82B850F8);
PPC_FUNC_IMPL(__imp__sub_82B850F8) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b85130
	if (!cr6.eq) goto loc_82B85130;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stb r10,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r10.u8);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// b 0x82b85148
	goto loc_82B85148;
loc_82B85130:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// bne cr6,0x82b85148
	if (!cr6.eq) goto loc_82B85148;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
loc_82B85148:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84a18
	ctx.lr = 0x82B85150;
	sub_82B84A18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84c30
	ctx.lr = 0x82B85158;
	sub_82B84C30(ctx, base);
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

__attribute__((alias("__imp__sub_82B8516C"))) PPC_WEAK_FUNC(sub_82B8516C);
PPC_FUNC_IMPL(__imp__sub_82B8516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85170"))) PPC_WEAK_FUNC(sub_82B85170);
PPC_FUNC_IMPL(__imp__sub_82B85170) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b851ac
	if (!cr6.eq) goto loc_82B851AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stb r10,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r10.u8);
	// b 0x82b851c4
	goto loc_82B851C4;
loc_82B851AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// ble cr6,0x82b851c4
	if (!cr6.gt) goto loc_82B851C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
loc_82B851C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84a18
	ctx.lr = 0x82B851CC;
	sub_82B84A18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b84c30
	ctx.lr = 0x82B851D4;
	sub_82B84C30(ctx, base);
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

__attribute__((alias("__imp__sub_82B851E8"))) PPC_WEAK_FUNC(sub_82B851E8);
PPC_FUNC_IMPL(__imp__sub_82B851E8) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82B85200;
	sub_82D1C1A8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8521c
	if (cr6.eq) goto loc_82B8521C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82b85240
	if (cr6.eq) goto loc_82B85240;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b8522c
	if (!cr6.eq) goto loc_82B8522C;
loc_82B8521C:
	// addi r11,r3,139
	ctx.r11.s64 = ctx.r3.s64 + 139;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82e789d0
	ctx.lr = 0x82B8522C;
	sub_82E789D0(ctx, base);
loc_82B8522C:
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
loc_82B85240:
	// addi r11,r3,139
	ctx.r11.s64 = ctx.r3.s64 + 139;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82e78ab8
	ctx.lr = 0x82B85250;
	sub_82E78AB8(ctx, base);
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

__attribute__((alias("__imp__sub_82B85264"))) PPC_WEAK_FUNC(sub_82B85264);
PPC_FUNC_IMPL(__imp__sub_82B85264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85268"))) PPC_WEAK_FUNC(sub_82B85268);
PPC_FUNC_IMPL(__imp__sub_82B85268) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B85288;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B85298;
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

__attribute__((alias("__imp__sub_82B852AC"))) PPC_WEAK_FUNC(sub_82B852AC);
PPC_FUNC_IMPL(__imp__sub_82B852AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B852B0"))) PPC_WEAK_FUNC(sub_82B852B0);
PPC_FUNC_IMPL(__imp__sub_82B852B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b852e8
	if (!cr6.eq) goto loc_82B852E8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,5388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5388);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82b852e8
	if (!cr6.eq) goto loc_82B852E8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,21572
	ctx.r11.s64 = ctx.r11.s64 + 21572;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
loc_82B852E8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,21572
	ctx.r5.s64 = ctx.r11.s64 + 21572;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B852F8"))) PPC_WEAK_FUNC(sub_82B852F8);
PPC_FUNC_IMPL(__imp__sub_82B852F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bge cr6,0x82b85370
	if (!cr6.lt) goto loc_82B85370;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// bne cr6,0x82b85324
	if (!cr6.eq) goto loc_82B85324;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82B85324:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,248
	ctx.r4.s64 = ctx.r11.s64 + 248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82B85350;
	sub_8259CB28(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r8,21552
	ctx.r4.s64 = ctx.r8.s64 + 21552;
	// bl 0x837b0c10
	ctx.lr = 0x82B85360;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82B85370;
	sub_82A69AD0(ctx, base);
loc_82B85370:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B85384"))) PPC_WEAK_FUNC(sub_82B85384);
PPC_FUNC_IMPL(__imp__sub_82B85384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85388"))) PPC_WEAK_FUNC(sub_82B85388);
PPC_FUNC_IMPL(__imp__sub_82B85388) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B853A0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b853b0
	if (cr6.eq) goto loc_82B853B0;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// b 0x82b853e4
	goto loc_82B853E4;
loc_82B853B0:
	// bl 0x831156e8
	ctx.lr = 0x82B853B4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19638
	ctx.lr = 0x82B853C4;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35265
	ctx.r8.u64 = ctx.r10.u64 | 35265;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r31,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B853E4:
	// bl 0x831156e8
	ctx.lr = 0x82B853E8;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x82B853F4;
	sub_8312B8F0(ctx, base);
	// bl 0x82d47a58
	ctx.lr = 0x82B853F8;
	sub_82D47A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r9,21580
	ctx.r4.s64 = ctx.r9.s64 + 21580;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B85420;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d47bb8
	ctx.lr = 0x82B85428;
	sub_82D47BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47b08
	ctx.lr = 0x82B85430;
	sub_82D47B08(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B85434;
	sub_82D476F0(ctx, base);
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

__attribute__((alias("__imp__sub_82B85448"))) PPC_WEAK_FUNC(sub_82B85448);
PPC_FUNC_IMPL(__imp__sub_82B85448) {
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
	// lbz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8549c
	if (cr6.eq) goto loc_82B8549C;
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
	ctx.lr = 0x82B85480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b8549c
	if (!cr6.eq) goto loc_82B8549C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b85388
	ctx.lr = 0x82B85494;
	sub_82B85388(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
loc_82B8549C:
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

__attribute__((alias("__imp__sub_82B854B0"))) PPC_WEAK_FUNC(sub_82B854B0);
PPC_FUNC_IMPL(__imp__sub_82B854B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B854B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B854D0;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B854E8;
	sub_82D253F8(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,21688
	ctx.r9.s64 = ctx.r11.s64 + 21688;
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r6,r7,-22844
	ctx.r6.s64 = ctx.r7.s64 + -22844;
	// stb r31,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r31.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// addi r11,r30,248
	ctx.r11.s64 = ctx.r30.s64 + 248;
	// stw r6,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r6.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
loc_82B85530:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// stb r31,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r31.u8);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// stb r31,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r31.u8);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// stb r31,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r31.u8);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r31,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r31.u32);
	// stb r31,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r31.u8);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r31,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r31.u32);
	// stb r31,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r31.u8);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// bdnz 0x82b85530
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B85530;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,13308(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13308);
	// bl 0x82d23390
	ctx.lr = 0x82B85594;
	sub_82D23390(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r31.u8);
	// addi r8,r30,125
	ctx.r8.s64 = ctx.r30.s64 + 125;
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// addi r9,r30,912
	ctx.r9.s64 = ctx.r30.s64 + 912;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r30,148
	ctx.r10.s64 = ctx.r30.s64 + 148;
loc_82B855B8:
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// stdu r31,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r31.u64);
	ctx.r9.u32 = ea;
	// stbx r31,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b855b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B855B8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B855DC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B855EC;
	sub_82D19788(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B855F8"))) PPC_WEAK_FUNC(sub_82B855F8);
PPC_FUNC_IMPL(__imp__sub_82B855F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B85600;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21688
	ctx.r9.s64 = ctx.r11.s64 + 21688;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,920
	ctx.r31.s64 = ctx.r3.s64 + 920;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r30,23
	ctx.r30.s64 = 23;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B85634:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b85654
	if (cr6.lt) goto loc_82B85654;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B85654;
	sub_825952B8(ctx, base);
loc_82B85654:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x82b85634
	if (!cr0.lt) goto loc_82B85634;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r27,96
	ctx.r31.s64 = ctx.r27.s64 + 96;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B85680;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b856a8
	if (cr6.eq) goto loc_82B856A8;
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
	ctx.lr = 0x82B856A4;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82B856A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B856B0;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B856B8"))) PPC_WEAK_FUNC(sub_82B856B8);
PPC_FUNC_IMPL(__imp__sub_82B856B8) {
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
	// bl 0x82b855f8
	ctx.lr = 0x82B856D8;
	sub_82B855F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b856f0
	if (cr6.eq) goto loc_82B856F0;
	// bl 0x82416268
	ctx.lr = 0x82B856EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B856F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B85708"))) PPC_WEAK_FUNC(sub_82B85708);
PPC_FUNC_IMPL(__imp__sub_82B85708) {
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
	// blt cr6,0x82b85730
	if (cr6.lt) goto loc_82B85730;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b85734
	goto loc_82B85734;
loc_82B85730:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B85734:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1304
	ctx.r4.s64 = 1304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B85750;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85770
	if (cr6.eq) goto loc_82B85770;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b854b0
	ctx.lr = 0x82B85768;
	sub_82B854B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b85774
	if (!cr6.eq) goto loc_82B85774;
loc_82B85770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B85774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8578C"))) PPC_WEAK_FUNC(sub_82B8578C);
PPC_FUNC_IMPL(__imp__sub_82B8578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85790"))) PPC_WEAK_FUNC(sub_82B85790);
PPC_FUNC_IMPL(__imp__sub_82B85790) {
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
	// blt cr6,0x82b857b8
	if (cr6.lt) goto loc_82B857B8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b857bc
	goto loc_82B857BC;
loc_82B857B8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B857BC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1304
	ctx.r4.s64 = 1304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B857D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b857f8
	if (cr6.eq) goto loc_82B857F8;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b854b0
	ctx.lr = 0x82B857F0;
	sub_82B854B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b857fc
	if (!cr6.eq) goto loc_82B857FC;
loc_82B857F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B857FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B85814"))) PPC_WEAK_FUNC(sub_82B85814);
PPC_FUNC_IMPL(__imp__sub_82B85814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85818"))) PPC_WEAK_FUNC(sub_82B85818);
PPC_FUNC_IMPL(__imp__sub_82B85818) {
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
	// blt cr6,0x82b85840
	if (cr6.lt) goto loc_82B85840;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b85844
	goto loc_82B85844;
loc_82B85840:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B85844:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1304
	ctx.r4.s64 = 1304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B85860;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85880
	if (cr6.eq) goto loc_82B85880;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b854b0
	ctx.lr = 0x82B85878;
	sub_82B854B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b85884
	if (!cr6.eq) goto loc_82B85884;
loc_82B85880:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B85884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8589C"))) PPC_WEAK_FUNC(sub_82B8589C);
PPC_FUNC_IMPL(__imp__sub_82B8589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B858A0"))) PPC_WEAK_FUNC(sub_82B858A0);
PPC_FUNC_IMPL(__imp__sub_82B858A0) {
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
	// blt cr6,0x82b858c8
	if (cr6.lt) goto loc_82B858C8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b858cc
	goto loc_82B858CC;
loc_82B858C8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B858CC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1304
	ctx.r4.s64 = 1304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B858E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85908
	if (cr6.eq) goto loc_82B85908;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b854b0
	ctx.lr = 0x82B85900;
	sub_82B854B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8590c
	if (!cr6.eq) goto loc_82B8590C;
loc_82B85908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8590C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B85924"))) PPC_WEAK_FUNC(sub_82B85924);
PPC_FUNC_IMPL(__imp__sub_82B85924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85928"))) PPC_WEAK_FUNC(sub_82B85928);
PPC_FUNC_IMPL(__imp__sub_82B85928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82B85930;
	__savegprlr_16(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B85940;
	sub_82D19A88(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85d6c
	if (cr6.eq) goto loc_82B85D6C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b85988
	if (cr6.eq) goto loc_82B85988;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82b8597c
	if (cr6.eq) goto loc_82B8597C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b85990
	if (!cr6.eq) goto loc_82B85990;
	// lis r30,108
	ctx.r30.s64 = 7077888;
	// ori r30,r30,211
	ctx.r30.u64 = ctx.r30.u64 | 211;
	// b 0x82b85990
	goto loc_82B85990;
loc_82B8597C:
	// lis r30,68
	ctx.r30.s64 = 4456448;
	// ori r30,r30,13
	ctx.r30.u64 = ctx.r30.u64 | 13;
	// b 0x82b85990
	goto loc_82B85990;
loc_82B85988:
	// lis r30,642
	ctx.r30.s64 = 42074112;
	// ori r30,r30,62
	ctx.r30.u64 = ctx.r30.u64 | 62;
loc_82B85990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B85998;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82B859A8;
	sub_82D2D510(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r17,r11,21540
	ctx.r17.s64 = ctx.r11.s64 + 21540;
	// bne cr6,0x82b859d0
	if (!cr6.eq) goto loc_82B859D0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b859e4
	if (cr6.eq) goto loc_82B859E4;
	// addi r4,r17,-298
	ctx.r4.s64 = ctx.r17.s64 + -298;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d30138
	ctx.lr = 0x82B859CC;
	sub_82D30138(ctx, base);
	// b 0x82b859e4
	goto loc_82B859E4;
loc_82B859D0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b859e4
	if (cr6.eq) goto loc_82B859E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d30340
	ctx.lr = 0x82B859E4;
	sub_82D30340(ctx, base);
loc_82B859E4:
	// bl 0x82dad2e0
	ctx.lr = 0x82B859E8;
	sub_82DAD2E0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85d58
	if (cr6.eq) goto loc_82B85D58;
	// addi r19,r31,96
	ctx.r19.s64 = ctx.r31.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x825b48f8
	ctx.lr = 0x82B85A00;
	sub_825B48F8(ctx, base);
	// lwz r20,60(r23)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// li r22,15
	ctx.r22.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,48
	ctx.r27.s64 = 48;
	// li r18,2
	ctx.r18.s64 = 2;
loc_82B85A1C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r21,24
	cr6.compare<uint32_t>(ctx.r21.u32, 24, xer);
	// blt cr6,0x82b85a2c
	if (cr6.lt) goto loc_82B85A2C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82B85A2C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b85ca4
	if (cr6.eq) goto loc_82B85CA4;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b85a58
	if (!cr6.eq) goto loc_82B85A58;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82db13f8
	ctx.lr = 0x82B85A58;
	sub_82DB13F8(ctx, base);
loc_82B85A58:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r21,24
	cr6.compare<uint32_t>(ctx.r21.u32, 24, xer);
	// blt cr6,0x82b85a68
	if (cr6.lt) goto loc_82B85A68;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82B85A68:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r30,84(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x82b6b738
	ctx.lr = 0x82B85A7C;
	sub_82B6B738(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82db29e0
	ctx.lr = 0x82B85A8C;
	sub_82DB29E0(ctx, base);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B85AAC;
	sub_8259CB28(ctx, base);
	// lbz r10,92(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ld r30,216(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// beq cr6,0x82b85ac8
	if (cr6.eq) goto loc_82B85AC8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B85AC4;
	sub_8387E8E0(ctx, base);
	// b 0x82b85c9c
	goto loc_82B85C9C;
loc_82B85AC8:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82b85ae0
	if (cr6.eq) goto loc_82B85AE0;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// beq cr6,0x82b85b44
	if (cr6.eq) goto loc_82B85B44;
loc_82B85AE0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r11,38
	ctx.r9.s64 = ctx.r11.s64 + 38;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// bl 0x8259cb28
	ctx.lr = 0x82B85B14;
	sub_8259CB28(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// ld r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// addi r6,r11,115
	ctx.r6.s64 = ctx.r11.s64 + 115;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r4,r5,r31
	PPC_STORE_U64(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u64);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r11,139
	ctx.r3.s64 = ctx.r11.s64 + 139;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r30,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u64);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
loc_82B85B44:
	// bl 0x82dd3a30
	ctx.lr = 0x82B85B48;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b85c74
	if (cr6.eq) goto loc_82B85C74;
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b85c74
	if (cr0.eq) goto loc_82B85C74;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b85c74
	if (cr6.eq) goto loc_82B85C74;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// ble cr6,0x82b85d34
	if (!cr6.gt) goto loc_82B85D34;
loc_82B85B80:
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b85c58
	if (!cr6.eq) goto loc_82B85C58;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82b85bb8
	if (cr6.eq) goto loc_82B85BB8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b85bb8
	if (cr6.eq) goto loc_82B85BB8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b85c58
	if (!cr6.eq) goto loc_82B85C58;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// beq cr6,0x82b85c58
	if (cr6.eq) goto loc_82B85C58;
loc_82B85BB8:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// bl 0x8259cb28
	ctx.lr = 0x82B85BD4;
	sub_8259CB28(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,76(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r10,r11,38
	ctx.r10.s64 = ctx.r11.s64 + 38;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r5,r6,r27
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r27.s32);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b85d40
	if (!cr6.gt) goto loc_82B85D40;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r10,115
	ctx.r10.s64 = ctx.r10.s64 + 115;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// stdx r8,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u64);
	// lwz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r5,r6,r27
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r27.s32);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b85d4c
	if (!cr6.gt) goto loc_82B85D4C;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r10,139
	ctx.r10.s64 = ctx.r10.s64 + 139;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// stdx r8,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u64);
	// lwz r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
loc_82B85C58:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b85b80
	if (cr6.gt) goto loc_82B85B80;
loc_82B85C74:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b85c90
	if (cr6.lt) goto loc_82B85C90;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B85C90;
	sub_825952B8(ctx, base);
loc_82B85C90:
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
loc_82B85C9C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b6a860
	ctx.lr = 0x82B85CA4;
	sub_82B6A860(ctx, base);
loc_82B85CA4:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplwi cr6,r21,24
	cr6.compare<uint32_t>(ctx.r21.u32, 24, xer);
	// blt cr6,0x82b85a1c
	if (cr6.lt) goto loc_82B85A1C;
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
	ctx.lr = 0x82B85CC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r3.u8);
	// lwz r8,12(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b85cdc
	if (cr6.eq) goto loc_82B85CDC;
	// stw r24,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r24.u32);
loc_82B85CDC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B85CF4;
	sub_82D20F50(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B85CFC;
	sub_82D33C10(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x82b85d6c
	if (!cr6.gt) goto loc_82B85D6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B85D10;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B85D28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82B85D34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B85D40;
	sub_831CC188(ctx, base);
loc_82B85D40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B85D4C;
	sub_831CC188(ctx, base);
loc_82B85D4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B85D58;
	sub_831CC188(ctx, base);
loc_82B85D58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B85D6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B85D6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B85D78"))) PPC_WEAK_FUNC(sub_82B85D78);
PPC_FUNC_IMPL(__imp__sub_82B85D78) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B85D90;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B85D94;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B85D98;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b85dc8
	if (cr6.eq) goto loc_82B85DC8;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85dc0
	if (cr6.eq) goto loc_82B85DC0;
	// bl 0x82d49a78
	ctx.lr = 0x82B85DC0;
	sub_82D49A78(ctx, base);
loc_82B85DC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
loc_82B85DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbbec8
	ctx.lr = 0x82B85DD0;
	sub_82CBBEC8(ctx, base);
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

__attribute__((alias("__imp__sub_82B85DE4"))) PPC_WEAK_FUNC(sub_82B85DE4);
PPC_FUNC_IMPL(__imp__sub_82B85DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85DE8"))) PPC_WEAK_FUNC(sub_82B85DE8);
PPC_FUNC_IMPL(__imp__sub_82B85DE8) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85ea8
	if (cr6.eq) goto loc_82B85EA8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82b85e54
	if (!cr6.eq) goto loc_82B85E54;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B85E18;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B85E28;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B85E38;
	sub_82D19788(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r5,990
	ctx.r5.s64 = 64880640;
	// ori r5,r5,125
	ctx.r5.u64 = ctx.r5.u64 | 125;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82b85ea0
	goto loc_82B85EA0;
loc_82B85E54:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82b85ea8
	if (!cr6.eq) goto loc_82B85EA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B85E68;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B85E78;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B85E88;
	sub_82D19788(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r11,22097
	ctx.r5.s64 = ctx.r11.s64 + 22097;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B85EA0:
	// li r4,4
	ctx.r4.s64 = 4;
	// bctrl 
	ctx.lr = 0x82B85EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B85EA8:
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

__attribute__((alias("__imp__sub_82B85EBC"))) PPC_WEAK_FUNC(sub_82B85EBC);
PPC_FUNC_IMPL(__imp__sub_82B85EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B85EC0"))) PPC_WEAK_FUNC(sub_82B85EC0);
PPC_FUNC_IMPL(__imp__sub_82B85EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B85EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,24176
	ctx.r30.s64 = ctx.r11.s64 + 24176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r30,-76
	ctx.r6.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B85EF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b85fa4
	if (cr6.eq) goto loc_82B85FA4;
	// addi r6,r30,-60
	ctx.r6.s64 = ctx.r30.s64 + -60;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B85F14;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b85fa4
	if (cr6.eq) goto loc_82B85FA4;
	// addi r6,r30,-44
	ctx.r6.s64 = ctx.r30.s64 + -44;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B85F34;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b85fa4
	if (cr6.eq) goto loc_82B85FA4;
	// addi r6,r30,-24
	ctx.r6.s64 = ctx.r30.s64 + -24;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B85F54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b85fa4
	if (cr6.eq) goto loc_82B85FA4;
	// addi r6,r30,-16
	ctx.r6.s64 = ctx.r30.s64 + -16;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B85F74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b85fc8
	if (!cr6.eq) goto loc_82B85FC8;
	// bl 0x831156e8
	ctx.lr = 0x82B85F80;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 393216;
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x82b85fc8
	if (!cr6.lt) goto loc_82B85FC8;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x82b85fc8
	goto loc_82B85FC8;
loc_82B85FA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b85fb8
	if (cr6.lt) goto loc_82B85FB8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b85fbc
	goto loc_82B85FBC;
loc_82B85FB8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82B85FBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B85FC8;
	sub_82D20DA8(ctx, base);
loc_82B85FC8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B85FE0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b85ff0
	if (!cr6.eq) goto loc_82B85FF0;
	// bl 0x82d14ce8
	ctx.lr = 0x82B85FEC;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82B85FF0;
	sub_82D130B8(ctx, base);
loc_82B85FF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B85FF8"))) PPC_WEAK_FUNC(sub_82B85FF8);
PPC_FUNC_IMPL(__imp__sub_82B85FF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bne cr6,0x82b86038
	if (!cr6.eq) goto loc_82B86038;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82b86040
	goto loc_82B86040;
loc_82B86038:
	// bl 0x82e744c8
	ctx.lr = 0x82B8603C;
	sub_82E744C8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B86040:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86060
	if (cr6.eq) goto loc_82B86060;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82e74468
	ctx.lr = 0x82B86058;
	sub_82E74468(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82b86064
	goto loc_82B86064;
loc_82B86060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B86064:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86098
	if (cr6.eq) goto loc_82B86098;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r31,r4,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r4.s64;
	// beq cr6,0x82b86090
	if (cr6.eq) goto loc_82B86090;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B86090;
	sub_825952B8(ctx, base);
loc_82B86090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82b860b4
	goto loc_82B860B4;
loc_82B86098:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b860b0
	if (cr6.eq) goto loc_82B860B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B860B0;
	sub_825952B8(ctx, base);
loc_82B860B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B860B4:
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

__attribute__((alias("__imp__sub_82B860CC"))) PPC_WEAK_FUNC(sub_82B860CC);
PPC_FUNC_IMPL(__imp__sub_82B860CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B860D0"))) PPC_WEAK_FUNC(sub_82B860D0);
PPC_FUNC_IMPL(__imp__sub_82B860D0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,24464
	ctx.r9.s64 = ctx.r11.s64 + 24464;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b86118
	if (cr6.eq) goto loc_82B86118;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B86118;
	sub_825952B8(ctx, base);
loc_82B86118:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B86130;
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

__attribute__((alias("__imp__sub_82B86144"))) PPC_WEAK_FUNC(sub_82B86144);
PPC_FUNC_IMPL(__imp__sub_82B86144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B86148"))) PPC_WEAK_FUNC(sub_82B86148);
PPC_FUNC_IMPL(__imp__sub_82B86148) {
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
	// bl 0x82b860d0
	ctx.lr = 0x82B86168;
	sub_82B860D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86180
	if (cr6.eq) goto loc_82B86180;
	// bl 0x82416268
	ctx.lr = 0x82B8617C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B86180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B86198"))) PPC_WEAK_FUNC(sub_82B86198);
PPC_FUNC_IMPL(__imp__sub_82B86198) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r9,24028
	ctx.r4.s64 = ctx.r9.s64 + 24028;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B861DC;
	sub_8259CC28(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B861F8;
	sub_82CBC620(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b86218
	if (cr6.lt) goto loc_82B86218;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B86218;
	sub_825952B8(ctx, base);
loc_82B86218:
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

__attribute__((alias("__imp__sub_82B86230"))) PPC_WEAK_FUNC(sub_82B86230);
PPC_FUNC_IMPL(__imp__sub_82B86230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B86238;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B86244;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86360
	if (cr6.eq) goto loc_82B86360;
	// bl 0x82dad2e0
	ctx.lr = 0x82B86254;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86360
	if (cr6.eq) goto loc_82B86360;
	// bl 0x831156e8
	ctx.lr = 0x82B86264;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x830ff290
	ctx.lr = 0x82B8626C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B86270;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82b862dc
	if (!cr6.eq) goto loc_82B862DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82B86280;
	sub_82B85FF8(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82b86360
	if (cr6.eq) goto loc_82B86360;
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,24368
	ctx.r11.s64 = ctx.r11.s64 + 24368;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82B862A4;
	sub_837B0C10(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b862b8
	if (!cr6.eq) goto loc_82B862B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B862B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9e0
	ctx.lr = 0x82B862C0;
	sub_8312B9E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9e0
	ctx.lr = 0x82B862CC;
	sub_8312B9E0(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82b86348
	goto loc_82B86348;
loc_82B862DC:
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b862f0
	if (!cr6.eq) goto loc_82B862F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b862f4
	goto loc_82B862F4;
loc_82B862F0:
	// bl 0x82e744e0
	ctx.lr = 0x82B862F4;
	sub_82E744E0(ctx, base);
loc_82B862F4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86360
	if (cr6.eq) goto loc_82B86360;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b86360
	if (!cr6.eq) goto loc_82B86360;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,24368
	ctx.r4.s64 = ctx.r10.s64 + 24368;
	// bl 0x837b0c10
	ctx.lr = 0x82B86324;
	sub_837B0C10(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b86338
	if (!cr6.eq) goto loc_82B86338;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B86338:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9e0
	ctx.lr = 0x82B86340;
	sub_8312B9E0(ctx, base);
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82B86348:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc268
	ctx.lr = 0x82B86358;
	sub_82CBC268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B86360;
	sub_8387E8E0(ctx, base);
loc_82B86360:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B86368"))) PPC_WEAK_FUNC(sub_82B86368);
PPC_FUNC_IMPL(__imp__sub_82B86368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B86370;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,24760
	ctx.r8.s64 = ctx.r11.s64 + 24760;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-16652
	ctx.r6.s64 = ctx.r9.s64 + -16652;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// stw r6,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r6.u32);
	// bl 0x825c3358
	ctx.lr = 0x82B863A4;
	sub_825C3358(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r31,r30,216
	ctx.r31.s64 = ctx.r30.s64 + 216;
	// addi r4,r5,-9704
	ctx.r4.s64 = ctx.r5.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r4.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B863BC;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b863e8
	if (cr6.eq) goto loc_82B863E8;
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
	ctx.lr = 0x82B863E4;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82B863E8:
	// addi r28,r30,216
	ctx.r28.s64 = ctx.r30.s64 + 216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// addi r27,r11,-24712
	ctx.r27.s64 = ctx.r11.s64 + -24712;
loc_82B863FC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r27,-20(r28)
	ea = -20 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r28.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86434
	if (cr6.eq) goto loc_82B86434;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b86434
	if (cr6.eq) goto loc_82B86434;
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
	ctx.lr = 0x82B86430;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82B86434:
	// stb r29,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r29.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8645c
	if (cr6.eq) goto loc_82B8645C;
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
	ctx.lr = 0x82B86458;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82B8645C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge 0x82b863fc
	if (!cr0.lt) goto loc_82B863FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,156
	ctx.r31.s64 = ctx.r30.s64 + 156;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B8647C;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b864a4
	if (cr6.eq) goto loc_82B864A4;
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
	ctx.lr = 0x82B864A0;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82B864A4:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r31,r30,116
	ctx.r31.s64 = ctx.r30.s64 + 116;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b864c8
	if (cr6.lt) goto loc_82B864C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B864C8;
	sub_825952B8(ctx, base);
loc_82B864C8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x82b860d0
	ctx.lr = 0x82B864E0;
	sub_82B860D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B864E8"))) PPC_WEAK_FUNC(sub_82B864E8);
PPC_FUNC_IMPL(__imp__sub_82B864E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B864F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86510
	if (cr6.eq) goto loc_82B86510;
	// stw r25,668(r4)
	PPC_STORE_U32(ctx.r4.u32 + 668, ctx.r25.u32);
loc_82B86510:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r28,r11,24016
	ctx.r28.s64 = ctx.r11.s64 + 24016;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// bl 0x8259cc28
	ctx.lr = 0x82B8653C;
	sub_8259CC28(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8655C;
	sub_82CBC620(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b86578
	if (cr6.lt) goto loc_82B86578;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B86578;
	sub_825952B8(ctx, base);
loc_82B86578:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82B865A0;
	sub_8259CC28(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B865BC;
	sub_82CBC620(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b865d8
	if (cr6.lt) goto loc_82B865D8;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B865D8;
	sub_825952B8(ctx, base);
loc_82B865D8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82B86600;
	sub_8259CC28(ctx, base);
	// lis r7,108
	ctx.r7.s64 = 7077888;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,140
	ctx.r7.u64 = ctx.r7.u64 | 140;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B86620;
	sub_82CBC620(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8663c
	if (cr6.lt) goto loc_82B8663C;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B8663C;
	sub_825952B8(ctx, base);
loc_82B8663C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82b86198
	ctx.lr = 0x82B86654;
	sub_82B86198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8665C"))) PPC_WEAK_FUNC(sub_82B8665C);
PPC_FUNC_IMPL(__imp__sub_82B8665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B86660"))) PPC_WEAK_FUNC(sub_82B86660);
PPC_FUNC_IMPL(__imp__sub_82B86660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B86668;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b866c8
	if (cr6.eq) goto loc_82B866C8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B86688;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B86698;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B866A8;
	sub_82D19788(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r5,990
	ctx.r5.s64 = 64880640;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,125
	ctx.r5.u64 = ctx.r5.u64 | 125;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B866C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B866C8:
	// bl 0x831156e8
	ctx.lr = 0x82B866CC;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B866D0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B866D4;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b868fc
	if (cr6.eq) goto loc_82B868FC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,13456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13456);
	// bl 0x83815a48
	ctx.lr = 0x82B866F8;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86904
	if (cr6.eq) goto loc_82B86904;
	// bl 0x82d4b8e0
	ctx.lr = 0x82B86704;
	sub_82D4B8E0(ctx, base);
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// bl 0x82d2bbb8
	ctx.lr = 0x82B8670C;
	sub_82D2BBB8(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,24092
	ctx.r30.s64 = ctx.r11.s64 + 24092;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B86730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-2049
	ctx.r4.s64 = -2049;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x83545640
	ctx.lr = 0x82B8673C;
	sub_83545640(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b86750
	if (!cr6.eq) goto loc_82B86750;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B86750:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8675C;
	sub_837B0C10(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,140
	ctx.r5.u64 = ctx.r5.u64 | 140;
	// bl 0x82a69a28
	ctx.lr = 0x82B86770;
	sub_82A69A28(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b86784
	if (!cr6.eq) goto loc_82B86784;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B86784:
	// addi r4,r30,-2058
	ctx.r4.s64 = ctx.r30.s64 + -2058;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B86790;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B867A0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B867B0;
	sub_82A69AD0(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b867c4
	if (!cr6.eq) goto loc_82B867C4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B867C4:
	// addi r4,r30,-2057
	ctx.r4.s64 = ctx.r30.s64 + -2057;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B867D0;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B867E0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B867F0;
	sub_82A69AD0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B867F4;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86860
	if (cr6.eq) goto loc_82B86860;
	// bl 0x831156e8
	ctx.lr = 0x82B86804;
	sub_831156E8(ctx, base);
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312b9d0
	ctx.lr = 0x82B86814;
	sub_8312B9D0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B86820;
	sub_837B0C10(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b86834
	if (!cr6.eq) goto loc_82B86834;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B86834:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312b9e0
	ctx.lr = 0x82B8683C;
	sub_8312B9E0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc268
	ctx.lr = 0x82B86854;
	sub_82CBC268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8685C;
	sub_8387E8E0(ctx, base);
	// b 0x82b868a0
	goto loc_82B868A0;
loc_82B86860:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b86874
	if (!cr6.eq) goto loc_82B86874;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B86874:
	// addi r4,r30,-2026
	ctx.r4.s64 = ctx.r30.s64 + -2026;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B86880;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B86890;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B868A0;
	sub_82A69AD0(ctx, base);
loc_82B868A0:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b868b4
	if (!cr6.eq) goto loc_82B868B4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B868B4:
	// addi r4,r30,-2025
	ctx.r4.s64 = ctx.r30.s64 + -2025;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B868C0;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B868D0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B868E0;
	sub_82A69AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b86230
	ctx.lr = 0x82B868E8;
	sub_82B86230(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c3a428
	ctx.lr = 0x82B868F0;
	sub_82C3A428(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// bl 0x82d474c0
	ctx.lr = 0x82B868FC;
	sub_82D474C0(ctx, base);
loc_82B868FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde30
	ctx.lr = 0x82B86904;
	sub_82CBDE30(ctx, base);
loc_82B86904:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B86910"))) PPC_WEAK_FUNC(sub_82B86910);
PPC_FUNC_IMPL(__imp__sub_82B86910) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B86928;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B8692C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B86930;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b8697c
	if (cr6.eq) goto loc_82B8697C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b86230
	ctx.lr = 0x82B86950;
	sub_82B86230(ctx, base);
	// bl 0x82d478c8
	ctx.lr = 0x82B86954;
	sub_82D478C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8697c
	if (cr6.eq) goto loc_82B8697C;
	// lbz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8697c
	if (!cr6.eq) goto loc_82B8697C;
	// bl 0x82dad2e0
	ctx.lr = 0x82B86970;
	sub_82DAD2E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82dafab0
	ctx.lr = 0x82B8697C;
	sub_82DAFAB0(ctx, base);
loc_82B8697C:
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

__attribute__((alias("__imp__sub_82B86990"))) PPC_WEAK_FUNC(sub_82B86990);
PPC_FUNC_IMPL(__imp__sub_82B86990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B86998;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19e80
	ctx.lr = 0x82B869B0;
	sub_82D19E80(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,88
	ctx.r27.s64 = 88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b86e2c
	if (cr0.eq) goto loc_82B86E2C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B869CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19e80
	ctx.lr = 0x82B869D4;
	sub_82D19E80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82b86ba4
	if (!cr6.gt) goto loc_82B86BA4;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// blt cr6,0x82b86a0c
	if (cr6.lt) goto loc_82B86A0C;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82b86a10
	goto loc_82B86A10;
loc_82B86A0C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82B86A10:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82B86A1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b86a28
	if (!cr6.eq) goto loc_82B86A28;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B86A28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// bl 0x82d19e80
	ctx.lr = 0x82B86A38;
	sub_82D19E80(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b869cc
	if (cr6.lt) goto loc_82B869CC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b86e2c
	if (cr6.eq) goto loc_82B86E2C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// addi r31,r25,28
	ctx.r31.s64 = ctx.r25.s64 + 28;
	// addi r30,r11,24348
	ctx.r30.s64 = ctx.r11.s64 + 24348;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r6,r30,-156
	ctx.r6.s64 = ctx.r30.s64 + -156;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86A7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b86ca4
	if (cr6.eq) goto loc_82B86CA4;
	// addi r6,r30,-140
	ctx.r6.s64 = ctx.r30.s64 + -140;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86A9C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b86ca4
	if (cr6.eq) goto loc_82B86CA4;
	// addi r6,r30,-120
	ctx.r6.s64 = ctx.r30.s64 + -120;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86ABC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b86ca4
	if (cr6.eq) goto loc_82B86CA4;
	// addi r6,r30,-112
	ctx.r6.s64 = ctx.r30.s64 + -112;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86ADC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b86ca4
	if (cr6.eq) goto loc_82B86CA4;
	// addi r6,r30,-96
	ctx.r6.s64 = ctx.r30.s64 + -96;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86AFC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b86ca4
	if (cr6.eq) goto loc_82B86CA4;
	// addi r6,r30,-80
	ctx.r6.s64 = ctx.r30.s64 + -80;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86B1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b86ca4
	if (cr6.eq) goto loc_82B86CA4;
	// addi r6,r30,-48
	ctx.r6.s64 = ctx.r30.s64 + -48;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86B3C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b86bb0
	if (!cr6.eq) goto loc_82B86BB0;
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 | 52;
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x82B86B5C;
	sub_835977D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B86B60;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B86B64;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B86B68;
	sub_830FF988(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b86b84
	if (cr6.eq) goto loc_82B86B84;
	// bl 0x82c3a3c0
	ctx.lr = 0x82B86B84;
	sub_82C3A3C0(ctx, base);
loc_82B86B84:
	// bl 0x831156e8
	ctx.lr = 0x82B86B88;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// addi r10,r10,-26044
	ctx.r10.s64 = ctx.r10.s64 + -26044;
	// lwz r11,3836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3836);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3836, ctx.r9.u32);
	// b 0x82b86c68
	goto loc_82B86C68;
loc_82B86BA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B86BB0;
	sub_831CC188(ctx, base);
loc_82B86BB0:
	// addi r6,r30,-32
	ctx.r6.s64 = ctx.r30.s64 + -32;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86BC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b86be8
	if (!cr6.eq) goto loc_82B86BE8;
	// bl 0x831021a0
	ctx.lr = 0x82B86BD4;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x83102a08
	ctx.lr = 0x82B86BE4;
	sub_83102A08(ctx, base);
	// b 0x82b86c68
	goto loc_82B86C68;
loc_82B86BE8:
	// addi r6,r30,-16
	ctx.r6.s64 = ctx.r30.s64 + -16;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86C00;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b86c30
	if (!cr6.eq) goto loc_82B86C30;
	// bl 0x831156e8
	ctx.lr = 0x82B86C0C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 393216;
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x82b86c68
	if (!cr6.lt) goto loc_82B86C68;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x82b86c68
	goto loc_82B86C68;
loc_82B86C30:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86C48;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b86c68
	if (!cr6.eq) goto loc_82B86C68;
	// lwz r10,152(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82B86C68;
	sub_82D17D80(ctx, base);
loc_82B86C68:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b86c8c
	if (cr6.lt) goto loc_82B86C8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B86C84;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B86C8C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B86C9C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B86CA4:
	// bl 0x831156e8
	ctx.lr = 0x82B86CA8;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B86CAC;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B86CB0;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b86d30
	if (cr6.eq) goto loc_82B86D30;
	// bl 0x831156e8
	ctx.lr = 0x82B86CCC;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B86CD0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B86CD4;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b86cf0
	if (cr6.eq) goto loc_82B86CF0;
	// bl 0x82c3a3c0
	ctx.lr = 0x82B86CF0;
	sub_82C3A3C0(ctx, base);
loc_82B86CF0:
	// bl 0x82d47978
	ctx.lr = 0x82B86CF4;
	sub_82D47978(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B86CF8;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86d30
	if (cr6.eq) goto loc_82B86D30;
	// bl 0x831156e8
	ctx.lr = 0x82B86D08;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B86D10;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B86D24;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B86D30;
	sub_8312B9C8(ctx, base);
loc_82B86D30:
	// lbz r11,144(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b86e2c
	if (!cr6.eq) goto loc_82B86E2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,144(r26)
	PPC_STORE_U8(ctx.r26.u32 + 144, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B86D48;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B86D4C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B86D50;
	sub_830FF988(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b86d90
	if (!cr6.eq) goto loc_82B86D90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19720
	ctx.lr = 0x82B86D74;
	sub_82D19720(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b86d88
	if (cr6.lt) goto loc_82B86D88;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b86de4
	goto loc_82B86DE4;
loc_82B86D88:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x82b86de4
	goto loc_82B86DE4;
loc_82B86D90:
	// bl 0x831156e8
	ctx.lr = 0x82B86D94;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86dcc
	if (cr6.eq) goto loc_82B86DCC;
	// bl 0x831156e8
	ctx.lr = 0x82B86DA4;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B86DAC;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B86DC0;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B86DCC;
	sub_8312B9C8(ctx, base);
loc_82B86DCC:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b86de0
	if (cr6.lt) goto loc_82B86DE0;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82b86de4
	goto loc_82B86DE4;
loc_82B86DE0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82B86DE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B86DF0;
	sub_82D20DA8(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82B86DF4;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// bl 0x83102a08
	ctx.lr = 0x82B86E04;
	sub_83102A08(ctx, base);
	// addi r6,r30,-68
	ctx.r6.s64 = ctx.r30.s64 + -68;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B86E1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b86e2c
	if (cr6.eq) goto loc_82B86E2C;
	// bl 0x82d14ce8
	ctx.lr = 0x82B86E28;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82B86E2C;
	sub_82D130B8(ctx, base);
loc_82B86E2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B86E34"))) PPC_WEAK_FUNC(sub_82B86E34);
PPC_FUNC_IMPL(__imp__sub_82B86E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B86E38"))) PPC_WEAK_FUNC(sub_82B86E38);
PPC_FUNC_IMPL(__imp__sub_82B86E38) {
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
	// bl 0x82b86368
	ctx.lr = 0x82B86E58;
	sub_82B86368(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b86e70
	if (cr6.eq) goto loc_82B86E70;
	// bl 0x82416268
	ctx.lr = 0x82B86E6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B86E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B86E88"))) PPC_WEAK_FUNC(sub_82B86E88);
PPC_FUNC_IMPL(__imp__sub_82B86E88) {
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
	// lbz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-20581
	xer.ca = ctx.r11.u32 > 20580;
	ctx.r11.s64 = ctx.r11.s64 + -20581;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b86f58
	if (cr0.eq) goto loc_82B86F58;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b86f74
	if (!cr6.eq) goto loc_82B86F74;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86f74
	if (cr6.eq) goto loc_82B86F74;
	// bl 0x82cbc718
	ctx.lr = 0x82B86ECC;
	sub_82CBC718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b86f40
	if (!cr6.eq) goto loc_82B86F40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cbc710
	ctx.lr = 0x82B86EE4;
	sub_82CBC710(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86f74
	if (cr6.eq) goto loc_82B86F74;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B86EFC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B86F0C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B86F1C;
	sub_82D19788(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,22097
	ctx.r5.s64 = ctx.r11.s64 + 22097;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B86F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82b86f74
	goto loc_82B86F74;
loc_82B86F40:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbc710
	ctx.lr = 0x82B86F48;
	sub_82CBC710(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b85de8
	ctx.lr = 0x82B86F54;
	sub_82B85DE8(ctx, base);
	// b 0x82b86f74
	goto loc_82B86F74;
loc_82B86F58:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86f74
	if (cr6.eq) goto loc_82B86F74;
	// bl 0x82cbce48
	ctx.lr = 0x82B86F68;
	sub_82CBCE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b86990
	ctx.lr = 0x82B86F74;
	sub_82B86990(ctx, base);
loc_82B86F74:
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

__attribute__((alias("__imp__sub_82B86F90"))) PPC_WEAK_FUNC(sub_82B86F90);
PPC_FUNC_IMPL(__imp__sub_82B86F90) {
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
	// bl 0x82cbc0b8
	ctx.lr = 0x82B86FAC;
	sub_82CBC0B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,24760
	ctx.r9.s64 = ctx.r11.s64 + 24760;
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
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// addi r3,r5,-24692
	ctx.r3.s64 = ctx.r5.s64 + -24692;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// addi r10,r4,-22152
	ctx.r10.s64 = ctx.r4.s64 + -22152;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r7,r9,-22844
	ctx.r7.s64 = ctx.r9.s64 + -22844;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// addi r6,r8,-22864
	ctx.r6.s64 = ctx.r8.s64 + -22864;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r6,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r6.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x82B87084;
	sub_825AB6C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b4da8
	ctx.lr = 0x82B8708C;
	sub_825B4DA8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B87090;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B87094;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B87098;
	sub_830FF988(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r11,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b870c4
	if (cr6.eq) goto loc_82B870C4;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,13460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13460);
	// bl 0x82d20ae0
	ctx.lr = 0x82B870C0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B870C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B870DC"))) PPC_WEAK_FUNC(sub_82B870DC);
PPC_FUNC_IMPL(__imp__sub_82B870DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B870E0"))) PPC_WEAK_FUNC(sub_82B870E0);
PPC_FUNC_IMPL(__imp__sub_82B870E0) {
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
	// blt cr6,0x82b87108
	if (cr6.lt) goto loc_82B87108;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b8710c
	goto loc_82B8710C;
loc_82B87108:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8710C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,268
	ctx.r4.s64 = 268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B87128;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87144
	if (cr6.eq) goto loc_82B87144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b86f90
	ctx.lr = 0x82B8713C;
	sub_82B86F90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b87148
	if (!cr6.eq) goto loc_82B87148;
loc_82B87144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B87148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87160"))) PPC_WEAK_FUNC(sub_82B87160);
PPC_FUNC_IMPL(__imp__sub_82B87160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B87168;
	__savegprlr_23(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r26,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r26.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B87180;
	sub_8308E078(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B8718C;
	sub_8311E3D0(ctx, base);
	// ld r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 212);
	// li r27,1
	ctx.r27.s64 = 1;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82b871b0
	if (!cr6.eq) goto loc_82B871B0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r26,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r26.u32);
	// b 0x82b871b4
	goto loc_82B871B4;
loc_82B871B0:
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
loc_82B871B4:
	// lbz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 160);
	// addi r24,r28,156
	ctx.r24.s64 = ctx.r28.s64 + 156;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b871cc
	if (!cr6.eq) goto loc_82B871CC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x82B871CC;
	sub_825AB6C8(ctx, base);
loc_82B871CC:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b871e8
	if (!cr6.eq) goto loc_82B871E8;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r10.u32);
loc_82B871E8:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,5180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82b8724c
	if (!cr6.eq) goto loc_82B8724C;
	// bl 0x82cbd568
	ctx.lr = 0x82B87204;
	sub_82CBD568(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B87210;
	sub_82CBD568(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B8721C;
	sub_82CBD568(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B87228;
	sub_82CBD568(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B87234;
	sub_82CBD568(ctx, base);
	// bl 0x82cbdbc8
	ctx.lr = 0x82B87238;
	sub_82CBDBC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87250
	if (cr6.eq) goto loc_82B87250;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8724C:
	// bl 0x82cbd568
	ctx.lr = 0x82B87250;
	sub_82CBD568(ctx, base);
loc_82B87250:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87260
	if (cr6.eq) goto loc_82B87260;
	// stw r26,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r26.u32);
loc_82B87260:
	// bl 0x830ff290
	ctx.lr = 0x82B87264;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B87268;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// addi r29,r10,23968
	ctx.r29.s64 = ctx.r10.s64 + 23968;
	// bgt cr6,0x82b87510
	if (cr6.gt) goto loc_82B87510;
	// lis r12,-32072
	ctx.r12.s64 = -2101870592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29340
	ctx.r12.s64 = ctx.r12.s64 + 29340;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B872E8;
	case 1:
		goto loc_82B872E8;
	case 2:
		goto loc_82B872E8;
	case 3:
		goto loc_82B872E8;
	case 4:
		goto loc_82B872E8;
	case 5:
		goto loc_82B872E8;
	case 6:
		goto loc_82B87510;
	case 7:
		goto loc_82B87694;
	case 8:
		goto loc_82B87450;
	case 9:
		goto loc_82B87450;
	case 10:
		goto loc_82B87450;
	case 11:
		goto loc_82B87450;
	case 12:
		goto loc_82B87450;
	case 13:
		goto loc_82B8743C;
	case 14:
		goto loc_82B87510;
	case 15:
		goto loc_82B87510;
	case 16:
		goto loc_82B87510;
	case 17:
		goto loc_82B87510;
	case 18:
		goto loc_82B87390;
	default:
		return;
	}
	// lwz r21,29416(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29416);
	// lwz r21,29416(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29416);
	// lwz r21,29416(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29416);
	// lwz r21,29416(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29416);
	// lwz r21,29416(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29416);
	// lwz r21,29416(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29416);
	// lwz r21,29968(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29968);
	// lwz r21,30356(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30356);
	// lwz r21,29776(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29776);
	// lwz r21,29776(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29776);
	// lwz r21,29776(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29776);
	// lwz r21,29776(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29776);
	// lwz r21,29776(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29776);
	// lwz r21,29756(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29756);
	// lwz r21,29968(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29968);
	// lwz r21,29968(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29968);
	// lwz r21,29968(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29968);
	// lwz r21,29968(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29968);
	// lwz r21,29584(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29584);
loc_82B872E8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b872f8
	if (cr6.eq) goto loc_82B872F8;
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
loc_82B872F8:
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x837b0c10
	ctx.lr = 0x82B87304;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87324;
	sub_82CBC620(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8732C;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x837b0c10
	ctx.lr = 0x82B87338;
	sub_837B0C10(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87354;
	sub_82CBC620(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8735C;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82B87368;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87384;
	sub_82CBC620(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8738C;
	sub_8387E8E0(ctx, base);
	// b 0x82b87694
	goto loc_82B87694;
loc_82B87390:
	// bl 0x831156e8
	ctx.lr = 0x82B87394;
	sub_831156E8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b873a4
	if (cr6.eq) goto loc_82B873A4;
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
loc_82B873A4:
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82B873B0;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B873D0;
	sub_82CBC620(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x82B873D8;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-80
	ctx.r4.s64 = ctx.r29.s64 + -80;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x837b0c10
	ctx.lr = 0x82B873E4;
	sub_837B0C10(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87400;
	sub_82CBC620(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8387e8e0
	ctx.lr = 0x82B87408;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82B87414;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87430;
	sub_82CBC620(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x82B87438;
	sub_8387E8E0(ctx, base);
	// b 0x82b87694
	goto loc_82B87694;
loc_82B8743C:
	// bl 0x830ff290
	ctx.lr = 0x82B87440;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B87444;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87464
	if (cr6.eq) goto loc_82B87464;
loc_82B87450:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b864e8
	ctx.lr = 0x82B87460;
	sub_82B864E8(ctx, base);
	// b 0x82b87694
	goto loc_82B87694;
loc_82B87464:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87474
	if (cr6.eq) goto loc_82B87474;
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
loc_82B87474:
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x837b0c10
	ctx.lr = 0x82B87480;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B874A0;
	sub_82CBC620(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x82B874A8;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x837b0c10
	ctx.lr = 0x82B874B4;
	sub_837B0C10(ctx, base);
	// lis r7,108
	ctx.r7.s64 = 7077888;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,140
	ctx.r7.u64 = ctx.r7.u64 | 140;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B874D4;
	sub_82CBC620(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x82B874DC;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x837b0c10
	ctx.lr = 0x82B874E8;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87504;
	sub_82CBC620(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8750C;
	sub_8387E8E0(ctx, base);
	// b 0x82b87694
	goto loc_82B87694;
loc_82B87510:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87520
	if (cr6.eq) goto loc_82B87520;
	// stw r23,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r23.u32);
loc_82B87520:
	// addi r4,r29,-220
	ctx.r4.s64 = ctx.r29.s64 + -220;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82B8752C;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8754C;
	sub_82CBC620(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b87568
	if (cr6.lt) goto loc_82B87568;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82B87568;
	sub_825952B8(ctx, base);
loc_82B87568:
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// addi r4,r29,-204
	ctx.r4.s64 = ctx.r29.s64 + -204;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B87580;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8759C;
	sub_82CBC620(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b875b8
	if (cr6.lt) goto loc_82B875B8;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82B875B8;
	sub_825952B8(ctx, base);
loc_82B875B8:
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// addi r4,r29,-188
	ctx.r4.s64 = ctx.r29.s64 + -188;
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r26,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r26.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B875D0;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B875EC;
	sub_82CBC620(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b87608
	if (cr6.lt) goto loc_82B87608;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B87608;
	sub_825952B8(ctx, base);
loc_82B87608:
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// addi r4,r29,-172
	ctx.r4.s64 = ctx.r29.s64 + -172;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r26.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82B87620;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8763C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8387e8e0
	ctx.lr = 0x82B87644;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B87650;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8766C;
	sub_82CBC620(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b87688
	if (cr6.lt) goto loc_82B87688;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B87688;
	sub_825952B8(ctx, base);
loc_82B87688:
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
loc_82B87694:
	// lbz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b876a8
	if (!cr6.eq) goto loc_82B876A8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x82B876A8;
	sub_825AB6C8(ctx, base);
loc_82B876A8:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b876c4
	if (!cr6.eq) goto loc_82B876C4;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r10.u32);
loc_82B876C4:
	// lwz r27,12(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lbz r11,5815(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5815);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b876e0
	if (cr6.eq) goto loc_82B876E0;
	// lwz r11,5180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82b87730
	if (!cr6.lt) goto loc_82B87730;
loc_82B876E0:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B876FC;
	sub_8259CC28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B87708;
	sub_82CBCDC8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b87724
	if (cr6.lt) goto loc_82B87724;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B87724;
	sub_825952B8(ctx, base);
loc_82B87724:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82B87730:
	// lbz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 240);
	// addi r30,r28,236
	ctx.r30.s64 = ctx.r28.s64 + 236;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b87748
	if (!cr6.eq) goto loc_82B87748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b4da8
	ctx.lr = 0x82B87748;
	sub_825B4DA8(ctx, base);
loc_82B87748:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b87764
	if (!cr6.eq) goto loc_82B87764;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_82B87764:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a225d0
	ctx.lr = 0x82B8776C;
	sub_82A225D0(ctx, base);
	// lwz r11,5180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82b877ac
	if (!cr6.lt) goto loc_82B877AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82B87784;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B87790;
	sub_82CBCDC8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b877ac
	if (cr6.lt) goto loc_82B877AC;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82B877AC;
	sub_825952B8(ctx, base);
loc_82B877AC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b877bc
	if (cr6.eq) goto loc_82B877BC;
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
loc_82B877BC:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b877cc
	if (cr6.eq) goto loc_82B877CC;
	// stw r26,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r26.u32);
loc_82B877CC:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B877D4"))) PPC_WEAK_FUNC(sub_82B877D4);
PPC_FUNC_IMPL(__imp__sub_82B877D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B877D8"))) PPC_WEAK_FUNC(sub_82B877D8);
PPC_FUNC_IMPL(__imp__sub_82B877D8) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B877E8;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B877EC;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B877F0;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b8780c
	if (cr6.eq) goto loc_82B8780C;
	// bl 0x82c3a3c0
	ctx.lr = 0x82B8780C;
	sub_82C3A3C0(ctx, base);
loc_82B8780C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8781C"))) PPC_WEAK_FUNC(sub_82B8781C);
PPC_FUNC_IMPL(__imp__sub_82B8781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B87820"))) PPC_WEAK_FUNC(sub_82B87820);
PPC_FUNC_IMPL(__imp__sub_82B87820) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B87838;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B8783C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B87840;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b87884
	if (cr6.eq) goto loc_82B87884;
	// lbz r11,130(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b87884
	if (!cr6.eq) goto loc_82B87884;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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
	ctx.lr = 0x82B87884;
	sub_82D1EBF8(ctx, base);
loc_82B87884:
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

__attribute__((alias("__imp__sub_82B87898"))) PPC_WEAK_FUNC(sub_82B87898);
PPC_FUNC_IMPL(__imp__sub_82B87898) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B878B4;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B878B8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B878BC;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
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
	// beq cr6,0x82b878ec
	if (cr6.eq) goto loc_82B878EC;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b878e8
	if (cr6.eq) goto loc_82B878E8;
	// bl 0x82d49a78
	ctx.lr = 0x82B878E8;
	sub_82D49A78(ctx, base);
loc_82B878E8:
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_82B878EC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87900
	if (cr6.eq) goto loc_82B87900;
	// bl 0x82d29e18
	ctx.lr = 0x82B878FC;
	sub_82D29E18(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
loc_82B87900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbbec8
	ctx.lr = 0x82B87908;
	sub_82CBBEC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87920"))) PPC_WEAK_FUNC(sub_82B87920);
PPC_FUNC_IMPL(__imp__sub_82B87920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d199d0
	sub_82D199D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B87934"))) PPC_WEAK_FUNC(sub_82B87934);
PPC_FUNC_IMPL(__imp__sub_82B87934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87938"))) PPC_WEAK_FUNC(sub_82B87938);
PPC_FUNC_IMPL(__imp__sub_82B87938) {
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
	// beq cr6,0x82b87990
	if (cr6.eq) goto loc_82B87990;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87978
	if (cr6.eq) goto loc_82B87978;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B87970;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82b87984
	goto loc_82B87984;
loc_82B87978:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B87980;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B87984:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B87990;
	sub_82D19788(ctx, base);
loc_82B87990:
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

__attribute__((alias("__imp__sub_82B879A4"))) PPC_WEAK_FUNC(sub_82B879A4);
PPC_FUNC_IMPL(__imp__sub_82B879A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B879A8"))) PPC_WEAK_FUNC(sub_82B879A8);
PPC_FUNC_IMPL(__imp__sub_82B879A8) {
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
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2ed88
	ctx.lr = 0x82B879C8;
	sub_82D2ED88(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27408
	ctx.r9.s64 = ctx.r11.s64 + 27408;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82B879F0;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B87A00;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B87A18"))) PPC_WEAK_FUNC(sub_82B87A18);
PPC_FUNC_IMPL(__imp__sub_82B87A18) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27408
	ctx.r9.s64 = ctx.r11.s64 + 27408;
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
	// bl 0x82d2ede8
	ctx.lr = 0x82B87A50;
	sub_82D2EDE8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b87a68
	if (cr6.eq) goto loc_82B87A68;
	// bl 0x82416268
	ctx.lr = 0x82B87A64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B87A68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87A80"))) PPC_WEAK_FUNC(sub_82B87A80);
PPC_FUNC_IMPL(__imp__sub_82B87A80) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,20480
	ctx.r10.u64 = ctx.r10.u64 | 20480;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103068
	ctx.lr = 0x82B87AC0;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B87AD0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B87AE0;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B87AF4"))) PPC_WEAK_FUNC(sub_82B87AF4);
PPC_FUNC_IMPL(__imp__sub_82B87AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B87AF8"))) PPC_WEAK_FUNC(sub_82B87AF8);
PPC_FUNC_IMPL(__imp__sub_82B87AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B87B00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-20480
	xer.ca = ctx.r11.u32 > 20479;
	ctx.r11.s64 = ctx.r11.s64 + -20480;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b87b50
	if (cr0.eq) goto loc_82B87B50;
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(ctx.r11.u32, 101, xer);
	// bne cr6,0x82b87bd8
	if (!cr6.eq) goto loc_82B87BD8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x82cbce48
	ctx.lr = 0x82B87B30;
	sub_82CBCE48(ctx, base);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B87B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B87B50:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87bd8
	if (cr6.eq) goto loc_82B87BD8;
	// bl 0x82dad2e0
	ctx.lr = 0x82B87B60;
	sub_82DAD2E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82dafab0
	ctx.lr = 0x82B87B6C;
	sub_82DAFAB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B87B78;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87bb0
	if (cr6.eq) goto loc_82B87BB0;
	// bl 0x831156e8
	ctx.lr = 0x82B87B88;
	sub_831156E8(ctx, base);
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B87B90;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B87BA4;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B87BB0;
	sub_8312B9C8(ctx, base);
loc_82B87BB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b87938
	ctx.lr = 0x82B87BB8;
	sub_82B87938(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87bcc
	if (cr6.eq) goto loc_82B87BCC;
	// bl 0x82d29e18
	ctx.lr = 0x82B87BC8;
	sub_82D29E18(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
loc_82B87BCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B87BD8;
	sub_83102DB0(ctx, base);
loc_82B87BD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B87BE4"))) PPC_WEAK_FUNC(sub_82B87BE4);
PPC_FUNC_IMPL(__imp__sub_82B87BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B87BE8"))) PPC_WEAK_FUNC(sub_82B87BE8);
PPC_FUNC_IMPL(__imp__sub_82B87BE8) {
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
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B87C1C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87c50
	if (cr6.eq) goto loc_82B87C50;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b87c40
	if (cr6.lt) goto loc_82B87C40;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b879a8
	ctx.lr = 0x82B87C3C;
	sub_82B879A8(ctx, base);
	// b 0x82b87c54
	goto loc_82B87C54;
loc_82B87C40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b879a8
	ctx.lr = 0x82B87C4C;
	sub_82B879A8(ctx, base);
	// b 0x82b87c54
	goto loc_82B87C54;
loc_82B87C50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B87C54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87C6C"))) PPC_WEAK_FUNC(sub_82B87C6C);
PPC_FUNC_IMPL(__imp__sub_82B87C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B87C70"))) PPC_WEAK_FUNC(sub_82B87C70);
PPC_FUNC_IMPL(__imp__sub_82B87C70) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cbc0b8
	ctx.lr = 0x82B87C90;
	sub_82CBC0B8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stb r30,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r30.u8);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,27704
	ctx.r8.s64 = ctx.r10.s64 + 27704;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B87CC8;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B87CCC;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B87CD0;
	sub_830FF988(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b87cfc
	if (cr6.eq) goto loc_82B87CFC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,13640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13640);
	// bl 0x82d20ae0
	ctx.lr = 0x82B87CF8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B87CFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87D14"))) PPC_WEAK_FUNC(sub_82B87D14);
PPC_FUNC_IMPL(__imp__sub_82B87D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B87D18"))) PPC_WEAK_FUNC(sub_82B87D18);
PPC_FUNC_IMPL(__imp__sub_82B87D18) {
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
	// blt cr6,0x82b87d40
	if (cr6.lt) goto loc_82B87D40;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b87d44
	goto loc_82B87D44;
loc_82B87D40:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B87D44:
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
	ctx.lr = 0x82B87D60;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87d7c
	if (cr6.eq) goto loc_82B87D7C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b87c70
	ctx.lr = 0x82B87D74;
	sub_82B87C70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b87d80
	if (!cr6.eq) goto loc_82B87D80;
loc_82B87D7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B87D80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87D98"))) PPC_WEAK_FUNC(sub_82B87D98);
PPC_FUNC_IMPL(__imp__sub_82B87D98) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27704
	ctx.r9.s64 = ctx.r11.s64 + 27704;
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
	// bl 0x82b860d0
	ctx.lr = 0x82B87DD0;
	sub_82B860D0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b87de8
	if (cr6.eq) goto loc_82B87DE8;
	// bl 0x82416268
	ctx.lr = 0x82B87DE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B87DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B87E00"))) PPC_WEAK_FUNC(sub_82B87E00);
PPC_FUNC_IMPL(__imp__sub_82B87E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B87E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B87E1C;
	sub_82DAD2E0(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B87E2C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B87E30;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87e5c
	if (cr6.eq) goto loc_82B87E5C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b87e5c
	if (cr6.eq) goto loc_82B87E5C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B87E50;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b87e74
	if (cr6.eq) goto loc_82B87E74;
loc_82B87E5C:
	// bl 0x830ff290
	ctx.lr = 0x82B87E60;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B87E64;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// beq cr6,0x82b87e74
	if (cr6.eq) goto loc_82B87E74;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82b87e7c
	if (!cr6.eq) goto loc_82B87E7C;
loc_82B87E74:
	// lis r30,12
	ctx.r30.s64 = 786432;
	// ori r30,r30,123
	ctx.r30.u64 = ctx.r30.u64 | 123;
loc_82B87E7C:
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// blt cr6,0x82b87e8c
	if (cr6.lt) goto loc_82B87E8C;
	// cmpwi cr6,r27,9
	cr6.compare<int32_t>(ctx.r27.s32, 9, xer);
	// ble cr6,0x82b87f04
	if (!cr6.gt) goto loc_82B87F04;
loc_82B87E8C:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// bne cr6,0x82b87ed4
	if (!cr6.eq) goto loc_82B87ED4;
	// addi r11,r11,27100
	ctx.r11.s64 = ctx.r11.s64 + 27100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82B87EA8;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87EC4;
	sub_82CBC620(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B87ECC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B87ED4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,27100
	ctx.r4.s64 = ctx.r11.s64 + 27100;
	// bl 0x837b0c10
	ctx.lr = 0x82B87EE0;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87EFC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B87F04;
	sub_8387E8E0(ctx, base);
loc_82B87F04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B87F0C"))) PPC_WEAK_FUNC(sub_82B87F0C);
PPC_FUNC_IMPL(__imp__sub_82B87F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B87F10"))) PPC_WEAK_FUNC(sub_82B87F10);
PPC_FUNC_IMPL(__imp__sub_82B87F10) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82b88014
	if (cr6.gt) goto loc_82B88014;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b87f5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B87F5C;
	// bdzf 4*cr6+eq,0x82b87f98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B87F98;
	// bdzf 4*cr6+eq,0x82b88014
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B88014;
	// bdzf 4*cr6+eq,0x82b87f5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B87F5C;
	// bdzf 4*cr6+eq,0x82b87f5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B87F5C;
	// bdzf 4*cr6+eq,0x82b87fd8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B87FD8;
	// bne cr6,0x82b87fd8
	if (!cr6.eq) goto loc_82B87FD8;
loc_82B87F5C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x82B87F70;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87F8C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B87F94;
	sub_8387E8E0(ctx, base);
	// b 0x82b88064
	goto loc_82B88064;
loc_82B87F98:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x837b0c10
	ctx.lr = 0x82B87FAC;
	sub_837B0C10(ctx, base);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,275
	ctx.r7.u64 = ctx.r7.u64 | 275;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B87FCC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B87FD4;
	sub_8387E8E0(ctx, base);
	// b 0x82b88064
	goto loc_82B88064;
loc_82B87FD8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,27284
	ctx.r4.s64 = ctx.r11.s64 + 27284;
	// bl 0x837b0c10
	ctx.lr = 0x82B87FE8;
	sub_837B0C10(ctx, base);
	// lis r7,11
	ctx.r7.s64 = 720896;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,292
	ctx.r7.u64 = ctx.r7.u64 | 292;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B88008;
	sub_82CBC620(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88010;
	sub_8387E8E0(ctx, base);
	// b 0x82b88064
	goto loc_82B88064;
loc_82B88014:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x82B88028;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B88044;
	sub_82CBC620(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b88064
	if (cr6.lt) goto loc_82B88064;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B88064;
	sub_825952B8(ctx, base);
loc_82B88064:
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
}

__attribute__((alias("__imp__sub_82B8807C"))) PPC_WEAK_FUNC(sub_82B8807C);
PPC_FUNC_IMPL(__imp__sub_82B8807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B88080"))) PPC_WEAK_FUNC(sub_82B88080);
PPC_FUNC_IMPL(__imp__sub_82B88080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B88088;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B88094;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8817c
	if (cr6.eq) goto loc_82B8817C;
	// bl 0x831156e8
	ctx.lr = 0x82B880A4;
	sub_831156E8(ctx, base);
	// lwz r27,56(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B880AC;
	sub_82DAD2E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8817c
	if (cr6.eq) goto loc_82B8817C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,27304
	ctx.r29.s64 = ctx.r11.s64 + 27304;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82B880CC;
	sub_837B0C10(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b880e0
	if (!cr6.eq) goto loc_82B880E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B880E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82B880E8;
	sub_82B85FF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8312c748
	ctx.lr = 0x82B880F8;
	sub_8312C748(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x82cbc268
	ctx.lr = 0x82B88110;
	sub_82CBC268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88118;
	sub_8387E8E0(ctx, base);
	// lbz r11,129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 129);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8817c
	if (!cr6.eq) goto loc_82B8817C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B88130;
	sub_837B0C10(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b88144
	if (!cr6.eq) goto loc_82B88144;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B88144:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82B8814C;
	sub_82B85FF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8312c748
	ctx.lr = 0x82B8815C;
	sub_8312C748(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82cbc268
	ctx.lr = 0x82B88174;
	sub_82CBC268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8817C;
	sub_8387E8E0(ctx, base);
loc_82B8817C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B88184"))) PPC_WEAK_FUNC(sub_82B88184);
PPC_FUNC_IMPL(__imp__sub_82B88184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B88188"))) PPC_WEAK_FUNC(sub_82B88188);
PPC_FUNC_IMPL(__imp__sub_82B88188) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B881A4;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B881A8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B881AC;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b881cc
	if (cr6.eq) goto loc_82B881CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b88080
	ctx.lr = 0x82B881CC;
	sub_82B88080(ctx, base);
loc_82B881CC:
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b88284
	if (cr6.eq) goto loc_82B88284;
	// bl 0x82dad2e0
	ctx.lr = 0x82B881DC;
	sub_82DAD2E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82dafaf8
	ctx.lr = 0x82B881E8;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b88284
	if (cr6.eq) goto loc_82B88284;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r8,27312
	ctx.r4.s64 = ctx.r8.s64 + 27312;
	// lwz r31,2376(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2376);
	// bl 0x837b0c10
	ctx.lr = 0x82B88220;
	sub_837B0C10(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824758
	ctx.lr = 0x82B88230;
	sub_83824758(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88238;
	sub_8387E8E0(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8823C;
	sub_82DAD2E0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,18
	ctx.r4.s64 = 18;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82B8824C;
	sub_82DAE510(ctx, base);
	// bl 0x82d14ce8
	ctx.lr = 0x82B88250;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82B88254;
	sub_82D130B8(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x82B88258;
	sub_82D47978(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82b8826c
	if (!cr6.lt) goto loc_82B8826C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82B8826C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B88278;
	sub_82D20DA8(ctx, base);
	// bl 0x82c3a3c0
	ctx.lr = 0x82B8827C;
	sub_82C3A3C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88284;
	sub_8387E8E0(ctx, base);
loc_82B88284:
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

__attribute__((alias("__imp__sub_82B8829C"))) PPC_WEAK_FUNC(sub_82B8829C);
PPC_FUNC_IMPL(__imp__sub_82B8829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B882A0"))) PPC_WEAK_FUNC(sub_82B882A0);
PPC_FUNC_IMPL(__imp__sub_82B882A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B882A8;
	__savegprlr_20(ctx, base);
	// stwu r1,-3808(r1)
	ea = -3808 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-31763
	ctx.r21.s64 = -2081619968;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-3564(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r23,4456(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// stb r24,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r24.u8);
	// bl 0x8308e078
	ctx.lr = 0x82B882D0;
	sub_8308E078(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x8311e3d0
	ctx.lr = 0x82B882D8;
	sub_8311E3D0(ctx, base);
	// ld r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 212);
	// li r20,2
	ctx.r20.s64 = 2;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82b882f8
	if (!cr6.eq) goto loc_82B882F8;
	// stw r20,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r20.u32);
	// b 0x82b882fc
	goto loc_82B882FC;
loc_82B882F8:
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
loc_82B882FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B88308;
	sub_82CBD568(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B88314;
	sub_82CBD568(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B88320;
	sub_82CBD568(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd568
	ctx.lr = 0x82B8832C;
	sub_82CBD568(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B88330;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B88334;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// li r22,15
	ctx.r22.s64 = 15;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x82b888d8
	if (cr6.gt) goto loc_82B888D8;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31908
	ctx.r12.s64 = ctx.r12.s64 + -31908;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B88398;
	case 1:
		goto loc_82B88448;
	case 2:
		goto loc_82B88448;
	case 3:
		goto loc_82B88448;
	case 4:
		goto loc_82B88448;
	case 5:
		goto loc_82B88448;
	case 6:
		goto loc_82B88448;
	case 7:
		goto loc_82B888D8;
	case 8:
		goto loc_82B888D8;
	case 9:
		goto loc_82B884D8;
	case 10:
		goto loc_82B884D8;
	case 11:
		goto loc_82B884D8;
	case 12:
		goto loc_82B884D8;
	case 13:
		goto loc_82B884D8;
	case 14:
		goto loc_82B884D8;
	default:
		return;
	}
	// lwz r21,-31848(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31848);
	// lwz r21,-31672(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31672);
	// lwz r21,-31672(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31672);
	// lwz r21,-31672(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31672);
	// lwz r21,-31672(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31672);
	// lwz r21,-31672(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31672);
	// lwz r21,-31672(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31672);
	// lwz r21,-30504(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30504);
	// lwz r21,-30504(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30504);
	// lwz r21,-31528(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31528);
	// lwz r21,-31528(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31528);
	// lwz r21,-31528(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31528);
	// lwz r21,-31528(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31528);
	// lwz r21,-31528(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31528);
	// lwz r21,-31528(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31528);
loc_82B88398:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r28,r11,27076
	ctx.r28.s64 = ctx.r11.s64 + 27076;
	// addi r4,r28,-212
	ctx.r4.s64 = ctx.r28.s64 + -212;
	// bl 0x837b0c10
	ctx.lr = 0x82B883AC;
	sub_837B0C10(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B883CC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8387e8e0
	ctx.lr = 0x82B883D4;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,-196
	ctx.r4.s64 = ctx.r28.s64 + -196;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82B883E0;
	sub_837B0C10(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B883FC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88404;
	sub_8387E8E0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b87f10
	ctx.lr = 0x82B88414;
	sub_82B87F10(ctx, base);
	// addi r4,r28,-180
	ctx.r4.s64 = ctx.r28.s64 + -180;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x837b0c10
	ctx.lr = 0x82B88420;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8843C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88444;
	sub_8387E8E0(ctx, base);
	// b 0x82b88a24
	goto loc_82B88A24;
loc_82B88448:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r28,r11,27076
	ctx.r28.s64 = ctx.r11.s64 + 27076;
	// addi r4,r28,-164
	ctx.r4.s64 = ctx.r28.s64 + -164;
	// bl 0x837b0c10
	ctx.lr = 0x82B8845C;
	sub_837B0C10(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8847C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88484;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,-148
	ctx.r4.s64 = ctx.r28.s64 + -148;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x837b0c10
	ctx.lr = 0x82B88490;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B884AC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8387e8e0
	ctx.lr = 0x82B884B4;
	sub_8387E8E0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b87f10
	ctx.lr = 0x82B884C4;
	sub_82B87F10(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b87e00
	ctx.lr = 0x82B884D4;
	sub_82B87E00(ctx, base);
	// b 0x82b88a24
	goto loc_82B88A24;
loc_82B884D8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r28,r11,27076
	ctx.r28.s64 = ctx.r11.s64 + 27076;
	// addi r4,r28,-132
	ctx.r4.s64 = ctx.r28.s64 + -132;
	// bl 0x837b0c10
	ctx.lr = 0x82B884EC;
	sub_837B0C10(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8850C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88514;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,-116
	ctx.r4.s64 = ctx.r28.s64 + -116;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x837b0c10
	ctx.lr = 0x82B88520;
	sub_837B0C10(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8853C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88544;
	sub_8387E8E0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b87f10
	ctx.lr = 0x82B88554;
	sub_82B87F10(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b87e00
	ctx.lr = 0x82B88564;
	sub_82B87E00(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B88568;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x82b8888c
	if (cr6.gt) goto loc_82B8888C;
	// lis r12,-32071
	ctx.r12.s64 = -2101805056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31344
	ctx.r12.s64 = ctx.r12.s64 + -31344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B885D0;
	case 1:
		goto loc_82B8888C;
	case 2:
		goto loc_82B8888C;
	case 3:
		goto loc_82B88688;
	case 4:
		goto loc_82B8888C;
	case 5:
		goto loc_82B8888C;
	case 6:
		goto loc_82B8888C;
	case 7:
		goto loc_82B8888C;
	case 8:
		goto loc_82B8888C;
	case 9:
		goto loc_82B885D0;
	case 10:
		goto loc_82B8888C;
	case 11:
		goto loc_82B8888C;
	case 12:
		goto loc_82B8888C;
	case 13:
		goto loc_82B88650;
	case 14:
		goto loc_82B88650;
	case 15:
		goto loc_82B88650;
	default:
		return;
	}
	// lwz r21,-31280(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31280);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-31096(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31096);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-31280(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31280);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-30580(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30580);
	// lwz r21,-31152(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31152);
	// lwz r21,-31152(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31152);
	// lwz r21,-31152(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + -31152);
loc_82B885D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83572958
	ctx.lr = 0x82B885D8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b88618
	if (cr6.eq) goto loc_82B88618;
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x837b0c10
	ctx.lr = 0x82B885F0;
	sub_837B0C10(ctx, base);
	// lis r7,108
	ctx.r7.s64 = 7077888;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,211
	ctx.r7.u64 = ctx.r7.u64 | 211;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B88610;
	sub_82CBC620(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88618;
	sub_8387E8E0(ctx, base);
loc_82B88618:
	// addi r4,r28,-76
	ctx.r4.s64 = ctx.r28.s64 + -76;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x837b0c10
	ctx.lr = 0x82B88624;
	sub_837B0C10(ctx, base);
	// lis r7,514
	ctx.r7.s64 = 33685504;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,33
	ctx.r7.u64 = ctx.r7.u64 | 33;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B88644;
	sub_82CBC620(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8864C;
	sub_8387E8E0(ctx, base);
	// b 0x82b88a24
	goto loc_82B88A24;
loc_82B88650:
	// addi r4,r28,-60
	ctx.r4.s64 = ctx.r28.s64 + -60;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x837b0c10
	ctx.lr = 0x82B8865C;
	sub_837B0C10(ctx, base);
	// lis r7,514
	ctx.r7.s64 = 33685504;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,33
	ctx.r7.u64 = ctx.r7.u64 | 33;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8867C;
	sub_82CBC620(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88684;
	sub_8387E8E0(ctx, base);
	// b 0x82b88a24
	goto loc_82B88A24;
loc_82B88688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83572958
	ctx.lr = 0x82B88690;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b886d0
	if (cr6.eq) goto loc_82B886D0;
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x837b0c10
	ctx.lr = 0x82B886A8;
	sub_837B0C10(ctx, base);
	// lis r7,108
	ctx.r7.s64 = 7077888;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,211
	ctx.r7.u64 = ctx.r7.u64 | 211;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B886C8;
	sub_82CBC620(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8387e8e0
	ctx.lr = 0x82B886D0;
	sub_8387E8E0(ctx, base);
loc_82B886D0:
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// lwz r11,-3564(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3564);
	// li r25,24
	ctx.r25.s64 = 24;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r27,192(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B886F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b88780
	if (cr6.eq) goto loc_82B88780;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B88718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82B8871C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82b8872c
	if (cr6.lt) goto loc_82B8872C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82B8872C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b88750
	if (cr6.eq) goto loc_82B88750;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b88760
	if (cr6.eq) goto loc_82B88760;
loc_82B88750:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82b8871c
	if (cr6.lt) goto loc_82B8871C;
	// b 0x82b88780
	goto loc_82B88780;
loc_82B88760:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b88774
	if (!cr6.eq) goto loc_82B88774;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x82b8877c
	goto loc_82B8877C;
loc_82B88774:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r26,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B8877C:
	// clrlwi r25,r10,24
	ctx.r25.u64 = ctx.r10.u32 & 0xFF;
loc_82B88780:
	// bl 0x831156e8
	ctx.lr = 0x82B88784;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,6
	ctx.r4.s64 = ctx.r10.s64 + 393216;
	// addi r4,r4,-30316
	ctx.r4.s64 = ctx.r4.s64 + -30316;
	// bl 0x831ce980
	ctx.lr = 0x82B887A0;
	sub_831CE980(ctx, base);
	// clrlwi r27,r25,24
	ctx.r27.u64 = ctx.r25.u32 & 0xFF;
	// addi r9,r1,789
	ctx.r9.s64 = ctx.r1.s64 + 789;
	// lbzx r29,r27,r9
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82b887c0
	if (cr6.lt) goto loc_82B887C0;
	// bl 0x831156e8
	ctx.lr = 0x82B887B8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B887C0:
	// bl 0x831156e8
	ctx.lr = 0x82B887C4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r29,2800
	ctx.r10.s64 = ctx.r29.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// bl 0x831ce980
	ctx.lr = 0x82B887E0;
	sub_831CE980(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,1582
	ctx.r4.s64 = ctx.r1.s64 + 1582;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x831ce980
	ctx.lr = 0x82B887F0;
	sub_831CE980(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8312a600
	ctx.lr = 0x82B887F8;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b88a24
	if (!cr6.eq) goto loc_82B88A24;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x82b88a24
	if (!cr6.lt) goto loc_82B88A24;
	// bl 0x8399f8b8
	ctx.lr = 0x82B88810;
	sub_8399F8B8(ctx, base);
	// lwz r11,-3564(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x82B88824;
	sub_82A0C738(ctx, base);
	// addi r11,r1,813
	ctx.r11.s64 = ctx.r1.s64 + 813;
	// lbzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82a161a8
	ctx.lr = 0x82B88830;
	sub_82A161A8(ctx, base);
	// mulli r11,r26,528
	ctx.r11.s64 = ctx.r26.s64 * 528;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x839a0478
	ctx.lr = 0x82B88848;
	sub_839A0478(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82B8884C;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b88a24
	if (!cr6.eq) goto loc_82B88A24;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x837b0c10
	ctx.lr = 0x82B88860;
	sub_837B0C10(ctx, base);
	// lis r7,508
	ctx.r7.s64 = 33292288;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,41
	ctx.r7.u64 = ctx.r7.u64 | 41;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B88880;
	sub_82CBC620(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88888;
	sub_8387E8E0(ctx, base);
	// b 0x82b88a24
	goto loc_82B88A24;
loc_82B8888C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83572958
	ctx.lr = 0x82B88894;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b88a24
	if (cr6.eq) goto loc_82B88A24;
	// addi r4,r28,-100
	ctx.r4.s64 = ctx.r28.s64 + -100;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82B888AC;
	sub_837B0C10(ctx, base);
	// lis r7,108
	ctx.r7.s64 = 7077888;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,211
	ctx.r7.u64 = ctx.r7.u64 | 211;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B888CC;
	sub_82CBC620(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8387e8e0
	ctx.lr = 0x82B888D4;
	sub_8387E8E0(ctx, base);
	// b 0x82b88a24
	goto loc_82B88A24;
loc_82B888D8:
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
	// addi r28,r11,27076
	ctx.r28.s64 = ctx.r11.s64 + 27076;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r28,-260
	ctx.r4.s64 = ctx.r28.s64 + -260;
	// bl 0x8259cc28
	ctx.lr = 0x82B888FC;
	sub_8259CC28(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8891C;
	sub_82CBC620(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b88938
	if (cr6.lt) goto loc_82B88938;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B88938;
	sub_825952B8(ctx, base);
loc_82B88938:
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// addi r4,r28,-244
	ctx.r4.s64 = ctx.r28.s64 + -244;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stb r24,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r24.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82B88960;
	sub_8259CC28(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B8897C;
	sub_82CBC620(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b88998
	if (cr6.lt) goto loc_82B88998;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B88998;
	sub_825952B8(ctx, base);
loc_82B88998:
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r24,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b87f10
	ctx.lr = 0x82B889B4;
	sub_82B87F10(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b87e00
	ctx.lr = 0x82B889C4;
	sub_82B87E00(ctx, base);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r4,r28,-228
	ctx.r4.s64 = ctx.r28.s64 + -228;
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82B889E0;
	sub_8259CC28(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc620
	ctx.lr = 0x82B889FC;
	sub_82CBC620(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b88a18
	if (cr6.lt) goto loc_82B88A18;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B88A18;
	sub_825952B8(ctx, base);
loc_82B88A18:
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
loc_82B88A24:
	// lwz r11,-3564(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5815(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5815);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b88a78
	if (!cr6.eq) goto loc_82B88A78;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82B88A44;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B88A50;
	sub_82CBCDC8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b88a6c
	if (cr6.lt) goto loc_82B88A6C;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B88A6C;
	sub_825952B8(ctx, base);
loc_82B88A6C:
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82B88A78:
	// cmpwi cr6,r23,6
	cr6.compare<int32_t>(ctx.r23.s32, 6, xer);
	// bne cr6,0x82b88ab4
	if (!cr6.eq) goto loc_82B88AB4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82B88A8C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbcdc8
	ctx.lr = 0x82B88A98;
	sub_82CBCDC8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b88ab4
	if (cr6.lt) goto loc_82B88AB4;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82B88AB4;
	sub_825952B8(ctx, base);
loc_82B88AB4:
	// addi r1,r1,3808
	ctx.r1.s64 = ctx.r1.s64 + 3808;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B88ABC"))) PPC_WEAK_FUNC(sub_82B88ABC);
PPC_FUNC_IMPL(__imp__sub_82B88ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B88AC0"))) PPC_WEAK_FUNC(sub_82B88AC0);
PPC_FUNC_IMPL(__imp__sub_82B88AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B88AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r30,4456(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// bl 0x831156e8
	ctx.lr = 0x82B88AE4;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B88AE8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B88AEC;
	sub_830FF988(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b88d78
	if (cr6.eq) goto loc_82B88D78;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,13636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13636);
	// bl 0x83815a48
	ctx.lr = 0x82B88B10;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b88d88
	if (cr6.eq) goto loc_82B88D88;
	// bl 0x82d4b8e0
	ctx.lr = 0x82B88B1C;
	sub_82D4B8E0(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// bl 0x82d2bbb8
	ctx.lr = 0x82B88B24;
	sub_82D2BBB8(ctx, base);
	// li r4,-2049
	ctx.r4.s64 = -2049;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83545640
	ctx.lr = 0x82B88B30;
	sub_83545640(ctx, base);
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// addi r29,r10,27172
	ctx.r29.s64 = ctx.r10.s64 + 27172;
	// bgt cr6,0x82b88c14
	if (cr6.gt) goto loc_82B88C14;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b88b68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B88B68;
	// bdzf 4*cr6+eq,0x82b88ba0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B88BA0;
	// bdzf 4*cr6+eq,0x82b88c14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B88C14;
	// bdzf 4*cr6+eq,0x82b88b68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B88B68;
	// bdzf 4*cr6+eq,0x82b88b68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B88B68;
	// bdzf 4*cr6+eq,0x82b88bd8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B88BD8;
	// bne cr6,0x82b88bd8
	if (!cr6.eq) goto loc_82B88BD8;
loc_82B88B68:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b88b7c
	if (!cr6.eq) goto loc_82B88B7C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B88B7C:
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B88B88;
	sub_837B0C10(ctx, base);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,277
	ctx.r5.u64 = ctx.r5.u64 | 277;
	// bl 0x82a69a28
	ctx.lr = 0x82B88B9C;
	sub_82A69A28(ctx, base);
	// b 0x82b88c14
	goto loc_82B88C14;
loc_82B88BA0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b88bb4
	if (!cr6.eq) goto loc_82B88BB4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B88BB4:
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B88BC0;
	sub_837B0C10(ctx, base);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,275
	ctx.r5.u64 = ctx.r5.u64 | 275;
	// bl 0x82a69a28
	ctx.lr = 0x82B88BD4;
	sub_82A69A28(ctx, base);
	// b 0x82b88c14
	goto loc_82B88C14;
loc_82B88BD8:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b88bec
	if (!cr6.eq) goto loc_82B88BEC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B88BEC:
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B88BF8;
	sub_837B0C10(ctx, base);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,292
	ctx.r5.u64 = ctx.r5.u64 | 292;
	// bl 0x82a69a28
	ctx.lr = 0x82B88C0C;
	sub_82A69A28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
loc_82B88C14:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r11,129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 129);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82b88c74
	if (!cr6.eq) goto loc_82B88C74;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// bctrl 
	ctx.lr = 0x82B88C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b88c50
	if (!cr6.eq) goto loc_82B88C50;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B88C50:
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B88C5C;
	sub_837B0C10(ctx, base);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,37
	ctx.r5.u64 = ctx.r5.u64 | 37;
	// bl 0x82a69a28
	ctx.lr = 0x82B88C70;
	sub_82A69A28(ctx, base);
	// b 0x82b88d10
	goto loc_82B88D10;
loc_82B88C74:
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// bctrl 
	ctx.lr = 0x82B88C7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-2066
	ctx.r4.s64 = ctx.r29.s64 + -2066;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B88C88;
	sub_837B0C10(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b88c9c
	if (!cr6.eq) goto loc_82B88C9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B88C9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292a3f8
	ctx.lr = 0x82B88CA8;
	sub_8292A3F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B88CB8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B88CC8;
	sub_82A69AD0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b88cdc
	if (!cr6.eq) goto loc_82B88CDC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B88CDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292a3f8
	ctx.lr = 0x82B88CE8;
	sub_8292A3F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B88CF8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B88D08;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B88D10;
	sub_8387E8E0(ctx, base);
loc_82B88D10:
	// bl 0x831156e8
	ctx.lr = 0x82B88D14;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b88d58
	if (cr6.eq) goto loc_82B88D58;
	// bl 0x831156e8
	ctx.lr = 0x82B88D24;
	sub_831156E8(ctx, base);
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9d0
	ctx.lr = 0x82B88D34;
	sub_8312B9D0(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B88D38;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B88D4C;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B88D58;
	sub_8312B9C8(ctx, base);
loc_82B88D58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b88080
	ctx.lr = 0x82B88D60;
	sub_82B88080(ctx, base);
	// bl 0x82c3a830
	ctx.lr = 0x82B88D64;
	sub_82C3A830(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c3a428
	ctx.lr = 0x82B88D6C;
	sub_82C3A428(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// bl 0x82d474c0
	ctx.lr = 0x82B88D78;
	sub_82D474C0(ctx, base);
loc_82B88D78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b87938
	ctx.lr = 0x82B88D80;
	sub_82B87938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde30
	ctx.lr = 0x82B88D88;
	sub_82CBDE30(ctx, base);
loc_82B88D88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B88D94"))) PPC_WEAK_FUNC(sub_82B88D94);
PPC_FUNC_IMPL(__imp__sub_82B88D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B88D98"))) PPC_WEAK_FUNC(sub_82B88D98);
PPC_FUNC_IMPL(__imp__sub_82B88D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B88DA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19e80
	ctx.lr = 0x82B88DB8;
	sub_82D19E80(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,88
	ctx.r26.s64 = 88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b890d4
	if (cr0.eq) goto loc_82B890D4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B88DD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19e80
	ctx.lr = 0x82B88DDC;
	sub_82D19E80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82b88eec
	if (!cr6.gt) goto loc_82B88EEC;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// blt cr6,0x82b88e14
	if (cr6.lt) goto loc_82B88E14;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82b88e18
	goto loc_82B88E18;
loc_82B88E14:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82B88E18:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82B88E24;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b88e30
	if (!cr6.eq) goto loc_82B88E30;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B88E30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// bl 0x82d19e80
	ctx.lr = 0x82B88E40;
	sub_82D19E80(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b88dd4
	if (cr6.lt) goto loc_82B88DD4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b890d4
	if (cr6.eq) goto loc_82B890D4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// addi r31,r25,28
	ctx.r31.s64 = ctx.r25.s64 + 28;
	// addi r30,r11,27232
	ctx.r30.s64 = ctx.r11.s64 + 27232;
	// li r7,15
	ctx.r7.s64 = 15;
	// addi r6,r30,-52
	ctx.r6.s64 = ctx.r30.s64 + -52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B88E84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b88ef8
	if (!cr6.eq) goto loc_82B88EF8;
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 | 52;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x82B88EA4;
	sub_835977D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B88EA8;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B88EAC;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B88EB0;
	sub_830FF988(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b88ecc
	if (cr6.eq) goto loc_82B88ECC;
	// bl 0x82c3a3c0
	ctx.lr = 0x82B88ECC;
	sub_82C3A3C0(ctx, base);
loc_82B88ECC:
	// bl 0x831156e8
	ctx.lr = 0x82B88ED0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// addi r10,r10,-26044
	ctx.r10.s64 = ctx.r10.s64 + -26044;
	// lwz r11,3836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3836);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3836, ctx.r9.u32);
	// b 0x82b890a0
	goto loc_82B890A0;
loc_82B88EEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B88EF8;
	sub_831CC188(ctx, base);
loc_82B88EF8:
	// addi r6,r30,-36
	ctx.r6.s64 = ctx.r30.s64 + -36;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B88F10;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b890a0
	if (cr6.eq) goto loc_82B890A0;
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B88F30;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b88fa0
	if (!cr6.eq) goto loc_82B88FA0;
	// bl 0x831156e8
	ctx.lr = 0x82B88F3C;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B88F40;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B88F44;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b890a0
	if (cr6.eq) goto loc_82B890A0;
	// bl 0x831156e8
	ctx.lr = 0x82B88F60;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b88f98
	if (cr6.eq) goto loc_82B88F98;
	// bl 0x831156e8
	ctx.lr = 0x82B88F70;
	sub_831156E8(ctx, base);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B88F78;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B88F8C;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B88F98;
	sub_8312B9C8(ctx, base);
loc_82B88F98:
	// bl 0x82c3a7a8
	ctx.lr = 0x82B88F9C;
	sub_82C3A7A8(ctx, base);
	// b 0x82b890a0
	goto loc_82B890A0;
loc_82B88FA0:
	// addi r6,r30,-12
	ctx.r6.s64 = ctx.r30.s64 + -12;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B88FB8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b890a0
	if (!cr6.eq) goto loc_82B890A0;
	// bl 0x831156e8
	ctx.lr = 0x82B88FC4;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B88FC8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B88FCC;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b89098
	if (cr6.eq) goto loc_82B89098;
	// bl 0x82dad2e0
	ctx.lr = 0x82B88FE8;
	sub_82DAD2E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82dafab0
	ctx.lr = 0x82B88FF4;
	sub_82DAFAB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,116(r27)
	PPC_STORE_U8(ctx.r27.u32 + 116, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B89000;
	sub_831156E8(ctx, base);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b89038
	if (cr6.eq) goto loc_82B89038;
	// bl 0x831156e8
	ctx.lr = 0x82B89010;
	sub_831156E8(ctx, base);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B89018;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B8902C;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B89038;
	sub_8312B9C8(ctx, base);
loc_82B89038:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b87938
	ctx.lr = 0x82B89040;
	sub_82B87938(ctx, base);
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b890d4
	if (!cr6.eq) goto loc_82B890D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B8905C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b87be8
	ctx.lr = 0x82B89068;
	sub_82B87BE8(ctx, base);
	// stw r3,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B89074;
	sub_8387E8E0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// lwz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// ori r4,r4,188
	ctx.r4.u64 = ctx.r4.u64 | 188;
	// bl 0x82d2ada8
	ctx.lr = 0x82B89084;
	sub_82D2ADA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,120(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// bl 0x83103100
	ctx.lr = 0x82B89090;
	sub_83103100(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B89098:
	// bl 0x82d14ce8
	ctx.lr = 0x82B8909C;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82B890A0;
	sub_82D130B8(ctx, base);
loc_82B890A0:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b890c4
	if (cr6.lt) goto loc_82B890C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B890BC;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B890C4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B890D4;
	sub_82D20DA8(ctx, base);
loc_82B890D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B890DC"))) PPC_WEAK_FUNC(sub_82B890DC);
PPC_FUNC_IMPL(__imp__sub_82B890DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B890E0"))) PPC_WEAK_FUNC(sub_82B890E0);
PPC_FUNC_IMPL(__imp__sub_82B890E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B890E8;
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
	ctx.lr = 0x82B890FC;
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
	ctx.lr = 0x82B89114;
	sub_82D253F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,28520
	ctx.r9.s64 = ctx.r11.s64 + 28520;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r30,13812
	ctx.r7.s64 = ctx.r30.s64 + 13812;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82B89140;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,13812(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13812);
	// bl 0x82d23390
	ctx.lr = 0x82B89150;
	sub_82D23390(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B89154;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x82B8915C;
	sub_8311D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B89168;
	sub_82D195D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B89174"))) PPC_WEAK_FUNC(sub_82B89174);
PPC_FUNC_IMPL(__imp__sub_82B89174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B89178"))) PPC_WEAK_FUNC(sub_82B89178);
PPC_FUNC_IMPL(__imp__sub_82B89178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B89180;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82B89194;
	sub_82D1ED60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8919C;
	sub_82D19A78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,28424
	ctx.r30.s64 = ctx.r11.s64 + 28424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B891C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B891DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B891F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B89214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89228
	if (cr6.eq) goto loc_82B89228;
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,305
	ctx.r4.u64 = ctx.r4.u64 | 305;
	// bl 0x82d39ab8
	ctx.lr = 0x82B89228;
	sub_82D39AB8(ctx, base);
loc_82B89228:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B89240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,49
	ctx.r4.s64 = 3211264;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 | 48;
	// bl 0x82d30340
	ctx.lr = 0x82B89250;
	sub_82D30340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B8925C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B89264;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B89284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,49
	ctx.r4.s64 = 3211264;
	// ori r4,r4,49
	ctx.r4.u64 = ctx.r4.u64 | 49;
	// bl 0x82d29598
	ctx.lr = 0x82B89290;
	sub_82D29598(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B892AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B892C0;
	sub_82D21408(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B892D0;
	sub_82D2D510(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r11,r5,14
	ctx.r11.u64 = ctx.r5.u64 | 14;
	// ori r10,r4,15
	ctx.r10.u64 = ctx.r4.u64 | 15;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d3b6a0
	ctx.lr = 0x82B892F8;
	sub_82D3B6A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B89304;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89318
	if (cr6.eq) goto loc_82B89318;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B89318;
	sub_82D2AEC8(ctx, base);
loc_82B89318:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82B89320;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89338
	if (cr6.eq) goto loc_82B89338;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,24116
	ctx.r9.u64 = ctx.r11.u64 | 24116;
	// lbzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
loc_82B89338:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82d3b298
	ctx.lr = 0x82B89350;
	sub_82D3B298(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8935C"))) PPC_WEAK_FUNC(sub_82B8935C);
PPC_FUNC_IMPL(__imp__sub_82B8935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B89360"))) PPC_WEAK_FUNC(sub_82B89360);
PPC_FUNC_IMPL(__imp__sub_82B89360) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82B89378;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B89380;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B89388;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B89398;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89434
	if (cr6.eq) goto loc_82B89434;
	// bl 0x83a970c8
	ctx.lr = 0x82B893A4;
	sub_83A970C8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x831156e8
	ctx.lr = 0x82B893B0;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89434
	if (cr6.eq) goto loc_82B89434;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,24116
	ctx.r11.s64 = ctx.r11.s64 + 24116;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b89434
	if (cr6.eq) goto loc_82B89434;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B893DC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r9,r11,37446
	ctx.r9.u64 = ctx.r11.u64 | 37446;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stbx r30,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u8);
	// beq cr6,0x82b89418
	if (cr6.eq) goto loc_82B89418;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,25472
	ctx.r9.s64 = ctx.r10.s64 + 25472;
	// stb r11,25472(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25472, ctx.r11.u8);
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// b 0x82b89434
	goto loc_82B89434;
loc_82B89418:
	// bl 0x831091f8
	ctx.lr = 0x82B8941C;
	sub_831091F8(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r10,r11,25472
	ctx.r10.s64 = ctx.r11.s64 + 25472;
	// stb r30,25472(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25472, ctx.r30.u8);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r30.u8);
	// stb r30,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r30.u8);
loc_82B89434:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B89450"))) PPC_WEAK_FUNC(sub_82B89450);
PPC_FUNC_IMPL(__imp__sub_82B89450) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,28520
	ctx.r9.s64 = ctx.r11.s64 + 28520;
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
	ctx.lr = 0x82B89488;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b894a0
	if (cr6.eq) goto loc_82B894A0;
	// bl 0x82416268
	ctx.lr = 0x82B8949C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B894A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B894B8"))) PPC_WEAK_FUNC(sub_82B894B8);
PPC_FUNC_IMPL(__imp__sub_82B894B8) {
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
	// blt cr6,0x82b894e0
	if (cr6.lt) goto loc_82B894E0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b894e4
	goto loc_82B894E4;
loc_82B894E0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B894E4:
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
	ctx.lr = 0x82B89500;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8951c
	if (cr6.eq) goto loc_82B8951C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b890e0
	ctx.lr = 0x82B89514;
	sub_82B890E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b89520
	if (!cr6.eq) goto loc_82B89520;
loc_82B8951C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B89520:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B89538"))) PPC_WEAK_FUNC(sub_82B89538);
PPC_FUNC_IMPL(__imp__sub_82B89538) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B89550;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b895ec
	if (cr6.gt) goto loc_82B895EC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b895c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B895C8;
	// bdzf 4*cr6+eq,0x82b895a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B895A4;
	// bne cr6,0x82b895a4
	if (!cr6.eq) goto loc_82B895A4;
	// bl 0x831156e8
	ctx.lr = 0x82B89584;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r11,39492
	ctx.r31.u64 = ctx.r11.u64 | 39492;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,3640(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3640);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3640(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3640, ctx.r8.u32);
	// b 0x82b8960c
	goto loc_82B8960C;
loc_82B895A4:
	// bl 0x831156e8
	ctx.lr = 0x82B895A8;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r11,39492
	ctx.r31.u64 = ctx.r11.u64 | 39492;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,3644(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3644);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3644, ctx.r8.u32);
	// b 0x82b8960c
	goto loc_82B8960C;
loc_82B895C8:
	// bl 0x831156e8
	ctx.lr = 0x82B895CC;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r11,39492
	ctx.r31.u64 = ctx.r11.u64 | 39492;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,3648(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3648, ctx.r8.u32);
	// b 0x82b8960c
	goto loc_82B8960C;
loc_82B895EC:
	// bl 0x831156e8
	ctx.lr = 0x82B895F0;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r11,39492
	ctx.r31.u64 = ctx.r11.u64 | 39492;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,3636(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3636);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3636(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3636, ctx.r8.u32);
loc_82B8960C:
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b89630
	if (cr6.eq) goto loc_82B89630;
	// bl 0x831156e8
	ctx.lr = 0x82B8961C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,3652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3652);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3652, ctx.r9.u32);
loc_82B89630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B89648"))) PPC_WEAK_FUNC(sub_82B89648);
PPC_FUNC_IMPL(__imp__sub_82B89648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B89650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b897f4
	if (!cr6.eq) goto loc_82B897F4;
	// bl 0x82d19ba0
	ctx.lr = 0x82B89668;
	sub_82D19BA0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r30,r11,29416
	ctx.r30.s64 = ctx.r11.s64 + 29416;
	// bne cr6,0x82b8968c
	if (!cr6.eq) goto loc_82B8968C;
	// addi r5,r30,-68
	ctx.r5.s64 = ctx.r30.s64 + -68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B89688;
	sub_82D20DA8(ctx, base);
	// bl 0x82b89538
	ctx.lr = 0x82B8968C;
	sub_82B89538(ctx, base);
loc_82B8968C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82B89694;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// blt cr6,0x82b897f4
	if (cr6.lt) goto loc_82B897F4;
	// lbz r10,117(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// beq cr6,0x82b896b4
	if (cr6.eq) goto loc_82B896B4;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_82B896B4:
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b897f4
	if (cr6.gt) goto loc_82B897F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b896ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B896EC;
	// bdzf 4*cr6+eq,0x82b8970c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B8970C;
	// bne cr6,0x82b89770
	if (!cr6.eq) goto loc_82B89770;
	// addi r5,r30,-60
	ctx.r5.s64 = ctx.r30.s64 + -60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B896E4;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B896EC:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B896FC;
	sub_82D20DA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8970C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b89738
	if (cr6.eq) goto loc_82B89738;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d17d80
	ctx.lr = 0x82B89720;
	sub_82D17D80(ctx, base);
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B89730;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B89738:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d17d80
	ctx.lr = 0x82B89740;
	sub_82D17D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B89748;
	sub_82D19638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B89750;
	sub_8311E3D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82B89758;
	sub_8311D8C0(ctx, base);
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B89768;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B89770:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b897cc
	if (cr6.eq) goto loc_82B897CC;
	// bl 0x831021a0
	ctx.lr = 0x82B8977C;
	sub_831021A0(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x83102a08
	ctx.lr = 0x82B8978C;
	sub_83102A08(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8979C;
	sub_82D20DA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B897B4;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B897C4;
	sub_82D19788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B897CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B897D4;
	sub_82D19638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B897DC;
	sub_8311E3D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82B897E4;
	sub_8311D8C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B897F4;
	sub_82D20DA8(ctx, base);
loc_82B897F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B897FC"))) PPC_WEAK_FUNC(sub_82B897FC);
PPC_FUNC_IMPL(__imp__sub_82B897FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B89800"))) PPC_WEAK_FUNC(sub_82B89800);
PPC_FUNC_IMPL(__imp__sub_82B89800) {
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
	// bl 0x831021a0
	ctx.lr = 0x82B89810;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x83102a08
	ctx.lr = 0x82B89820;
	sub_83102A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B89830"))) PPC_WEAK_FUNC(sub_82B89830);
PPC_FUNC_IMPL(__imp__sub_82B89830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B89840"))) PPC_WEAK_FUNC(sub_82B89840);
PPC_FUNC_IMPL(__imp__sub_82B89840) {
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
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b89890
	if (!cr6.eq) goto loc_82B89890;
	// bl 0x831021a0
	ctx.lr = 0x82B8986C;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// bl 0x83102a08
	ctx.lr = 0x82B8987C;
	sub_83102A08(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,29464
	ctx.r5.s64 = ctx.r11.s64 + 29464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B89890;
	sub_82D20DA8(ctx, base);
loc_82B89890:
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

__attribute__((alias("__imp__sub_82B898A8"))) PPC_WEAK_FUNC(sub_82B898A8);
PPC_FUNC_IMPL(__imp__sub_82B898A8) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B898C8;
	sub_82D19788(ctx, base);
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x82b898e4
	if (!cr6.eq) goto loc_82B898E4;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82B898E4:
	// bl 0x82d19788
	ctx.lr = 0x82B898E8;
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

__attribute__((alias("__imp__sub_82B898FC"))) PPC_WEAK_FUNC(sub_82B898FC);
PPC_FUNC_IMPL(__imp__sub_82B898FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B89900"))) PPC_WEAK_FUNC(sub_82B89900);
PPC_FUNC_IMPL(__imp__sub_82B89900) {
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
	// lbz r11,118(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 118);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8993c
	if (cr6.eq) goto loc_82B8993C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B89938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r31,118(r30)
	PPC_STORE_U8(ctx.r30.u32 + 118, ctx.r31.u8);
loc_82B8993C:
	// bl 0x831156e8
	ctx.lr = 0x82B89940;
	sub_831156E8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// oris r4,r8,65532
	ctx.r4.u64 = ctx.r8.u64 | 4294705152;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,14032(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14032);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r9,r11,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r8,r3,14
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFF;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r3,r6,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r11,r5,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B899BC;
	sub_830FF290(ctx, base);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// stb r6,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83126148
	ctx.lr = 0x82B899E0;
	sub_83126148(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82B899FC"))) PPC_WEAK_FUNC(sub_82B899FC);
PPC_FUNC_IMPL(__imp__sub_82B899FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B89A00"))) PPC_WEAK_FUNC(sub_82B89A00);
PPC_FUNC_IMPL(__imp__sub_82B89A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B89A08;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r24,r9,25195
	ctx.r24.u64 = ctx.r9.u64 | 25195;
	// addi r23,r10,29344
	ctx.r23.s64 = ctx.r10.s64 + 29344;
	// addi r27,r11,29568
	ctx.r27.s64 = ctx.r11.s64 + 29568;
loc_82B89A2C:
	// addi r5,r26,3
	ctx.r5.s64 = ctx.r26.s64 + 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B89A3C;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89b24
	if (cr6.eq) goto loc_82B89B24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B89A54;
	sub_82D2D510(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89b24
	if (cr6.eq) goto loc_82B89B24;
	// bl 0x82d3b3f8
	ctx.lr = 0x82B89A64;
	sub_82D3B3F8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x82b89a74
	if (cr6.eq) goto loc_82B89A74;
	// subfic r11,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r11.s64;
loc_82B89A74:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bgt cr6,0x82b89ac0
	if (cr6.gt) goto loc_82B89AC0;
loc_82B89A94:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82B89AA8;
	sub_831D0B08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82B89AB4;
	sub_82D3B548(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// ble cr6,0x82b89a94
	if (!cr6.gt) goto loc_82B89A94;
loc_82B89AC0:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r10,r26,27
	ctx.r10.s64 = ctx.r26.s64 + 27;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwzx r11,r8,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b89aec
	if (!cr6.gt) goto loc_82B89AEC;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82B89AEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B89AF8;
	sub_82D3B298(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r31,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B89B14;
	sub_831156E8(ctx, base);
	// add r9,r26,r24
	ctx.r9.u64 = ctx.r26.u64 + ctx.r24.u64;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r31.u32);
loc_82B89B24:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// blt cr6,0x82b89a2c
	if (cr6.lt) goto loc_82B89A2C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B89B38"))) PPC_WEAK_FUNC(sub_82B89B38);
PPC_FUNC_IMPL(__imp__sub_82B89B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B89B40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B89B58;
	sub_82D19AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89bc4
	if (cr6.eq) goto loc_82B89BC4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b89b88
	if (cr6.eq) goto loc_82B89B88;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B89B80;
	sub_82D2B608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B89B88:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B89B98;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89bc4
	if (cr6.eq) goto loc_82B89BC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d3b298
	ctx.lr = 0x82B89BA8;
	sub_82D3B298(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B89BBC;
	sub_82D2B608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b89a00
	ctx.lr = 0x82B89BC4;
	sub_82B89A00(ctx, base);
loc_82B89BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B89BCC"))) PPC_WEAK_FUNC(sub_82B89BCC);
PPC_FUNC_IMPL(__imp__sub_82B89BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B89BD0"))) PPC_WEAK_FUNC(sub_82B89BD0);
PPC_FUNC_IMPL(__imp__sub_82B89BD0) {
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
	ctx.lr = 0x82B89BE8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82b89c20
	if (!cr6.eq) goto loc_82B89C20;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b89c20
	if (!cr6.eq) goto loc_82B89C20;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82b89c24
	goto loc_82B89C24;
loc_82B89C20:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B89C24:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b89b38
	ctx.lr = 0x82B89C30;
	sub_82B89B38(ctx, base);
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

__attribute__((alias("__imp__sub_82B89C44"))) PPC_WEAK_FUNC(sub_82B89C44);
PPC_FUNC_IMPL(__imp__sub_82B89C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B89C48"))) PPC_WEAK_FUNC(sub_82B89C48);
PPC_FUNC_IMPL(__imp__sub_82B89C48) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b89d64
	if (!cr6.eq) goto loc_82B89D64;
	// bl 0x82b89538
	ctx.lr = 0x82B89C6C;
	sub_82B89538(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830eb538
	ctx.lr = 0x82B89C74;
	sub_830EB538(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82B89C78;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x83102a08
	ctx.lr = 0x82B89C88;
	sub_83102A08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B89C98;
	sub_82D19788(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,26
	ctx.r7.s64 = 26;
	// addi r6,r11,29436
	ctx.r6.s64 = ctx.r11.s64 + 29436;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82B89CB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b89d64
	if (!cr6.eq) goto loc_82B89D64;
	// bl 0x831156e8
	ctx.lr = 0x82B89CC0;
	sub_831156E8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// oris r4,r8,65532
	ctx.r4.u64 = ctx.r8.u64 | 4294705152;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,14032(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14032);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r9,r11,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r8,r3,14
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFF;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r3,r6,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r11,r5,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// or r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// or r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B89D40;
	sub_830FF290(ctx, base);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// stb r4,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r4.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83126148
	ctx.lr = 0x82B89D64;
	sub_83126148(ctx, base);
loc_82B89D64:
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

__attribute__((alias("__imp__sub_82B89D78"))) PPC_WEAK_FUNC(sub_82B89D78);
PPC_FUNC_IMPL(__imp__sub_82B89D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B89D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B89D94;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89ec0
	if (cr6.eq) goto loc_82B89EC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B89DAC;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89ec0
	if (cr6.eq) goto loc_82B89EC0;
	// bl 0x831156e8
	ctx.lr = 0x82B89DB8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// addis r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 393216;
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// bgt cr6,0x82b89eb8
	if (cr6.gt) goto loc_82B89EB8;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b89e04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B89E04;
	// bdzf 4*cr6+eq,0x82b89e24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B89E24;
	// bdzf 4*cr6+eq,0x82b89e44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B89E44;
	// bne cr6,0x82b89e84
	if (!cr6.eq) goto loc_82B89E84;
	// stw r30,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x82b89a00
	ctx.lr = 0x82B89DF4;
	sub_82B89A00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b89bd0
	ctx.lr = 0x82B89DFC;
	sub_82B89BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B89E04:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x82b89a00
	ctx.lr = 0x82B89E14;
	sub_82B89A00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b89bd0
	ctx.lr = 0x82B89E1C;
	sub_82B89BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B89E24:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r8.u8);
	// bl 0x82b89bd0
	ctx.lr = 0x82B89E3C;
	sub_82B89BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B89E44:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,29568
	ctx.r6.s64 = ctx.r7.s64 + 29568;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x82b89bd0
	ctx.lr = 0x82B89E7C;
	sub_82B89BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B89E84:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,29568
	ctx.r9.s64 = ctx.r9.s64 + 29568;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
loc_82B89EB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b89bd0
	ctx.lr = 0x82B89EC0;
	sub_82B89BD0(ctx, base);
loc_82B89EC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B89EC8"))) PPC_WEAK_FUNC(sub_82B89EC8);
PPC_FUNC_IMPL(__imp__sub_82B89EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B89ED0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b89f78
	if (!cr6.lt) goto loc_82B89F78;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19aa8
	ctx.lr = 0x82B89EFC;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89f78
	if (cr6.eq) goto loc_82B89F78;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,29472
	ctx.r4.s64 = ctx.r10.s64 + 29472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r4,-364
	ctx.r8.s64 = ctx.r4.s64 + -364;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// lwzx r25,r9,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82B89F28;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B89F38;
	sub_82A69A28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B89F48;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b89f78
	if (cr6.eq) goto loc_82B89F78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d3b6a0
	ctx.lr = 0x82B89F60;
	sub_82D3B6A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B89F6C;
	sub_82D3B298(ctx, base);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r29.u32);
loc_82B89F78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B89F80"))) PPC_WEAK_FUNC(sub_82B89F80);
PPC_FUNC_IMPL(__imp__sub_82B89F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B89F88;
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
	ctx.lr = 0x82B89FA0;
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
	ctx.lr = 0x82B89FB8;
	sub_82D253F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r28.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,29672
	ctx.r9.s64 = ctx.r11.s64 + 29672;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stb r30,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r30.u8);
	// addi r5,r7,-24692
	ctx.r5.s64 = ctx.r7.s64 + -24692;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r4,14092(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14092);
	// bl 0x82d20ae0
	ctx.lr = 0x82B8A010;
	sub_82D20AE0(ctx, base);
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13948(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13948);
	// bl 0x82d23390
	ctx.lr = 0x82B8A024;
	sub_82D23390(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lbz r3,117(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8a05c
	if (!cr6.eq) goto loc_82B8A05C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x82B8A04C;
	sub_825AB6C8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8A05C;
	sub_82D19788(ctx, base);
loc_82B8A05C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8A068"))) PPC_WEAK_FUNC(sub_82B8A068);
PPC_FUNC_IMPL(__imp__sub_82B8A068) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,29672
	ctx.r8.s64 = ctx.r11.s64 + 29672;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-24712
	ctx.r6.s64 = ctx.r9.s64 + -24712;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// stw r6,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x82B8A0B0;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8a0dc
	if (cr6.eq) goto loc_82B8A0DC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B8A0D4;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82B8A0DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B8A0E4;
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

__attribute__((alias("__imp__sub_82B8A0FC"))) PPC_WEAK_FUNC(sub_82B8A0FC);
PPC_FUNC_IMPL(__imp__sub_82B8A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8A100"))) PPC_WEAK_FUNC(sub_82B8A100);
PPC_FUNC_IMPL(__imp__sub_82B8A100) {
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
	// bl 0x82b8a068
	ctx.lr = 0x82B8A120;
	sub_82B8A068(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8a138
	if (cr6.eq) goto loc_82B8A138;
	// bl 0x82416268
	ctx.lr = 0x82B8A134;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8A138:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8A150"))) PPC_WEAK_FUNC(sub_82B8A150);
PPC_FUNC_IMPL(__imp__sub_82B8A150) {
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
	// blt cr6,0x82b8a178
	if (cr6.lt) goto loc_82B8A178;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b8a17c
	goto loc_82B8A17C;
loc_82B8A178:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8A17C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8A198;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a1b8
	if (cr6.eq) goto loc_82B8A1B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b89f80
	ctx.lr = 0x82B8A1B0;
	sub_82B89F80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8a1bc
	if (!cr6.eq) goto loc_82B8A1BC;
loc_82B8A1B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8A1BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8A1D4"))) PPC_WEAK_FUNC(sub_82B8A1D4);
PPC_FUNC_IMPL(__imp__sub_82B8A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8A1D8"))) PPC_WEAK_FUNC(sub_82B8A1D8);
PPC_FUNC_IMPL(__imp__sub_82B8A1D8) {
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
	// blt cr6,0x82b8a200
	if (cr6.lt) goto loc_82B8A200;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b8a204
	goto loc_82B8A204;
loc_82B8A200:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8A204:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8A220;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a240
	if (cr6.eq) goto loc_82B8A240;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b89f80
	ctx.lr = 0x82B8A238;
	sub_82B89F80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8a244
	if (!cr6.eq) goto loc_82B8A244;
loc_82B8A240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8A244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8A25C"))) PPC_WEAK_FUNC(sub_82B8A25C);
PPC_FUNC_IMPL(__imp__sub_82B8A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8A260"))) PPC_WEAK_FUNC(sub_82B8A260);
PPC_FUNC_IMPL(__imp__sub_82B8A260) {
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
	ctx.lr = 0x82B8A268;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r10,117(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 117);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,-22208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// bne cr6,0x82b8a2cc
	if (!cr6.eq) goto loc_82B8A2CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8a2cc
	if (cr6.eq) goto loc_82B8A2CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b8a2a4
	if (!cr6.eq) goto loc_82B8A2A4;
	// bl 0x8308e078
	ctx.lr = 0x82B8A2A0;
	sub_8308E078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82B8A2A4:
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// bge cr6,0x82b8a2cc
	if (!cr6.lt) goto loc_82B8A2CC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82B8A2B8;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a2cc
	if (cr6.eq) goto loc_82B8A2CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B8A2CC;
	sub_82D195D8(ctx, base);
loc_82B8A2CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8A2D4;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82B8A2DC;
	sub_82D33DB0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r11,29324
	ctx.r27.s64 = ctx.r11.s64 + 29324;
	// beq cr6,0x82b8a320
	if (cr6.eq) goto loc_82B8A320;
	// lbz r11,117(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 117);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8a308
	if (!cr6.eq) goto loc_82B8A308;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B8A304;
	sub_82D2AEC8(ctx, base);
	// b 0x82b8a320
	goto loc_82B8A320;
loc_82B8A308:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-88
	ctx.r4.s64 = ctx.r27.s64 + -88;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8A320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8A320:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8A328;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-76
	ctx.r4.s64 = ctx.r27.s64 + -76;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8A340;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,117(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 117);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8a36c
	if (cr6.eq) goto loc_82B8A36C;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d1ed60
	ctx.lr = 0x82B8A35C;
	sub_82D1ED60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8A364;
	sub_82D19A78(ctx, base);
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// b 0x82b8a380
	goto loc_82B8A380;
loc_82B8A36C:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82d1ed60
	ctx.lr = 0x82B8A374;
	sub_82D1ED60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8A37C;
	sub_82D19A78(ctx, base);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
loc_82B8A380:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8A394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B8A398;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r23,r11,35220
	ctx.r23.u64 = ctx.r11.u64 | 35220;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// add r31,r10,r23
	ctx.r31.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r8.u32);
loc_82B8A3C0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B8A3D4;
	sub_82D21408(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82b8a3c0
	if (cr6.lt) goto loc_82B8A3C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r10,29996
	ctx.r5.s64 = ctx.r10.s64 + 29996;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b89ec8
	ctx.lr = 0x82B8A400;
	sub_82B89EC8(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r9,29976
	ctx.r5.s64 = ctx.r9.s64 + 29976;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x82b89ec8
	ctx.lr = 0x82B8A420;
	sub_82B89EC8(ctx, base);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// addi r5,r5,29968
	ctx.r5.s64 = ctx.r5.s64 + 29968;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b89ec8
	ctx.lr = 0x82B8A43C;
	sub_82B89EC8(ctx, base);
	// addi r11,r27,-216
	ctx.r11.s64 = ctx.r27.s64 + -216;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// li r24,15
	ctx.r24.s64 = 15;
loc_82B8A44C:
	// addi r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 + 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B8A45C;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a498
	if (cr6.eq) goto loc_82B8A498;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82B8A488;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a69a28
	ctx.lr = 0x82B8A498;
	sub_82A69A28(ctx, base);
loc_82B8A498:
	// addi r11,r27,-216
	ctx.r11.s64 = ctx.r27.s64 + -216;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82b8a44c
	if (cr6.lt) goto loc_82B8A44C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b89a00
	ctx.lr = 0x82B8A4B8;
	sub_82B89A00(ctx, base);
	// lbz r11,117(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 117);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x82b8a57c
	if (!cr6.lt) goto loc_82B8A57C;
	// addi r10,r27,-216
	ctx.r10.s64 = ctx.r27.s64 + -216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,5
	ctx.r31.s64 = 5;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfic r30,r11,9
	xer.ca = ctx.r11.u32 <= 9;
	ctx.r30.s64 = 9 - ctx.r11.s64;
	// addi r28,r10,-4
	ctx.r28.s64 = ctx.r10.s64 + -4;
loc_82B8A4EC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d21408
	ctx.lr = 0x82B8A500;
	sub_82D21408(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B8A510;
	sub_82D19AA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a540
	if (cr6.eq) goto loc_82B8A540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8A534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b8a544
	if (!cr6.eq) goto loc_82B8A544;
loc_82B8A540:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82B8A544:
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B8A560;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r5,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82a69a28
	ctx.lr = 0x82B8A570;
	sub_82A69A28(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82b8a4ec
	if (!cr0.eq) goto loc_82B8A4EC;
loc_82B8A57C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8A590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8A598;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b8a5a8
	if (!cr6.eq) goto loc_82B8A5A8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82B8A5A8:
	// lis r4,13
	ctx.r4.s64 = 851968;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82a6a280
	ctx.lr = 0x82B8A5B4;
	sub_82A6A280(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-13896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8a5d0
	if (!cr6.eq) goto loc_82B8A5D0;
	// stb r25,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r25.u8);
loc_82B8A5D0:
	// lbz r11,117(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 117);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8a604
	if (cr6.eq) goto loc_82B8A604;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B8A5E4;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8a604
	if (!cr6.eq) goto loc_82B8A604;
	// bl 0x831021a0
	ctx.lr = 0x82B8A5F4;
	sub_831021A0(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x83102a08
	ctx.lr = 0x82B8A604;
	sub_83102A08(ctx, base);
loc_82B8A604:
	// lbz r11,117(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 117);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8a6c8
	if (!cr6.eq) goto loc_82B8A6C8;
	// lbz r11,124(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 124);
	// addi r31,r26,120
	ctx.r31.s64 = ctx.r26.s64 + 120;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8a664
	if (!cr6.eq) goto loc_82B8A664;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8A634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B8A64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825aa838
	ctx.lr = 0x82B8A65C;
	sub_825AA838(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_82B8A664:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8a680
	if (!cr6.eq) goto loc_82B8A680;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82B8A680:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,5816(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5816);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8a6b8
	if (!cr6.eq) goto loc_82B8A6B8;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B8A6A0;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a6b8
	if (cr6.eq) goto loc_82B8A6B8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B8A6B8;
	sub_82D2B608(ctx, base);
loc_82B8A6B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8a6c8
	if (cr6.eq) goto loc_82B8A6C8;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_82B8A6C8:
	// bl 0x831156e8
	ctx.lr = 0x82B8A6CC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82b8a758
	if (!cr6.eq) goto loc_82B8A758;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b8a758
	if (!cr6.eq) goto loc_82B8A758;
	// stw r25,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r25.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B8A704;
	sub_82D19AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a780
	if (cr6.eq) goto loc_82B8A780;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B8A720;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a780
	if (cr6.eq) goto loc_82B8A780;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d3b298
	ctx.lr = 0x82B8A730;
	sub_82D3B298(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82B8A744;
	sub_82D2B608(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b89a00
	ctx.lr = 0x82B8A74C;
	sub_82B89A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B8A758:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B8A768;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a780
	if (cr6.eq) goto loc_82B8A780;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82B8A780;
	sub_82D2B608(ctx, base);
loc_82B8A780:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8A78C"))) PPC_WEAK_FUNC(sub_82B8A78C);
PPC_FUNC_IMPL(__imp__sub_82B8A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8A790"))) PPC_WEAK_FUNC(sub_82B8A790);
PPC_FUNC_IMPL(__imp__sub_82B8A790) {
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
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2ed88
	ctx.lr = 0x82B8A7B0;
	sub_82D2ED88(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,30576
	ctx.r8.s64 = ctx.r10.s64 + 30576;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r11.u8);
	// std r11,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r11.u64);
	// stw r6,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r6.u32);
	// bl 0x830fe8a0
	ctx.lr = 0x82B8A7E4;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x82B8A7E8;
	sub_835240D8(ctx, base);
	// std r3,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82B8A804"))) PPC_WEAK_FUNC(sub_82B8A804);
PPC_FUNC_IMPL(__imp__sub_82B8A804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8A808"))) PPC_WEAK_FUNC(sub_82B8A808);
PPC_FUNC_IMPL(__imp__sub_82B8A808) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,30576
	ctx.r9.s64 = ctx.r11.s64 + 30576;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B8A838;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8A83C;
	sub_830FF988(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b8a86c
	if (cr6.eq) goto loc_82B8A86C;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a858
	if (cr6.eq) goto loc_82B8A858;
	// bl 0x82d49a78
	ctx.lr = 0x82B8A858;
	sub_82D49A78(ctx, base);
loc_82B8A858:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// lwz r3,14100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14100);
	// bl 0x82d12668
	ctx.lr = 0x82B8A86C;
	sub_82D12668(ctx, base);
loc_82B8A86C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2ede8
	ctx.lr = 0x82B8A874;
	sub_82D2EDE8(ctx, base);
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

__attribute__((alias("__imp__sub_82B8A888"))) PPC_WEAK_FUNC(sub_82B8A888);
PPC_FUNC_IMPL(__imp__sub_82B8A888) {
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
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82b8a8f8
	if (cr6.eq) goto loc_82B8A8F8;
	// bl 0x830fe8a0
	ctx.lr = 0x82B8A8AC;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x82B8A8B0;
	sub_835240D8(ctx, base);
	// ld r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 592);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,2000
	cr6.compare<uint64_t>(ctx.r10.u64, 2000, xer);
	// blt cr6,0x82b8a8f8
	if (cr6.lt) goto loc_82B8A8F8;
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// std r3,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r3.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82b8a8e0
	if (!cr6.eq) goto loc_82B8A8E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
loc_82B8A8E0:
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
loc_82B8A8F8:
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

__attribute__((alias("__imp__sub_82B8A910"))) PPC_WEAK_FUNC(sub_82B8A910);
PPC_FUNC_IMPL(__imp__sub_82B8A910) {
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
	// bl 0x82b8a808
	ctx.lr = 0x82B8A930;
	sub_82B8A808(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8a948
	if (cr6.eq) goto loc_82B8A948;
	// bl 0x82416268
	ctx.lr = 0x82B8A944;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8A948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8A960"))) PPC_WEAK_FUNC(sub_82B8A960);
PPC_FUNC_IMPL(__imp__sub_82B8A960) {
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
	// blt cr6,0x82b8a988
	if (cr6.lt) goto loc_82B8A988;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b8a98c
	goto loc_82B8A98C;
loc_82B8A988:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B8A98C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,608
	ctx.r4.s64 = 608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8A9A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a9c4
	if (cr6.eq) goto loc_82B8A9C4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b8a790
	ctx.lr = 0x82B8A9BC;
	sub_82B8A790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8a9c8
	if (!cr6.eq) goto loc_82B8A9C8;
loc_82B8A9C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8A9C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8A9E0"))) PPC_WEAK_FUNC(sub_82B8A9E0);
PPC_FUNC_IMPL(__imp__sub_82B8A9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B8A9E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B8AA20;
	sub_82D042A8(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82B8AA44;
	sub_8259CB28(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82B8AA64;
	sub_8259CB28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B8AA74;
	sub_82A69AD0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8aa94
	if (cr6.lt) goto loc_82B8AA94;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B8AA94;
	sub_825952B8(ctx, base);
loc_82B8AA94:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82b8aabc
	if (cr6.lt) goto loc_82B8AABC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B8AABC;
	sub_825952B8(ctx, base);
loc_82B8AABC:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8AAD0"))) PPC_WEAK_FUNC(sub_82B8AAD0);
PPC_FUNC_IMPL(__imp__sub_82B8AAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8AAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B8AAE4;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ab80
	if (cr6.eq) goto loc_82B8AB80;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x82b8ab80
	if (cr6.eq) goto loc_82B8AB80;
	// lbz r11,588(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8ab80
	if (!cr6.eq) goto loc_82B8AB80;
	// bl 0x831156e8
	ctx.lr = 0x82B8AB0C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ab80
	if (cr6.eq) goto loc_82B8AB80;
	// bl 0x831156e8
	ctx.lr = 0x82B8AB1C;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b878
	ctx.lr = 0x82B8AB24;
	sub_8312B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8ab80
	if (!cr6.eq) goto loc_82B8AB80;
	// bl 0x831156e8
	ctx.lr = 0x82B8AB34;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x82B8AB40;
	sub_8312B8F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ab80
	if (cr6.eq) goto loc_82B8AB80;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,30436
	ctx.r31.s64 = ctx.r11.s64 + 30436;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// bl 0x82d20da8
	ctx.lr = 0x82B8AB60;
	sub_82D20DA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82B8AB70;
	sub_82DAFAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8AB7C;
	sub_837B0C10(ctx, base);
	// bl 0x82d47bb8
	ctx.lr = 0x82B8AB80;
	sub_82D47BB8(ctx, base);
loc_82B8AB80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8AB88"))) PPC_WEAK_FUNC(sub_82B8AB88);
PPC_FUNC_IMPL(__imp__sub_82B8AB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B8AB90;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8AB9C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ac70
	if (cr6.eq) goto loc_82B8AC70;
	// bl 0x831156e8
	ctx.lr = 0x82B8ABAC;
	sub_831156E8(ctx, base);
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8ABB4;
	sub_82DAD2E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ac70
	if (cr6.eq) goto loc_82B8AC70;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312c748
	ctx.lr = 0x82B8ABCC;
	sub_8312C748(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312c748
	ctx.lr = 0x82B8ABDC;
	sub_8312C748(ctx, base);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// add r28,r3,r27
	ctx.r28.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8abf4
	if (!cr6.eq) goto loc_82B8ABF4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B8ABF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82B8ABFC;
	sub_82B85FF8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r11,30468
	ctx.r30.s64 = ctx.r11.s64 + 30468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82B8AC14;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82b8a9e0
	ctx.lr = 0x82B8AC2C;
	sub_82B8A9E0(ctx, base);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8ac40
	if (!cr6.eq) goto loc_82B8AC40;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B8AC40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82B8AC48;
	sub_82B85FF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8AC58;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x82b8a9e0
	ctx.lr = 0x82B8AC70;
	sub_82B8A9E0(ctx, base);
loc_82B8AC70:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8AC78"))) PPC_WEAK_FUNC(sub_82B8AC78);
PPC_FUNC_IMPL(__imp__sub_82B8AC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B8AC80;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B8AC8C;
	sub_82DAD2E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8aebc
	if (cr6.eq) goto loc_82B8AEBC;
	// lwz r27,228(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// beq cr6,0x82b8aebc
	if (cr6.eq) goto loc_82B8AEBC;
	// bl 0x830ff290
	ctx.lr = 0x82B8ACA8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8ACAC;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ada0
	if (cr6.eq) goto loc_82B8ADA0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,14096
	ctx.r30.s64 = ctx.r11.s64 + 14096;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d12d18
	ctx.lr = 0x82B8ACCC;
	sub_82D12D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8ace4
	if (!cr6.eq) goto loc_82B8ACE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B8ACE4:
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8ada0
	if (!cr6.eq) goto loc_82B8ADA0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83815a48
	ctx.lr = 0x82B8ACF8;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8aebc
	if (cr6.eq) goto loc_82B8AEBC;
	// bl 0x82d4b8e0
	ctx.lr = 0x82B8AD04;
	sub_82D4B8E0(ctx, base);
	// stw r3,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r3.u32);
	// bl 0x82d2bbb8
	ctx.lr = 0x82B8AD0C;
	sub_82D2BBB8(ctx, base);
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,30416
	ctx.r30.s64 = ctx.r11.s64 + 30416;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8AD30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8ad44
	if (!cr6.eq) goto loc_82B8AD44;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82B8AD44:
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8AD50;
	sub_837B0C10(ctx, base);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,134
	ctx.r5.u64 = ctx.r5.u64 | 134;
	// bl 0x82a69a28
	ctx.lr = 0x82B8AD64;
	sub_82A69A28(ctx, base);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8ad78
	if (!cr6.eq) goto loc_82B8AD78;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82B8AD78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8AD84;
	sub_837B0C10(ctx, base);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,37
	ctx.r5.u64 = ctx.r5.u64 | 37;
	// bl 0x82a69a28
	ctx.lr = 0x82B8AD98;
	sub_82A69A28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8ab88
	ctx.lr = 0x82B8ADA0;
	sub_82B8AB88(ctx, base);
loc_82B8ADA0:
	// bl 0x8399f8b8
	ctx.lr = 0x82B8ADA4;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8adbc
	if (cr6.eq) goto loc_82B8ADBC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82b8adf8
	if (cr6.eq) goto loc_82B8ADF8;
loc_82B8ADBC:
	// bl 0x831156e8
	ctx.lr = 0x82B8ADC0;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8adf8
	if (cr6.eq) goto loc_82B8ADF8;
	// bl 0x831156e8
	ctx.lr = 0x82B8ADD0;
	sub_831156E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x82B8ADDC;
	sub_8312B8F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8adf8
	if (cr6.eq) goto loc_82B8ADF8;
	// lis r4,506
	ctx.r4.s64 = 33161216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// bl 0x82d2ada8
	ctx.lr = 0x82B8ADF4;
	sub_82D2ADA8(ctx, base);
	// b 0x82b8ae0c
	goto loc_82B8AE0C;
loc_82B8ADF8:
	// lis r4,506
	ctx.r4.s64 = 33161216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d2ada8
	ctx.lr = 0x82B8AE08;
	sub_82D2ADA8(ctx, base);
	// stw r28,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r28.u32);
loc_82B8AE0C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82B8AE1C;
	sub_82DAFAB0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b8ae68
	if (cr6.eq) goto loc_82B8AE68;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82b8ae68
	if (!cr6.eq) goto loc_82B8AE68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8AE40;
	sub_82D19788(ctx, base);
	// bl 0x82d478c8
	ctx.lr = 0x82B8AE44;
	sub_82D478C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ae78
	if (cr6.eq) goto loc_82B8AE78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B8AE58;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B8AE64;
	sub_82D2AEC8(ctx, base);
	// b 0x82b8ae78
	goto loc_82B8AE78;
loc_82B8AE68:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8AE78;
	sub_82D19788(ctx, base);
loc_82B8AE78:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8AE88;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8AE98;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B8AEA4;
	sub_83102DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82B8AEB0;
	sub_82D19720(ctx, base);
	// bl 0x82c3a830
	ctx.lr = 0x82B8AEB4;
	sub_82C3A830(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c3a428
	ctx.lr = 0x82B8AEBC;
	sub_82C3A428(ctx, base);
loc_82B8AEBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8AEC8"))) PPC_WEAK_FUNC(sub_82B8AEC8);
PPC_FUNC_IMPL(__imp__sub_82B8AEC8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r8,r11,30904
	ctx.r8.s64 = ctx.r11.s64 + 30904;
	// addi r7,r10,30892
	ctx.r7.s64 = ctx.r10.s64 + 30892;
	// addi r6,r9,30888
	ctx.r6.s64 = ctx.r9.s64 + 30888;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// bl 0x839a3280
	ctx.lr = 0x82B8AF08;
	sub_839A3280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B8AF10;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82B8AF24"))) PPC_WEAK_FUNC(sub_82B8AF24);
PPC_FUNC_IMPL(__imp__sub_82B8AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8AF28"))) PPC_WEAK_FUNC(sub_82B8AF28);
PPC_FUNC_IMPL(__imp__sub_82B8AF28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b8af38
	sub_82B8AF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8AF30"))) PPC_WEAK_FUNC(sub_82B8AF30);
PPC_FUNC_IMPL(__imp__sub_82B8AF30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b8af38
	sub_82B8AF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8AF38"))) PPC_WEAK_FUNC(sub_82B8AF38);
PPC_FUNC_IMPL(__imp__sub_82B8AF38) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r8,r11,30904
	ctx.r8.s64 = ctx.r11.s64 + 30904;
	// addi r7,r10,30892
	ctx.r7.s64 = ctx.r10.s64 + 30892;
	// addi r6,r9,30888
	ctx.r6.s64 = ctx.r9.s64 + 30888;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839a3280
	ctx.lr = 0x82B8AF80;
	sub_839A3280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B8AF88;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b8afa0
	if (cr6.eq) goto loc_82B8AFA0;
	// bl 0x82416268
	ctx.lr = 0x82B8AF9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8AFA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8AFB8"))) PPC_WEAK_FUNC(sub_82B8AFB8);
PPC_FUNC_IMPL(__imp__sub_82B8AFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B8AFC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82b8a888
	ctx.lr = 0x82B8AFCC;
	sub_82B8A888(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r26,r11,30480
	ctx.r26.s64 = ctx.r11.s64 + 30480;
	// beq cr6,0x82b8b06c
	if (cr6.eq) goto loc_82B8B06C;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// lis r4,506
	ctx.r4.s64 = 33161216;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d042a8
	ctx.lr = 0x82B8B004;
	sub_82D042A8(ctx, base);
	// lwz r11,600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82b8b034
	if (!cr6.gt) goto loc_82B8B034;
loc_82B8B014:
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B8B024;
	sub_825A1EB8(ctx, base);
	// lwz r11,600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b8b014
	if (cr6.lt) goto loc_82B8B014;
loc_82B8B034:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82B8B040;
	sub_82D2AAB0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8b060
	if (cr6.lt) goto loc_82B8B060;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B8B060;
	sub_825952B8(ctx, base);
loc_82B8B060:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
loc_82B8B06C:
	// bl 0x82dad2e0
	ctx.lr = 0x82B8B070;
	sub_82DAD2E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8B078;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b0cc
	if (cr6.eq) goto loc_82B8B0CC;
	// bl 0x831156e8
	ctx.lr = 0x82B8B088;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b8b0a4
	if (cr6.eq) goto loc_82B8B0A4;
	// bl 0x8312b878
	ctx.lr = 0x82B8B098;
	sub_8312B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b0cc
	if (cr6.eq) goto loc_82B8B0CC;
loc_82B8B0A4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8B0B4;
	sub_82D20DA8(ctx, base);
	// bl 0x82d47830
	ctx.lr = 0x82B8B0B8;
	sub_82D47830(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x82B8B0BC;
	sub_82D47978(ctx, base);
	// bl 0x82c3a3c0
	ctx.lr = 0x82B8B0C0;
	sub_82C3A3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B8B0CC:
	// bl 0x830ff290
	ctx.lr = 0x82B8B0D0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B8B0D4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82b8b0ec
	if (!cr6.eq) goto loc_82B8B0EC;
	// bl 0x82db0a70
	ctx.lr = 0x82B8B0E4;
	sub_82DB0A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82b8b118
	goto loc_82B8B118;
loc_82B8B0EC:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82db0a88
	ctx.lr = 0x82B8B0F4;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b110
	if (cr6.eq) goto loc_82B8B110;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b8b114
	if (cr6.eq) goto loc_82B8B114;
loc_82B8B110:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B8B114:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_82B8B118:
	// lbz r11,588(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8b1d4
	if (!cr6.eq) goto loc_82B8B1D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dafaf8
	ctx.lr = 0x82B8B134;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b1d4
	if (cr6.eq) goto loc_82B8B1D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,588(r29)
	PPC_STORE_U8(ctx.r29.u32 + 588, ctx.r11.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8B158;
	sub_82D19788(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8b1d4
	if (cr6.eq) goto loc_82B8B1D4;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e7d728
	ctx.lr = 0x82B8B170;
	sub_82E7D728(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8B174;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8b188
	if (!cr6.eq) goto loc_82B8B188;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82b8b190
	goto loc_82B8B190;
loc_82B8B188:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82e74498
	ctx.lr = 0x82B8B190;
	sub_82E74498(ctx, base);
loc_82B8B190:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b1cc
	if (cr6.eq) goto loc_82B8B1CC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8B1AC;
	sub_82D20DA8(ctx, base);
	// bl 0x82d47830
	ctx.lr = 0x82B8B1B0;
	sub_82D47830(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x82B8B1B4;
	sub_82D47978(ctx, base);
	// bl 0x82c3a3c0
	ctx.lr = 0x82B8B1B8;
	sub_82C3A3C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8aec8
	ctx.lr = 0x82B8B1C0;
	sub_82B8AEC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B8B1CC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8aec8
	ctx.lr = 0x82B8B1D4;
	sub_82B8AEC8(ctx, base);
loc_82B8B1D4:
	// bl 0x831156e8
	ctx.lr = 0x82B8B1D8;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b29c
	if (cr6.eq) goto loc_82B8B29C;
	// bl 0x8399f8b8
	ctx.lr = 0x82B8B1E8;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8B1F0;
	sub_831156E8(ctx, base);
	// lbz r11,588(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 588);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8b228
	if (!cr6.eq) goto loc_82B8B228;
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r4,228(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dadb20
	ctx.lr = 0x82B8B210;
	sub_82DADB20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b228
	if (cr6.eq) goto loc_82B8B228;
	// bl 0x82d47830
	ctx.lr = 0x82B8B220;
	sub_82D47830(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x82B8B224;
	sub_82D47978(ctx, base);
	// b 0x82b8b29c
	goto loc_82B8B29C;
loc_82B8B228:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b8b23c
	if (cr6.eq) goto loc_82B8B23C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82b8b29c
	if (cr6.eq) goto loc_82B8B29C;
loc_82B8B23C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// bl 0x8312b8f0
	ctx.lr = 0x82B8B248;
	sub_8312B8F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8b29c
	if (cr6.eq) goto loc_82B8B29C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// bl 0x8312b8f0
	ctx.lr = 0x82B8B25C;
	sub_8312B8F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d47920
	ctx.lr = 0x82B8B264;
	sub_82D47920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8b27c
	if (!cr6.eq) goto loc_82B8B27C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47a58
	ctx.lr = 0x82B8B278;
	sub_82D47A58(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B8B27C;
	sub_82D476F0(ctx, base);
loc_82B8B27C:
	// bl 0x82d479b8
	ctx.lr = 0x82B8B280;
	sub_82D479B8(ctx, base);
	// lwz r31,228(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8B28C;
	sub_831156E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8312bb08
	ctx.lr = 0x82B8B29C;
	sub_8312BB08(ctx, base);
loc_82B8B29C:
	// bl 0x830ff290
	ctx.lr = 0x82B8B2A0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8B2A4;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b2b8
	if (cr6.eq) goto loc_82B8B2B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b8ab88
	ctx.lr = 0x82B8B2B8;
	sub_82B8AB88(ctx, base);
loc_82B8B2B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8B2C4"))) PPC_WEAK_FUNC(sub_82B8B2C4);
PPC_FUNC_IMPL(__imp__sub_82B8B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8B2C8"))) PPC_WEAK_FUNC(sub_82B8B2C8);
PPC_FUNC_IMPL(__imp__sub_82B8B2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addis r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -17104896;
	// addic. r10,r10,-6
	xer.ca = ctx.r10.u32 > 5;
	ctx.r10.s64 = ctx.r10.s64 + -6;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b8b36c
	if (cr0.eq) goto loc_82B8B36C;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bne cr6,0x82b8b374
	if (!cr6.eq) goto loc_82B8B374;
	// lbz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8b374
	if (!cr6.eq) goto loc_82B8B374;
	// lbz r10,197(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 197);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r9,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r9.u8);
	// beq cr6,0x82b8b344
	if (cr6.eq) goto loc_82B8B344;
	// lbz r11,198(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 198);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8b374
	if (!cr6.eq) goto loc_82B8B374;
	// bl 0x831021a0
	ctx.lr = 0x82B8B320;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x83102a08
	ctx.lr = 0x82B8B330;
	sub_83102A08(ctx, base);
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
loc_82B8B344:
	// bl 0x831021a0
	ctx.lr = 0x82B8B348;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// bl 0x83102a08
	ctx.lr = 0x82B8B358;
	sub_83102A08(ctx, base);
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
loc_82B8B36C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,196(r11)
	PPC_STORE_U8(ctx.r11.u32 + 196, ctx.r10.u8);
loc_82B8B374:
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

__attribute__((alias("__imp__sub_82B8B388"))) PPC_WEAK_FUNC(sub_82B8B388);
PPC_FUNC_IMPL(__imp__sub_82B8B388) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-22208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82b8b3c8
	if (!cr6.eq) goto loc_82B8B3C8;
	// bl 0x82d19788
	ctx.lr = 0x82B8B3BC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b8b3e4
	goto loc_82B8B3E4;
loc_82B8B3C8:
	// bl 0x82d19788
	ctx.lr = 0x82B8B3CC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8B3DC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82B8B3E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B8B3EC;
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

__attribute__((alias("__imp__sub_82B8B400"))) PPC_WEAK_FUNC(sub_82B8B400);
PPC_FUNC_IMPL(__imp__sub_82B8B400) {
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
	ctx.lr = 0x82B8B418;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B8B41C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x82b8b434
	if (!cr6.eq) goto loc_82B8B434;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,31844
	ctx.r11.s64 = ctx.r11.s64 + 31844;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// b 0x82b8b444
	goto loc_82B8B444;
loc_82B8B434:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830eb538
	ctx.lr = 0x82B8B43C;
	sub_830EB538(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r11,31844
	ctx.r5.s64 = ctx.r11.s64 + 31844;
loc_82B8B444:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8B450;
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

__attribute__((alias("__imp__sub_82B8B464"))) PPC_WEAK_FUNC(sub_82B8B464);
PPC_FUNC_IMPL(__imp__sub_82B8B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8B468"))) PPC_WEAK_FUNC(sub_82B8B468);
PPC_FUNC_IMPL(__imp__sub_82B8B468) {
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
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b4c0
	if (cr6.eq) goto loc_82B8B4C0;
	// lbz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b4c0
	if (cr6.eq) goto loc_82B8B4C0;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b8b4a0
	if (cr6.lt) goto loc_82B8B4A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B8B4A0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82B8B4AC;
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
loc_82B8B4C0:
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

__attribute__((alias("__imp__sub_82B8B4D4"))) PPC_WEAK_FUNC(sub_82B8B4D4);
PPC_FUNC_IMPL(__imp__sub_82B8B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8B4D8"))) PPC_WEAK_FUNC(sub_82B8B4D8);
PPC_FUNC_IMPL(__imp__sub_82B8B4D8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r10,31552
	ctx.r6.s64 = ctx.r10.s64 + 31552;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8B504;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8b520
	if (!cr6.eq) goto loc_82B8B520;
	// bl 0x831021a0
	ctx.lr = 0x82B8B510;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x83102a08
	ctx.lr = 0x82B8B520;
	sub_83102A08(ctx, base);
loc_82B8B520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8B530"))) PPC_WEAK_FUNC(sub_82B8B530);
PPC_FUNC_IMPL(__imp__sub_82B8B530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B8B538;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b8b594
	if (cr6.eq) goto loc_82B8B594;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82B8B55C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b8b584
	if (cr6.eq) goto loc_82B8B584;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8B584;
	sub_8259CB28(ctx, base);
loc_82B8B584:
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b8b55c
	if (!cr6.eq) goto loc_82B8B55C;
loc_82B8B594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8B5A0"))) PPC_WEAK_FUNC(sub_82B8B5A0);
PPC_FUNC_IMPL(__imp__sub_82B8B5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B8B5A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,153(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 153);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8b5c8
	if (!cr6.eq) goto loc_82B8B5C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d1eac0
	ctx.lr = 0x82B8B5C8;
	sub_82D1EAC0(ctx, base);
loc_82B8B5C8:
	// bl 0x831156e8
	ctx.lr = 0x82B8B5CC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r29,r30,6
	ctx.r29.s64 = ctx.r30.s64 + 393216;
	// addi r29,r29,-30316
	ctx.r29.s64 = ctx.r29.s64 + -30316;
	// bl 0x82d19638
	ctx.lr = 0x82B8B5E4;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r28,r10,31536
	ctx.r28.s64 = ctx.r10.s64 + 31536;
	// lbz r11,69(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 69);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82b8b608
	if (cr6.lt) goto loc_82B8B608;
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// b 0x82b8b644
	goto loc_82B8B644;
loc_82B8B608:
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82B8B618;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b8b640
	if (!cr6.eq) goto loc_82B8B640;
	// bl 0x831156e8
	ctx.lr = 0x82B8B628;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82B8B634;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b658
	if (cr6.eq) goto loc_82B8B658;
loc_82B8B640:
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
loc_82B8B644:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8B64C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde38
	ctx.lr = 0x82B8B658;
	sub_82CBDE38(ctx, base);
loc_82B8B658:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r9,5816(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5816);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8b688
	if (!cr6.eq) goto loc_82B8B688;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8B67C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde38
	ctx.lr = 0x82B8B688;
	sub_82CBDE38(ctx, base);
loc_82B8B688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8B690;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8b720
	if (cr6.eq) goto loc_82B8B720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8B6AC;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,32
	ctx.r10.s64 = 32;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r8,69(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 69);
	// subfc r6,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82B8B6E0;
	sub_8312A600(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82b8b708
	if (!cr6.eq) goto loc_82B8B708;
	// bl 0x831156e8
	ctx.lr = 0x82B8B6F0;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82B8B6FC;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b720
	if (cr6.eq) goto loc_82B8B720;
loc_82B8B708:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8B714;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde38
	ctx.lr = 0x82B8B720;
	sub_82CBDE38(ctx, base);
loc_82B8B720:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8B728"))) PPC_WEAK_FUNC(sub_82B8B728);
PPC_FUNC_IMPL(__imp__sub_82B8B728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B8B730;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,31944
	ctx.r9.s64 = ctx.r11.s64 + 31944;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8b784
	if (cr6.eq) goto loc_82B8B784;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82B8B774;
	sub_838ADAB0(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B8B784;
	sub_825952B8(ctx, base);
loc_82B8B784:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,112
	ctx.r30.s64 = ctx.r28.s64 + 112;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8b7c4
	if (cr6.eq) goto loc_82B8B7C4;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82B8B7B4;
	sub_838ADAB0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B8B7C4;
	sub_825952B8(ctx, base);
loc_82B8B7C4:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8b7e8
	if (cr6.eq) goto loc_82B8B7E8;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82B8B7E8;
	sub_825952B8(ctx, base);
loc_82B8B7E8:
	// stw r29,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r29.u32);
	// stw r29,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r29.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B8B7FC;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8B804"))) PPC_WEAK_FUNC(sub_82B8B804);
PPC_FUNC_IMPL(__imp__sub_82B8B804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8B808"))) PPC_WEAK_FUNC(sub_82B8B808);
PPC_FUNC_IMPL(__imp__sub_82B8B808) {
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
	// bl 0x82b8b728
	ctx.lr = 0x82B8B828;
	sub_82B8B728(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8b840
	if (cr6.eq) goto loc_82B8B840;
	// bl 0x82416268
	ctx.lr = 0x82B8B83C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8B840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8B858"))) PPC_WEAK_FUNC(sub_82B8B858);
PPC_FUNC_IMPL(__imp__sub_82B8B858) {
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
	// bl 0x82cbe008
	ctx.lr = 0x82B8B878;
	sub_82CBE008(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stb r30,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r30.u8);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,32240
	ctx.r8.s64 = ctx.r10.s64 + 32240;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r6,-22824
	ctx.r4.s64 = ctx.r6.s64 + -22824;
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r9,r5,-24636
	ctx.r9.s64 = ctx.r5.s64 + -24636;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stb r11,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r11.u8);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// stb r11,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r11.u8);
	// stb r11,198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 198, ctx.r11.u8);
	// stb r8,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r8.u8);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stb r11,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r11.u8);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// bl 0x825aa080
	ctx.lr = 0x82B8B918;
	sub_825AA080(ctx, base);
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

__attribute__((alias("__imp__sub_82B8B934"))) PPC_WEAK_FUNC(sub_82B8B934);
PPC_FUNC_IMPL(__imp__sub_82B8B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8B938"))) PPC_WEAK_FUNC(sub_82B8B938);
PPC_FUNC_IMPL(__imp__sub_82B8B938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8B940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,32240
	ctx.r9.s64 = ctx.r11.s64 + 32240;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82d636d8
	ctx.lr = 0x82B8B968;
	sub_82D636D8(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// addi r6,r7,-24712
	ctx.r6.s64 = ctx.r7.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B8B980;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8b9ac
	if (cr6.eq) goto loc_82B8B9AC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B8B9A8;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82B8B9AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82B8B9C4;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b8b9ec
	if (cr6.eq) goto loc_82B8B9EC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B8B9E8;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82B8B9EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8b728
	ctx.lr = 0x82B8B9F4;
	sub_82B8B728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8B9FC"))) PPC_WEAK_FUNC(sub_82B8B9FC);
PPC_FUNC_IMPL(__imp__sub_82B8B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8BA00"))) PPC_WEAK_FUNC(sub_82B8BA00);
PPC_FUNC_IMPL(__imp__sub_82B8BA00) {
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B8BA34;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ba4c
	if (cr6.eq) goto loc_82B8BA4C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b8b858
	ctx.lr = 0x82B8BA48;
	sub_82B8B858(ctx, base);
	// b 0x82b8ba50
	goto loc_82B8BA50;
loc_82B8BA4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8BA50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8BA68"))) PPC_WEAK_FUNC(sub_82B8BA68);
PPC_FUNC_IMPL(__imp__sub_82B8BA68) {
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
	// bl 0x82b8b938
	ctx.lr = 0x82B8BA88;
	sub_82B8B938(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8baa0
	if (cr6.eq) goto loc_82B8BAA0;
	// bl 0x82416268
	ctx.lr = 0x82B8BA9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8BAA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8BAB8"))) PPC_WEAK_FUNC(sub_82B8BAB8);
PPC_FUNC_IMPL(__imp__sub_82B8BAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B8BAC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B8BACC;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b8c18c
	if (cr6.lt) goto loc_82B8C18C;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82b8baf8
	if (cr6.gt) goto loc_82B8BAF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B8BAF8;
	sub_831CC188(ctx, base);
loc_82B8BAF8:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d19e80
	ctx.lr = 0x82B8BB08;
	sub_82D19E80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,88
	ctx.r9.s64 = 88;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b8bb30
	if (cr6.gt) goto loc_82B8BB30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B8BB30;
	sub_831CC188(ctx, base);
loc_82B8BB30:
	// mulli r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 * 88;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r25,r28,200
	ctx.r25.s64 = ctx.r28.s64 + 200;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B8BB54;
	sub_8259CB28(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r25,28
	ctx.r3.s64 = ctx.r25.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82B8BB68;
	sub_8259CB28(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// bl 0x8259cb28
	ctx.lr = 0x82B8BB7C;
	sub_8259CB28(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r31,r28,228
	ctx.r31.s64 = ctx.r28.s64 + 228;
	// addi r29,r11,31808
	ctx.r29.s64 = ctx.r11.s64 + 31808;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r29,-248
	ctx.r6.s64 = ctx.r29.s64 + -248;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r11.u32);
	// lwz r5,244(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// bl 0x827a8810
	ctx.lr = 0x82B8BBA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bbe0
	if (cr6.eq) goto loc_82B8BBE0;
	// addi r6,r29,-240
	ctx.r6.s64 = ctx.r29.s64 + -240;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BBC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bbe0
	if (cr6.eq) goto loc_82B8BBE0;
	// bl 0x831156e8
	ctx.lr = 0x82B8BBD4;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9f0
	ctx.lr = 0x82B8BBE0;
	sub_8312B9F0(ctx, base);
loc_82B8BBE0:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r6,r29,-228
	ctx.r6.s64 = ctx.r29.s64 + -228;
	// stb r27,148(r28)
	PPC_STORE_U8(ctx.r28.u32 + 148, ctx.r27.u8);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BC00;
	sub_827A8810(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bc14
	if (!cr6.eq) goto loc_82B8BC14;
	// stb r26,148(r28)
	PPC_STORE_U8(ctx.r28.u32 + 148, ctx.r26.u8);
	// b 0x82b8bec8
	goto loc_82B8BEC8;
loc_82B8BC14:
	// addi r6,r29,-220
	ctx.r6.s64 = ctx.r29.s64 + -220;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BC2C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bc50
	if (!cr6.eq) goto loc_82B8BC50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8BC3C;
	sub_82D19638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B8BC44;
	sub_8311E3D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82B8BC4C;
	sub_8311D8C0(ctx, base);
	// b 0x82b8bec8
	goto loc_82B8BEC8;
loc_82B8BC50:
	// addi r6,r29,-204
	ctx.r6.s64 = ctx.r29.s64 + -204;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BC68;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bcc0
	if (!cr6.eq) goto loc_82B8BCC0;
	// bl 0x831021a0
	ctx.lr = 0x82B8BC74;
	sub_831021A0(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r5,r29,-188
	ctx.r5.s64 = ctx.r29.s64 + -188;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x83102a08
	ctx.lr = 0x82B8BC84;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82B8BC88;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// bl 0x83102a08
	ctx.lr = 0x82B8BC98;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82B8BC9C;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x83102a08
	ctx.lr = 0x82B8BCAC;
	sub_83102A08(ctx, base);
	// stb r27,196(r28)
	PPC_STORE_U8(ctx.r28.u32 + 196, ctx.r27.u8);
	// stb r26,152(r28)
	PPC_STORE_U8(ctx.r28.u32 + 152, ctx.r26.u8);
	// bl 0x82d14ce8
	ctx.lr = 0x82B8BCB8;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82B8BCBC;
	sub_82D130B8(ctx, base);
	// b 0x82b8bec8
	goto loc_82B8BEC8;
loc_82B8BCC0:
	// addi r6,r29,-164
	ctx.r6.s64 = ctx.r29.s64 + -164;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BCD8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bcec
	if (!cr6.eq) goto loc_82B8BCEC;
	// stb r26,196(r28)
	PPC_STORE_U8(ctx.r28.u32 + 196, ctx.r26.u8);
	// stb r26,152(r28)
	PPC_STORE_U8(ctx.r28.u32 + 152, ctx.r26.u8);
	// b 0x82b8bec8
	goto loc_82B8BEC8;
loc_82B8BCEC:
	// addi r6,r29,-152
	ctx.r6.s64 = ctx.r29.s64 + -152;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BD04;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bd30
	if (!cr6.eq) goto loc_82B8BD30;
	// bl 0x831021a0
	ctx.lr = 0x82B8BD10;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x83102a08
	ctx.lr = 0x82B8BD20;
	sub_83102A08(ctx, base);
	// stb r27,196(r28)
	PPC_STORE_U8(ctx.r28.u32 + 196, ctx.r27.u8);
	// stb r26,152(r28)
	PPC_STORE_U8(ctx.r28.u32 + 152, ctx.r26.u8);
	// stb r26,197(r28)
	PPC_STORE_U8(ctx.r28.u32 + 197, ctx.r26.u8);
	// b 0x82b8bec8
	goto loc_82B8BEC8;
loc_82B8BD30:
	// addi r6,r29,-136
	ctx.r6.s64 = ctx.r29.s64 + -136;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BD48;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bd78
	if (!cr6.eq) goto loc_82B8BD78;
	// bl 0x831021a0
	ctx.lr = 0x82B8BD54;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x83102a08
	ctx.lr = 0x82B8BD64;
	sub_83102A08(ctx, base);
	// stb r27,196(r28)
	PPC_STORE_U8(ctx.r28.u32 + 196, ctx.r27.u8);
	// stb r26,152(r28)
	PPC_STORE_U8(ctx.r28.u32 + 152, ctx.r26.u8);
	// stb r26,197(r28)
	PPC_STORE_U8(ctx.r28.u32 + 197, ctx.r26.u8);
	// stb r26,198(r28)
	PPC_STORE_U8(ctx.r28.u32 + 198, ctx.r26.u8);
	// b 0x82b8bec8
	goto loc_82B8BEC8;
loc_82B8BD78:
	// addi r6,r29,-116
	ctx.r6.s64 = ctx.r29.s64 + -116;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BD90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8be6c
	if (!cr6.eq) goto loc_82B8BE6C;
	// bl 0x831156e8
	ctx.lr = 0x82B8BD9C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 393216;
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x82b8bdbc
	if (!cr6.lt) goto loc_82B8BDBC;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_82B8BDBC:
	// bl 0x831021a0
	ctx.lr = 0x82B8BDC0;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x83102a08
	ctx.lr = 0x82B8BDD0;
	sub_83102A08(ctx, base);
	// stb r27,196(r28)
	PPC_STORE_U8(ctx.r28.u32 + 196, ctx.r27.u8);
	// stb r26,152(r28)
	PPC_STORE_U8(ctx.r28.u32 + 152, ctx.r26.u8);
	// addi r30,r28,156
	ctx.r30.s64 = ctx.r28.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b46f0
	ctx.lr = 0x82B8BDE4;
	sub_825B46F0(ctx, base);
	// stb r27,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r27.u8);
	// stb r27,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r27.u8);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// lbz r11,193(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 193);
	// stb r11,193(r3)
	PPC_STORE_U8(ctx.r3.u32 + 193, ctx.r11.u8);
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// lwz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// stw r9,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// lbz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// stb r8,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r8.u8);
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f13,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f12,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,216(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f11,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,220(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lfs f10,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,224(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f9,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,228(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r7,232(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// stw r7,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r7.u32);
	// lfs f8,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,236(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lwz r6,172(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8bec8
	if (cr6.eq) goto loc_82B8BEC8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x82B8BE64;
	sub_825B33F0(ctx, base);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// b 0x82b8bec8
	goto loc_82B8BEC8;
loc_82B8BE6C:
	// addi r6,r29,-100
	ctx.r6.s64 = ctx.r29.s64 + -100;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BE84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8beac
	if (cr6.eq) goto loc_82B8BEAC;
	// addi r6,r29,-84
	ctx.r6.s64 = ctx.r29.s64 + -84;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BEA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bec8
	if (!cr6.eq) goto loc_82B8BEC8;
loc_82B8BEAC:
	// bl 0x831156e8
	ctx.lr = 0x82B8BEB0;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8bec8
	if (cr6.eq) goto loc_82B8BEC8;
	// bl 0x831156e8
	ctx.lr = 0x82B8BEC0;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312ba50
	ctx.lr = 0x82B8BEC8;
	sub_8312BA50(ctx, base);
loc_82B8BEC8:
	// addi r6,r29,-76
	ctx.r6.s64 = ctx.r29.s64 + -76;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BEE0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bfa8
	if (cr6.eq) goto loc_82B8BFA8;
	// addi r6,r29,-68
	ctx.r6.s64 = ctx.r29.s64 + -68;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BF00;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bfa8
	if (cr6.eq) goto loc_82B8BFA8;
	// addi r6,r29,-60
	ctx.r6.s64 = ctx.r29.s64 + -60;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BF20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bfa8
	if (cr6.eq) goto loc_82B8BFA8;
	// addi r6,r29,-44
	ctx.r6.s64 = ctx.r29.s64 + -44;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BF40;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bfa8
	if (cr6.eq) goto loc_82B8BFA8;
	// addi r6,r29,-36
	ctx.r6.s64 = ctx.r29.s64 + -36;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BF60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bfa8
	if (cr6.eq) goto loc_82B8BFA8;
	// addi r6,r29,-20
	ctx.r6.s64 = ctx.r29.s64 + -20;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BF80;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8bfa8
	if (cr6.eq) goto loc_82B8BFA8;
	// addi r6,r29,-12
	ctx.r6.s64 = ctx.r29.s64 + -12;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BFA0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8bfc0
	if (!cr6.eq) goto loc_82B8BFC0;
loc_82B8BFA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8BFB0;
	sub_82D19638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B8BFB8;
	sub_8311E3D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82B8BFC0;
	sub_8311D8C0(ctx, base);
loc_82B8BFC0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8BFD8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8c12c
	if (cr6.eq) goto loc_82B8C12C;
	// addi r29,r28,176
	ctx.r29.s64 = ctx.r28.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825bb510
	ctx.lr = 0x82B8BFEC;
	sub_825BB510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B8BFF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a183b0
	ctx.lr = 0x82B8C004;
	sub_82A183B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18310
	ctx.lr = 0x82B8C014;
	sub_82A18310(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a183d0
	ctx.lr = 0x82B8C024;
	sub_82A183D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b8bff4
	if (cr6.lt) goto loc_82B8BFF4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c048
	if (cr6.eq) goto loc_82B8C048;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x82B8C044;
	sub_825A8CA0(ctx, base);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
loc_82B8C048:
	// lbz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 160);
	// addi r31,r28,156
	ctx.r31.s64 = ctx.r28.s64 + 156;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8c060
	if (!cr6.eq) goto loc_82B8C060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x82B8C060;
	sub_825B4670(ctx, base);
loc_82B8C060:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8c07c
	if (!cr6.eq) goto loc_82B8C07C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_82B8C07C:
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82B8C098:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r7,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// rlwinm r9,r4,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// bdnz 0x82b8c098
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8C098;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r11.u32);
	// stw r11,200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 200, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c12c
	if (cr6.eq) goto loc_82B8C12C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_82B8C0DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b8c0dc
	if (!cr0.eq) goto loc_82B8C0DC;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8c128
	if (!cr6.eq) goto loc_82B8C128;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x82B8C108;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,12704
	ctx.r5.s64 = ctx.r11.s64 + 12704;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B8C128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8C128:
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_82B8C12C:
	// lbz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c174
	if (cr6.eq) goto loc_82B8C174;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8c15c
	if (cr6.lt) goto loc_82B8C15C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8C154;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B8C15C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8C16C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B8C174:
	// lbz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c18c
	if (cr6.eq) goto loc_82B8C18C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1c008
	ctx.lr = 0x82B8C18C;
	sub_82D1C008(ctx, base);
loc_82B8C18C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8C194"))) PPC_WEAK_FUNC(sub_82B8C194);
PPC_FUNC_IMPL(__imp__sub_82B8C194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8C198"))) PPC_WEAK_FUNC(sub_82B8C198);
PPC_FUNC_IMPL(__imp__sub_82B8C198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8C1A0;
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
	// beq cr6,0x82b8c2e8
	if (cr6.eq) goto loc_82B8C2E8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,28
	ctx.r29.s64 = 28;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82b8c1e0
	if (!cr0.eq) goto loc_82B8C1E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fd60
	ctx.lr = 0x82B8C1D4;
	sub_8291FD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8C1E0:
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
	// bgt cr6,0x82b8c244
	if (cr6.gt) goto loc_82B8C244;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x83915a50
	ctx.lr = 0x82B8C208;
	sub_83915A50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82B8C218;
	sub_838ADAB0(ctx, base);
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
	// mulli r10,r7,28
	ctx.r10.s64 = ctx.r7.s64 * 28;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8C244:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82b8c27c
	if (cr6.gt) goto loc_82B8C27C;
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83915a50
	ctx.lr = 0x82B8C270;
	sub_83915A50(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82b8c2d4
	goto loc_82B8C2D4;
loc_82B8C27C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c2a8
	if (cr6.eq) goto loc_82B8C2A8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x838adab0
	ctx.lr = 0x82B8C294;
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
	ctx.lr = 0x82B8C2A8;
	sub_825952B8(ctx, base);
loc_82B8C2A8:
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
	// bl 0x825adbd8
	ctx.lr = 0x82B8C2C0;
	sub_825ADBD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8c2e8
	if (cr6.eq) goto loc_82B8C2E8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82B8C2D4:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82b8b530
	ctx.lr = 0x82B8C2E4;
	sub_82B8B530(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82B8C2E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8C2F4"))) PPC_WEAK_FUNC(sub_82B8C2F4);
PPC_FUNC_IMPL(__imp__sub_82B8C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8C2F8"))) PPC_WEAK_FUNC(sub_82B8C2F8);
PPC_FUNC_IMPL(__imp__sub_82B8C2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B8C300;
	__savegprlr_24(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cbdf40
	ctx.lr = 0x82B8C30C;
	sub_82CBDF40(ctx, base);
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// lwz r11,-22208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22208);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x82b8c334
	if (!cr6.eq) goto loc_82B8C334;
	// bl 0x8308e078
	ctx.lr = 0x82B8C328;
	sub_8308E078(ctx, base);
	// lwz r11,-22208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22208);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82B8C334:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// bge cr6,0x82b8c35c
	if (!cr6.lt) goto loc_82B8C35C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82B8C348;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8c35c
	if (cr6.eq) goto loc_82B8C35C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82B8C35C;
	sub_82D195D8(ctx, base);
loc_82B8C35C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r11,2376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82b8c198
	ctx.lr = 0x82B8C370;
	sub_82B8C198(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B8C374;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B8C378;
	sub_830FFAA8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// addi r27,r11,31480
	ctx.r27.s64 = ctx.r11.s64 + 31480;
	// beq cr6,0x82b8c594
	if (cr6.eq) goto loc_82B8C594;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x82b8c640
	if (!cr6.eq) goto loc_82B8C640;
	// lwz r11,-22208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22208);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82b8c4f8
	if (!cr6.eq) goto loc_82B8C4F8;
	// bl 0x831156e8
	ctx.lr = 0x82B8C3A8;
	sub_831156E8(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r10,35260
	ctx.r9.u64 = ctx.r10.u64 | 35260;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// addi r10,r10,-20924
	ctx.r10.s64 = ctx.r10.s64 + -20924;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82b8c3e4
	if (!cr6.eq) goto loc_82B8C3E4;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r25.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r7,r9,37446
	ctx.r7.u64 = ctx.r9.u64 | 37446;
	// stbx r8,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
loc_82B8C3E4:
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aa100
	ctx.lr = 0x82B8C3F4;
	sub_825AA100(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82B8C3FC;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f370
	ctx.lr = 0x82B8C400;
	sub_82A2F370(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831f8200
	ctx.lr = 0x82B8C40C;
	sub_831F8200(ctx, base);
	// rlwinm r11,r24,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1;
	// subfc r9,r24,r3
	xer.ca = ctx.r3.u32 >= ctx.r24.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r24.s64;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// subfe r7,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 & ctx.r29.u64;
	// beq cr6,0x82b8c430
	if (cr6.eq) goto loc_82B8C430;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
loc_82B8C430:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82b8c478
	if (!cr6.eq) goto loc_82B8C478;
	// cmplwi cr6,r28,22
	cr6.compare<uint32_t>(ctx.r28.u32, 22, xer);
	// beq cr6,0x82b8c464
	if (cr6.eq) goto loc_82B8C464;
	// addi r4,r27,-192
	ctx.r4.s64 = ctx.r27.s64 + -192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C454;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C464;
	sub_82CBE148(ctx, base);
loc_82B8C464:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82b8c478
	if (!cr6.eq) goto loc_82B8C478;
	// addi r4,r27,-176
	ctx.r4.s64 = ctx.r27.s64 + -176;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// b 0x82b8c480
	goto loc_82B8C480;
loc_82B8C478:
	// addi r4,r27,-160
	ctx.r4.s64 = ctx.r27.s64 + -160;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
loc_82B8C480:
	// bl 0x837b0c10
	ctx.lr = 0x82B8C484;
	sub_837B0C10(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,281
	ctx.r5.u64 = ctx.r5.u64 | 281;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C498;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-140
	ctx.r4.s64 = ctx.r27.s64 + -140;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C4A4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C4B4;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-124
	ctx.r4.s64 = ctx.r27.s64 + -124;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C4C0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C4D0;
	sub_82CBE148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B8C4D8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b8c4e8
	if (!cr6.eq) goto loc_82B8C4E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82B8C4E8:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// bl 0x82a6a280
	ctx.lr = 0x82B8C4F4;
	sub_82A6A280(ctx, base);
	// b 0x82b8c640
	goto loc_82B8C640;
loc_82B8C4F8:
	// addi r4,r27,-116
	ctx.r4.s64 = ctx.r27.s64 + -116;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C504;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C518;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C524;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C534;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-84
	ctx.r4.s64 = ctx.r27.s64 + -84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C540;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C550;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-72
	ctx.r4.s64 = ctx.r27.s64 + -72;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C55C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C56C;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C578;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C588;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x82b8c62c
	goto loc_82B8C62C;
loc_82B8C594:
	// addi r4,r27,-264
	ctx.r4.s64 = ctx.r27.s64 + -264;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C5A0;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C5B4;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-256
	ctx.r4.s64 = ctx.r27.s64 + -256;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C5C0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C5D0;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-240
	ctx.r4.s64 = ctx.r27.s64 + -240;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C5DC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C5EC;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-224
	ctx.r4.s64 = ctx.r27.s64 + -224;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C5F8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C608;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-208
	ctx.r4.s64 = ctx.r27.s64 + -208;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C614;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C624;
	sub_82CBE148(ctx, base);
	// addi r4,r27,-200
	ctx.r4.s64 = ctx.r27.s64 + -200;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82B8C62C:
	// bl 0x837b0c10
	ctx.lr = 0x82B8C630;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbe148
	ctx.lr = 0x82B8C640;
	sub_82CBE148(ctx, base);
loc_82B8C640:
	// bl 0x831156e8
	ctx.lr = 0x82B8C644;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,52(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r29,r26,6
	ctx.r29.s64 = ctx.r26.s64 + 393216;
	// addi r29,r29,-30316
	ctx.r29.s64 = ctx.r29.s64 + -30316;
	// bl 0x82d1ed60
	ctx.lr = 0x82B8C664;
	sub_82D1ED60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8C66C;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lbz r28,69(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// bl 0x82d19638
	ctx.lr = 0x82B8C684;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,45(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 45);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82b8c6a8
	if (cr6.eq) goto loc_82B8C6A8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b8c6ac
	if (!cr6.eq) goto loc_82B8C6AC;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82b8c6ac
	goto loc_82B8C6AC;
loc_82B8C6A8:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82B8C6AC:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x82b8c734
	if (!cr6.lt) goto loc_82B8C734;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82b8c6e8
	if (!cr6.lt) goto loc_82B8C6E8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b8c6d4
	if (cr6.lt) goto loc_82B8C6D4;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82b8c6dc
	goto loc_82B8C6DC;
loc_82B8C6D4:
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,169(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 169);
loc_82B8C6DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82b8c734
	if (!cr6.eq) goto loc_82B8C734;
loc_82B8C6E8:
	// mulli r11,r10,2800
	ctx.r11.s64 = ctx.r10.s64 * 2800;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82B8C6F8;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b8c720
	if (!cr6.eq) goto loc_82B8C720;
	// bl 0x831156e8
	ctx.lr = 0x82B8C708;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82B8C714;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c760
	if (cr6.eq) goto loc_82B8C760;
loc_82B8C720:
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C72C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82b8c758
	goto loc_82B8C758;
loc_82B8C734:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B8C754;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B8C758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde38
	ctx.lr = 0x82B8C760;
	sub_82CBDE38(ctx, base);
loc_82B8C760:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r9,5816(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5816);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8c790
	if (!cr6.eq) goto loc_82B8C790;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C784;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde38
	ctx.lr = 0x82B8C790;
	sub_82CBDE38(ctx, base);
loc_82B8C790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8C798;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8c828
	if (cr6.eq) goto loc_82B8C828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8C7B4;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,32
	ctx.r10.s64 = 32;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r8,69(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 69);
	// subfc r6,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82B8C7E8;
	sub_8312A600(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82b8c810
	if (!cr6.eq) goto loc_82B8C810;
	// bl 0x831156e8
	ctx.lr = 0x82B8C7F8;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82B8C804;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c828
	if (cr6.eq) goto loc_82B8C828;
loc_82B8C810:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B8C81C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde38
	ctx.lr = 0x82B8C828;
	sub_82CBDE38(ctx, base);
loc_82B8C828:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8C83C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde30
	ctx.lr = 0x82B8C844;
	sub_82CBDE30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8C850"))) PPC_WEAK_FUNC(sub_82B8C850);
PPC_FUNC_IMPL(__imp__sub_82B8C850) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B8C868;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B8C86C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8C870;
	sub_830FF988(ctx, base);
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
	// beq cr6,0x82b8c8a0
	if (cr6.eq) goto loc_82B8C8A0;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8c898
	if (cr6.eq) goto loc_82B8C898;
	// bl 0x82d49a78
	ctx.lr = 0x82B8C898;
	sub_82D49A78(ctx, base);
loc_82B8C898:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82B8C8A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbbec8
	ctx.lr = 0x82B8C8A8;
	sub_82CBBEC8(ctx, base);
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

__attribute__((alias("__imp__sub_82B8C8BC"))) PPC_WEAK_FUNC(sub_82B8C8BC);
PPC_FUNC_IMPL(__imp__sub_82B8C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8C8C0"))) PPC_WEAK_FUNC(sub_82B8C8C0);
PPC_FUNC_IMPL(__imp__sub_82B8C8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8C8C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8C8D4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r31,r30,6
	ctx.r31.s64 = ctx.r30.s64 + 393216;
	// addi r31,r31,-30316
	ctx.r31.s64 = ctx.r31.s64 + -30316;
	// bl 0x82d19638
	ctx.lr = 0x82B8C8EC;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r11,69(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82b8c918
	if (cr6.eq) goto loc_82B8C918;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82b8c91c
	if (!cr6.eq) goto loc_82B8C91C;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82b8c91c
	goto loc_82B8C91C;
loc_82B8C918:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82B8C91C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x82b8c994
	if (!cr6.lt) goto loc_82B8C994;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x82b8c95c
	if (!cr6.lt) goto loc_82B8C95C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b8c948
	if (cr6.lt) goto loc_82B8C948;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82b8c950
	goto loc_82B8C950;
loc_82B8C948:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,169(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 169);
loc_82B8C950:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82b8c994
	if (!cr6.eq) goto loc_82B8C994;
loc_82B8C95C:
	// mulli r11,r10,2800
	ctx.r11.s64 = ctx.r10.s64 * 2800;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82B8C96C;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b8c994
	if (!cr6.eq) goto loc_82B8C994;
	// bl 0x831156e8
	ctx.lr = 0x82B8C97C;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82B8C988;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8c9a0
	if (cr6.eq) goto loc_82B8C9A0;
loc_82B8C994:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8C9A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8C9AC"))) PPC_WEAK_FUNC(sub_82B8C9AC);
PPC_FUNC_IMPL(__imp__sub_82B8C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8C9B0"))) PPC_WEAK_FUNC(sub_82B8C9B0);
PPC_FUNC_IMPL(__imp__sub_82B8C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d1eac0
	sub_82D1EAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8C9C8"))) PPC_WEAK_FUNC(sub_82B8C9C8);
PPC_FUNC_IMPL(__imp__sub_82B8C9C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8C9CC"))) PPC_WEAK_FUNC(sub_82B8C9CC);
PPC_FUNC_IMPL(__imp__sub_82B8C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8C9D0"))) PPC_WEAK_FUNC(sub_82B8C9D0);
PPC_FUNC_IMPL(__imp__sub_82B8C9D0) {
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
	ctx.lr = 0x82B8C9E8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8C9EC;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ca58
	if (cr6.eq) goto loc_82B8CA58;
	// bl 0x831156e8
	ctx.lr = 0x82B8C9FC;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ca58
	if (cr6.eq) goto loc_82B8CA58;
	// bl 0x831156e8
	ctx.lr = 0x82B8CA0C;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b878
	ctx.lr = 0x82B8CA14;
	sub_8312B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8ca58
	if (cr6.eq) goto loc_82B8CA58;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-30268
	ctx.r5.s64 = ctx.r11.s64 + -30268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8CA34;
	sub_82D20DA8(ctx, base);
	// bl 0x82d47830
	ctx.lr = 0x82B8CA38;
	sub_82D47830(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x82B8CA3C;
	sub_82D47978(ctx, base);
	// bl 0x82c3a3c0
	ctx.lr = 0x82B8CA40;
	sub_82C3A3C0(ctx, base);
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
loc_82B8CA58:
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

__attribute__((alias("__imp__sub_82B8CA70"))) PPC_WEAK_FUNC(sub_82B8CA70);
PPC_FUNC_IMPL(__imp__sub_82B8CA70) {
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
	// beq cr6,0x82b8cae0
	if (cr6.eq) goto loc_82B8CAE0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-22208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82b8cabc
	if (!cr6.eq) goto loc_82B8CABC;
	// bl 0x82d19788
	ctx.lr = 0x82B8CAB0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b8cad8
	goto loc_82B8CAD8;
loc_82B8CABC:
	// bl 0x82d19788
	ctx.lr = 0x82B8CAC0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B8CAD0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82B8CAD8:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x82B8CAE0;
	sub_82D19788(ctx, base);
loc_82B8CAE0:
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

__attribute__((alias("__imp__sub_82B8CAF4"))) PPC_WEAK_FUNC(sub_82B8CAF4);
PPC_FUNC_IMPL(__imp__sub_82B8CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8CAF8"))) PPC_WEAK_FUNC(sub_82B8CAF8);
PPC_FUNC_IMPL(__imp__sub_82B8CAF8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r10,-30536
	ctx.r6.s64 = ctx.r10.s64 + -30536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8CB24;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8cb40
	if (!cr6.eq) goto loc_82B8CB40;
	// bl 0x831021a0
	ctx.lr = 0x82B8CB30;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x83102a08
	ctx.lr = 0x82B8CB40;
	sub_83102A08(ctx, base);
loc_82B8CB40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8CB50"))) PPC_WEAK_FUNC(sub_82B8CB50);
PPC_FUNC_IMPL(__imp__sub_82B8CB50) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8CB6C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
	// bl 0x82dad2e0
	ctx.lr = 0x82B8CB7C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8cb8c
	if (cr6.eq) goto loc_82B8CB8C;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// b 0x82b8cbac
	goto loc_82B8CBAC;
loc_82B8CB8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8CB94;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B8CBAC:
	// bl 0x831156e8
	ctx.lr = 0x82B8CBB0;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x82B8CBBC;
	sub_8312B8F0(ctx, base);
	// bl 0x82d47a58
	ctx.lr = 0x82B8CBC0;
	sub_82D47A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r9,-30576
	ctx.r4.s64 = ctx.r9.s64 + -30576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B8CBE8;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d47bb8
	ctx.lr = 0x82B8CBF0;
	sub_82D47BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47b08
	ctx.lr = 0x82B8CBF8;
	sub_82D47B08(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B8CBFC;
	sub_82D476F0(ctx, base);
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

__attribute__((alias("__imp__sub_82B8CC14"))) PPC_WEAK_FUNC(sub_82B8CC14);
PPC_FUNC_IMPL(__imp__sub_82B8CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8CC18"))) PPC_WEAK_FUNC(sub_82B8CC18);
PPC_FUNC_IMPL(__imp__sub_82B8CC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B8CC20;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8CC2C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8cd6c
	if (cr6.eq) goto loc_82B8CD6C;
	// bl 0x831156e8
	ctx.lr = 0x82B8CC3C;
	sub_831156E8(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r29,2056(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B8CC5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8cd6c
	if (cr6.eq) goto loc_82B8CD6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8CC7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8cd6c
	if (!cr6.eq) goto loc_82B8CD6C;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82d2aff8
	ctx.lr = 0x82B8CC90;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8ccac
	if (!cr6.eq) goto loc_82B8CCAC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B8CCAC;
	sub_82D2AEC8(ctx, base);
loc_82B8CCAC:
	// bl 0x82dad2e0
	ctx.lr = 0x82B8CCB0;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312c748
	ctx.lr = 0x82B8CCC0;
	sub_8312C748(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312c748
	ctx.lr = 0x82B8CCD0;
	sub_8312C748(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// add r28,r3,r26
	ctx.r28.u64 = ctx.r3.u64 + ctx.r26.u64;
	// addi r31,r11,-30544
	ctx.r31.s64 = ctx.r11.s64 + -30544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82B8CCE8;
	sub_837B0C10(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r27,r11,100
	ctx.r27.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8ccfc
	if (!cr6.eq) goto loc_82B8CCFC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82B8CCFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82B8CD04;
	sub_82B85FF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc268
	ctx.lr = 0x82B8CD1C;
	sub_82CBC268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8CD24;
	sub_8387E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8CD30;
	sub_837B0C10(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8cd44
	if (!cr6.eq) goto loc_82B8CD44;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B8CD44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82B8CD4C;
	sub_82B85FF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc268
	ctx.lr = 0x82B8CD64;
	sub_82CBC268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B8CD6C;
	sub_8387E8E0(ctx, base);
loc_82B8CD6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8CD74"))) PPC_WEAK_FUNC(sub_82B8CD74);
PPC_FUNC_IMPL(__imp__sub_82B8CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8CD78"))) PPC_WEAK_FUNC(sub_82B8CD78);
PPC_FUNC_IMPL(__imp__sub_82B8CD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B8CD80;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,2056(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B8CDA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8ced8
	if (cr6.eq) goto loc_82B8CED8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8CDC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8ced8
	if (!cr6.eq) goto loc_82B8CED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830eb538
	ctx.lr = 0x82B8CDD8;
	sub_830EB538(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8CDDC;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8cdf0
	if (cr6.eq) goto loc_82B8CDF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82dafab0
	ctx.lr = 0x82B8CDF0;
	sub_82DAFAB0(ctx, base);
loc_82B8CDF0:
	// bl 0x831156e8
	ctx.lr = 0x82B8CDF4;
	sub_831156E8(ctx, base);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8CDFC;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ce0c
	if (cr6.eq) goto loc_82B8CE0C;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// b 0x82b8ce34
	goto loc_82B8CE34;
loc_82B8CE0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8CE14;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r8,r10,35265
	ctx.r8.u64 = ctx.r10.u64 | 35265;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r31,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B8CE34:
	// bl 0x831156e8
	ctx.lr = 0x82B8CE38;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8cea8
	if (cr6.eq) goto loc_82B8CEA8;
	// bl 0x82d479b8
	ctx.lr = 0x82B8CE48;
	sub_82D479B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d47b08
	ctx.lr = 0x82B8CE54;
	sub_82D47B08(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B8CE58;
	sub_831156E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312bb08
	ctx.lr = 0x82B8CE68;
	sub_8312BB08(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B8CE6C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8CE70;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8cea8
	if (cr6.eq) goto loc_82B8CEA8;
	// bl 0x831156e8
	ctx.lr = 0x82B8CE80;
	sub_831156E8(ctx, base);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8CE88;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B8CE9C;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B8CEA8;
	sub_8312B9C8(ctx, base);
loc_82B8CEA8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,-30280
	ctx.r31.s64 = ctx.r11.s64 + -30280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// bl 0x82d20da8
	ctx.lr = 0x82B8CEC0;
	sub_82D20DA8(ctx, base);
	// addi r4,r31,-2670
	ctx.r4.s64 = ctx.r31.s64 + -2670;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8CECC;
	sub_837B0C10(ctx, base);
	// bl 0x82d47bb8
	ctx.lr = 0x82B8CED0;
	sub_82D47BB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B8CED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830eb538
	ctx.lr = 0x82B8CEE0;
	sub_830EB538(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8CEF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8cf24
	if (cr6.eq) goto loc_82B8CF24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8CF14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b8cf24
	if (!cr6.eq) goto loc_82B8CF24;
	// bl 0x82c3a3c0
	ctx.lr = 0x82B8CF24;
	sub_82C3A3C0(ctx, base);
loc_82B8CF24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-30280
	ctx.r5.s64 = ctx.r11.s64 + -30280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8CF38;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8CF40"))) PPC_WEAK_FUNC(sub_82B8CF40);
PPC_FUNC_IMPL(__imp__sub_82B8CF40) {
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
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,2056(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B8CF74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8cfc8
	if (cr6.eq) goto loc_82B8CFC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8CF94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8cfc8
	if (!cr6.eq) goto loc_82B8CFC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8cc18
	ctx.lr = 0x82B8CFA8;
	sub_82B8CC18(ctx, base);
	// lbz r11,121(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8cfdc
	if (cr6.eq) goto loc_82B8CFDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b8cb50
	ctx.lr = 0x82B8CFBC;
	sub_82B8CB50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,121(r30)
	PPC_STORE_U8(ctx.r30.u32 + 121, ctx.r11.u8);
	// b 0x82b8cfdc
	goto loc_82B8CFDC;
loc_82B8CFC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8CFDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8CFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8CFF4"))) PPC_WEAK_FUNC(sub_82B8CFF4);
PPC_FUNC_IMPL(__imp__sub_82B8CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8CFF8"))) PPC_WEAK_FUNC(sub_82B8CFF8);
PPC_FUNC_IMPL(__imp__sub_82B8CFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B8D000;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B8D00C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8d190
	if (cr6.eq) goto loc_82B8D190;
	// bl 0x831156e8
	ctx.lr = 0x82B8D020;
	sub_831156E8(ctx, base);
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9f0
	ctx.lr = 0x82B8D030;
	sub_8312B9F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b878
	ctx.lr = 0x82B8D038;
	sub_8312B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8d050
	if (cr6.eq) goto loc_82B8D050;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B8D050;
	sub_83102DB0(ctx, base);
loc_82B8D050:
	// bl 0x830ff290
	ctx.lr = 0x82B8D054;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8D058;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8d190
	if (cr6.eq) goto loc_82B8D190;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8d160
	if (!cr6.eq) goto loc_82B8D160;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,14372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14372);
	// bl 0x83815a48
	ctx.lr = 0x82B8D07C;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8d228
	if (cr6.eq) goto loc_82B8D228;
	// bl 0x82d4b8e0
	ctx.lr = 0x82B8D088;
	sub_82D4B8E0(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// bl 0x82d2bbb8
	ctx.lr = 0x82B8D090;
	sub_82D2BBB8(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-30584
	ctx.r29.s64 = ctx.r11.s64 + -30584;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8D0B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-2049
	ctx.r4.s64 = -2049;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x83545640
	ctx.lr = 0x82B8D0C0;
	sub_83545640(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9d0
	ctx.lr = 0x82B8D0CC;
	sub_8312B9D0(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8D0D0;
	sub_82DAD2E0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,60(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B8D0E4;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B8D0F0;
	sub_8312B9C8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8d104
	if (!cr6.eq) goto loc_82B8D104;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B8D104:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8D110;
	sub_837B0C10(ctx, base);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,134
	ctx.r5.u64 = ctx.r5.u64 | 134;
	// bl 0x82a69a28
	ctx.lr = 0x82B8D124;
	sub_82A69A28(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b8d138
	if (!cr6.eq) goto loc_82B8D138;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B8D138:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B8D144;
	sub_837B0C10(ctx, base);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,37
	ctx.r5.u64 = ctx.r5.u64 | 37;
	// bl 0x82a69a28
	ctx.lr = 0x82B8D158;
	sub_82A69A28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8cc18
	ctx.lr = 0x82B8D160;
	sub_82B8CC18(ctx, base);
loc_82B8D160:
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8D174;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8d190
	if (cr6.eq) goto loc_82B8D190;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B8D190;
	sub_82D2AEC8(ctx, base);
loc_82B8D190:
	// bl 0x82dad2e0
	ctx.lr = 0x82B8D194;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8d1a8
	if (cr6.eq) goto loc_82B8D1A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82dafab0
	ctx.lr = 0x82B8D1A8;
	sub_82DAFAB0(ctx, base);
loc_82B8D1A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8ca70
	ctx.lr = 0x82B8D1B0;
	sub_82B8CA70(ctx, base);
	// lwz r30,2056(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8D1C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8d220
	if (cr6.eq) goto loc_82B8D220;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8D1E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8d200
	if (cr6.eq) goto loc_82B8D200;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// b 0x82b8d214
	goto loc_82B8D214;
loc_82B8D200:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b8d214
	if (!cr6.eq) goto loc_82B8D214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8cb50
	ctx.lr = 0x82B8D214;
	sub_82B8CB50(ctx, base);
loc_82B8D214:
	// bl 0x82c3a830
	ctx.lr = 0x82B8D218;
	sub_82C3A830(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c3a428
	ctx.lr = 0x82B8D220;
	sub_82C3A428(ctx, base);
loc_82B8D220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbde30
	ctx.lr = 0x82B8D228;
	sub_82CBDE30(ctx, base);
loc_82B8D228:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8D234"))) PPC_WEAK_FUNC(sub_82B8D234);
PPC_FUNC_IMPL(__imp__sub_82B8D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8D238"))) PPC_WEAK_FUNC(sub_82B8D238);
PPC_FUNC_IMPL(__imp__sub_82B8D238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B8D240;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19e80
	ctx.lr = 0x82B8D258;
	sub_82D19E80(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,88
	ctx.r27.s64 = 88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b8d720
	if (cr0.eq) goto loc_82B8D720;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B8D274:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19e80
	ctx.lr = 0x82B8D27C;
	sub_82D19E80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82b8d398
	if (!cr6.gt) goto loc_82B8D398;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// blt cr6,0x82b8d2b4
	if (cr6.lt) goto loc_82B8D2B4;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82b8d2b8
	goto loc_82B8D2B8;
loc_82B8D2B4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82B8D2B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82B8D2C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8d2d0
	if (!cr6.eq) goto loc_82B8D2D0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82B8D2D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// bl 0x82d19e80
	ctx.lr = 0x82B8D2E0;
	sub_82D19E80(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b8d274
	if (cr6.lt) goto loc_82B8D274;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b8d720
	if (cr6.eq) goto loc_82B8D720;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// addi r31,r25,28
	ctx.r31.s64 = ctx.r25.s64 + 28;
	// addi r30,r11,-30300
	ctx.r30.s64 = ctx.r11.s64 + -30300;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r30,-228
	ctx.r6.s64 = ctx.r30.s64 + -228;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D324;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d35c
	if (cr6.eq) goto loc_82B8D35C;
	// addi r6,r30,-220
	ctx.r6.s64 = ctx.r30.s64 + -220;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D344;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d35c
	if (cr6.eq) goto loc_82B8D35C;
	// bl 0x831156e8
	ctx.lr = 0x82B8D350;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9f0
	ctx.lr = 0x82B8D35C;
	sub_8312B9F0(ctx, base);
loc_82B8D35C:
	// addi r6,r30,-208
	ctx.r6.s64 = ctx.r30.s64 + -208;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D374;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8d3a4
	if (!cr6.eq) goto loc_82B8D3A4;
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x82B8D394;
	sub_835977D8(ctx, base);
	// b 0x82b8d4fc
	goto loc_82B8D4FC;
loc_82B8D398:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B8D3A4;
	sub_831CC188(ctx, base);
loc_82B8D3A4:
	// addi r6,r30,-200
	ctx.r6.s64 = ctx.r30.s64 + -200;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D3BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8d3e0
	if (!cr6.eq) goto loc_82B8D3E0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8D3CC;
	sub_82D19638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B8D3D4;
	sub_8311E3D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82B8D3DC;
	sub_8311D8C0(ctx, base);
	// b 0x82b8d4fc
	goto loc_82B8D4FC;
loc_82B8D3E0:
	// addi r6,r30,-184
	ctx.r6.s64 = ctx.r30.s64 + -184;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D3F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d4e0
	if (cr6.eq) goto loc_82B8D4E0;
	// addi r6,r30,-168
	ctx.r6.s64 = ctx.r30.s64 + -168;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D418;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d4e0
	if (cr6.eq) goto loc_82B8D4E0;
	// addi r6,r30,-160
	ctx.r6.s64 = ctx.r30.s64 + -160;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D438;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8d4fc
	if (!cr6.eq) goto loc_82B8D4FC;
	// bl 0x830ff290
	ctx.lr = 0x82B8D444;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8D448;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8d4fc
	if (cr6.eq) goto loc_82B8D4FC;
	// bl 0x82c3a7a8
	ctx.lr = 0x82B8D458;
	sub_82C3A7A8(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r29,2056(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B8D474;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8d4a0
	if (cr6.eq) goto loc_82B8D4A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B8D498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B8D4A0:
	// bl 0x831156e8
	ctx.lr = 0x82B8D4A4;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8d4fc
	if (cr6.eq) goto loc_82B8D4FC;
	// bl 0x831156e8
	ctx.lr = 0x82B8D4B4;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dad2e0
	ctx.lr = 0x82B8D4BC;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8312d788
	ctx.lr = 0x82B8D4D0;
	sub_8312D788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x82B8D4DC;
	sub_8312B9C8(ctx, base);
	// b 0x82b8d4fc
	goto loc_82B8D4FC;
loc_82B8D4E0:
	// bl 0x831156e8
	ctx.lr = 0x82B8D4E4;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b8d4fc
	if (cr6.eq) goto loc_82B8D4FC;
	// bl 0x831156e8
	ctx.lr = 0x82B8D4F4;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312ba50
	ctx.lr = 0x82B8D4FC;
	sub_8312BA50(ctx, base);
loc_82B8D4FC:
	// addi r6,r30,-152
	ctx.r6.s64 = ctx.r30.s64 + -152;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D514;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d5dc
	if (cr6.eq) goto loc_82B8D5DC;
	// addi r6,r30,-144
	ctx.r6.s64 = ctx.r30.s64 + -144;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D534;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d5dc
	if (cr6.eq) goto loc_82B8D5DC;
	// addi r6,r30,-136
	ctx.r6.s64 = ctx.r30.s64 + -136;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D554;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d5dc
	if (cr6.eq) goto loc_82B8D5DC;
	// addi r6,r30,-120
	ctx.r6.s64 = ctx.r30.s64 + -120;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D574;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d5dc
	if (cr6.eq) goto loc_82B8D5DC;
	// addi r6,r30,-112
	ctx.r6.s64 = ctx.r30.s64 + -112;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D594;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d5dc
	if (cr6.eq) goto loc_82B8D5DC;
	// addi r6,r30,-96
	ctx.r6.s64 = ctx.r30.s64 + -96;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D5B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d5dc
	if (cr6.eq) goto loc_82B8D5DC;
	// addi r6,r30,-88
	ctx.r6.s64 = ctx.r30.s64 + -88;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D5D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b8d5f4
	if (!cr6.eq) goto loc_82B8D5F4;
loc_82B8D5DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19638
	ctx.lr = 0x82B8D5E4;
	sub_82D19638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82B8D5EC;
	sub_8311E3D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82B8D5F4;
	sub_8311D8C0(ctx, base);
loc_82B8D5F4:
	// addi r6,r30,-76
	ctx.r6.s64 = ctx.r30.s64 + -76;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D60C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// addi r6,r30,-68
	ctx.r6.s64 = ctx.r30.s64 + -68;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D62C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// addi r6,r30,-60
	ctx.r6.s64 = ctx.r30.s64 + -60;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D64C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// addi r6,r30,-44
	ctx.r6.s64 = ctx.r30.s64 + -44;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D66C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// addi r6,r30,-36
	ctx.r6.s64 = ctx.r30.s64 + -36;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D68C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D6AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// addi r6,r30,-12
	ctx.r6.s64 = ctx.r30.s64 + -12;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D6CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B8D6EC;
	sub_827A8810(ctx, base);
loc_82B8D6EC:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b8d710
	if (cr6.lt) goto loc_82B8D710;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8D708;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B8D710:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B8D720;
	sub_82D20DA8(ctx, base);
loc_82B8D720:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8D728"))) PPC_WEAK_FUNC(sub_82B8D728);
PPC_FUNC_IMPL(__imp__sub_82B8D728) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b8cd78
	sub_82B8CD78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B8D72C"))) PPC_WEAK_FUNC(sub_82B8D72C);
PPC_FUNC_IMPL(__imp__sub_82B8D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B8D730"))) PPC_WEAK_FUNC(sub_82B8D730);
PPC_FUNC_IMPL(__imp__sub_82B8D730) {
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,20581
	ctx.r11.u64 = ctx.r11.u64 | 20581;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b8d774
	if (cr6.eq) goto loc_82B8D774;
	// ble cr6,0x82b8d788
	if (!cr6.gt) goto loc_82B8D788;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,20583
	ctx.r9.u64 = ctx.r11.u64 | 20583;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82b8d788
	if (cr6.gt) goto loc_82B8D788;
	// bl 0x82b8cd78
	ctx.lr = 0x82B8D770;
	sub_82B8CD78(ctx, base);
	// b 0x82b8d788
	goto loc_82B8D788;
loc_82B8D774:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82cbce48
	ctx.lr = 0x82B8D77C;
	sub_82CBCE48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8d238
	ctx.lr = 0x82B8D788;
	sub_82B8D238(ctx, base);
loc_82B8D788:
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

__attribute__((alias("__imp__sub_82B8D7A0"))) PPC_WEAK_FUNC(sub_82B8D7A0);
PPC_FUNC_IMPL(__imp__sub_82B8D7A0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cbc0b8
	ctx.lr = 0x82B8D7C0;
	sub_82CBC0B8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-30168
	ctx.r8.s64 = ctx.r10.s64 + -30168;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// addi r4,r6,-24692
	ctx.r4.s64 = ctx.r6.s64 + -24692;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// addi r10,r5,-22824
	ctx.r10.s64 = ctx.r5.s64 + -22824;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r8,r9,-24636
	ctx.r8.s64 = ctx.r9.s64 + -24636;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x82B8D844;
	sub_825AB6C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B8D848;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B8D84C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B8D850;
	sub_830FF988(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b8d87c
	if (cr6.eq) goto loc_82B8D87C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r4,14376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14376);
	// bl 0x82d20ae0
	ctx.lr = 0x82B8D878;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B8D87C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B8D894"))) PPC_WEAK_FUNC(sub_82B8D894);
PPC_FUNC_IMPL(__imp__sub_82B8D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

