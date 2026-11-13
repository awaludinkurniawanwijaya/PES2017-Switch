#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8301F660"))) PPC_WEAK_FUNC(sub_8301F660);
PPC_FUNC_IMPL(__imp__sub_8301F660) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
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
	// bgt cr6,0x8301f828
	if (cr6.gt) goto loc_8301F828;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8301f6cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301F6CC;
	// bdzf 4*cr6+eq,0x8301f76c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301F76C;
	// bdzf 4*cr6+eq,0x8301f78c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301F78C;
	// bdzf 4*cr6+eq,0x8301f7f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301F7F4;
	// bne cr6,0x8301f7c0
	if (!cr6.eq) goto loc_8301F7C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301f590
	ctx.lr = 0x8301F6AC;
	sub_8301F590(ctx, base);
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
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8301f870
	goto loc_8301F870;
loc_8301F6CC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8301f71c
	if (!cr6.eq) goto loc_8301F71C;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r11,r10,8532
	ctx.r11.s64 = ctx.r10.s64 + 8532;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// bl 0x839e64d8
	ctx.lr = 0x8301F6FC;
	sub_839E64D8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8301F710;
	sub_83103100(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301f870
	goto loc_8301F870;
loc_8301F71C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8301f77c
	if (!cr6.eq) goto loc_8301F77C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r11,r9,8532
	ctx.r11.s64 = ctx.r9.s64 + 8532;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// bl 0x839e64d8
	ctx.lr = 0x8301F74C;
	sub_839E64D8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8301F760;
	sub_83103100(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301f870
	goto loc_8301F870;
loc_8301F76C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8301f784
	if (cr6.eq) goto loc_8301F784;
loc_8301F77C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8301F784:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301f870
	goto loc_8301F870;
loc_8301F78C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,8532
	ctx.r11.s64 = ctx.r11.s64 + 8532;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8301F7A0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301F7AC;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8301F7B4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8301f86c
	goto loc_8301F86C;
loc_8301F7C0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,8532
	ctx.r11.s64 = ctx.r11.s64 + 8532;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8301F7D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301F7E0;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8301F7E8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8301f86c
	goto loc_8301F86C;
loc_8301F7F4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,8532
	ctx.r11.s64 = ctx.r11.s64 + 8532;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8301F808;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301F814;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8301F81C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8301f86c
	goto loc_8301F86C;
loc_8301F828:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,8532
	ctx.r4.s64 = ctx.r11.s64 + 8532;
	// bl 0x837b0c10
	ctx.lr = 0x8301F838;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301F844;
	sub_82E88020(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8301f864
	if (cr6.lt) goto loc_8301F864;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8301F864;
	sub_825952B8(ctx, base);
loc_8301F864:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8301F86C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8301F870:
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

__attribute__((alias("__imp__sub_8301F888"))) PPC_WEAK_FUNC(sub_8301F888);
PPC_FUNC_IMPL(__imp__sub_8301F888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8301f8b0
	if (!cr6.eq) goto loc_8301F8B0;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8301f8b0
	if (!cr6.eq) goto loc_8301F8B0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8301F8B0:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F8B4"))) PPC_WEAK_FUNC(sub_8301F8B4);
PPC_FUNC_IMPL(__imp__sub_8301F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F8B8"))) PPC_WEAK_FUNC(sub_8301F8B8);
PPC_FUNC_IMPL(__imp__sub_8301F8B8) {
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
	ctx.lr = 0x8301F8E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301f924
	if (cr6.eq) goto loc_8301F924;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8301F8FC;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,9144
	ctx.r9.s64 = ctx.r11.s64 + 9144;
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
	// b 0x8301f928
	goto loc_8301F928;
loc_8301F924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301F928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F940"))) PPC_WEAK_FUNC(sub_8301F940);
PPC_FUNC_IMPL(__imp__sub_8301F940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8301f950
	if (cr6.lt) goto loc_8301F950;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8301F950:
	// b 0x8301f8b8
	sub_8301F8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F954"))) PPC_WEAK_FUNC(sub_8301F954);
PPC_FUNC_IMPL(__imp__sub_8301F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F958"))) PPC_WEAK_FUNC(sub_8301F958);
PPC_FUNC_IMPL(__imp__sub_8301F958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8301F960;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8301F970;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8301f9d0
	if (!cr6.eq) goto loc_8301F9D0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x8301F990;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301F99C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8301f9bc
	if (cr6.lt) goto loc_8301F9BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8301F9BC;
	sub_825952B8(ctx, base);
loc_8301F9BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8301F9D0:
	// bl 0x831156e8
	ctx.lr = 0x8301F9D4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8301fa18
	if (!cr6.eq) goto loc_8301FA18;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8301F9F0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301F9FC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8301FA04;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8301FA18:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8301fb2c
	if (cr6.gt) goto loc_8301FB2C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8301fabc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301FABC;
	// bdzf 4*cr6+eq,0x8301fac8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301FAC8;
	// bne cr6,0x8301fb04
	if (!cr6.eq) goto loc_8301FB04;
	// bl 0x831f8200
	ctx.lr = 0x8301FA40;
	sub_831F8200(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8291bd40
	ctx.lr = 0x8301FA4C;
	sub_8291BD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8301fab4
	if (cr6.eq) goto loc_8301FAB4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8301FA74;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,407
	ctx.r4.u64 = ctx.r4.u64 | 407;
	// bl 0x82d2ada8
	ctx.lr = 0x8301FA84;
	sub_82D2ADA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8301FA90;
	sub_83103100(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9e3d8
	ctx.lr = 0x8301FAA0;
	sub_82D9E3D8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8301FAB4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8301FABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8301FAC8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8301FADC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301FAE8;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8301FAF0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8301FB04:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8301FB18;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301FB24;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8301fb4c
	goto loc_8301FB4C;
loc_8301FB2C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,9052
	ctx.r4.s64 = ctx.r11.s64 + 9052;
	// bl 0x837b0c10
	ctx.lr = 0x8301FB3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301FB48;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_8301FB4C:
	// bl 0x8387e8e0
	ctx.lr = 0x8301FB50;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301FB64"))) PPC_WEAK_FUNC(sub_8301FB64);
PPC_FUNC_IMPL(__imp__sub_8301FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FB68"))) PPC_WEAK_FUNC(sub_8301FB68);
PPC_FUNC_IMPL(__imp__sub_8301FB68) {
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
	ctx.lr = 0x8301FB98;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301fbd8
	if (cr6.eq) goto loc_8301FBD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8301FBAC;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,9664
	ctx.r8.s64 = ctx.r10.s64 + 9664;
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
	// b 0x8301fbdc
	goto loc_8301FBDC;
loc_8301FBD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301FBDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FBF4"))) PPC_WEAK_FUNC(sub_8301FBF4);
PPC_FUNC_IMPL(__imp__sub_8301FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FBF8"))) PPC_WEAK_FUNC(sub_8301FBF8);
PPC_FUNC_IMPL(__imp__sub_8301FBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8301fc08
	if (cr6.lt) goto loc_8301FC08;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8301FC08:
	// b 0x8301fb68
	sub_8301FB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301FC0C"))) PPC_WEAK_FUNC(sub_8301FC0C);
PPC_FUNC_IMPL(__imp__sub_8301FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FC10"))) PPC_WEAK_FUNC(sub_8301FC10);
PPC_FUNC_IMPL(__imp__sub_8301FC10) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8301fd88
	if (cr6.gt) goto loc_8301FD88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8301fc80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301FC80;
	// bdzf 4*cr6+eq,0x8301fccc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301FCCC;
	// bdzf 4*cr6+eq,0x8301fd20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301FD20;
	// bne cr6,0x8301fd54
	if (!cr6.eq) goto loc_8301FD54;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d8bb28
	ctx.lr = 0x8301FC60;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8301fdd0
	goto loc_8301FDD0;
loc_8301FC80:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,9572
	ctx.r11.s64 = ctx.r11.s64 + 9572;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x8301FC94;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8301FCA0;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8301FCAC;
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
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8301fdd0
	goto loc_8301FDD0;
loc_8301FCCC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8301FCD4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8301fd18
	if (cr6.eq) goto loc_8301FD18;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301fd04
	if (cr6.eq) goto loc_8301FD04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301FCFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8301FD04:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_8301FD18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301fdd0
	goto loc_8301FDD0;
loc_8301FD20:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,9572
	ctx.r11.s64 = ctx.r11.s64 + 9572;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8301FD34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301FD40;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8301FD48;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8301fdcc
	goto loc_8301FDCC;
loc_8301FD54:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,9572
	ctx.r11.s64 = ctx.r11.s64 + 9572;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8301FD68;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301FD74;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8301FD7C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8301fdcc
	goto loc_8301FDCC;
loc_8301FD88:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,9572
	ctx.r4.s64 = ctx.r11.s64 + 9572;
	// bl 0x837b0c10
	ctx.lr = 0x8301FD98;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301FDA4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8301fdc4
	if (cr6.lt) goto loc_8301FDC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8301FDC4;
	sub_825952B8(ctx, base);
loc_8301FDC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8301FDCC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8301FDD0:
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

__attribute__((alias("__imp__sub_8301FDE8"))) PPC_WEAK_FUNC(sub_8301FDE8);
PPC_FUNC_IMPL(__imp__sub_8301FDE8) {
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
	ctx.lr = 0x8301FE18;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301fe5c
	if (cr6.eq) goto loc_8301FE5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8301FE2C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,10232
	ctx.r8.s64 = ctx.r10.s64 + 10232;
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
	// b 0x8301fe60
	goto loc_8301FE60;
loc_8301FE5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301FE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FE78"))) PPC_WEAK_FUNC(sub_8301FE78);
PPC_FUNC_IMPL(__imp__sub_8301FE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8301fe88
	if (cr6.lt) goto loc_8301FE88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8301FE88:
	// b 0x8301fde8
	sub_8301FDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301FE8C"))) PPC_WEAK_FUNC(sub_8301FE8C);
PPC_FUNC_IMPL(__imp__sub_8301FE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FE90"))) PPC_WEAK_FUNC(sub_8301FE90);
PPC_FUNC_IMPL(__imp__sub_8301FE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8301FE98;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x8301FEA0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8301feb0
	if (!cr6.eq) goto loc_8301FEB0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8301FEB0:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x8301FEB8;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x8301FEBC;
	sub_82DA4368(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x8301FEC4;
	sub_83102DB0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x829259c8
	ctx.lr = 0x8301FEE4;
	sub_829259C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301ff64
	if (cr6.eq) goto loc_8301FF64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8301FEF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8301ff58
	if (!cr6.eq) goto loc_8301FF58;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82d8b758
	ctx.lr = 0x8301FF10;
	sub_82D8B758(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8301ff44
	if (cr6.eq) goto loc_8301FF44;
loc_8301FF20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// beq cr6,0x8301ff3c
	if (cr6.eq) goto loc_8301FF3C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8301ff20
	if (!cr6.eq) goto loc_8301FF20;
	// b 0x8301ff44
	goto loc_8301FF44;
loc_8301FF3C:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8301ff58
	if (!cr6.eq) goto loc_8301FF58;
loc_8301FF44:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x8301FF50;
	sub_835977D8(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8301FF58:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// bne 0x8301fef4
	if (!cr0.eq) goto loc_8301FEF4;
loc_8301FF64:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// srawi r31,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x8301ff88
	if (cr6.eq) goto loc_8301FF88;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8301FF88;
	sub_825952B8(ctx, base);
loc_8301FF88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301FF94"))) PPC_WEAK_FUNC(sub_8301FF94);
PPC_FUNC_IMPL(__imp__sub_8301FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FF98"))) PPC_WEAK_FUNC(sub_8301FF98);
PPC_FUNC_IMPL(__imp__sub_8301FF98) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8302021c
	if (cr6.gt) goto loc_8302021C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302007c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302007C;
	// bdzf 4*cr6+eq,0x830200c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830200C4;
	// bdzf 4*cr6+eq,0x83020114
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020114;
	// bdzf 4*cr6+eq,0x83020160
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020160;
	// bdzf 4*cr6+eq,0x83020180
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020180;
	// bdzf 4*cr6+eq,0x830201b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830201B4;
	// bne cr6,0x830201e8
	if (!cr6.eq) goto loc_830201E8;
	// bl 0x82d86078
	ctx.lr = 0x8301FFE8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83020024
	if (!cr6.eq) goto loc_83020024;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,10140
	ctx.r11.s64 = ctx.r11.s64 + 10140;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x837b0c10
	ctx.lr = 0x83020004;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020010;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83020018;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020260
	goto loc_83020260;
loc_83020024:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x8302002C;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x83020030;
	sub_82DA4368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d9a008
	ctx.lr = 0x83020038;
	sub_82D9A008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301fe90
	ctx.lr = 0x83020040;
	sub_8301FE90(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x8302006c
	if (cr6.lt) goto loc_8302006C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x83020050;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302006c
	if (!cr6.eq) goto loc_8302006C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83020264
	goto loc_83020264;
loc_8302006C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83020264
	goto loc_83020264;
loc_8302007C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,10140
	ctx.r11.s64 = ctx.r11.s64 + 10140;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x83020090;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302009C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x830200A8;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83020264
	goto loc_83020264;
loc_830200C4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830200CC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83020178
	if (cr6.eq) goto loc_83020178;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830200fc
	if (cr6.eq) goto loc_830200FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830200F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830200FC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x8302006c
	if (cr6.eq) goto loc_8302006C;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83020264
	goto loc_83020264;
loc_83020114:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r11,r9,10140
	ctx.r11.s64 = ctx.r9.s64 + 10140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// bl 0x839e64d8
	ctx.lr = 0x8302013C;
	sub_839E64D8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x83103100
	ctx.lr = 0x83020150;
	sub_83103100(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83020264
	goto loc_83020264;
loc_83020160:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83020178
	if (cr6.eq) goto loc_83020178;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83020178:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83020264
	goto loc_83020264;
loc_83020180:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,10140
	ctx.r11.s64 = ctx.r11.s64 + 10140;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83020194;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830201A0;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830201A8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020260
	goto loc_83020260;
loc_830201B4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,10140
	ctx.r11.s64 = ctx.r11.s64 + 10140;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830201C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830201D4;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830201DC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020260
	goto loc_83020260;
loc_830201E8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,10140
	ctx.r11.s64 = ctx.r11.s64 + 10140;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830201FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020208;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83020210;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020260
	goto loc_83020260;
loc_8302021C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,10140
	ctx.r4.s64 = ctx.r11.s64 + 10140;
	// bl 0x837b0c10
	ctx.lr = 0x8302022C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020238;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83020258
	if (cr6.lt) goto loc_83020258;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83020258;
	sub_825952B8(ctx, base);
loc_83020258:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83020260:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83020264:
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

__attribute__((alias("__imp__sub_8302027C"))) PPC_WEAK_FUNC(sub_8302027C);
PPC_FUNC_IMPL(__imp__sub_8302027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020280"))) PPC_WEAK_FUNC(sub_83020280);
PPC_FUNC_IMPL(__imp__sub_83020280) {
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
	ctx.lr = 0x830202B0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830202f0
	if (cr6.eq) goto loc_830202F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830202C4;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,10744
	ctx.r8.s64 = ctx.r10.s64 + 10744;
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
	// b 0x830202f4
	goto loc_830202F4;
loc_830202F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830202F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302030C"))) PPC_WEAK_FUNC(sub_8302030C);
PPC_FUNC_IMPL(__imp__sub_8302030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020310"))) PPC_WEAK_FUNC(sub_83020310);
PPC_FUNC_IMPL(__imp__sub_83020310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83020320
	if (cr6.lt) goto loc_83020320;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83020320:
	// b 0x83020280
	sub_83020280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020324"))) PPC_WEAK_FUNC(sub_83020324);
PPC_FUNC_IMPL(__imp__sub_83020324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020328"))) PPC_WEAK_FUNC(sub_83020328);
PPC_FUNC_IMPL(__imp__sub_83020328) {
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
	// bgt cr6,0x83020404
	if (cr6.gt) goto loc_83020404;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83020378
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020378;
	// bdzf 4*cr6+eq,0x830203bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830203BC;
	// bdzf 4*cr6+eq,0x83020428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020428;
	// bdzf 4*cr6+eq,0x83020430
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020430;
	// bdzf 4*cr6+eq,0x83020404
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020404;
	// bne cr6,0x83020468
	if (!cr6.eq) goto loc_83020468;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83020378:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,10652
	ctx.r11.s64 = ctx.r11.s64 + 10652;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8302038C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83020398;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830203A4;
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
	// b 0x83020404
	goto loc_83020404;
loc_830203BC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830203C4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83020404
	if (cr6.eq) goto loc_83020404;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830203f4
	if (cr6.eq) goto loc_830203F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830203EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830203F4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83020420
	if (!cr6.eq) goto loc_83020420;
	// li r11,6
	ctx.r11.s64 = 6;
loc_83020400:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83020404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83020408:
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
loc_83020420:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83020400
	goto loc_83020400;
loc_83020428:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83020400
	goto loc_83020400;
loc_83020430:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,10652
	ctx.r11.s64 = ctx.r11.s64 + 10652;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83020444;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020450;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83020458;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020408
	goto loc_83020408;
loc_83020468:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// bl 0x837b0c10
	ctx.lr = 0x83020478;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020484;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8302048C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020408
	goto loc_83020408;
}

__attribute__((alias("__imp__sub_8302049C"))) PPC_WEAK_FUNC(sub_8302049C);
PPC_FUNC_IMPL(__imp__sub_8302049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830204A0"))) PPC_WEAK_FUNC(sub_830204A0);
PPC_FUNC_IMPL(__imp__sub_830204A0) {
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
	ctx.lr = 0x830204D0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020504
	if (cr6.eq) goto loc_83020504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830204E4;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11224
	ctx.r9.s64 = ctx.r11.s64 + 11224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83020508
	goto loc_83020508;
loc_83020504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83020508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020520"))) PPC_WEAK_FUNC(sub_83020520);
PPC_FUNC_IMPL(__imp__sub_83020520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83020528;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x83020530;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83020544
	if (!cr6.eq) goto loc_83020544;
loc_83020538:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83020544:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x8302054C;
	sub_825832D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d9a060
	ctx.lr = 0x83020554;
	sub_82D9A060(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020538
	if (cr6.eq) goto loc_83020538;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// beq cr6,0x830205f8
	if (cr6.eq) goto loc_830205F8;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r29,60
	ctx.r29.s64 = 60;
	// addi r28,r11,-30996
	ctx.r28.s64 = ctx.r11.s64 + -30996;
loc_8302057C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82d9a078
	ctx.lr = 0x830205C0;
	sub_82D9A078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830205dc
	if (cr6.eq) goto loc_830205DC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x830205f4
	if (!cr6.eq) goto loc_830205F4;
loc_830205DC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// blt cr6,0x8302057c
	if (cr6.lt) goto loc_8302057C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830205F4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_830205F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020604"))) PPC_WEAK_FUNC(sub_83020604);
PPC_FUNC_IMPL(__imp__sub_83020604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020608"))) PPC_WEAK_FUNC(sub_83020608);
PPC_FUNC_IMPL(__imp__sub_83020608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83020618
	if (cr6.lt) goto loc_83020618;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83020618:
	// b 0x830204a0
	sub_830204A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302061C"))) PPC_WEAK_FUNC(sub_8302061C);
PPC_FUNC_IMPL(__imp__sub_8302061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020620"))) PPC_WEAK_FUNC(sub_83020620);
PPC_FUNC_IMPL(__imp__sub_83020620) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83020520
	ctx.lr = 0x83020640;
	sub_83020520(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// beq cr6,0x8302068c
	if (cr6.eq) goto loc_8302068C;
	// addi r11,r11,11132
	ctx.r11.s64 = ctx.r11.s64 + 11132;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83020660;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302066C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830206c4
	if (cr6.lt) goto loc_830206C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x830206c0
	goto loc_830206C0;
loc_8302068C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,11132
	ctx.r4.s64 = ctx.r11.s64 + 11132;
	// bl 0x837b0c10
	ctx.lr = 0x83020698;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830206A4;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830206c4
	if (cr6.lt) goto loc_830206C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830206C0:
	// bl 0x825952b8
	ctx.lr = 0x830206C4;
	sub_825952B8(ctx, base);
loc_830206C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830206E8"))) PPC_WEAK_FUNC(sub_830206E8);
PPC_FUNC_IMPL(__imp__sub_830206E8) {
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
	ctx.lr = 0x83020718;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020754
	if (cr6.eq) goto loc_83020754;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302072C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11768
	ctx.r9.s64 = ctx.r11.s64 + 11768;
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
	// b 0x83020758
	goto loc_83020758;
loc_83020754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83020758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020770"))) PPC_WEAK_FUNC(sub_83020770);
PPC_FUNC_IMPL(__imp__sub_83020770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83020780
	if (cr6.lt) goto loc_83020780;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83020780:
	// b 0x830206e8
	sub_830206E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020784"))) PPC_WEAK_FUNC(sub_83020784);
PPC_FUNC_IMPL(__imp__sub_83020784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020788"))) PPC_WEAK_FUNC(sub_83020788);
PPC_FUNC_IMPL(__imp__sub_83020788) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x830207A0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-53
	ctx.r11.s64 = ctx.r11.s64 + -53;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83020868
	if (cr6.gt) goto loc_83020868;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83020844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020844;
	// bdzf 4*cr6+eq,0x83020844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020844;
	// bdzf 4*cr6+eq,0x83020844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020844;
	// bdzf 4*cr6+eq,0x830207fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830207FC;
	// bdzf 4*cr6+eq,0x83020820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020820;
	// bdzf 4*cr6+eq,0x830207fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830207FC;
	// bdzf 4*cr6+eq,0x830207d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830207D8;
	// bne cr6,0x830207d8
	if (!cr6.eq) goto loc_830207D8;
loc_830207D8:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-30900(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30900);
	// bl 0x8259d6c0
	ctx.lr = 0x830207E8;
	sub_8259D6C0(ctx, base);
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
loc_830207FC:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-30896(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30896);
	// bl 0x8259d6c0
	ctx.lr = 0x8302080C;
	sub_8259D6C0(ctx, base);
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
loc_83020820:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-30892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30892);
	// bl 0x8259d6c0
	ctx.lr = 0x83020830;
	sub_8259D6C0(ctx, base);
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
loc_83020844:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-30888(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30888);
	// bl 0x8259d6c0
	ctx.lr = 0x83020854;
	sub_8259D6C0(ctx, base);
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
loc_83020868:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r4,-30884(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30884);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83020874:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83020874
	if (!cr6.eq) goto loc_83020874;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83020898;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_830208AC"))) PPC_WEAK_FUNC(sub_830208AC);
PPC_FUNC_IMPL(__imp__sub_830208AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830208B0"))) PPC_WEAK_FUNC(sub_830208B0);
PPC_FUNC_IMPL(__imp__sub_830208B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830208B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830208f0
	if (!cr6.eq) goto loc_830208F0;
	// bl 0x82d86078
	ctx.lr = 0x830208D8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830208ec
	if (cr6.eq) goto loc_830208EC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830208E8;
	sub_825832D8(ctx, base);
	// bl 0x82d9b3b8
	ctx.lr = 0x830208EC;
	sub_82D9B3B8(ctx, base);
loc_830208EC:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_830208F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,11386
	ctx.r4.s64 = ctx.r9.s64 + 11386;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83020918;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83020788
	ctx.lr = 0x83020924;
	sub_83020788(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020930;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83020950
	if (cr6.lt) goto loc_83020950;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83020950;
	sub_825952B8(ctx, base);
loc_83020950:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020960"))) PPC_WEAK_FUNC(sub_83020960);
PPC_FUNC_IMPL(__imp__sub_83020960) {
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
	// bl 0x82d95f98
	ctx.lr = 0x83020970;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83020990
	if (!cr6.eq) goto loc_83020990;
loc_8302097C:
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
loc_83020990:
	// bl 0x82d86078
	ctx.lr = 0x83020994;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302097c
	if (cr6.eq) goto loc_8302097C;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x830209A4;
	sub_82DA24B0(ctx, base);
	// bl 0x82da1d48
	ctx.lr = 0x830209A8;
	sub_82DA1D48(ctx, base);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830209C4"))) PPC_WEAK_FUNC(sub_830209C4);
PPC_FUNC_IMPL(__imp__sub_830209C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830209C8"))) PPC_WEAK_FUNC(sub_830209C8);
PPC_FUNC_IMPL(__imp__sub_830209C8) {
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
	ctx.lr = 0x830209D8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830209f0
	if (!cr6.eq) goto loc_830209F0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830209F0:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830209F8;
	sub_825832D8(ctx, base);
	// bl 0x82d9a060
	ctx.lr = 0x830209FC;
	sub_82D9A060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_83020A14"))) PPC_WEAK_FUNC(sub_83020A14);
PPC_FUNC_IMPL(__imp__sub_83020A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020A18"))) PPC_WEAK_FUNC(sub_83020A18);
PPC_FUNC_IMPL(__imp__sub_83020A18) {
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
	ctx.lr = 0x83020A48;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020a88
	if (cr6.eq) goto loc_83020A88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83020A5C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,12296
	ctx.r8.s64 = ctx.r10.s64 + 12296;
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
	// b 0x83020a8c
	goto loc_83020A8C;
loc_83020A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83020A8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020AA4"))) PPC_WEAK_FUNC(sub_83020AA4);
PPC_FUNC_IMPL(__imp__sub_83020AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020AA8"))) PPC_WEAK_FUNC(sub_83020AA8);
PPC_FUNC_IMPL(__imp__sub_83020AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83020ab8
	if (cr6.lt) goto loc_83020AB8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83020AB8:
	// b 0x83020a18
	sub_83020A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020ABC"))) PPC_WEAK_FUNC(sub_83020ABC);
PPC_FUNC_IMPL(__imp__sub_83020ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020AC0"))) PPC_WEAK_FUNC(sub_83020AC0);
PPC_FUNC_IMPL(__imp__sub_83020AC0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83020c78
	if (cr6.gt) goto loc_83020C78;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83020b44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020B44;
	// bdzf 4*cr6+eq,0x83020b90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020B90;
	// bdzf 4*cr6+eq,0x83020be8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020BE8;
	// bdzf 4*cr6+eq,0x83020c10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020C10;
	// bne cr6,0x83020c44
	if (!cr6.eq) goto loc_83020C44;
	// bl 0x82d86078
	ctx.lr = 0x83020B08;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020b1c
	if (cr6.eq) goto loc_83020B1C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83020B18;
	sub_825832D8(ctx, base);
	// bl 0x82d9b3b8
	ctx.lr = 0x83020B1C;
	sub_82D9B3B8(ctx, base);
loc_83020B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83020960
	ctx.lr = 0x83020B24;
	sub_83020960(ctx, base);
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
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83020cc0
	goto loc_83020CC0;
loc_83020B44:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,12200
	ctx.r11.s64 = ctx.r11.s64 + 12200;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x83020B58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83020B64;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83020B70;
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
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83020cc0
	goto loc_83020CC0;
loc_83020B90:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83020B98;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83020c08
	if (cr6.eq) goto loc_83020C08;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020bc8
	if (cr6.eq) goto loc_83020BC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83020BC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83020BC8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
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
	// b 0x83020cc0
	goto loc_83020CC0;
loc_83020BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830209c8
	ctx.lr = 0x83020BF0;
	sub_830209C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_83020C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83020cc0
	goto loc_83020CC0;
loc_83020C10:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,12200
	ctx.r11.s64 = ctx.r11.s64 + 12200;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83020C24;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020C30;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83020C38;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020cbc
	goto loc_83020CBC;
loc_83020C44:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,12200
	ctx.r11.s64 = ctx.r11.s64 + 12200;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83020C58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020C64;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83020C6C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83020cbc
	goto loc_83020CBC;
loc_83020C78:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12200
	ctx.r4.s64 = ctx.r11.s64 + 12200;
	// bl 0x837b0c10
	ctx.lr = 0x83020C88;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83020C94;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83020cb4
	if (cr6.lt) goto loc_83020CB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83020CB4;
	sub_825952B8(ctx, base);
loc_83020CB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83020CBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83020CC0:
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

__attribute__((alias("__imp__sub_83020CD8"))) PPC_WEAK_FUNC(sub_83020CD8);
PPC_FUNC_IMPL(__imp__sub_83020CD8) {
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
	// bne cr6,0x83020d00
	if (!cr6.eq) goto loc_83020D00;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83020d00
	if (!cr6.eq) goto loc_83020D00;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_83020D00:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020D04"))) PPC_WEAK_FUNC(sub_83020D04);
PPC_FUNC_IMPL(__imp__sub_83020D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020D08"))) PPC_WEAK_FUNC(sub_83020D08);
PPC_FUNC_IMPL(__imp__sub_83020D08) {
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
	ctx.lr = 0x83020D18;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83020d30
	if (!cr6.eq) goto loc_83020D30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83020D30:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x83020D38;
	sub_8332F198(ctx, base);
	// bl 0x82d9c128
	ctx.lr = 0x83020D3C;
	sub_82D9C128(ctx, base);
	// bl 0x82d9c1c0
	ctx.lr = 0x83020D40;
	sub_82D9C1C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020D50"))) PPC_WEAK_FUNC(sub_83020D50);
PPC_FUNC_IMPL(__imp__sub_83020D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83020D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83020D7C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020dc4
	if (cr6.eq) goto loc_83020DC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83020D90;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,12848
	ctx.r8.s64 = ctx.r10.s64 + 12848;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83020DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020DD0"))) PPC_WEAK_FUNC(sub_83020DD0);
PPC_FUNC_IMPL(__imp__sub_83020DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83020de0
	if (cr6.lt) goto loc_83020DE0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83020DE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83020d50
	sub_83020D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020DE8"))) PPC_WEAK_FUNC(sub_83020DE8);
PPC_FUNC_IMPL(__imp__sub_83020DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83020df8
	if (cr6.lt) goto loc_83020DF8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83020DF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83020d50
	sub_83020D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020E00"))) PPC_WEAK_FUNC(sub_83020E00);
PPC_FUNC_IMPL(__imp__sub_83020E00) {
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
	ctx.lr = 0x83020E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83021140
	if (cr6.gt) goto loc_83021140;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83020fac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020FAC;
	// bdzf 4*cr6+eq,0x83020ffc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83020FFC;
	// bdzf 4*cr6+eq,0x83021074
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83021074;
	// bdzf 4*cr6+eq,0x830210bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830210BC;
	// bdzf 4*cr6+eq,0x830210c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830210C8;
	// bdzf 4*cr6+eq,0x83021140
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83021140;
	// bne cr6,0x83021104
	if (!cr6.eq) goto loc_83021104;
	// bl 0x82d86078
	ctx.lr = 0x83020E48;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021184
	if (cr6.eq) goto loc_83021184;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83020E5C;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307e040
	ctx.lr = 0x83020E68;
	sub_8307E040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83020E74;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x83020E78;
	sub_82DA4368(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83020E7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da5470
	ctx.lr = 0x83020E90;
	sub_82DA5470(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da54c8
	ctx.lr = 0x83020EA4;
	sub_82DA54C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x83020e7c
	if (cr6.lt) goto loc_83020E7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97690
	ctx.lr = 0x83020EB8;
	sub_82D97690(ctx, base);
	// lbz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83020f58
	if (cr6.eq) goto loc_83020F58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97688
	ctx.lr = 0x83020ECC;
	sub_82D97688(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97a78
	ctx.lr = 0x83020ED8;
	sub_82D97A78(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,28
	ctx.r27.s64 = 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83020f6c
	if (cr0.eq) goto loc_83020F6C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x83020f4c
	if (!cr6.gt) goto loc_83020F4C;
loc_83020F00:
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d97d88
	ctx.lr = 0x83020F28;
	sub_82D97D88(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bgt cr6,0x83020f00
	if (cr6.gt) goto loc_83020F00;
	// b 0x83020f6c
	goto loc_83020F6C;
loc_83020F4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83020F58;
	sub_831CC188(ctx, base);
loc_83020F58:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
loc_83020F6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83020f88
	if (cr6.eq) goto loc_83020F88;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83020F88:
	// lbz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83020FAC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,12752
	ctx.r11.s64 = ctx.r11.s64 + 12752;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x83020FC0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83020FCC;
	sub_82D894E0(ctx, base);
	// stw r3,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83020FD8;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
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
	// stw r7,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r7.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83020FFC:
	// lwz r3,100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83021004;
	sub_82DDCEC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830210bc
	if (cr6.eq) goto loc_830210BC;
	// lwz r3,100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021034
	if (cr6.eq) goto loc_83021034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302102C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r9.u32);
loc_83021034:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83021060
	if (!cr6.eq) goto loc_83021060;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83020d08
	ctx.lr = 0x83021044;
	sub_83020D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83020f88
	if (cr6.eq) goto loc_83020F88;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83021060:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83021074:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,12752
	ctx.r11.s64 = ctx.r11.s64 + 12752;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83021090;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021060
	if (cr6.eq) goto loc_83021060;
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d2ada8
	ctx.lr = 0x830210A8;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x830210B4;
	sub_83103100(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
loc_830210BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830210C8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,12752
	ctx.r11.s64 = ctx.r11.s64 + 12752;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830210DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x830210E8;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830210F0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83021104:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,12752
	ctx.r11.s64 = ctx.r11.s64 + 12752;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83021118;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x83021124;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302112C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83021140:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12752
	ctx.r4.s64 = ctx.r11.s64 + 12752;
	// bl 0x837b0c10
	ctx.lr = 0x83021150;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302115C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302117c
	if (cr6.lt) goto loc_8302117C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302117C;
	sub_825952B8(ctx, base);
loc_8302117C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_83021184:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83021190"))) PPC_WEAK_FUNC(sub_83021190);
PPC_FUNC_IMPL(__imp__sub_83021190) {
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
	// bne cr6,0x830211b8
	if (!cr6.eq) goto loc_830211B8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830211b8
	if (!cr6.eq) goto loc_830211B8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_830211B8:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830211BC"))) PPC_WEAK_FUNC(sub_830211BC);
PPC_FUNC_IMPL(__imp__sub_830211BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830211C0"))) PPC_WEAK_FUNC(sub_830211C0);
PPC_FUNC_IMPL(__imp__sub_830211C0) {
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
	ctx.lr = 0x830211F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021230
	if (cr6.eq) goto loc_83021230;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83021204;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,13392
	ctx.r8.s64 = ctx.r10.s64 + 13392;
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
	// b 0x83021234
	goto loc_83021234;
loc_83021230:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83021234:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302124C"))) PPC_WEAK_FUNC(sub_8302124C);
PPC_FUNC_IMPL(__imp__sub_8302124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021250"))) PPC_WEAK_FUNC(sub_83021250);
PPC_FUNC_IMPL(__imp__sub_83021250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83021260
	if (cr6.lt) goto loc_83021260;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83021260:
	// b 0x830211c0
	sub_830211C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83021264"))) PPC_WEAK_FUNC(sub_83021264);
PPC_FUNC_IMPL(__imp__sub_83021264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021268"))) PPC_WEAK_FUNC(sub_83021268);
PPC_FUNC_IMPL(__imp__sub_83021268) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83021428
	if (cr6.gt) goto loc_83021428;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830212fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830212FC;
	// bdzf 4*cr6+eq,0x83021370
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83021370;
	// bdzf 4*cr6+eq,0x830213b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830213B8;
	// bdzf 4*cr6+eq,0x830213c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830213C0;
	// bdzf 4*cr6+eq,0x83021428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83021428;
	// bne cr6,0x830213f4
	if (!cr6.eq) goto loc_830213F4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,13300
	ctx.r11.s64 = ctx.r11.s64 + 13300;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x830212C4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830212D0;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830212DC;
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
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83021470
	goto loc_83021470;
loc_830212FC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83021304;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830213b8
	if (cr6.eq) goto loc_830213B8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021334
	if (cr6.eq) goto loc_83021334;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302132C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83021334:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83021360
	if (!cr6.eq) goto loc_83021360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83020d08
	ctx.lr = 0x83021344;
	sub_83020D08(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r3,0
	ctx.r3.s64 = 0;
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
	// b 0x83021470
	goto loc_83021470;
loc_83021360:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83021470
	goto loc_83021470;
loc_83021370:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,13300
	ctx.r11.s64 = ctx.r11.s64 + 13300;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302138C;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021360
	if (cr6.eq) goto loc_83021360;
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d2ada8
	ctx.lr = 0x830213A4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830213B0;
	sub_83103100(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830213B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83021470
	goto loc_83021470;
loc_830213C0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,13300
	ctx.r11.s64 = ctx.r11.s64 + 13300;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830213D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830213E0;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830213E8;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302146c
	goto loc_8302146C;
loc_830213F4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,13300
	ctx.r11.s64 = ctx.r11.s64 + 13300;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83021408;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83021414;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302141C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302146c
	goto loc_8302146C;
loc_83021428:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13300
	ctx.r4.s64 = ctx.r11.s64 + 13300;
	// bl 0x837b0c10
	ctx.lr = 0x83021438;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83021444;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83021464
	if (cr6.lt) goto loc_83021464;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83021464;
	sub_825952B8(ctx, base);
loc_83021464:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8302146C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83021470:
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

__attribute__((alias("__imp__sub_83021488"))) PPC_WEAK_FUNC(sub_83021488);
PPC_FUNC_IMPL(__imp__sub_83021488) {
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
	ctx.lr = 0x830214B8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830214fc
	if (cr6.eq) goto loc_830214FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830214CC;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,13944
	ctx.r8.s64 = ctx.r10.s64 + 13944;
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
	// b 0x83021500
	goto loc_83021500;
loc_830214FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83021500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021518"))) PPC_WEAK_FUNC(sub_83021518);
PPC_FUNC_IMPL(__imp__sub_83021518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83021528
	if (cr6.lt) goto loc_83021528;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83021528:
	// b 0x83021488
	sub_83021488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302152C"))) PPC_WEAK_FUNC(sub_8302152C);
PPC_FUNC_IMPL(__imp__sub_8302152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021530"))) PPC_WEAK_FUNC(sub_83021530);
PPC_FUNC_IMPL(__imp__sub_83021530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83021538;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83021548;
	sub_82D86078(ctx, base);
	// li r29,6
	ctx.r29.s64 = 6;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83021558
	if (!cr6.eq) goto loc_83021558;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_83021558:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x830215fc
	if (cr6.gt) goto loc_830215FC;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5500
	ctx.r12.s64 = ctx.r12.s64 + 5500;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830215A4;
	case 1:
		goto loc_830215AC;
	case 2:
		goto loc_83021608;
	case 3:
		goto loc_83021654;
	case 4:
		goto loc_83021690;
	case 5:
		goto loc_830216DC;
	case 6:
		goto loc_83021708;
	case 7:
		goto loc_83021740;
	case 8:
		goto loc_830215FC;
	case 9:
		goto loc_8302177C;
	default:
		return;
	}
	// lwz r24,5540(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5540);
	// lwz r24,5548(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5548);
	// lwz r24,5640(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5640);
	// lwz r24,5716(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5716);
	// lwz r24,5776(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5776);
	// lwz r24,5852(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5852);
	// lwz r24,5896(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5896);
	// lwz r24,5952(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5952);
	// lwz r24,5628(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 5628);
	// lwz r24,6012(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6012);
loc_830215A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830215AC:
	// bl 0x82d860f0
	ctx.lr = 0x830215B0;
	sub_82D860F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e73220
	ctx.lr = 0x830215B8;
	sub_82E73220(ctx, base);
	// bl 0x82e71888
	ctx.lr = 0x830215BC;
	sub_82E71888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bne cr6,0x830215d4
	if (!cr6.eq) goto loc_830215D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830215D4:
	// bl 0x8308e078
	ctx.lr = 0x830215D8;
	sub_8308E078(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e71898
	ctx.lr = 0x830215E8;
	sub_82E71898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83103100
	ctx.lr = 0x830215F4;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830215FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83021608:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e71a40
	ctx.lr = 0x83021610;
	sub_82E71A40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83021644
	if (cr6.eq) goto loc_83021644;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83021644:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83021654:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e71a70
	ctx.lr = 0x8302165C;
	sub_82E71A70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830215fc
	if (cr6.eq) goto loc_830215FC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83021690:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,13852
	ctx.r11.s64 = ctx.r11.s64 + 13852;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x830216A4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830216B0;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830216BC;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830216DC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x830216E4;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830215fc
	if (cr6.eq) goto loc_830215FC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83021644
	if (!cr6.eq) goto loc_83021644;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83021708:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302172c
	if (cr6.eq) goto loc_8302172C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83021724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8302172C:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83021740:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,13852
	ctx.r11.s64 = ctx.r11.s64 + 13852;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83021754;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83021760;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83021768;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302177C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830217a0
	if (cr6.eq) goto loc_830217A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83021798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830217A0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,13852
	ctx.r4.s64 = ctx.r11.s64 + 13852;
	// bl 0x837b0c10
	ctx.lr = 0x830217B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830217BC;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x830217C4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830217D8"))) PPC_WEAK_FUNC(sub_830217D8);
PPC_FUNC_IMPL(__imp__sub_830217D8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14464
	ctx.r9.s64 = ctx.r11.s64 + 14464;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x838760e0
	ctx.lr = 0x83021814;
	sub_838760E0(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,-19088
	ctx.r5.s64 = ctx.r7.s64 + -19088;
	// addi r4,r6,-17088
	ctx.r4.s64 = ctx.r6.s64 + -17088;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x82f42278
	ctx.lr = 0x83021834;
	sub_82F42278(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8302184c
	if (cr6.eq) goto loc_8302184C;
	// bl 0x82416268
	ctx.lr = 0x83021848;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8302184C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021864"))) PPC_WEAK_FUNC(sub_83021864);
PPC_FUNC_IMPL(__imp__sub_83021864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021868"))) PPC_WEAK_FUNC(sub_83021868);
PPC_FUNC_IMPL(__imp__sub_83021868) {
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
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830218b0
	if (!cr6.eq) goto loc_830218B0;
	// bl 0x82d17d90
	ctx.lr = 0x8302189C;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x830218ac
	if (cr6.eq) goto loc_830218AC;
	// li r11,8
	ctx.r11.s64 = 8;
loc_830218AC:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830218B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x830218BC;
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

__attribute__((alias("__imp__sub_830218D4"))) PPC_WEAK_FUNC(sub_830218D4);
PPC_FUNC_IMPL(__imp__sub_830218D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830218D8"))) PPC_WEAK_FUNC(sub_830218D8);
PPC_FUNC_IMPL(__imp__sub_830218D8) {
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
	// li r4,1560
	ctx.r4.s64 = 1560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83021908;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302194c
	if (cr6.eq) goto loc_8302194C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302191C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14464
	ctx.r9.s64 = ctx.r11.s64 + 14464;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// bl 0x82d997d8
	ctx.lr = 0x83021944;
	sub_82D997D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83021950
	goto loc_83021950;
loc_8302194C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83021950:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021968"))) PPC_WEAK_FUNC(sub_83021968);
PPC_FUNC_IMPL(__imp__sub_83021968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83021978
	if (cr6.lt) goto loc_83021978;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83021978:
	// b 0x830218d8
	sub_830218D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302197C"))) PPC_WEAK_FUNC(sub_8302197C);
PPC_FUNC_IMPL(__imp__sub_8302197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021980"))) PPC_WEAK_FUNC(sub_83021980);
PPC_FUNC_IMPL(__imp__sub_83021980) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830219B4;
	sub_82595718(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// beq 0x830219f0
	if (cr0.eq) goto loc_830219F0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_830219F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021A08"))) PPC_WEAK_FUNC(sub_83021A08);
PPC_FUNC_IMPL(__imp__sub_83021A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83021A10;
	__savegprlr_24(ctx, base);
	// stwu r1,-3136(r1)
	ea = -3136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83021A20;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83021a7c
	if (!cr6.eq) goto loc_83021A7C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,14372
	ctx.r11.s64 = ctx.r11.s64 + 14372;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83021A3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x83021A48;
	sub_82E88020(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83021a68
	if (cr6.lt) goto loc_83021A68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83021A68;
	sub_825952B8(ctx, base);
loc_83021A68:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83021A7C:
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83022168
	if (cr6.gt) goto loc_83022168;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6820
	ctx.r12.s64 = ctx.r12.s64 + 6820;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83021ACC;
	case 1:
		goto loc_83021AE0;
	case 2:
		goto loc_830220BC;
	case 3:
		goto loc_83021EBC;
	case 4:
		goto loc_83021F9C;
	case 5:
		goto loc_83021FE4;
	case 6:
		goto loc_83022064;
	case 7:
		goto loc_830220C8;
	case 8:
		goto loc_83022104;
	case 9:
		goto loc_83022140;
	default:
		return;
	}
	// lwz r24,6860(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6860);
	// lwz r24,6880(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6880);
	// lwz r24,8380(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8380);
	// lwz r24,7868(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7868);
	// lwz r24,8092(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8092);
	// lwz r24,8164(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8164);
	// lwz r24,8292(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8292);
	// lwz r24,8392(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8392);
	// lwz r24,8452(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8452);
	// lwz r24,8512(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8512);
loc_83021ACC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83021AE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83021AE8;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83021AF4;
	sub_82DAB6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83021B00;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83021B04;
	sub_825832F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830220b4
	if (cr6.eq) goto loc_830220B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8381b9d0
	ctx.lr = 0x83021B20;
	sub_8381B9D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83021B28:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83021B34;
	sub_82D987F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83021B3C;
	sub_82D983F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021b6c
	if (cr6.eq) goto loc_83021B6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47dc0
	ctx.lr = 0x83021B50;
	sub_82A47DC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r3,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r3.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82c3b898
	ctx.lr = 0x83021B6C;
	sub_82C3B898(ctx, base);
loc_83021B6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x83021b28
	if (cr6.lt) goto loc_83021B28;
	// addi r31,r24,100
	ctx.r31.s64 = ctx.r24.s64 + 100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ceba68
	ctx.lr = 0x83021B88;
	sub_82CEBA68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98930
	ctx.lr = 0x83021B90;
	sub_82D98930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,480
	ctx.r4.s64 = ctx.r11.s64 + 480;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83021BA4;
	sub_831CE980(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d976d8
	ctx.lr = 0x83021BAC;
	sub_82D976D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,250
	ctx.r6.s64 = 250;
	// bl 0x82d94360
	ctx.lr = 0x83021BC0;
	sub_82D94360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98930
	ctx.lr = 0x83021BC8;
	sub_82D98930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,480
	ctx.r4.s64 = ctx.r11.s64 + 480;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83021BDC;
	sub_831CE980(ctx, base);
	// lbz r11,458(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 458);
	// lbz r10,459(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 459);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,460(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 460);
	// lbz r8,461(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 461);
	// stb r11,282(r1)
	PPC_STORE_U8(ctx.r1.u32 + 282, ctx.r11.u8);
	// stb r10,283(r1)
	PPC_STORE_U8(ctx.r1.u32 + 283, ctx.r10.u8);
	// stb r9,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r9.u8);
	// stb r8,285(r1)
	PPC_STORE_U8(ctx.r1.u32 + 285, ctx.r8.u8);
	// bl 0x82d98930
	ctx.lr = 0x83021C04;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x83021C14;
	sub_831CE980(ctx, base);
	// addi r3,r1,3008
	ctx.r3.s64 = ctx.r1.s64 + 3008;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83021C24;
	sub_831CE980(ctx, base);
	// addi r4,r1,2528
	ctx.r4.s64 = ctx.r1.s64 + 2528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d99658
	ctx.lr = 0x83021C30;
	sub_82D99658(ctx, base);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83021C34:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83021C40;
	sub_82D987F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83021C48;
	sub_82D983F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021c7c
	if (cr6.eq) goto loc_83021C7C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833ecc50
	ctx.lr = 0x83021C60;
	sub_833ECC50(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83021c7c
	if (cr6.eq) goto loc_83021C7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// bl 0x82d98518
	ctx.lr = 0x83021C7C;
	sub_82D98518(ctx, base);
loc_83021C7C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x83021c34
	if (cr6.lt) goto loc_83021C34;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r26,12
	ctx.r26.s64 = 12;
loc_83021C90:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83021C9C;
	sub_82D987F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83021CA4;
	sub_82D983F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83021d1c
	if (cr6.eq) goto loc_83021D1C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833ecc50
	ctx.lr = 0x83021CC0;
	sub_833ECC50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83021d1c
	if (!cr6.eq) goto loc_83021D1C;
	// bl 0x831156e8
	ctx.lr = 0x83021CD4;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x83021CEC;
	sub_8311BF98(ctx, base);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x83021CFC;
	sub_83120738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d98c98
	ctx.lr = 0x83021D10;
	sub_82D98C98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98518
	ctx.lr = 0x83021D1C;
	sub_82D98518(ctx, base);
loc_83021D1C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,18
	cr6.compare<uint32_t>(ctx.r27.u32, 18, xer);
	// blt cr6,0x83021c90
	if (cr6.lt) goto loc_83021C90;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r11,14372
	ctx.r30.s64 = ctx.r11.s64 + 14372;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83021D48;
	sub_82D2F6D8(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r4,r30,-266
	ctx.r4.s64 = ctx.r30.s64 + -266;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x83021D6C;
	sub_8259CC28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98938
	ctx.lr = 0x83021D78;
	sub_82D98938(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// bl 0x82d98938
	ctx.lr = 0x83021D8C;
	sub_82D98938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctidz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// bl 0x82d999a0
	ctx.lr = 0x83021D9C;
	sub_82D999A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d999a0
	ctx.lr = 0x83021DA8;
	sub_82D999A0(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r4,r4,268
	ctx.r4.u64 = ctx.r4.u64 | 268;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82d042a8
	ctx.lr = 0x83021DC8;
	sub_82D042A8(ctx, base);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r4,r30,-265
	ctx.r4.s64 = ctx.r30.s64 + -265;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x83021DE4;
	sub_8259CC28(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d042a8
	ctx.lr = 0x83021DF4;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98c30
	ctx.lr = 0x83021DFC;
	sub_82D98C30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83021e1c
	if (cr6.eq) goto loc_83021E1C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x83021E1C;
	sub_825A1DA8(ctx, base);
loc_83021E1C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83021E28;
	sub_82D2AAB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83103100
	ctx.lr = 0x83021E34;
	sub_83103100(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r31.u32);
	// blt cr6,0x83021e58
	if (cr6.lt) goto loc_83021E58;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83021E58;
	sub_825952B8(ctx, base);
loc_83021E58:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// blt cr6,0x83021e80
	if (cr6.lt) goto loc_83021E80;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x83021E80;
	sub_825952B8(ctx, base);
loc_83021E80:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83021EA0;
	sub_82D0E798(ctx, base);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x83021EB0;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83021EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83021EC4;
	sub_825832E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82b54cc0
	ctx.lr = 0x83021ED0;
	sub_82B54CC0(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,468
	ctx.r11.s64 = ctx.r1.s64 + 468;
	// stw r28,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r28.u32);
	// stw r9,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83021EEC:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stbu r28,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83021eec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83021EEC;
	// stb r28,616(r1)
	PPC_STORE_U8(ctx.r1.u32 + 616, ctx.r28.u8);
	// addi r27,r24,100
	ctx.r27.s64 = ctx.r24.s64 + 100;
	// stw r28,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825832e0
	ctx.lr = 0x83021F0C;
	sub_825832E0(ctx, base);
	// stw r3,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r31,r1,476
	ctx.r31.s64 = ctx.r1.s64 + 476;
loc_83021F18:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83021F24;
	sub_82D987F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83021F2C;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83021f40
	if (!cr6.eq) goto loc_83021F40;
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// b 0x83021f54
	goto loc_83021F54;
loc_83021F40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bl 0x82a47dc0
	ctx.lr = 0x83021F50;
	sub_82A47DC0(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
loc_83021F54:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x83021f18
	if (cr6.lt) goto loc_83021F18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d98c30
	ctx.lr = 0x83021F6C;
	sub_82D98C30(ctx, base);
	// stb r3,616(r1)
	PPC_STORE_U8(ctx.r1.u32 + 616, ctx.r3.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d999a0
	ctx.lr = 0x83021F78;
	sub_82D999A0(ctx, base);
	// stw r3,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r3.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4370
	ctx.lr = 0x83021F88;
	sub_82DA4370(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83021F9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83021FA4;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83021FAC;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830220bc
	if (cr6.eq) goto loc_830220BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83021FC0;
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
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r8.u32);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83021FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83021FEC;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82b54cc0
	ctx.lr = 0x83021FF8;
	sub_82B54CC0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r28,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// stw r28,2520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2520, ctx.r28.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8302201C;
	sub_831CDCF0(ctx, base);
	// addi r31,r24,100
	ctx.r31.s64 = ctx.r24.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x83022028;
	sub_825832E0(ctx, base);
	// stw r3,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98930
	ctx.lr = 0x83022034;
	sub_82D98930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// addi r6,r1,2520
	ctx.r6.s64 = ctx.r1.s64 + 2520;
	// bl 0x82d8d090
	ctx.lr = 0x83022048;
	sub_82D8D090(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4370
	ctx.lr = 0x83022054;
	sub_82DA4370(ctx, base);
	// stw r30,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83022064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302206C;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83022074;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830220bc
	if (cr6.eq) goto loc_830220BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83022088;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830220a8
	if (cr6.eq) goto loc_830220A8;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830220A8:
	// bl 0x82d26ed8
	ctx.lr = 0x830220AC;
	sub_82D26ED8(ctx, base);
	// li r4,93
	ctx.r4.s64 = 93;
	// bl 0x82d26b18
	ctx.lr = 0x830220B4;
	sub_82D26B18(ctx, base);
loc_830220B4:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r11.u32);
loc_830220BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830220C8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,14372
	ctx.r11.s64 = ctx.r11.s64 + 14372;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830220DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x830220E8;
	sub_82E88020(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x830220F0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83022104:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,14372
	ctx.r11.s64 = ctx.r11.s64 + 14372;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83022118;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022124;
	sub_82E88020(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x8302212C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83022140:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,14372
	ctx.r11.s64 = ctx.r11.s64 + 14372;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83022154;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022160;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x83022188
	goto loc_83022188;
loc_83022168:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,14372
	ctx.r4.s64 = ctx.r11.s64 + 14372;
	// bl 0x837b0c10
	ctx.lr = 0x83022178;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022184;
	sub_82E88020(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_83022188:
	// bl 0x8387e8e0
	ctx.lr = 0x8302218C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3136
	ctx.r1.s64 = ctx.r1.s64 + 3136;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830221A0"))) PPC_WEAK_FUNC(sub_830221A0);
PPC_FUNC_IMPL(__imp__sub_830221A0) {
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
	// bl 0x82d86078
	ctx.lr = 0x830221B8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022210
	if (cr6.eq) goto loc_83022210;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830221C8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x830221CC;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830221D0;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022210
	if (cr6.eq) goto loc_83022210;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830221E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d987f8
	ctx.lr = 0x830221EC;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x830221F0;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022204
	if (cr6.eq) goto loc_83022204;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8302222c
	if (cr6.gt) goto loc_8302222C;
loc_83022204:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x830221e0
	if (cr6.lt) goto loc_830221E0;
loc_83022210:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83022214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8302222C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83022214
	goto loc_83022214;
}

__attribute__((alias("__imp__sub_83022234"))) PPC_WEAK_FUNC(sub_83022234);
PPC_FUNC_IMPL(__imp__sub_83022234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83022238"))) PPC_WEAK_FUNC(sub_83022238);
PPC_FUNC_IMPL(__imp__sub_83022238) {
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
	// bl 0x82d86078
	ctx.lr = 0x83022250;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830222b4
	if (cr6.eq) goto loc_830222B4;
	// bl 0x82d95f98
	ctx.lr = 0x83022260;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830222b4
	if (cr6.eq) goto loc_830222B4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x83022274;
	sub_82DA2858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82da8160
	ctx.lr = 0x83022280;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830222b4
	if (cr6.eq) goto loc_830222B4;
loc_83022288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8220
	ctx.lr = 0x83022294;
	sub_82DA8220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830222d0
	if (!cr6.eq) goto loc_830222D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x830222AC;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x83022288
	if (cr6.lt) goto loc_83022288;
loc_830222B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830222B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830222D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830222b8
	goto loc_830222B8;
}

__attribute__((alias("__imp__sub_830222D8"))) PPC_WEAK_FUNC(sub_830222D8);
PPC_FUNC_IMPL(__imp__sub_830222D8) {
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
	ctx.lr = 0x83022308;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022344
	if (cr6.eq) goto loc_83022344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302231C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14960
	ctx.r9.s64 = ctx.r11.s64 + 14960;
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
	// b 0x83022348
	goto loc_83022348;
loc_83022344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83022348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022360"))) PPC_WEAK_FUNC(sub_83022360);
PPC_FUNC_IMPL(__imp__sub_83022360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83022370
	if (cr6.lt) goto loc_83022370;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83022370:
	// b 0x830222d8
	sub_830222D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83022374"))) PPC_WEAK_FUNC(sub_83022374);
PPC_FUNC_IMPL(__imp__sub_83022374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83022378"))) PPC_WEAK_FUNC(sub_83022378);
PPC_FUNC_IMPL(__imp__sub_83022378) {
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
	ctx.lr = 0x83022398;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830223ec
	if (!cr6.eq) goto loc_830223EC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,14868
	ctx.r11.s64 = ctx.r11.s64 + 14868;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830223B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830223C0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830223e0
	if (cr6.lt) goto loc_830223E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830223E0;
	sub_825952B8(ctx, base);
loc_830223E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83022508
	goto loc_83022508;
loc_830223EC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x830224dc
	if (cr6.gt) goto loc_830224DC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83022434
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83022434;
	// bdzf 4*cr6+eq,0x8302245c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302245C;
	// bdzf 4*cr6+eq,0x83022484
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83022484;
	// bne cr6,0x830224b4
	if (!cr6.eq) goto loc_830224B4;
	// bl 0x82d95f98
	ctx.lr = 0x83022414;
	sub_82D95F98(ctx, base);
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
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302250c
	goto loc_8302250C;
loc_83022434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830221a0
	ctx.lr = 0x8302243C;
	sub_830221A0(ctx, base);
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
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302250c
	goto loc_8302250C;
loc_8302245C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83022238
	ctx.lr = 0x83022464;
	sub_83022238(ctx, base);
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
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8302250c
	goto loc_8302250C;
loc_83022484:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,14868
	ctx.r11.s64 = ctx.r11.s64 + 14868;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83022498;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830224A4;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830224AC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83022504
	goto loc_83022504;
loc_830224B4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,14868
	ctx.r11.s64 = ctx.r11.s64 + 14868;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830224C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830224D4;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x830224fc
	goto loc_830224FC;
loc_830224DC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,14868
	ctx.r4.s64 = ctx.r11.s64 + 14868;
	// bl 0x837b0c10
	ctx.lr = 0x830224EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830224F8;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_830224FC:
	// bl 0x8387e8e0
	ctx.lr = 0x83022500;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_83022504:
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_83022508:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8302250C:
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

__attribute__((alias("__imp__sub_83022524"))) PPC_WEAK_FUNC(sub_83022524);
PPC_FUNC_IMPL(__imp__sub_83022524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83022528"))) PPC_WEAK_FUNC(sub_83022528);
PPC_FUNC_IMPL(__imp__sub_83022528) {
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
	ctx.lr = 0x83022558;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022594
	if (cr6.eq) goto loc_83022594;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302256C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15456
	ctx.r9.s64 = ctx.r11.s64 + 15456;
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
	// b 0x83022598
	goto loc_83022598;
loc_83022594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83022598:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830225B0"))) PPC_WEAK_FUNC(sub_830225B0);
PPC_FUNC_IMPL(__imp__sub_830225B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830225c0
	if (cr6.lt) goto loc_830225C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830225C0:
	// b 0x83022528
	sub_83022528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830225C4"))) PPC_WEAK_FUNC(sub_830225C4);
PPC_FUNC_IMPL(__imp__sub_830225C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830225C8"))) PPC_WEAK_FUNC(sub_830225C8);
PPC_FUNC_IMPL(__imp__sub_830225C8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x830225E8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83022640
	if (!cr6.eq) goto loc_83022640;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,15364
	ctx.r11.s64 = ctx.r11.s64 + 15364;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83022604;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022610;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83022630
	if (cr6.lt) goto loc_83022630;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83022630;
	sub_825952B8(ctx, base);
loc_83022630:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83022730
	goto loc_83022730;
loc_83022640:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830226fc
	if (cr6.lt) goto loc_830226FC;
	// beq cr6,0x830226c4
	if (cr6.eq) goto loc_830226C4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// blt cr6,0x83022690
	if (cr6.lt) goto loc_83022690;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15364
	ctx.r4.s64 = ctx.r11.s64 + 15364;
	// bl 0x837b0c10
	ctx.lr = 0x8302266C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022678;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83022680;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83022730
	goto loc_83022730;
loc_83022690:
	// addi r11,r11,15364
	ctx.r11.s64 = ctx.r11.s64 + 15364;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830226A0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830226AC;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830226B4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83022730
	goto loc_83022730;
loc_830226C4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,15364
	ctx.r11.s64 = ctx.r11.s64 + 15364;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830226D8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830226E4;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830226EC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83022730
	goto loc_83022730;
loc_830226FC:
	// bl 0x825832f0
	ctx.lr = 0x83022700;
	sub_825832F0(ctx, base);
	// bl 0x82da75d0
	ctx.lr = 0x83022704;
	sub_82DA75D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
loc_83022730:
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

__attribute__((alias("__imp__sub_83022748"))) PPC_WEAK_FUNC(sub_83022748);
PPC_FUNC_IMPL(__imp__sub_83022748) {
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
	ctx.lr = 0x83022778;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830227b4
	if (cr6.eq) goto loc_830227B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302278C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15984
	ctx.r9.s64 = ctx.r11.s64 + 15984;
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
	// b 0x830227b8
	goto loc_830227B8;
loc_830227B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830227B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830227D0"))) PPC_WEAK_FUNC(sub_830227D0);
PPC_FUNC_IMPL(__imp__sub_830227D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830227e0
	if (cr6.lt) goto loc_830227E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830227E0:
	// b 0x83022748
	sub_83022748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830227E4"))) PPC_WEAK_FUNC(sub_830227E4);
PPC_FUNC_IMPL(__imp__sub_830227E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830227E8"))) PPC_WEAK_FUNC(sub_830227E8);
PPC_FUNC_IMPL(__imp__sub_830227E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830227F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83022800;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302285c
	if (!cr6.eq) goto loc_8302285C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,15892
	ctx.r11.s64 = ctx.r11.s64 + 15892;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x8302281C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022828;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83022848
	if (cr6.lt) goto loc_83022848;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83022848;
	sub_825952B8(ctx, base);
loc_83022848:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302285C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830229b0
	if (cr6.lt) goto loc_830229B0;
	// beq cr6,0x83022930
	if (cr6.eq) goto loc_83022930;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x830228b0
	if (cr6.lt) goto loc_830228B0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,15892
	ctx.r4.s64 = ctx.r11.s64 + 15892;
	// bl 0x837b0c10
	ctx.lr = 0x83022888;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022894;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302289C;
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
loc_830228B0:
	// bl 0x82d95f98
	ctx.lr = 0x830228B4;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,15892
	ctx.r11.s64 = ctx.r11.s64 + 15892;
	// beq cr6,0x830228fc
	if (cr6.eq) goto loc_830228FC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830228D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830228E0;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830228E8;
	sub_8387E8E0(ctx, base);
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
loc_830228FC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83022908;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022914;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302291C;
	sub_8387E8E0(ctx, base);
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
loc_83022930:
	// bl 0x82d95f98
	ctx.lr = 0x83022934;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,15892
	ctx.r11.s64 = ctx.r11.s64 + 15892;
	// beq cr6,0x8302297c
	if (cr6.eq) goto loc_8302297C;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83022954;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022960;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83022968;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8302297C:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83022988;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022994;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8302299C;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830229B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x830229B8;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830229C4;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830229D0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830229D4;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830229f0
	if (!cr6.eq) goto loc_830229F0;
loc_830229DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830229F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d98848
	ctx.lr = 0x830229F8;
	sub_82D98848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830229dc
	if (cr6.eq) goto loc_830229DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d97540
	ctx.lr = 0x83022A10;
	sub_82D97540(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83022A30"))) PPC_WEAK_FUNC(sub_83022A30);
PPC_FUNC_IMPL(__imp__sub_83022A30) {
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
	ctx.lr = 0x83022A60;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022a9c
	if (cr6.eq) goto loc_83022A9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83022A74;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16480
	ctx.r9.s64 = ctx.r11.s64 + 16480;
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
	// b 0x83022aa0
	goto loc_83022AA0;
loc_83022A9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83022AA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022AB8"))) PPC_WEAK_FUNC(sub_83022AB8);
PPC_FUNC_IMPL(__imp__sub_83022AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83022ac8
	if (cr6.lt) goto loc_83022AC8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83022AC8:
	// b 0x83022a30
	sub_83022A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83022ACC"))) PPC_WEAK_FUNC(sub_83022ACC);
PPC_FUNC_IMPL(__imp__sub_83022ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83022AD0"))) PPC_WEAK_FUNC(sub_83022AD0);
PPC_FUNC_IMPL(__imp__sub_83022AD0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83022AF0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83022b48
	if (!cr6.eq) goto loc_83022B48;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,16388
	ctx.r11.s64 = ctx.r11.s64 + 16388;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83022B0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022B18;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83022b38
	if (cr6.lt) goto loc_83022B38;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83022B38;
	sub_825952B8(ctx, base);
loc_83022B38:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83022c38
	goto loc_83022C38;
loc_83022B48:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83022c04
	if (cr6.lt) goto loc_83022C04;
	// beq cr6,0x83022bcc
	if (cr6.eq) goto loc_83022BCC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// blt cr6,0x83022b98
	if (cr6.lt) goto loc_83022B98;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16388
	ctx.r4.s64 = ctx.r11.s64 + 16388;
	// bl 0x837b0c10
	ctx.lr = 0x83022B74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022B80;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83022B88;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83022c38
	goto loc_83022C38;
loc_83022B98:
	// addi r11,r11,16388
	ctx.r11.s64 = ctx.r11.s64 + 16388;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83022BA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022BB4;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83022BBC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83022c38
	goto loc_83022C38;
loc_83022BCC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,16388
	ctx.r11.s64 = ctx.r11.s64 + 16388;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83022BE0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022BEC;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83022BF4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83022c38
	goto loc_83022C38;
loc_83022C04:
	// bl 0x825832f0
	ctx.lr = 0x83022C08;
	sub_825832F0(ctx, base);
	// bl 0x82da75c8
	ctx.lr = 0x83022C0C;
	sub_82DA75C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
loc_83022C38:
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

__attribute__((alias("__imp__sub_83022C50"))) PPC_WEAK_FUNC(sub_83022C50);
PPC_FUNC_IMPL(__imp__sub_83022C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83022C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83061e98
	ctx.lr = 0x83022C68;
	sub_83061E98(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r4,r10,108
	ctx.r4.u64 = ctx.r10.u64 | 108;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r10,r9,112
	ctx.r10.u64 = ctx.r9.u64 | 112;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// ori r29,r11,104
	ctx.r29.u64 = ctx.r11.u64 | 104;
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// ori r9,r8,116
	ctx.r9.u64 = ctx.r8.u64 | 116;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r8,r7,17088
	ctx.r8.s64 = ctx.r7.s64 + 17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r6,-17088
	ctx.r7.s64 = ctx.r6.s64 + -17088;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83022CCC;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83022CD8"))) PPC_WEAK_FUNC(sub_83022CD8);
PPC_FUNC_IMPL(__imp__sub_83022CD8) {
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
	// bne cr6,0x83022cf4
	if (!cr6.eq) goto loc_83022CF4;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_83022CF4:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83022CF8"))) PPC_WEAK_FUNC(sub_83022CF8);
PPC_FUNC_IMPL(__imp__sub_83022CF8) {
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
	// blt cr6,0x83022d1c
	if (cr6.lt) goto loc_83022D1C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83022d20
	goto loc_83022D20;
loc_83022D1C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83022D20:
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,120
	ctx.r4.u64 = ctx.r4.u64 | 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83022D3C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022d58
	if (cr6.eq) goto loc_83022D58;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83022c50
	ctx.lr = 0x83022D50;
	sub_83022C50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83022d5c
	if (!cr6.eq) goto loc_83022D5C;
loc_83022D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83022D5C:
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

__attribute__((alias("__imp__sub_83022D70"))) PPC_WEAK_FUNC(sub_83022D70);
PPC_FUNC_IMPL(__imp__sub_83022D70) {
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
	// blt cr6,0x83022d94
	if (cr6.lt) goto loc_83022D94;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83022d98
	goto loc_83022D98;
loc_83022D94:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83022D98:
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,120
	ctx.r4.u64 = ctx.r4.u64 | 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83022DB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83022dd0
	if (cr6.eq) goto loc_83022DD0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83022c50
	ctx.lr = 0x83022DC8;
	sub_83022C50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83022dd4
	if (!cr6.eq) goto loc_83022DD4;
loc_83022DD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83022DD4:
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

__attribute__((alias("__imp__sub_83022DE8"))) PPC_WEAK_FUNC(sub_83022DE8);
PPC_FUNC_IMPL(__imp__sub_83022DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83022DF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83022E00;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83022e58
	if (!cr6.eq) goto loc_83022E58;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16992
	ctx.r11.s64 = ctx.r11.s64 + 16992;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x837b0c10
	ctx.lr = 0x83022E20;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83022E2C;
	sub_82E88020(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83022e4c
	if (cr6.lt) goto loc_83022E4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83022E4C;
	sub_825952B8(ctx, base);
loc_83022E4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83022E58:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x83022f40
	if (cr6.gt) goto loc_83022F40;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r28,29
	ctx.r28.s64 = 29;
	// ori r29,r10,104
	ctx.r29.u64 = ctx.r10.u64 | 104;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11912
	ctx.r12.s64 = ctx.r12.s64 + 11912;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83022EC0;
	case 1:
		goto loc_83022EC8;
	case 2:
		goto loc_83022F20;
	case 3:
		goto loc_83022F4C;
	case 4:
		goto loc_83022FD0;
	case 5:
		goto loc_83023058;
	case 6:
		goto loc_830230E4;
	case 7:
		goto loc_8302315C;
	case 8:
		goto loc_83023248;
	case 9:
		goto loc_83022F40;
	case 10:
		goto loc_830230BC;
	case 11:
		goto loc_83023294;
	case 12:
		goto loc_830232D0;
	case 13:
		goto loc_8302330C;
	default:
		return;
	}
	// lwz r24,11968(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11968);
	// lwz r24,11976(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11976);
	// lwz r24,12064(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12064);
	// lwz r24,12108(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12108);
	// lwz r24,12240(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12240);
	// lwz r24,12376(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12376);
	// lwz r24,12516(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12516);
	// lwz r24,12636(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12636);
	// lwz r24,12872(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12872);
	// lwz r24,12096(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12096);
	// lwz r24,12476(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12476);
	// lwz r24,12948(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12948);
	// lwz r24,13008(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13008);
	// lwz r24,13068(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13068);
loc_83022EC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83022EC8:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r11,r9,16992
	ctx.r11.s64 = ctx.r9.s64 + 16992;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// bl 0x839e64d8
	ctx.lr = 0x83022EF0;
	sub_839E64D8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ori r6,r8,116
	ctx.r6.u64 = ctx.r8.u64 | 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// bl 0x83103100
	ctx.lr = 0x83022F0C;
	sub_83103100(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83022F20:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,116
	ctx.r10.u64 = ctx.r11.u64 | 116;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 92);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83022f40
	if (cr6.eq) goto loc_83022F40;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83022F40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83022F4C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,108
	ctx.r10.u64 = ctx.r11.u64 | 108;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x83022f74
	if (cr6.eq) goto loc_83022F74;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83022F74:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,16992
	ctx.r11.s64 = ctx.r11.s64 + 16992;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x83022F88;
	sub_837B0C10(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// bl 0x82d894e0
	ctx.lr = 0x83022F9C;
	sub_82D894E0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83022FA8;
	sub_8387E8E0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83022FD0:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ddcec8
	ctx.lr = 0x83022FE0;
	sub_82DDCEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83022f40
	if (cr6.eq) goto loc_83022F40;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023010
	if (cr6.eq) goto loc_83023010;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_83023010:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x83023044
	if (!cr6.eq) goto loc_83023044;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83023020;
	sub_831F8200(ctx, base);
	// lbz r11,753(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 753);
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
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83023044:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83023058:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,108
	ctx.r10.u64 = ctx.r11.u64 | 108;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x830230d0
	if (!cr6.eq) goto loc_830230D0;
	// bl 0x82e6e978
	ctx.lr = 0x83023070;
	sub_82E6E978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83023078;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830230bc
	if (cr6.eq) goto loc_830230BC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830230bc
	if (cr6.eq) goto loc_830230BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r8,r11,32200
	ctx.r8.u64 = ctx.r11.u64 | 32200;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// blt cr6,0x830230d0
	if (cr6.lt) goto loc_830230D0;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830230BC:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830230D0:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830230E4:
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// bl 0x82de5ac0
	ctx.lr = 0x830230EC;
	sub_82DE5AC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023044
	if (cr6.eq) goto loc_83023044;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5104
	ctx.r4.u64 = ctx.r4.u64 | 5104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83023110;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023120
	if (cr6.eq) goto loc_83023120;
	// bl 0x82e8b3a0
	ctx.lr = 0x8302311C;
	sub_82E8B3A0(ctx, base);
	// b 0x83023124
	goto loc_83023124;
loc_83023120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83023124:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// beq cr6,0x83023044
	if (cr6.eq) goto loc_83023044;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_8302315C:
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83022f40
	if (cr6.eq) goto loc_83022F40;
	// ble cr6,0x83023044
	if (!cr6.gt) goto loc_83023044;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830231e4
	if (cr6.eq) goto loc_830231E4;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x830231B4;
	sub_82595150(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830231d4
	if (cr6.eq) goto loc_830231D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830231D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830231D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x830231DC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_830231E4:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d7df28
	ctx.lr = 0x830231F4;
	sub_82D7DF28(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,16992
	ctx.r10.s64 = ctx.r10.s64 + 16992;
	// addi r10,r10,-350
	ctx.r10.s64 = ctx.r10.s64 + -350;
loc_83023204:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83023228
	if (cr6.eq) goto loc_83023228;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83023204
	if (cr6.eq) goto loc_83023204;
loc_83023228:
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83023248:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,16992
	ctx.r11.s64 = ctx.r11.s64 + 16992;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83023264;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,246
	ctx.r4.u64 = ctx.r4.u64 | 246;
	// bl 0x82d2ada8
	ctx.lr = 0x83023274;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83023280;
	sub_83103100(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83023294:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,16992
	ctx.r11.s64 = ctx.r11.s64 + 16992;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830232A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830232B4;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x830232BC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830232D0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,16992
	ctx.r11.s64 = ctx.r11.s64 + 16992;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830232E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830232F0;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x830232F8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302330C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,16992
	ctx.r4.s64 = ctx.r11.s64 + 16992;
	// bl 0x837b0c10
	ctx.lr = 0x8302331C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83023328;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83023330;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83023344"))) PPC_WEAK_FUNC(sub_83023344);
PPC_FUNC_IMPL(__imp__sub_83023344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83023348"))) PPC_WEAK_FUNC(sub_83023348);
PPC_FUNC_IMPL(__imp__sub_83023348) {
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
	// bl 0x82d86078
	ctx.lr = 0x8302335C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830233f4
	if (cr6.eq) goto loc_830233F4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8302336C;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d97738
	ctx.lr = 0x83023374;
	sub_82D97738(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83023388
	if (!cr6.eq) goto loc_83023388;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,-29468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29468);
	// b 0x830233ec
	goto loc_830233EC;
loc_83023388:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8302339c
	if (!cr6.eq) goto loc_8302339C;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,-29464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29464);
	// b 0x830233ec
	goto loc_830233EC;
loc_8302339C:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x830233dc
	if (!cr6.eq) goto loc_830233DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47e40
	ctx.lr = 0x830233AC;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830233d0
	if (cr6.eq) goto loc_830233D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46f98
	ctx.lr = 0x830233C4;
	sub_82A46F98(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,-29456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29456);
	// b 0x830233ec
	goto loc_830233EC;
loc_830233D0:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,-29460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29460);
	// b 0x830233ec
	goto loc_830233EC;
loc_830233DC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830233f4
	if (!cr6.eq) goto loc_830233F4;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,-29472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29472);
loc_830233EC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830233fc
	if (!cr6.eq) goto loc_830233FC;
loc_830233F4:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,-29452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29452);
loc_830233FC:
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

__attribute__((alias("__imp__sub_83023410"))) PPC_WEAK_FUNC(sub_83023410);
PPC_FUNC_IMPL(__imp__sub_83023410) {
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
	ctx.lr = 0x83023440;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023480
	if (cr6.eq) goto loc_83023480;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83023454;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,17664
	ctx.r8.s64 = ctx.r10.s64 + 17664;
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
	// b 0x83023484
	goto loc_83023484;
loc_83023480:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83023484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302349C"))) PPC_WEAK_FUNC(sub_8302349C);
PPC_FUNC_IMPL(__imp__sub_8302349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830234A0"))) PPC_WEAK_FUNC(sub_830234A0);
PPC_FUNC_IMPL(__imp__sub_830234A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830234b0
	if (cr6.lt) goto loc_830234B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830234B0:
	// b 0x83023410
	sub_83023410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830234B4"))) PPC_WEAK_FUNC(sub_830234B4);
PPC_FUNC_IMPL(__imp__sub_830234B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830234B8"))) PPC_WEAK_FUNC(sub_830234B8);
PPC_FUNC_IMPL(__imp__sub_830234B8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82d86078
	ctx.lr = 0x830234CC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023528
	if (cr6.eq) goto loc_83023528;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x830234DC;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d97648
	ctx.lr = 0x830234E4;
	sub_82D97648(ctx, base);
	// lwz r10,3472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	// li r11,104
	ctx.r11.s64 = 104;
	// lwz r9,3468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3468);
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83023524
	if (cr0.eq) goto loc_83023524;
	// lwz r11,3488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83023524
	if (cr6.eq) goto loc_83023524;
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
loc_83023524:
	// bl 0x82d97dd0
	ctx.lr = 0x83023528;
	sub_82D97DD0(ctx, base);
loc_83023528:
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

__attribute__((alias("__imp__sub_83023540"))) PPC_WEAK_FUNC(sub_83023540);
PPC_FUNC_IMPL(__imp__sub_83023540) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8302359c
	if (cr6.gt) goto loc_8302359C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830235b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830235B8;
	// bdzf 4*cr6+eq,0x830235f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830235F4;
	// bne cr6,0x83023650
	if (!cr6.eq) goto loc_83023650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830234b8
	ctx.lr = 0x83023584;
	sub_830234B8(ctx, base);
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
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_83023598:
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_8302359C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830235A0:
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
loc_830235B8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17548
	ctx.r4.s64 = ctx.r11.s64 + 17548;
	// bl 0x837b0c10
	ctx.lr = 0x830235C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830235D4;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830235E0;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// b 0x83023598
	goto loc_83023598;
loc_830235F4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830235FC;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302359c
	if (cr6.eq) goto loc_8302359C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023628
	if (cr6.eq) goto loc_83023628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023620;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83023628:
	// bl 0x82d86078
	ctx.lr = 0x8302362C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023644
	if (cr6.eq) goto loc_83023644;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8302363C;
	sub_82DAB6D0(ctx, base);
	// addi r3,r3,3468
	ctx.r3.s64 = ctx.r3.s64 + 3468;
	// bl 0x82d97dd0
	ctx.lr = 0x83023644;
	sub_82D97DD0(ctx, base);
loc_83023644:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8302359c
	goto loc_8302359C;
loc_83023650:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83023348
	ctx.lr = 0x83023658;
	sub_83023348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x83023664;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83023670;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83023678;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x830235a0
	goto loc_830235A0;
}

__attribute__((alias("__imp__sub_83023688"))) PPC_WEAK_FUNC(sub_83023688);
PPC_FUNC_IMPL(__imp__sub_83023688) {
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
	// bne cr6,0x830236a4
	if (!cr6.eq) goto loc_830236A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_830236A4:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830236A8"))) PPC_WEAK_FUNC(sub_830236A8);
PPC_FUNC_IMPL(__imp__sub_830236A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830236B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
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
	ctx.lr = 0x830236D4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023718
	if (cr6.eq) goto loc_83023718;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830236E8;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r9,r11,18160
	ctx.r9.s64 = ctx.r11.s64 + 18160;
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
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83023724"))) PPC_WEAK_FUNC(sub_83023724);
PPC_FUNC_IMPL(__imp__sub_83023724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83023728"))) PPC_WEAK_FUNC(sub_83023728);
PPC_FUNC_IMPL(__imp__sub_83023728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83023738
	if (cr6.lt) goto loc_83023738;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83023738:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830236a8
	sub_830236A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83023740"))) PPC_WEAK_FUNC(sub_83023740);
PPC_FUNC_IMPL(__imp__sub_83023740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83023750
	if (cr6.lt) goto loc_83023750;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83023750:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830236a8
	sub_830236A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83023758"))) PPC_WEAK_FUNC(sub_83023758);
PPC_FUNC_IMPL(__imp__sub_83023758) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,17827
	ctx.r4.s64 = ctx.r11.s64 + 17827;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83023788;
	sub_8259CC28(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d8bb28
	ctx.lr = 0x83023798;
	sub_82D8BB28(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83023814
	if (cr6.eq) goto loc_83023814;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830237fc
	if (!cr6.eq) goto loc_830237FC;
	// bl 0x82d86078
	ctx.lr = 0x830237B4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023814
	if (cr6.eq) goto loc_83023814;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x830237C4;
	sub_831F8200(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x830237D8;
	sub_831156E8(ctx, base);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x830237E4;
	sub_8311BF98(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// ori r4,r4,402
	ctx.r4.u64 = ctx.r4.u64 | 402;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x830237F8;
	sub_82D042A8(ctx, base);
	// b 0x83023814
	goto loc_83023814;
loc_830237FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83023814
	if (!cr6.eq) goto loc_83023814;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,194
	ctx.r4.u64 = ctx.r4.u64 | 194;
	// bl 0x82d04220
	ctx.lr = 0x83023814;
	sub_82D04220(ctx, base);
loc_83023814:
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

__attribute__((alias("__imp__sub_8302382C"))) PPC_WEAK_FUNC(sub_8302382C);
PPC_FUNC_IMPL(__imp__sub_8302382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83023830"))) PPC_WEAK_FUNC(sub_83023830);
PPC_FUNC_IMPL(__imp__sub_83023830) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x830238f0
	if (cr6.gt) goto loc_830238F0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83023878
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83023878;
	// bdzf 4*cr6+eq,0x830238f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830238F0;
	// bdzf 4*cr6+eq,0x8302390c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302390C;
	// bne cr6,0x83023918
	if (!cr6.eq) goto loc_83023918;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_83023878:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,18060
	ctx.r30.s64 = ctx.r11.s64 + 18060;
	// addi r4,r30,-234
	ctx.r4.s64 = ctx.r30.s64 + -234;
	// bl 0x837b0c10
	ctx.lr = 0x8302388C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83023758
	ctx.lr = 0x83023898;
	sub_83023758(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830238e0
	if (cr6.eq) goto loc_830238E0;
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x830238B8;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830238e0
	if (cr6.eq) goto loc_830238E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2aab0
	ctx.lr = 0x830238CC;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830238D8;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x830238e4
	goto loc_830238E4;
loc_830238E0:
	// li r11,3
	ctx.r11.s64 = 3;
loc_830238E4:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830238F0;
	sub_8387E8E0(ctx, base);
loc_830238F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830238F4:
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
loc_8302390C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x830238f0
	goto loc_830238F0;
loc_83023918:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,18060
	ctx.r4.s64 = ctx.r11.s64 + 18060;
	// bl 0x837b0c10
	ctx.lr = 0x83023928;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83023934;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8302393C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830238f4
	goto loc_830238F4;
}

__attribute__((alias("__imp__sub_8302394C"))) PPC_WEAK_FUNC(sub_8302394C);
PPC_FUNC_IMPL(__imp__sub_8302394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83023950"))) PPC_WEAK_FUNC(sub_83023950);
PPC_FUNC_IMPL(__imp__sub_83023950) {
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
	ctx.lr = 0x83023980;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830239c4
	if (cr6.eq) goto loc_830239C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83023994;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,18688
	ctx.r8.s64 = ctx.r10.s64 + 18688;
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
	// b 0x830239c8
	goto loc_830239C8;
loc_830239C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830239C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830239E0"))) PPC_WEAK_FUNC(sub_830239E0);
PPC_FUNC_IMPL(__imp__sub_830239E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830239f0
	if (cr6.lt) goto loc_830239F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830239F0:
	// b 0x83023950
	sub_83023950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830239F4"))) PPC_WEAK_FUNC(sub_830239F4);
PPC_FUNC_IMPL(__imp__sub_830239F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830239F8"))) PPC_WEAK_FUNC(sub_830239F8);
PPC_FUNC_IMPL(__imp__sub_830239F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83023A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// bgt cr6,0x83023af0
	if (cr6.gt) goto loc_83023AF0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83023a44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83023A44;
	// bdzf 4*cr6+eq,0x83023aa8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83023AA8;
	// bdzf 4*cr6+eq,0x83023b10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83023B10;
	// bdzf 4*cr6+eq,0x83023b5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83023B5C;
	// bdzf 4*cr6+eq,0x83023bb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83023BB0;
	// bdzf 4*cr6+eq,0x83023bc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83023BC4;
	// bne cr6,0x83023c00
	if (!cr6.eq) goto loc_83023C00;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_83023A44:
	// bl 0x82d86078
	ctx.lr = 0x83023A48;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023afc
	if (cr6.eq) goto loc_83023AFC;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r9,18592
	ctx.r11.s64 = ctx.r9.s64 + 18592;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// stw r29,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r29.u32);
	// bl 0x837b0c10
	ctx.lr = 0x83023A6C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83023A78;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83023A84;
	sub_8387E8E0(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r6,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023AA8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83023AB0;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83023af0
	if (cr6.eq) goto loc_83023AF0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023ae0
	if (cr6.eq) goto loc_83023AE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023AD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83023AE0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83023afc
	if (!cr6.eq) goto loc_83023AFC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83023AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023AFC:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023B10:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,18592
	ctx.r11.s64 = ctx.r11.s64 + 18592;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x83023B24;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83023B30;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83023B3C;
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
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023B5C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83023B64;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83023af0
	if (cr6.eq) goto loc_83023AF0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023b94
	if (cr6.eq) goto loc_83023B94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83023B94:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83023afc
	if (!cr6.eq) goto loc_83023AFC;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023BB0:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023BC4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,18592
	ctx.r11.s64 = ctx.r11.s64 + 18592;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83023BD8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83023BE4;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83023BEC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83023C00:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,18592
	ctx.r4.s64 = ctx.r11.s64 + 18592;
	// bl 0x837b0c10
	ctx.lr = 0x83023C10;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83023C1C;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83023C24;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83023C38"))) PPC_WEAK_FUNC(sub_83023C38);
PPC_FUNC_IMPL(__imp__sub_83023C38) {
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
	ctx.lr = 0x83023C58;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,19440
	ctx.r8.s64 = ctx.r10.s64 + 19440;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023CA8"))) PPC_WEAK_FUNC(sub_83023CA8);
PPC_FUNC_IMPL(__imp__sub_83023CA8) {
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
	// bne cr6,0x83023cc4
	if (!cr6.eq) goto loc_83023CC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_83023CC4:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83023CC8"))) PPC_WEAK_FUNC(sub_83023CC8);
PPC_FUNC_IMPL(__imp__sub_83023CC8) {
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
	// blt cr6,0x83023cec
	if (cr6.lt) goto loc_83023CEC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83023cf0
	goto loc_83023CF0;
loc_83023CEC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83023CF0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83023D08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023d24
	if (cr6.eq) goto loc_83023D24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83023c38
	ctx.lr = 0x83023D1C;
	sub_83023C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83023d28
	if (!cr6.eq) goto loc_83023D28;
loc_83023D24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83023D28:
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

__attribute__((alias("__imp__sub_83023D3C"))) PPC_WEAK_FUNC(sub_83023D3C);
PPC_FUNC_IMPL(__imp__sub_83023D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83023D40"))) PPC_WEAK_FUNC(sub_83023D40);
PPC_FUNC_IMPL(__imp__sub_83023D40) {
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
	// blt cr6,0x83023d64
	if (cr6.lt) goto loc_83023D64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83023d68
	goto loc_83023D68;
loc_83023D64:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83023D68:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83023D80;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023d9c
	if (cr6.eq) goto loc_83023D9C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83023c38
	ctx.lr = 0x83023D94;
	sub_83023C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83023da0
	if (!cr6.eq) goto loc_83023DA0;
loc_83023D9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83023DA0:
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

__attribute__((alias("__imp__sub_83023DB4"))) PPC_WEAK_FUNC(sub_83023DB4);
PPC_FUNC_IMPL(__imp__sub_83023DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83023DB8"))) PPC_WEAK_FUNC(sub_83023DB8);
PPC_FUNC_IMPL(__imp__sub_83023DB8) {
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
	// blt cr6,0x83023ddc
	if (cr6.lt) goto loc_83023DDC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83023de0
	goto loc_83023DE0;
loc_83023DDC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83023DE0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83023DF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023e14
	if (cr6.eq) goto loc_83023E14;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83023c38
	ctx.lr = 0x83023E0C;
	sub_83023C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83023e18
	if (!cr6.eq) goto loc_83023E18;
loc_83023E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83023E18:
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

__attribute__((alias("__imp__sub_83023E2C"))) PPC_WEAK_FUNC(sub_83023E2C);
PPC_FUNC_IMPL(__imp__sub_83023E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83023E30"))) PPC_WEAK_FUNC(sub_83023E30);
PPC_FUNC_IMPL(__imp__sub_83023E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83023E38;
	__savegprlr_26(ctx, base);
	// stwu r1,-3312(r1)
	ea = -3312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83023E48;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83023ea4
	if (!cr6.eq) goto loc_83023EA4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// addi r4,r11,-216
	ctx.r4.s64 = ctx.r11.s64 + -216;
	// bl 0x837b0c10
	ctx.lr = 0x83023E64;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83023E70;
	sub_82E88020(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83023e90
	if (cr6.lt) goto loc_83023E90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83023E90;
	sub_825952B8(ctx, base);
loc_83023E90:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83023EA4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x83024610
	if (cr6.gt) goto loc_83024610;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16076
	ctx.r12.s64 = ctx.r12.s64 + 16076;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83023F0C;
	case 1:
		goto loc_83023F38;
	case 2:
		goto loc_83023FBC;
	case 3:
		goto loc_83024010;
	case 4:
		goto loc_830240C0;
	case 5:
		goto loc_83024298;
	case 6:
		goto loc_830243B4;
	case 7:
		goto loc_830240E4;
	case 8:
		goto loc_83024218;
	case 9:
		goto loc_830243FC;
	case 10:
		goto loc_83024424;
	case 11:
		goto loc_83024474;
	case 12:
		goto loc_830244C0;
	case 13:
		goto loc_830244CC;
	case 14:
		goto loc_83024508;
	case 15:
		goto loc_83024544;
	default:
		return;
	}
	// lwz r24,16140(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16140);
	// lwz r24,16184(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16184);
	// lwz r24,16316(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16316);
	// lwz r24,16400(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16400);
	// lwz r24,16576(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16576);
	// lwz r24,17048(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17048);
	// lwz r24,17332(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17332);
	// lwz r24,16612(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16612);
	// lwz r24,16920(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16920);
	// lwz r24,17404(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17404);
	// lwz r24,17444(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17444);
	// lwz r24,17524(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17524);
	// lwz r24,17600(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17600);
	// lwz r24,17612(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17612);
	// lwz r24,17672(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17672);
	// lwz r24,17732(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17732);
loc_83023F0C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d8bb28
	ctx.lr = 0x83023F14;
	sub_82D8BB28(ctx, base);
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
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83023F38:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8bb28
	ctx.lr = 0x83023F40;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83023ffc
	if (cr6.eq) goto loc_83023FFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83023F54;
	sub_82DAB6D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83023ffc
	if (!cr6.eq) goto loc_83023FFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d976b8
	ctx.lr = 0x83023F68;
	sub_82D976B8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// addi r4,r11,-208
	ctx.r4.s64 = ctx.r11.s64 + -208;
	// bl 0x837b0c10
	ctx.lr = 0x83023F7C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83023F88;
	sub_82D894E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83023F94;
	sub_8387E8E0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
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
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83023FBC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82ddcec8
	ctx.lr = 0x83023FC4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830244c0
	if (cr6.eq) goto loc_830244C0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83023ff4
	if (cr6.eq) goto loc_83023FF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83023FEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_83023FF4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830244b8
	if (!cr6.eq) goto loc_830244B8;
loc_83023FFC:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024010:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83024068
	if (!cr6.eq) goto loc_83024068;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r11,r10,19348
	ctx.r11.s64 = ctx.r10.s64 + 19348;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-180
	ctx.r3.s64 = ctx.r11.s64 + -180;
	// bl 0x839e64d8
	ctx.lr = 0x83024044;
	sub_839E64D8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83103100
	ctx.lr = 0x83024058;
	sub_83103100(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024068:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830240d0
	if (!cr6.eq) goto loc_830240D0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r11,r9,19348
	ctx.r11.s64 = ctx.r9.s64 + 19348;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r11,-140
	ctx.r3.s64 = ctx.r11.s64 + -140;
	// bl 0x839e64d8
	ctx.lr = 0x83024098;
	sub_839E64D8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x83103100
	ctx.lr = 0x830240AC;
	sub_83103100(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830240C0:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830244c0
	if (cr6.eq) goto loc_830244C0;
loc_830240D0:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830240E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830240EC;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x830240F8;
	sub_825832E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83024104;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83024108;
	sub_82D99C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832e0
	ctx.lr = 0x83024114;
	sub_825832E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d975d8
	ctx.lr = 0x8302411C;
	sub_82D975D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302413c
	if (!cr6.eq) goto loc_8302413C;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8302413C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x83024144;
	sub_825832F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830244b8
	if (cr6.eq) goto loc_830244B8;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83024168
	if (cr6.eq) goto loc_83024168;
	// li r3,274
	ctx.r3.s64 = 274;
	// bl 0x82d84728
	ctx.lr = 0x83024168;
	sub_82D84728(ctx, base);
loc_83024168:
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82b54cc0
	ctx.lr = 0x83024170;
	sub_82B54CC0(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,1188
	ctx.r11.s64 = ctx.r1.s64 + 1188;
	// stw r30,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r30.u32);
	// stw r9,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8302418C:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stbu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8302418c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8302418C;
	// stb r30,1336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1336, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r30.u32);
	// bl 0x825832e0
	ctx.lr = 0x830241A8;
	sub_825832E0(ctx, base);
	// stw r3,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r3.u32);
	// addi r29,r1,1188
	ctx.r29.s64 = ctx.r1.s64 + 1188;
loc_830241B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d975b8
	ctx.lr = 0x830241BC;
	sub_82D975B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stbu r10,8(r29)
	ea = 8 + ctx.r29.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r29.u32 = ea;
	// blt cr6,0x830241b0
	if (cr6.lt) goto loc_830241B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d98c30
	ctx.lr = 0x830241E0;
	sub_82D98C30(ctx, base);
	// stb r3,1336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1336, ctx.r3.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d999a0
	ctx.lr = 0x830241EC;
	sub_82D999A0(ctx, base);
	// stw r3,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da44b8
	ctx.lr = 0x830241F8;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4370
	ctx.lr = 0x83024204;
	sub_82DA4370(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024218:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83024220;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83024228;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830244c0
	if (cr6.eq) goto loc_830244C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302423C;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83024284
	if (cr6.eq) goto loc_83024284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4368
	ctx.lr = 0x83024250;
	sub_82DA4368(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x82450880
	ctx.lr = 0x83024260;
	sub_82450880(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024284:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024298:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x830242A0;
	sub_825832D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830242AC;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x830242B8;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830242C4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830242C8;
	sub_825832F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830244b8
	if (cr6.eq) goto loc_830244B8;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82b54cc0
	ctx.lr = 0x830242DC;
	sub_82B54CC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,6
	ctx.r26.s64 = 6;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r30,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r26.u32);
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// stw r30,3240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3240, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83024300;
	sub_831CDCF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825832e0
	ctx.lr = 0x83024308;
	sub_825832E0(ctx, base);
	// stw r3,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d976a0
	ctx.lr = 0x83024314;
	sub_82D976A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x83024324;
	sub_831CE980(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83024334;
	sub_831CE980(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82ac0af0
	ctx.lr = 0x8302433C;
	sub_82AC0AF0(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82abfda0
	ctx.lr = 0x83024348;
	sub_82ABFDA0(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82d8c6a0
	ctx.lr = 0x83024358;
	sub_82D8C6A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83024368;
	sub_831CE980(ctx, base);
	// addi r6,r1,3240
	ctx.r6.s64 = ctx.r1.s64 + 3240;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// bl 0x82d8d090
	ctx.lr = 0x8302437C;
	sub_82D8D090(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d976a0
	ctx.lr = 0x83024384;
	sub_82D976A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82abfda0
	ctx.lr = 0x83024390;
	sub_82ABFDA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83024398;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x830243A4;
	sub_82DA4370(ctx, base);
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830243B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x830243BC;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x830243C4;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830244c0
	if (cr6.eq) goto loc_830244C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x830243D8;
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
	// addi r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 9;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830243FC:
	// bl 0x82d95f98
	ctx.lr = 0x83024400;
	sub_82D95F98(ctx, base);
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
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024424:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x837b0c10
	ctx.lr = 0x83024438;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83024444;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x83024450;
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
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024474:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8302447C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830244c0
	if (cr6.eq) goto loc_830244C0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830244ac
	if (cr6.eq) goto loc_830244AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830244A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830244AC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// li r11,15
	ctx.r11.s64 = 15;
	// beq cr6,0x830244bc
	if (cr6.eq) goto loc_830244BC;
loc_830244B8:
	// li r11,13
	ctx.r11.s64 = 13;
loc_830244BC:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_830244C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830244CC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x830244E0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830244EC;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x830244F4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024508:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x8302451C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83024528;
	sub_82E88020(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x83024530;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024544:
	// bl 0x82d95f98
	ctx.lr = 0x83024548;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83024590
	if (cr6.eq) goto loc_83024590;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83024568;
	sub_837B0C10(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83024574;
	sub_82E88020(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x8302457C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024590:
	// bl 0x82db7320
	ctx.lr = 0x83024594;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,19348
	ctx.r11.s64 = ctx.r11.s64 + 19348;
	// beq cr6,0x830245dc
	if (cr6.eq) goto loc_830245DC;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830245B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830245C0;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x830245C8;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830245DC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830245E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830245F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x830245FC;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83024610:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,19348
	ctx.r4.s64 = ctx.r11.s64 + 19348;
	// bl 0x837b0c10
	ctx.lr = 0x83024620;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302462C;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83024634;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83024648"))) PPC_WEAK_FUNC(sub_83024648);
PPC_FUNC_IMPL(__imp__sub_83024648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8302467c
	if (!cr6.eq) goto loc_8302467C;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302467c
	if (!cr6.eq) goto loc_8302467C;
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
loc_8302467C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83024680"))) PPC_WEAK_FUNC(sub_83024680);
PPC_FUNC_IMPL(__imp__sub_83024680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83024688;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830246AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830246f4
	if (cr6.eq) goto loc_830246F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830246C0;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,19960
	ctx.r8.s64 = ctx.r10.s64 + 19960;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830246F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83024700"))) PPC_WEAK_FUNC(sub_83024700);
PPC_FUNC_IMPL(__imp__sub_83024700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83024710
	if (cr6.lt) goto loc_83024710;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83024710:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83024680
	sub_83024680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83024718"))) PPC_WEAK_FUNC(sub_83024718);
PPC_FUNC_IMPL(__imp__sub_83024718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83024728
	if (cr6.lt) goto loc_83024728;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83024728:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83024680
	sub_83024680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83024730"))) PPC_WEAK_FUNC(sub_83024730);
PPC_FUNC_IMPL(__imp__sub_83024730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83024738;
	__savegprlr_20(ctx, base);
	// stwu r1,-3456(r1)
	ea = -3456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83024748;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830247a4
	if (!cr6.eq) goto loc_830247A4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,19868
	ctx.r11.s64 = ctx.r11.s64 + 19868;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83024764;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x83024770;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83024790
	if (cr6.lt) goto loc_83024790;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83024790;
	sub_825952B8(ctx, base);
loc_83024790:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830247A4:
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83024e20
	if (cr6.gt) goto loc_83024E20;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83024a1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024A1C;
	// bdzf 4*cr6+eq,0x83024a84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024A84;
	// bdzf 4*cr6+eq,0x83024c30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024C30;
	// bdzf 4*cr6+eq,0x83024c78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024C78;
	// bdzf 4*cr6+eq,0x83024d88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024D88;
	// bdzf 4*cr6+eq,0x83024d94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024D94;
	// bdzf 4*cr6+eq,0x83024dd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024DD0;
	// bne cr6,0x83024df8
	if (!cr6.eq) goto loc_83024DF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830247E4;
	sub_82DAB6D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x830247F0;
	sub_825832E8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x830247FC;
	sub_825832D8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83024804;
	sub_82D99C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825832e0
	ctx.lr = 0x83024810;
	sub_825832E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x8302481C;
	sub_825832F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83024a5c
	if (cr6.eq) goto loc_83024A5C;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82b54cc0
	ctx.lr = 0x83024830;
	sub_82B54CC0(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,532
	ctx.r11.s64 = ctx.r1.s64 + 532;
	// stw r27,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r27.u32);
	// stw r9,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8302484C:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stbu r27,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r27.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8302484c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8302484C;
	// stb r27,680(r1)
	PPC_STORE_U8(ctx.r1.u32 + 680, ctx.r27.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r27.u32);
	// li r24,18
	ctx.r24.s64 = 18;
	// bl 0x825832e0
	ctx.lr = 0x8302486C;
	sub_825832E0(ctx, base);
	// stw r3,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r31,r1,540
	ctx.r31.s64 = ctx.r1.s64 + 540;
loc_83024878:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83024884;
	sub_82D987F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x8302488C;
	sub_82D983F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830248bc
	if (cr6.eq) goto loc_830248BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bl 0x82a47dc0
	ctx.lr = 0x830248A8;
	sub_82A47DC0(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bne cr6,0x830248c4
	if (!cr6.eq) goto loc_830248C4;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_830248BC:
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
loc_830248C4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r28,18
	cr6.compare<uint32_t>(ctx.r28.u32, 18, xer);
	// blt cr6,0x83024878
	if (cr6.lt) goto loc_83024878;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d98c30
	ctx.lr = 0x830248DC;
	sub_82D98C30(ctx, base);
	// stb r3,680(r1)
	PPC_STORE_U8(ctx.r1.u32 + 680, ctx.r3.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825832e8
	ctx.lr = 0x830248E8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// bge cr6,0x83024a5c
	if (!cr6.lt) goto loc_83024A5C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83024900;
	sub_82D987F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83133f38
	ctx.lr = 0x83024908;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302492c
	if (!cr6.eq) goto loc_8302492C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d983f8
	ctx.lr = 0x8302491C;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302492c
	if (cr6.eq) goto loc_8302492C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,100(r20)
	PPC_STORE_U32(ctx.r20.u32 + 100, ctx.r11.u32);
loc_8302492C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83133f38
	ctx.lr = 0x83024934;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83024978
	if (!cr6.eq) goto loc_83024978;
	// cmpwi cr6,r24,18
	cr6.compare<int32_t>(ctx.r24.s32, 18, xer);
	// bge cr6,0x83024978
	if (!cr6.lt) goto loc_83024978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83024950;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83024978
	if (cr6.eq) goto loc_83024978;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,536
	ctx.r10.s64 = ctx.r1.s64 + 536;
	// rlwinm r29,r24,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82a47dc0
	ctx.lr = 0x83024970;
	sub_82A47DC0(ctx, base);
	// addi r9,r1,540
	ctx.r9.s64 = ctx.r1.s64 + 540;
	// stbx r3,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r3.u8);
loc_83024978:
	// addi r11,r1,536
	ctx.r11.s64 = ctx.r1.s64 + 536;
	// rlwinm r31,r30,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r25,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u32);
	// bl 0x831156e8
	ctx.lr = 0x83024988;
	sub_831156E8(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x8302499C;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83102db0
	ctx.lr = 0x830249A8;
	sub_83102DB0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82d9a868
	ctx.lr = 0x830249B0;
	sub_82D9A868(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x830249CC;
	sub_83120738(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,92(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x82d98c98
	ctx.lr = 0x830249E0;
	sub_82D98C98(ctx, base);
	// addi r9,r1,540
	ctx.r9.s64 = ctx.r1.s64 + 540;
	// stbx r3,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d999a0
	ctx.lr = 0x830249F0;
	sub_82D999A0(ctx, base);
	// stw r3,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da44b8
	ctx.lr = 0x830249FC;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da4370
	ctx.lr = 0x83024A08;
	sub_82DA4370(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r8.u32);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83024A1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83024A24;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83024A2C;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83024d88
	if (cr6.eq) goto loc_83024D88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83024A40;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83024a70
	if (cr6.eq) goto loc_83024A70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83024A54;
	sub_82DAB6D0(ctx, base);
	// lwz r4,100(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 100);
	// bl 0x825832f8
	ctx.lr = 0x83024A5C;
	sub_825832F8(ctx, base);
loc_83024A5C:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83024A70:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83024A84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83024A8C;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83024A98;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83024AA4;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83024AB0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83024AB4;
	sub_825832F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83024a5c
	if (cr6.eq) goto loc_83024A5C;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82b54cc0
	ctx.lr = 0x83024AC8;
	sub_82B54CC0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r27,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// stw r27,2584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2584, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83024AEC;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x83024AF4;
	sub_825832E0(ctx, base);
	// stw r3,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83024B00;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976a0
	ctx.lr = 0x83024B0C;
	sub_82D976A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x83024B1C;
	sub_831CE980(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,3072
	ctx.r4.s64 = ctx.r1.s64 + 3072;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83024B2C;
	sub_831CE980(ctx, base);
	// lbz r8,3104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 3104);
	// li r9,255
	ctx.r9.s64 = 255;
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024b40
	if (!cr6.eq) goto loc_83024B40;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
loc_83024B40:
	// lbz r10,129(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024b50
	if (!cr6.eq) goto loc_83024B50;
	// stb r9,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r9.u8);
loc_83024B50:
	// lbz r10,130(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024b60
	if (!cr6.eq) goto loc_83024B60;
	// stb r9,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r9.u8);
loc_83024B60:
	// lbz r10,131(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024b70
	if (!cr6.eq) goto loc_83024B70;
	// stb r9,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r9.u8);
loc_83024B70:
	// lbz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024b80
	if (!cr6.eq) goto loc_83024B80;
	// stb r9,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r9.u8);
loc_83024B80:
	// lbz r10,133(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024b90
	if (!cr6.eq) goto loc_83024B90;
	// stb r9,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r9.u8);
loc_83024B90:
	// lbz r10,137(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024ba0
	if (!cr6.eq) goto loc_83024BA0;
	// stb r9,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r9.u8);
loc_83024BA0:
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83024BAC:
	// addi r10,r1,134
	ctx.r10.s64 = ctx.r1.s64 + 134;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, xer);
	// bne cr6,0x83024bc0
	if (!cr6.eq) goto loc_83024BC0;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_83024BC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83024bac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83024BAC;
	// addi r3,r1,3072
	ctx.r3.s64 = ctx.r1.s64 + 3072;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83024BD8;
	sub_831CE980(ctx, base);
	// addi r6,r1,2584
	ctx.r6.s64 = ctx.r1.s64 + 2584;
	// addi r5,r1,2592
	ctx.r5.s64 = ctx.r1.s64 + 2592;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82d8d090
	ctx.lr = 0x83024BEC;
	sub_82D8D090(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82ac0af0
	ctx.lr = 0x83024BF4;
	sub_82AC0AF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976a0
	ctx.lr = 0x83024BFC;
	sub_82D976A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82abfda0
	ctx.lr = 0x83024C08;
	sub_82ABFDA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83024C10;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4370
	ctx.lr = 0x83024C1C;
	sub_82DA4370(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83024C30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83024C38;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83024C40;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83024d88
	if (cr6.eq) goto loc_83024D88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83024C54;
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
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r8.u32);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83024C78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83024C80;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83024C8C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83024C90;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83024C94;
	sub_825832F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83024a5c
	if (cr6.eq) goto loc_83024A5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x825832e0
	ctx.lr = 0x83024CB0;
	sub_825832E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x83024CB8;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x83024CC4;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x83024CD4;
	sub_831CE980(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r31,r11,19868
	ctx.r31.s64 = ctx.r11.s64 + 19868;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83024CF0;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83024a5c
	if (cr6.eq) goto loc_83024A5C;
	// addi r4,r31,-266
	ctx.r4.s64 = ctx.r31.s64 + -266;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x83024D08;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83767d18
	ctx.lr = 0x83024D10;
	sub_83767D18(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83024d24
	if (cr6.lt) goto loc_83024D24;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83024d28
	goto loc_83024D28;
loc_83024D24:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_83024D28:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r6,r1,3176
	ctx.r6.s64 = ctx.r1.s64 + 3176;
	// ori r4,r4,281
	ctx.r4.u64 = ctx.r4.u64 | 281;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x83024D3C;
	sub_82D042A8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83024d50
	if (!cr6.lt) goto loc_83024D50;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83024D50:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x837b0c10
	ctx.lr = 0x83024D58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83024D64;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x83024D6C;
	sub_8387E8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83103100
	ctx.lr = 0x83024D78;
	sub_83103100(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83024D88;
	sub_8387E8E0(ctx, base);
loc_83024D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83024D94:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,19868
	ctx.r11.s64 = ctx.r11.s64 + 19868;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83024DA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x83024DB4;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83024DBC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83024DD0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,19868
	ctx.r11.s64 = ctx.r11.s64 + 19868;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83024DE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x83024DF0;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x83024e40
	goto loc_83024E40;
loc_83024DF8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,19868
	ctx.r11.s64 = ctx.r11.s64 + 19868;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83024E0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x83024E18;
	sub_82E88020(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// b 0x83024e40
	goto loc_83024E40;
loc_83024E20:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,19868
	ctx.r4.s64 = ctx.r11.s64 + 19868;
	// bl 0x837b0c10
	ctx.lr = 0x83024E30;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x83024E3C;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
loc_83024E40:
	// bl 0x8387e8e0
	ctx.lr = 0x83024E44;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83024E58"))) PPC_WEAK_FUNC(sub_83024E58);
PPC_FUNC_IMPL(__imp__sub_83024E58) {
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
	ctx.lr = 0x83024E88;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83024ec8
	if (cr6.eq) goto loc_83024EC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83024E9C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,20480
	ctx.r8.s64 = ctx.r10.s64 + 20480;
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
	// b 0x83024ecc
	goto loc_83024ECC;
loc_83024EC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83024ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024EE4"))) PPC_WEAK_FUNC(sub_83024EE4);
PPC_FUNC_IMPL(__imp__sub_83024EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83024EE8"))) PPC_WEAK_FUNC(sub_83024EE8);
PPC_FUNC_IMPL(__imp__sub_83024EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83024ef8
	if (cr6.lt) goto loc_83024EF8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83024EF8:
	// b 0x83024e58
	sub_83024E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83024EFC"))) PPC_WEAK_FUNC(sub_83024EFC);
PPC_FUNC_IMPL(__imp__sub_83024EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83024F00"))) PPC_WEAK_FUNC(sub_83024F00);
PPC_FUNC_IMPL(__imp__sub_83024F00) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83024F1C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025070
	if (cr6.eq) goto loc_83025070;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8302504c
	if (cr6.gt) goto loc_8302504C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83024fa8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024FA8;
	// bdzf 4*cr6+eq,0x83024ffc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83024FFC;
	// bne cr6,0x83025024
	if (!cr6.eq) goto loc_83025024;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83024F4C;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x83024F54;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976a8
	ctx.lr = 0x83024F60;
	sub_82D976A8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,20384
	ctx.r11.s64 = ctx.r11.s64 + 20384;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83024F74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83024F80;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83024F8C;
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
	// b 0x83025074
	goto loc_83025074;
loc_83024FA8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83024FB0;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83024ff4
	if (cr6.eq) goto loc_83024FF4;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83024fe0
	if (cr6.eq) goto loc_83024FE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83024FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83024FE0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_83024FF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83025074
	goto loc_83025074;
loc_83024FFC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,20384
	ctx.r11.s64 = ctx.r11.s64 + 20384;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83025010;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302501C;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x8302506c
	goto loc_8302506C;
loc_83025024:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,20384
	ctx.r11.s64 = ctx.r11.s64 + 20384;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83025038;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025044;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x8302506c
	goto loc_8302506C;
loc_8302504C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,20384
	ctx.r4.s64 = ctx.r11.s64 + 20384;
	// bl 0x837b0c10
	ctx.lr = 0x8302505C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025068;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_8302506C:
	// bl 0x8387e8e0
	ctx.lr = 0x83025070;
	sub_8387E8E0(ctx, base);
loc_83025070:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83025074:
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

__attribute__((alias("__imp__sub_8302508C"))) PPC_WEAK_FUNC(sub_8302508C);
PPC_FUNC_IMPL(__imp__sub_8302508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83025090"))) PPC_WEAK_FUNC(sub_83025090);
PPC_FUNC_IMPL(__imp__sub_83025090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83025098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x830250A4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025168
	if (cr6.eq) goto loc_83025168;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x830250B8;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x830250C4;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830250D0;
	sub_82D99C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da7998
	ctx.lr = 0x830250DC;
	sub_82DA7998(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da79e0
	ctx.lr = 0x830250E4;
	sub_82DA79E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x830250EC;
	sub_825832F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025168
	if (cr6.eq) goto loc_83025168;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830250FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83025108;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x8302510C;
	sub_82D983F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025130
	if (cr6.eq) goto loc_83025130;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,90
	cr6.compare<uint32_t>(ctx.r10.u32, 90, xer);
	// bge cr6,0x83025130
	if (!cr6.lt) goto loc_83025130;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82da7a28
	ctx.lr = 0x83025130;
	sub_82DA7A28(ctx, base);
loc_83025130:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x830250fc
	if (cr6.lt) goto loc_830250FC;
	// lwz r31,104(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83025168
	if (cr6.eq) goto loc_83025168;
loc_8302514C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da7a58
	ctx.lr = 0x83025158;
	sub_82DA7A58(ctx, base);
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8302514c
	if (!cr6.eq) goto loc_8302514C;
loc_83025168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83025170"))) PPC_WEAK_FUNC(sub_83025170);
PPC_FUNC_IMPL(__imp__sub_83025170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83025178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83025184;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83025198
	if (!cr6.eq) goto loc_83025198;
loc_8302518C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83025198:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x830251A4;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x830251B0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x830251B4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830251B8;
	sub_825832F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302518c
	if (cr6.eq) goto loc_8302518C;
	// lwz r31,104(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8302523c
	if (cr6.eq) goto loc_8302523C;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_830251D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d98cb0
	ctx.lr = 0x830251E4;
	sub_82D98CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302521c
	if (cr6.eq) goto loc_8302521C;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x8302520C;
	sub_831CE420(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r8.u32);
	// b 0x83025230
	goto loc_83025230;
loc_8302521C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d9b320
	ctx.lr = 0x83025228;
	sub_82D9B320(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_83025230:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x830251d8
	if (!cr6.eq) goto loc_830251D8;
loc_8302523C:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r3,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302525C"))) PPC_WEAK_FUNC(sub_8302525C);
PPC_FUNC_IMPL(__imp__sub_8302525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83025260"))) PPC_WEAK_FUNC(sub_83025260);
PPC_FUNC_IMPL(__imp__sub_83025260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83025268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83061e98
	ctx.lr = 0x83025274;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,20992
	ctx.r8.s64 = ctx.r10.s64 + 20992;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x830252d8
	if (cr6.eq) goto loc_830252D8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x830252D0;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_830252D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830252E4"))) PPC_WEAK_FUNC(sub_830252E4);
PPC_FUNC_IMPL(__imp__sub_830252E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830252E8"))) PPC_WEAK_FUNC(sub_830252E8);
PPC_FUNC_IMPL(__imp__sub_830252E8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,20992
	ctx.r9.s64 = ctx.r11.s64 + 20992;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025324
	if (cr6.eq) goto loc_83025324;
	// bl 0x82416268
	ctx.lr = 0x83025324;
	sub_82416268(ctx, base);
loc_83025324:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-19088
	ctx.r8.s64 = ctx.r10.s64 + -19088;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// bl 0x82f42278
	ctx.lr = 0x83025354;
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

__attribute__((alias("__imp__sub_83025368"))) PPC_WEAK_FUNC(sub_83025368);
PPC_FUNC_IMPL(__imp__sub_83025368) {
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
	// bl 0x830252e8
	ctx.lr = 0x83025388;
	sub_830252E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830253a0
	if (cr6.eq) goto loc_830253A0;
	// bl 0x82416268
	ctx.lr = 0x8302539C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830253A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830253B8"))) PPC_WEAK_FUNC(sub_830253B8);
PPC_FUNC_IMPL(__imp__sub_830253B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830253C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x830253CC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025430
	if (cr6.eq) goto loc_83025430;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830253DC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x830253E0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830253E4;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025430
	if (cr6.eq) goto loc_83025430;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830253F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83025400;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x83025404;
	sub_82D983F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025424
	if (cr6.eq) goto loc_83025424;
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83025424
	if (cr6.eq) goto loc_83025424;
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x82ab5f20
	ctx.lr = 0x83025424;
	sub_82AB5F20(ctx, base);
loc_83025424:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x830253f4
	if (cr6.lt) goto loc_830253F4;
loc_83025430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83025438"))) PPC_WEAK_FUNC(sub_83025438);
PPC_FUNC_IMPL(__imp__sub_83025438) {
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
	// blt cr6,0x8302545c
	if (cr6.lt) goto loc_8302545C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83025460
	goto loc_83025460;
loc_8302545C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83025460:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83025478;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025490
	if (cr6.eq) goto loc_83025490;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83025260
	ctx.lr = 0x83025488;
	sub_83025260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83025494
	if (!cr6.eq) goto loc_83025494;
loc_83025490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83025494:
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

__attribute__((alias("__imp__sub_830254A8"))) PPC_WEAK_FUNC(sub_830254A8);
PPC_FUNC_IMPL(__imp__sub_830254A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830254B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x830254C0;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025664
	if (cr6.eq) goto loc_83025664;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83025638
	if (cr6.gt) goto loc_83025638;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302555c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302555C;
	// bdzf 4*cr6+eq,0x830255d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830255D4;
	// bne cr6,0x83025610
	if (!cr6.eq) goto loc_83025610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830253b8
	ctx.lr = 0x830254F4;
	sub_830253B8(ctx, base);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x830254FC;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x83025504;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976a8
	ctx.lr = 0x83025510;
	sub_82D976A8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,20900
	ctx.r11.s64 = ctx.r11.s64 + 20900;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83025524;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83025530;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302553C;
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
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8302555C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83025564;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830255c8
	if (cr6.eq) goto loc_830255C8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025594
	if (cr6.eq) goto loc_83025594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302558C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83025594:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830255c0
	if (!cr6.eq) goto loc_830255C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83025170
	ctx.lr = 0x830255A4;
	sub_83025170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83025090
	ctx.lr = 0x830255AC;
	sub_83025090(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830255C0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830255C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830255D4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,20900
	ctx.r11.s64 = ctx.r11.s64 + 20900;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830255E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830255F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830255FC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83025610:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,20900
	ctx.r11.s64 = ctx.r11.s64 + 20900;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83025624;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025630;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x83025658
	goto loc_83025658;
loc_83025638:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,20900
	ctx.r4.s64 = ctx.r11.s64 + 20900;
	// bl 0x837b0c10
	ctx.lr = 0x83025648;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025654;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_83025658:
	// bl 0x8387e8e0
	ctx.lr = 0x8302565C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_83025664:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83025670"))) PPC_WEAK_FUNC(sub_83025670);
PPC_FUNC_IMPL(__imp__sub_83025670) {
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
	// bne cr6,0x8302568c
	if (!cr6.eq) goto loc_8302568C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8302568C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83025690"))) PPC_WEAK_FUNC(sub_83025690);
PPC_FUNC_IMPL(__imp__sub_83025690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83025698;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
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
	ctx.lr = 0x830256BC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025700
	if (cr6.eq) goto loc_83025700;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830256D0;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// addi r9,r11,21504
	ctx.r9.s64 = ctx.r11.s64 + 21504;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83025700:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302570C"))) PPC_WEAK_FUNC(sub_8302570C);
PPC_FUNC_IMPL(__imp__sub_8302570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83025710"))) PPC_WEAK_FUNC(sub_83025710);
PPC_FUNC_IMPL(__imp__sub_83025710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83025720
	if (cr6.lt) goto loc_83025720;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83025720:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83025690
	sub_83025690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83025728"))) PPC_WEAK_FUNC(sub_83025728);
PPC_FUNC_IMPL(__imp__sub_83025728) {
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
	ctx.lr = 0x83025748;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302579c
	if (!cr6.eq) goto loc_8302579C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,21412
	ctx.r11.s64 = ctx.r11.s64 + 21412;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83025764;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025770;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83025790
	if (cr6.lt) goto loc_83025790;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83025790;
	sub_825952B8(ctx, base);
loc_83025790:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x8302593c
	goto loc_8302593C;
loc_8302579C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83025910
	if (cr6.gt) goto loc_83025910;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830257ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830257EC;
	// bdzf 4*cr6+eq,0x83025838
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025838;
	// bdzf 4*cr6+eq,0x83025870
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025870;
	// bdzf 4*cr6+eq,0x830258b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830258B0;
	// bdzf 4*cr6+eq,0x830258b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830258B8;
	// bne cr6,0x830258e8
	if (!cr6.eq) goto loc_830258E8;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83025940
	goto loc_83025940;
loc_830257EC:
	// bl 0x825832d8
	ctx.lr = 0x830257F0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x830257F4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830257F8;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83025810
	if (!cr6.eq) goto loc_83025810;
loc_83025800:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83025940
	goto loc_83025940;
loc_83025810:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d98e10
	ctx.lr = 0x83025818;
	sub_82D98E10(ctx, base);
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
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83025940
	goto loc_83025940;
loc_83025838:
	// bl 0x825832d8
	ctx.lr = 0x8302583C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83025840;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83025844;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025800
	if (cr6.eq) goto loc_83025800;
	// bl 0x82d98d38
	ctx.lr = 0x83025850;
	sub_82D98D38(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
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
	// b 0x83025940
	goto loc_83025940;
loc_83025870:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,21412
	ctx.r11.s64 = ctx.r11.s64 + 21412;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302588C;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,227
	ctx.r4.u64 = ctx.r4.u64 | 227;
	// bl 0x82d2ada8
	ctx.lr = 0x8302589C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830258A8;
	sub_83103100(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_830258B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83025940
	goto loc_83025940;
loc_830258B8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,21412
	ctx.r11.s64 = ctx.r11.s64 + 21412;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830258CC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830258D8;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830258E0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83025938
	goto loc_83025938;
loc_830258E8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,21412
	ctx.r11.s64 = ctx.r11.s64 + 21412;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830258FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025908;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x83025930
	goto loc_83025930;
loc_83025910:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,21412
	ctx.r4.s64 = ctx.r11.s64 + 21412;
	// bl 0x837b0c10
	ctx.lr = 0x83025920;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302592C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_83025930:
	// bl 0x8387e8e0
	ctx.lr = 0x83025934;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_83025938:
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8302593C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83025940:
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

__attribute__((alias("__imp__sub_83025958"))) PPC_WEAK_FUNC(sub_83025958);
PPC_FUNC_IMPL(__imp__sub_83025958) {
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
	ctx.lr = 0x83025988;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830259cc
	if (cr6.eq) goto loc_830259CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302599C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,22040
	ctx.r8.s64 = ctx.r10.s64 + 22040;
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
	// b 0x830259d0
	goto loc_830259D0;
loc_830259CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830259D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830259E8"))) PPC_WEAK_FUNC(sub_830259E8);
PPC_FUNC_IMPL(__imp__sub_830259E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830259f8
	if (cr6.lt) goto loc_830259F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830259F8:
	// b 0x83025958
	sub_83025958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830259FC"))) PPC_WEAK_FUNC(sub_830259FC);
PPC_FUNC_IMPL(__imp__sub_830259FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83025A00"))) PPC_WEAK_FUNC(sub_83025A00);
PPC_FUNC_IMPL(__imp__sub_83025A00) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// bgt cr6,0x83025b04
	if (cr6.gt) goto loc_83025B04;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83025a54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025A54;
	// bdzf 4*cr6+eq,0x83025abc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025ABC;
	// bdzf 4*cr6+eq,0x83025b28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025B28;
	// bdzf 4*cr6+eq,0x83025b6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025B6C;
	// bdzf 4*cr6+eq,0x83025bb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025BB4;
	// bdzf 4*cr6+eq,0x83025bbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83025BBC;
	// bne cr6,0x83025bf4
	if (!cr6.eq) goto loc_83025BF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83025A54:
	// bl 0x82d86078
	ctx.lr = 0x83025A58;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025b20
	if (cr6.eq) goto loc_83025B20;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82d860f0
	ctx.lr = 0x83025A68;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da6520
	ctx.lr = 0x83025A74;
	sub_82DA6520(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,21948
	ctx.r11.s64 = ctx.r11.s64 + 21948;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x83025A88;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83025A94;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83025AA0;
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
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83025b04
	goto loc_83025B04;
loc_83025ABC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83025AC4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83025b04
	if (cr6.eq) goto loc_83025B04;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025af4
	if (cr6.eq) goto loc_83025AF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83025AEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83025AF4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83025b20
	if (!cr6.eq) goto loc_83025B20;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83025B00:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83025B04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83025B08:
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
loc_83025B20:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83025b00
	goto loc_83025B00;
loc_83025B28:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,21948
	ctx.r11.s64 = ctx.r11.s64 + 21948;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x83025B3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83025B48;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83025B54;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83025b04
	goto loc_83025B04;
loc_83025B6C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83025B74;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83025b04
	if (cr6.eq) goto loc_83025B04;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025ba4
	if (cr6.eq) goto loc_83025BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83025B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83025BA4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83025b20
	if (!cr6.eq) goto loc_83025B20;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83025b00
	goto loc_83025B00;
loc_83025BB4:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83025b00
	goto loc_83025B00;
loc_83025BBC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,21948
	ctx.r11.s64 = ctx.r11.s64 + 21948;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83025BD0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025BDC;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83025BE4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83025b08
	goto loc_83025B08;
loc_83025BF4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,21948
	ctx.r4.s64 = ctx.r11.s64 + 21948;
	// bl 0x837b0c10
	ctx.lr = 0x83025C04;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025C10;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83025C18;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83025b08
	goto loc_83025B08;
}

__attribute__((alias("__imp__sub_83025C28"))) PPC_WEAK_FUNC(sub_83025C28);
PPC_FUNC_IMPL(__imp__sub_83025C28) {
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
	// bne cr6,0x83025c84
	if (!cr6.eq) goto loc_83025C84;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83025c94
	if (!cr6.eq) goto loc_83025C94;
	// bl 0x82d17d90
	ctx.lr = 0x83025C68;
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
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83025c94
	goto loc_83025C94;
loc_83025C84:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83025c94
	if (!cr6.eq) goto loc_83025C94;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83025C94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83025CA0;
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

__attribute__((alias("__imp__sub_83025CB8"))) PPC_WEAK_FUNC(sub_83025CB8);
PPC_FUNC_IMPL(__imp__sub_83025CB8) {
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
	ctx.lr = 0x83025CE8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83025d28
	if (cr6.eq) goto loc_83025D28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83025CFC;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,22648
	ctx.r8.s64 = ctx.r10.s64 + 22648;
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
	// b 0x83025d2c
	goto loc_83025D2C;
loc_83025D28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83025D2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025D44"))) PPC_WEAK_FUNC(sub_83025D44);
PPC_FUNC_IMPL(__imp__sub_83025D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83025D48"))) PPC_WEAK_FUNC(sub_83025D48);
PPC_FUNC_IMPL(__imp__sub_83025D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83025d58
	if (cr6.lt) goto loc_83025D58;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83025D58:
	// b 0x83025cb8
	sub_83025CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83025D5C"))) PPC_WEAK_FUNC(sub_83025D5C);
PPC_FUNC_IMPL(__imp__sub_83025D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83025D60"))) PPC_WEAK_FUNC(sub_83025D60);
PPC_FUNC_IMPL(__imp__sub_83025D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83025D68;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83025D78;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83025dd0
	if (!cr6.eq) goto loc_83025DD0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x837b0c10
	ctx.lr = 0x83025D98;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025DA4;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83025dc4
	if (cr6.lt) goto loc_83025DC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83025DC4;
	sub_825952B8(ctx, base);
loc_83025DC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83025DD0:
	// bl 0x831156e8
	ctx.lr = 0x83025DD4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83025e10
	if (!cr6.eq) goto loc_83025E10;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// bl 0x837b0c10
	ctx.lr = 0x83025DF0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83025DFC;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83025E04;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83025E10:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r28,116(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x83025ec4
	if (cr6.gt) goto loc_83025EC4;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24120
	ctx.r12.s64 = ctx.r12.s64 + 24120;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83025E74;
	case 1:
		goto loc_83025E7C;
	case 2:
		goto loc_83025EC4;
	case 3:
		goto loc_83025F68;
	case 4:
		goto loc_83025FF0;
	case 5:
		goto loc_83026044;
	case 6:
		goto loc_83026158;
	case 7:
		goto loc_83025EC4;
	case 8:
		goto loc_830261A4;
	case 9:
		goto loc_83025EC4;
	case 10:
		goto loc_8302621C;
	case 11:
		goto loc_83026258;
	case 12:
		goto loc_8302626C;
	case 13:
		goto loc_830262A8;
	case 14:
		goto loc_830262E4;
	default:
		return;
	}
	// lwz r24,24180(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24180);
	// lwz r24,24188(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24188);
	// lwz r24,24260(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24260);
	// lwz r24,24424(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24424);
	// lwz r24,24560(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24560);
	// lwz r24,24644(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24644);
	// lwz r24,24920(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24920);
	// lwz r24,24260(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24260);
	// lwz r24,24996(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24996);
	// lwz r24,24260(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24260);
	// lwz r24,25116(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25116);
	// lwz r24,25176(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25176);
	// lwz r24,25196(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25196);
	// lwz r24,25256(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25256);
	// lwz r24,25316(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25316);
loc_83025E74:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83025E7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83025E84;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8332f198
	ctx.lr = 0x83025E90;
	sub_8332F198(ctx, base);
	// bl 0x82d9c120
	ctx.lr = 0x83025E94;
	sub_82D9C120(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x83025EA0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9c458
	ctx.lr = 0x83025EAC;
	sub_82D9C458(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83025ed0
	if (!cr6.eq) goto loc_83025ED0;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83025EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83025ED0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,22552
	ctx.r29.s64 = ctx.r11.s64 + 22552;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r29,-116
	ctx.r3.s64 = ctx.r29.s64 + -116;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83025EF0;
	sub_82D2F6D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-350
	ctx.r4.s64 = ctx.r29.s64 + -350;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83025F00;
	sub_837B0C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83025F08;
	sub_82D975E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83025f28
	if (cr6.eq) goto loc_83025F28;
	// lwz r5,148(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x83025f30
	goto loc_83025F30;
loc_83025F28:
	// lwz r5,144(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
loc_83025F30:
	// bl 0x82d042a8
	ctx.lr = 0x83025F34;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83025F40;
	sub_82D2AAB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83025F4C;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83025F5C;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83025F68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832d8
	ctx.lr = 0x83025F70;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83025F7C;
	sub_82DAB6D0(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83025F80;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x83025F8C;
	sub_83102DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9a8a8
	ctx.lr = 0x83025F94;
	sub_82D9A8A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83025fb4
	if (cr6.eq) goto loc_83025FB4;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83025FB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x83025FBC;
	sub_83102DB0(ctx, base);
	// bl 0x82d99fa0
	ctx.lr = 0x83025FC0;
	sub_82D99FA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x83025FCC;
	sub_83102DB0(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83025FD0;
	sub_825832F0(ctx, base);
	// subfc r11,r3,r29
	xer.ca = ctx.r29.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83025FF0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x837b0c10
	ctx.lr = 0x83026004;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83026010;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8302601C;
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
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83026044:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8302604C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83025ec4
	if (cr6.eq) goto loc_83025EC4;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83574b00
	ctx.lr = 0x83026060;
	sub_83574B00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83026074
	if (cr6.lt) goto loc_83026074;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83026078
	goto loc_83026078;
loc_83026074:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83026078:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824209f8
	ctx.lr = 0x83026080;
	sub_824209F8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830260a4
	if (cr6.eq) goto loc_830260A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302609C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830260A4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8302611c
	if (!cr6.eq) goto loc_8302611C;
	// li r3,263
	ctx.r3.s64 = 263;
	// bl 0x82d84728
	ctx.lr = 0x830260B4;
	sub_82D84728(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830260BC;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x830260C0;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830260f4
	if (cr6.eq) goto loc_830260F4;
	// bl 0x82d26ed8
	ctx.lr = 0x830260D0;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x830260D8;
	sub_82D26B18(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8241fe60
	ctx.lr = 0x830260E8;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830260F4:
	// bl 0x82d26ed8
	ctx.lr = 0x830260F8;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82d26b18
	ctx.lr = 0x83026100;
	sub_82D26B18(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8241fe60
	ctx.lr = 0x83026110;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302611C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x82450880
	ctx.lr = 0x83026130;
	sub_82450880(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bl 0x8241fe60
	ctx.lr = 0x8302614C;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83026158:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83026174;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,242
	ctx.r4.u64 = ctx.r4.u64 | 242;
	// bl 0x82d2ada8
	ctx.lr = 0x83026184;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83026190;
	sub_83103100(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830261A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832d8
	ctx.lr = 0x830261AC;
	sub_825832D8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x830261CC;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x830261D8;
	sub_83102DB0(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830261DC;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x830261f4
	if (cr6.lt) goto loc_830261F4;
	// ori r4,r4,149
	ctx.r4.u64 = ctx.r4.u64 | 149;
	// b 0x830261f8
	goto loc_830261F8;
loc_830261F4:
	// ori r4,r4,150
	ctx.r4.u64 = ctx.r4.u64 | 150;
loc_830261F8:
	// bl 0x82d2ada8
	ctx.lr = 0x830261FC;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83026208;
	sub_83103100(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302621C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83026230;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302623C;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83026244;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83026258:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302626C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83026280;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302628C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83026294;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830262A8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830262BC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830262C8;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x830262D0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830262E4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,22552
	ctx.r4.s64 = ctx.r11.s64 + 22552;
	// bl 0x837b0c10
	ctx.lr = 0x830262F4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83026300;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83026308;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302631C"))) PPC_WEAK_FUNC(sub_8302631C);
PPC_FUNC_IMPL(__imp__sub_8302631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83026320"))) PPC_WEAK_FUNC(sub_83026320);
PPC_FUNC_IMPL(__imp__sub_83026320) {
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
	ctx.lr = 0x83026350;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026390
	if (cr6.eq) goto loc_83026390;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83026364;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,23168
	ctx.r8.s64 = ctx.r10.s64 + 23168;
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
	// b 0x83026394
	goto loc_83026394;
loc_83026390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83026394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830263AC"))) PPC_WEAK_FUNC(sub_830263AC);
PPC_FUNC_IMPL(__imp__sub_830263AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830263B0"))) PPC_WEAK_FUNC(sub_830263B0);
PPC_FUNC_IMPL(__imp__sub_830263B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830263c0
	if (cr6.lt) goto loc_830263C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830263C0:
	// b 0x83026320
	sub_83026320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830263C4"))) PPC_WEAK_FUNC(sub_830263C4);
PPC_FUNC_IMPL(__imp__sub_830263C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830263C8"))) PPC_WEAK_FUNC(sub_830263C8);
PPC_FUNC_IMPL(__imp__sub_830263C8) {
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
	// bgt cr6,0x830264a0
	if (cr6.gt) goto loc_830264A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83026414
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83026414;
	// bdzf 4*cr6+eq,0x83026458
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83026458;
	// bdzf 4*cr6+eq,0x830264c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830264C4;
	// bdzf 4*cr6+eq,0x830264cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830264CC;
	// bne cr6,0x83026504
	if (!cr6.eq) goto loc_83026504;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83026414:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,23072
	ctx.r11.s64 = ctx.r11.s64 + 23072;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83026428;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83026434;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83026440;
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
	// b 0x830264a0
	goto loc_830264A0;
loc_83026458:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83026460;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830264a0
	if (cr6.eq) goto loc_830264A0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026490
	if (cr6.eq) goto loc_83026490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83026488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83026490:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830264bc
	if (!cr6.eq) goto loc_830264BC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8302649C:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830264A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830264A4:
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
loc_830264BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8302649c
	goto loc_8302649C;
loc_830264C4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8302649c
	goto loc_8302649C;
loc_830264CC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,23072
	ctx.r11.s64 = ctx.r11.s64 + 23072;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830264E0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830264EC;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830264F4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830264a4
	goto loc_830264A4;
loc_83026504:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,23072
	ctx.r4.s64 = ctx.r11.s64 + 23072;
	// bl 0x837b0c10
	ctx.lr = 0x83026514;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83026520;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83026528;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830264a4
	goto loc_830264A4;
}

__attribute__((alias("__imp__sub_83026538"))) PPC_WEAK_FUNC(sub_83026538);
PPC_FUNC_IMPL(__imp__sub_83026538) {
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
	ctx.lr = 0x83026550;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,23840
	ctx.r8.s64 = ctx.r10.s64 + 23840;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
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
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// stb r11,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r11.u8);
	// stb r11,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r11.u8);
	// stb r11,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r11.u8);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830265B8"))) PPC_WEAK_FUNC(sub_830265B8);
PPC_FUNC_IMPL(__imp__sub_830265B8) {
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
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// bne cr6,0x83026614
	if (!cr6.eq) goto loc_83026614;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83026624
	if (!cr6.eq) goto loc_83026624;
	// bl 0x82d17d90
	ctx.lr = 0x830265F8;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r11,r11,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83026624
	goto loc_83026624;
loc_83026614:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83026624
	if (!cr6.eq) goto loc_83026624;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83026624:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83026630;
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

__attribute__((alias("__imp__sub_83026648"))) PPC_WEAK_FUNC(sub_83026648);
PPC_FUNC_IMPL(__imp__sub_83026648) {
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
	// bl 0x82d86078
	ctx.lr = 0x83026660;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026688
	if (cr6.eq) goto loc_83026688;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83026674;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307e040
	ctx.lr = 0x83026680;
	sub_8307E040(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83026684;
	sub_825832E0(ctx, base);
	// stw r3,3484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3484, ctx.r3.u32);
loc_83026688:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830266A0"))) PPC_WEAK_FUNC(sub_830266A0);
PPC_FUNC_IMPL(__imp__sub_830266A0) {
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
	// blt cr6,0x830266c4
	if (cr6.lt) goto loc_830266C4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830266c8
	goto loc_830266C8;
loc_830266C4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830266C8:
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
	ctx.lr = 0x830266E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830266f8
	if (cr6.eq) goto loc_830266F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83026538
	ctx.lr = 0x830266F0;
	sub_83026538(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830266fc
	if (!cr6.eq) goto loc_830266FC;
loc_830266F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830266FC:
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

__attribute__((alias("__imp__sub_83026710"))) PPC_WEAK_FUNC(sub_83026710);
PPC_FUNC_IMPL(__imp__sub_83026710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83026718;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83026724;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026938
	if (cr6.eq) goto loc_83026938;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83026738;
	sub_82DAB6D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r11,23700
	ctx.r26.s64 = ctx.r11.s64 + 23700;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r26,-369
	ctx.r4.s64 = ctx.r26.s64 + -369;
	// bl 0x837b0c10
	ctx.lr = 0x83026750;
	sub_837B0C10(ctx, base);
	// lbz r11,125(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 125);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83026850
	if (cr6.eq) goto loc_83026850;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332f198
	ctx.lr = 0x83026764;
	sub_8332F198(ctx, base);
	// bl 0x82d9c118
	ctx.lr = 0x83026768;
	sub_82D9C118(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x83026774;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,28
	ctx.r31.s64 = 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83026798
	if (!cr0.eq) goto loc_83026798;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83026798;
	sub_831CC188(ctx, base);
loc_83026798:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d97688
	ctx.lr = 0x830267A4;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x830267c4
	if (!cr0.eq) goto loc_830267C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830267C4;
	sub_831CC188(ctx, base);
loc_830267C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d97688
	ctx.lr = 0x830267D0;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x830267f0
	if (!cr0.eq) goto loc_830267F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830267F0;
	sub_831CC188(ctx, base);
loc_830267F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9c3b8
	ctx.lr = 0x83026804;
	sub_82D9C3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83026930
	if (cr6.eq) goto loc_83026930;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d975e8
	ctx.lr = 0x8302681C;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x83026840
	if (cr6.eq) goto loc_83026840;
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82d042a8
	ctx.lr = 0x8302683C;
	sub_82D042A8(ctx, base);
	// b 0x83026860
	goto loc_83026860;
loc_83026840:
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82d042a8
	ctx.lr = 0x8302684C;
	sub_82D042A8(ctx, base);
	// b 0x83026860
	goto loc_83026860;
loc_83026850:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,155
	ctx.r4.u64 = ctx.r4.u64 | 155;
	// bl 0x82d042a8
	ctx.lr = 0x83026860;
	sub_82D042A8(ctx, base);
loc_83026860:
	// addi r4,r26,-338
	ctx.r4.s64 = ctx.r26.s64 + -338;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x8302686C;
	sub_837B0C10(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83026880
	if (!cr6.lt) goto loc_83026880;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_83026880:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// addi r6,r26,-337
	ctx.r6.s64 = ctx.r26.s64 + -337;
	// ori r4,r4,722
	ctx.r4.u64 = ctx.r4.u64 | 722;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x83026894;
	sub_82D042A8(ctx, base);
	// addi r4,r26,-307
	ctx.r4.s64 = ctx.r26.s64 + -307;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x830268A0;
	sub_837B0C10(ctx, base);
	// addi r4,r26,-306
	ctx.r4.s64 = ctx.r26.s64 + -306;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x830268AC;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,286
	ctx.r4.u64 = ctx.r4.u64 | 286;
	// bl 0x82d042a8
	ctx.lr = 0x830268BC;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830268d0
	if (!cr6.lt) goto loc_830268D0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_830268D0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830268e4
	if (!cr6.lt) goto loc_830268E4;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_830268E4:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,722
	ctx.r4.u64 = ctx.r4.u64 | 722;
	// bl 0x82d042a8
	ctx.lr = 0x830268F4;
	sub_82D042A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8302690C;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83026944
	if (!cr6.eq) goto loc_83026944;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83026920;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83026928;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83026930;
	sub_8387E8E0(ctx, base);
loc_83026930:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83026938;
	sub_8387E8E0(ctx, base);
loc_83026938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83026944:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83026950;
	sub_82D2AAB0(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2a258
	ctx.lr = 0x83026964;
	sub_82D2A258(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83103100
	ctx.lr = 0x83026970;
	sub_83103100(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83026978;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83026980;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83026988;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83026990;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302699C"))) PPC_WEAK_FUNC(sub_8302699C);
PPC_FUNC_IMPL(__imp__sub_8302699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830269A0"))) PPC_WEAK_FUNC(sub_830269A0);
PPC_FUNC_IMPL(__imp__sub_830269A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830269A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x830269B4;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026b58
	if (cr6.eq) goto loc_83026B58;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830269CC;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x830269D4;
	sub_82D97688(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r26,r11,23716
	ctx.r26.s64 = ctx.r11.s64 + 23716;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r26,-321
	ctx.r4.s64 = ctx.r26.s64 + -321;
	// bl 0x837b0c10
	ctx.lr = 0x830269EC;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97688
	ctx.lr = 0x830269F4;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r24,28
	ctx.r24.s64 = 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83026a18
	if (!cr0.eq) goto loc_83026A18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83026A18;
	sub_831CC188(ctx, base);
loc_83026A18:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83026b04
	if (!cr6.eq) goto loc_83026B04;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x83026A2C;
	sub_8332F198(ctx, base);
	// bl 0x82d9c128
	ctx.lr = 0x83026A30;
	sub_82D9C128(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83026A34;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83026a5c
	if (!cr6.eq) goto loc_83026A5C;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,509
	ctx.r4.u64 = ctx.r4.u64 | 509;
	// b 0x83026b0c
	goto loc_83026B0C;
loc_83026A5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x825832d8
	ctx.lr = 0x83026A68;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83026A6C;
	sub_83102DB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83026ae0
	if (cr0.eq) goto loc_83026AE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x83026ad0
	if (!cr6.gt) goto loc_83026AD0;
loc_83026A94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x82d9a8a8
	ctx.lr = 0x83026AA0;
	sub_82D9A8A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83026adc
	if (cr6.eq) goto loc_83026ADC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x83026a94
	if (cr6.gt) goto loc_83026A94;
	// b 0x83026ae0
	goto loc_83026AE0;
loc_83026AD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83026ADC;
	sub_831CC188(ctx, base);
loc_83026ADC:
	// li r27,1
	ctx.r27.s64 = 1;
loc_83026AE0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83026afc
	if (cr6.eq) goto loc_83026AFC;
	// ori r4,r4,155
	ctx.r4.u64 = ctx.r4.u64 | 155;
	// b 0x83026b10
	goto loc_83026B10;
loc_83026AFC:
	// ori r4,r4,510
	ctx.r4.u64 = ctx.r4.u64 | 510;
	// b 0x83026b10
	goto loc_83026B10;
loc_83026B04:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,155
	ctx.r4.u64 = ctx.r4.u64 | 155;
loc_83026B0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83026B10:
	// bl 0x82d042a8
	ctx.lr = 0x83026B14;
	sub_82D042A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83026B2C;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83026b64
	if (!cr6.eq) goto loc_83026B64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83026b58
	if (cr6.lt) goto loc_83026B58;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83026B58;
	sub_825952B8(ctx, base);
loc_83026B58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83026B64:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83026B70;
	sub_82D2AAB0(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x83026b9c
	if (cr6.lt) goto loc_83026B9C;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,543
	ctx.r5.u64 = ctx.r5.u64 | 543;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2a258
	ctx.lr = 0x83026B9C;
	sub_82D2A258(ctx, base);
loc_83026B9C:
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2a258
	ctx.lr = 0x83026BB0;
	sub_82D2A258(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103100
	ctx.lr = 0x83026BBC;
	sub_83103100(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83026bdc
	if (cr6.lt) goto loc_83026BDC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83026BDC;
	sub_825952B8(ctx, base);
loc_83026BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83026BE8"))) PPC_WEAK_FUNC(sub_83026BE8);
PPC_FUNC_IMPL(__imp__sub_83026BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83026BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83026BFC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026d14
	if (cr6.eq) goto loc_83026D14;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83026d14
	if (cr6.eq) goto loc_83026D14;
	// lbz r11,126(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 126);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83026c40
	if (cr6.eq) goto loc_83026C40;
	// lbz r11,127(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 127);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83026c38
	if (cr6.eq) goto loc_83026C38;
	// li r3,267
	ctx.r3.s64 = 267;
	// b 0x83026c44
	goto loc_83026C44;
loc_83026C38:
	// li r3,253
	ctx.r3.s64 = 253;
	// b 0x83026c44
	goto loc_83026C44;
loc_83026C40:
	// li r3,251
	ctx.r3.s64 = 251;
loc_83026C44:
	// bl 0x82d84728
	ctx.lr = 0x83026C48;
	sub_82D84728(ctx, base);
	// lbz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83026c5c
	if (cr6.eq) goto loc_83026C5C;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x82d84728
	ctx.lr = 0x83026C5C;
	sub_82D84728(ctx, base);
loc_83026C5C:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83026C64;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x83026C6C;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83026c90
	if (!cr0.eq) goto loc_83026C90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83026C90;
	sub_831CC188(ctx, base);
loc_83026C90:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83026d14
	if (!cr6.eq) goto loc_83026D14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97688
	ctx.lr = 0x83026CA4;
	sub_82D97688(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x83026CAC;
	sub_8332F198(ctx, base);
	// bl 0x82d9c128
	ctx.lr = 0x83026CB0;
	sub_82D9C128(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83026CB4;
	sub_83102DB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bne cr6,0x83026d14
	if (!cr6.eq) goto loc_83026D14;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83026d0c
	if (!cr6.eq) goto loc_83026D0C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23732
	ctx.r4.s64 = ctx.r11.s64 + 23732;
	// bl 0x837b0c10
	ctx.lr = 0x83026CE8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83026CF4;
	sub_82D894E0(ctx, base);
	// stw r3,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83026D00;
	sub_8387E8E0(ctx, base);
	// lwz r9,116(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r10,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r10.u32);
loc_83026D0C:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82d84728
	ctx.lr = 0x83026D14;
	sub_82D84728(ctx, base);
loc_83026D14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83026D1C"))) PPC_WEAK_FUNC(sub_83026D1C);
PPC_FUNC_IMPL(__imp__sub_83026D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83026D20"))) PPC_WEAK_FUNC(sub_83026D20);
PPC_FUNC_IMPL(__imp__sub_83026D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83026D28;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,630
	ctx.r11.s64 = 41287680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,10082
	ctx.r10.u64 = ctx.r11.u64 | 10082;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83026d4c
	if (!cr6.gt) goto loc_83026D4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x83026D4C;
	sub_831CC150(ctx, base);
loc_83026D4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,104
	ctx.r24.s64 = 104;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x83026e0c
	if (!cr6.lt) goto loc_83026E0C;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,104
	ctx.r26.s64 = ctx.r4.s64 * 104;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83026D84;
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
	// beq cr6,0x83026dc0
	if (cr6.eq) goto loc_83026DC0;
loc_83026D9C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83026db0
	if (cr6.eq) goto loc_83026DB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b56298
	ctx.lr = 0x83026DB0;
	sub_82B56298(ctx, base);
loc_83026DB0:
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x83026d9c
	if (!cr6.eq) goto loc_83026D9C;
loc_83026DC0:
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
	// beq cr6,0x83026df4
	if (cr6.eq) goto loc_83026DF4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82d9cc20
	ctx.lr = 0x83026DE4;
	sub_82D9CC20(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83026DF4;
	sub_825952B8(ctx, base);
loc_83026DF4:
	// mulli r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 * 104;
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
loc_83026E0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83026E14"))) PPC_WEAK_FUNC(sub_83026E14);
PPC_FUNC_IMPL(__imp__sub_83026E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83026E18"))) PPC_WEAK_FUNC(sub_83026E18);
PPC_FUNC_IMPL(__imp__sub_83026E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,630
	ctx.r10.s64 = 41287680;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,104
	ctx.r9.s64 = 104;
	// ori r8,r10,10082
	ctx.r8.u64 = ctx.r10.u64 | 10082;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x83026e4c
	if (!cr6.lt) goto loc_83026E4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_83026E4C:
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
	// blt cr6,0x83026e7c
	if (cr6.lt) goto loc_83026E7C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_83026E7C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83026e88
	if (!cr6.lt) goto loc_83026E88;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_83026E88:
	// b 0x83026d20
	sub_83026D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83026E8C"))) PPC_WEAK_FUNC(sub_83026E8C);
PPC_FUNC_IMPL(__imp__sub_83026E8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026E90"))) PPC_WEAK_FUNC(sub_83026E90);
PPC_FUNC_IMPL(__imp__sub_83026E90) {
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
	// bge cr6,0x83026ec8
	if (!cr6.lt) goto loc_83026EC8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83026ecc
	if (!cr6.gt) goto loc_83026ECC;
loc_83026EC8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83026ECC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83026f1c
	if (cr6.eq) goto loc_83026F1C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,104
	ctx.r9.s64 = 104;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x83026f00
	if (!cr6.eq) goto loc_83026F00;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83026e18
	ctx.lr = 0x83026F00;
	sub_83026E18(ctx, base);
loc_83026F00:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026f48
	if (cr6.eq) goto loc_83026F48;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 * 104;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83026f44
	goto loc_83026F44;
loc_83026F1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83026f34
	if (!cr6.eq) goto loc_83026F34;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83026e18
	ctx.lr = 0x83026F34;
	sub_83026E18(ctx, base);
loc_83026F34:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83026f48
	if (cr6.eq) goto loc_83026F48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83026F44:
	// bl 0x82b56298
	ctx.lr = 0x83026F48;
	sub_82B56298(ctx, base);
loc_83026F48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
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

__attribute__((alias("__imp__sub_83026F6C"))) PPC_WEAK_FUNC(sub_83026F6C);
PPC_FUNC_IMPL(__imp__sub_83026F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83026F70"))) PPC_WEAK_FUNC(sub_83026F70);
PPC_FUNC_IMPL(__imp__sub_83026F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83026F78;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83026F84;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027258
	if (cr6.eq) goto loc_83027258;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83026F98;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x83026F9C;
	sub_82DA4368(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83026FA8;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x83026FB0;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,28
	ctx.r28.s64 = 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83027258
	if (cr0.eq) goto loc_83027258;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97688
	ctx.lr = 0x83026FD0;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83026ff0
	if (!cr0.eq) goto loc_83026FF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83026FF0;
	sub_831CC188(ctx, base);
loc_83026FF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d97688
	ctx.lr = 0x83026FFC;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8302701c
	if (!cr0.eq) goto loc_8302701C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8302701C;
	sub_831CC188(ctx, base);
loc_8302701C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d97688
	ctx.lr = 0x83027028;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027048
	if (!cr0.eq) goto loc_83027048;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027048;
	sub_831CC188(ctx, base);
loc_83027048:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d97688
	ctx.lr = 0x83027054;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027074
	if (!cr0.eq) goto loc_83027074;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027074;
	sub_831CC188(ctx, base);
loc_83027074:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d97688
	ctx.lr = 0x83027080;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x830270a0
	if (!cr0.eq) goto loc_830270A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830270A0;
	sub_831CC188(ctx, base);
loc_830270A0:
	// li r9,84
	ctx.r9.s64 = 84;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d9a9f0
	ctx.lr = 0x830270C0;
	sub_82D9A9F0(ctx, base);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830270dc
	if (!cr6.eq) goto loc_830270DC;
	// stb r31,126(r25)
	PPC_STORE_U8(ctx.r25.u32 + 126, ctx.r31.u8);
	// b 0x830270e0
	goto loc_830270E0;
loc_830270DC:
	// stb r27,126(r25)
	PPC_STORE_U8(ctx.r25.u32 + 126, ctx.r27.u8);
loc_830270E0:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830270f4
	if (!cr6.eq) goto loc_830270F4;
	// stb r27,127(r25)
	PPC_STORE_U8(ctx.r25.u32 + 127, ctx.r27.u8);
	// b 0x830270f8
	goto loc_830270F8;
loc_830270F4:
	// stb r31,127(r25)
	PPC_STORE_U8(ctx.r25.u32 + 127, ctx.r31.u8);
loc_830270F8:
	// stb r31,128(r25)
	PPC_STORE_U8(ctx.r25.u32 + 128, ctx.r31.u8);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8302712c
	if (!cr6.eq) goto loc_8302712C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97688
	ctx.lr = 0x83027110;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// blt cr6,0x8302712c
	if (cr6.lt) goto loc_8302712C;
	// stb r27,128(r25)
	PPC_STORE_U8(ctx.r25.u32 + 128, ctx.r27.u8);
loc_8302712C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97688
	ctx.lr = 0x83027134;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r22,r29,3468
	xer.ca = ctx.r29.u32 > 4294963827;
	ctx.r22.s64 = ctx.r29.s64 + 3468;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r23,r9,r28
	ctx.r23.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// beq 0x83027258
	if (cr0.eq) goto loc_83027258;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83027258
	if (cr6.eq) goto loc_83027258;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83027158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97688
	ctx.lr = 0x83027160;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x83027260
	if (!cr6.gt) goto loc_83027260;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d97688
	ctx.lr = 0x83027188;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x8302726c
	if (!cr6.gt) goto loc_8302726C;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d97688
	ctx.lr = 0x830271B0;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x83027278
	if (!cr6.gt) goto loc_83027278;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d97688
	ctx.lr = 0x830271D8;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x83027284
	if (!cr6.gt) goto loc_83027284;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d97688
	ctx.lr = 0x83027200;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x83027290
	if (!cr6.gt) goto loc_83027290;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r9,84
	ctx.r9.s64 = 84;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d9a9f0
	ctx.lr = 0x8302723C;
	sub_82D9A9F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83026e90
	ctx.lr = 0x83027248;
	sub_83026E90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// blt cr6,0x83027158
	if (cr6.lt) goto loc_83027158;
loc_83027258:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83027260:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8302726C;
	sub_831CC188(ctx, base);
loc_8302726C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027278;
	sub_831CC188(ctx, base);
loc_83027278:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027284;
	sub_831CC188(ctx, base);
loc_83027284:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027290;
	sub_831CC188(ctx, base);
loc_83027290:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8302729C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8302729C"))) PPC_WEAK_FUNC(sub_8302729C);
PPC_FUNC_IMPL(__imp__sub_8302729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830272A0"))) PPC_WEAK_FUNC(sub_830272A0);
PPC_FUNC_IMPL(__imp__sub_830272A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830272A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x830272B8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83027314
	if (!cr6.eq) goto loc_83027314;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,23692
	ctx.r11.s64 = ctx.r11.s64 + 23692;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x837b0c10
	ctx.lr = 0x830272D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x830272E0;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83027300
	if (cr6.lt) goto loc_83027300;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83027300;
	sub_825952B8(ctx, base);
loc_83027300:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027314:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83027320;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302732C;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x83027330;
	sub_82DA4368(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307e040
	ctx.lr = 0x8302733C;
	sub_8307E040(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x83027c40
	if (cr6.gt) goto loc_83027C40;
	// lis r12,-31998
	ctx.r12.s64 = -2097020928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29540
	ctx.r12.s64 = ctx.r12.s64 + 29540;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830273A8;
	case 1:
		goto loc_83027C40;
	case 2:
		goto loc_83027C40;
	case 3:
		goto loc_83027448;
	case 4:
		goto loc_830275CC;
	case 5:
		goto loc_83027BA4;
	case 6:
		goto loc_83027654;
	case 7:
		goto loc_83027678;
	case 8:
		goto loc_830276CC;
	case 9:
		goto loc_83027720;
	case 10:
		goto loc_83027778;
	case 11:
		goto loc_8302786C;
	case 12:
		goto loc_830278D8;
	case 13:
		goto loc_83027BA4;
	case 14:
		goto loc_83027950;
	case 15:
		goto loc_83027A14;
	case 16:
		goto loc_83027A90;
	default:
		return;
	}
	// lwz r24,29608(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 29608);
	// lwz r24,31808(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31808);
	// lwz r24,31808(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31808);
	// lwz r24,29768(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 29768);
	// lwz r24,30156(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30156);
	// lwz r24,31652(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31652);
	// lwz r24,30292(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30292);
	// lwz r24,30328(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30328);
	// lwz r24,30412(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30412);
	// lwz r24,30496(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30496);
	// lwz r24,30584(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30584);
	// lwz r24,30828(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30828);
	// lwz r24,30936(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30936);
	// lwz r24,31652(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31652);
	// lwz r24,31056(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31056);
	// lwz r24,31252(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31252);
	// lwz r24,31376(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + 31376);
loc_830273A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x830273B0;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,28
	ctx.r31.s64 = 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x830273dc
	if (!cr0.eq) goto loc_830273DC;
loc_830273C8:
	// li r11,14
	ctx.r11.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830273DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831238a8
	ctx.lr = 0x830273E8;
	sub_831238A8(ctx, base);
	// addi r3,r30,3468
	ctx.r3.s64 = ctx.r30.s64 + 3468;
	// bl 0x82d97dd0
	ctx.lr = 0x830273F0;
	sub_82D97DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x830273F8;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830273c8
	if (cr0.eq) goto loc_830273C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x83027414;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027434
	if (!cr0.eq) goto loc_83027434;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027434;
	sub_831CC188(ctx, base);
loc_83027434:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x83027450;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,28
	ctx.r31.s64 = 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830273c8
	if (cr0.eq) goto loc_830273C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x83027470;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027490
	if (!cr0.eq) goto loc_83027490;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027490;
	sub_831CC188(ctx, base);
loc_83027490:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d97688
	ctx.lr = 0x8302749C;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x830274bc
	if (!cr0.eq) goto loc_830274BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830274BC;
	sub_831CC188(ctx, base);
loc_830274BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d97688
	ctx.lr = 0x830274C8;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x830274e8
	if (!cr0.eq) goto loc_830274E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830274E8;
	sub_831CC188(ctx, base);
loc_830274E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d97688
	ctx.lr = 0x830274F4;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027514
	if (!cr0.eq) goto loc_83027514;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027514;
	sub_831CC188(ctx, base);
loc_83027514:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82d97688
	ctx.lr = 0x83027520;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027540
	if (!cr0.eq) goto loc_83027540;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027540;
	sub_831CC188(ctx, base);
loc_83027540:
	// li r9,84
	ctx.r9.s64 = 84;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d9a9f0
	ctx.lr = 0x83027560;
	sub_82D9A9F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83027578
	if (cr6.eq) goto loc_83027578;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83027580
	if (cr6.gt) goto loc_83027580;
loc_83027578:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,125(r29)
	PPC_STORE_U8(ctx.r29.u32 + 125, ctx.r11.u8);
loc_83027580:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d8bb28
	ctx.lr = 0x83027590;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830275b8
	if (cr6.eq) goto loc_830275B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// stw r11,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830275B8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830275CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x830275D4;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,28
	ctx.r31.s64 = 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830273c8
	if (cr0.eq) goto loc_830273C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x830275F4;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027614
	if (!cr0.eq) goto loc_83027614;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027614;
	sub_831CC188(ctx, base);
loc_83027614:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8302762c
	if (!cr6.eq) goto loc_8302762C;
	// bl 0x830269a0
	ctx.lr = 0x83027628;
	sub_830269A0(ctx, base);
	// b 0x83027630
	goto loc_83027630;
loc_8302762C:
	// bl 0x83026710
	ctx.lr = 0x83027630;
	sub_83026710(ctx, base);
loc_83027630:
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
	// rlwinm r11,r9,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// stw r8,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r8.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027654:
	// lbz r11,125(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 125);
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
	// addi r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 9;
	// stw r8,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r8.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027678:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,23692
	ctx.r11.s64 = ctx.r11.s64 + 23692;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// bl 0x837b0c10
	ctx.lr = 0x8302768C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83027698;
	sub_82D894E0(ctx, base);
	// stw r3,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x830276A4;
	sub_8387E8E0(ctx, base);
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
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
	// stw r7,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r7.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830276CC:
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// bl 0x82ddcec8
	ctx.lr = 0x830276D4;
	sub_82DDCEC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83027ba4
	if (cr6.eq) goto loc_83027BA4;
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027704
	if (cr6.eq) goto loc_83027704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830276FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r9.u32);
loc_83027704:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x830273c8
	if (!cr6.eq) goto loc_830273C8;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027720:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83026f70
	ctx.lr = 0x83027728;
	sub_83026F70(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,23692
	ctx.r11.s64 = ctx.r11.s64 + 23692;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x837b0c10
	ctx.lr = 0x8302773C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83027748;
	sub_82D894E0(ctx, base);
	// stw r3,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x83027754;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
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
	// addi r7,r11,14
	ctx.r7.s64 = ctx.r11.s64 + 14;
	// stw r7,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r7.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027778:
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83027780;
	sub_82DDCEC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83027ba4
	if (cr6.eq) goto loc_83027BA4;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x83574b00
	ctx.lr = 0x83027794;
	sub_83574B00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830277a8
	if (cr6.lt) goto loc_830277A8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830277ac
	goto loc_830277AC;
loc_830277A8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_830277AC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830277B4;
	sub_837B0C10(ctx, base);
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830277d8
	if (cr6.eq) goto loc_830277D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830277D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r9.u32);
loc_830277D8:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83027824
	if (!cr6.eq) goto loc_83027824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83026be8
	ctx.lr = 0x830277E8;
	sub_83026BE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83026648
	ctx.lr = 0x830277F0;
	sub_83026648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x830277F8;
	sub_82D8BB28(ctx, base);
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
	// rlwinm r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r8,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83027818;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027824:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stb r11,124(r29)
	PPC_STORE_U8(ctx.r29.u32 + 124, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r10,23692
	ctx.r11.s64 = ctx.r10.s64 + 23692;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x82450880
	ctx.lr = 0x83027840;
	sub_82450880(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r11,14
	ctx.r6.s64 = ctx.r11.s64 + 14;
	// stw r6,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r6.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83027860;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8302786C:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x830278a4
	if (!cr6.eq) goto loc_830278A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x831f8200
	ctx.lr = 0x83027888;
	sub_831F8200(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8312dcc0
	ctx.lr = 0x83027890;
	sub_8312DCC0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830278A4:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830278c4
	if (!cr6.eq) goto loc_830278C4;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x831f8200
	ctx.lr = 0x830278BC;
	sub_831F8200(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8312dcc0
	ctx.lr = 0x830278C4;
	sub_8312DCC0(ctx, base);
loc_830278C4:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830278D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x830278E0;
	sub_825832D8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,23692
	ctx.r11.s64 = ctx.r11.s64 + 23692;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83027900;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x8302790C;
	sub_83102DB0(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83027910;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x83027928
	if (cr6.lt) goto loc_83027928;
	// ori r4,r4,149
	ctx.r4.u64 = ctx.r4.u64 | 149;
	// b 0x8302792c
	goto loc_8302792C;
loc_83027928:
	// ori r4,r4,150
	ctx.r4.u64 = ctx.r4.u64 | 150;
loc_8302792C:
	// bl 0x82d2ada8
	ctx.lr = 0x83027930;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x8302793C;
	sub_83103100(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027950:
	// lbz r11,125(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 125);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830279d8
	if (cr6.eq) goto loc_830279D8;
	// lbz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,23692
	ctx.r11.s64 = ctx.r11.s64 + 23692;
	// beq cr6,0x830279a4
	if (cr6.eq) goto loc_830279A4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x8302797C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83027988;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83027990;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830279A4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x830279B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x830279BC;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830279C4;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830279D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,23692
	ctx.r11.s64 = ctx.r11.s64 + 23692;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x830279EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x830279F8;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83027A00;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027A14:
	// lbz r11,125(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 125);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,23692
	ctx.r11.s64 = ctx.r11.s64 + 23692;
	// beq cr6,0x83027a5c
	if (cr6.eq) goto loc_83027A5C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x83027A34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83027A40;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83027A48;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027A5C:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83027A68;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83027A74;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83027A7C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027A90:
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027ab8
	if (cr6.eq) goto loc_83027AB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83027AAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83027ba4
	if (cr6.eq) goto loc_83027BA4;
loc_83027AB8:
	// lbz r10,126(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 126);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r25,r11,23692
	ctx.r25.s64 = ctx.r11.s64 + 23692;
	// beq cr6,0x83027c00
	if (cr6.eq) goto loc_83027C00;
	// addi r4,r25,-362
	ctx.r4.s64 = ctx.r25.s64 + -362;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83027AD8;
	sub_837B0C10(ctx, base);
	// lbz r11,125(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 125);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83027bf4
	if (cr6.eq) goto loc_83027BF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332f198
	ctx.lr = 0x83027AEC;
	sub_8332F198(ctx, base);
	// bl 0x82d9c118
	ctx.lr = 0x83027AF0;
	sub_82D9C118(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x83027AFC;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,28
	ctx.r31.s64 = 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027b20
	if (!cr0.eq) goto loc_83027B20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027B20;
	sub_831CC188(ctx, base);
loc_83027B20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d97688
	ctx.lr = 0x83027B2C;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027b4c
	if (!cr0.eq) goto loc_83027B4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027B4C;
	sub_831CC188(ctx, base);
loc_83027B4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d97688
	ctx.lr = 0x83027B58;
	sub_82D97688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83027b78
	if (!cr0.eq) goto loc_83027B78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83027B78;
	sub_831CC188(ctx, base);
loc_83027B78:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9c3b8
	ctx.lr = 0x83027B8C;
	sub_82D9C3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83027bb0
	if (!cr6.eq) goto loc_83027BB0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83027BA4;
	sub_8387E8E0(ctx, base);
loc_83027BA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027BB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83027BB8;
	sub_82D975E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83027be8
	if (cr6.eq) goto loc_83027BE8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,10000
	cr6.compare<uint32_t>(ctx.r11.u32, 10000, xer);
	// bge cr6,0x83027be8
	if (!cr6.lt) goto loc_83027BE8;
	// bl 0x82d26ed8
	ctx.lr = 0x83027BD4;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x83027BDC;
	sub_82D26B18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83027BE4;
	sub_8387E8E0(ctx, base);
	// b 0x83027c0c
	goto loc_83027C0C;
loc_83027BE8:
	// bl 0x82d26ed8
	ctx.lr = 0x83027BEC;
	sub_82D26ED8(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x82d26b18
	ctx.lr = 0x83027BF4;
	sub_82D26B18(ctx, base);
loc_83027BF4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83027BFC;
	sub_8387E8E0(ctx, base);
	// b 0x83027c0c
	goto loc_83027C0C;
loc_83027C00:
	// bl 0x82d26ed8
	ctx.lr = 0x83027C04;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82d26b18
	ctx.lr = 0x83027C0C;
	sub_82D26B18(ctx, base);
loc_83027C0C:
	// addi r4,r25,-8
	ctx.r4.s64 = ctx.r25.s64 + -8;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x83027C18;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83027C24;
	sub_82E88020(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x83027C2C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83027C40:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,23692
	ctx.r4.s64 = ctx.r11.s64 + 23692;
	// bl 0x837b0c10
	ctx.lr = 0x83027C50;
	sub_837B0C10(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83027C5C;
	sub_82E88020(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x83027C64;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r10.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83027C78"))) PPC_WEAK_FUNC(sub_83027C78);
PPC_FUNC_IMPL(__imp__sub_83027C78) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027d14
	if (cr6.eq) goto loc_83027D14;
	// bl 0x82e7f658
	ctx.lr = 0x83027CA0;
	sub_82E7F658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83027cbc
	if (!cr6.eq) goto loc_83027CBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x83027CB4;
	sub_82D17AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83027d18
	goto loc_83027D18;
loc_83027CBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x83027CC4;
	sub_82D17AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82e80188
	ctx.lr = 0x83027CD0;
	sub_82E80188(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82e80250
	ctx.lr = 0x83027CE0;
	sub_82E80250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83027CE8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83027d14
	if (cr6.eq) goto loc_83027D14;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(ctx.r31.u64, 0, xer);
	// ble cr6,0x83027d14
	if (!cr6.gt) goto loc_83027D14;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027d14
	if (cr6.eq) goto loc_83027D14;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832e0
	ctx.lr = 0x83027D08;
	sub_825832E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82decb78
	ctx.lr = 0x83027D14;
	sub_82DECB78(ctx, base);
loc_83027D14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83027D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027D30"))) PPC_WEAK_FUNC(sub_83027D30);
PPC_FUNC_IMPL(__imp__sub_83027D30) {
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
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83027D60;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027da8
	if (cr6.eq) goto loc_83027DA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83027D74;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,24392
	ctx.r8.s64 = ctx.r10.s64 + 24392;
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
	// b 0x83027dac
	goto loc_83027DAC;
loc_83027DA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83027DAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027DC4"))) PPC_WEAK_FUNC(sub_83027DC4);
PPC_FUNC_IMPL(__imp__sub_83027DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83027DC8"))) PPC_WEAK_FUNC(sub_83027DC8);
PPC_FUNC_IMPL(__imp__sub_83027DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83027dd8
	if (cr6.lt) goto loc_83027DD8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83027DD8:
	// b 0x83027d30
	sub_83027D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83027DDC"))) PPC_WEAK_FUNC(sub_83027DDC);
PPC_FUNC_IMPL(__imp__sub_83027DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83027DE0"))) PPC_WEAK_FUNC(sub_83027DE0);
PPC_FUNC_IMPL(__imp__sub_83027DE0) {
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
	// bl 0x82d86078
	ctx.lr = 0x83027DF4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027e48
	if (cr6.eq) goto loc_83027E48;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832e0
	ctx.lr = 0x83027E04;
	sub_825832E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82decb00
	ctx.lr = 0x83027E0C;
	sub_82DECB00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83027e48
	if (!cr6.eq) goto loc_83027E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dec940
	ctx.lr = 0x83027E20;
	sub_82DEC940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027e48
	if (cr6.eq) goto loc_83027E48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83027E34;
	sub_837B0C10(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83027e60
	if (!cr6.eq) goto loc_83027E60;
	// bl 0x8387e8e0
	ctx.lr = 0x83027E48;
	sub_8387E8E0(ctx, base);
loc_83027E48:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_83027E60:
	// bl 0x8387e8e0
	ctx.lr = 0x83027E64;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83027E7C"))) PPC_WEAK_FUNC(sub_83027E7C);
PPC_FUNC_IMPL(__imp__sub_83027E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83027E80"))) PPC_WEAK_FUNC(sub_83027E80);
PPC_FUNC_IMPL(__imp__sub_83027E80) {
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
	ctx.lr = 0x83027E9C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83027eac
	if (!cr6.eq) goto loc_83027EAC;
loc_83027EA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83027f18
	goto loc_83027F18;
loc_83027EAC:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832e0
	ctx.lr = 0x83027EB4;
	sub_825832E0(ctx, base);
	// bl 0x82dec940
	ctx.lr = 0x83027EB8;
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
	ctx.lr = 0x83027ED4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83027ef0
	if (cr6.eq) goto loc_83027EF0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,24296
	ctx.r5.s64 = ctx.r11.s64 + 24296;
	// bl 0x82c31d28
	ctx.lr = 0x83027EEC;
	sub_82C31D28(ctx, base);
	// b 0x83027ef4
	goto loc_83027EF4;
loc_83027EF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83027EF4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// beq cr6,0x83027ea4
	if (cr6.eq) goto loc_83027EA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e805c0
	ctx.lr = 0x83027F08;
	sub_82E805C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x83103100
	ctx.lr = 0x83027F14;
	sub_83103100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83027F18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027F30"))) PPC_WEAK_FUNC(sub_83027F30);
PPC_FUNC_IMPL(__imp__sub_83027F30) {
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
	// bgt cr6,0x83028160
	if (cr6.gt) goto loc_83028160;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83027f94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83027F94;
	// bdzf 4*cr6+eq,0x83027fe0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83027FE0;
	// bdzf 4*cr6+eq,0x83028040
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83028040;
	// bdzf 4*cr6+eq,0x83028088
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83028088;
	// bdzf 4*cr6+eq,0x830280dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830280DC;
	// bne cr6,0x83028110
	if (!cr6.eq) goto loc_83028110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83027de0
	ctx.lr = 0x83027F80;
	sub_83027DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83027f94
	if (cr6.eq) goto loc_83027F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83027e80
	ctx.lr = 0x83027F94;
	sub_83027E80(ctx, base);
loc_83027F94:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,24288
	ctx.r11.s64 = ctx.r11.s64 + 24288;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83027FA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83027FB4;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83027FC0;
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
	// b 0x830281a8
	goto loc_830281A8;
loc_83027FE0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83027FE8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83028124
	if (cr6.eq) goto loc_83028124;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028018
	if (cr6.eq) goto loc_83028018;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83028010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83028018:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83028030
	if (!cr6.eq) goto loc_83028030;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x830281a8
	goto loc_830281A8;
loc_83028030:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x830281a8
	goto loc_830281A8;
loc_83028040:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,24288
	ctx.r11.s64 = ctx.r11.s64 + 24288;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83028054;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83028060;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8302806C;
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
	// b 0x830281a8
	goto loc_830281A8;
loc_83028088:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83028090;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83028124
	if (cr6.eq) goto loc_83028124;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830280c0
	if (cr6.eq) goto loc_830280C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830280B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_830280C0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x830281a8
	goto loc_830281A8;
loc_830280DC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,24288
	ctx.r11.s64 = ctx.r11.s64 + 24288;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830280F0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830280FC;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83028104;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830281a4
	goto loc_830281A4;
loc_83028110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83027c78
	ctx.lr = 0x83028118;
	sub_83027C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302812c
	if (!cr6.eq) goto loc_8302812C;
loc_83028124:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830281a8
	goto loc_830281A8;
loc_8302812C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,24288
	ctx.r11.s64 = ctx.r11.s64 + 24288;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83028140;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302814C;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83028154;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830281a4
	goto loc_830281A4;
loc_83028160:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24288
	ctx.r4.s64 = ctx.r11.s64 + 24288;
	// bl 0x837b0c10
	ctx.lr = 0x83028170;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302817C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302819c
	if (cr6.lt) goto loc_8302819C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302819C;
	sub_825952B8(ctx, base);
loc_8302819C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_830281A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830281A8:
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

__attribute__((alias("__imp__sub_830281C0"))) PPC_WEAK_FUNC(sub_830281C0);
PPC_FUNC_IMPL(__imp__sub_830281C0) {
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
	ctx.lr = 0x830281F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028234
	if (cr6.eq) goto loc_83028234;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83028204;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,24944
	ctx.r8.s64 = ctx.r10.s64 + 24944;
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
	// b 0x83028238
	goto loc_83028238;
loc_83028234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83028238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83028250"))) PPC_WEAK_FUNC(sub_83028250);
PPC_FUNC_IMPL(__imp__sub_83028250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83028260
	if (cr6.lt) goto loc_83028260;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83028260:
	// b 0x830281c0
	sub_830281C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83028264"))) PPC_WEAK_FUNC(sub_83028264);
PPC_FUNC_IMPL(__imp__sub_83028264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028268"))) PPC_WEAK_FUNC(sub_83028268);
PPC_FUNC_IMPL(__imp__sub_83028268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83028270;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83028280;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028354
	if (cr6.eq) goto loc_83028354;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83028290;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83028294;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83028298;
	sub_825832F0(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83028354
	if (cr6.eq) goto loc_83028354;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,27
	ctx.r26.s64 = 27;
	// lfs f31,11792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11792);
	ctx.f31.f64 = double(temp.f32);
	// ori r27,r9,34464
	ctx.r27.u64 = ctx.r9.u64 | 34464;
	// addi r28,r11,24832
	ctx.r28.s64 = ctx.r11.s64 + 24832;
loc_830282CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98938
	ctx.lr = 0x830282D8;
	sub_82D98938(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x83028320
	if (cr6.lt) goto loc_83028320;
	// li r3,266
	ctx.r3.s64 = 266;
	// bl 0x82d84728
	ctx.lr = 0x830282E8;
	sub_82D84728(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83028320
	if (!cr6.eq) goto loc_83028320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83028300;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302830C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83028318;
	sub_8387E8E0(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r26,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r26.u32);
loc_83028320:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98848
	ctx.lr = 0x8302832C;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028354
	if (cr6.eq) goto loc_83028354;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// blt cr6,0x83028348
	if (cr6.lt) goto loc_83028348;
	// li r3,291
	ctx.r3.s64 = 291;
	// bl 0x82d84728
	ctx.lr = 0x83028348;
	sub_82D84728(ctx, base);
loc_83028348:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x830282cc
	if (cr6.lt) goto loc_830282CC;
loc_83028354:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83028360"))) PPC_WEAK_FUNC(sub_83028360);
PPC_FUNC_IMPL(__imp__sub_83028360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83028368;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83028378;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830283d8
	if (!cr6.eq) goto loc_830283D8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,24824
	ctx.r11.s64 = ctx.r11.s64 + 24824;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x83028398;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830283A4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830283c4
	if (cr6.lt) goto loc_830283C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830283C4;
	sub_825952B8(ctx, base);
loc_830283C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830283D8:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x830285c0
	if (cr6.gt) goto loc_830285C0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83028440
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83028440;
	// bdzf 4*cr6+eq,0x830284d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830284D0;
	// bdzf 4*cr6+eq,0x83028528
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83028528;
	// bne cr6,0x83028564
	if (!cr6.eq) goto loc_83028564;
	// bl 0x831f8200
	ctx.lr = 0x83028404;
	sub_831F8200(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d9e488
	ctx.lr = 0x8302840C;
	sub_82D9E488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83028268
	ctx.lr = 0x83028414;
	sub_83028268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x8302841C;
	sub_82D8BB28(ctx, base);
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
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83028440:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8bb28
	ctx.lr = 0x83028448;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830284bc
	if (cr6.eq) goto loc_830284BC;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8302845C;
	sub_82DAB6D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830284bc
	if (!cr6.eq) goto loc_830284BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d976b8
	ctx.lr = 0x83028470;
	sub_82D976B8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,24824
	ctx.r11.s64 = ctx.r11.s64 + 24824;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83028484;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83028490;
	sub_82D894E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8302849C;
	sub_8387E8E0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830284BC:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830284D0:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82ddcec8
	ctx.lr = 0x830284D8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302858c
	if (cr6.eq) goto loc_8302858C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028508
	if (cr6.eq) goto loc_83028508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83028500;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_83028508:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83028528:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,24824
	ctx.r11.s64 = ctx.r11.s64 + 24824;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302853C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028548;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83028550;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83028564:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028598
	if (cr6.eq) goto loc_83028598;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83028580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83028598
	if (!cr6.eq) goto loc_83028598;
loc_8302858C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83028598:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,24824
	ctx.r11.s64 = ctx.r11.s64 + 24824;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830285AC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830285B8;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x830285e0
	goto loc_830285E0;
loc_830285C0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,24824
	ctx.r4.s64 = ctx.r11.s64 + 24824;
	// bl 0x837b0c10
	ctx.lr = 0x830285D0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830285DC;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
loc_830285E0:
	// bl 0x8387e8e0
	ctx.lr = 0x830285E4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830285F8"))) PPC_WEAK_FUNC(sub_830285F8);
PPC_FUNC_IMPL(__imp__sub_830285F8) {
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
	ctx.lr = 0x83028628;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028668
	if (cr6.eq) goto loc_83028668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302863C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,25472
	ctx.r8.s64 = ctx.r10.s64 + 25472;
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
	// b 0x8302866c
	goto loc_8302866C;
loc_83028668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302866C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83028684"))) PPC_WEAK_FUNC(sub_83028684);
PPC_FUNC_IMPL(__imp__sub_83028684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028688"))) PPC_WEAK_FUNC(sub_83028688);
PPC_FUNC_IMPL(__imp__sub_83028688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83028698
	if (cr6.lt) goto loc_83028698;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83028698:
	// b 0x830285f8
	sub_830285F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302869C"))) PPC_WEAK_FUNC(sub_8302869C);
PPC_FUNC_IMPL(__imp__sub_8302869C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830286A0"))) PPC_WEAK_FUNC(sub_830286A0);
PPC_FUNC_IMPL(__imp__sub_830286A0) {
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
	ctx.lr = 0x830286C0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83028714
	if (!cr6.eq) goto loc_83028714;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,25376
	ctx.r11.s64 = ctx.r11.s64 + 25376;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x830286DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830286E8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83028708
	if (cr6.lt) goto loc_83028708;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83028708;
	sub_825952B8(ctx, base);
loc_83028708:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83028858
	goto loc_83028858;
loc_83028714:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8302882c
	if (cr6.gt) goto loc_8302882C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83028758
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83028758;
	// bdzf 4*cr6+eq,0x830287a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830287A4;
	// bdzf 4*cr6+eq,0x830287fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830287FC;
	// bne cr6,0x8302882c
	if (!cr6.eq) goto loc_8302882C;
	// bl 0x831f8200
	ctx.lr = 0x83028740;
	sub_831F8200(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d9e488
	ctx.lr = 0x83028748;
	sub_82D9E488(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8302885c
	goto loc_8302885C;
loc_83028758:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,25376
	ctx.r11.s64 = ctx.r11.s64 + 25376;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x8302876C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83028778;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83028784;
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
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8302885c
	goto loc_8302885C;
loc_830287A4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830287AC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830287f4
	if (cr6.eq) goto loc_830287F4;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830287dc
	if (cr6.eq) goto loc_830287DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830287D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830287DC:
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
loc_830287F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8302885c
	goto loc_8302885C;
loc_830287FC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,25376
	ctx.r11.s64 = ctx.r11.s64 + 25376;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83028810;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302881C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83028824;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83028854
	goto loc_83028854;
loc_8302882C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,25376
	ctx.r4.s64 = ctx.r11.s64 + 25376;
	// bl 0x837b0c10
	ctx.lr = 0x8302883C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028848;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83028850;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_83028854:
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_83028858:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8302885C:
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

__attribute__((alias("__imp__sub_83028874"))) PPC_WEAK_FUNC(sub_83028874);
PPC_FUNC_IMPL(__imp__sub_83028874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028878"))) PPC_WEAK_FUNC(sub_83028878);
PPC_FUNC_IMPL(__imp__sub_83028878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830288c8
	if (!cr6.eq) goto loc_830288C8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830288ac
	if (cr6.eq) goto loc_830288AC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x830288c8
	if (!cr6.eq) goto loc_830288C8;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// b 0x830288c8
	goto loc_830288C8;
loc_830288AC:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x6;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
loc_830288C8:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830288CC"))) PPC_WEAK_FUNC(sub_830288CC);
PPC_FUNC_IMPL(__imp__sub_830288CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830288D0"))) PPC_WEAK_FUNC(sub_830288D0);
PPC_FUNC_IMPL(__imp__sub_830288D0) {
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
	ctx.lr = 0x83028900;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028940
	if (cr6.eq) goto loc_83028940;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83028914;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,26080
	ctx.r8.s64 = ctx.r10.s64 + 26080;
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
	// b 0x83028944
	goto loc_83028944;
loc_83028940:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83028944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302895C"))) PPC_WEAK_FUNC(sub_8302895C);
PPC_FUNC_IMPL(__imp__sub_8302895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028960"))) PPC_WEAK_FUNC(sub_83028960);
PPC_FUNC_IMPL(__imp__sub_83028960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83028970
	if (cr6.lt) goto loc_83028970;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83028970:
	// b 0x830288d0
	sub_830288D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83028974"))) PPC_WEAK_FUNC(sub_83028974);
PPC_FUNC_IMPL(__imp__sub_83028974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028978"))) PPC_WEAK_FUNC(sub_83028978);
PPC_FUNC_IMPL(__imp__sub_83028978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83028980;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302898C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302899c
	if (!cr6.eq) goto loc_8302899C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302899C:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830289A8;
	sub_82DAB6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x830289B4;
	sub_831F8200(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,25634
	ctx.r31.s64 = ctx.r11.s64 + 25634;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r31,314
	ctx.r3.s64 = ctx.r31.s64 + 314;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x830289D8;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830289E8;
	sub_837B0C10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d975e8
	ctx.lr = 0x830289F0;
	sub_82D975E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83028a10
	if (cr6.eq) goto loc_83028A10;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x83028a18
	goto loc_83028A18;
loc_83028A10:
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
loc_83028A18:
	// bl 0x82d042a8
	ctx.lr = 0x83028A1C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83028A28;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x83028A34;
	sub_83103100(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83028a54
	if (cr6.lt) goto loc_83028A54;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83028A54;
	sub_825952B8(ctx, base);
loc_83028A54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83028A60"))) PPC_WEAK_FUNC(sub_83028A60);
PPC_FUNC_IMPL(__imp__sub_83028A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83028A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83028A74;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83028a88
	if (!cr6.eq) goto loc_83028A88;
loc_83028A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83028A88:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83028A90;
	sub_831F8200(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,25635
	ctx.r30.s64 = ctx.r11.s64 + 25635;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,329
	ctx.r3.s64 = ctx.r30.s64 + 329;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,760(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 760);
	// bl 0x82d2fa90
	ctx.lr = 0x83028AB4;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028a7c
	if (cr6.eq) goto loc_83028A7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83028ACC;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,375
	ctx.r4.u64 = ctx.r4.u64 | 375;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x83028AE0;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83028AEC;
	sub_82D2AAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x83028AF8;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83028B00;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83028B0C"))) PPC_WEAK_FUNC(sub_83028B0C);
PPC_FUNC_IMPL(__imp__sub_83028B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028B10"))) PPC_WEAK_FUNC(sub_83028B10);
PPC_FUNC_IMPL(__imp__sub_83028B10) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83028ba8
	if (cr6.gt) goto loc_83028BA8;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29872
	ctx.r12.s64 = ctx.r12.s64 + -29872;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83028B7C;
	case 1:
		goto loc_83028B84;
	case 2:
		goto loc_83028BA8;
	case 3:
		goto loc_83028BC4;
	case 4:
		goto loc_83028C0C;
	case 5:
		goto loc_83028CC4;
	case 6:
		goto loc_83028BA8;
	case 7:
		goto loc_83028BA8;
	case 8:
		goto loc_83028CE0;
	case 9:
		goto loc_83028D18;
	case 10:
		goto loc_83028D50;
	default:
		return;
	}
	// lwz r24,-29828(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29828);
	// lwz r24,-29820(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29820);
	// lwz r24,-29784(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29784);
	// lwz r24,-29756(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29756);
	// lwz r24,-29684(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29684);
	// lwz r24,-29500(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29500);
	// lwz r24,-29784(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29784);
	// lwz r24,-29784(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29784);
	// lwz r24,-29472(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29472);
	// lwz r24,-29416(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29416);
	// lwz r24,-29360(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29360);
loc_83028B7C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83028B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83028978
	ctx.lr = 0x83028B8C;
	sub_83028978(ctx, base);
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
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_83028BA0:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_83028BA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83028BAC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83028BC4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,25932
	ctx.r11.s64 = ctx.r11.s64 + 25932;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x83028BD8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83028BE4;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83028BF0;
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
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83028ba8
	goto loc_83028BA8;
loc_83028C0C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83028C14;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83028ba8
	if (cr6.eq) goto loc_83028BA8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028c44
	if (cr6.eq) goto loc_83028C44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83028C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83028C44:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83028cb8
	if (!cr6.eq) goto loc_83028CB8;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83028c64
	if (cr6.eq) goto loc_83028C64;
	// li r3,271
	ctx.r3.s64 = 271;
	// bl 0x82d84728
	ctx.lr = 0x83028C64;
	sub_82D84728(ctx, base);
loc_83028C64:
	// bl 0x82d86078
	ctx.lr = 0x83028C68;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028c7c
	if (cr6.eq) goto loc_83028C7C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83028C78;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x83028C7C;
	sub_82D975E8(ctx, base);
loc_83028C7C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83028ca0
	if (cr6.eq) goto loc_83028CA0;
	// bl 0x82d26ed8
	ctx.lr = 0x83028C8C;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82d26b18
	ctx.lr = 0x83028C94;
	sub_82D26B18(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83028ba8
	goto loc_83028BA8;
loc_83028CA0:
	// bl 0x82d26ed8
	ctx.lr = 0x83028CA4;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82d26b18
	ctx.lr = 0x83028CAC;
	sub_82D26B18(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83028ba8
	goto loc_83028BA8;
loc_83028CB8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83028ba8
	goto loc_83028BA8;
loc_83028CC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83028a60
	ctx.lr = 0x83028CCC;
	sub_83028A60(ctx, base);
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
	// b 0x83028ba0
	goto loc_83028BA0;
loc_83028CE0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,25932
	ctx.r11.s64 = ctx.r11.s64 + 25932;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x83028CF4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028D00;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83028D08;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83028bac
	goto loc_83028BAC;
loc_83028D18:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,25932
	ctx.r11.s64 = ctx.r11.s64 + 25932;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83028D2C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028D38;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83028D40;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83028bac
	goto loc_83028BAC;
loc_83028D50:
	// bl 0x82d86078
	ctx.lr = 0x83028D54;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83028d64
	if (!cr6.eq) goto loc_83028D64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83028bac
	goto loc_83028BAC;
loc_83028D64:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83028D6C;
	sub_82DAB6D0(ctx, base);
	// lwz r11,3500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3500);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83028e28
	if (cr6.eq) goto loc_83028E28;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83028df0
	if (cr6.eq) goto loc_83028DF0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// beq cr6,0x83028dc0
	if (cr6.eq) goto loc_83028DC0;
	// addi r11,r11,25932
	ctx.r11.s64 = ctx.r11.s64 + 25932;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x83028D9C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028DA8;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83028DB0;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83028bac
	goto loc_83028BAC;
loc_83028DC0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,25932
	ctx.r4.s64 = ctx.r11.s64 + 25932;
	// bl 0x837b0c10
	ctx.lr = 0x83028DCC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028DD8;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83028DE0;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83028bac
	goto loc_83028BAC;
loc_83028DF0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,25932
	ctx.r11.s64 = ctx.r11.s64 + 25932;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83028E04;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028E10;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83028E18;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83028bac
	goto loc_83028BAC;
loc_83028E28:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,25932
	ctx.r11.s64 = ctx.r11.s64 + 25932;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x83028E3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83028E48;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83028E50;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83028bac
	goto loc_83028BAC;
}

__attribute__((alias("__imp__sub_83028E60"))) PPC_WEAK_FUNC(sub_83028E60);
PPC_FUNC_IMPL(__imp__sub_83028E60) {
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
	// bne cr6,0x83028e7c
	if (!cr6.eq) goto loc_83028E7C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_83028E7C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83028E80"))) PPC_WEAK_FUNC(sub_83028E80);
PPC_FUNC_IMPL(__imp__sub_83028E80) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,26484
	ctx.r3.s64 = ctx.r11.s64 + 26484;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83028EB0;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028edc
	if (cr6.eq) goto loc_83028EDC;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,374
	ctx.r4.u64 = ctx.r4.u64 | 374;
	// bl 0x82d2ada8
	ctx.lr = 0x83028ECC;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83028ED8;
	sub_83103100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83028EDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83028EF4"))) PPC_WEAK_FUNC(sub_83028EF4);
PPC_FUNC_IMPL(__imp__sub_83028EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028EF8"))) PPC_WEAK_FUNC(sub_83028EF8);
PPC_FUNC_IMPL(__imp__sub_83028EF8) {
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
	ctx.lr = 0x83028F08;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83028f20
	if (!cr6.eq) goto loc_83028F20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83028F20:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83028F28;
	sub_831F8200(ctx, base);
	// lwz r11,760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// li r10,150
	ctx.r10.s64 = 150;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_83028F4C"))) PPC_WEAK_FUNC(sub_83028F4C);
PPC_FUNC_IMPL(__imp__sub_83028F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028F50"))) PPC_WEAK_FUNC(sub_83028F50);
PPC_FUNC_IMPL(__imp__sub_83028F50) {
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
	ctx.lr = 0x83028F80;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83028fbc
	if (cr6.eq) goto loc_83028FBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83028F94;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26600
	ctx.r9.s64 = ctx.r11.s64 + 26600;
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
	// b 0x83028fc0
	goto loc_83028FC0;
loc_83028FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83028FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83028FD8"))) PPC_WEAK_FUNC(sub_83028FD8);
PPC_FUNC_IMPL(__imp__sub_83028FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83028fe8
	if (cr6.lt) goto loc_83028FE8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83028FE8:
	// b 0x83028f50
	sub_83028F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83028FEC"))) PPC_WEAK_FUNC(sub_83028FEC);
PPC_FUNC_IMPL(__imp__sub_83028FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83028FF0"))) PPC_WEAK_FUNC(sub_83028FF0);
PPC_FUNC_IMPL(__imp__sub_83028FF0) {
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
	// bgt cr6,0x83029060
	if (cr6.gt) goto loc_83029060;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83029040
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83029040;
	// bdzf 4*cr6+eq,0x8302907c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302907C;
	// bdzf 4*cr6+eq,0x83029060
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83029060;
	// bdzf 4*cr6+eq,0x8302909c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302909C;
	// bdzf 4*cr6+eq,0x830290d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830290D4;
	// bne cr6,0x8302910c
	if (!cr6.eq) goto loc_8302910C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83029040:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83028ef8
	ctx.lr = 0x83029048;
	sub_83028EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_83029060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83029064:
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
loc_8302907C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83028e80
	ctx.lr = 0x83029084;
	sub_83028E80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83029060
	goto loc_83029060;
loc_8302909C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26476
	ctx.r11.s64 = ctx.r11.s64 + 26476;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830290B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830290BC;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830290C4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83029064
	goto loc_83029064;
loc_830290D4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,26476
	ctx.r11.s64 = ctx.r11.s64 + 26476;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830290E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830290F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830290FC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83029064
	goto loc_83029064;
loc_8302910C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,26476
	ctx.r4.s64 = ctx.r11.s64 + 26476;
	// bl 0x837b0c10
	ctx.lr = 0x8302911C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83029128;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83029130;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83029064
	goto loc_83029064;
}

__attribute__((alias("__imp__sub_83029140"))) PPC_WEAK_FUNC(sub_83029140);
PPC_FUNC_IMPL(__imp__sub_83029140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83029194
	if (!cr6.eq) goto loc_83029194;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83029174
	if (cr6.eq) goto loc_83029174;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83029194
	if (!cr6.eq) goto loc_83029194;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// b 0x83029194
	goto loc_83029194;
loc_83029174:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,29
	ctx.r11.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
loc_83029194:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83029198"))) PPC_WEAK_FUNC(sub_83029198);
PPC_FUNC_IMPL(__imp__sub_83029198) {
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
	ctx.lr = 0x830291C8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029208
	if (cr6.eq) goto loc_83029208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830291DC;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,27240
	ctx.r8.s64 = ctx.r10.s64 + 27240;
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
	// b 0x8302920c
	goto loc_8302920C;
loc_83029208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302920C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83029224"))) PPC_WEAK_FUNC(sub_83029224);
PPC_FUNC_IMPL(__imp__sub_83029224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83029228"))) PPC_WEAK_FUNC(sub_83029228);
PPC_FUNC_IMPL(__imp__sub_83029228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83029238
	if (cr6.lt) goto loc_83029238;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83029238:
	// b 0x83029198
	sub_83029198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302923C"))) PPC_WEAK_FUNC(sub_8302923C);
PPC_FUNC_IMPL(__imp__sub_8302923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83029240"))) PPC_WEAK_FUNC(sub_83029240);
PPC_FUNC_IMPL(__imp__sub_83029240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83029248;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83029254;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83029268
	if (!cr6.eq) goto loc_83029268;
loc_8302925C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83029268:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83029270;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83029274;
	sub_83102DB0(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83029278;
	sub_825832F0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,26762
	ctx.r30.s64 = ctx.r11.s64 + 26762;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,350
	ctx.r3.s64 = ctx.r30.s64 + 350;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83029298;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302925c
	if (cr6.eq) goto loc_8302925C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x830292B0;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,147
	ctx.r4.u64 = ctx.r4.u64 | 147;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x830292C4;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x830292D0;
	sub_82D2AAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x830292DC;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830292E4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830292F0"))) PPC_WEAK_FUNC(sub_830292F0);
PPC_FUNC_IMPL(__imp__sub_830292F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830292F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83029304;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83029314
	if (!cr6.eq) goto loc_83029314;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83029314:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83029320;
	sub_82DAB6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8302932C;
	sub_831F8200(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26763
	ctx.r31.s64 = ctx.r11.s64 + 26763;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r31,373
	ctx.r3.s64 = ctx.r31.s64 + 373;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83029350;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83029360;
	sub_837B0C10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d975e8
	ctx.lr = 0x83029368;
	sub_82D975E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83029388
	if (cr6.eq) goto loc_83029388;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// b 0x83029390
	goto loc_83029390;
loc_83029388:
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
loc_83029390:
	// bl 0x82d042a8
	ctx.lr = 0x83029394;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x830293A0;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x830293AC;
	sub_83103100(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830293cc
	if (cr6.lt) goto loc_830293CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830293CC;
	sub_825952B8(ctx, base);
loc_830293CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830293D8"))) PPC_WEAK_FUNC(sub_830293D8);
PPC_FUNC_IMPL(__imp__sub_830293D8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83029540
	if (cr6.gt) goto loc_83029540;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27624
	ctx.r12.s64 = ctx.r12.s64 + -27624;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83029440;
	case 1:
		goto loc_83029448;
	case 2:
		goto loc_83029540;
	case 3:
		goto loc_8302946C;
	case 4:
		goto loc_830294B4;
	case 5:
		goto loc_83029564;
	case 6:
		goto loc_83029540;
	case 7:
		goto loc_83029584;
	case 8:
		goto loc_830295BC;
	case 9:
		goto loc_830295F4;
	default:
		return;
	}
	// lwz r24,-27584(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27584);
	// lwz r24,-27576(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27576);
	// lwz r24,-27328(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27328);
	// lwz r24,-27540(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27540);
	// lwz r24,-27468(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27468);
	// lwz r24,-27292(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27292);
	// lwz r24,-27328(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27328);
	// lwz r24,-27260(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27260);
	// lwz r24,-27204(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27204);
	// lwz r24,-27148(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27148);
loc_83029440:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83029448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830292f0
	ctx.lr = 0x83029450;
	sub_830292F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83029540
	goto loc_83029540;
loc_8302946C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,27096
	ctx.r11.s64 = ctx.r11.s64 + 27096;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x837b0c10
	ctx.lr = 0x83029480;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302948C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83029498;
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
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83029540
	goto loc_83029540;
loc_830294B4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830294BC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83029540
	if (cr6.eq) goto loc_83029540;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830294ec
	if (cr6.eq) goto loc_830294EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830294E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830294EC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8302955c
	if (!cr6.eq) goto loc_8302955C;
	// li r3,261
	ctx.r3.s64 = 261;
	// bl 0x82d84728
	ctx.lr = 0x830294FC;
	sub_82D84728(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x83029500;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029514
	if (cr6.eq) goto loc_83029514;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83029510;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d975e8
	ctx.lr = 0x83029514;
	sub_82D975E8(ctx, base);
loc_83029514:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302952c
	if (cr6.eq) goto loc_8302952C;
	// bl 0x82d26ed8
	ctx.lr = 0x83029524;
	sub_82D26ED8(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x83029534
	goto loc_83029534;
loc_8302952C:
	// bl 0x82d26ed8
	ctx.lr = 0x83029530;
	sub_82D26ED8(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
loc_83029534:
	// bl 0x82d26b18
	ctx.lr = 0x83029538;
	sub_82D26B18(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
loc_8302953C:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83029540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83029544:
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
loc_8302955C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8302953c
	goto loc_8302953C;
loc_83029564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83029240
	ctx.lr = 0x8302956C;
	sub_83029240(ctx, base);
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
	// b 0x83029540
	goto loc_83029540;
loc_83029584:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,27096
	ctx.r11.s64 = ctx.r11.s64 + 27096;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x837b0c10
	ctx.lr = 0x83029598;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830295A4;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x830295AC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83029544
	goto loc_83029544;
loc_830295BC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,27096
	ctx.r11.s64 = ctx.r11.s64 + 27096;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x830295D0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830295DC;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x830295E4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83029544
	goto loc_83029544;
loc_830295F4:
	// bl 0x82d86078
	ctx.lr = 0x830295F8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83029608
	if (!cr6.eq) goto loc_83029608;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83029544
	goto loc_83029544;
loc_83029608:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83029610;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97738
	ctx.lr = 0x83029614;
	sub_82D97738(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8302970c
	if (cr6.gt) goto loc_8302970C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83029668
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83029668;
	// bdzf 4*cr6+eq,0x830296a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830296A0;
	// bne cr6,0x830296d8
	if (!cr6.eq) goto loc_830296D8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,27096
	ctx.r11.s64 = ctx.r11.s64 + 27096;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x83029644;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83029650;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83029658;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83029544
	goto loc_83029544;
loc_83029668:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,27096
	ctx.r11.s64 = ctx.r11.s64 + 27096;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x8302967C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83029688;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83029690;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83029544
	goto loc_83029544;
loc_830296A0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,27096
	ctx.r11.s64 = ctx.r11.s64 + 27096;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830296B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830296C0;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x830296C8;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83029544
	goto loc_83029544;
loc_830296D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,27096
	ctx.r4.s64 = ctx.r11.s64 + 27096;
	// bl 0x837b0c10
	ctx.lr = 0x830296E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830296F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x830296FC;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83029544
	goto loc_83029544;
loc_8302970C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,27096
	ctx.r11.s64 = ctx.r11.s64 + 27096;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83029720;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302972C;
	sub_82E88020(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x83029734;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83029544
	goto loc_83029544;
}

__attribute__((alias("__imp__sub_83029744"))) PPC_WEAK_FUNC(sub_83029744);
PPC_FUNC_IMPL(__imp__sub_83029744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83029748"))) PPC_WEAK_FUNC(sub_83029748);
PPC_FUNC_IMPL(__imp__sub_83029748) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,27644
	ctx.r3.s64 = ctx.r11.s64 + 27644;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83029778;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830297a4
	if (cr6.eq) goto loc_830297A4;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,145
	ctx.r4.u64 = ctx.r4.u64 | 145;
	// bl 0x82d2ada8
	ctx.lr = 0x83029794;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x830297A0;
	sub_83103100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830297A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830297BC"))) PPC_WEAK_FUNC(sub_830297BC);
PPC_FUNC_IMPL(__imp__sub_830297BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830297C0"))) PPC_WEAK_FUNC(sub_830297C0);
PPC_FUNC_IMPL(__imp__sub_830297C0) {
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
	ctx.lr = 0x830297D0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830297e8
	if (!cr6.eq) goto loc_830297E8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830297E8:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830297F0;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x830297F4;
	sub_83102DB0(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830297F8;
	sub_825832F0(ctx, base);
	// li r11,250
	ctx.r11.s64 = 250;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83029818"))) PPC_WEAK_FUNC(sub_83029818);
PPC_FUNC_IMPL(__imp__sub_83029818) {
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
	ctx.lr = 0x83029848;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029884
	if (cr6.eq) goto loc_83029884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8302985C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27760
	ctx.r9.s64 = ctx.r11.s64 + 27760;
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
	// b 0x83029888
	goto loc_83029888;
loc_83029884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83029888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830298A0"))) PPC_WEAK_FUNC(sub_830298A0);
PPC_FUNC_IMPL(__imp__sub_830298A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830298b0
	if (cr6.lt) goto loc_830298B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830298B0:
	// b 0x83029818
	sub_83029818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830298B4"))) PPC_WEAK_FUNC(sub_830298B4);
PPC_FUNC_IMPL(__imp__sub_830298B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830298B8"))) PPC_WEAK_FUNC(sub_830298B8);
PPC_FUNC_IMPL(__imp__sub_830298B8) {
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
	// bgt cr6,0x83029928
	if (cr6.gt) goto loc_83029928;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83029908
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83029908;
	// bdzf 4*cr6+eq,0x83029944
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83029944;
	// bdzf 4*cr6+eq,0x83029928
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83029928;
	// bdzf 4*cr6+eq,0x83029964
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83029964;
	// bdzf 4*cr6+eq,0x8302999c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302999C;
	// bne cr6,0x830299d4
	if (!cr6.eq) goto loc_830299D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83029908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830297c0
	ctx.lr = 0x83029910;
	sub_830297C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_83029928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302992C:
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
loc_83029944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83029748
	ctx.lr = 0x8302994C;
	sub_83029748(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83029928
	goto loc_83029928;
loc_83029964:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,27636
	ctx.r11.s64 = ctx.r11.s64 + 27636;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83029978;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83029984;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302998C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302992c
	goto loc_8302992C;
loc_8302999C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,27636
	ctx.r11.s64 = ctx.r11.s64 + 27636;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830299B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830299BC;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830299C4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302992c
	goto loc_8302992C;
loc_830299D4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,27636
	ctx.r4.s64 = ctx.r11.s64 + 27636;
	// bl 0x837b0c10
	ctx.lr = 0x830299E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830299F0;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x830299F8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8302992c
	goto loc_8302992C;
}

__attribute__((alias("__imp__sub_83029A08"))) PPC_WEAK_FUNC(sub_83029A08);
PPC_FUNC_IMPL(__imp__sub_83029A08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83061e98
	ctx.lr = 0x83029A28;
	sub_83061E98(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
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
	// addi r4,r10,28312
	ctx.r4.s64 = ctx.r10.s64 + 28312;
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
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stb r11,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83029A8C"))) PPC_WEAK_FUNC(sub_83029A8C);
PPC_FUNC_IMPL(__imp__sub_83029A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83029A90"))) PPC_WEAK_FUNC(sub_83029A90);
PPC_FUNC_IMPL(__imp__sub_83029A90) {
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
	// bne cr6,0x83029aec
	if (!cr6.eq) goto loc_83029AEC;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83029afc
	if (!cr6.eq) goto loc_83029AFC;
	// bl 0x82d17d90
	ctx.lr = 0x83029AD0;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r11,r11,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x83029afc
	goto loc_83029AFC;
loc_83029AEC:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83029afc
	if (!cr6.eq) goto loc_83029AFC;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83029AFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83029B08;
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

__attribute__((alias("__imp__sub_83029B20"))) PPC_WEAK_FUNC(sub_83029B20);
PPC_FUNC_IMPL(__imp__sub_83029B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83029B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83029B34;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029b88
	if (cr6.eq) goto loc_83029B88;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83029B44;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83029B48;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83029B4C;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029b88
	if (cr6.eq) goto loc_83029B88;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83029B5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x83029B68;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029b88
	if (cr6.eq) goto loc_83029B88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x83029b94
	if (cr6.eq) goto loc_83029B94;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83029b5c
	if (cr6.lt) goto loc_83029B5C;
loc_83029B88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83029B94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83029BA0"))) PPC_WEAK_FUNC(sub_83029BA0);
PPC_FUNC_IMPL(__imp__sub_83029BA0) {
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
	// blt cr6,0x83029bc4
	if (cr6.lt) goto loc_83029BC4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83029bc8
	goto loc_83029BC8;
loc_83029BC4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83029BC8:
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
	ctx.lr = 0x83029BE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029bfc
	if (cr6.eq) goto loc_83029BFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83029a08
	ctx.lr = 0x83029BF4;
	sub_83029A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83029c00
	if (!cr6.eq) goto loc_83029C00;
loc_83029BFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83029C00:
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

__attribute__((alias("__imp__sub_83029C14"))) PPC_WEAK_FUNC(sub_83029C14);
PPC_FUNC_IMPL(__imp__sub_83029C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83029C18"))) PPC_WEAK_FUNC(sub_83029C18);
PPC_FUNC_IMPL(__imp__sub_83029C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83029C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83029C2C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029ca4
	if (cr6.eq) goto loc_83029CA4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83029C3C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83029C40;
	sub_82D99C10(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83029C44;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x83029ca4
	if (cr6.eq) goto loc_83029CA4;
loc_83029C58:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83029C5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d98848
	ctx.lr = 0x83029C68;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029c88
	if (cr6.eq) goto loc_83029C88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d98848
	ctx.lr = 0x83029C7C;
	sub_82D98848(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x83029cb0
	if (cr6.eq) goto loc_83029CB0;
loc_83029C88:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83029c5c
	if (cr6.lt) goto loc_83029C5C;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83029c58
	if (!cr6.eq) goto loc_83029C58;
loc_83029CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83029CB0:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825832e0
	ctx.lr = 0x83029CB8;
	sub_825832E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83029CC0"))) PPC_WEAK_FUNC(sub_83029CC0);
PPC_FUNC_IMPL(__imp__sub_83029CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83029CC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-3712(r1)
	ea = -3712 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83029CD8;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83029d38
	if (!cr6.eq) goto loc_83029D38;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,28220
	ctx.r11.s64 = ctx.r11.s64 + 28220;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x83029CF8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83029D04;
	sub_82E88020(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83029d24
	if (cr6.lt) goto loc_83029D24;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83029D24;
	sub_825952B8(ctx, base);
loc_83029D24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83029D38:
	// bl 0x831156e8
	ctx.lr = 0x83029D3C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83029d80
	if (!cr6.eq) goto loc_83029D80;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28220
	ctx.r11.s64 = ctx.r11.s64 + 28220;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x83029D58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83029D64;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83029D6C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83029D80:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,116(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8302a300
	if (cr6.gt) goto loc_8302A300;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25172
	ctx.r12.s64 = ctx.r12.s64 + -25172;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83029DDC;
	case 1:
		goto loc_8302A27C;
	case 2:
		goto loc_83029F28;
	case 3:
		goto loc_83029FC8;
	case 4:
		goto loc_8302A014;
	case 5:
		goto loc_8302A074;
	case 6:
		goto loc_8302A0D4;
	case 7:
		goto loc_8302A124;
	case 8:
		goto loc_8302A170;
	case 9:
		goto loc_8302A27C;
	case 10:
		goto loc_8302A288;
	case 11:
		goto loc_8302A2C4;
	default:
		return;
	}
	// lwz r24,-25124(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25124);
	// lwz r24,-23940(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23940);
	// lwz r24,-24792(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24792);
	// lwz r24,-24632(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24632);
	// lwz r24,-24556(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24556);
	// lwz r24,-24460(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24460);
	// lwz r24,-24364(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24364);
	// lwz r24,-24284(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24284);
	// lwz r24,-24208(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -24208);
	// lwz r24,-23940(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23940);
	// lwz r24,-23928(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23928);
	// lwz r24,-23868(r2)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23868);
loc_83029DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83029DE4;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83029DF0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x83029DF4;
	sub_82D99C08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83029E00;
	sub_82DF16A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d9a978
	ctx.lr = 0x83029E10;
	sub_82D9A978(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x83029E2C;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x83029E3C;
	sub_831CE980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83029E44;
	sub_82DF16A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83029b20
	ctx.lr = 0x83029E50;
	sub_83029B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83029e6c
	if (cr6.eq) goto loc_83029E6C;
loc_83029E58:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83029E6C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,28220
	ctx.r29.s64 = ctx.r11.s64 + 28220;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r29,-64
	ctx.r3.s64 = ctx.r29.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83029E8C;
	sub_82D2F6D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-298
	ctx.r4.s64 = ctx.r29.s64 + -298;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83029E9C;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83029c18
	ctx.lr = 0x83029EA8;
	sub_83029C18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r6,24(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r1,372
	ctx.r5.s64 = ctx.r1.s64 + 372;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x83029ec8
	if (cr6.eq) goto loc_83029EC8;
	// ori r4,r4,170
	ctx.r4.u64 = ctx.r4.u64 | 170;
	// b 0x83029ecc
	goto loc_83029ECC;
loc_83029EC8:
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
loc_83029ECC:
	// bl 0x82d042a8
	ctx.lr = 0x83029ED0;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83029ee4
	if (!cr6.lt) goto loc_83029EE4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_83029EE4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x83029EEC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83029EF8;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83029F00;
	sub_8387E8E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83029F0C;
	sub_83103100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83029F14;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83029F28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83029F30;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83029F3C;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83029F48;
	sub_82DF16A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83029F54;
	sub_82DF16A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83029b20
	ctx.lr = 0x83029F60;
	sub_83029B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83029e58
	if (!cr6.eq) goto loc_83029E58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83029c18
	ctx.lr = 0x83029F74;
	sub_83029C18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// beq cr6,0x83029fb4
	if (cr6.eq) goto loc_83029FB4;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82d99c10
	ctx.lr = 0x83029F90;
	sub_82D99C10(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x83029F94;
	sub_8332F198(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8302a27c
	if (!cr6.eq) goto loc_8302A27C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r11.u8);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83029FB4:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83029FC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83029FD0;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82b54cc0
	ctx.lr = 0x83029FDC;
	sub_82B54CC0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1600, ctx.r11.u32);
	// stw r10,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r10.u32);
	// bl 0x82da44b8
	ctx.lr = 0x83029FF4;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,1600
	ctx.r4.s64 = ctx.r1.s64 + 1600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302A000;
	sub_82DA4370(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302A01C;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302A024;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302a27c
	if (cr6.eq) goto loc_8302A27C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302A038;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302a058
	if (cr6.eq) goto loc_8302A058;
loc_8302A044:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A058:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r10.u8);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A074:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302A07C;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302A088;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8302A094;
	sub_82DF16A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82b54cc0
	ctx.lr = 0x8302A0A0;
	sub_82B54CC0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1600, ctx.r11.u32);
	// bl 0x82da44b8
	ctx.lr = 0x8302A0B4;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,1600
	ctx.r4.s64 = ctx.r1.s64 + 1600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4370
	ctx.lr = 0x8302A0C0;
	sub_82DA4370(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A0D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8302A0DC;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8302A0E4;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302a27c
	if (cr6.eq) goto loc_8302A27C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8302A0F8;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8302a044
	if (!cr6.eq) goto loc_8302A044;
	// bl 0x82d26ed8
	ctx.lr = 0x8302A108;
	sub_82D26ED8(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x82d26b18
	ctx.lr = 0x8302A110;
	sub_82D26B18(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A124:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,28220
	ctx.r11.s64 = ctx.r11.s64 + 28220;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302A140;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,169
	ctx.r4.u64 = ctx.r4.u64 | 169;
	// bl 0x82d2ada8
	ctx.lr = 0x8302A150;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302A15C;
	sub_83103100(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A170:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302A178;
	sub_82DAB6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302A184;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82df16a0
	ctx.lr = 0x8302A198;
	sub_82DF16A0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x8302A1A8;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x8302A1B8;
	sub_831CE980(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r10,28220
	ctx.r30.s64 = ctx.r10.s64 + 28220;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302A1D4;
	sub_82D2FA90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-297
	ctx.r4.s64 = ctx.r30.s64 + -297;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8302A1E4;
	sub_837B0C10(ctx, base);
	// lbz r9,106(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8302a228
	if (cr6.eq) goto loc_8302A228;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d99c10
	ctx.lr = 0x8302A1F8;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x8302A1FC;
	sub_825832F0(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8302A200;
	sub_825832E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d99c10
	ctx.lr = 0x8302A20C;
	sub_82D99C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8307e038
	ctx.lr = 0x8302A214;
	sub_8307E038(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,410
	ctx.r4.u64 = ctx.r4.u64 | 410;
	// bl 0x82d042a8
	ctx.lr = 0x8302A224;
	sub_82D042A8(ctx, base);
	// b 0x8302a254
	goto loc_8302A254;
loc_8302A228:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// addi r5,r1,1012
	ctx.r5.s64 = ctx.r1.s64 + 1012;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8302a248
	if (!cr6.eq) goto loc_8302A248;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,171
	ctx.r4.u64 = ctx.r4.u64 | 171;
	// b 0x8302a250
	goto loc_8302A250;
loc_8302A248:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,263
	ctx.r4.u64 = ctx.r4.u64 | 263;
loc_8302A250:
	// bl 0x82d042a8
	ctx.lr = 0x8302A254;
	sub_82D042A8(ctx, base);
loc_8302A254:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302A260;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302A26C;
	sub_83103100(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8302A27C;
	sub_8387E8E0(ctx, base);
loc_8302A27C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A288:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,28220
	ctx.r11.s64 = ctx.r11.s64 + 28220;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8302A29C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A2A8;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A2B0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A2C4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,28220
	ctx.r11.s64 = ctx.r11.s64 + 28220;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302A2D8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A2E4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A2EC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8302A300:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,28220
	ctx.r4.s64 = ctx.r11.s64 + 28220;
	// bl 0x837b0c10
	ctx.lr = 0x8302A310;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A31C;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A324;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302A338"))) PPC_WEAK_FUNC(sub_8302A338);
PPC_FUNC_IMPL(__imp__sub_8302A338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8302A340;
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
	ctx.lr = 0x8302A354;
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
	// addi r4,r10,28920
	ctx.r4.s64 = ctx.r10.s64 + 28920;
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
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302A3B0"))) PPC_WEAK_FUNC(sub_8302A3B0);
PPC_FUNC_IMPL(__imp__sub_8302A3B0) {
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
	// bne cr6,0x8302a40c
	if (!cr6.eq) goto loc_8302A40C;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302a41c
	if (!cr6.eq) goto loc_8302A41C;
	// bl 0x82d17d90
	ctx.lr = 0x8302A3F0;
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
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x8302a41c
	goto loc_8302A41C;
loc_8302A40C:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8302a41c
	if (!cr6.eq) goto loc_8302A41C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302A41C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8302A428;
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

__attribute__((alias("__imp__sub_8302A440"))) PPC_WEAK_FUNC(sub_8302A440);
PPC_FUNC_IMPL(__imp__sub_8302A440) {
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
	// blt cr6,0x8302a464
	if (cr6.lt) goto loc_8302A464;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8302a468
	goto loc_8302A468;
loc_8302A464:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8302A468:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8302A480;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302a4a0
	if (cr6.eq) goto loc_8302A4A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8302a338
	ctx.lr = 0x8302A498;
	sub_8302A338(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302a4a4
	if (!cr6.eq) goto loc_8302A4A4;
loc_8302A4A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8302A4A4:
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

__attribute__((alias("__imp__sub_8302A4B8"))) PPC_WEAK_FUNC(sub_8302A4B8);
PPC_FUNC_IMPL(__imp__sub_8302A4B8) {
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
	ctx.lr = 0x8302A4C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8302A4D0;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302a530
	if (!cr6.eq) goto loc_8302A530;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// bl 0x837b0c10
	ctx.lr = 0x8302A4F0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A4FC;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8302a51c
	if (cr6.lt) goto loc_8302A51C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8302A51C;
	sub_825952B8(ctx, base);
loc_8302A51C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A530:
	// bl 0x831156e8
	ctx.lr = 0x8302A534;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302a578
	if (!cr6.eq) goto loc_8302A578;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x837b0c10
	ctx.lr = 0x8302A550;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A55C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A564;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A578:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8302aacc
	if (cr6.gt) goto loc_8302AACC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8302a918
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302A918;
	// bdzf 4*cr6+eq,0x8302a7cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302A7CC;
	// bdzf 4*cr6+eq,0x8302a81c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302A81C;
	// bdzf 4*cr6+eq,0x8302a87c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302A87C;
	// bdzf 4*cr6+eq,0x8302a918
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302A918;
	// bdzf 4*cr6+eq,0x8302a924
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8302A924;
	// bne cr6,0x8302a960
	if (!cr6.eq) goto loc_8302A960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8302A5B4;
	sub_82DAB6D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x8302A5C0;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307e040
	ctx.lr = 0x8302A5CC;
	sub_8307E040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4368
	ctx.lr = 0x8302A5D8;
	sub_82DA4368(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d97688
	ctx.lr = 0x8302A5E4;
	sub_82D97688(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,28
	ctx.r27.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// bl 0x825832d8
	ctx.lr = 0x8302A608;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302a624
	if (cr6.eq) goto loc_8302A624;
loc_8302A610:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A624:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// divw. r9,r10,r27
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8302a6d0
	if (cr0.eq) goto loc_8302A6D0;
loc_8302A640:
	// li r9,84
	ctx.r9.s64 = 84;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82d9a9f0
	ctx.lr = 0x8302A660;
	sub_82D9A9F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d97688
	ctx.lr = 0x8302A66C;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8302a6c8
	if (cr0.eq) goto loc_8302A6C8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x8302a6a4
	if (cr6.eq) goto loc_8302A6A4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x8302a6a8
	if (!cr6.eq) goto loc_8302A6A8;
loc_8302A6A4:
	// li r23,1
	ctx.r23.s64 = 1;
loc_8302A6A8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// blt cr6,0x8302a640
	if (cr6.lt) goto loc_8302A640;
	// b 0x8302a6d0
	goto loc_8302A6D0;
loc_8302A6C8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8302A6D0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r11,28828
	ctx.r30.s64 = ctx.r11.s64 + 28828;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-120
	ctx.r3.s64 = ctx.r30.s64 + -120;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x8302A6F0;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-354
	ctx.r4.s64 = ctx.r30.s64 + -354;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8302A700;
	sub_837B0C10(ctx, base);
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x8302a774
	if (!cr6.eq) goto loc_8302A774;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302a75c
	if (cr6.eq) goto loc_8302A75C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83161f10
	ctx.lr = 0x8302A72C;
	sub_83161F10(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8302a740
	if (!cr6.lt) goto loc_8302A740;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8302A740:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,511
	ctx.r4.u64 = ctx.r4.u64 | 511;
	// bl 0x82d042a8
	ctx.lr = 0x8302A750;
	sub_82D042A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A758;
	sub_8387E8E0(ctx, base);
	// b 0x8302a798
	goto loc_8302A798;
loc_8302A75C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,465
	ctx.r4.u64 = ctx.r4.u64 | 465;
	// bl 0x82d042a8
	ctx.lr = 0x8302A770;
	sub_82D042A8(ctx, base);
	// b 0x8302a798
	goto loc_8302A798;
loc_8302A774:
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8302a790
	if (cr6.eq) goto loc_8302A790;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
	// b 0x8302a794
	goto loc_8302A794;
loc_8302A790:
	// ori r4,r4,467
	ctx.r4.u64 = ctx.r4.u64 | 467;
loc_8302A794:
	// bl 0x82d042a8
	ctx.lr = 0x8302A798;
	sub_82D042A8(ctx, base);
loc_8302A798:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302A7A4;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302A7B0;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A7B8;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A7CC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// bl 0x837b0c10
	ctx.lr = 0x8302A7E0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8302A7EC;
	sub_82D894E0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A7F8;
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
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A81C:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82ddcec8
	ctx.lr = 0x8302A824;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8302a918
	if (cr6.eq) goto loc_8302A918;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302a854
	if (cr6.eq) goto loc_8302A854;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8302A84C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_8302A854:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8302a610
	if (!cr6.eq) goto loc_8302A610;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x8302A868;
	sub_82D26ED8(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x82d26b18
	ctx.lr = 0x8302A870;
	sub_82D26B18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A87C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,28828
	ctx.r30.s64 = ctx.r11.s64 + 28828;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,-84
	ctx.r3.s64 = ctx.r30.s64 + -84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8302A898;
	sub_82D2FA90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8302a8b4
	if (!cr6.eq) goto loc_8302A8B4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A8B4:
	// addi r4,r30,-353
	ctx.r4.s64 = ctx.r30.s64 + -353;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8302A8C0;
	sub_837B0C10(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8302a8e0
	if (!cr6.eq) goto loc_8302A8E0;
	// ori r4,r4,466
	ctx.r4.u64 = ctx.r4.u64 | 466;
	// b 0x8302a8e4
	goto loc_8302A8E4;
loc_8302A8E0:
	// ori r4,r4,468
	ctx.r4.u64 = ctx.r4.u64 | 468;
loc_8302A8E4:
	// bl 0x82d042a8
	ctx.lr = 0x8302A8E8;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x8302A8F4;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8302A900;
	sub_83103100(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r10.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x8302A918;
	sub_8387E8E0(ctx, base);
loc_8302A918:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A924:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x8302A938;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A944;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A94C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A960:
	// lbz r11,101(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302aa90
	if (cr6.eq) goto loc_8302AA90;
	// lbz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 102);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8302aa90
	if (cr6.eq) goto loc_8302AA90;
	// bl 0x82d86078
	ctx.lr = 0x8302A97C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8302aaf8
	if (cr6.eq) goto loc_8302AAF8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8302A98C;
	sub_82DAB6D0(ctx, base);
	// lwz r11,3500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3500);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8302aa54
	if (cr6.eq) goto loc_8302AA54;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8302aa18
	if (cr6.eq) goto loc_8302AA18;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// beq cr6,0x8302a9e4
	if (cr6.eq) goto loc_8302A9E4;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x8302A9BC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A9C8;
	sub_82E88020(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x8302A9D0;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302A9E4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8302A9F0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302A9FC;
	sub_82E88020(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x8302AA04;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302AA18:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8302AA2C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302AA38;
	sub_82E88020(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8302AA40;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302AA54:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x8302AA68;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302AA74;
	sub_82E88020(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x8302AA7C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302AA90:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8302AAA4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302AAB0;
	sub_82E88020(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x8302AAB8;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8302AACC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,28828
	ctx.r4.s64 = ctx.r11.s64 + 28828;
	// bl 0x837b0c10
	ctx.lr = 0x8302AADC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8302AAE8;
	sub_82E88020(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x8302AAF0;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
loc_8302AAF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

