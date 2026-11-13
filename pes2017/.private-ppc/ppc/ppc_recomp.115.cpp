#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A883E8"))) PPC_WEAK_FUNC(sub_82A883E8);
PPC_FUNC_IMPL(__imp__sub_82A883E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-3608
	ctx.r9.s64 = ctx.r11.s64 + -3608;
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
	// bl 0x82beb058
	ctx.lr = 0x82A88420;
	sub_82BEB058(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a88438
	if (cr6.eq) goto loc_82A88438;
	// bl 0x82416268
	ctx.lr = 0x82A88434;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A88438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A88450"))) PPC_WEAK_FUNC(sub_82A88450);
PPC_FUNC_IMPL(__imp__sub_82A88450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a88478
	if (cr6.lt) goto loc_82A88478;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a8847c
	goto loc_82A8847C;
loc_82A88478:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A8847C:
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
	ctx.lr = 0x82A88498;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a884b0
	if (cr6.eq) goto loc_82A884B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a88378
	ctx.lr = 0x82A884AC;
	sub_82A88378(ctx, base);
	// b 0x82a884b4
	goto loc_82A884B4;
loc_82A884B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A884B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A884CC"))) PPC_WEAK_FUNC(sub_82A884CC);
PPC_FUNC_IMPL(__imp__sub_82A884CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A884D0"))) PPC_WEAK_FUNC(sub_82A884D0);
PPC_FUNC_IMPL(__imp__sub_82A884D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A884D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x8376e978
	ctx.lr = 0x82A884F8;
	sub_8376E978(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a88524
	if (cr6.eq) goto loc_82A88524;
loc_82A88508:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82b399d8
	ctx.lr = 0x82A88514;
	sub_82B399D8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a88508
	if (!cr6.eq) goto loc_82A88508;
loc_82A88524:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r10,257
	ctx.r10.s64 = 257;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stb r9,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r9.u8);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x82be3ed0
	ctx.lr = 0x82A88574;
	sub_82BE3ED0(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82a88590
	if (cr6.eq) goto loc_82A88590;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b399d0
	ctx.lr = 0x82A88590;
	sub_82B399D0(ctx, base);
loc_82A88590:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a85ae8
	ctx.lr = 0x82A88598;
	sub_82A85AE8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a885b4
	if (cr6.eq) goto loc_82A885B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A885B4;
	sub_825952B8(ctx, base);
loc_82A885B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A885BC"))) PPC_WEAK_FUNC(sub_82A885BC);
PPC_FUNC_IMPL(__imp__sub_82A885BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A885C0"))) PPC_WEAK_FUNC(sub_82A885C0);
PPC_FUNC_IMPL(__imp__sub_82A885C0) {
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
	// bl 0x83824e88
	ctx.lr = 0x82A885DC;
	sub_83824E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a88600
	if (!cr6.eq) goto loc_82A88600;
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
loc_82A88600:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82a884d0
	ctx.lr = 0x82A88608;
	sub_82A884D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82b362c8
	ctx.lr = 0x82A88614;
	sub_82B362C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82A8861C;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a88644
	if (cr6.eq) goto loc_82A88644;
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r11,-24520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a88644
	if (cr6.eq) goto loc_82A88644;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82b363e8
	ctx.lr = 0x82A88644;
	sub_82B363E8(ctx, base);
loc_82A88644:
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

__attribute__((alias("__imp__sub_82A8865C"))) PPC_WEAK_FUNC(sub_82A8865C);
PPC_FUNC_IMPL(__imp__sub_82A8865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88660"))) PPC_WEAK_FUNC(sub_82A88660);
PPC_FUNC_IMPL(__imp__sub_82A88660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a886a0
	if (cr6.eq) goto loc_82A886A0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a886a0
	if (cr6.eq) goto loc_82A886A0;
	// lbz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a886a0
	if (!cr6.eq) goto loc_82A886A0;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82a8869c
	if (cr6.eq) goto loc_82A8869C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82a886a0
	if (!cr6.eq) goto loc_82A886A0;
loc_82A8869C:
	// b 0x837c9c48
	sub_837C9C48(ctx, base);
	return;
loc_82A886A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A886A8"))) PPC_WEAK_FUNC(sub_82A886A8);
PPC_FUNC_IMPL(__imp__sub_82A886A8) {
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
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,65
	ctx.r5.u64 = ctx.r5.u64 | 65;
	// bl 0x82d20eb8
	ctx.lr = 0x82A886C4;
	sub_82D20EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82A886D8"))) PPC_WEAK_FUNC(sub_82A886D8);
PPC_FUNC_IMPL(__imp__sub_82A886D8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,162
	ctx.r3.u64 = ctx.r3.u64 | 162;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A886E4"))) PPC_WEAK_FUNC(sub_82A886E4);
PPC_FUNC_IMPL(__imp__sub_82A886E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A886E8"))) PPC_WEAK_FUNC(sub_82A886E8);
PPC_FUNC_IMPL(__imp__sub_82A886E8) {
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
	// bl 0x82be0df0
	ctx.lr = 0x82A88700;
	sub_82BE0DF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A88720"))) PPC_WEAK_FUNC(sub_82A88720);
PPC_FUNC_IMPL(__imp__sub_82A88720) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// b 0x82d19858
	sub_82D19858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88730"))) PPC_WEAK_FUNC(sub_82A88730);
PPC_FUNC_IMPL(__imp__sub_82A88730) {
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
	// bl 0x82bda618
	ctx.lr = 0x82A88748;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a887e0
	if (cr6.eq) goto loc_82A887E0;
	// bl 0x83763ef8
	ctx.lr = 0x82A88758;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a887e0
	if (cr6.eq) goto loc_82A887E0;
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// bl 0x83777e50
	ctx.lr = 0x82A88774;
	sub_83777E50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A88780;
	sub_82BD9DB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bda020
	ctx.lr = 0x82A8878C;
	sub_82BDA020(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r11,187
	ctx.r9.u64 = ctx.r11.u64 | 187;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a887ac
	if (!cr6.eq) goto loc_82A887AC;
	// bl 0x82bd9fa8
	ctx.lr = 0x82A887A8;
	sub_82BD9FA8(ctx, base);
	// b 0x82a887b4
	goto loc_82A887B4;
loc_82A887AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bdc058
	ctx.lr = 0x82A887B4;
	sub_82BDC058(ctx, base);
loc_82A887B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bd9e08
	ctx.lr = 0x82A887D4;
	sub_82BD9E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A887E0;
	sub_82BD9DB8(ctx, base);
loc_82A887E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A887F8"))) PPC_WEAK_FUNC(sub_82A887F8);
PPC_FUNC_IMPL(__imp__sub_82A887F8) {
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
	// bl 0x82bda618
	ctx.lr = 0x82A8880C;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a888a4
	if (cr6.eq) goto loc_82A888A4;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a88844
	if (cr6.eq) goto loc_82A88844;
	// bl 0x837c9c08
	ctx.lr = 0x82A88828;
	sub_837C9C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a88844
	if (cr6.eq) goto loc_82A88844;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a88848
	if (cr6.eq) goto loc_82A88848;
loc_82A88844:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A88848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8889c
	if (cr6.eq) goto loc_82A8889C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a88878
	if (!cr6.eq) goto loc_82A88878;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82a88878
	if (cr6.lt) goto loc_82A88878;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a8887c
	if (!cr6.gt) goto loc_82A8887C;
loc_82A88878:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8887C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8889c
	if (cr6.eq) goto loc_82A8889C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88660
	ctx.lr = 0x82A88890;
	sub_82A88660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a888a4
	if (!cr6.eq) goto loc_82A888A4;
loc_82A8889C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a888a8
	goto loc_82A888A8;
loc_82A888A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A888A8:
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

__attribute__((alias("__imp__sub_82A888C0"))) PPC_WEAK_FUNC(sub_82A888C0);
PPC_FUNC_IMPL(__imp__sub_82A888C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2944
	ctx.r9.s64 = ctx.r11.s64 + -2944;
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
	// bl 0x82be10c0
	ctx.lr = 0x82A888F8;
	sub_82BE10C0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a88910
	if (cr6.eq) goto loc_82A88910;
	// bl 0x82416268
	ctx.lr = 0x82A8890C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A88910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A88928"))) PPC_WEAK_FUNC(sub_82A88928);
PPC_FUNC_IMPL(__imp__sub_82A88928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A88930;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82be1460
	ctx.lr = 0x82A8893C;
	sub_82BE1460(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r28,r31,120
	ctx.r28.s64 = ctx.r31.s64 + 120;
	// addi r9,r11,-2944
	ctx.r9.s64 = ctx.r11.s64 + -2944;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A88968;
	sub_831CDCF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x82A88988;
	sub_831156E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A88990;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a889fc
	if (cr6.eq) goto loc_82A889FC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82a889fc
	if (cr6.eq) goto loc_82A889FC;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a889c8
	if (cr6.eq) goto loc_82A889C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83115808
	ctx.lr = 0x82A889B8;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a889c8
	if (cr6.eq) goto loc_82A889C8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A889C8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a889fc
	if (cr6.eq) goto loc_82A889FC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 160);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A889E4;
	sub_83777E50(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r4,5
	ctx.r4.s64 = 5;
	// addis r3,r11,237
	ctx.r3.s64 = ctx.r11.s64 + 15532032;
	// addi r3,r3,19684
	ctx.r3.s64 = ctx.r3.s64 + 19684;
	// bl 0x83124f18
	ctx.lr = 0x82A889F8;
	sub_83124F18(ctx, base);
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
loc_82A889FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88A08"))) PPC_WEAK_FUNC(sub_82A88A08);
PPC_FUNC_IMPL(__imp__sub_82A88A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A88A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A88A1C;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a88b30
	if (cr6.eq) goto loc_82A88B30;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// ld r28,160(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// beq cr6,0x82a88a50
	if (cr6.eq) goto loc_82A88A50;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// stb r10,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r10.u8);
	// b 0x82a88b20
	goto loc_82A88B20;
loc_82A88A50:
	// bl 0x831156e8
	ctx.lr = 0x82A88A54;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addis r3,r10,237
	ctx.r3.s64 = ctx.r10.s64 + 15532032;
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r3,r3,19684
	ctx.r3.s64 = ctx.r3.s64 + 19684;
	// bl 0x83124ed0
	ctx.lr = 0x82A88A74;
	sub_83124ED0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x82A88A7C;
	sub_831156E8(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A88A90:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a88a90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A88A90;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311d1d0
	ctx.lr = 0x82A88AA4;
	sub_8311D1D0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A88AB4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a88ab4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A88AB4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A88ACC;
	sub_83777E50(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82A88AD0:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8373f6f0
	ctx.lr = 0x82A88AE0;
	sub_8373F6F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a88b10
	if (cr6.eq) goto loc_82A88B10;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a76558
	ctx.lr = 0x82A88B00;
	sub_82A76558(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x82A88B10;
	sub_825A10C0(ctx, base);
loc_82A88B10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(ctx.r31.u32, 128, xer);
	// blt cr6,0x82a88ad0
	if (cr6.lt) goto loc_82A88AD0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82A88B20:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777d88
	ctx.lr = 0x82A88B30;
	sub_83777D88(ctx, base);
loc_82A88B30:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88B38"))) PPC_WEAK_FUNC(sub_82A88B38);
PPC_FUNC_IMPL(__imp__sub_82A88B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a88b60
	if (cr6.lt) goto loc_82A88B60;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a88b64
	goto loc_82A88B64;
loc_82A88B60:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A88B64:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A88B80;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a88b98
	if (cr6.eq) goto loc_82A88B98;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a88928
	ctx.lr = 0x82A88B94;
	sub_82A88928(ctx, base);
	// b 0x82a88b9c
	goto loc_82A88B9C;
loc_82A88B98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A88B9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A88BB4"))) PPC_WEAK_FUNC(sub_82A88BB4);
PPC_FUNC_IMPL(__imp__sub_82A88BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88BB8"))) PPC_WEAK_FUNC(sub_82A88BB8);
PPC_FUNC_IMPL(__imp__sub_82A88BB8) {
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
	// bl 0x82a887f8
	ctx.lr = 0x82A88BD0;
	sub_82A887F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a88c1c
	if (!cr6.eq) goto loc_82A88C1C;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a88bf8
	if (!cr6.eq) goto loc_82A88BF8;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a88c1c
	if (cr6.eq) goto loc_82A88C1C;
loc_82A88BF8:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x82a88c1c
	if (cr6.lt) goto loc_82A88C1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88a08
	ctx.lr = 0x82A88C14;
	sub_82A88A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88730
	ctx.lr = 0x82A88C1C;
	sub_82A88730(ctx, base);
loc_82A88C1C:
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

__attribute__((alias("__imp__sub_82A88C30"))) PPC_WEAK_FUNC(sub_82A88C30);
PPC_FUNC_IMPL(__imp__sub_82A88C30) {
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
	// bl 0x82a88bb8
	ctx.lr = 0x82A88C48;
	sub_82A88BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a887f8
	ctx.lr = 0x82A88C50;
	sub_82A887F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a88ca4
	if (!cr6.eq) goto loc_82A88CA4;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a88ca4
	if (!cr6.eq) goto loc_82A88CA4;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a88ca4
	if (!cr6.eq) goto loc_82A88CA4;
	// bl 0x82bda618
	ctx.lr = 0x82A88C7C;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a88c8c
	if (cr6.eq) goto loc_82A88C8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
loc_82A88C8C:
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
loc_82A88CA4:
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

__attribute__((alias("__imp__sub_82A88CBC"))) PPC_WEAK_FUNC(sub_82A88CBC);
PPC_FUNC_IMPL(__imp__sub_82A88CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88CC0"))) PPC_WEAK_FUNC(sub_82A88CC0);
PPC_FUNC_IMPL(__imp__sub_82A88CC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a88bb8
	sub_82A88BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88CC4"))) PPC_WEAK_FUNC(sub_82A88CC4);
PPC_FUNC_IMPL(__imp__sub_82A88CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88CC8"))) PPC_WEAK_FUNC(sub_82A88CC8);
PPC_FUNC_IMPL(__imp__sub_82A88CC8) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bee188
	ctx.lr = 0x82A88CF0;
	sub_82BEE188(ctx, base);
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

__attribute__((alias("__imp__sub_82A88D08"))) PPC_WEAK_FUNC(sub_82A88D08);
PPC_FUNC_IMPL(__imp__sub_82A88D08) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A88D14"))) PPC_WEAK_FUNC(sub_82A88D14);
PPC_FUNC_IMPL(__imp__sub_82A88D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88D18"))) PPC_WEAK_FUNC(sub_82A88D18);
PPC_FUNC_IMPL(__imp__sub_82A88D18) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A88D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a88d68
	if (!cr6.lt) goto loc_82A88D68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2348
	ctx.r9.s64 = ctx.r11.s64 + -2348;
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
loc_82A88D68:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82A88D80"))) PPC_WEAK_FUNC(sub_82A88D80);
PPC_FUNC_IMPL(__imp__sub_82A88D80) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A88DA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a88dd0
	if (!cr6.lt) goto loc_82A88DD0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2324
	ctx.r9.s64 = ctx.r11.s64 + -2324;
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
loc_82A88DD0:
	// li r3,11
	ctx.r3.s64 = 11;
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

__attribute__((alias("__imp__sub_82A88DE8"))) PPC_WEAK_FUNC(sub_82A88DE8);
PPC_FUNC_IMPL(__imp__sub_82A88DE8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A88E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a88e38
	if (!cr6.lt) goto loc_82A88E38;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2336
	ctx.r9.s64 = ctx.r11.s64 + -2336;
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
loc_82A88E38:
	// li r3,128
	ctx.r3.s64 = 128;
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

__attribute__((alias("__imp__sub_82A88E50"))) PPC_WEAK_FUNC(sub_82A88E50);
PPC_FUNC_IMPL(__imp__sub_82A88E50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A88E74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a88ea0
	if (!cr6.lt) goto loc_82A88EA0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2312
	ctx.r9.s64 = ctx.r11.s64 + -2312;
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
loc_82A88EA0:
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
}

__attribute__((alias("__imp__sub_82A88EB8"))) PPC_WEAK_FUNC(sub_82A88EB8);
PPC_FUNC_IMPL(__imp__sub_82A88EB8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A88EDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a88efc
	if (!cr6.lt) goto loc_82A88EFC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31388
	ctx.r9.s64 = ctx.r11.s64 + -31388;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a88f04
	if (!cr6.eq) goto loc_82A88F04;
loc_82A88EFC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-2276
	ctx.r3.s64 = ctx.r11.s64 + -2276;
loc_82A88F04:
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

__attribute__((alias("__imp__sub_82A88F18"))) PPC_WEAK_FUNC(sub_82A88F18);
PPC_FUNC_IMPL(__imp__sub_82A88F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A88F20;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A88F44;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a88f80
	if (cr6.eq) goto loc_82A88F80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A88F5C;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2184
	ctx.r9.s64 = ctx.r11.s64 + -2184;
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
loc_82A88F80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88F8C"))) PPC_WEAK_FUNC(sub_82A88F8C);
PPC_FUNC_IMPL(__imp__sub_82A88F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88F90"))) PPC_WEAK_FUNC(sub_82A88F90);
PPC_FUNC_IMPL(__imp__sub_82A88F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2184
	ctx.r9.s64 = ctx.r11.s64 + -2184;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A88FC8;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a88fe0
	if (cr6.eq) goto loc_82A88FE0;
	// bl 0x82416268
	ctx.lr = 0x82A88FDC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A88FE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A88FF8"))) PPC_WEAK_FUNC(sub_82A88FF8);
PPC_FUNC_IMPL(__imp__sub_82A88FF8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a89044
	if (cr6.eq) goto loc_82A89044;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,83
	ctx.r5.s64 = 83;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x82a76558
	ctx.lr = 0x82A89028;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a89044
	if (cr6.eq) goto loc_82A89044;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a89048
	if (cr6.eq) goto loc_82A89048;
loc_82A89044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A89048:
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

__attribute__((alias("__imp__sub_82A8905C"))) PPC_WEAK_FUNC(sub_82A8905C);
PPC_FUNC_IMPL(__imp__sub_82A8905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89060"))) PPC_WEAK_FUNC(sub_82A89060);
PPC_FUNC_IMPL(__imp__sub_82A89060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a89070
	if (cr6.lt) goto loc_82A89070;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A89070:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a88f18
	sub_82A88F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89078"))) PPC_WEAK_FUNC(sub_82A89078);
PPC_FUNC_IMPL(__imp__sub_82A89078) {
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
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a890a4
	if (cr6.lt) goto loc_82A890A4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82a890a8
	goto loc_82A890A8;
loc_82A890A4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A890A8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// beq cr6,0x82a890c8
	if (cr6.eq) goto loc_82A890C8;
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
loc_82A890C8:
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82a890f4
	if (!cr6.eq) goto loc_82A890F4;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d042a8
	ctx.lr = 0x82A890E0;
	sub_82D042A8(ctx, base);
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
loc_82A890F4:
	// bl 0x82bf7018
	ctx.lr = 0x82A890F8;
	sub_82BF7018(ctx, base);
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

__attribute__((alias("__imp__sub_82A8910C"))) PPC_WEAK_FUNC(sub_82A8910C);
PPC_FUNC_IMPL(__imp__sub_82A8910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89110"))) PPC_WEAK_FUNC(sub_82A89110);
PPC_FUNC_IMPL(__imp__sub_82A89110) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,111
	ctx.r3.u64 = ctx.r3.u64 | 111;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8911C"))) PPC_WEAK_FUNC(sub_82A8911C);
PPC_FUNC_IMPL(__imp__sub_82A8911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89120"))) PPC_WEAK_FUNC(sub_82A89120);
PPC_FUNC_IMPL(__imp__sub_82A89120) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89168
	if (cr6.eq) goto loc_82A89168;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82A89168:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r9,r11,-31120
	ctx.r9.s64 = ctx.r11.s64 + -31120;
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

__attribute__((alias("__imp__sub_82A8918C"))) PPC_WEAK_FUNC(sub_82A8918C);
PPC_FUNC_IMPL(__imp__sub_82A8918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89190"))) PPC_WEAK_FUNC(sub_82A89190);
PPC_FUNC_IMPL(__imp__sub_82A89190) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A891B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a891d8
	if (cr6.eq) goto loc_82A891D8;
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_82A891D8:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-31120
	ctx.r11.s64 = ctx.r11.s64 + -31120;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82A89200"))) PPC_WEAK_FUNC(sub_82A89200);
PPC_FUNC_IMPL(__imp__sub_82A89200) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89224;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89248
	if (cr6.eq) goto loc_82A89248;
	// li r3,128
	ctx.r3.s64 = 128;
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
loc_82A89248:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-31120
	ctx.r11.s64 = ctx.r11.s64 + -31120;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82A89270"))) PPC_WEAK_FUNC(sub_82A89270);
PPC_FUNC_IMPL(__imp__sub_82A89270) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a8929c
	if (!cr6.eq) goto loc_82A8929C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a89334
	goto loc_82A89334;
loc_82A8929C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A892B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a892cc
	if (cr6.eq) goto loc_82A892CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a89334
	goto loc_82A89334;
loc_82A892CC:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// addi r11,r11,-31120
	ctx.r11.s64 = ctx.r11.s64 + -31120;
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// subfc r5,r9,r6
	xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bne cr6,0x82a89334
	if (!cr6.eq) goto loc_82A89334;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-18360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6472);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82A89334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8934C"))) PPC_WEAK_FUNC(sub_82A8934C);
PPC_FUNC_IMPL(__imp__sub_82A8934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89350"))) PPC_WEAK_FUNC(sub_82A89350);
PPC_FUNC_IMPL(__imp__sub_82A89350) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89398
	if (cr6.eq) goto loc_82A89398;
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
loc_82A89398:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-31120
	ctx.r11.s64 = ctx.r11.s64 + -31120;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
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

__attribute__((alias("__imp__sub_82A893C0"))) PPC_WEAK_FUNC(sub_82A893C0);
PPC_FUNC_IMPL(__imp__sub_82A893C0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A893E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a89408
	if (!cr6.lt) goto loc_82A89408;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-31120
	ctx.r11.s64 = ctx.r11.s64 + -31120;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a89410
	if (!cr6.eq) goto loc_82A89410;
loc_82A89408:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-1512
	ctx.r3.s64 = ctx.r11.s64 + -1512;
loc_82A89410:
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

__attribute__((alias("__imp__sub_82A89424"))) PPC_WEAK_FUNC(sub_82A89424);
PPC_FUNC_IMPL(__imp__sub_82A89424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89428"))) PPC_WEAK_FUNC(sub_82A89428);
PPC_FUNC_IMPL(__imp__sub_82A89428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A89430;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A89454;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a89490
	if (cr6.eq) goto loc_82A89490;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A8946C;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1424
	ctx.r9.s64 = ctx.r11.s64 + -1424;
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
loc_82A89490:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8949C"))) PPC_WEAK_FUNC(sub_82A8949C);
PPC_FUNC_IMPL(__imp__sub_82A8949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A894A0"))) PPC_WEAK_FUNC(sub_82A894A0);
PPC_FUNC_IMPL(__imp__sub_82A894A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1424
	ctx.r9.s64 = ctx.r11.s64 + -1424;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A894D8;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a894f0
	if (cr6.eq) goto loc_82A894F0;
	// bl 0x82416268
	ctx.lr = 0x82A894EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A894F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89508"))) PPC_WEAK_FUNC(sub_82A89508);
PPC_FUNC_IMPL(__imp__sub_82A89508) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bne cr6,0x82a89534
	if (!cr6.eq) goto loc_82A89534;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x825a10c0
	ctx.lr = 0x82A89534;
	sub_825A10C0(ctx, base);
loc_82A89534:
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

__attribute__((alias("__imp__sub_82A8954C"))) PPC_WEAK_FUNC(sub_82A8954C);
PPC_FUNC_IMPL(__imp__sub_82A8954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89550"))) PPC_WEAK_FUNC(sub_82A89550);
PPC_FUNC_IMPL(__imp__sub_82A89550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a89560
	if (cr6.lt) goto loc_82A89560;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A89560:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a89428
	sub_82A89428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89568"))) PPC_WEAK_FUNC(sub_82A89568);
PPC_FUNC_IMPL(__imp__sub_82A89568) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,109
	ctx.r3.u64 = ctx.r3.u64 | 109;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89574"))) PPC_WEAK_FUNC(sub_82A89574);
PPC_FUNC_IMPL(__imp__sub_82A89574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89578"))) PPC_WEAK_FUNC(sub_82A89578);
PPC_FUNC_IMPL(__imp__sub_82A89578) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8959C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a895c0
	if (cr6.eq) goto loc_82A895C0;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82A895C0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r9,r11,-30792
	ctx.r9.s64 = ctx.r11.s64 + -30792;
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

__attribute__((alias("__imp__sub_82A895E4"))) PPC_WEAK_FUNC(sub_82A895E4);
PPC_FUNC_IMPL(__imp__sub_82A895E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A895E8"))) PPC_WEAK_FUNC(sub_82A895E8);
PPC_FUNC_IMPL(__imp__sub_82A895E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8960C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89630
	if (cr6.eq) goto loc_82A89630;
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_82A89630:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30792
	ctx.r11.s64 = ctx.r11.s64 + -30792;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82A89658"))) PPC_WEAK_FUNC(sub_82A89658);
PPC_FUNC_IMPL(__imp__sub_82A89658) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8967C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a896a0
	if (cr6.eq) goto loc_82A896A0;
	// li r3,128
	ctx.r3.s64 = 128;
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
loc_82A896A0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30792
	ctx.r11.s64 = ctx.r11.s64 + -30792;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82A896C8"))) PPC_WEAK_FUNC(sub_82A896C8);
PPC_FUNC_IMPL(__imp__sub_82A896C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a896f4
	if (!cr6.eq) goto loc_82A896F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a89760
	goto loc_82A89760;
loc_82A896F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89724
	if (cr6.eq) goto loc_82A89724;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a89760
	goto loc_82A89760;
loc_82A89724:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// addi r11,r11,-30792
	ctx.r11.s64 = ctx.r11.s64 + -30792;
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// subfc r5,r9,r6
	xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A89760:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89778"))) PPC_WEAK_FUNC(sub_82A89778);
PPC_FUNC_IMPL(__imp__sub_82A89778) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8979C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a897c0
	if (cr6.eq) goto loc_82A897C0;
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
loc_82A897C0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30792
	ctx.r11.s64 = ctx.r11.s64 + -30792;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
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

__attribute__((alias("__imp__sub_82A897E8"))) PPC_WEAK_FUNC(sub_82A897E8);
PPC_FUNC_IMPL(__imp__sub_82A897E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8980C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a89830
	if (!cr6.lt) goto loc_82A89830;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30792
	ctx.r11.s64 = ctx.r11.s64 + -30792;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a89838
	if (!cr6.eq) goto loc_82A89838;
loc_82A89830:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-756
	ctx.r3.s64 = ctx.r11.s64 + -756;
loc_82A89838:
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

__attribute__((alias("__imp__sub_82A8984C"))) PPC_WEAK_FUNC(sub_82A8984C);
PPC_FUNC_IMPL(__imp__sub_82A8984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89850"))) PPC_WEAK_FUNC(sub_82A89850);
PPC_FUNC_IMPL(__imp__sub_82A89850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A89858;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8987C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a898b8
	if (cr6.eq) goto loc_82A898B8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A89894;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-664
	ctx.r9.s64 = ctx.r11.s64 + -664;
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
loc_82A898B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A898C4"))) PPC_WEAK_FUNC(sub_82A898C4);
PPC_FUNC_IMPL(__imp__sub_82A898C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A898C8"))) PPC_WEAK_FUNC(sub_82A898C8);
PPC_FUNC_IMPL(__imp__sub_82A898C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-664
	ctx.r9.s64 = ctx.r11.s64 + -664;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A89900;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a89918
	if (cr6.eq) goto loc_82A89918;
	// bl 0x82416268
	ctx.lr = 0x82A89914;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A89918:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89930"))) PPC_WEAK_FUNC(sub_82A89930);
PPC_FUNC_IMPL(__imp__sub_82A89930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a89940
	if (cr6.lt) goto loc_82A89940;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A89940:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a89850
	sub_82A89850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89948"))) PPC_WEAK_FUNC(sub_82A89948);
PPC_FUNC_IMPL(__imp__sub_82A89948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89954"))) PPC_WEAK_FUNC(sub_82A89954);
PPC_FUNC_IMPL(__imp__sub_82A89954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89958"))) PPC_WEAK_FUNC(sub_82A89958);
PPC_FUNC_IMPL(__imp__sub_82A89958) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,204
	ctx.r3.u64 = ctx.r3.u64 | 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89964"))) PPC_WEAK_FUNC(sub_82A89964);
PPC_FUNC_IMPL(__imp__sub_82A89964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89968"))) PPC_WEAK_FUNC(sub_82A89968);
PPC_FUNC_IMPL(__imp__sub_82A89968) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8998C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a899b8
	if (!cr6.lt) goto loc_82A899B8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
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
loc_82A899B8:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82A899D0"))) PPC_WEAK_FUNC(sub_82A899D0);
PPC_FUNC_IMPL(__imp__sub_82A899D0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A899F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a89a20
	if (!cr6.lt) goto loc_82A89A20;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
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
loc_82A89A20:
	// li r3,11
	ctx.r3.s64 = 11;
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

__attribute__((alias("__imp__sub_82A89A38"))) PPC_WEAK_FUNC(sub_82A89A38);
PPC_FUNC_IMPL(__imp__sub_82A89A38) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89A5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89a80
	if (cr6.eq) goto loc_82A89A80;
	// li r3,128
	ctx.r3.s64 = 128;
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
loc_82A89A80:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
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

__attribute__((alias("__imp__sub_82A89AA4"))) PPC_WEAK_FUNC(sub_82A89AA4);
PPC_FUNC_IMPL(__imp__sub_82A89AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89AA8"))) PPC_WEAK_FUNC(sub_82A89AA8);
PPC_FUNC_IMPL(__imp__sub_82A89AA8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a89ad4
	if (!cr6.eq) goto loc_82A89AD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a89b80
	goto loc_82A89B80;
loc_82A89AD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89AE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89b04
	if (cr6.eq) goto loc_82A89B04;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a89b80
	goto loc_82A89B80;
loc_82A89B04:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// bne cr6,0x82a89b28
	if (!cr6.eq) goto loc_82A89B28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a89b30
	goto loc_82A89B30;
loc_82A89B28:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lfs f0,-30592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30592);
	ctx.f0.f64 = double(temp.f32);
loc_82A89B30:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r10,504
	ctx.r11.s64 = ctx.r10.s64 + 504;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lfs f0,8976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfsx f11,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfsx f9,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82A89B80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89B98"))) PPC_WEAK_FUNC(sub_82A89B98);
PPC_FUNC_IMPL(__imp__sub_82A89B98) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a89be8
	if (!cr6.lt) goto loc_82A89BE8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
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
loc_82A89BE8:
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
}

__attribute__((alias("__imp__sub_82A89C00"))) PPC_WEAK_FUNC(sub_82A89C00);
PPC_FUNC_IMPL(__imp__sub_82A89C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A89C08;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A89C2C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a89c68
	if (cr6.eq) goto loc_82A89C68;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A89C44;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,120
	ctx.r9.s64 = ctx.r11.s64 + 120;
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
loc_82A89C68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89C74"))) PPC_WEAK_FUNC(sub_82A89C74);
PPC_FUNC_IMPL(__imp__sub_82A89C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89C78"))) PPC_WEAK_FUNC(sub_82A89C78);
PPC_FUNC_IMPL(__imp__sub_82A89C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,120
	ctx.r9.s64 = ctx.r11.s64 + 120;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A89CB0;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a89cc8
	if (cr6.eq) goto loc_82A89CC8;
	// bl 0x82416268
	ctx.lr = 0x82A89CC4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A89CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89CE0"))) PPC_WEAK_FUNC(sub_82A89CE0);
PPC_FUNC_IMPL(__imp__sub_82A89CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a89cf0
	if (cr6.lt) goto loc_82A89CF0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A89CF0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a89c00
	sub_82A89C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89CF8"))) PPC_WEAK_FUNC(sub_82A89CF8);
PPC_FUNC_IMPL(__imp__sub_82A89CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,89
	ctx.r3.u64 = ctx.r3.u64 | 89;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89D04"))) PPC_WEAK_FUNC(sub_82A89D04);
PPC_FUNC_IMPL(__imp__sub_82A89D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89D08"))) PPC_WEAK_FUNC(sub_82A89D08);
PPC_FUNC_IMPL(__imp__sub_82A89D08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89D2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89d50
	if (cr6.eq) goto loc_82A89D50;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82A89D50:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r9,r11,-30336
	ctx.r9.s64 = ctx.r11.s64 + -30336;
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

__attribute__((alias("__imp__sub_82A89D74"))) PPC_WEAK_FUNC(sub_82A89D74);
PPC_FUNC_IMPL(__imp__sub_82A89D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89D78"))) PPC_WEAK_FUNC(sub_82A89D78);
PPC_FUNC_IMPL(__imp__sub_82A89D78) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89D9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89dc0
	if (cr6.eq) goto loc_82A89DC0;
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_82A89DC0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30336
	ctx.r11.s64 = ctx.r11.s64 + -30336;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82A89DE8"))) PPC_WEAK_FUNC(sub_82A89DE8);
PPC_FUNC_IMPL(__imp__sub_82A89DE8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89e30
	if (cr6.eq) goto loc_82A89E30;
	// li r3,128
	ctx.r3.s64 = 128;
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
loc_82A89E30:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30336
	ctx.r11.s64 = ctx.r11.s64 + -30336;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82A89E58"))) PPC_WEAK_FUNC(sub_82A89E58);
PPC_FUNC_IMPL(__imp__sub_82A89E58) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a89e84
	if (!cr6.eq) goto loc_82A89E84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a89ef0
	goto loc_82A89EF0;
loc_82A89E84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89E98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89eb4
	if (cr6.eq) goto loc_82A89EB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a89ef0
	goto loc_82A89EF0;
loc_82A89EB4:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// addi r11,r11,-30336
	ctx.r11.s64 = ctx.r11.s64 + -30336;
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// subfc r5,r9,r6
	xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A89EF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A89F08"))) PPC_WEAK_FUNC(sub_82A89F08);
PPC_FUNC_IMPL(__imp__sub_82A89F08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89F2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a89f50
	if (cr6.eq) goto loc_82A89F50;
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
loc_82A89F50:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30336
	ctx.r11.s64 = ctx.r11.s64 + -30336;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
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

__attribute__((alias("__imp__sub_82A89F78"))) PPC_WEAK_FUNC(sub_82A89F78);
PPC_FUNC_IMPL(__imp__sub_82A89F78) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A89F9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a89fc0
	if (!cr6.lt) goto loc_82A89FC0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-30336
	ctx.r11.s64 = ctx.r11.s64 + -30336;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a89fc8
	if (!cr6.eq) goto loc_82A89FC8;
loc_82A89FC0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
loc_82A89FC8:
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

__attribute__((alias("__imp__sub_82A89FDC"))) PPC_WEAK_FUNC(sub_82A89FDC);
PPC_FUNC_IMPL(__imp__sub_82A89FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89FE0"))) PPC_WEAK_FUNC(sub_82A89FE0);
PPC_FUNC_IMPL(__imp__sub_82A89FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A89FE8;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8A00C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8a048
	if (cr6.eq) goto loc_82A8A048;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A8A024;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,936
	ctx.r9.s64 = ctx.r11.s64 + 936;
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
loc_82A8A048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A054"))) PPC_WEAK_FUNC(sub_82A8A054);
PPC_FUNC_IMPL(__imp__sub_82A8A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A058"))) PPC_WEAK_FUNC(sub_82A8A058);
PPC_FUNC_IMPL(__imp__sub_82A8A058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,936
	ctx.r9.s64 = ctx.r11.s64 + 936;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A8A090;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a8a0a8
	if (cr6.eq) goto loc_82A8A0A8;
	// bl 0x82416268
	ctx.lr = 0x82A8A0A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8A0A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A0C0"))) PPC_WEAK_FUNC(sub_82A8A0C0);
PPC_FUNC_IMPL(__imp__sub_82A8A0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8a0d0
	if (cr6.lt) goto loc_82A8A0D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A8A0D0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a89fe0
	sub_82A89FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A0D8"))) PPC_WEAK_FUNC(sub_82A8A0D8);
PPC_FUNC_IMPL(__imp__sub_82A8A0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,453
	ctx.r3.u64 = ctx.r3.u64 | 453;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A0E4"))) PPC_WEAK_FUNC(sub_82A8A0E4);
PPC_FUNC_IMPL(__imp__sub_82A8A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A0E8"))) PPC_WEAK_FUNC(sub_82A8A0E8);
PPC_FUNC_IMPL(__imp__sub_82A8A0E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A10C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a130
	if (cr6.eq) goto loc_82A8A130;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82A8A130:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1588
	ctx.r9.s64 = ctx.r11.s64 + 1588;
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

__attribute__((alias("__imp__sub_82A8A154"))) PPC_WEAK_FUNC(sub_82A8A154);
PPC_FUNC_IMPL(__imp__sub_82A8A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A158"))) PPC_WEAK_FUNC(sub_82A8A158);
PPC_FUNC_IMPL(__imp__sub_82A8A158) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A17C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a1a0
	if (cr6.eq) goto loc_82A8A1A0;
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_82A8A1A0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1720
	ctx.r9.s64 = ctx.r11.s64 + 1720;
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

__attribute__((alias("__imp__sub_82A8A1C4"))) PPC_WEAK_FUNC(sub_82A8A1C4);
PPC_FUNC_IMPL(__imp__sub_82A8A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A1C8"))) PPC_WEAK_FUNC(sub_82A8A1C8);
PPC_FUNC_IMPL(__imp__sub_82A8A1C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A1EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a210
	if (cr6.eq) goto loc_82A8A210;
	// li r3,128
	ctx.r3.s64 = 128;
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
loc_82A8A210:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1632
	ctx.r9.s64 = ctx.r11.s64 + 1632;
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

__attribute__((alias("__imp__sub_82A8A234"))) PPC_WEAK_FUNC(sub_82A8A234);
PPC_FUNC_IMPL(__imp__sub_82A8A234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A238"))) PPC_WEAK_FUNC(sub_82A8A238);
PPC_FUNC_IMPL(__imp__sub_82A8A238) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a8a264
	if (!cr6.eq) goto loc_82A8A264;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a8a2d0
	goto loc_82A8A2D0;
loc_82A8A264:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a294
	if (cr6.eq) goto loc_82A8A294;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a8a2d0
	goto loc_82A8A2D0;
loc_82A8A294:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1676
	ctx.r9.s64 = ctx.r11.s64 + 1676;
	// li r8,31
	ctx.r8.s64 = 31;
	// lis r7,-31762
	ctx.r7.s64 = -2081554432;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r7,-28040
	ctx.r6.s64 = ctx.r7.s64 + -28040;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subfc r4,r8,r5
	xer.ca = ctx.r5.u32 >= ctx.r8.u32;
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A8A2D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A2E8"))) PPC_WEAK_FUNC(sub_82A8A2E8);
PPC_FUNC_IMPL(__imp__sub_82A8A2E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A30C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a330
	if (cr6.eq) goto loc_82A8A330;
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
loc_82A8A330:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1764
	ctx.r9.s64 = ctx.r11.s64 + 1764;
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

__attribute__((alias("__imp__sub_82A8A354"))) PPC_WEAK_FUNC(sub_82A8A354);
PPC_FUNC_IMPL(__imp__sub_82A8A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A358"))) PPC_WEAK_FUNC(sub_82A8A358);
PPC_FUNC_IMPL(__imp__sub_82A8A358) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A37C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a8a3a0
	if (!cr6.eq) goto loc_82A8A3A0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-29888
	ctx.r9.s64 = ctx.r11.s64 + -29888;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8a3a8
	if (!cr6.eq) goto loc_82A8A3A8;
loc_82A8A3A0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,1840
	ctx.r3.s64 = ctx.r11.s64 + 1840;
loc_82A8A3A8:
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

__attribute__((alias("__imp__sub_82A8A3BC"))) PPC_WEAK_FUNC(sub_82A8A3BC);
PPC_FUNC_IMPL(__imp__sub_82A8A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A3C0"))) PPC_WEAK_FUNC(sub_82A8A3C0);
PPC_FUNC_IMPL(__imp__sub_82A8A3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x82a8a3f0
	if (!cr6.eq) goto loc_82A8A3F0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82A8A3F0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A3F8"))) PPC_WEAK_FUNC(sub_82A8A3F8);
PPC_FUNC_IMPL(__imp__sub_82A8A3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x82a8a428
	if (!cr6.eq) goto loc_82A8A428;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82A8A428:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A430"))) PPC_WEAK_FUNC(sub_82A8A430);
PPC_FUNC_IMPL(__imp__sub_82A8A430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// beq cr6,0x82a8a458
	if (cr6.eq) goto loc_82A8A458;
loc_82A8A444:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A8A458:
	// lis r11,35
	ctx.r11.s64 = 2293760;
	// lis r10,35
	ctx.r10.s64 = 2293760;
	// lis r9,35
	ctx.r9.s64 = 2293760;
	// ori r8,r11,485
	ctx.r8.u64 = ctx.r11.u64 | 485;
	// ori r7,r10,275
	ctx.r7.u64 = ctx.r10.u64 | 275;
	// ori r5,r9,486
	ctx.r5.u64 = ctx.r9.u64 | 486;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bge cr6,0x82a8a444
	if (!cr6.lt) goto loc_82A8A444;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d04220
	ctx.lr = 0x82A8A498;
	sub_82D04220(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A4AC"))) PPC_WEAK_FUNC(sub_82A8A4AC);
PPC_FUNC_IMPL(__imp__sub_82A8A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A4B0"))) PPC_WEAK_FUNC(sub_82A8A4B0);
PPC_FUNC_IMPL(__imp__sub_82A8A4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8A4B8;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8A4DC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8a518
	if (cr6.eq) goto loc_82A8A518;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A8A4F4;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,1928
	ctx.r9.s64 = ctx.r11.s64 + 1928;
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
loc_82A8A518:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A524"))) PPC_WEAK_FUNC(sub_82A8A524);
PPC_FUNC_IMPL(__imp__sub_82A8A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A528"))) PPC_WEAK_FUNC(sub_82A8A528);
PPC_FUNC_IMPL(__imp__sub_82A8A528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,1928
	ctx.r9.s64 = ctx.r11.s64 + 1928;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A8A560;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a8a578
	if (cr6.eq) goto loc_82A8A578;
	// bl 0x82416268
	ctx.lr = 0x82A8A574;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8A578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A590"))) PPC_WEAK_FUNC(sub_82A8A590);
PPC_FUNC_IMPL(__imp__sub_82A8A590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8a5a0
	if (cr6.lt) goto loc_82A8A5A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A8A5A0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a8a4b0
	sub_82A8A4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A5A8"))) PPC_WEAK_FUNC(sub_82A8A5A8);
PPC_FUNC_IMPL(__imp__sub_82A8A5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,456
	ctx.r3.u64 = ctx.r3.u64 | 456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A5B4"))) PPC_WEAK_FUNC(sub_82A8A5B4);
PPC_FUNC_IMPL(__imp__sub_82A8A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A5B8"))) PPC_WEAK_FUNC(sub_82A8A5B8);
PPC_FUNC_IMPL(__imp__sub_82A8A5B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A5DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a600
	if (cr6.eq) goto loc_82A8A600;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82A8A600:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r9,r11,-29584
	ctx.r9.s64 = ctx.r11.s64 + -29584;
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

__attribute__((alias("__imp__sub_82A8A624"))) PPC_WEAK_FUNC(sub_82A8A624);
PPC_FUNC_IMPL(__imp__sub_82A8A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A628"))) PPC_WEAK_FUNC(sub_82A8A628);
PPC_FUNC_IMPL(__imp__sub_82A8A628) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a670
	if (cr6.eq) goto loc_82A8A670;
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_82A8A670:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82A8A698"))) PPC_WEAK_FUNC(sub_82A8A698);
PPC_FUNC_IMPL(__imp__sub_82A8A698) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A6BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a6e0
	if (cr6.eq) goto loc_82A8A6E0;
	// li r3,128
	ctx.r3.s64 = 128;
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
loc_82A8A6E0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82A8A708"))) PPC_WEAK_FUNC(sub_82A8A708);
PPC_FUNC_IMPL(__imp__sub_82A8A708) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a8a734
	if (!cr6.eq) goto loc_82A8A734;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a8a7a0
	goto loc_82A8A7A0;
loc_82A8A734:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a764
	if (cr6.eq) goto loc_82A8A764;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a8a7a0
	goto loc_82A8A7A0;
loc_82A8A764:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// subfc r5,r9,r6
	xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A8A7A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A7B8"))) PPC_WEAK_FUNC(sub_82A8A7B8);
PPC_FUNC_IMPL(__imp__sub_82A8A7B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A7DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a8a800
	if (cr6.eq) goto loc_82A8A800;
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
loc_82A8A800:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
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

__attribute__((alias("__imp__sub_82A8A828"))) PPC_WEAK_FUNC(sub_82A8A828);
PPC_FUNC_IMPL(__imp__sub_82A8A828) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8A84C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82a8a870
	if (!cr6.lt) goto loc_82A8A870;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8a878
	if (!cr6.eq) goto loc_82A8A878;
loc_82A8A870:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,2596
	ctx.r3.s64 = ctx.r11.s64 + 2596;
loc_82A8A878:
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

__attribute__((alias("__imp__sub_82A8A88C"))) PPC_WEAK_FUNC(sub_82A8A88C);
PPC_FUNC_IMPL(__imp__sub_82A8A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A890"))) PPC_WEAK_FUNC(sub_82A8A890);
PPC_FUNC_IMPL(__imp__sub_82A8A890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A8A4"))) PPC_WEAK_FUNC(sub_82A8A8A4);
PPC_FUNC_IMPL(__imp__sub_82A8A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A8A8"))) PPC_WEAK_FUNC(sub_82A8A8A8);
PPC_FUNC_IMPL(__imp__sub_82A8A8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8A8B0;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8A8D4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8a910
	if (cr6.eq) goto loc_82A8A910;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A8A8EC;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,2688
	ctx.r9.s64 = ctx.r11.s64 + 2688;
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
loc_82A8A910:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A91C"))) PPC_WEAK_FUNC(sub_82A8A91C);
PPC_FUNC_IMPL(__imp__sub_82A8A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A920"))) PPC_WEAK_FUNC(sub_82A8A920);
PPC_FUNC_IMPL(__imp__sub_82A8A920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,2688
	ctx.r9.s64 = ctx.r11.s64 + 2688;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A8A958;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a8a970
	if (cr6.eq) goto loc_82A8A970;
	// bl 0x82416268
	ctx.lr = 0x82A8A96C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8A970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8A988"))) PPC_WEAK_FUNC(sub_82A8A988);
PPC_FUNC_IMPL(__imp__sub_82A8A988) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x82a8a9b4
	if (cr6.eq) goto loc_82A8A9B4;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bne cr6,0x82a8a9c4
	if (!cr6.eq) goto loc_82A8A9C4;
	// li r5,37
	ctx.r5.s64 = 37;
	// b 0x82a8a9b8
	goto loc_82A8A9B8;
loc_82A8A9B4:
	// li r5,40
	ctx.r5.s64 = 40;
loc_82A8A9B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x825a10c0
	ctx.lr = 0x82A8A9C4;
	sub_825A10C0(ctx, base);
loc_82A8A9C4:
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

__attribute__((alias("__imp__sub_82A8A9DC"))) PPC_WEAK_FUNC(sub_82A8A9DC);
PPC_FUNC_IMPL(__imp__sub_82A8A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A9E0"))) PPC_WEAK_FUNC(sub_82A8A9E0);
PPC_FUNC_IMPL(__imp__sub_82A8A9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8a9f0
	if (cr6.lt) goto loc_82A8A9F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A8A9F0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a8a8a8
	sub_82A8A8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A9F8"))) PPC_WEAK_FUNC(sub_82A8A9F8);
PPC_FUNC_IMPL(__imp__sub_82A8A9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,451
	ctx.r3.u64 = ctx.r3.u64 | 451;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8AA04"))) PPC_WEAK_FUNC(sub_82A8AA04);
PPC_FUNC_IMPL(__imp__sub_82A8AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AA08"))) PPC_WEAK_FUNC(sub_82A8AA08);
PPC_FUNC_IMPL(__imp__sub_82A8AA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82a8aa24
	if (!cr6.lt) goto loc_82A8AA24;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,3340
	ctx.r9.s64 = ctx.r11.s64 + 3340;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82A8AA24:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8AA2C"))) PPC_WEAK_FUNC(sub_82A8AA2C);
PPC_FUNC_IMPL(__imp__sub_82A8AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AA30"))) PPC_WEAK_FUNC(sub_82A8AA30);
PPC_FUNC_IMPL(__imp__sub_82A8AA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82a8aa4c
	if (!cr6.lt) goto loc_82A8AA4C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,3388
	ctx.r9.s64 = ctx.r11.s64 + 3388;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82A8AA4C:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8AA54"))) PPC_WEAK_FUNC(sub_82A8AA54);
PPC_FUNC_IMPL(__imp__sub_82A8AA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AA58"))) PPC_WEAK_FUNC(sub_82A8AA58);
PPC_FUNC_IMPL(__imp__sub_82A8AA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82a8aa74
	if (!cr6.lt) goto loc_82A8AA74;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,3364
	ctx.r9.s64 = ctx.r11.s64 + 3364;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82A8AA74:
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8AA7C"))) PPC_WEAK_FUNC(sub_82A8AA7C);
PPC_FUNC_IMPL(__imp__sub_82A8AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AA80"))) PPC_WEAK_FUNC(sub_82A8AA80);
PPC_FUNC_IMPL(__imp__sub_82A8AA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82a8aa9c
	if (!cr6.lt) goto loc_82A8AA9C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,3412
	ctx.r9.s64 = ctx.r11.s64 + 3412;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82A8AA9C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8AAA4"))) PPC_WEAK_FUNC(sub_82A8AAA4);
PPC_FUNC_IMPL(__imp__sub_82A8AAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AAA8"))) PPC_WEAK_FUNC(sub_82A8AAA8);
PPC_FUNC_IMPL(__imp__sub_82A8AAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82a8aac8
	if (!cr6.lt) goto loc_82A8AAC8;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-29360
	ctx.r9.s64 = ctx.r11.s64 + -29360;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A8AAC8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,3448
	ctx.r3.s64 = ctx.r11.s64 + 3448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8AAD4"))) PPC_WEAK_FUNC(sub_82A8AAD4);
PPC_FUNC_IMPL(__imp__sub_82A8AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AAD8"))) PPC_WEAK_FUNC(sub_82A8AAD8);
PPC_FUNC_IMPL(__imp__sub_82A8AAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8AAE0;
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
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8AB04;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ab40
	if (cr6.eq) goto loc_82A8AB40;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf6848
	ctx.lr = 0x82A8AB1C;
	sub_82BF6848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,3536
	ctx.r9.s64 = ctx.r11.s64 + 3536;
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
loc_82A8AB40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8AB4C"))) PPC_WEAK_FUNC(sub_82A8AB4C);
PPC_FUNC_IMPL(__imp__sub_82A8AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AB50"))) PPC_WEAK_FUNC(sub_82A8AB50);
PPC_FUNC_IMPL(__imp__sub_82A8AB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,3536
	ctx.r9.s64 = ctx.r11.s64 + 3536;
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
	// bl 0x82bf6478
	ctx.lr = 0x82A8AB88;
	sub_82BF6478(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a8aba0
	if (cr6.eq) goto loc_82A8ABA0;
	// bl 0x82416268
	ctx.lr = 0x82A8AB9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8ABA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8ABB8"))) PPC_WEAK_FUNC(sub_82A8ABB8);
PPC_FUNC_IMPL(__imp__sub_82A8ABB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8abc8
	if (cr6.lt) goto loc_82A8ABC8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A8ABC8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a8aad8
	sub_82A8AAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8ABD0"))) PPC_WEAK_FUNC(sub_82A8ABD0);
PPC_FUNC_IMPL(__imp__sub_82A8ABD0) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A8ABE4;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82A8ABEC;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a8ac7c
	if (cr6.eq) goto loc_82A8AC7C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ac7c
	if (cr6.eq) goto loc_82A8AC7C;
	// ld r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 160);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r9,r10,187
	ctx.r9.u64 = ctx.r10.u64 | 187;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a8ac50
	if (!cr6.eq) goto loc_82A8AC50;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ac38
	if (cr6.eq) goto loc_82A8AC38;
	// bl 0x82bf71a0
	ctx.lr = 0x82A8AC2C;
	sub_82BF71A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8ac7c
	if (cr6.eq) goto loc_82A8AC7C;
loc_82A8AC38:
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
loc_82A8AC50:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-19904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ac64
	if (cr6.eq) goto loc_82A8AC64;
	// bl 0x83779190
	ctx.lr = 0x82A8AC64;
	sub_83779190(ctx, base);
loc_82A8AC64:
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
loc_82A8AC7C:
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

__attribute__((alias("__imp__sub_82A8AC94"))) PPC_WEAK_FUNC(sub_82A8AC94);
PPC_FUNC_IMPL(__imp__sub_82A8AC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AC98"))) PPC_WEAK_FUNC(sub_82A8AC98);
PPC_FUNC_IMPL(__imp__sub_82A8AC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A8ACA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A8ACAC;
	sub_83763EF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8acc4
	if (!cr6.eq) goto loc_82A8ACC4;
loc_82A8ACB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A8ACC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8abd0
	ctx.lr = 0x82A8ACCC;
	sub_82A8ABD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8acb8
	if (cr6.eq) goto loc_82A8ACB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A8ACE0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A8ACE8;
	sub_82D33DB0(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r10,4364
	ctx.r27.s64 = ctx.r10.s64 + 4364;
	// addi r28,r11,-29208
	ctx.r28.s64 = ctx.r11.s64 + -29208;
loc_82A8AD04:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82A8AD18;
	sub_82BDC948(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r30,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82A8AD2C;
	sub_82D233B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A8AD38;
	sub_82D33DB0(ctx, base);
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
	ctx.lr = 0x82A8AD50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ad64
	if (cr6.eq) goto loc_82A8AD64;
	// addi r11,r28,36
	ctx.r11.s64 = ctx.r28.s64 + 36;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82A8AD64;
	sub_82D29598(ctx, base);
loc_82A8AD64:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r30,36
	cr6.compare<uint32_t>(ctx.r30.u32, 36, xer);
	// blt cr6,0x82a8ad04
	if (cr6.lt) goto loc_82A8AD04;
	// ld r3,160(r25)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r25.u32 + 160);
	// bl 0x8376d748
	ctx.lr = 0x82A8AD7C;
	sub_8376D748(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8adac
	if (cr6.eq) goto loc_82A8ADAC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A8AD98;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,319
	ctx.r5.u64 = ctx.r5.u64 | 319;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82A8ADAC;
	sub_82D20EB8(ctx, base);
loc_82A8ADAC:
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,65
	ctx.r5.u64 = ctx.r5.u64 | 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82A8ADC0;
	sub_82D20EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8ADCC"))) PPC_WEAK_FUNC(sub_82A8ADCC);
PPC_FUNC_IMPL(__imp__sub_82A8ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8ADD0"))) PPC_WEAK_FUNC(sub_82A8ADD0);
PPC_FUNC_IMPL(__imp__sub_82A8ADD0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8ADDC"))) PPC_WEAK_FUNC(sub_82A8ADDC);
PPC_FUNC_IMPL(__imp__sub_82A8ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8ADE0"))) PPC_WEAK_FUNC(sub_82A8ADE0);
PPC_FUNC_IMPL(__imp__sub_82A8ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8ADE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83763ef8
	ctx.lr = 0x82A8ADF0;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ae9c
	if (cr6.eq) goto loc_82A8AE9C;
	// ld r29,160(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x8376d198
	ctx.lr = 0x82A8AE10;
	sub_8376D198(ctx, base);
	// bl 0x82bda618
	ctx.lr = 0x82A8AE14;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ae9c
	if (cr6.eq) goto loc_82A8AE9C;
	// addi r4,r3,216
	ctx.r4.s64 = ctx.r3.s64 + 216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A8AE30;
	sub_83777E50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A8AE3C;
	sub_82BD9DB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bda020
	ctx.lr = 0x82A8AE48;
	sub_82BDA020(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r11,187
	ctx.r9.u64 = ctx.r11.u64 | 187;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a8ae68
	if (!cr6.eq) goto loc_82A8AE68;
	// bl 0x82bd9fa8
	ctx.lr = 0x82A8AE64;
	sub_82BD9FA8(ctx, base);
	// b 0x82a8ae70
	goto loc_82A8AE70;
loc_82A8AE68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bdc058
	ctx.lr = 0x82A8AE70;
	sub_82BDC058(ctx, base);
loc_82A8AE70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bd9e08
	ctx.lr = 0x82A8AE90;
	sub_82BD9E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A8AE9C;
	sub_82BD9DB8(ctx, base);
loc_82A8AE9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8AEA4"))) PPC_WEAK_FUNC(sub_82A8AEA4);
PPC_FUNC_IMPL(__imp__sub_82A8AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AEA8"))) PPC_WEAK_FUNC(sub_82A8AEA8);
PPC_FUNC_IMPL(__imp__sub_82A8AEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82bda618
	ctx.lr = 0x82A8AEC4;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8af50
	if (cr6.eq) goto loc_82A8AF50;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8aefc
	if (cr6.eq) goto loc_82A8AEFC;
	// bl 0x837c9c08
	ctx.lr = 0x82A8AEE0;
	sub_837C9C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8aefc
	if (cr6.eq) goto loc_82A8AEFC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a8af00
	if (cr6.eq) goto loc_82A8AF00;
loc_82A8AEFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8AF00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8af40
	if (cr6.eq) goto loc_82A8AF40;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a8af30
	if (!cr6.eq) goto loc_82A8AF30;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82a8af30
	if (cr6.lt) goto loc_82A8AF30;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a8af34
	if (!cr6.gt) goto loc_82A8AF34;
loc_82A8AF30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8AF34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a8af50
	if (!cr6.eq) goto loc_82A8AF50;
loc_82A8AF40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19858
	ctx.lr = 0x82A8AF4C;
	sub_82D19858(ctx, base);
	// b 0x82a8af58
	goto loc_82A8AF58;
loc_82A8AF50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82A8AF58;
	sub_82D1B890(ctx, base);
loc_82A8AF58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8AF70"))) PPC_WEAK_FUNC(sub_82A8AF70);
PPC_FUNC_IMPL(__imp__sub_82A8AF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82bda618
	ctx.lr = 0x82A8AF8C;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b018
	if (cr6.eq) goto loc_82A8B018;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8afc4
	if (cr6.eq) goto loc_82A8AFC4;
	// bl 0x837c9c08
	ctx.lr = 0x82A8AFA8;
	sub_837C9C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8afc4
	if (cr6.eq) goto loc_82A8AFC4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a8afc8
	if (cr6.eq) goto loc_82A8AFC8;
loc_82A8AFC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8AFC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8b008
	if (cr6.eq) goto loc_82A8B008;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a8aff8
	if (!cr6.eq) goto loc_82A8AFF8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82a8aff8
	if (cr6.lt) goto loc_82A8AFF8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a8affc
	if (!cr6.gt) goto loc_82A8AFFC;
loc_82A8AFF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8AFFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a8b018
	if (!cr6.eq) goto loc_82A8B018;
loc_82A8B008:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19858
	ctx.lr = 0x82A8B014;
	sub_82D19858(ctx, base);
	// b 0x82a8b08c
	goto loc_82A8B08C;
loc_82A8B018:
	// bl 0x831156e8
	ctx.lr = 0x82A8B01C;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82A8B024;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A8B028;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// beq cr6,0x82a8b058
	if (cr6.eq) goto loc_82A8B058;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82a8b048
	if (cr6.eq) goto loc_82A8B048;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19858
	ctx.lr = 0x82A8B044;
	sub_82D19858(ctx, base);
	// b 0x82a8b08c
	goto loc_82A8B08C;
loc_82A8B048:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,4396
	ctx.r11.s64 = ctx.r11.s64 + 4396;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// b 0x82a8b084
	goto loc_82A8B084;
loc_82A8B058:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a8b080
	if (!cr6.eq) goto loc_82A8B080;
	// addi r11,r11,4396
	ctx.r11.s64 = ctx.r11.s64 + 4396;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x82a8b084
	goto loc_82A8B084;
loc_82A8B080:
	// addi r5,r11,4396
	ctx.r5.s64 = ctx.r11.s64 + 4396;
loc_82A8B084:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82A8B08C;
	sub_82D20DA8(ctx, base);
loc_82A8B08C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B0A4"))) PPC_WEAK_FUNC(sub_82A8B0A4);
PPC_FUNC_IMPL(__imp__sub_82A8B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B0A8"))) PPC_WEAK_FUNC(sub_82A8B0A8);
PPC_FUNC_IMPL(__imp__sub_82A8B0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// lis r10,244
	ctx.r10.s64 = 15990784;
	// ori r9,r11,26
	ctx.r9.u64 = ctx.r11.u64 | 26;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r8,4408
	ctx.r3.s64 = ctx.r8.s64 + 4408;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82A8B0F0;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b114
	if (cr6.eq) goto loc_82A8B114;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82A8B108;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82A8B114;
	sub_83103100(ctx, base);
loc_82A8B114:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B134"))) PPC_WEAK_FUNC(sub_82A8B134);
PPC_FUNC_IMPL(__imp__sub_82A8B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B138"))) PPC_WEAK_FUNC(sub_82A8B138);
PPC_FUNC_IMPL(__imp__sub_82A8B138) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A8B150;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b18c
	if (cr6.eq) goto loc_82A8B18C;
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r10,r11,187
	ctx.r10.u64 = ctx.r11.u64 | 187;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a8b24c
	if (cr6.eq) goto loc_82A8B24C;
	// bl 0x82bda618
	ctx.lr = 0x82A8B178;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8b194
	if (!cr6.eq) goto loc_82A8B194;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdc5e8
	ctx.lr = 0x82A8B18C;
	sub_82BDC5E8(ctx, base);
loc_82A8B18C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a8b250
	goto loc_82A8B250;
loc_82A8B194:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a8b1b8
	if (!cr6.eq) goto loc_82A8B1B8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82a8b1b8
	if (cr6.lt) goto loc_82A8B1B8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a8b1bc
	if (!cr6.gt) goto loc_82A8B1BC;
loc_82A8B1B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8B1BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8b18c
	if (cr6.eq) goto loc_82A8B18C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A8B1D4;
	sub_82BD9DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc058
	ctx.lr = 0x82A8B1E0;
	sub_82BDC058(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bd9e08
	ctx.lr = 0x82A8B200;
	sub_82BD9E08(ctx, base);
	// lbz r10,105(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 105);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a8b22c
	if (!cr6.eq) goto loc_82A8B22C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdbb88
	ctx.lr = 0x82A8B220;
	sub_82BDBB88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9f68
	ctx.lr = 0x82A8B22C;
	sub_82BD9F68(ctx, base);
loc_82A8B22C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bda498
	ctx.lr = 0x82A8B238;
	sub_82BDA498(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A8B244;
	sub_82BD9DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
loc_82A8B24C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A8B250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B268"))) PPC_WEAK_FUNC(sub_82A8B268);
PPC_FUNC_IMPL(__imp__sub_82A8B268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8B270;
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
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8B294;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b2dc
	if (cr6.eq) goto loc_82A8B2DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82A8B2B0;
	sub_82BDC848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4512
	ctx.r9.s64 = ctx.r11.s64 + 4512;
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
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A8B2DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B2E8"))) PPC_WEAK_FUNC(sub_82A8B2E8);
PPC_FUNC_IMPL(__imp__sub_82A8B2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4512
	ctx.r9.s64 = ctx.r11.s64 + 4512;
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
	// bl 0x82bdc910
	ctx.lr = 0x82A8B320;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a8b338
	if (cr6.eq) goto loc_82A8B338;
	// bl 0x82416268
	ctx.lr = 0x82A8B334;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8B338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B350"))) PPC_WEAK_FUNC(sub_82A8B350);
PPC_FUNC_IMPL(__imp__sub_82A8B350) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a8b384
	if (!cr6.eq) goto loc_82A8B384;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a8b37c
	if (!cr6.eq) goto loc_82A8B37C;
	// bl 0x82a8ade0
	ctx.lr = 0x82A8B37C;
	sub_82A8ADE0(ctx, base);
loc_82A8B37C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82A8B384:
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

__attribute__((alias("__imp__sub_82A8B398"))) PPC_WEAK_FUNC(sub_82A8B398);
PPC_FUNC_IMPL(__imp__sub_82A8B398) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a8b0a8
	sub_82A8B0A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B39C"))) PPC_WEAK_FUNC(sub_82A8B39C);
PPC_FUNC_IMPL(__imp__sub_82A8B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B3A0"))) PPC_WEAK_FUNC(sub_82A8B3A0);
PPC_FUNC_IMPL(__imp__sub_82A8B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8b3b0
	if (cr6.lt) goto loc_82A8B3B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A8B3B0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a8b268
	sub_82A8B268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B3B8"))) PPC_WEAK_FUNC(sub_82A8B3B8);
PPC_FUNC_IMPL(__imp__sub_82A8B3B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,113
	ctx.r3.s64 = 113;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B3C0"))) PPC_WEAK_FUNC(sub_82A8B3C0);
PPC_FUNC_IMPL(__imp__sub_82A8B3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8B3C8;
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
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8B3EC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b42c
	if (cr6.eq) goto loc_82A8B42C;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf8dc0
	ctx.lr = 0x82A8B408;
	sub_82BF8DC0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,5208
	ctx.r9.s64 = ctx.r11.s64 + 5208;
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
loc_82A8B42C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B438"))) PPC_WEAK_FUNC(sub_82A8B438);
PPC_FUNC_IMPL(__imp__sub_82A8B438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,5208
	ctx.r9.s64 = ctx.r11.s64 + 5208;
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
	// bl 0x82bf8aa8
	ctx.lr = 0x82A8B470;
	sub_82BF8AA8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a8b488
	if (cr6.eq) goto loc_82A8B488;
	// bl 0x82416268
	ctx.lr = 0x82A8B484;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8B488:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B4A0"))) PPC_WEAK_FUNC(sub_82A8B4A0);
PPC_FUNC_IMPL(__imp__sub_82A8B4A0) {
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
	// bl 0x82be05e8
	ctx.lr = 0x82A8B4BC;
	sub_82BE05E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8B4D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x825a10c0
	ctx.lr = 0x82A8B4E4;
	sub_825A10C0(ctx, base);
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

__attribute__((alias("__imp__sub_82A8B500"))) PPC_WEAK_FUNC(sub_82A8B500);
PPC_FUNC_IMPL(__imp__sub_82A8B500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8b510
	if (cr6.lt) goto loc_82A8B510;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A8B510:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a8b3c0
	sub_82A8B3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B518"))) PPC_WEAK_FUNC(sub_82A8B518);
PPC_FUNC_IMPL(__imp__sub_82A8B518) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B524"))) PPC_WEAK_FUNC(sub_82A8B524);
PPC_FUNC_IMPL(__imp__sub_82A8B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B528"))) PPC_WEAK_FUNC(sub_82A8B528);
PPC_FUNC_IMPL(__imp__sub_82A8B528) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x82A8B550;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8b564
	if (cr6.eq) goto loc_82A8B564;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82a8b588
	goto loc_82A8B588;
loc_82A8B564:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x82A8B574;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_82A8B588:
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

__attribute__((alias("__imp__sub_82A8B5A0"))) PPC_WEAK_FUNC(sub_82A8B5A0);
PPC_FUNC_IMPL(__imp__sub_82A8B5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,5976
	ctx.r9.s64 = ctx.r11.s64 + 5976;
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
	// bl 0x82bda618
	ctx.lr = 0x82A8B5D8;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b5e8
	if (cr6.eq) goto loc_82A8B5E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
loc_82A8B5E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be10c0
	ctx.lr = 0x82A8B5F0;
	sub_82BE10C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8b608
	if (cr6.eq) goto loc_82A8B608;
	// bl 0x82416268
	ctx.lr = 0x82A8B604;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8B608:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B620"))) PPC_WEAK_FUNC(sub_82A8B620);
PPC_FUNC_IMPL(__imp__sub_82A8B620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A8B628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A8B634;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8b644
	if (!cr6.eq) goto loc_82A8B644;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A8B644:
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A8B654;
	sub_83777E50(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x82A8B664;
	sub_82A76558(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,5880
	ctx.r29.s64 = ctx.r11.s64 + 5880;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,-52
	ctx.r11.s64 = ctx.r29.s64 + -52;
	// lwz r7,308(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x82A8B698;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r28,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r28.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x82a8b6c4
	if (cr0.eq) goto loc_82A8B6C4;
loc_82A8B6A4:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82A8B6B8;
	sub_82D233B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82a8b6a4
	if (cr6.lt) goto loc_82A8B6A4;
loc_82A8B6C4:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82A8B6D8;
	sub_82D233B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A8B6E0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8B6F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82be3b40
	ctx.lr = 0x82A8B6FC;
	sub_82BE3B40(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,65
	ctx.r5.u64 = ctx.r5.u64 | 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82A8B710;
	sub_82D20EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B71C"))) PPC_WEAK_FUNC(sub_82A8B71C);
PPC_FUNC_IMPL(__imp__sub_82A8B71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B720"))) PPC_WEAK_FUNC(sub_82A8B720);
PPC_FUNC_IMPL(__imp__sub_82A8B720) {
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
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// bl 0x82a8b528
	ctx.lr = 0x82A8B738;
	sub_82A8B528(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B74C"))) PPC_WEAK_FUNC(sub_82A8B74C);
PPC_FUNC_IMPL(__imp__sub_82A8B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B750"))) PPC_WEAK_FUNC(sub_82A8B750);
PPC_FUNC_IMPL(__imp__sub_82A8B750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8B758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5792
	ctx.r9.s64 = ctx.r11.s64 + 5792;
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x825a10c0
	ctx.lr = 0x82A8B780;
	sub_825A10C0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a8b7fc
	if (cr6.eq) goto loc_82A8B7FC;
	// bl 0x83763ef8
	ctx.lr = 0x82A8B790;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b7fc
	if (cr6.eq) goto loc_82A8B7FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82A8B7A8;
	sub_83777D88(ctx, base);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8b7c8
	if (cr6.eq) goto loc_82A8B7C8;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A8B7C8;
	sub_831CE980(ctx, base);
loc_82A8B7C8:
	// bl 0x82bda618
	ctx.lr = 0x82A8B7CC;
	sub_82BDA618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b7fc
	if (cr6.eq) goto loc_82A8B7FC;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A8B7E8;
	sub_831CE980(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8b7fc
	if (cr6.eq) goto loc_82A8B7FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdaff8
	ctx.lr = 0x82A8B7FC;
	sub_82BDAFF8(ctx, base);
loc_82A8B7FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B804"))) PPC_WEAK_FUNC(sub_82A8B804);
PPC_FUNC_IMPL(__imp__sub_82A8B804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B808"))) PPC_WEAK_FUNC(sub_82A8B808);
PPC_FUNC_IMPL(__imp__sub_82A8B808) {
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
	// bl 0x82be1460
	ctx.lr = 0x82A8B824;
	sub_82BE1460(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// addi r9,r11,5976
	ctx.r9.s64 = ctx.r11.s64 + 5976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82A8B850;
	sub_831CDCF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A8B868;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A8B884"))) PPC_WEAK_FUNC(sub_82A8B884);
PPC_FUNC_IMPL(__imp__sub_82A8B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B888"))) PPC_WEAK_FUNC(sub_82A8B888);
PPC_FUNC_IMPL(__imp__sub_82A8B888) {
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
	// bl 0x82be0df0
	ctx.lr = 0x82A8B8A0;
	sub_82BE0DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a8b8b8
	if (cr6.lt) goto loc_82A8B8B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8b750
	ctx.lr = 0x82A8B8B8;
	sub_82A8B750(ctx, base);
loc_82A8B8B8:
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

__attribute__((alias("__imp__sub_82A8B8CC"))) PPC_WEAK_FUNC(sub_82A8B8CC);
PPC_FUNC_IMPL(__imp__sub_82A8B8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B8D0"))) PPC_WEAK_FUNC(sub_82A8B8D0);
PPC_FUNC_IMPL(__imp__sub_82A8B8D0) {
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
	// bl 0x82be0df0
	ctx.lr = 0x82A8B8EC;
	sub_82BE0DF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8B904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a8b920
	if (!cr6.eq) goto loc_82A8B920;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8b750
	ctx.lr = 0x82A8B920;
	sub_82A8B750(ctx, base);
loc_82A8B920:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82A8B92C;
	sub_82D19858(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8B944"))) PPC_WEAK_FUNC(sub_82A8B944);
PPC_FUNC_IMPL(__imp__sub_82A8B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B948"))) PPC_WEAK_FUNC(sub_82A8B948);
PPC_FUNC_IMPL(__imp__sub_82A8B948) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,192(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a8b750
	ctx.lr = 0x82A8B968;
	sub_82A8B750(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82A8B974;
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

__attribute__((alias("__imp__sub_82A8B988"))) PPC_WEAK_FUNC(sub_82A8B988);
PPC_FUNC_IMPL(__imp__sub_82A8B988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a8b9b0
	if (cr6.lt) goto loc_82A8B9B0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a8b9b4
	goto loc_82A8B9B4;
loc_82A8B9B0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A8B9B4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,196
	ctx.r4.s64 = 196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8B9D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8b9e8
	if (cr6.eq) goto loc_82A8B9E8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a8b808
	ctx.lr = 0x82A8B9E4;
	sub_82A8B808(ctx, base);
	// b 0x82a8b9ec
	goto loc_82A8B9EC;
loc_82A8B9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8B9EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BA04"))) PPC_WEAK_FUNC(sub_82A8BA04);
PPC_FUNC_IMPL(__imp__sub_82A8BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BA08"))) PPC_WEAK_FUNC(sub_82A8BA08);
PPC_FUNC_IMPL(__imp__sub_82A8BA08) {
	PPC_FUNC_PROLOGUE();
	// li r3,120
	ctx.r3.s64 = 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BA10"))) PPC_WEAK_FUNC(sub_82A8BA10);
PPC_FUNC_IMPL(__imp__sub_82A8BA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8BA18;
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
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8BA3C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ba7c
	if (cr6.eq) goto loc_82A8BA7C;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf8dc0
	ctx.lr = 0x82A8BA58;
	sub_82BF8DC0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6656
	ctx.r9.s64 = ctx.r11.s64 + 6656;
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
loc_82A8BA7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8BA88"))) PPC_WEAK_FUNC(sub_82A8BA88);
PPC_FUNC_IMPL(__imp__sub_82A8BA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6656
	ctx.r9.s64 = ctx.r11.s64 + 6656;
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
	// bl 0x82bf8aa8
	ctx.lr = 0x82A8BAC0;
	sub_82BF8AA8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a8bad8
	if (cr6.eq) goto loc_82A8BAD8;
	// bl 0x82416268
	ctx.lr = 0x82A8BAD4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8BAD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BAF0"))) PPC_WEAK_FUNC(sub_82A8BAF0);
PPC_FUNC_IMPL(__imp__sub_82A8BAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8bb00
	if (cr6.lt) goto loc_82A8BB00;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A8BB00:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a8ba10
	sub_82A8BA10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8BB08"))) PPC_WEAK_FUNC(sub_82A8BB08);
PPC_FUNC_IMPL(__imp__sub_82A8BB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// bgt cr6,0x82a8bb38
	if (cr6.gt) goto loc_82A8BB38;
	// beq cr6,0x82a8bb2c
	if (cr6.eq) goto loc_82A8BB2C;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bne cr6,0x82a8bb40
	if (!cr6.eq) goto loc_82A8BB40;
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,479
	ctx.r3.u64 = ctx.r3.u64 | 479;
	// blr 
	return;
loc_82A8BB2C:
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,472
	ctx.r3.u64 = ctx.r3.u64 | 472;
	// blr 
	return;
loc_82A8BB38:
	// cmpwi cr6,r11,124
	cr6.compare<int32_t>(ctx.r11.s32, 124, xer);
	// beq cr6,0x82a8bb4c
	if (cr6.eq) goto loc_82A8BB4C;
loc_82A8BB40:
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,263
	ctx.r3.u64 = ctx.r3.u64 | 263;
	// blr 
	return;
loc_82A8BB4C:
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,473
	ctx.r3.u64 = ctx.r3.u64 | 473;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BB58"))) PPC_WEAK_FUNC(sub_82A8BB58);
PPC_FUNC_IMPL(__imp__sub_82A8BB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// bgt cr6,0x82a8bb80
	if (cr6.gt) goto loc_82A8BB80;
	// beq cr6,0x82a8bb78
	if (cr6.eq) goto loc_82A8BB78;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bne cr6,0x82a8bb88
	if (!cr6.eq) goto loc_82A8BB88;
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_82A8BB78:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_82A8BB80:
	// cmpwi cr6,r11,124
	cr6.compare<int32_t>(ctx.r11.s32, 124, xer);
	// beq cr6,0x82a8bb90
	if (cr6.eq) goto loc_82A8BB90;
loc_82A8BB88:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_82A8BB90:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BB98"))) PPC_WEAK_FUNC(sub_82A8BB98);
PPC_FUNC_IMPL(__imp__sub_82A8BB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,7336
	ctx.r9.s64 = ctx.r11.s64 + 7336;
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
	// bl 0x82bda618
	ctx.lr = 0x82A8BBD0;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8bbe0
	if (cr6.eq) goto loc_82A8BBE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
loc_82A8BBE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be10c0
	ctx.lr = 0x82A8BBE8;
	sub_82BE10C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8bc00
	if (cr6.eq) goto loc_82A8BC00;
	// bl 0x82416268
	ctx.lr = 0x82A8BBFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8BC00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BC18"))) PPC_WEAK_FUNC(sub_82A8BC18);
PPC_FUNC_IMPL(__imp__sub_82A8BC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8BC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A8BC2C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8bc3c
	if (!cr6.eq) goto loc_82A8BC3C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A8BC3C:
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A8BC4C;
	sub_83777E50(ctx, base);
	// bl 0x82d17d90
	ctx.lr = 0x82A8BC50;
	sub_82D17D90(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82a8bcac
	if (cr6.gt) goto loc_82A8BCAC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a8bcac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8BCAC;
	// bdzf 4*cr6+eq,0x82a8bcac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8BCAC;
	// bdzf 4*cr6+eq,0x82a8bc8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8BC8C;
	// bdzf 4*cr6+eq,0x82a8bc94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8BC94;
	// bdzf 4*cr6+eq,0x82a8bcac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8BCAC;
	// bdzf 4*cr6+eq,0x82a8bcac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8BCAC;
	// bdzf 4*cr6+eq,0x82a8bcac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8BCAC;
	// bne cr6,0x82a8bc9c
	if (!cr6.eq) goto loc_82A8BC9C;
	// li r11,119
	ctx.r11.s64 = 119;
	// b 0x82a8bca0
	goto loc_82A8BCA0;
loc_82A8BC8C:
	// li r11,122
	ctx.r11.s64 = 122;
	// b 0x82a8bca8
	goto loc_82A8BCA8;
loc_82A8BC94:
	// li r11,124
	ctx.r11.s64 = 124;
	// b 0x82a8bca8
	goto loc_82A8BCA8;
loc_82A8BC9C:
	// li r11,102
	ctx.r11.s64 = 102;
loc_82A8BCA0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
loc_82A8BCA8:
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82A8BCAC:
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x82A8BCC0;
	sub_82A76558(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a8bcd8
	if (cr6.lt) goto loc_82A8BCD8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A8BCD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82A8BCE8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,7240
	ctx.r4.s64 = ctx.r10.s64 + 7240;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A8BD04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82be3b40
	ctx.lr = 0x82A8BD08;
	sub_82BE3B40(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,65
	ctx.r5.u64 = ctx.r5.u64 | 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82A8BD1C;
	sub_82D20EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8BD28"))) PPC_WEAK_FUNC(sub_82A8BD28);
PPC_FUNC_IMPL(__imp__sub_82A8BD28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// lwz r4,200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x82a8b528
	sub_82A8B528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8BD38"))) PPC_WEAK_FUNC(sub_82A8BD38);
PPC_FUNC_IMPL(__imp__sub_82A8BD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8BD40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// lwz r5,200(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a76558
	ctx.lr = 0x82A8BD70;
	sub_82A76558(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a8be08
	if (cr6.eq) goto loc_82A8BE08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82a8be08
	if (cr6.eq) goto loc_82A8BE08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82A8BD98;
	sub_825A10C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8be08
	if (cr6.eq) goto loc_82A8BE08;
	// bl 0x83763ef8
	ctx.lr = 0x82A8BDA8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8be08
	if (cr6.eq) goto loc_82A8BE08;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83777d88
	ctx.lr = 0x82A8BDC0;
	sub_83777D88(ctx, base);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8bde0
	if (cr6.eq) goto loc_82A8BDE0;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A8BDE0;
	sub_831CE980(ctx, base);
loc_82A8BDE0:
	// bl 0x82bda618
	ctx.lr = 0x82A8BDE4;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8be08
	if (cr6.eq) goto loc_82A8BE08;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A8BE00;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdaff8
	ctx.lr = 0x82A8BE08;
	sub_82BDAFF8(ctx, base);
loc_82A8BE08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8BE10"))) PPC_WEAK_FUNC(sub_82A8BE10);
PPC_FUNC_IMPL(__imp__sub_82A8BE10) {
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
	// bl 0x82be1460
	ctx.lr = 0x82A8BE28;
	sub_82BE1460(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,7336
	ctx.r9.s64 = ctx.r11.s64 + 7336;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82A8BE50;
	sub_831CDCF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82A8BE7C"))) PPC_WEAK_FUNC(sub_82A8BE7C);
PPC_FUNC_IMPL(__imp__sub_82A8BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BE80"))) PPC_WEAK_FUNC(sub_82A8BE80);
PPC_FUNC_IMPL(__imp__sub_82A8BE80) {
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
	// bl 0x82be0df0
	ctx.lr = 0x82A8BE98;
	sub_82BE0DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a8beac
	if (cr6.lt) goto loc_82A8BEAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8bd38
	ctx.lr = 0x82A8BEAC;
	sub_82A8BD38(ctx, base);
loc_82A8BEAC:
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

__attribute__((alias("__imp__sub_82A8BEC0"))) PPC_WEAK_FUNC(sub_82A8BEC0);
PPC_FUNC_IMPL(__imp__sub_82A8BEC0) {
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
	// lwz r4,196(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a8bd38
	ctx.lr = 0x82A8BEDC;
	sub_82A8BD38(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82A8BEE8;
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

__attribute__((alias("__imp__sub_82A8BEFC"))) PPC_WEAK_FUNC(sub_82A8BEFC);
PPC_FUNC_IMPL(__imp__sub_82A8BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BF00"))) PPC_WEAK_FUNC(sub_82A8BF00);
PPC_FUNC_IMPL(__imp__sub_82A8BF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a8bf28
	if (cr6.lt) goto loc_82A8BF28;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a8bf2c
	goto loc_82A8BF2C;
loc_82A8BF28:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A8BF2C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8BF48;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8bf60
	if (cr6.eq) goto loc_82A8BF60;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a8be10
	ctx.lr = 0x82A8BF5C;
	sub_82A8BE10(ctx, base);
	// b 0x82a8bf64
	goto loc_82A8BF64;
loc_82A8BF60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8BF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BF7C"))) PPC_WEAK_FUNC(sub_82A8BF7C);
PPC_FUNC_IMPL(__imp__sub_82A8BF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BF80"))) PPC_WEAK_FUNC(sub_82A8BF80);
PPC_FUNC_IMPL(__imp__sub_82A8BF80) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8BF8C"))) PPC_WEAK_FUNC(sub_82A8BF8C);
PPC_FUNC_IMPL(__imp__sub_82A8BF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BF90"))) PPC_WEAK_FUNC(sub_82A8BF90);
PPC_FUNC_IMPL(__imp__sub_82A8BF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,8608
	ctx.r3.s64 = ctx.r11.s64 + 8608;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82A8BFC4;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8c004
	if (cr6.eq) goto loc_82A8C004;
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// lis r10,244
	ctx.r10.s64 = 15990784;
	// ori r9,r11,26
	ctx.r9.u64 = ctx.r11.u64 | 26;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82A8BFF0;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82A8BFFC;
	sub_83103100(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r8.u32);
loc_82A8C004:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8C01C"))) PPC_WEAK_FUNC(sub_82A8C01C);
PPC_FUNC_IMPL(__imp__sub_82A8C01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C020"))) PPC_WEAK_FUNC(sub_82A8C020);
PPC_FUNC_IMPL(__imp__sub_82A8C020) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a8bf90
	sub_82A8BF90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C024"))) PPC_WEAK_FUNC(sub_82A8C024);
PPC_FUNC_IMPL(__imp__sub_82A8C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C028"))) PPC_WEAK_FUNC(sub_82A8C028);
PPC_FUNC_IMPL(__imp__sub_82A8C028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A8C038:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a8c038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A8C038;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82a8c0e4
	if (cr6.gt) goto loc_82A8C0E4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a8c07c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8C07C;
	// bdzf 4*cr6+eq,0x82a8c08c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8C08C;
	// bne cr6,0x82a8c08c
	if (!cr6.eq) goto loc_82A8C08C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,11(r4)
	PPC_STORE_U8(ctx.r4.u32 + 11, ctx.r11.u8);
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r11.u8);
	// stb r11,15(r4)
	PPC_STORE_U8(ctx.r4.u32 + 15, ctx.r11.u8);
	// b 0x82a8c090
	goto loc_82A8C090;
loc_82A8C07C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r11.u8);
	// stb r11,15(r4)
	PPC_STORE_U8(ctx.r4.u32 + 15, ctx.r11.u8);
	// b 0x82a8c090
	goto loc_82A8C090;
loc_82A8C08C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8C090:
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82a8c0b8
	if (cr6.eq) goto loc_82A8C0B8;
	// ble cr6,0x82a8c0bc
	if (!cr6.gt) goto loc_82A8C0BC;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x82a8c0bc
	if (cr6.gt) goto loc_82A8C0BC;
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
loc_82A8C0B8:
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
loc_82A8C0BC:
	// lbz r10,11(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r11,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r11.u8);
	// blr 
	return;
loc_82A8C0E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// stb r11,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r11.u8);
	// stb r11,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r11.u8);
	// stb r11,11(r4)
	PPC_STORE_U8(ctx.r4.u32 + 11, ctx.r11.u8);
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r11.u8);
	// stb r11,15(r4)
	PPC_STORE_U8(ctx.r4.u32 + 15, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8C108"))) PPC_WEAK_FUNC(sub_82A8C108);
PPC_FUNC_IMPL(__imp__sub_82A8C108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,8280
	ctx.r7.s64 = ctx.r8.s64 + 8280;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,128
	cr6.compare<int32_t>(ctx.r5.s32, 128, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// blt cr6,0x82a8c148
	if (cr6.lt) goto loc_82A8C148;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bgt cr6,0x82a8c148
	if (cr6.gt) goto loc_82A8C148;
	// lwz r10,204(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82a8c154
	goto loc_82A8C154;
loc_82A8C148:
	// lwz r10,204(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A8C154:
	// b 0x825a10c0
	sub_825A10C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C158"))) PPC_WEAK_FUNC(sub_82A8C158);
PPC_FUNC_IMPL(__imp__sub_82A8C158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8C15C"))) PPC_WEAK_FUNC(sub_82A8C15C);
PPC_FUNC_IMPL(__imp__sub_82A8C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C160"))) PPC_WEAK_FUNC(sub_82A8C160);
PPC_FUNC_IMPL(__imp__sub_82A8C160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8246e6a8
	ctx.lr = 0x82A8C180;
	sub_8246E6A8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-22836
	ctx.r9.s64 = ctx.r11.s64 + -22836;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a8c1a0
	if (!cr6.eq) goto loc_82A8C1A0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82A8C1A0:
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a8c1b0
	if (!cr6.eq) goto loc_82A8C1B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82A8C1B0:
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a8c1c0
	if (cr6.eq) goto loc_82A8C1C0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82A8C1C0:
	// rlwinm r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a8c1d0
	if (cr6.eq) goto loc_82A8C1D0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82A8C1D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8C1F8"))) PPC_WEAK_FUNC(sub_82A8C1F8);
PPC_FUNC_IMPL(__imp__sub_82A8C1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r4,32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r8,44(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r10,40(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,24(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
loc_82A8C224:
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a8c238
	if (!cr6.eq) goto loc_82A8C238;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq cr6,0x82a8c23c
	if (cr6.eq) goto loc_82A8C23C;
loc_82A8C238:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A8C23C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a8c2b0
	if (!cr6.eq) goto loc_82A8C2B0;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// slw r31,r6,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ctx.r11.u64;
	// slw r31,r6,r8
	ctx.r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82a8c26c
	if (cr6.eq) goto loc_82A8C26C;
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// b 0x82a8c270
	goto loc_82A8C270;
loc_82A8C26C:
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
loc_82A8C270:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r8,31
	cr6.compare<uint32_t>(ctx.r8.u32, 31, xer);
	// bge cr6,0x82a8c284
	if (!cr6.lt) goto loc_82A8C284;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82a8c290
	goto loc_82A8C290;
loc_82A8C284:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,40(r1)
	PPC_STORE_U32(ctx.r1.u32 + 40, ctx.r10.u32);
loc_82A8C290:
	// stw r8,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r8.u32);
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bge cr6,0x82a8c2a4
	if (!cr6.lt) goto loc_82A8C2A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82a8c224
	goto loc_82A8C224;
loc_82A8C2A4:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x82a8c224
	goto loc_82A8C224;
loc_82A8C2B0:
	// ld r11,40(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8C2C0"))) PPC_WEAK_FUNC(sub_82A8C2C0);
PPC_FUNC_IMPL(__imp__sub_82A8C2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r10,17
	ctx.r10.s64 = 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A8C2D0:
	// lwz r9,220(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a8c2fc
	if (!cr6.lt) goto loc_82A8C2FC;
	// neg. r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a8c2fc
	if (cr0.eq) goto loc_82A8C2FC;
	// subfic r8,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r11.s64;
	// rlwinm r8,r8,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// b 0x82a8c304
	goto loc_82A8C304;
loc_82A8C2FC:
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82A8C304:
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r10,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a8c2d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A8C2D0;
	// stb r7,11(r4)
	PPC_STORE_U8(ctx.r4.u32 + 11, ctx.r7.u8);
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8C348"))) PPC_WEAK_FUNC(sub_82A8C348);
PPC_FUNC_IMPL(__imp__sub_82A8C348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8C350;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8712
	ctx.r9.s64 = ctx.r11.s64 + 8712;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,220(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r30.u32);
	// beq cr6,0x82a8c394
	if (cr6.eq) goto loc_82A8C394;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A8C394;
	sub_825952B8(ctx, base);
loc_82A8C394:
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a8c3b8
	if (cr6.eq) goto loc_82A8C3B8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82A8C3B8;
	sub_825952B8(ctx, base);
loc_82A8C3B8:
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// bl 0x82bdc910
	ctx.lr = 0x82A8C3CC;
	sub_82BDC910(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C3D4"))) PPC_WEAK_FUNC(sub_82A8C3D4);
PPC_FUNC_IMPL(__imp__sub_82A8C3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C3D8"))) PPC_WEAK_FUNC(sub_82A8C3D8);
PPC_FUNC_IMPL(__imp__sub_82A8C3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82a8c348
	ctx.lr = 0x82A8C3F8;
	sub_82A8C348(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8c410
	if (cr6.eq) goto loc_82A8C410;
	// bl 0x82416268
	ctx.lr = 0x82A8C40C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8C410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8C428"))) PPC_WEAK_FUNC(sub_82A8C428);
PPC_FUNC_IMPL(__imp__sub_82A8C428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8C430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a8c46c
	if (cr6.eq) goto loc_82A8C46C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r10,-22772
	ctx.r7.s64 = ctx.r10.s64 + -22772;
	// addi r6,r9,-56
	ctx.r6.s64 = ctx.r9.s64 + -56;
	// addi r5,r8,15320
	ctx.r5.s64 = ctx.r8.s64 + 15320;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
loc_82A8C46C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// addi r8,r9,-19992
	ctx.r8.s64 = ctx.r9.s64 + -19992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r8,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82473310
	ctx.lr = 0x82A8C4A0;
	sub_82473310(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r5,15324
	ctx.r10.s64 = ctx.r5.s64 + 15324;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r9,r4,-22840
	ctx.r9.s64 = ctx.r4.s64 + -22840;
	// addi r7,r8,-22776
	ctx.r7.s64 = ctx.r8.s64 + -22776;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r10,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// bl 0x82a8c160
	ctx.lr = 0x82A8C4EC;
	sub_82A8C160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C4F8"))) PPC_WEAK_FUNC(sub_82A8C4F8);
PPC_FUNC_IMPL(__imp__sub_82A8C4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8C500;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82A8C50C;
	sub_82D1C1A8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r10,8440
	ctx.r4.s64 = ctx.r10.s64 + 8440;
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82A8C538;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d22d48
	ctx.lr = 0x82A8C548;
	sub_82D22D48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82A8C554;
	sub_82D17D80(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a8c584
	if (cr6.eq) goto loc_82A8C584;
	// li r10,17
	ctx.r10.s64 = 17;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31762
	ctx.r10.s64 = -2081554432;
	// addi r10,r10,-25416
	ctx.r10.s64 = ctx.r10.s64 + -25416;
loc_82A8C570:
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a8c570
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A8C570;
loc_82A8C584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdccb8
	ctx.lr = 0x82A8C58C;
	sub_82BDCCB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C594"))) PPC_WEAK_FUNC(sub_82A8C594);
PPC_FUNC_IMPL(__imp__sub_82A8C594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C598"))) PPC_WEAK_FUNC(sub_82A8C598);
PPC_FUNC_IMPL(__imp__sub_82A8C598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A8C5A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A8C5AC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r28,r11,8540
	ctx.r28.s64 = ctx.r11.s64 + 8540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8C5CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82be3b40
	ctx.lr = 0x82A8C5D0;
	sub_82BE3B40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A8C5D8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A8C5E0;
	sub_82D33DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8c75c
	if (cr6.eq) goto loc_82A8C75C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a8c428
	ctx.lr = 0x82A8C5FC;
	sub_82A8C428(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r11,-28160
	ctx.r23.s64 = ctx.r11.s64 + -28160;
loc_82A8C60C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A8C618;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8c730
	if (cr6.eq) goto loc_82A8C730;
	// lwzx r4,r25,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r23.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82a8c634
	if (!cr6.eq) goto loc_82A8C634;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
loc_82A8C634:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82A8C644;
	sub_82D233B0(ctx, base);
	// addi r11,r28,-500
	ctx.r11.s64 = ctx.r28.s64 + -500;
	// addi r10,r28,-356
	ctx.r10.s64 = ctx.r28.s64 + -356;
	// lwzx r30,r25,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwzx r26,r25,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// bne cr6,0x82a8c6b0
	if (!cr6.eq) goto loc_82A8C6B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82A8C670;
	sub_82BDC948(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A8C684;
	sub_82D2B608(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8C69C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8c730
	if (cr6.eq) goto loc_82A8C730;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d29598
	ctx.lr = 0x82A8C6AC;
	sub_82D29598(ctx, base);
	// b 0x82a8c730
	goto loc_82A8C730;
loc_82A8C6B0:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A8C6C4;
	sub_82D2B608(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8C6DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8c6ec
	if (cr6.eq) goto loc_82A8C6EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d29598
	ctx.lr = 0x82A8C6EC;
	sub_82D29598(ctx, base);
loc_82A8C6EC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82a8c700
	if (!cr6.eq) goto loc_82A8C700;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a8c724
	goto loc_82A8C724;
loc_82A8C700:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// bne cr6,0x82a8c714
	if (!cr6.eq) goto loc_82A8C714;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82a8c724
	goto loc_82A8C724;
loc_82A8C714:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82a8c730
	if (!cr6.eq) goto loc_82A8C730;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82A8C724:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82A8C730;
	sub_82BDC948(ctx, base);
loc_82A8C730:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r25,68
	cr6.compare<uint32_t>(ctx.r25.u32, 68, xer);
	// blt cr6,0x82a8c60c
	if (cr6.lt) goto loc_82A8C60C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a79160
	ctx.lr = 0x82A8C748;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82A8C75C;
	sub_831CCF00(ctx, base);
loc_82A8C75C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C764"))) PPC_WEAK_FUNC(sub_82A8C764);
PPC_FUNC_IMPL(__imp__sub_82A8C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C768"))) PPC_WEAK_FUNC(sub_82A8C768);
PPC_FUNC_IMPL(__imp__sub_82A8C768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A8C770;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x82a8c794
	if (cr6.eq) goto loc_82A8C794;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A8C794:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,8588
	ctx.r4.s64 = ctx.r10.s64 + 8588;
	// bl 0x837b0c10
	ctx.lr = 0x82A8C7A8;
	sub_837B0C10(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8377a200
	ctx.lr = 0x82A8C7CC;
	sub_8377A200(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82A8C7E4;
	sub_8259CB28(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82a8c804
	if (cr6.lt) goto loc_82A8C804;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82A8C804;
	sub_825952B8(ctx, base);
loc_82A8C804:
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// bge cr6,0x82a8c82c
	if (!cr6.lt) goto loc_82A8C82C;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82A8C82C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a8c840
	if (!cr6.lt) goto loc_82A8C840;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_82A8C840:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82A8C848;
	sub_827A8810(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blt cr6,0x82a8c86c
	if (cr6.lt) goto loc_82A8C86C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82A8C86C;
	sub_825952B8(ctx, base);
loc_82A8C86C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82a8c894
	if (cr6.lt) goto loc_82A8C894;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82A8C894;
	sub_825952B8(ctx, base);
loc_82A8C894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C8A0"))) PPC_WEAK_FUNC(sub_82A8C8A0);
PPC_FUNC_IMPL(__imp__sub_82A8C8A0) {
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
	// li r10,17
	ctx.r10.s64 = 17;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A8C8C4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a8c8c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A8C8C4;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82a8c9d0
	if (cr6.gt) goto loc_82A8C9D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a8c940
	if (cr6.eq) goto loc_82A8C940;
	// bdz 0x82a8c940
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A8C940;
	// bdz 0x82a8c948
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A8C948;
	// bdz 0x82a8c950
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A8C950;
	// bdz 0x82a8c950
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A8C950;
	// bdz 0x82a8c950
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A8C950;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// bl 0x82a8c768
	ctx.lr = 0x82A8C928;
	sub_82A8C768(ctx, base);
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
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
loc_82A8C940:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a8c95c
	goto loc_82A8C95C;
loc_82A8C948:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a8c958
	goto loc_82A8C958;
loc_82A8C950:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
loc_82A8C958:
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
loc_82A8C95C:
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lwz r9,204(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82a8c9ac
	if (cr6.gt) goto loc_82A8C9AC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a8c994
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8C994;
	// bdzf 4*cr6+eq,0x82a8c9a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A8C9A0;
	// bne cr6,0x82a8c9a4
	if (!cr6.eq) goto loc_82A8C9A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82a8c9a0
	goto loc_82A8C9A0;
loc_82A8C994:
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_82A8C9A0:
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
loc_82A8C9A4:
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
loc_82A8C9AC:
	// lbz r10,11(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a8ca04
	if (cr6.eq) goto loc_82A8CA04;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x82a8ca04
	if (cr6.eq) goto loc_82A8CA04;
	// b 0x82a8ca00
	goto loc_82A8CA00;
loc_82A8C9D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
loc_82A8CA00:
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
loc_82A8CA04:
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

__attribute__((alias("__imp__sub_82A8CA18"))) PPC_WEAK_FUNC(sub_82A8CA18);
PPC_FUNC_IMPL(__imp__sub_82A8CA18) {
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
	ctx.lr = 0x82A8CA20;
	__savegprlr_18(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A8CA34;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8ca4c
	if (!cr6.eq) goto loc_82A8CA4C;
loc_82A8CA40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A8CA4C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A8CA54;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A8CA5C;
	sub_82D33DB0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ca40
	if (cr6.eq) goto loc_82A8CA40;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a8c428
	ctx.lr = 0x82A8CA78;
	sub_82A8C428(ctx, base);
	// lwz r11,204(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 204);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r19,15
	ctx.r19.s64 = 15;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// subfe r20,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r20.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x82a8cafc
	if (cr6.eq) goto loc_82A8CAFC;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// beq cr6,0x82a8caec
	if (cr6.eq) goto loc_82A8CAEC;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// beq cr6,0x82a8cadc
	if (cr6.eq) goto loc_82A8CADC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A8CAC8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a795b8
	ctx.lr = 0x82A8CAD0;
	sub_82A795B8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A8CADC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a8c2c0
	ctx.lr = 0x82A8CAE8;
	sub_82A8C2C0(ctx, base);
	// b 0x82a8cb08
	goto loc_82A8CB08;
loc_82A8CAEC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a8c028
	ctx.lr = 0x82A8CAF8;
	sub_82A8C028(ctx, base);
	// b 0x82a8cb08
	goto loc_82A8CB08;
loc_82A8CAFC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a8c8a0
	ctx.lr = 0x82A8CB08;
	sub_82A8C8A0(ctx, base);
loc_82A8CB08:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// li r22,1
	ctx.r22.s64 = 1;
loc_82A8CB14:
	// lwz r11,220(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 220);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82a81510
	ctx.lr = 0x82A8CB2C;
	sub_82A81510(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r8,r22,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bne cr6,0x82a8cb54
	if (!cr6.eq) goto loc_82A8CB54;
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
loc_82A8CB54:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r31,17
	cr6.compare<uint32_t>(ctx.r31.u32, 17, xer);
	// blt cr6,0x82a8cb14
	if (cr6.lt) goto loc_82A8CB14;
	// li r10,9
	ctx.r10.s64 = 9;
	// ld r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 160);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A8CB78:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a8cb78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A8CB78;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A8CB8C;
	sub_83777E50(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,103
	ctx.r10.s64 = 6750208;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r28,r11,8432
	ctx.r28.s64 = ctx.r11.s64 + 8432;
	// ori r23,r10,121
	ctx.r23.u64 = ctx.r10.u64 | 121;
loc_82A8CBA4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A8CBB0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ce18
	if (cr6.eq) goto loc_82A8CE18;
	// addi r11,r28,-392
	ctx.r11.s64 = ctx.r28.s64 + -392;
	// lwzx r29,r25,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r29,10
	cr6.compare<int32_t>(ctx.r29.s32, 10, xer);
	// beq cr6,0x82a8ce18
	if (cr6.eq) goto loc_82A8CE18;
	// lwz r10,220(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 220);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge cr6,0x82a8cbf8
	if (!cr6.lt) goto loc_82A8CBF8;
	// neg. r11,r26
	ctx.r11.s64 = -ctx.r26.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a8cbf8
	if (cr0.eq) goto loc_82A8CBF8;
	// subfic r9,r26,-1
	xer.ca = ctx.r26.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r26.s64;
	// rlwinm r9,r9,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// b 0x82a8cc00
	goto loc_82A8CC00;
loc_82A8CBF8:
	// rlwinm r9,r26,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A8CC00:
	// clrlwi r11,r26,27
	ctx.r11.u64 = ctx.r26.u32 & 0x1F;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,204(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 204);
	// li r6,2
	ctx.r6.s64 = 2;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// lwzx r27,r25,r7
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addic r4,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r30,r4,r8
	temp.u8 = (~ctx.r4.u32 + ctx.r8.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r4.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A8CC34;
	sub_82D2B608(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x82a8ccbc
	if (!cr6.eq) goto loc_82A8CCBC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8CC54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ce18
	if (cr6.eq) goto loc_82A8CE18;
	// addi r4,r28,-714
	ctx.r4.s64 = ctx.r28.s64 + -714;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82A8CC70;
	sub_8259CC28(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8cc88
	if (cr6.eq) goto loc_82A8CC88;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf7018
	ctx.lr = 0x82A8CC88;
	sub_82BF7018(ctx, base);
loc_82A8CC88:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a8cc9c
	if (!cr6.lt) goto loc_82A8CC9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A8CC9C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82A8CCA4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82A8CCB0;
	sub_82D3BCC0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82A8CCB8;
	sub_8387E8E0(ctx, base);
	// b 0x82a8ce18
	goto loc_82A8CE18;
loc_82A8CCBC:
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// bne cr6,0x82a8cd20
	if (!cr6.eq) goto loc_82A8CD20;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r28,132
	ctx.r4.s64 = ctx.r28.s64 + 132;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8CCDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ce18
	if (cr6.eq) goto loc_82A8CE18;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82d2aec8
	ctx.lr = 0x82A8CCFC;
	sub_82D2AEC8(ctx, base);
	// addi r9,r28,-152
	ctx.r9.s64 = ctx.r28.s64 + -152;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r5,r25,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// bl 0x83740288
	ctx.lr = 0x82A8CD10;
	sub_83740288(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3bc50
	ctx.lr = 0x82A8CD1C;
	sub_82D3BC50(ctx, base);
	// b 0x82a8ce18
	goto loc_82A8CE18;
loc_82A8CD20:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82a8ce18
	if (!cr6.eq) goto loc_82A8CE18;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r28,140
	ctx.r4.s64 = ctx.r28.s64 + 140;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8CD40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8ce18
	if (cr6.eq) goto loc_82A8CE18;
	// bl 0x82d3b3f8
	ctx.lr = 0x82A8CD50;
	sub_82D3B3F8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a8cd70
	if (!cr6.eq) goto loc_82A8CD70;
	// addi r4,r28,152
	ctx.r4.s64 = ctx.r28.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82A8CD68;
	sub_82D3B548(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a8ce10
	goto loc_82A8CE10;
loc_82A8CD70:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x82a8ce18
	if (cr6.gt) goto loc_82A8CE18;
	// lis r12,-32087
	ctx.r12.s64 = -2102853632;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12908
	ctx.r12.s64 = ctx.r12.s64 + -12908;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A8CDD0;
	case 1:
		goto loc_82A8CDDC;
	case 2:
		goto loc_82A8CEF0;
	case 3:
		goto loc_82A8CE18;
	case 4:
		goto loc_82A8CE18;
	case 5:
		goto loc_82A8CDE8;
	case 6:
		goto loc_82A8CE7C;
	case 7:
		goto loc_82A8CE88;
	case 8:
		goto loc_82A8CED0;
	case 9:
		goto loc_82A8CE18;
	case 10:
		goto loc_82A8CED8;
	case 11:
		goto loc_82A8CE18;
	case 12:
		goto loc_82A8CE18;
	case 13:
		goto loc_82A8CE18;
	case 14:
		goto loc_82A8CEE4;
	default:
		return;
	}
	// lwz r21,-12848(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12848);
	// lwz r21,-12836(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12836);
	// lwz r21,-12560(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12560);
	// lwz r21,-12776(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// lwz r21,-12776(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// lwz r21,-12824(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12824);
	// lwz r21,-12676(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12676);
	// lwz r21,-12664(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12664);
	// lwz r21,-12592(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12592);
	// lwz r21,-12776(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// lwz r21,-12584(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12584);
	// lwz r21,-12776(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// lwz r21,-12776(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// lwz r21,-12776(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// lwz r21,-12572(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12572);
loc_82A8CDD0:
	// addi r10,r28,-180
	ctx.r10.s64 = ctx.r28.s64 + -180;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82a8cdf0
	goto loc_82A8CDF0;
loc_82A8CDDC:
	// addi r10,r28,-84
	ctx.r10.s64 = ctx.r28.s64 + -84;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a8cdf0
	goto loc_82A8CDF0;
loc_82A8CDE8:
	// addi r10,r28,-64
	ctx.r10.s64 = ctx.r28.s64 + -64;
loc_82A8CDEC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82A8CDF0:
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A8CDF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82A8CE04;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82a8cdf8
	if (!cr0.eq) goto loc_82A8CDF8;
loc_82A8CE0C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82A8CE10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82A8CE18;
	sub_82D3B298(ctx, base);
loc_82A8CE18:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r25,68
	cr6.compare<uint32_t>(ctx.r25.u32, 68, xer);
	// blt cr6,0x82a8cba4
	if (cr6.lt) goto loc_82A8CBA4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a8ce48
	if (cr6.lt) goto loc_82A8CE48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A8CE48;
	sub_825952B8(ctx, base);
loc_82A8CE48:
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// bl 0x82a79160
	ctx.lr = 0x82A8CE5C;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82A8CE70;
	sub_831CCF00(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A8CE7C:
	// addi r10,r28,-52
	ctx.r10.s64 = ctx.r28.s64 + -52;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82a8cdf0
	goto loc_82A8CDF0;
loc_82A8CE88:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82A8CE8C:
	// addi r4,r28,-713
	ctx.r4.s64 = ctx.r28.s64 + -713;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x82A8CE98;
	sub_8259D6C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bf7018
	ctx.lr = 0x82A8CEA8;
	sub_82BF7018(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a8cebc
	if (!cr6.lt) goto loc_82A8CEBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A8CEBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82A8CEC4;
	sub_82D3B548(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82a8ce8c
	if (cr6.lt) goto loc_82A8CE8C;
	// b 0x82a8ce0c
	goto loc_82A8CE0C;
loc_82A8CED0:
	// addi r10,r28,-28
	ctx.r10.s64 = ctx.r28.s64 + -28;
	// b 0x82a8cdec
	goto loc_82A8CDEC;
loc_82A8CED8:
	// addi r10,r28,-16
	ctx.r10.s64 = ctx.r28.s64 + -16;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82a8cdf0
	goto loc_82A8CDF0;
loc_82A8CEE4:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a8cdf0
	goto loc_82A8CDF0;
loc_82A8CEF0:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82A8CEF4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82A8CF04;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a8cf18
	if (!cr6.lt) goto loc_82A8CF18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A8CF18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82A8CF20;
	sub_82D3B548(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x82a8cef4
	if (cr6.lt) goto loc_82A8CEF4;
	// b 0x82a8ce0c
	goto loc_82A8CE0C;
}

__attribute__((alias("__imp__sub_82A8CF30"))) PPC_WEAK_FUNC(sub_82A8CF30);
PPC_FUNC_IMPL(__imp__sub_82A8CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A8CF38;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A8CF50;
	sub_83763EF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d0a0
	if (cr6.eq) goto loc_82A8D0A0;
	// cmplwi cr6,r31,17
	cr6.compare<uint32_t>(ctx.r31.u32, 17, xer);
	// bge cr6,0x82a8d0a0
	if (!cr6.lt) goto loc_82A8D0A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,8596
	ctx.r30.s64 = ctx.r11.s64 + 8596;
	// addi r9,r30,-316
	ctx.r9.s64 = ctx.r30.s64 + -316;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,128
	cr6.compare<int32_t>(ctx.r8.s32, 128, xer);
	// beq cr6,0x82a8d0a0
	if (cr6.eq) goto loc_82A8D0A0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A8CF88;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A8CF90;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d0a0
	if (cr6.eq) goto loc_82A8D0A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A8CFA0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d0a0
	if (cr6.eq) goto loc_82A8D0A0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ld r29,160(r27)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r27.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8cfe0
	if (cr6.eq) goto loc_82A8CFE0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A8CFD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8cfe0
	if (cr6.eq) goto loc_82A8CFE0;
	// bl 0x83a970c8
	ctx.lr = 0x82A8CFDC;
	sub_83A970C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82A8CFE0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8ca18
	ctx.lr = 0x82A8CFF0;
	sub_82A8CA18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8d0a0
	if (cr6.eq) goto loc_82A8D0A0;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A8D00C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a8d00c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A8D00C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A8D024;
	sub_83777E50(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A8D028:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8c108
	ctx.lr = 0x82A8D038;
	sub_82A8C108(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,17
	cr6.compare<uint32_t>(ctx.r31.u32, 17, xer);
	// blt cr6,0x82a8d028
	if (cr6.lt) goto loc_82A8D028;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83777d88
	ctx.lr = 0x82A8D058;
	sub_83777D88(ctx, base);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8d078
	if (cr6.eq) goto loc_82A8D078;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82A8D078;
	sub_831CE980(ctx, base);
loc_82A8D078:
	// bl 0x82bda618
	ctx.lr = 0x82A8D07C;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d0a0
	if (cr6.eq) goto loc_82A8D0A0;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82A8D098;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdaff8
	ctx.lr = 0x82A8D0A0;
	sub_82BDAFF8(ctx, base);
loc_82A8D0A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D0A8"))) PPC_WEAK_FUNC(sub_82A8D0A8);
PPC_FUNC_IMPL(__imp__sub_82A8D0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82a8cf30
	sub_82A8CF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D0C4"))) PPC_WEAK_FUNC(sub_82A8D0C4);
PPC_FUNC_IMPL(__imp__sub_82A8D0C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8D0C8"))) PPC_WEAK_FUNC(sub_82A8D0C8);
PPC_FUNC_IMPL(__imp__sub_82A8D0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A8D0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A8D0DC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d1a8
	if (cr6.eq) goto loc_82A8D1A8;
	// li r10,9
	ctx.r10.s64 = 9;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A8D0FC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a8d0fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A8D0FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83777e50
	ctx.lr = 0x82A8D10C;
	sub_83777E50(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r28,r11,8280
	ctx.r28.s64 = ctx.r11.s64 + 8280;
loc_82A8D11C:
	// lwzx r5,r31,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmpwi cr6,r5,128
	cr6.compare<int32_t>(ctx.r5.s32, 128, xer);
	// beq cr6,0x82a8d170
	if (cr6.eq) goto loc_82A8D170;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a76558
	ctx.lr = 0x82A8D138;
	sub_82A76558(ctx, base);
	// cmplwi cr6,r30,14
	cr6.compare<uint32_t>(ctx.r30.u32, 14, xer);
	// blt cr6,0x82a8d158
	if (cr6.lt) goto loc_82A8D158;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// bgt cr6,0x82a8d158
	if (cr6.gt) goto loc_82A8D158;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// b 0x82a8d170
	goto loc_82A8D170;
loc_82A8D158:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8d170
	if (cr6.eq) goto loc_82A8D170;
	// lwz r10,204(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
loc_82A8D170:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,68
	cr6.compare<uint32_t>(ctx.r31.u32, 68, xer);
	// blt cr6,0x82a8d11c
	if (cr6.lt) goto loc_82A8D11C;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,204(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82a8ca18
	ctx.lr = 0x82A8D1A8;
	sub_82A8CA18(ctx, base);
loc_82A8D1A8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D1B0"))) PPC_WEAK_FUNC(sub_82A8D1B0);
PPC_FUNC_IMPL(__imp__sub_82A8D1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8D1B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A8D1C4;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d278
	if (cr6.eq) goto loc_82A8D278;
	// ld r29,160(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x8376d2d8
	ctx.lr = 0x82A8D1E4;
	sub_8376D2D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8d0c8
	ctx.lr = 0x82A8D1EC;
	sub_82A8D0C8(ctx, base);
	// bl 0x82bda618
	ctx.lr = 0x82A8D1F0;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d278
	if (cr6.eq) goto loc_82A8D278;
	// addi r4,r3,216
	ctx.r4.s64 = ctx.r3.s64 + 216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A8D20C;
	sub_83777E50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A8D218;
	sub_82BD9DB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bda020
	ctx.lr = 0x82A8D224;
	sub_82BDA020(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r11,187
	ctx.r9.u64 = ctx.r11.u64 | 187;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a8d244
	if (!cr6.eq) goto loc_82A8D244;
	// bl 0x82bd9fa8
	ctx.lr = 0x82A8D240;
	sub_82BD9FA8(ctx, base);
	// b 0x82a8d24c
	goto loc_82A8D24C;
loc_82A8D244:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bdc058
	ctx.lr = 0x82A8D24C;
	sub_82BDC058(ctx, base);
loc_82A8D24C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bd9e08
	ctx.lr = 0x82A8D26C;
	sub_82BD9E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A8D278;
	sub_82BD9DB8(ctx, base);
loc_82A8D278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D280"))) PPC_WEAK_FUNC(sub_82A8D280);
PPC_FUNC_IMPL(__imp__sub_82A8D280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A8D288;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82A8D294;
	sub_82BDA618(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82A8D298;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a8d2ac
	if (!cr6.eq) goto loc_82A8D2AC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A8D2AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,8476
	ctx.r4.s64 = ctx.r10.s64 + 8476;
	// bl 0x837b0c10
	ctx.lr = 0x82A8D2C4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d21bf8
	ctx.lr = 0x82A8D2D4;
	sub_82D21BF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8c598
	ctx.lr = 0x82A8D2E0;
	sub_82A8C598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8d0c8
	ctx.lr = 0x82A8D2E8;
	sub_82A8D0C8(ctx, base);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a8d2fc
	if (!cr6.eq) goto loc_82A8D2FC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A8D2FC:
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82A8D30C;
	sub_82D1EAC0(ctx, base);
	// ld r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 160);
	// bl 0x8376d748
	ctx.lr = 0x82A8D314;
	sub_8376D748(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a8d344
	if (cr6.eq) goto loc_82A8D344;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A8D330;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,319
	ctx.r5.u64 = ctx.r5.u64 | 319;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82A8D344;
	sub_82D20EB8(ctx, base);
loc_82A8D344:
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,65
	ctx.r5.u64 = ctx.r5.u64 | 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82A8D358;
	sub_82D20EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D364"))) PPC_WEAK_FUNC(sub_82A8D364);
PPC_FUNC_IMPL(__imp__sub_82A8D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D368"))) PPC_WEAK_FUNC(sub_82A8D368);
PPC_FUNC_IMPL(__imp__sub_82A8D368) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a8d39c
	if (!cr6.eq) goto loc_82A8D39C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a8d394
	if (!cr6.eq) goto loc_82A8D394;
	// bl 0x82a8d1b0
	ctx.lr = 0x82A8D394;
	sub_82A8D1B0(ctx, base);
loc_82A8D394:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_82A8D39C:
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

__attribute__((alias("__imp__sub_82A8D3B0"))) PPC_WEAK_FUNC(sub_82A8D3B0);
PPC_FUNC_IMPL(__imp__sub_82A8D3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A8D3B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82A8D3C8;
	sub_82BDC848(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,8712
	ctx.r9.s64 = ctx.r11.s64 + 8712;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,200(r26)
	PPC_STORE_U32(ctx.r26.u32 + 200, ctx.r30.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r31,r26,220
	ctx.r31.s64 = ctx.r26.s64 + 220;
	// stw r8,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r8.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,212(r26)
	PPC_STORE_U32(ctx.r26.u32 + 212, ctx.r30.u32);
	// addi r27,r26,204
	ctx.r27.s64 = ctx.r26.s64 + 204;
	// stw r30,220(r26)
	PPC_STORE_U32(ctx.r26.u32 + 220, ctx.r30.u32);
	// stw r30,224(r26)
	PPC_STORE_U32(ctx.r26.u32 + 224, ctx.r30.u32);
	// stw r30,228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 228, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82a816e0
	ctx.lr = 0x82A8D41C;
	sub_82A816E0(ctx, base);
	// stw r30,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r30.u32);
	// stw r30,240(r26)
	PPC_STORE_U32(ctx.r26.u32 + 240, ctx.r30.u32);
	// lwz r4,208(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// lwz r29,204(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a8d454
	if (cr6.eq) goto loc_82A8D454;
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
	ctx.lr = 0x82A8D44C;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82A8D454:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x82a8d474
	if (cr6.eq) goto loc_82A8D474;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a814a8
	ctx.lr = 0x82A8D474;
	sub_82A814A8(ctx, base);
loc_82A8D474:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82c9cf00
	ctx.lr = 0x82A8D490;
	sub_82C9CF00(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82A8D49C;
	sub_82AD5E38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82A8D4A8;
	sub_82AD5E38(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r29,17
	ctx.r29.s64 = 17;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
loc_82A8D4B8:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x82A8D4C8;
	sub_835977D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82a8d528
	if (cr6.eq) goto loc_82A8D528;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a8d514
	if (!cr6.lt) goto loc_82A8D514;
	// neg. r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82a8d514
	if (cr0.eq) goto loc_82A8D514;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// b 0x82a8d528
	goto loc_82A8D528;
loc_82A8D514:
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82A8D528:
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a81af0
	ctx.lr = 0x82A8D538;
	sub_82A81AF0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r3,1
	xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bge 0x82a8d57c
	if (!cr0.lt) goto loc_82A8D57C;
	// neg. r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82a8d57c
	if (cr0.eq) goto loc_82A8D57C;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// b 0x82a8d590
	goto loc_82A8D590;
loc_82A8D57C:
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_82A8D590:
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bge cr6,0x82a8d5cc
	if (!cr6.lt) goto loc_82A8D5CC;
	// neg. r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a8d5cc
	if (cr0.eq) goto loc_82A8D5CC;
	// subfic r10,r3,-1
	xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r3.s64;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// b 0x82a8d5d8
	goto loc_82A8D5D8;
loc_82A8D5CC:
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_82A8D5D8:
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82c9c9d0
	ctx.lr = 0x82A8D5F0;
	sub_82C9C9D0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x82a8d4b8
	if (!cr0.eq) goto loc_82A8D4B8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D604"))) PPC_WEAK_FUNC(sub_82A8D604);
PPC_FUNC_IMPL(__imp__sub_82A8D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D608"))) PPC_WEAK_FUNC(sub_82A8D608);
PPC_FUNC_IMPL(__imp__sub_82A8D608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a8d630
	if (cr6.lt) goto loc_82A8D630;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a8d634
	goto loc_82A8D634;
loc_82A8D630:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A8D634:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,244
	ctx.r4.s64 = 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A8D650;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d668
	if (cr6.eq) goto loc_82A8D668;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a8d3b0
	ctx.lr = 0x82A8D664;
	sub_82A8D3B0(ctx, base);
	// b 0x82a8d66c
	goto loc_82A8D66C;
loc_82A8D668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8D66C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8D684"))) PPC_WEAK_FUNC(sub_82A8D684);
PPC_FUNC_IMPL(__imp__sub_82A8D684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D688"))) PPC_WEAK_FUNC(sub_82A8D688);
PPC_FUNC_IMPL(__imp__sub_82A8D688) {
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
	// bl 0x82bfb928
	ctx.lr = 0x82A8D6A4;
	sub_82BFB928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d6c4
	if (cr6.eq) goto loc_82A8D6C4;
	// lwz r30,776(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// bl 0x82bfb928
	ctx.lr = 0x82A8D6B4;
	sub_82BFB928(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82bfbee8
	ctx.lr = 0x82A8D6C4;
	sub_82BFBEE8(ctx, base);
loc_82A8D6C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A8D6CC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,9320
	ctx.r4.s64 = ctx.r11.s64 + 9320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A8D6E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a8d6f8
	if (cr6.eq) goto loc_82A8D6F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82A8D6F8;
	sub_82D30530(ctx, base);
loc_82A8D6F8:
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

__attribute__((alias("__imp__sub_82A8D714"))) PPC_WEAK_FUNC(sub_82A8D714);
PPC_FUNC_IMPL(__imp__sub_82A8D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D718"))) PPC_WEAK_FUNC(sub_82A8D718);
PPC_FUNC_IMPL(__imp__sub_82A8D718) {
	PPC_FUNC_PROLOGUE();
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8D724"))) PPC_WEAK_FUNC(sub_82A8D724);
PPC_FUNC_IMPL(__imp__sub_82A8D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

