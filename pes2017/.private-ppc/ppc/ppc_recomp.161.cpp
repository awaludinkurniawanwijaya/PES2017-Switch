#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C934C4"))) PPC_WEAK_FUNC(sub_82C934C4);
PPC_FUNC_IMPL(__imp__sub_82C934C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C934C8"))) PPC_WEAK_FUNC(sub_82C934C8);
PPC_FUNC_IMPL(__imp__sub_82C934C8) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r31,-488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -488);
	// bl 0x82d19a78
	ctx.lr = 0x82C934E8;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82C934F0;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93588
	if (cr6.eq) goto loc_82C93588;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r30,r11,-6920
	ctx.r30.s64 = ctx.r11.s64 + -6920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9351C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93588
	if (cr6.eq) goto loc_82C93588;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,293
	ctx.r4.u64 = ctx.r4.u64 | 293;
	// bl 0x82d29598
	ctx.lr = 0x82C93530;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C93548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93588
	if (cr6.eq) goto loc_82C93588;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,214
	ctx.r4.u64 = ctx.r4.u64 | 214;
	// bl 0x82d29598
	ctx.lr = 0x82C9355C;
	sub_82D29598(ctx, base);
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
	ctx.lr = 0x82C93574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93588
	if (cr6.eq) goto loc_82C93588;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,297
	ctx.r4.u64 = ctx.r4.u64 | 297;
	// bl 0x82d29598
	ctx.lr = 0x82C93588;
	sub_82D29598(ctx, base);
loc_82C93588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C935A0"))) PPC_WEAK_FUNC(sub_82C935A0);
PPC_FUNC_IMPL(__imp__sub_82C935A0) {
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
	ctx.lr = 0x82C935B8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c935d4
	if (cr6.eq) goto loc_82C935D4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C935C8;
	sub_831F8200(ctx, base);
	// bl 0x82d9e478
	ctx.lr = 0x82C935CC;
	sub_82D9E478(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
loc_82C935D4:
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C935E0;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-6804
	ctx.r5.s64 = ctx.r11.s64 + -6804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C935F4;
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

__attribute__((alias("__imp__sub_82C93608"))) PPC_WEAK_FUNC(sub_82C93608);
PPC_FUNC_IMPL(__imp__sub_82C93608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C93610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8bb28
	ctx.lr = 0x82C93620;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c93690
	if (cr6.eq) goto loc_82C93690;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c9365c
	if (cr6.eq) goto loc_82C9365C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82c93718
	if (!cr6.eq) goto loc_82C93718;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-6796
	ctx.r5.s64 = ctx.r11.s64 + -6796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C93654;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C9365C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9366C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9367C;
	sub_82D19788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C93688;
	sub_82D19720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C93690:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C93698;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C936A0;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93718
	if (cr6.eq) goto loc_82C93718;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82C936B8;
	sub_82D19D40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82C936C8;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93718
	if (cr6.eq) goto loc_82C93718;
loc_82C936D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C936DC;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93704
	if (cr6.eq) goto loc_82C93704;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r31,r28
	ctx.r5.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C93704;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C93704:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82C93710;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c936d0
	if (cr6.lt) goto loc_82C936D0;
loc_82C93718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C93720"))) PPC_WEAK_FUNC(sub_82C93720);
PPC_FUNC_IMPL(__imp__sub_82C93720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C93728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82C93734;
	sub_82D19CD0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r28,168
	ctx.r28.s64 = 168;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c937d0
	if (!cr6.lt) goto loc_82C937D0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C93768;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c9378c
	if (cr6.gt) goto loc_82C9378C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9378C;
	sub_831CC188(ctx, base);
loc_82C9378C:
	// mulli r10,r29,168
	ctx.r10.s64 = ctx.r29.s64 * 168;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c937c8
	if (!cr6.eq) goto loc_82C937C8;
	// ori r5,r5,613
	ctx.r5.u64 = ctx.r5.u64 | 613;
	// bctrl 
	ctx.lr = 0x82C937C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C937C8:
	// ori r5,r5,612
	ctx.r5.u64 = ctx.r5.u64 | 612;
	// bctrl 
	ctx.lr = 0x82C937D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C937D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C937D8"))) PPC_WEAK_FUNC(sub_82C937D8);
PPC_FUNC_IMPL(__imp__sub_82C937D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82C937E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c93804
	if (cr6.eq) goto loc_82C93804;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c937e8
	if (!cr6.eq) goto loc_82C937E8;
	// blr 
	return;
loc_82C93804:
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stb r9,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C93824"))) PPC_WEAK_FUNC(sub_82C93824);
PPC_FUNC_IMPL(__imp__sub_82C93824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C93828"))) PPC_WEAK_FUNC(sub_82C93828);
PPC_FUNC_IMPL(__imp__sub_82C93828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r11,168
	ctx.r11.s64 = 168;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r11,r8,r11
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x82c9388c
	if (!cr6.gt) goto loc_82C9388C;
	// mulli r11,r4,168
	ctx.r11.s64 = ctx.r4.s64 * 168;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C93864;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93884
	if (cr6.eq) goto loc_82C93884;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831f8200
	ctx.lr = 0x82C93878;
	sub_831F8200(ctx, base);
	// bl 0x82d9e478
	ctx.lr = 0x82C9387C;
	sub_82D9E478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c937d8
	ctx.lr = 0x82C93884;
	sub_82C937D8(ctx, base);
loc_82C93884:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_82C9388C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C938A4"))) PPC_WEAK_FUNC(sub_82C938A4);
PPC_FUNC_IMPL(__imp__sub_82C938A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C938A8"))) PPC_WEAK_FUNC(sub_82C938A8);
PPC_FUNC_IMPL(__imp__sub_82C938A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,152
	ctx.r10.s64 = 152;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r10,r6,r10
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r10.s32);
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r8,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r8.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82c938ec
	if (!cr6.eq) goto loc_82C938EC;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c938ec
	if (!cr6.gt) goto loc_82C938EC;
	// mulli r8,r11,152
	ctx.r8.s64 = ctx.r11.s64 * 152;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x82c938f4
	goto loc_82C938F4;
loc_82C938EC:
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r9,-152
	ctx.r9.s64 = ctx.r9.s64 + -152;
loc_82C938F4:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9391c
	if (!cr6.eq) goto loc_82C9391C;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82C9391C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C93924"))) PPC_WEAK_FUNC(sub_82C93924);
PPC_FUNC_IMPL(__imp__sub_82C93924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C93928"))) PPC_WEAK_FUNC(sub_82C93928);
PPC_FUNC_IMPL(__imp__sub_82C93928) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r5,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r5.u8);
	// bl 0x82b59518
	ctx.lr = 0x82C9397C;
	sub_82B59518(ctx, base);
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

__attribute__((alias("__imp__sub_82C93994"))) PPC_WEAK_FUNC(sub_82C93994);
PPC_FUNC_IMPL(__imp__sub_82C93994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C93998"))) PPC_WEAK_FUNC(sub_82C93998);
PPC_FUNC_IMPL(__imp__sub_82C93998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82c939d0
	if (cr6.eq) goto loc_82C939D0;
loc_82C939BC:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82c16c98
	ctx.lr = 0x82C939C4;
	sub_82C16C98(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c939bc
	if (!cr6.eq) goto loc_82C939BC;
loc_82C939D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C939E8"))) PPC_WEAK_FUNC(sub_82C939E8);
PPC_FUNC_IMPL(__imp__sub_82C939E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C939F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c93e0c
	if (cr6.eq) goto loc_82C93E0C;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r26,168
	ctx.r26.s64 = 168;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r28,r3,96
	ctx.r28.s64 = ctx.r3.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c93e0c
	if (!cr6.lt) goto loc_82C93E0C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82d21408
	ctx.lr = 0x82C93A34;
	sub_82D21408(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,-476(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -476);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C93A54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93e0c
	if (cr6.eq) goto loc_82C93E0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-468(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -468);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C93A7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93e0c
	if (cr6.eq) goto loc_82C93E0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-480(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -480);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C93AA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93e0c
	if (cr6.eq) goto loc_82C93E0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-472(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -472);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C93ACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93e0c
	if (cr6.eq) goto loc_82C93E0C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c93afc
	if (cr6.gt) goto loc_82C93AFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C93AFC;
	sub_831CC188(ctx, base);
loc_82C93AFC:
	// mulli r10,r29,168
	ctx.r10.s64 = ctx.r29.s64 * 168;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82c93928
	ctx.lr = 0x82C93B0C;
	sub_82C93928(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C93B10;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93e04
	if (cr6.eq) goto loc_82C93E04;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C93B20;
	sub_831F8200(ctx, base);
	// bl 0x82d9e478
	ctx.lr = 0x82C93B24;
	sub_82D9E478(ctx, base);
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82d9ebd8
	ctx.lr = 0x82C93B34;
	sub_82D9EBD8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C93B48;
	sub_82D291E0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-7446
	ctx.r30.s64 = ctx.r11.s64 + -7446;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,538
	ctx.r4.s64 = ctx.r30.s64 + 538;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C93B6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,554
	ctx.r4.s64 = ctx.r30.s64 + 554;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C93B88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,566
	ctx.r4.s64 = ctx.r30.s64 + 566;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C93BA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r4,193(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 193);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82c93bb8
	if (!cr6.eq) goto loc_82C93BB8;
	// addi r4,r30,578
	ctx.r4.s64 = ctx.r30.s64 + 578;
	// b 0x82c93c24
	goto loc_82C93C24;
loc_82C93BB8:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c93c14
	if (cr6.lt) goto loc_82C93C14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,594
	ctx.r4.s64 = ctx.r30.s64 + 594;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C93BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,606
	ctx.r4.s64 = ctx.r30.s64 + 606;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C93C00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r4,r4,345
	ctx.r4.u64 = ctx.r4.u64 | 345;
	// bl 0x82d29598
	ctx.lr = 0x82C93C10;
	sub_82D29598(ctx, base);
	// b 0x82c93c3c
	goto loc_82C93C3C;
loc_82C93C14:
	// lbz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c93c3c
	if (!cr6.eq) goto loc_82C93C3C;
	// addi r4,r30,622
	ctx.r4.s64 = ctx.r30.s64 + 622;
loc_82C93C24:
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
	ctx.lr = 0x82C93C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C93C3C:
	// lwz r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// blt cr6,0x82c93d40
	if (cr6.lt) goto loc_82C93D40;
	// beq cr6,0x82c93d34
	if (cr6.eq) goto loc_82C93D34;
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bne cr6,0x82c93d60
	if (!cr6.eq) goto loc_82C93D60;
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bgt cr6,0x82c93d1c
	if (cr6.gt) goto loc_82C93D1C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c93d1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C93D1C;
	// bdzf 4*cr6+eq,0x82c93cb8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C93CB8;
	// bdzf 4*cr6+eq,0x82c93d1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C93D1C;
	// bdzf 4*cr6+eq,0x82c93ccc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C93CCC;
	// bdzf 4*cr6+eq,0x82c93ce0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C93CE0;
	// bdzf 4*cr6+eq,0x82c93cf4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C93CF4;
	// bne cr6,0x82c93d08
	if (!cr6.eq) goto loc_82C93D08;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,165
	ctx.r4.u64 = ctx.r4.u64 | 165;
	// bl 0x82d04220
	ctx.lr = 0x82C93CB4;
	sub_82D04220(ctx, base);
	// b 0x82c93d50
	goto loc_82C93D50;
loc_82C93CB8:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,414
	ctx.r4.u64 = ctx.r4.u64 | 414;
	// bl 0x82d04220
	ctx.lr = 0x82C93CC8;
	sub_82D04220(ctx, base);
	// b 0x82c93d50
	goto loc_82C93D50;
loc_82C93CCC:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,555
	ctx.r4.u64 = ctx.r4.u64 | 555;
	// bl 0x82d04220
	ctx.lr = 0x82C93CDC;
	sub_82D04220(ctx, base);
	// b 0x82c93d50
	goto loc_82C93D50;
loc_82C93CE0:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,556
	ctx.r4.u64 = ctx.r4.u64 | 556;
	// bl 0x82d04220
	ctx.lr = 0x82C93CF0;
	sub_82D04220(ctx, base);
	// b 0x82c93d50
	goto loc_82C93D50;
loc_82C93CF4:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,557
	ctx.r4.u64 = ctx.r4.u64 | 557;
	// bl 0x82d04220
	ctx.lr = 0x82C93D04;
	sub_82D04220(ctx, base);
	// b 0x82c93d50
	goto loc_82C93D50;
loc_82C93D08:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,499
	ctx.r4.u64 = ctx.r4.u64 | 499;
	// bl 0x82d04220
	ctx.lr = 0x82C93D18;
	sub_82D04220(ctx, base);
	// b 0x82c93d50
	goto loc_82C93D50;
loc_82C93D1C:
	// bl 0x835fc1d8
	ctx.lr = 0x82C93D20;
	sub_835FC1D8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82C93D24;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x82C93D30;
	sub_8259D6C0(ctx, base);
	// b 0x82c93d50
	goto loc_82C93D50;
loc_82C93D34:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,614
	ctx.r4.u64 = ctx.r4.u64 | 614;
	// b 0x82c93d48
	goto loc_82C93D48;
loc_82C93D40:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,615
	ctx.r4.u64 = ctx.r4.u64 | 615;
loc_82C93D48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82C93D50;
	sub_82D042A8(ctx, base);
loc_82C93D50:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c93d64
	if (!cr6.lt) goto loc_82C93D64;
loc_82C93D60:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82C93D64:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r6,312(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82C93D78;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C93D8C;
	sub_82D291E0(ctx, base);
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x82c93da4
	if (cr6.lt) goto loc_82C93DA4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82C93DA4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82C93DB4;
	sub_82D3D3B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C93DC0;
	sub_837B0C10(ctx, base);
	// lis r4,39
	ctx.r4.s64 = 2555904;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82C93DD8;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C93DEC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C93DF4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C93DFC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C93E04;
	sub_8387E8E0(ctx, base);
loc_82C93E04:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82c16c98
	ctx.lr = 0x82C93E0C;
	sub_82C16C98(ctx, base);
loc_82C93E0C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C93E14"))) PPC_WEAK_FUNC(sub_82C93E14);
PPC_FUNC_IMPL(__imp__sub_82C93E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C93E18"))) PPC_WEAK_FUNC(sub_82C93E18);
PPC_FUNC_IMPL(__imp__sub_82C93E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C93E20;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r25,168
	ctx.r25.s64 = 168;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c93f80
	if (!cr6.lt) goto loc_82C93F80;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r28,r11,-6764
	ctx.r28.s64 = ctx.r11.s64 + -6764;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r28,-24
	ctx.r3.s64 = ctx.r28.s64 + -24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82C93E68;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93f80
	if (cr6.eq) goto loc_82C93F80;
	// bl 0x82d86078
	ctx.lr = 0x82C93E78;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c93f80
	if (cr6.eq) goto loc_82C93F80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82c93ea8
	if (cr6.gt) goto loc_82C93EA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C93EA8;
	sub_831CC188(ctx, base);
loc_82C93EA8:
	// mulli r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 * 168;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82c93928
	ctx.lr = 0x82C93EB8;
	sub_82C93928(ctx, base);
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C93EC0;
	sub_831F8200(ctx, base);
	// bl 0x82d9e478
	ctx.lr = 0x82C93EC4;
	sub_82D9E478(ctx, base);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d9e380
	ctx.lr = 0x82C93ED0;
	sub_82D9E380(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// bl 0x82d9ebd8
	ctx.lr = 0x82C93F08;
	sub_82D9EBD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04220
	ctx.lr = 0x82C93F14;
	sub_82D04220(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a6b900
	ctx.lr = 0x82C93F24;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82C93F38;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C93F40;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82C93F4C;
	sub_82D2AAB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C93F5C;
	sub_82D19788(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83103100
	ctx.lr = 0x82C93F68;
	sub_83103100(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C93F70;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C93F78;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82c16c98
	ctx.lr = 0x82C93F80;
	sub_82C16C98(ctx, base);
loc_82C93F80:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C93F88"))) PPC_WEAK_FUNC(sub_82C93F88);
PPC_FUNC_IMPL(__imp__sub_82C93F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82c93fc0
	if (cr6.eq) goto loc_82C93FC0;
loc_82C93FAC:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82c16c98
	ctx.lr = 0x82C93FB4;
	sub_82C16C98(ctx, base);
	// addi r31,r31,152
	ctx.r31.s64 = ctx.r31.s64 + 152;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c93fac
	if (!cr6.eq) goto loc_82C93FAC;
loc_82C93FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C93FD8"))) PPC_WEAK_FUNC(sub_82C93FD8);
PPC_FUNC_IMPL(__imp__sub_82C93FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C93FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c94048
	if (cr6.eq) goto loc_82C94048;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82C93FF8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lbz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r7,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r7.u8);
	// lbz r6,9(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r6,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r6.u8);
	// bl 0x82b57f88
	ctx.lr = 0x82C94034;
	sub_82B57F88(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c93ff8
	if (!cr6.eq) goto loc_82C93FF8;
loc_82C94048:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C94054"))) PPC_WEAK_FUNC(sub_82C94054);
PPC_FUNC_IMPL(__imp__sub_82C94054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94058"))) PPC_WEAK_FUNC(sub_82C94058);
PPC_FUNC_IMPL(__imp__sub_82C94058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C94060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c940d0
	if (cr6.eq) goto loc_82C940D0;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82C94078:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c940bc
	if (cr6.eq) goto loc_82C940BC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lbz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r7,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r7.u8);
	// lbz r6,9(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r6,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r6.u8);
	// bl 0x82b59518
	ctx.lr = 0x82C940BC;
	sub_82B59518(ctx, base);
loc_82C940BC:
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c94078
	if (!cr6.eq) goto loc_82C94078;
loc_82C940D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C940DC"))) PPC_WEAK_FUNC(sub_82C940DC);
PPC_FUNC_IMPL(__imp__sub_82C940DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C940E0"))) PPC_WEAK_FUNC(sub_82C940E0);
PPC_FUNC_IMPL(__imp__sub_82C940E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C940E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82C940F8;
	sub_82D19CD0(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r28,168
	ctx.r28.s64 = 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r29,96
	ctx.r30.s64 = ctx.r29.s64 + 96;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c941bc
	if (!cr6.lt) goto loc_82C941BC;
	// bl 0x82d86078
	ctx.lr = 0x82C94120;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c941bc
	if (cr6.eq) goto loc_82C941BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c93828
	ctx.lr = 0x82C94138;
	sub_82C93828(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c9415c
	if (cr6.gt) goto loc_82C9415C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9415C;
	sub_831CC188(ctx, base);
loc_82C9415C:
	// mulli r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 * 168;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,17(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c941b0
	if (!cr6.eq) goto loc_82C941B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c93928
	ctx.lr = 0x82C94178;
	sub_82C93928(ctx, base);
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831f8200
	ctx.lr = 0x82C94184;
	sub_831F8200(ctx, base);
	// bl 0x82d9e478
	ctx.lr = 0x82C94188;
	sub_82D9E478(ctx, base);
	// stw r31,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r31.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-6812
	ctx.r5.s64 = ctx.r11.s64 + -6812;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C941A0;
	sub_82D20DA8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82c16c98
	ctx.lr = 0x82C941A8;
	sub_82C16C98(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C941B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c93e18
	ctx.lr = 0x82C941BC;
	sub_82C93E18(ctx, base);
loc_82C941BC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C941C4"))) PPC_WEAK_FUNC(sub_82C941C4);
PPC_FUNC_IMPL(__imp__sub_82C941C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C941C8"))) PPC_WEAK_FUNC(sub_82C941C8);
PPC_FUNC_IMPL(__imp__sub_82C941C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c9420c
	if (cr6.eq) goto loc_82C9420C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d9f610
	ctx.lr = 0x82C941F8;
	sub_82D9F610(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c93f88
	ctx.lr = 0x82C94208;
	sub_82C93F88(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C9420C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C94224"))) PPC_WEAK_FUNC(sub_82C94224);
PPC_FUNC_IMPL(__imp__sub_82C94224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94228"))) PPC_WEAK_FUNC(sub_82C94228);
PPC_FUNC_IMPL(__imp__sub_82C94228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C94230;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,390
	ctx.r11.s64 = 25559040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,6241
	ctx.r10.u64 = ctx.r11.u64 | 6241;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c94254
	if (!cr6.gt) goto loc_82C94254;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C94254;
	sub_831CC150(ctx, base);
loc_82C94254:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,168
	ctx.r26.s64 = 168;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c942f8
	if (!cr6.lt) goto loc_82C942F8;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,168
	ctx.r28.s64 = ctx.r4.s64 * 168;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82C9428C;
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
	// bl 0x82c94058
	ctx.lr = 0x82C942B0;
	sub_82C94058(ctx, base);
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
	// beq cr6,0x82c942e0
	if (cr6.eq) goto loc_82C942E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82c93998
	ctx.lr = 0x82C942D0;
	sub_82C93998(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C942E0;
	sub_825952B8(ctx, base);
loc_82C942E0:
	// mulli r11,r26,168
	ctx.r11.s64 = ctx.r26.s64 * 168;
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
loc_82C942F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C94300"))) PPC_WEAK_FUNC(sub_82C94300);
PPC_FUNC_IMPL(__imp__sub_82C94300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C94308;
	__savegprlr_29(ctx, base);
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
	// bl 0x8308e078
	ctx.lr = 0x82C9431C;
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
	ctx.lr = 0x82C94334;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6672
	ctx.r9.s64 = ctx.r11.s64 + -6672;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// beq cr6,0x82c94390
	if (cr6.eq) goto loc_82C94390;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c93fd8
	ctx.lr = 0x82C9437C;
	sub_82C93FD8(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82c93998
	ctx.lr = 0x82C9438C;
	sub_82C93998(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82C94390:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -496);
	// bl 0x82d20ae0
	ctx.lr = 0x82C943A0;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-504(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -504);
	// bl 0x82d20ae0
	ctx.lr = 0x82C943B0;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-500(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -500);
	// bl 0x82d20ae0
	ctx.lr = 0x82C943C0;
	sub_82D20AE0(ctx, base);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-492(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -492);
	// bl 0x82d23390
	ctx.lr = 0x82C943D4;
	sub_82D23390(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r7,-6980
	ctx.r3.s64 = ctx.r7.s64 + -6980;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd6558
	ctx.lr = 0x82C943EC;
	sub_82BD6558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c94404
	if (cr6.eq) goto loc_82C94404;
	// bl 0x83103100
	ctx.lr = 0x82C94400;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C94404:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9440C"))) PPC_WEAK_FUNC(sub_82C9440C);
PPC_FUNC_IMPL(__imp__sub_82C9440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94410"))) PPC_WEAK_FUNC(sub_82C94410);
PPC_FUNC_IMPL(__imp__sub_82C94410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6672
	ctx.r9.s64 = ctx.r11.s64 + -6672;
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
	// beq cr6,0x82c94470
	if (cr6.eq) goto loc_82C94470;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c93998
	ctx.lr = 0x82C9445C;
	sub_82C93998(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C94470;
	sub_825952B8(ctx, base);
loc_82C94470:
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
	ctx.lr = 0x82C94488;
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

__attribute__((alias("__imp__sub_82C944A0"))) PPC_WEAK_FUNC(sub_82C944A0);
PPC_FUNC_IMPL(__imp__sub_82C944A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c94410
	ctx.lr = 0x82C944C0;
	sub_82C94410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c944d8
	if (cr6.eq) goto loc_82C944D8;
	// bl 0x82416268
	ctx.lr = 0x82C944D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C944D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C944F0"))) PPC_WEAK_FUNC(sub_82C944F0);
PPC_FUNC_IMPL(__imp__sub_82C944F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,390
	ctx.r10.s64 = 25559040;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,168
	ctx.r9.s64 = 168;
	// ori r8,r10,6241
	ctx.r8.u64 = ctx.r10.u64 | 6241;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c94524
	if (!cr6.lt) goto loc_82C94524;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82C94524:
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
	// blt cr6,0x82c94554
	if (cr6.lt) goto loc_82C94554;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82C94554:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c94560
	if (!cr6.lt) goto loc_82C94560;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82C94560:
	// b 0x82c94228
	sub_82C94228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C94564"))) PPC_WEAK_FUNC(sub_82C94564);
PPC_FUNC_IMPL(__imp__sub_82C94564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C94568"))) PPC_WEAK_FUNC(sub_82C94568);
PPC_FUNC_IMPL(__imp__sub_82C94568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bge cr6,0x82c945a0
	if (!cr6.lt) goto loc_82C945A0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82c945a4
	if (!cr6.gt) goto loc_82C945A4;
loc_82C945A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C945A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c945f4
	if (cr6.eq) goto loc_82C945F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,168
	ctx.r9.s64 = 168;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82c945d8
	if (!cr6.eq) goto loc_82C945D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c944f0
	ctx.lr = 0x82C945D8;
	sub_82C944F0(ctx, base);
loc_82C945D8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c94620
	if (cr6.eq) goto loc_82C94620;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 * 168;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82c9461c
	goto loc_82C9461C;
loc_82C945F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9460c
	if (!cr6.eq) goto loc_82C9460C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c944f0
	ctx.lr = 0x82C9460C;
	sub_82C944F0(ctx, base);
loc_82C9460C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c94620
	if (cr6.eq) goto loc_82C94620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C9461C:
	// bl 0x82c93928
	ctx.lr = 0x82C94620;
	sub_82C93928(ctx, base);
loc_82C94620:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
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

__attribute__((alias("__imp__sub_82C94644"))) PPC_WEAK_FUNC(sub_82C94644);
PPC_FUNC_IMPL(__imp__sub_82C94644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94648"))) PPC_WEAK_FUNC(sub_82C94648);
PPC_FUNC_IMPL(__imp__sub_82C94648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c94670
	if (cr6.lt) goto loc_82C94670;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c94674
	goto loc_82C94674;
loc_82C94670:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C94674:
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
	ctx.lr = 0x82C94690;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c946a8
	if (cr6.eq) goto loc_82C946A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c94300
	ctx.lr = 0x82C946A4;
	sub_82C94300(ctx, base);
	// b 0x82c946ac
	goto loc_82C946AC;
loc_82C946A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C946AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C946C4"))) PPC_WEAK_FUNC(sub_82C946C4);
PPC_FUNC_IMPL(__imp__sub_82C946C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C946C8"))) PPC_WEAK_FUNC(sub_82C946C8);
PPC_FUNC_IMPL(__imp__sub_82C946C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82C946D0;
	__savegprlr_17(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r22,r3,96
	ctx.r22.s64 = ctx.r3.s64 + 96;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c9470c
	if (cr6.eq) goto loc_82C9470C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// bl 0x82c93fd8
	ctx.lr = 0x82C946F8;
	sub_82C93FD8(ctx, base);
	// addi r5,r22,12
	ctx.r5.s64 = ctx.r22.s64 + 12;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c93998
	ctx.lr = 0x82C94708;
	sub_82C93998(ctx, base);
	// stw r31,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r31.u32);
loc_82C9470C:
	// bl 0x82d86078
	ctx.lr = 0x82C94710;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c94bc0
	if (cr6.eq) goto loc_82C94BC0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x82C94728;
	sub_831F8200(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x82d9e478
	ctx.lr = 0x82C94730;
	sub_82D9E478(ctx, base);
	// stb r31,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r31.u8);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r19,2
	ctx.r19.s64 = 2;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r23,8
	ctx.r23.s64 = 8;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r24,28
	ctx.r24.s64 = 28;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// li r28,152
	ctx.r28.s64 = 152;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
loc_82C94784:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stb r25,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r25.u8);
	// stb r31,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r31.u8);
	// bl 0x82d9e478
	ctx.lr = 0x82C947AC;
	sub_82D9E478(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82da0320
	ctx.lr = 0x82C947B8;
	sub_82DA0320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c947ec
	if (!cr6.eq) goto loc_82C947EC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c94a1c
	if (cr6.eq) goto loc_82C94A1C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82c93f88
	ctx.lr = 0x82C947DC;
	sub_82C93F88(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82c94a18
	goto loc_82C94A18;
loc_82C947EC:
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stb r31,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r31.u8);
	// stw r26,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r26.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// stw r23,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r23.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r31.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// bl 0x82b57df0
	ctx.lr = 0x82C9482C;
	sub_82B57DF0(ctx, base);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stb r31,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r31.u8);
	// bl 0x82b57df0
	ctx.lr = 0x82C9484C;
	sub_82B57DF0(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw r10,r10,r28
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// subfze r9,r27
	temp.u8 = ~ctx.r27.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c94894
	if (!cr6.eq) goto loc_82C94894;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c94894
	if (!cr6.gt) goto loc_82C94894;
	// mulli r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 * 152;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x82c94898
	goto loc_82C94898;
loc_82C94894:
	// addi r9,r7,-152
	ctx.r9.s64 = ctx.r7.s64 + -152;
loc_82C94898:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subfze r9,r27
	temp.u8 = ~ctx.r27.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// stw r5,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r5.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c948d0
	if (!cr6.eq) goto loc_82C948D0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c948d0
	if (!cr6.gt) goto loc_82C948D0;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82c948d4
	goto loc_82C948D4;
loc_82C948D0:
	// addi r11,r7,-152
	ctx.r11.s64 = ctx.r7.s64 + -152;
loc_82C948D4:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82b57f88
	ctx.lr = 0x82C948E0;
	sub_82B57F88(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// subfc r10,r7,r9
	xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subfze r10,r27
	temp.u8 = ~ctx.r27.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82c9495c
	if (!cr6.eq) goto loc_82C9495C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82c938a8
	ctx.lr = 0x82C94914;
	sub_82C938A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c94938
	if (!cr6.eq) goto loc_82C94938;
	// stb r25,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r25.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c94568
	ctx.lr = 0x82C94930;
	sub_82C94568(ctx, base);
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
	// b 0x82c94958
	goto loc_82C94958;
loc_82C94938:
	// lbz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c94950
	if (!cr6.eq) goto loc_82C94950;
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x82c94954
	goto loc_82C94954;
loc_82C94950:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_82C94954:
	// bl 0x82c94568
	ctx.lr = 0x82C94958;
	sub_82C94568(ctx, base);
loc_82C94958:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C9495C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c949d0
	if (cr6.eq) goto loc_82C949D0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82c94978
	goto loc_82C94978;
loc_82C94974:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C94978:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stb r31,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r31.u8);
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c94bc8
	if (!cr6.gt) goto loc_82C94BC8;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// bl 0x82b57f88
	ctx.lr = 0x82C949B0;
	sub_82B57F88(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c94568
	ctx.lr = 0x82C949BC;
	sub_82C94568(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c94974
	if (cr6.lt) goto loc_82C94974;
loc_82C949D0:
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82c16c98
	ctx.lr = 0x82C949D8;
	sub_82C16C98(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c94a1c
	if (cr6.eq) goto loc_82C94A1C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c94a10
	if (cr6.eq) goto loc_82C94A10;
loc_82C949F8:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82c16c98
	ctx.lr = 0x82C94A00;
	sub_82C16C98(ctx, base);
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c949f8
	if (!cr6.eq) goto loc_82C949F8;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C94A10:
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
loc_82C94A18:
	// bl 0x825952b8
	ctx.lr = 0x82C94A1C;
	sub_825952B8(ctx, base);
loc_82C94A1C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r21,28
	cr6.compare<uint32_t>(ctx.r21.u32, 28, xer);
	// blt cr6,0x82c94784
	if (cr6.lt) goto loc_82C94784;
	// lwz r23,160(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r24,164(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, xer);
	// beq cr6,0x82c94a60
	if (cr6.eq) goto loc_82C94A60;
loc_82C94A48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c94568
	ctx.lr = 0x82C94A54;
	sub_82C94568(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// bne cr6,0x82c94a48
	if (!cr6.eq) goto loc_82C94A48;
loc_82C94A60:
	// lwz r25,192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r26,196(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// beq cr6,0x82c94a8c
	if (cr6.eq) goto loc_82C94A8C;
loc_82C94A74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c94568
	ctx.lr = 0x82C94A80;
	sub_82C94568(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c94a74
	if (!cr6.eq) goto loc_82C94A74;
loc_82C94A8C:
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r28,180(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c94ab8
	if (cr6.eq) goto loc_82C94AB8;
loc_82C94AA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c94568
	ctx.lr = 0x82C94AAC;
	sub_82C94568(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c94aa0
	if (!cr6.eq) goto loc_82C94AA0;
loc_82C94AB8:
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c94ae4
	if (cr6.eq) goto loc_82C94AE4;
loc_82C94ACC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c94568
	ctx.lr = 0x82C94AD8;
	sub_82C94568(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c94acc
	if (!cr6.eq) goto loc_82C94ACC;
loc_82C94AE4:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c94b20
	if (cr6.eq) goto loc_82C94B20;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C94B00;
	sub_82D19788(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,292
	ctx.r5.u64 = ctx.r5.u64 | 292;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C94B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C94B20:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c94b48
	if (cr6.eq) goto loc_82C94B48;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c93998
	ctx.lr = 0x82C94B38;
	sub_82C93998(ctx, base);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825952b8
	ctx.lr = 0x82C94B48;
	sub_825952B8(ctx, base);
loc_82C94B48:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c94b70
	if (cr6.eq) goto loc_82C94B70;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c93998
	ctx.lr = 0x82C94B60;
	sub_82C93998(ctx, base);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82C94B70;
	sub_825952B8(ctx, base);
loc_82C94B70:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82c94b98
	if (cr6.eq) goto loc_82C94B98;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c93998
	ctx.lr = 0x82C94B88;
	sub_82C93998(ctx, base);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82C94B98;
	sub_825952B8(ctx, base);
loc_82C94B98:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82c94bc0
	if (cr6.eq) goto loc_82C94BC0;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c93998
	ctx.lr = 0x82C94BB0;
	sub_82C93998(ctx, base);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x82C94BC0;
	sub_825952B8(ctx, base);
loc_82C94BC0:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82C94BC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C94BD4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C94BD4"))) PPC_WEAK_FUNC(sub_82C94BD4);
PPC_FUNC_IMPL(__imp__sub_82C94BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94BD8"))) PPC_WEAK_FUNC(sub_82C94BD8);
PPC_FUNC_IMPL(__imp__sub_82C94BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c946c8
	ctx.lr = 0x82C94BF4;
	sub_82C946C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c934c8
	ctx.lr = 0x82C94BFC;
	sub_82C934C8(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r11,168
	ctx.r11.s64 = 168;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divw r5,r8,r11
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82C94C24;
	sub_82D20F50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8bb28
	ctx.lr = 0x82C94C2C;
	sub_82D8BB28(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c94c98
	if (cr6.eq) goto loc_82C94C98;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-6968
	ctx.r3.s64 = ctx.r11.s64 + -6968;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82C94C50;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c94c98
	if (cr6.eq) goto loc_82C94C98;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c94c7c
	if (cr6.eq) goto loc_82C94C7C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82c94c8c
	if (!cr6.eq) goto loc_82C94C8C;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,525
	ctx.r4.u64 = ctx.r4.u64 | 525;
	// b 0x82c94c84
	goto loc_82C94C84;
loc_82C94C7C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,524
	ctx.r4.u64 = ctx.r4.u64 | 524;
loc_82C94C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82C94C8C;
	sub_82D2ADA8(ctx, base);
loc_82C94C8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C94C98;
	sub_83103100(ctx, base);
loc_82C94C98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C94CB0"))) PPC_WEAK_FUNC(sub_82C94CB0);
PPC_FUNC_IMPL(__imp__sub_82C94CB0) {
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
	// bl 0x82c94bd8
	ctx.lr = 0x82C94CC0;
	sub_82C94BD8(ctx, base);
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

__attribute__((alias("__imp__sub_82C94CD4"))) PPC_WEAK_FUNC(sub_82C94CD4);
PPC_FUNC_IMPL(__imp__sub_82C94CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94CD8"))) PPC_WEAK_FUNC(sub_82C94CD8);
PPC_FUNC_IMPL(__imp__sub_82C94CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,-240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -240);
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C94CE8"))) PPC_WEAK_FUNC(sub_82C94CE8);
PPC_FUNC_IMPL(__imp__sub_82C94CE8) {
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
	// bl 0x82d199f0
	ctx.lr = 0x82C94D00;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c94d18
	if (!cr6.eq) goto loc_82C94D18;
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C94D18;
	sub_82D17DA0(ctx, base);
loc_82C94D18:
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

__attribute__((alias("__imp__sub_82C94D2C"))) PPC_WEAK_FUNC(sub_82C94D2C);
PPC_FUNC_IMPL(__imp__sub_82C94D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94D30"))) PPC_WEAK_FUNC(sub_82C94D30);
PPC_FUNC_IMPL(__imp__sub_82C94D30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C94D64;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,72(r7)
	PPC_STORE_U8(ctx.r7.u32 + 72, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,73(r6)
	PPC_STORE_U8(ctx.r6.u32 + 73, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C94DA8"))) PPC_WEAK_FUNC(sub_82C94DA8);
PPC_FUNC_IMPL(__imp__sub_82C94DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C94DB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1170
	ctx.r10.s64 = 76677120;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,18723
	ctx.r9.u64 = ctx.r10.u64 | 18723;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c94dfc
	if (cr6.lt) goto loc_82C94DFC;
	// addi r3,r7,24
	ctx.r3.s64 = ctx.r7.s64 + 24;
	// bl 0x82da8c38
	ctx.lr = 0x82C94DDC;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82C94DF0;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82C94DFC;
	sub_831CC150(ctx, base);
loc_82C94DFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c94e2c
	if (!cr6.eq) goto loc_82C94E2C;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82c94e6c
	goto loc_82C94E6C;
loc_82C94E2C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c94e54
	if (cr6.eq) goto loc_82C94E54;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c94e6c
	if (!cr6.eq) goto loc_82C94E6C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82c94e6c
	goto loc_82C94E6C;
loc_82C94E54:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c94e6c
	if (!cr6.eq) goto loc_82C94E6C;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82C94E6C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c94f90
	if (!cr6.eq) goto loc_82C94F90;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C94E88:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c94f10
	if (!cr6.eq) goto loc_82C94F10;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c94ed0
	if (!cr6.eq) goto loc_82C94ED0;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r29.u8);
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,72(r8)
	PPC_STORE_U8(ctx.r8.u32 + 72, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82c94f80
	goto loc_82C94F80;
loc_82C94ED0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c94ee8
	if (!cr6.eq) goto loc_82C94EE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x837df2c8
	ctx.lr = 0x82C94EE8;
	sub_837DF2C8(ctx, base);
loc_82C94EE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,72(r9)
	PPC_STORE_U8(ctx.r9.u32 + 72, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8256a538
	ctx.lr = 0x82C94F0C;
	sub_8256A538(ctx, base);
	// b 0x82c94f80
	goto loc_82C94F80;
loc_82C94F10:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c94f44
	if (!cr6.eq) goto loc_82C94F44;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r29.u8);
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,72(r8)
	PPC_STORE_U8(ctx.r8.u32 + 72, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82c94f80
	goto loc_82C94F80;
loc_82C94F44:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c94f5c
	if (!cr6.eq) goto loc_82C94F5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8256a538
	ctx.lr = 0x82C94F5C;
	sub_8256A538(ctx, base);
loc_82C94F5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,72(r9)
	PPC_STORE_U8(ctx.r9.u32 + 72, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x837df2c8
	ctx.lr = 0x82C94F80;
	sub_837DF2C8(ctx, base);
loc_82C94F80:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c94e88
	if (cr6.eq) goto loc_82C94E88;
loc_82C94F90:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C94FAC"))) PPC_WEAK_FUNC(sub_82C94FAC);
PPC_FUNC_IMPL(__imp__sub_82C94FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C94FB0"))) PPC_WEAK_FUNC(sub_82C94FB0);
PPC_FUNC_IMPL(__imp__sub_82C94FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C94FB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C94FC4;
	sub_82D86078(ctx, base);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da9678
	ctx.lr = 0x82C94FD0;
	sub_82DA9678(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82da9f18
	ctx.lr = 0x82C94FD8;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82da9890
	ctx.lr = 0x82C94FEC;
	sub_82DA9890(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82c95060
	if (cr6.eq) goto loc_82C95060;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C95004:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8d18
	ctx.lr = 0x82C9500C;
	sub_82DA8D18(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C95020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// stb r29,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8e68
	ctx.lr = 0x82C95034;
	sub_82DA8E68(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da9740
	ctx.lr = 0x82C95040;
	sub_82DA9740(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82C95048;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc5c0
	ctx.lr = 0x82C95050;
	sub_837DC5C0(ctx, base);
	// lwz r9,116(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c95004
	if (!cr6.eq) goto loc_82C95004;
loc_82C95060:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,-236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -236);
	// bl 0x82d20da8
	ctx.lr = 0x82C95074;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9507C"))) PPC_WEAK_FUNC(sub_82C9507C);
PPC_FUNC_IMPL(__imp__sub_82C9507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95080"))) PPC_WEAK_FUNC(sub_82C95080);
PPC_FUNC_IMPL(__imp__sub_82C95080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c950c0
	if (!cr6.eq) goto loc_82C950C0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82C95098:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82c950ac
	if (!cr6.lt) goto loc_82C950AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c950b4
	goto loc_82C950B4;
loc_82C950AC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C950B4:
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c95098
	if (cr6.eq) goto loc_82C95098;
loc_82C950C0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c950f0
	if (cr6.eq) goto loc_82C950F0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c950f0
	if (cr6.lt) goto loc_82C950F0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C950F0:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C95104"))) PPC_WEAK_FUNC(sub_82C95104);
PPC_FUNC_IMPL(__imp__sub_82C95104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95108"))) PPC_WEAK_FUNC(sub_82C95108);
PPC_FUNC_IMPL(__imp__sub_82C95108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C95110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,73(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 73);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c95168
	if (!cr6.eq) goto loc_82C95168;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82C95130:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c95108
	ctx.lr = 0x82C9513C;
	sub_82C95108(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da8c38
	ctx.lr = 0x82C95148;
	sub_82DA8C38(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82C95158;
	sub_825952B8(ctx, base);
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c95130
	if (cr6.eq) goto loc_82C95130;
loc_82C95168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C95170"))) PPC_WEAK_FUNC(sub_82C95170);
PPC_FUNC_IMPL(__imp__sub_82C95170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C95178;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,73(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 73);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c951a0
	if (cr6.eq) goto loc_82C951A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82C951A0;
	sub_831CC188(ctx, base);
loc_82C951A0:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x837dc5c0
	ctx.lr = 0x82C951AC;
	sub_837DC5C0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82c951c8
	if (cr6.eq) goto loc_82C951C8;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82c951ec
	goto loc_82C951EC;
loc_82C951C8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c951e0
	if (cr6.eq) goto loc_82C951E0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82c951ec
	goto loc_82C951EC;
loc_82C951E0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c952d8
	if (!cr6.eq) goto loc_82C952D8;
loc_82C951EC:
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c95200
	if (!cr6.eq) goto loc_82C95200;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82C95200:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c95218
	if (!cr6.eq) goto loc_82C95218;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82c95230
	goto loc_82C95230;
loc_82C95218:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c9522c
	if (!cr6.eq) goto loc_82C9522C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82c95230
	goto loc_82C95230;
loc_82C9522C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82C95230:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c95280
	if (!cr6.eq) goto loc_82C95280;
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c95254
	if (cr6.eq) goto loc_82C95254;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82c9527c
	goto loc_82C9527C;
loc_82C95254:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c9527c
	if (!cr6.eq) goto loc_82C9527C;
loc_82C95268:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c95268
	if (cr6.eq) goto loc_82C95268;
loc_82C9527C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82C95280:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c9536c
	if (!cr6.eq) goto loc_82C9536C;
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c952a8
	if (cr6.eq) goto loc_82C952A8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82c9536c
	goto loc_82C9536C;
loc_82C952A8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c952d0
	if (!cr6.eq) goto loc_82C952D0;
loc_82C952BC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c952bc
	if (cr6.eq) goto loc_82C952BC;
loc_82C952D0:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82c9536c
	goto loc_82C9536C;
loc_82C952D8:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c952f8
	if (!cr6.eq) goto loc_82C952F8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82c95320
	goto loc_82C95320;
loc_82C952F8:
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9530c
	if (!cr6.eq) goto loc_82C9530C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82C9530C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82C95320:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c95338
	if (!cr6.eq) goto loc_82C95338;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82c95354
	goto loc_82C95354;
loc_82C95338:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c95350
	if (!cr6.eq) goto loc_82C95350;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82c95354
	goto loc_82C95354;
loc_82C95350:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82C95354:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,72(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 72);
	// lbz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 72);
	// stb r9,72(r25)
	PPC_STORE_U8(ctx.r25.u32 + 72, ctx.r9.u8);
	// stb r10,72(r26)
	PPC_STORE_U8(ctx.r26.u32 + 72, ctx.r10.u8);
loc_82C9536C:
	// lbz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c95504
	if (!cr6.eq) goto loc_82C95504;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c95500
	if (cr6.eq) goto loc_82C95500;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C95390:
	// lbz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c95500
	if (!cr6.eq) goto loc_82C95500;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c95448
	if (!cr6.eq) goto loc_82C95448;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c953d0
	if (!cr6.eq) goto loc_82C953D0;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df2c8
	ctx.lr = 0x82C953CC;
	sub_837DF2C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82C953D0:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9549c
	if (!cr6.eq) goto loc_82C9549C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82c953fc
	if (!cr6.eq) goto loc_82C953FC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82c95498
	if (cr6.eq) goto loc_82C95498;
loc_82C953FC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82c95424
	if (!cr6.eq) goto loc_82C95424;
	// stb r29,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8256a538
	ctx.lr = 0x82C95420;
	sub_8256A538(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82C95424:
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// stb r29,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,72(r9)
	PPC_STORE_U8(ctx.r9.u32 + 72, ctx.r29.u8);
	// bl 0x837df2c8
	ctx.lr = 0x82C95444;
	sub_837DF2C8(ctx, base);
	// b 0x82c95500
	goto loc_82C95500;
loc_82C95448:
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9546c
	if (!cr6.eq) goto loc_82C9546C;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8256a538
	ctx.lr = 0x82C95468;
	sub_8256A538(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C9546C:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9549c
	if (!cr6.eq) goto loc_82C9549C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82c954b8
	if (!cr6.eq) goto loc_82C954B8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82c954b8
	if (!cr6.eq) goto loc_82C954B8;
loc_82C95498:
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
loc_82C9549C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c95390
	if (!cr6.eq) goto loc_82C95390;
	// b 0x82c95500
	goto loc_82C95500;
loc_82C954B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82c954e0
	if (!cr6.eq) goto loc_82C954E0;
	// stb r29,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df2c8
	ctx.lr = 0x82C954DC;
	sub_837DF2C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C954E0:
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// stb r29,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,72(r9)
	PPC_STORE_U8(ctx.r9.u32 + 72, ctx.r29.u8);
	// bl 0x8256a538
	ctx.lr = 0x82C95500;
	sub_8256A538(ctx, base);
loc_82C95500:
	// stb r29,72(r28)
	PPC_STORE_U8(ctx.r28.u32 + 72, ctx.r29.u8);
loc_82C95504:
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82da8c38
	ctx.lr = 0x82C9550C;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82C95520;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c95534
	if (cr6.eq) goto loc_82C95534;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82C95534:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C95544"))) PPC_WEAK_FUNC(sub_82C95544);
PPC_FUNC_IMPL(__imp__sub_82C95544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95548"))) PPC_WEAK_FUNC(sub_82C95548);
PPC_FUNC_IMPL(__imp__sub_82C95548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C95550;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c955d4
	if (!cr6.eq) goto loc_82C955D4;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82C95588:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c955a4
	if (cr6.eq) goto loc_82C955A4;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82c955b0
	goto loc_82C955B0;
loc_82C955A4:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82C955B0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c955c4
	if (cr6.eq) goto loc_82C955C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c955c8
	goto loc_82C955C8;
loc_82C955C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82C955C8:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c95588
	if (cr6.eq) goto loc_82C95588;
loc_82C955D4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c95634
	if (cr6.eq) goto loc_82C95634;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9562c
	if (!cr6.eq) goto loc_82C9562C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c94da8
	ctx.lr = 0x82C95610;
	sub_82C94DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C9562C:
	// bl 0x837dca40
	ctx.lr = 0x82C95630;
	sub_837DCA40(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C95634:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c95678
	if (!cr6.lt) goto loc_82C95678;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c94da8
	ctx.lr = 0x82C9565C;
	sub_82C94DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C95678:
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82da8c38
	ctx.lr = 0x82C95680;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82C95694;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C956AC"))) PPC_WEAK_FUNC(sub_82C956AC);
PPC_FUNC_IMPL(__imp__sub_82C956AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C956B0"))) PPC_WEAK_FUNC(sub_82C956B0);
PPC_FUNC_IMPL(__imp__sub_82C956B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C956B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C956DC;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r10.u8);
	// stb r10,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r10.u8);
	// beq 0x82c95720
	if (cr0.eq) goto loc_82C95720;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82da8fd0
	ctx.lr = 0x82C95720;
	sub_82DA8FD0(ctx, base);
loc_82C95720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9572C"))) PPC_WEAK_FUNC(sub_82C9572C);
PPC_FUNC_IMPL(__imp__sub_82C9572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95730"))) PPC_WEAK_FUNC(sub_82C95730);
PPC_FUNC_IMPL(__imp__sub_82C95730) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c95108
	ctx.lr = 0x82C95750;
	sub_82C95108(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C95784"))) PPC_WEAK_FUNC(sub_82C95784);
PPC_FUNC_IMPL(__imp__sub_82C95784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95788"))) PPC_WEAK_FUNC(sub_82C95788);
PPC_FUNC_IMPL(__imp__sub_82C95788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C95790;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c957dc
	if (!cr6.eq) goto loc_82C957DC;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c957dc
	if (!cr6.eq) goto loc_82C957DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c95730
	ctx.lr = 0x82C957C4;
	sub_82C95730(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C957DC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c9580c
	if (cr6.eq) goto loc_82C9580C;
loc_82C957E4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x837dc5c0
	ctx.lr = 0x82C957F0;
	sub_837DC5C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c95170
	ctx.lr = 0x82C95800;
	sub_82C95170(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c957e4
	if (!cr6.eq) goto loc_82C957E4;
loc_82C9580C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9581C"))) PPC_WEAK_FUNC(sub_82C9581C);
PPC_FUNC_IMPL(__imp__sub_82C9581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95820"))) PPC_WEAK_FUNC(sub_82C95820);
PPC_FUNC_IMPL(__imp__sub_82C95820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C95828;
	__savegprlr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C95834;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95998
	if (cr6.eq) goto loc_82C95998;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C95844;
	sub_831F8200(ctx, base);
	// bl 0x82d9f458
	ctx.lr = 0x82C95848;
	sub_82D9F458(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95998
	if (cr6.eq) goto loc_82C95998;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82c95868
	if (!cr6.eq) goto loc_82C95868;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
loc_82C95868:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r8.u32);
	// bl 0x82ddc350
	ctx.lr = 0x82C9588C;
	sub_82DDC350(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95998
	if (cr6.eq) goto loc_82C95998;
loc_82C9589C:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82c58050
	ctx.lr = 0x82C958A4;
	sub_82C58050(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82c58050
	ctx.lr = 0x82C958AC;
	sub_82C58050(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c57b60
	ctx.lr = 0x82C958B4;
	sub_82C57B60(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c57b60
	ctx.lr = 0x82C958BC;
	sub_82C57B60(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ddc368
	ctx.lr = 0x82C958CC;
	sub_82DDC368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9597c
	if (cr6.eq) goto loc_82C9597C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C958DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8d18
	ctx.lr = 0x82C958E4;
	sub_82DA8D18(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// beq cr6,0x82c958f8
	if (cr6.eq) goto loc_82C958F8;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_82C958F8:
	// bl 0x82da8e68
	ctx.lr = 0x82C958FC;
	sub_82DA8E68(ctx, base);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82c95968
	if (cr6.eq) goto loc_82C95968;
	// addi r31,r29,112
	ctx.r31.s64 = ctx.r29.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c95080
	ctx.lr = 0x82C95920;
	sub_82C95080(ctx, base);
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c95968
	if (!cr6.eq) goto loc_82C95968;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82da8fd0
	ctx.lr = 0x82C95940;
	sub_82DA8FD0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c956b0
	ctx.lr = 0x82C9594C;
	sub_82C956B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82c95548
	ctx.lr = 0x82C95960;
	sub_82C95548(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82da8c38
	ctx.lr = 0x82C95968;
	sub_82DA8C38(ctx, base);
loc_82C95968:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82C95970;
	sub_82DA8C38(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x82c958dc
	if (cr6.lt) goto loc_82C958DC;
loc_82C9597C:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82da8c38
	ctx.lr = 0x82C95984;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82da8c38
	ctx.lr = 0x82C9598C;
	sub_82DA8C38(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x82c9589c
	if (cr6.lt) goto loc_82C9589C;
loc_82C95998:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C959A0"))) PPC_WEAK_FUNC(sub_82C959A0);
PPC_FUNC_IMPL(__imp__sub_82C959A0) {
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
	ctx.lr = 0x82C959BC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-280(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -280);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C959D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c959e8
	if (cr6.eq) goto loc_82C959E8;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d294d0
	ctx.lr = 0x82C959E8;
	sub_82D294D0(ctx, base);
loc_82C959E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C959F0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r30,r11,-6334
	ctx.r30.s64 = ctx.r11.s64 + -6334;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,654
	ctx.r4.s64 = ctx.r30.s64 + 654;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C95A10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,670
	ctx.r4.s64 = ctx.r30.s64 + 670;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C95A28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C95A4C;
	sub_8259CC28(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ori r4,r4,536
	ctx.r4.u64 = ctx.r4.u64 | 536;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d042a8
	ctx.lr = 0x82C95A68;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C95A70;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-276(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -276);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C95A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95aa4
	if (cr6.eq) goto loc_82C95AA4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C95AA4;
	sub_82D291E0(ctx, base);
loc_82C95AA4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c95ac4
	if (cr6.lt) goto loc_82C95AC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C95AC4;
	sub_825952B8(ctx, base);
loc_82C95AC4:
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

__attribute__((alias("__imp__sub_82C95ADC"))) PPC_WEAK_FUNC(sub_82C95ADC);
PPC_FUNC_IMPL(__imp__sub_82C95ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95AE0"))) PPC_WEAK_FUNC(sub_82C95AE0);
PPC_FUNC_IMPL(__imp__sub_82C95AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C95AE8;
	__savegprlr_21(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bge cr6,0x82c95e28
	if (!cr6.lt) goto loc_82C95E28;
	// bl 0x82d19a78
	ctx.lr = 0x82C95B00;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95e28
	if (cr6.eq) goto loc_82C95E28;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,-324(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -324);
	// bl 0x82d19a78
	ctx.lr = 0x82C95B18;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82C95B20;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95e28
	if (cr6.eq) goto loc_82C95E28;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-320
	ctx.r8.s64 = ctx.r10.s64 + -320;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C95B4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95e28
	if (cr6.eq) goto loc_82C95E28;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C95B68;
	sub_82D2B608(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C95B6C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95e28
	if (cr6.eq) goto loc_82C95E28;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C95B7C;
	sub_831F8200(ctx, base);
	// bl 0x82d9f458
	ctx.lr = 0x82C95B80;
	sub_82D9F458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95e28
	if (cr6.eq) goto loc_82C95E28;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82c58050
	ctx.lr = 0x82C95B94;
	sub_82C58050(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82c58050
	ctx.lr = 0x82C95B9C;
	sub_82C58050(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82c57b60
	ctx.lr = 0x82C95BA4;
	sub_82C57B60(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82c57b60
	ctx.lr = 0x82C95BAC;
	sub_82C57B60(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ddc368
	ctx.lr = 0x82C95BBC;
	sub_82DDC368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c95e18
	if (cr6.eq) goto loc_82C95E18;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// oris r9,r10,65532
	ctx.r9.u64 = ctx.r10.u64 | 4294705152;
	// lwz r8,248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// oris r6,r9,3
	ctx.r6.u64 = ctx.r9.u64 | 196608;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rlwimi r11,r7,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d860f0
	ctx.lr = 0x82C95BF8;
	sub_82D860F0(ctx, base);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bne cr6,0x82c95c10
	if (!cr6.eq) goto loc_82C95C10;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// b 0x82c95c20
	goto loc_82C95C20;
loc_82C95C10:
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82c95e18
	if (!cr6.eq) goto loc_82C95E18;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82C95C20:
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// stb r23,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r23.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82C95C54;
	sub_8259CB28(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c95c80
	if (!cr6.eq) goto loc_82C95C80;
	// bl 0x831156e8
	ctx.lr = 0x82C95C64;
	sub_831156E8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82C95C70;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8259d6c0
	ctx.lr = 0x82C95C80;
	sub_8259D6C0(ctx, base);
loc_82C95C80:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cb28
	ctx.lr = 0x82C95C94;
	sub_8259CB28(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c95cc0
	if (!cr6.eq) goto loc_82C95CC0;
	// bl 0x831156e8
	ctx.lr = 0x82C95CA4;
	sub_831156E8(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82C95CB0;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8259d6c0
	ctx.lr = 0x82C95CC0;
	sub_8259D6C0(ctx, base);
loc_82C95CC0:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r28,r11,-264
	ctx.r28.s64 = ctx.r11.s64 + -264;
	// addi r27,r10,-248
	ctx.r27.s64 = ctx.r10.s64 + -248;
	// addi r26,r9,-256
	ctx.r26.s64 = ctx.r9.s64 + -256;
	// addi r25,r8,-272
	ctx.r25.s64 = ctx.r8.s64 + -272;
loc_82C95D00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C95D18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r23,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r23.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c95d30
	if (cr6.eq) goto loc_82C95D30;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C95D30:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82C95D44;
	sub_82D329F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C95D5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C95D6C;
	sub_82D291E0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C95D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x82d294d0
	ctx.lr = 0x82C95D90;
	sub_82D294D0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82C95DA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c95dc4
	if (cr6.eq) goto loc_82C95DC4;
	// subf r11,r24,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r24.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C95DC4;
	sub_82D2AEC8(ctx, base);
loc_82C95DC4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// blt cr6,0x82c95d00
	if (cr6.lt) goto loc_82C95D00;
	// addi r31,r1,168
	ctx.r31.s64 = ctx.r1.s64 + 168;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82C95DE4:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c95e04
	if (cr6.lt) goto loc_82C95E04;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C95E04;
	sub_825952B8(ctx, base);
loc_82C95E04:
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// bge 0x82c95de4
	if (!cr0.lt) goto loc_82C95DE4;
loc_82C95E18:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82da8c38
	ctx.lr = 0x82C95E20;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82da8c38
	ctx.lr = 0x82C95E28;
	sub_82DA8C38(ctx, base);
loc_82C95E28:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C95E30"))) PPC_WEAK_FUNC(sub_82C95E30);
PPC_FUNC_IMPL(__imp__sub_82C95E30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c95820
	ctx.lr = 0x82C95E4C;
	sub_82C95820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c959a0
	ctx.lr = 0x82C95E54;
	sub_82C959A0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C95E58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c95ae0
	ctx.lr = 0x82C95E64;
	sub_82C95AE0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82c95e58
	if (cr6.lt) goto loc_82C95E58;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C95E7C;
	sub_83102DB0(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c95eb8
	if (!cr6.gt) goto loc_82C95EB8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C95E98;
	sub_82D19788(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C95EB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C95EB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C95EC8;
	sub_82D19788(ctx, base);
	// li r4,214
	ctx.r4.s64 = 214;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82C95ED4;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C95EE4;
	sub_82D19788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C95EFC"))) PPC_WEAK_FUNC(sub_82C95EFC);
PPC_FUNC_IMPL(__imp__sub_82C95EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95F00"))) PPC_WEAK_FUNC(sub_82C95F00);
PPC_FUNC_IMPL(__imp__sub_82C95F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C95F08;
	__savegprlr_29(ctx, base);
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
	// bl 0x8308e078
	ctx.lr = 0x82C95F1C;
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
	ctx.lr = 0x82C95F34;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-5568
	ctx.r9.s64 = ctx.r11.s64 + -5568;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x82c94d30
	ctx.lr = 0x82C95F74;
	sub_82C94D30(ctx, base);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82c95108
	ctx.lr = 0x82C95F84;
	sub_82C95108(ctx, base);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r4,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lwz r4,-336(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -336);
	// bl 0x82d20ae0
	ctx.lr = 0x82C95FB0;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-332(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -332);
	// bl 0x82d20ae0
	ctx.lr = 0x82C95FC0;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-328(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -328);
	// bl 0x82d23390
	ctx.lr = 0x82C95FD4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82C95FE0;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C95FEC"))) PPC_WEAK_FUNC(sub_82C95FEC);
PPC_FUNC_IMPL(__imp__sub_82C95FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C95FF0"))) PPC_WEAK_FUNC(sub_82C95FF0);
PPC_FUNC_IMPL(__imp__sub_82C95FF0) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5568
	ctx.r9.s64 = ctx.r11.s64 + -5568;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c95788
	ctx.lr = 0x82C96030;
	sub_82C95788(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82C96044;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82C9604C;
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

__attribute__((alias("__imp__sub_82C96060"))) PPC_WEAK_FUNC(sub_82C96060);
PPC_FUNC_IMPL(__imp__sub_82C96060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c95ff0
	ctx.lr = 0x82C96080;
	sub_82C95FF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c96098
	if (cr6.eq) goto loc_82C96098;
	// bl 0x82416268
	ctx.lr = 0x82C96094;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C96098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C960B0"))) PPC_WEAK_FUNC(sub_82C960B0);
PPC_FUNC_IMPL(__imp__sub_82C960B0) {
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
	// bl 0x82c95e30
	ctx.lr = 0x82C960C0;
	sub_82C95E30(ctx, base);
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

__attribute__((alias("__imp__sub_82C960D4"))) PPC_WEAK_FUNC(sub_82C960D4);
PPC_FUNC_IMPL(__imp__sub_82C960D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C960D8"))) PPC_WEAK_FUNC(sub_82C960D8);
PPC_FUNC_IMPL(__imp__sub_82C960D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c96100
	if (cr6.lt) goto loc_82C96100;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c96104
	goto loc_82C96104;
loc_82C96100:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C96104:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C96120;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96138
	if (cr6.eq) goto loc_82C96138;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c95f00
	ctx.lr = 0x82C96134;
	sub_82C95F00(ctx, base);
	// b 0x82c9613c
	goto loc_82C9613C;
loc_82C96138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9613C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C96154"))) PPC_WEAK_FUNC(sub_82C96154);
PPC_FUNC_IMPL(__imp__sub_82C96154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C96158"))) PPC_WEAK_FUNC(sub_82C96158);
PPC_FUNC_IMPL(__imp__sub_82C96158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C96160;
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
	ctx.lr = 0x82C96174;
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
	ctx.lr = 0x82C9618C;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4312
	ctx.r9.s64 = ctx.r11.s64 + -4312;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82C961B4;
	sub_82D19788(ctx, base);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-104(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -104);
	// bl 0x82d20ae0
	ctx.lr = 0x82C961C4;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-100(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -100);
	// bl 0x82d20ae0
	ctx.lr = 0x82C961D4;
	sub_82D20AE0(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-96(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -96);
	// bl 0x82d20ae0
	ctx.lr = 0x82C961E4;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-92(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -92);
	// bl 0x82d23390
	ctx.lr = 0x82C961F8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C96204"))) PPC_WEAK_FUNC(sub_82C96204);
PPC_FUNC_IMPL(__imp__sub_82C96204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C96208"))) PPC_WEAK_FUNC(sub_82C96208);
PPC_FUNC_IMPL(__imp__sub_82C96208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4312
	ctx.r9.s64 = ctx.r11.s64 + -4312;
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
	ctx.lr = 0x82C96240;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c96258
	if (cr6.eq) goto loc_82C96258;
	// bl 0x82416268
	ctx.lr = 0x82C96254;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C96258:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C96270"))) PPC_WEAK_FUNC(sub_82C96270);
PPC_FUNC_IMPL(__imp__sub_82C96270) {
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
	ctx.lr = 0x82C96288;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c962bc
	if (cr6.eq) goto loc_82C962BC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C96298;
	sub_831F8200(ctx, base);
	// bl 0x82d9fca8
	ctx.lr = 0x82C9629C;
	sub_82D9FCA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C962A4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c962bc
	if (cr6.eq) goto loc_82C962BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C962B4;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C962B8;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82C962BC;
	sub_82D39100(ctx, base);
loc_82C962BC:
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

__attribute__((alias("__imp__sub_82C962D4"))) PPC_WEAK_FUNC(sub_82C962D4);
PPC_FUNC_IMPL(__imp__sub_82C962D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C962D8"))) PPC_WEAK_FUNC(sub_82C962D8);
PPC_FUNC_IMPL(__imp__sub_82C962D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82C962E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C962F0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96484
	if (cr6.eq) goto loc_82C96484;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C96300;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x82C96304;
	sub_82D9E470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d9e6a0
	ctx.lr = 0x82C9630C;
	sub_82D9E6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96484
	if (cr6.eq) goto loc_82C96484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x82C9631C;
	sub_825832F0(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r24,r11,-72
	ctx.r24.s64 = ctx.r11.s64 + -72;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
	// lis r25,-31776
	ctx.r25.s64 = -2082471936;
	// lis r21,-31776
	ctx.r21.s64 = -2082471936;
	// lis r22,-31776
	ctx.r22.s64 = -2082471936;
	// lis r23,-31776
	ctx.r23.s64 = -2082471936;
	// lis r26,-31776
	ctx.r26.s64 = -2082471936;
loc_82C96348:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82d19a78
	ctx.lr = 0x82C96354;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82C96360;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96474
	if (cr6.eq) goto loc_82C96474;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-88(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96474
	if (cr6.eq) goto loc_82C96474;
	// cmplw cr6,r29,r19
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, xer);
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// bge cr6,0x82c963d0
	if (!cr6.lt) goto loc_82C963D0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c96474
	if (!cr6.eq) goto loc_82C96474;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c963c8
	if (cr6.eq) goto loc_82C963C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C963C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C963C8:
	// lwz r4,36(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// b 0x82c9645c
	goto loc_82C9645C;
loc_82C963D0:
	// bne cr6,0x82c9642c
	if (!cr6.eq) goto loc_82C9642C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c96434
	if (cr6.eq) goto loc_82C96434;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c96400
	if (cr6.eq) goto loc_82C96400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96400;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C96400:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9641C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C96428;
	sub_82D17DA0(ctx, base);
	// b 0x82c96474
	goto loc_82C96474;
loc_82C9642C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c96474
	if (!cr6.eq) goto loc_82C96474;
loc_82C96434:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c96458
	if (cr6.eq) goto loc_82C96458;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C96458:
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
loc_82C9645C:
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
	ctx.lr = 0x82C96474;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C96474:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// blt cr6,0x82c96348
	if (cr6.lt) goto loc_82C96348;
loc_82C96484:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9648C"))) PPC_WEAK_FUNC(sub_82C9648C);
PPC_FUNC_IMPL(__imp__sub_82C9648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C96490"))) PPC_WEAK_FUNC(sub_82C96490);
PPC_FUNC_IMPL(__imp__sub_82C96490) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c962d8
	sub_82C962D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C96498"))) PPC_WEAK_FUNC(sub_82C96498);
PPC_FUNC_IMPL(__imp__sub_82C96498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c964c0
	if (cr6.lt) goto loc_82C964C0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c964c4
	goto loc_82C964C4;
loc_82C964C0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C964C4:
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
	ctx.lr = 0x82C964E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c964f8
	if (cr6.eq) goto loc_82C964F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c96158
	ctx.lr = 0x82C964F4;
	sub_82C96158(ctx, base);
	// b 0x82c964fc
	goto loc_82C964FC;
loc_82C964F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C964FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C96514"))) PPC_WEAK_FUNC(sub_82C96514);
PPC_FUNC_IMPL(__imp__sub_82C96514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C96518"))) PPC_WEAK_FUNC(sub_82C96518);
PPC_FUNC_IMPL(__imp__sub_82C96518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C96520;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C96530;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96b34
	if (cr6.eq) goto loc_82C96B34;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C96540;
	sub_825832D8(ctx, base);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c96730
	if (!cr6.eq) goto loc_82C96730;
	// lwz r30,88(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C96568;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C96584;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9658C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-32(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82C965A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c965c0
	if (cr6.eq) goto loc_82C965C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d45220
	ctx.lr = 0x82C965C0;
	sub_82D45220(ctx, base);
loc_82C965C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C965C8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C965D0;
	sub_82D33DB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C965EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82C965F0;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x82C965FC;
	sub_8311C260(ctx, base);
	// addi r28,r3,52
	ctx.r28.s64 = ctx.r3.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96608;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C96610;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-28(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C9662C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96678
	if (cr6.eq) goto loc_82C96678;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82c9664c
	if (cr6.eq) goto loc_82C9664C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82c96658
	goto loc_82C96658;
loc_82C9664C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r11,r11,-5167
	ctx.r11.s64 = ctx.r11.s64 + -5167;
	// addi r4,r11,-63
	ctx.r4.s64 = ctx.r11.s64 + -63;
loc_82C96658:
	// bl 0x837b0c10
	ctx.lr = 0x82C9665C;
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
	ctx.lr = 0x82C96670;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C96678;
	sub_8387E8E0(ctx, base);
loc_82C96678:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96680;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C96688;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C966A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c966b8
	if (cr6.eq) goto loc_82C966B8;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// ori r4,r4,93
	ctx.r4.u64 = ctx.r4.u64 | 93;
	// bl 0x82d29598
	ctx.lr = 0x82C966B8;
	sub_82D29598(ctx, base);
loc_82C966B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C966C0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C966C8;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C966E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96b34
	if (cr6.eq) goto loc_82C96B34;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d99c08
	ctx.lr = 0x82C966F8;
	sub_82D99C08(ctx, base);
	// lwz r4,88(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// bl 0x82d9a978
	ctx.lr = 0x82C96700;
	sub_82D9A978(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82d3a058
	ctx.lr = 0x82C96714;
	sub_82D3A058(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d331e0
	ctx.lr = 0x82C96728;
	sub_82D331E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C96730:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c96924
	if (cr6.eq) goto loc_82C96924;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c96924
	if (cr6.eq) goto loc_82C96924;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82c96924
	if (cr6.eq) goto loc_82C96924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96750;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9676C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96774;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C9677C;
	sub_82D33DB0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C96798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C967A0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C967BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96b34
	if (cr6.eq) goto loc_82C96B34;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r28,r11,-5167
	ctx.r28.s64 = ctx.r11.s64 + -5167;
	// addi r4,r28,-30
	ctx.r4.s64 = ctx.r28.s64 + -30;
	// bl 0x837b0c10
	ctx.lr = 0x82C967DC;
	sub_837B0C10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C967E8;
	sub_837B0C10(ctx, base);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c96894
	if (cr6.lt) goto loc_82C96894;
	// beq cr6,0x82c96868
	if (cr6.eq) goto loc_82C96868;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x82c968c8
	if (!cr6.eq) goto loc_82C968C8;
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c968c8
	if (!cr6.eq) goto loc_82C968C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9682C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,165
	ctx.r4.u64 = ctx.r4.u64 | 165;
	// bl 0x82d04220
	ctx.lr = 0x82C9683C;
	sub_82D04220(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82c96850
	if (!cr6.lt) goto loc_82C96850;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82C96850:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r6,116(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82C96864;
	sub_82D042A8(ctx, base);
	// b 0x82c968c8
	goto loc_82C968C8;
loc_82C96868:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C96888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,222
	ctx.r4.u64 = ctx.r4.u64 | 222;
	// b 0x82c968bc
	goto loc_82C968BC;
loc_82C96894:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C968B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
loc_82C968BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,116(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82d042a8
	ctx.lr = 0x82C968C8;
	sub_82D042A8(ctx, base);
loc_82C968C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C968D0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C968D8;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C968F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9690c
	if (cr6.eq) goto loc_82C9690C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C9690C;
	sub_82D291E0(ctx, base);
loc_82C9690C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C96914;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9691C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C96924:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9692C;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C96948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96950;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C96958;
	sub_82D33DB0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C96974;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9697C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96b34
	if (cr6.eq) goto loc_82C96B34;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c969bc
	if (!cr6.eq) goto loc_82C969BC;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82c969c8
	goto loc_82C969C8;
loc_82C969BC:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c969c8
	if (!cr6.eq) goto loc_82C969C8;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82C969C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x82d8ba80
	ctx.lr = 0x82C969D4;
	sub_82D8BA80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82c96a10
	if (cr6.eq) goto loc_82C96A10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C969F0;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96A0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c96a18
	goto loc_82C96A18;
loc_82C96A10:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C96A18;
	sub_82D2AEC8(ctx, base);
loc_82C96A18:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4368
	ctx.lr = 0x82C96A20;
	sub_82DA4368(ctx, base);
	// li r9,84
	ctx.r9.s64 = 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,104(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r6,92(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r4,88(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// bl 0x82d9a9f0
	ctx.lr = 0x82C96A3C;
	sub_82D9A9F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96A48;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C96A50;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C96A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96a9c
	if (cr6.eq) goto loc_82C96A9C;
	// bl 0x82dc9d40
	ctx.lr = 0x82C96A7C;
	sub_82DC9D40(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// beq cr6,0x82c96a98
	if (cr6.eq) goto loc_82C96A98;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
loc_82C96A98:
	// bl 0x82d291e0
	ctx.lr = 0x82C96A9C;
	sub_82D291E0(ctx, base);
loc_82C96A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96AA4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C96AAC;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C96AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96b34
	if (cr6.eq) goto loc_82C96B34;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(ctx.r11.s32, 84, xer);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r11,r11,-5167
	ctx.r11.s64 = ctx.r11.s64 + -5167;
	// bne cr6,0x82c96afc
	if (!cr6.eq) goto loc_82C96AFC;
	// addi r4,r11,-62
	ctx.r4.s64 = ctx.r11.s64 + -62;
	// bl 0x837b0c10
	ctx.lr = 0x82C96AF8;
	sub_837B0C10(ctx, base);
	// b 0x82c96b18
	goto loc_82C96B18;
loc_82C96AFC:
	// addi r4,r11,-31
	ctx.r4.s64 = ctx.r11.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82C96B04;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x82d8e6a0
	ctx.lr = 0x82C96B18;
	sub_82D8E6A0(ctx, base);
loc_82C96B18:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C96B2C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C96B34;
	sub_8387E8E0(ctx, base);
loc_82C96B34:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C96B3C"))) PPC_WEAK_FUNC(sub_82C96B3C);
PPC_FUNC_IMPL(__imp__sub_82C96B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C96B40"))) PPC_WEAK_FUNC(sub_82C96B40);
PPC_FUNC_IMPL(__imp__sub_82C96B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82C96B48;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96B54;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C96B70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96b84
	if (cr6.eq) goto loc_82C96B84;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,163
	ctx.r4.u64 = ctx.r4.u64 | 163;
	// bl 0x82d29598
	ctx.lr = 0x82C96B84;
	sub_82D29598(ctx, base);
loc_82C96B84:
	// bl 0x82d86078
	ctx.lr = 0x82C96B88;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96e78
	if (cr6.eq) goto loc_82C96E78;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C96B98;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x82C96B9C;
	sub_82D9E470(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82d9e6a0
	ctx.lr = 0x82C96BA4;
	sub_82D9E6A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96e78
	if (cr6.eq) goto loc_82C96E78;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825832f0
	ctx.lr = 0x82C96BC0;
	sub_825832F0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C96BCC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-76(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -76);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C96BE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96c38
	if (cr6.eq) goto loc_82C96C38;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r5,r14,1
	ctx.r5.s64 = ctx.r14.s64 + 1;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C96C1C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C96C30;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C96C38;
	sub_8387E8E0(ctx, base);
loc_82C96C38:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r18,-31776
	ctx.r18.s64 = -2082471936;
	// li r24,8
	ctx.r24.s64 = 8;
	// lis r17,-31776
	ctx.r17.s64 = -2082471936;
	// li r15,-1
	ctx.r15.s64 = -1;
	// lis r16,-31776
	ctx.r16.s64 = -2082471936;
	// lis r20,-31776
	ctx.r20.s64 = -2082471936;
	// lis r19,-31776
	ctx.r19.s64 = -2082471936;
	// lis r21,-31776
	ctx.r21.s64 = -2082471936;
	// addi r25,r11,-72
	ctx.r25.s64 = ctx.r11.s64 + -72;
loc_82C96C64:
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// stw r24,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// bl 0x82b57df0
	ctx.lr = 0x82C96CA4;
	sub_82B57DF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82d9f380
	ctx.lr = 0x82C96CB8;
	sub_82D9F380(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r6,r30
	ctx.r28.u64 = ctx.r6.u64 & ctx.r30.u64;
	// lwzx r29,r9,r25
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C96CE0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82C96CEC;
	sub_82D2E228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96e5c
	if (cr6.eq) goto loc_82C96E5C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// lwz r4,-88(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + -88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96D14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96e5c
	if (cr6.eq) goto loc_82C96E5C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c96e3c
	if (cr6.eq) goto loc_82C96E3C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c96e3c
	if (cr6.gt) goto loc_82C96E3C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-80(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + -80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96d68
	if (cr6.eq) goto loc_82C96D68;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d294d0
	ctx.lr = 0x82C96D68;
	sub_82D294D0(ctx, base);
loc_82C96D68:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,28(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82c96e20
	if (cr6.gt) goto loc_82C96E20;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c96dbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C96DBC;
	// bdzf 4*cr6+eq,0x82c96e20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C96E20;
	// bdzf 4*cr6+eq,0x82c96dd8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C96DD8;
	// bdzf 4*cr6+eq,0x82c96de4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C96DE4;
	// bdzf 4*cr6+eq,0x82c96df0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C96DF0;
	// bdzf 4*cr6+eq,0x82c96e20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C96E20;
	// bne cr6,0x82c96dc4
	if (!cr6.eq) goto loc_82C96DC4;
	// lwz r3,40(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 40);
	// b 0x82c96dfc
	goto loc_82C96DFC;
loc_82C96DBC:
	// lwz r3,44(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 44);
	// b 0x82c96dfc
	goto loc_82C96DFC;
loc_82C96DC4:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c96e20
	if (!cr6.eq) goto loc_82C96E20;
	// lwz r3,48(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// b 0x82c96dfc
	goto loc_82C96DFC;
loc_82C96DD8:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c96df8
	goto loc_82C96DF8;
loc_82C96DE4:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82c96df8
	goto loc_82C96DF8;
loc_82C96DF0:
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C96DF8:
	// bl 0x82d8ba80
	ctx.lr = 0x82C96DFC;
	sub_82D8BA80(ctx, base);
loc_82C96DFC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96e20
	if (cr6.eq) goto loc_82C96E20;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C96E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C96E20:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r14
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, xer);
	// bne cr6,0x82c96e5c
	if (!cr6.eq) goto loc_82C96E5C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c96518
	ctx.lr = 0x82C96E38;
	sub_82C96518(ctx, base);
	// b 0x82c96e5c
	goto loc_82C96E5C;
loc_82C96E3C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C96E4C;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C96E5C;
	sub_82D2AEC8(ctx, base);
loc_82C96E5C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c16c98
	ctx.lr = 0x82C96E64;
	sub_82C16C98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// blt cr6,0x82c96c64
	if (cr6.lt) goto loc_82C96C64;
loc_82C96E78:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C96E80"))) PPC_WEAK_FUNC(sub_82C96E80);
PPC_FUNC_IMPL(__imp__sub_82C96E80) {
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
	ctx.lr = 0x82C96E98;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C96E9C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82C96EA0;
	sub_82D390C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c96b40
	ctx.lr = 0x82C96EA8;
	sub_82C96B40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c962d8
	ctx.lr = 0x82C96EB4;
	sub_82C962D8(ctx, base);
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

__attribute__((alias("__imp__sub_82C96ECC"))) PPC_WEAK_FUNC(sub_82C96ECC);
PPC_FUNC_IMPL(__imp__sub_82C96ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C96ED0"))) PPC_WEAK_FUNC(sub_82C96ED0);
PPC_FUNC_IMPL(__imp__sub_82C96ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-3672
	ctx.r9.s64 = ctx.r11.s64 + -3672;
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
	// bl 0x82d86078
	ctx.lr = 0x82C96F08;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c96f20
	if (cr6.eq) goto loc_82C96F20;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C96F18;
	sub_831F8200(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d9e488
	ctx.lr = 0x82C96F20;
	sub_82D9E488(ctx, base);
loc_82C96F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7b2e8
	ctx.lr = 0x82C96F28;
	sub_82B7B2E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c96f40
	if (cr6.eq) goto loc_82C96F40;
	// bl 0x82416268
	ctx.lr = 0x82C96F3C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C96F40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C96F58"))) PPC_WEAK_FUNC(sub_82C96F58);
PPC_FUNC_IMPL(__imp__sub_82C96F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r3,156
	ctx.r30.s64 = ctx.r3.s64 + 156;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82C96F88;
	sub_835977D8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x82C96F9C;
	sub_835977D8(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82C96FB0;
	sub_835977D8(ctx, base);
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C96FDC"))) PPC_WEAK_FUNC(sub_82C96FDC);
PPC_FUNC_IMPL(__imp__sub_82C96FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C96FE0"))) PPC_WEAK_FUNC(sub_82C96FE0);
PPC_FUNC_IMPL(__imp__sub_82C96FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C96FE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b7b718
	ctx.lr = 0x82C97000;
	sub_82B7B718(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-3672
	ctx.r9.s64 = ctx.r11.s64 + -3672;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82d86078
	ctx.lr = 0x82C9701C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c97094
	if (cr6.eq) goto loc_82C97094;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C9702C;
	sub_831F8200(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c96f58
	ctx.lr = 0x82C97038;
	sub_82C96F58(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c97088
	if (!cr6.gt) goto loc_82C97088;
	// addi r28,r31,156
	ctx.r28.s64 = ctx.r31.s64 + 156;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C97050:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c970a0
	if (!cr6.gt) goto loc_82C970A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82b7adc0
	ctx.lr = 0x82C97074;
	sub_82B7ADC0(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c97050
	if (cr6.lt) goto loc_82C97050;
loc_82C97088:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9e488
	ctx.lr = 0x82C97094;
	sub_82D9E488(ctx, base);
loc_82C97094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C970A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C970AC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C970AC"))) PPC_WEAK_FUNC(sub_82C970AC);
PPC_FUNC_IMPL(__imp__sub_82C970AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C970B0"))) PPC_WEAK_FUNC(sub_82C970B0);
PPC_FUNC_IMPL(__imp__sub_82C970B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C970E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c970fc
	if (cr6.eq) goto loc_82C970FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c96fe0
	ctx.lr = 0x82C970F8;
	sub_82C96FE0(ctx, base);
	// b 0x82c97100
	goto loc_82C97100;
loc_82C970FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C97100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97118"))) PPC_WEAK_FUNC(sub_82C97118);
PPC_FUNC_IMPL(__imp__sub_82C97118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C97120;
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
	ctx.lr = 0x82C97134;
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
	ctx.lr = 0x82C9714C;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2280
	ctx.r9.s64 = ctx.r11.s64 + -2280;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82dd6420
	ctx.lr = 0x82C9716C;
	sub_82DD6420(ctx, base);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,336(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 336);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9717C;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,324(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 324);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9718C;
	sub_82D20AE0(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,328(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 328);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9719C;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	// bl 0x82d20ae0
	ctx.lr = 0x82C971AC;
	sub_82D20AE0(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// bl 0x82d23390
	ctx.lr = 0x82C971C0;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C971CC"))) PPC_WEAK_FUNC(sub_82C971CC);
PPC_FUNC_IMPL(__imp__sub_82C971CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C971D0"))) PPC_WEAK_FUNC(sub_82C971D0);
PPC_FUNC_IMPL(__imp__sub_82C971D0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82C971E8;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C971F0;
	sub_82DAB6D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d97600
	ctx.lr = 0x82C971F8;
	sub_82D97600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d17da0
	ctx.lr = 0x82C97204;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-2376
	ctx.r5.s64 = ctx.r11.s64 + -2376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C97218;
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

__attribute__((alias("__imp__sub_82C9722C"))) PPC_WEAK_FUNC(sub_82C9722C);
PPC_FUNC_IMPL(__imp__sub_82C9722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C97230"))) PPC_WEAK_FUNC(sub_82C97230);
PPC_FUNC_IMPL(__imp__sub_82C97230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2280
	ctx.r9.s64 = ctx.r11.s64 + -2280;
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
	ctx.lr = 0x82C97268;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c97280
	if (cr6.eq) goto loc_82C97280;
	// bl 0x82416268
	ctx.lr = 0x82C9727C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C97280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C97298"))) PPC_WEAK_FUNC(sub_82C97298);
PPC_FUNC_IMPL(__imp__sub_82C97298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C972A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x82dd6438
	ctx.lr = 0x82C972B0;
	sub_82DD6438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c972c8
	if (!cr6.eq) goto loc_82C972C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C972C8:
	// bl 0x82d86078
	ctx.lr = 0x82C972CC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C972D4;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x82C972D8;
	sub_82D9E470(ctx, base);
	// bl 0x82d9e6a0
	ctx.lr = 0x82C972DC;
	sub_82D9E6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C972E8;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82C972EC;
	sub_82D2EC40(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,-2752
	ctx.r29.s64 = ctx.r11.s64 + -2752;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// bl 0x82d2f098
	ctx.lr = 0x82C972FC;
	sub_82D2F098(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19b10
	ctx.lr = 0x82C97314;
	sub_82D19B10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82c97324
	if (!cr6.eq) goto loc_82C97324;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C97324:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82C97338;
	sub_82D20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d1eac0
	ctx.lr = 0x82C97348;
	sub_82D1EAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d1cda8
	ctx.lr = 0x82C97354;
	sub_82D1CDA8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82c97378
	if (!cr6.eq) goto loc_82C97378;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82C9736C;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C97378:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d19788
	ctx.lr = 0x82C97384;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,291
	ctx.r5.u64 = ctx.r5.u64 | 291;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C973A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,292
	ctx.r5.u64 = ctx.r5.u64 | 292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C973C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C973D0"))) PPC_WEAK_FUNC(sub_82C973D0);
PPC_FUNC_IMPL(__imp__sub_82C973D0) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x82dd64f8
	ctx.lr = 0x82C973E4;
	sub_82DD64F8(ctx, base);
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

__attribute__((alias("__imp__sub_82C97400"))) PPC_WEAK_FUNC(sub_82C97400);
PPC_FUNC_IMPL(__imp__sub_82C97400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c97428
	if (cr6.lt) goto loc_82C97428;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c9742c
	goto loc_82C9742C;
loc_82C97428:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C9742C:
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
	ctx.lr = 0x82C97448;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c97460
	if (cr6.eq) goto loc_82C97460;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c97118
	ctx.lr = 0x82C9745C;
	sub_82C97118(ctx, base);
	// b 0x82c97464
	goto loc_82C97464;
loc_82C97460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C97464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9747C"))) PPC_WEAK_FUNC(sub_82C9747C);
PPC_FUNC_IMPL(__imp__sub_82C9747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C97480"))) PPC_WEAK_FUNC(sub_82C97480);
PPC_FUNC_IMPL(__imp__sub_82C97480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82C97488;
	__savegprlr_18(ctx, base);
	// stwu r1,-1872(r1)
	ea = -1872 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r5.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C97498;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C974A0;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x82C974A4;
	sub_82D9E470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d9e6a0
	ctx.lr = 0x82C974AC;
	sub_82D9E6A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82c97bf0
	if (cr6.eq) goto loc_82C97BF0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r25,r11,-2416
	ctx.r25.s64 = ctx.r11.s64 + -2416;
	// addi r31,r23,100
	ctx.r31.s64 = ctx.r23.s64 + 100;
	// addi r4,r25,-216
	ctx.r4.s64 = ctx.r25.s64 + -216;
	// bl 0x837b0c10
	ctx.lr = 0x82C974D0;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,196
	ctx.r5.u64 = ctx.r5.u64 | 196;
	// bl 0x82a69a28
	ctx.lr = 0x82C974E4;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82c97510
	if (!cr6.eq) goto loc_82C97510;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r25,-204
	ctx.r4.s64 = ctx.r25.s64 + -204;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,1872
	ctx.r1.s64 = ctx.r1.s64 + 1872;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C97510:
	// lwz r11,1908(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1908);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x82c97bf0
	if (!cr6.lt) goto loc_82C97BF0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82b57f10
	ctx.lr = 0x82C97524;
	sub_82B57F10(ctx, base);
	// addi r5,r1,1908
	ctx.r5.s64 = ctx.r1.s64 + 1908;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9f380
	ctx.lr = 0x82C97534;
	sub_82D9F380(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stb r22,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r22.u8);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r21,-31776
	ctx.r21.s64 = -2082471936;
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82c97974
	if (cr6.gt) goto loc_82C97974;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c975cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C975CC;
	// bdzf 4*cr6+eq,0x82c9760c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C9760C;
	// bdzf 4*cr6+eq,0x82c97804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C97804;
	// bdzf 4*cr6+eq,0x82c97834
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C97834;
	// bdzf 4*cr6+eq,0x82c97864
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C97864;
	// bdzf 4*cr6+eq,0x82c97970
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C97970;
	// bne cr6,0x82c9766c
	if (!cr6.eq) goto loc_82C9766C;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,116
	ctx.r4.u64 = ctx.r4.u64 | 116;
	// bl 0x82d04220
	ctx.lr = 0x82C9759C;
	sub_82D04220(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x8292a3f8
	ctx.lr = 0x82C975A8;
	sub_8292A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C975B8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C975C8;
	sub_82A69AD0(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C975CC:
	// lis r4,45
	ctx.r4.s64 = 2949120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,115
	ctx.r4.u64 = ctx.r4.u64 | 115;
	// bl 0x82d04220
	ctx.lr = 0x82C975DC;
	sub_82D04220(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x8292a3f8
	ctx.lr = 0x82C975E8;
	sub_8292A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C975F8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97608;
	sub_82A69AD0(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C9760C:
	// bl 0x831156e8
	ctx.lr = 0x82C97610;
	sub_831156E8(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311c260
	ctx.lr = 0x82C97628;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82C97638;
	sub_831CE980(ctx, base);
	// addi r4,r1,1172
	ctx.r4.s64 = ctx.r1.s64 + 1172;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x837b0c10
	ctx.lr = 0x82C97644;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97654;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97664;
	sub_82A69AD0(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x82c97974
	goto loc_82C97974;
loc_82C9766C:
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c9769c
	if (!cr6.eq) goto loc_82C9769C;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97684;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,165
	ctx.r5.u64 = ctx.r5.u64 | 165;
	// bl 0x82a69a28
	ctx.lr = 0x82C97698;
	sub_82A69A28(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C9769C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c976c8
	if (!cr6.eq) goto loc_82C976C8;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C976B0;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,166
	ctx.r5.u64 = ctx.r5.u64 | 166;
	// bl 0x82a69a28
	ctx.lr = 0x82C976C4;
	sub_82A69A28(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C976C8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c976f4
	if (!cr6.eq) goto loc_82C976F4;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C976DC;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,414
	ctx.r5.u64 = ctx.r5.u64 | 414;
	// bl 0x82a69a28
	ctx.lr = 0x82C976F0;
	sub_82A69A28(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C976F4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c97720
	if (!cr6.eq) goto loc_82C97720;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97708;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,414
	ctx.r5.u64 = ctx.r5.u64 | 414;
	// bl 0x82a69a28
	ctx.lr = 0x82C9771C;
	sub_82A69A28(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C97720:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c9774c
	if (!cr6.eq) goto loc_82C9774C;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97734;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,555
	ctx.r5.u64 = ctx.r5.u64 | 555;
	// bl 0x82a69a28
	ctx.lr = 0x82C97748;
	sub_82A69A28(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C9774C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82c97778
	if (!cr6.eq) goto loc_82C97778;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97760;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,556
	ctx.r5.u64 = ctx.r5.u64 | 556;
	// bl 0x82a69a28
	ctx.lr = 0x82C97774;
	sub_82A69A28(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C97778:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82c977a4
	if (!cr6.eq) goto loc_82C977A4;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C9778C;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,557
	ctx.r5.u64 = ctx.r5.u64 | 557;
	// bl 0x82a69a28
	ctx.lr = 0x82C977A0;
	sub_82A69A28(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C977A4:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82c977d4
	if (!cr6.eq) goto loc_82C977D4;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C977B8;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,499
	ctx.r5.u64 = ctx.r5.u64 | 499;
	// bl 0x82a69a28
	ctx.lr = 0x82C977CC;
	sub_82A69A28(ctx, base);
	// li r19,1
	ctx.r19.s64 = 1;
	// b 0x82c97974
	goto loc_82C97974;
loc_82C977D4:
	// addi r4,r25,-192
	ctx.r4.s64 = ctx.r25.s64 + -192;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x837b0c10
	ctx.lr = 0x82C977E0;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C977F0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97800;
	sub_82A69AD0(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C97804:
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8292a3f8
	ctx.lr = 0x82C97810;
	sub_8292A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97820;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97830;
	sub_82A69AD0(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C97834:
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x8292a3f8
	ctx.lr = 0x82C97840;
	sub_8292A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97850;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97860;
	sub_82A69AD0(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C97864:
	// addi r4,r25,-825
	ctx.r4.s64 = ctx.r25.s64 + -825;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82C97870;
	sub_837B0C10(ctx, base);
	// addi r4,r25,-755
	ctx.r4.s64 = ctx.r25.s64 + -755;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82C9787C;
	sub_837B0C10(ctx, base);
	// addi r4,r25,-754
	ctx.r4.s64 = ctx.r25.s64 + -754;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82C97888;
	sub_837B0C10(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82d8b758
	ctx.lr = 0x82C97890;
	sub_82D8B758(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8b938
	ctx.lr = 0x82C9789C;
	sub_82D8B938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d042a8
	ctx.lr = 0x82C978A8;
	sub_82D042A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r6,392(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r5,388(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82d8ee48
	ctx.lr = 0x82C978C0;
	sub_82D8EE48(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c978d4
	if (!cr6.lt) goto loc_82C978D4;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_82C978D4:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c978e8
	if (!cr6.lt) goto loc_82C978E8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
loc_82C978E8:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,665
	ctx.r4.u64 = ctx.r4.u64 | 665;
	// bl 0x82d042a8
	ctx.lr = 0x82C978F8;
	sub_82D042A8(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x837b0c10
	ctx.lr = 0x82C97904;
	sub_837B0C10(ctx, base);
	// lis r5,640
	ctx.r5.s64 = 41943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// bl 0x82a69a28
	ctx.lr = 0x82C97918;
	sub_82A69A28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c9792c
	if (!cr6.lt) goto loc_82C9792C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C9792C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C97934;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,344(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 344);
	// bl 0x837b0c10
	ctx.lr = 0x82C97944;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97954;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9795C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C97964;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9796C;
	sub_8387E8E0(ctx, base);
	// b 0x82c97974
	goto loc_82C97974;
loc_82C97970:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82C97974:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C97984;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c97be0
	if (cr6.eq) goto loc_82C97BE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C979A0;
	sub_82D2D510(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c97be0
	if (cr6.eq) goto loc_82C97BE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-148
	ctx.r4.s64 = ctx.r25.s64 + -148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C979C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c97be0
	if (cr6.eq) goto loc_82C97BE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-140
	ctx.r4.s64 = ctx.r25.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C979E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c97be0
	if (cr6.eq) goto loc_82C97BE0;
	// clrlwi r24,r24,24
	ctx.r24.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x82c97a58
	if (!cr6.eq) goto loc_82C97A58;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82c97a58
	if (cr6.eq) goto loc_82C97A58;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r25,-92
	ctx.r4.s64 = ctx.r25.s64 + -92;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97A28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r25,-753
	ctx.r4.s64 = ctx.r25.s64 + -753;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C97A34;
	sub_837B0C10(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,344(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 344);
	// bl 0x837b0c10
	ctx.lr = 0x82C97A44;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97A54;
	sub_82A69AD0(ctx, base);
	// b 0x82c97a74
	goto loc_82C97A74;
loc_82C97A58:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r25,-112
	ctx.r4.s64 = ctx.r25.s64 + -112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97A74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C97A74:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c97bf8
	if (cr6.eq) goto loc_82C97BF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97A90;
	sub_82D2AEC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,376(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d45220
	ctx.lr = 0x82C97AA4;
	sub_82D45220(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97AB4;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97AC4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r25,-72
	ctx.r4.s64 = ctx.r25.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C97AE0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97AF0;
	sub_82D2AEC8(ctx, base);
loc_82C97AF0:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C97B00;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C97B0C;
	sub_8292A3F8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// bl 0x837b0c10
	ctx.lr = 0x82C97B20;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97B30;
	sub_82A69AD0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C97B3C;
	sub_8292A3F8(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,356(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// bl 0x837b0c10
	ctx.lr = 0x82C97B50;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97B60;
	sub_82A69AD0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82a6b9a8
	ctx.lr = 0x82C97B70;
	sub_82A6B9A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C97B7C;
	sub_8292A3F8(ctx, base);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,360(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 360);
	// bl 0x837b0c10
	ctx.lr = 0x82C97B90;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97BA0;
	sub_82A69AD0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82a6b9a8
	ctx.lr = 0x82C97BB0;
	sub_82A6B9A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C97BBC;
	sub_8292A3F8(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,364(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 364);
	// bl 0x837b0c10
	ctx.lr = 0x82C97BD0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97BE0;
	sub_82A69AD0(ctx, base);
loc_82C97BE0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C97BE8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82c16c98
	ctx.lr = 0x82C97BF0;
	sub_82C16C98(ctx, base);
loc_82C97BF0:
	// addi r1,r1,1872
	ctx.r1.s64 = ctx.r1.s64 + 1872;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C97BF8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82c97da4
	if (cr6.eq) goto loc_82C97DA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97C0C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r25,-56
	ctx.r4.s64 = ctx.r25.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97C28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97C38;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97C48;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97C58;
	sub_82D2AEC8(ctx, base);
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// lwz r28,376(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r24,408(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x831156e8
	ctx.lr = 0x82C97C6C;
	sub_831156E8(ctx, base);
	// ld r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82C97C7C;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r25,-743
	ctx.r4.s64 = ctx.r25.s64 + -743;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82C97C8C;
	sub_837B0C10(ctx, base);
	// lwz r8,412(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// li r9,90
	ctx.r9.s64 = 90;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r6,r25,-742
	ctx.r6.s64 = ctx.r25.s64 + -742;
	// ori r4,r4,501
	ctx.r4.u64 = ctx.r4.u64 | 501;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// divwu r5,r8,r9
	ctx.r5.u32 = PPCDivide(ctx.r8.u32, ctx.r9.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82C97CAC;
	sub_82D042A8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C97CB8;
	sub_8292A3F8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,344(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 344);
	// bl 0x837b0c10
	ctx.lr = 0x82C97CC8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97CD8;
	sub_82A69AD0(ctx, base);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C97CE4;
	sub_837B0C10(ctx, base);
	// lwz r4,348(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C97CF4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C97D04;
	sub_82A69AD0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d459d0
	ctx.lr = 0x82C97D18;
	sub_82D459D0(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831235b8
	ctx.lr = 0x82C97D2C;
	sub_831235B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C97D38;
	sub_83102DB0(ctx, base);
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82C97D50;
	sub_83120738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d45a28
	ctx.lr = 0x82C97D5C;
	sub_82D45A28(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179518
	ctx.lr = 0x82C97D78;
	sub_83179518(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d45c08
	ctx.lr = 0x82C97D84;
	sub_82D45C08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d8bf78
	ctx.lr = 0x82C97D8C;
	sub_82D8BF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d45370
	ctx.lr = 0x82C97D98;
	sub_82D45370(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C97DA0;
	sub_8387E8E0(ctx, base);
	// b 0x82c97af0
	goto loc_82C97AF0;
loc_82C97DA4:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c97e28
	if (cr6.eq) goto loc_82C97E28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97DBC;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r25,-40
	ctx.r4.s64 = ctx.r25.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97DD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97DE8;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97DF8;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97E08;
	sub_82D2AEC8(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r25,-28
	ctx.r4.s64 = ctx.r25.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C97E24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c97af0
	goto loc_82C97AF0;
loc_82C97E28:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97E34;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97E44;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C97E70;
	sub_82D2AEC8(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C97E8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,396(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// bge cr6,0x82c97ae0
	if (!cr6.lt) goto loc_82C97AE0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d8bb08
	ctx.lr = 0x82C97EA0;
	sub_82D8BB08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// beq cr6,0x82c97ef8
	if (cr6.eq) goto loc_82C97EF8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c97ec4
	if (!cr6.eq) goto loc_82C97EC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c97ed0
	goto loc_82C97ED0;
loc_82C97EC4:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c97ed0
	if (!cr6.eq) goto loc_82C97ED0;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82C97ED0:
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x82d8ba80
	ctx.lr = 0x82C97ED8;
	sub_82D8BA80(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C97EF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c97af0
	goto loc_82C97AF0;
loc_82C97EF8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c97af0
	if (cr6.eq) goto loc_82C97AF0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82c97f38
	if (!cr6.eq) goto loc_82C97F38;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r9,416(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r10,528
	ctx.r8.s64 = ctx.r10.s64 + 528;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C97F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c97af0
	goto loc_82C97AF0;
loc_82C97F38:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,496
	ctx.r7.s64 = ctx.r9.s64 + 496;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C97F5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c97af0
	goto loc_82C97AF0;
}

__attribute__((alias("__imp__sub_82C97F60"))) PPC_WEAK_FUNC(sub_82C97F60);
PPC_FUNC_IMPL(__imp__sub_82C97F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C97F68;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C97F74;
	sub_82D19BB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C97F7C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C97F88;
	sub_82DAB6D0(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831f8200
	ctx.lr = 0x82C97F98;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x82C97F9C;
	sub_82D9E470(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-2384
	ctx.r30.s64 = ctx.r11.s64 + -2384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d19b10
	ctx.lr = 0x82C97FC0;
	sub_82D19B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d19d40
	ctx.lr = 0x82C97FCC;
	sub_82D19D40(ctx, base);
	// add r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82d9e6a0
	ctx.lr = 0x82C97FDC;
	sub_82D9E6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9802c
	if (cr6.eq) goto loc_82C9802C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x82c9802c
	if (!cr6.lt) goto loc_82C9802C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b57f10
	ctx.lr = 0x82C97FF8;
	sub_82B57F10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9f380
	ctx.lr = 0x82C98008;
	sub_82D9F380(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d975f0
	ctx.lr = 0x82C98014;
	sub_82D975F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C98024;
	sub_82D20DA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c16c98
	ctx.lr = 0x82C9802C;
	sub_82C16C98(ctx, base);
loc_82C9802C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98034"))) PPC_WEAK_FUNC(sub_82C98034);
PPC_FUNC_IMPL(__imp__sub_82C98034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98038"))) PPC_WEAK_FUNC(sub_82C98038);
PPC_FUNC_IMPL(__imp__sub_82C98038) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c980ec
	if (cr6.eq) goto loc_82C980EC;
	// bl 0x82d86078
	ctx.lr = 0x82C98060;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C98068;
	sub_82DAB6D0(ctx, base);
	// lbz r11,131(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 131);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c98080
	if (cr6.eq) goto loc_82C98080;
	// bl 0x82d97a20
	ctx.lr = 0x82C9807C;
	sub_82D97A20(ctx, base);
	// b 0x82c980cc
	goto loc_82C980CC;
loc_82C98080:
	// bl 0x82d97640
	ctx.lr = 0x82C98084;
	sub_82D97640(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C98094:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c98094
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C98094;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c980cc
	if (cr6.eq) goto loc_82C980CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d97ce8
	ctx.lr = 0x82C980CC;
	sub_82D97CE8(ctx, base);
loc_82C980CC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1540
	ctx.r5.s64 = ctx.r11.s64 + -1540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C980E0;
	sub_82D20DA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,130(r30)
	PPC_STORE_U8(ctx.r30.u32 + 130, ctx.r10.u8);
	// b 0x82c980f4
	goto loc_82C980F4;
loc_82C980EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,130(r30)
	PPC_STORE_U8(ctx.r30.u32 + 130, ctx.r11.u8);
loc_82C980F4:
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

__attribute__((alias("__imp__sub_82C9810C"))) PPC_WEAK_FUNC(sub_82C9810C);
PPC_FUNC_IMPL(__imp__sub_82C9810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98110"))) PPC_WEAK_FUNC(sub_82C98110);
PPC_FUNC_IMPL(__imp__sub_82C98110) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c98138
	if (cr6.eq) goto loc_82C98138;
	// li r4,116
	ctx.r4.s64 = 116;
loc_82C98138:
	// bl 0x82d17da0
	ctx.lr = 0x82C9813C;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1412
	ctx.r5.s64 = ctx.r11.s64 + -1412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C98150;
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

__attribute__((alias("__imp__sub_82C98164"))) PPC_WEAK_FUNC(sub_82C98164);
PPC_FUNC_IMPL(__imp__sub_82C98164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98168"))) PPC_WEAK_FUNC(sub_82C98168);
PPC_FUNC_IMPL(__imp__sub_82C98168) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r11.u8);
	// b 0x82d19858
	sub_82D19858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98178"))) PPC_WEAK_FUNC(sub_82C98178);
PPC_FUNC_IMPL(__imp__sub_82C98178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c981a0
	if (!cr6.eq) goto loc_82C981A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c981e4
	goto loc_82C981E4;
loc_82C981A0:
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82d8c0c8
	ctx.lr = 0x82C981B4;
	sub_82D8C0C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c981e0
	if (cr6.eq) goto loc_82C981E0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// beq cr6,0x82c981dc
	if (cr6.eq) goto loc_82C981DC;
	// bl 0x82d39310
	ctx.lr = 0x82C981D8;
	sub_82D39310(ctx, base);
	// b 0x82c981e0
	goto loc_82C981E0;
loc_82C981DC:
	// bl 0x82d39448
	ctx.lr = 0x82C981E0;
	sub_82D39448(ctx, base);
loc_82C981E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C981E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C981FC"))) PPC_WEAK_FUNC(sub_82C981FC);
PPC_FUNC_IMPL(__imp__sub_82C981FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98200"))) PPC_WEAK_FUNC(sub_82C98200);
PPC_FUNC_IMPL(__imp__sub_82C98200) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-1196
	ctx.r4.s64 = ctx.r10.s64 + -1196;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9823C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8ba80
	ctx.lr = 0x82C98248;
	sub_82D8BA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c98264
	if (!cr6.eq) goto loc_82C98264;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C98260;
	sub_82D2AEC8(ctx, base);
	// b 0x82c9827c
	goto loc_82C9827C;
loc_82C98264:
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
	ctx.lr = 0x82C9827C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9827C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98294"))) PPC_WEAK_FUNC(sub_82C98294);
PPC_FUNC_IMPL(__imp__sub_82C98294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98298"))) PPC_WEAK_FUNC(sub_82C98298);
PPC_FUNC_IMPL(__imp__sub_82C98298) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c982d0
	if (cr6.eq) goto loc_82C982D0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c982d0
	if (cr6.eq) goto loc_82C982D0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,573
	ctx.r4.u64 = ctx.r4.u64 | 573;
	// b 0x82c982d8
	goto loc_82C982D8;
loc_82C982D0:
	// lis r4,507
	ctx.r4.s64 = 33226752;
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
loc_82C982D8:
	// bl 0x82d21730
	ctx.lr = 0x82C982DC;
	sub_82D21730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82C982E4;
	sub_82D19948(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r11.u8);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C98304"))) PPC_WEAK_FUNC(sub_82C98304);
PPC_FUNC_IMPL(__imp__sub_82C98304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98308"))) PPC_WEAK_FUNC(sub_82C98308);
PPC_FUNC_IMPL(__imp__sub_82C98308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c98370
	if (!cr6.eq) goto loc_82C98370;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82c98358
	if (!cr6.eq) goto loc_82C98358;
	// cmpwi cr6,r9,75
	cr6.compare<int32_t>(ctx.r9.s32, 75, xer);
	// bne cr6,0x82c98340
	if (!cr6.eq) goto loc_82C98340;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c98370
	if (!cr6.eq) goto loc_82C98370;
loc_82C98340:
	// cmpwi cr6,r9,74
	cr6.compare<int32_t>(ctx.r9.s32, 74, xer);
	// bne cr6,0x82c98358
	if (!cr6.eq) goto loc_82C98358;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c98370
	if (!cr6.eq) goto loc_82C98370;
loc_82C98358:
	// subfc r11,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// eqv r10,r8,r9
	ctx.r10.u64 = ~(ctx.r8.u64 ^ ctx.r9.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
loc_82C98370:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98380"))) PPC_WEAK_FUNC(sub_82C98380);
PPC_FUNC_IMPL(__imp__sub_82C98380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c983e8
	if (!cr6.eq) goto loc_82C983E8;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82c983d0
	if (!cr6.eq) goto loc_82C983D0;
	// cmpwi cr6,r9,75
	cr6.compare<int32_t>(ctx.r9.s32, 75, xer);
	// bne cr6,0x82c983b8
	if (!cr6.eq) goto loc_82C983B8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c983e8
	if (!cr6.eq) goto loc_82C983E8;
loc_82C983B8:
	// cmpwi cr6,r9,74
	cr6.compare<int32_t>(ctx.r9.s32, 74, xer);
	// bne cr6,0x82c983d0
	if (!cr6.eq) goto loc_82C983D0;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c983e8
	if (!cr6.eq) goto loc_82C983E8;
loc_82C983D0:
	// subfc r11,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// eqv r10,r9,r8
	ctx.r10.u64 = ~(ctx.r9.u64 ^ ctx.r8.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
loc_82C983E8:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C983F8"))) PPC_WEAK_FUNC(sub_82C983F8);
PPC_FUNC_IMPL(__imp__sub_82C983F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x82c98460
	if (!cr6.eq) goto loc_82C98460;
	// cmpwi cr6,r9,75
	cr6.compare<int32_t>(ctx.r9.s32, 75, xer);
	// bne cr6,0x82c98430
	if (!cr6.eq) goto loc_82C98430;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c98430
	if (cr6.eq) goto loc_82C98430;
loc_82C98420:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_82C98430:
	// cmpwi cr6,r9,74
	cr6.compare<int32_t>(ctx.r9.s32, 74, xer);
	// bne cr6,0x82c98448
	if (!cr6.eq) goto loc_82C98448;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c98420
	if (!cr6.eq) goto loc_82C98420;
loc_82C98448:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
loc_82C98460:
	// subfc r10,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// eqv r9,r11,r9
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C98478"))) PPC_WEAK_FUNC(sub_82C98478);
PPC_FUNC_IMPL(__imp__sub_82C98478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x82c984e0
	if (!cr6.eq) goto loc_82C984E0;
	// cmpwi cr6,r9,75
	cr6.compare<int32_t>(ctx.r9.s32, 75, xer);
	// bne cr6,0x82c984b0
	if (!cr6.eq) goto loc_82C984B0;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c984b0
	if (cr6.eq) goto loc_82C984B0;
loc_82C984A0:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_82C984B0:
	// cmpwi cr6,r9,74
	cr6.compare<int32_t>(ctx.r9.s32, 74, xer);
	// bne cr6,0x82c984c8
	if (!cr6.eq) goto loc_82C984C8;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c984a0
	if (!cr6.eq) goto loc_82C984A0;
loc_82C984C8:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
loc_82C984E0:
	// subfc r10,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// eqv r9,r9,r11
	ctx.r9.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C984F8"))) PPC_WEAK_FUNC(sub_82C984F8);
PPC_FUNC_IMPL(__imp__sub_82C984F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C98500;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9850C;
	sub_82D19A78(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,572(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 572);
	// bl 0x82d19b10
	ctx.lr = 0x82C9852C;
	sub_82D19B10(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r29,108
	ctx.r29.s64 = 108;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// divw r26,r8,r29
	ctx.r26.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// bl 0x82d20f50
	ctx.lr = 0x82C9855C;
	sub_82D20F50(ctx, base);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82c985ac
	if (cr6.eq) goto loc_82C985AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C98570;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c985ac
	if (!cr6.eq) goto loc_82C985AC;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82C98588;
	sub_82D1A998(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c985ac
	if (cr0.eq) goto loc_82C985AC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C985AC;
	sub_82D19788(ctx, base);
loc_82C985AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c985fc
	if (cr0.eq) goto loc_82C985FC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C985D0;
	sub_82D19788(ctx, base);
	// lbz r11,131(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 131);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c985fc
	if (cr6.eq) goto loc_82C985FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,465
	ctx.r5.u64 = ctx.r5.u64 | 465;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C985FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C985FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,572(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 572);
	// bl 0x82d2f098
	ctx.lr = 0x82C98608;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9866c
	if (cr6.eq) goto loc_82C9866C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmplwi cr6,r26,5
	cr6.compare<uint32_t>(ctx.r26.u32, 5, xer);
	// addi r29,r11,-1340
	ctx.r29.s64 = ctx.r11.s64 + -1340;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bgt cr6,0x82c9863c
	if (cr6.gt) goto loc_82C9863C;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
loc_82C9863C:
	// bctrl 
	ctx.lr = 0x82C98640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,131(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 131);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c98668
	if (!cr6.eq) goto loc_82C98668;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82C98668:
	// bctrl 
	ctx.lr = 0x82C9866C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9866C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C98670:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82C98684;
	sub_82D21408(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82c98670
	if (cr6.lt) goto loc_82C98670;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21e48
	ctx.lr = 0x82C986A0;
	sub_82D21E48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C986A8"))) PPC_WEAK_FUNC(sub_82C986A8);
PPC_FUNC_IMPL(__imp__sub_82C986A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C986B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C986BC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98750
	if (cr6.eq) goto loc_82C98750;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C986D0;
	sub_831F8200(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C986E0;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97688
	ctx.lr = 0x82C986E4;
	sub_82D97688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C986F0;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c98748
	if (cr6.eq) goto loc_82C98748;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c98714
	if (!cr6.eq) goto loc_82C98714;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,193
	ctx.r4.u64 = ctx.r4.u64 | 193;
	// b 0x82c9873c
	goto loc_82C9873C;
loc_82C98714:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c98750
	if (!cr6.eq) goto loc_82C98750;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82c98750
	if (!cr0.eq) goto loc_82C98750;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,564
	ctx.r4.u64 = ctx.r4.u64 | 564;
loc_82C9873C:
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d21730
	ctx.lr = 0x82C98748;
	sub_82D21730(ctx, base);
loc_82C98748:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,130(r29)
	PPC_STORE_U8(ctx.r29.u32 + 130, ctx.r11.u8);
loc_82C98750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98758"))) PPC_WEAK_FUNC(sub_82C98758);
PPC_FUNC_IMPL(__imp__sub_82C98758) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c987ac
	if (cr6.eq) goto loc_82C987AC;
	// lis r11,606
	ctx.r11.s64 = 39714816;
	// ori r10,r11,53399
	ctx.r10.u64 = ctx.r11.u64 | 53399;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c98790
	if (cr6.gt) goto loc_82C98790;
	// mulli r3,r4,108
	ctx.r3.s64 = ctx.r4.s64 * 108;
	// bl 0x82416260
	ctx.lr = 0x82C98788;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c987ac
	if (!cr6.eq) goto loc_82C987AC;
loc_82C98790:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15364
	ctx.r9.s64 = ctx.r11.s64 + 15364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8246b850
	ctx.lr = 0x82C987AC;
	sub_8246B850(ctx, base);
loc_82C987AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C987BC"))) PPC_WEAK_FUNC(sub_82C987BC);
PPC_FUNC_IMPL(__imp__sub_82C987BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C987C0"))) PPC_WEAK_FUNC(sub_82C987C0);
PPC_FUNC_IMPL(__imp__sub_82C987C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C987C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C987D4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98894
	if (cr6.eq) goto loc_82C98894;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C987E4;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C987EC;
	sub_82D97688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97a78
	ctx.lr = 0x82C987F4;
	sub_82D97A78(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C987FC;
	sub_82D1C1A8(ctx, base);
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lwz r10,104(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// li r9,108
	ctx.r9.s64 = 108;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c98824
	if (cr6.gt) goto loc_82C98824;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C98824;
	sub_831CC188(ctx, base);
loc_82C98824:
	// mulli r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 * 108;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,64(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r28,68(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r27,92(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r26,96(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// beq cr6,0x82c98874
	if (cr6.eq) goto loc_82C98874;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97618
	ctx.lr = 0x82C98850;
	sub_82D97618(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x82d97d88
	ctx.lr = 0x82C98874;
	sub_82D97D88(ctx, base);
loc_82C98874:
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C98880;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1404
	ctx.r5.s64 = ctx.r11.s64 + -1404;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C98894;
	sub_82D20DA8(ctx, base);
loc_82C98894:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9889C"))) PPC_WEAK_FUNC(sub_82C9889C);
PPC_FUNC_IMPL(__imp__sub_82C9889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C988A0"))) PPC_WEAK_FUNC(sub_82C988A0);
PPC_FUNC_IMPL(__imp__sub_82C988A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d199f0
	ctx.lr = 0x82C988C0;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c988d4
	if (!cr6.eq) goto loc_82C988D4;
loc_82C988CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c98984
	goto loc_82C98984;
loc_82C988D4:
	// bl 0x82d86078
	ctx.lr = 0x82C988D8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c988cc
	if (cr6.eq) goto loc_82C988CC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C988E8;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97688
	ctx.lr = 0x82C988EC;
	sub_82D97688(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,28
	ctx.r11.s64 = 28;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r11,r8,r11
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c98980
	if (cr0.eq) goto loc_82C98980;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,108
	ctx.r6.s64 = 108;
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// divw r9,r8,r6
	ctx.r9.s32 = PPCDivide(ctx.r8.s32, ctx.r6.s32);
	// lwz r6,-24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// lwz r5,-12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c98980
	if (cr6.eq) goto loc_82C98980;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c98970
	if (!cr6.gt) goto loc_82C98970;
loc_82C98940:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// bne cr6,0x82c9895c
	if (!cr6.eq) goto loc_82C9895C;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c9897c
	if (cr6.eq) goto loc_82C9897C;
loc_82C9895C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,108
	ctx.r8.s64 = ctx.r8.s64 + 108;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c98940
	if (cr6.gt) goto loc_82C98940;
	// b 0x82c98980
	goto loc_82C98980;
loc_82C98970:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9897C;
	sub_831CC188(ctx, base);
loc_82C9897C:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82C98980:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C98984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9899C"))) PPC_WEAK_FUNC(sub_82C9899C);
PPC_FUNC_IMPL(__imp__sub_82C9899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C989A0"))) PPC_WEAK_FUNC(sub_82C989A0);
PPC_FUNC_IMPL(__imp__sub_82C989A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C989A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r8,108
	ctx.r8.s64 = 108;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82c989e0
	if (cr6.gt) goto loc_82C989E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C989E0;
	sub_831CC188(ctx, base);
loc_82C989E0:
	// mulli r10,r4,108
	ctx.r10.s64 = ctx.r4.s64 * 108;
	// stbx r26,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82c98a0c
	if (cr6.gt) goto loc_82C98A0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C98A0C;
	sub_831CC188(ctx, base);
loc_82C98A0C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,68(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r28,96(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82d8b758
	ctx.lr = 0x82C98A30;
	sub_82D8B758(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// stb r26,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r26.u8);
	// bl 0x82d86078
	ctx.lr = 0x82C98A3C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98b64
	if (cr6.eq) goto loc_82C98B64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C98A4C;
	sub_82DAB6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C98A54;
	sub_82D97688(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r6,r9,r11
	ctx.r6.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82c98adc
	if (cr0.eq) goto loc_82C98ADC;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c98adc
	if (cr6.eq) goto loc_82C98ADC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82C98A80:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x82c98ac4
	if (!cr6.eq) goto loc_82C98AC4;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c98ac4
	if (!cr6.eq) goto loc_82C98AC4;
	// cmpwi cr6,r10,74
	cr6.compare<int32_t>(ctx.r10.s32, 74, xer);
	// bne cr6,0x82c98ab0
	if (!cr6.eq) goto loc_82C98AB0;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c98ac4
	if (!cr6.eq) goto loc_82C98AC4;
loc_82C98AB0:
	// cmpwi cr6,r10,75
	cr6.compare<int32_t>(ctx.r10.s32, 75, xer);
	// bne cr6,0x82c98ad8
	if (!cr6.eq) goto loc_82C98AD8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c98ad8
	if (cr6.eq) goto loc_82C98AD8;
loc_82C98AC4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x82c98a80
	if (cr6.lt) goto loc_82C98A80;
	// b 0x82c98adc
	goto loc_82C98ADC;
loc_82C98AD8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C98ADC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// beq cr6,0x82c98b2c
	if (cr6.eq) goto loc_82C98B2C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c98b00
	if (cr6.eq) goto loc_82C98B00;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c98b64
	if (!cr6.eq) goto loc_82C98B64;
loc_82C98B00:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d97ce8
	ctx.lr = 0x82C98B24;
	sub_82D97CE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C98B2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c98b40
	if (!cr6.eq) goto loc_82C98B40;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c98b64
	if (!cr6.eq) goto loc_82C98B64;
loc_82C98B40:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d978a0
	ctx.lr = 0x82C98B64;
	sub_82D978A0(ctx, base);
loc_82C98B64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98B6C"))) PPC_WEAK_FUNC(sub_82C98B6C);
PPC_FUNC_IMPL(__imp__sub_82C98B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98B70"))) PPC_WEAK_FUNC(sub_82C98B70);
PPC_FUNC_IMPL(__imp__sub_82C98B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r10,108
	ctx.r10.s64 = 108;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r7,r10
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c98bc4
	if (!cr6.gt) goto loc_82C98BC4;
loc_82C98BA0:
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c98bb0
	if (cr6.eq) goto loc_82C98BB0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82C98BB0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c98ba0
	if (cr6.gt) goto loc_82C98BA0;
	// blr 
	return;
loc_82C98BC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C98BD0"))) PPC_WEAK_FUNC(sub_82C98BD0);
PPC_FUNC_IMPL(__imp__sub_82C98BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C98BD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r25,108
	ctx.r25.s64 = 108;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// divw. r27,r9,r25
	ctx.r27.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x82c98c50
	if (cr0.eq) goto loc_82C98C50;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82C98C08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c98c58
	if (!cr6.gt) goto loc_82C98C58;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c98c40
	if (cr6.eq) goto loc_82C98C40;
	// stbx r26,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c989a0
	ctx.lr = 0x82C98C40;
	sub_82C989A0(ctx, base);
loc_82C98C40:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x82c98c08
	if (cr6.lt) goto loc_82C98C08;
loc_82C98C50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C98C58:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C98C64;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C98C64"))) PPC_WEAK_FUNC(sub_82C98C64);
PPC_FUNC_IMPL(__imp__sub_82C98C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98C68"))) PPC_WEAK_FUNC(sub_82C98C68);
PPC_FUNC_IMPL(__imp__sub_82C98C68) {
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
	// bl 0x82c98b70
	ctx.lr = 0x82C98C84;
	sub_82C98B70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98ce0
	if (cr6.eq) goto loc_82C98CE0;
	// lbz r11,131(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 131);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c98ce0
	if (!cr6.eq) goto loc_82C98CE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98bd0
	ctx.lr = 0x82C98CA0;
	sub_82C98BD0(ctx, base);
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C98CAC;
	sub_82D17DA0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,572(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// bl 0x82d19b10
	ctx.lr = 0x82C98CC8;
	sub_82D19B10(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82c98e3c
	if (cr6.eq) goto loc_82C98E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1cda8
	ctx.lr = 0x82C98CDC;
	sub_82D1CDA8(ctx, base);
	// b 0x82c98e3c
	goto loc_82C98E3C;
loc_82C98CE0:
	// bl 0x82d86078
	ctx.lr = 0x82C98CE4;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C98CEC;
	sub_82DAB6D0(ctx, base);
	// lbz r11,131(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 131);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c98d04
	if (cr6.eq) goto loc_82C98D04;
	// bl 0x82d97a20
	ctx.lr = 0x82C98D00;
	sub_82D97A20(ctx, base);
	// b 0x82c98d50
	goto loc_82C98D50;
loc_82C98D04:
	// bl 0x82d97640
	ctx.lr = 0x82C98D08;
	sub_82D97640(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C98D18:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c98d18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C98D18;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c98d50
	if (cr6.eq) goto loc_82C98D50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82d97ce8
	ctx.lr = 0x82C98D50;
	sub_82D97CE8(ctx, base);
loc_82C98D50:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c98e28
	if (!cr6.eq) goto loc_82C98E28;
	// bl 0x82d86078
	ctx.lr = 0x82C98D60;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c98e3c
	if (cr6.eq) goto loc_82C98E3C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C98D70;
	sub_82DAB6D0(ctx, base);
	// lwz r11,3500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3500);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82c98e14
	if (cr6.gt) goto loc_82C98E14;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c98e14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C98E14;
	// bdzf 4*cr6+eq,0x82c98dd8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C98DD8;
	// bdzf 4*cr6+eq,0x82c98db0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C98DB0;
	// bdzf 4*cr6+eq,0x82c98dc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C98DC4;
	// bdzf 4*cr6+eq,0x82c98e00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C98E00;
	// bne cr6,0x82c98dec
	if (!cr6.eq) goto loc_82C98DEC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r5,r11,-96
	ctx.r5.s64 = ctx.r11.s64 + -96;
	// b 0x82c98e34
	goto loc_82C98E34;
loc_82C98DB0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r5,r11,-84
	ctx.r5.s64 = ctx.r11.s64 + -84;
	// b 0x82c98e34
	goto loc_82C98E34;
loc_82C98DC4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r5,r11,-68
	ctx.r5.s64 = ctx.r11.s64 + -68;
	// b 0x82c98e34
	goto loc_82C98E34;
loc_82C98DD8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// b 0x82c98e34
	goto loc_82C98E34;
loc_82C98DEC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// b 0x82c98e34
	goto loc_82C98E34;
loc_82C98E00:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// b 0x82c98e34
	goto loc_82C98E34;
loc_82C98E14:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r5,r11,-104
	ctx.r5.s64 = ctx.r11.s64 + -104;
	// b 0x82c98e34
	goto loc_82C98E34;
loc_82C98E28:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1428
	ctx.r5.s64 = ctx.r11.s64 + -1428;
loc_82C98E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C98E3C;
	sub_82D20DA8(ctx, base);
loc_82C98E3C:
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

__attribute__((alias("__imp__sub_82C98E54"))) PPC_WEAK_FUNC(sub_82C98E54);
PPC_FUNC_IMPL(__imp__sub_82C98E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C98E58"))) PPC_WEAK_FUNC(sub_82C98E58);
PPC_FUNC_IMPL(__imp__sub_82C98E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C98E60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r5,572(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// bl 0x82d19b10
	ctx.lr = 0x82C98E80;
	sub_82D19B10(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82c98ea0
	if (!cr6.eq) goto loc_82C98EA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d17da0
	ctx.lr = 0x82C98E98;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C98EA0:
	// bl 0x82d1c1a8
	ctx.lr = 0x82C98EA4;
	sub_82D1C1A8(ctx, base);
	// lwz r10,104(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// li r28,108
	ctx.r28.s64 = 108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r25,100
	ctx.r30.s64 = ctx.r25.s64 + 100;
	// divw r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c98edc
	if (cr6.gt) goto loc_82C98EDC;
loc_82C98EC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C98ED4;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C98EDC:
	// mulli r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 * 108;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c98ec8
	if (cr6.eq) goto loc_82C98EC8;
	// lbz r10,131(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 131);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c98f64
	if (cr6.eq) goto loc_82C98F64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c98f38
	if (!cr6.eq) goto loc_82C98F38;
	// bl 0x82c98b70
	ctx.lr = 0x82C98F10;
	sub_82C98B70(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82c98f24
	if (cr6.lt) goto loc_82C98F24;
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c98ec8
	if (cr6.eq) goto loc_82C98EC8;
loc_82C98F24:
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C98F30;
	sub_82D17DA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82c98f44
	goto loc_82C98F44;
loc_82C98F38:
	// li r4,115
	ctx.r4.s64 = 115;
	// bl 0x82d17da0
	ctx.lr = 0x82C98F40;
	sub_82D17DA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C98F44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c989a0
	ctx.lr = 0x82C98F50;
	sub_82C989A0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d1cda8
	ctx.lr = 0x82C98F5C;
	sub_82D1CDA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C98F64:
	// bl 0x82d86078
	ctx.lr = 0x82C98F68;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99000
	if (cr6.eq) goto loc_82C99000;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C98F78;
	sub_82DAB6D0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c98fa0
	if (cr6.gt) goto loc_82C98FA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C98FA0;
	sub_831CC188(ctx, base);
loc_82C98FA0:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,64(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r29,68(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r28,92(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r27,96(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// beq cr6,0x82c98fec
	if (cr6.eq) goto loc_82C98FEC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d97618
	ctx.lr = 0x82C98FC8;
	sub_82D97618(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x82d97ce8
	ctx.lr = 0x82C98FEC;
	sub_82D97CE8(ctx, base);
loc_82C98FEC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1420
	ctx.r5.s64 = ctx.r11.s64 + -1420;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C99000;
	sub_82D20DA8(ctx, base);
loc_82C99000:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99008"))) PPC_WEAK_FUNC(sub_82C99008);
PPC_FUNC_IMPL(__imp__sub_82C99008) {
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
	// bl 0x82c98b70
	ctx.lr = 0x82C99020;
	sub_82C98B70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99068
	if (cr6.eq) goto loc_82C99068;
	// lbz r11,131(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 131);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c990a4
	if (cr6.eq) goto loc_82C990A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,541
	ctx.r5.u64 = ctx.r5.u64 | 541;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C99054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c990a4
	if (!cr6.eq) goto loc_82C990A4;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82c99098
	goto loc_82C99098;
loc_82C99068:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C99088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c990a4
	if (!cr6.eq) goto loc_82C990A4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C99098:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C990A4;
	sub_82D19788(ctx, base);
loc_82C990A4:
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

__attribute__((alias("__imp__sub_82C990BC"))) PPC_WEAK_FUNC(sub_82C990BC);
PPC_FUNC_IMPL(__imp__sub_82C990BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C990C0"))) PPC_WEAK_FUNC(sub_82C990C0);
PPC_FUNC_IMPL(__imp__sub_82C990C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C990C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r29,108
	ctx.r29.s64 = 108;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r26,r9,r29
	ctx.r26.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C990EC;
	sub_82D1C1A8(ctx, base);
	// addi r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C990F8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r28,r11,-1176
	ctx.r28.s64 = ctx.r11.s64 + -1176;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C99118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c992bc
	if (cr6.eq) goto loc_82C992BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r24,r9,r29
	ctx.r24.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C9913C;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// bge cr6,0x82c992b0
	if (!cr6.lt) goto loc_82C992B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C9914C;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c99170
	if (cr6.gt) goto loc_82C99170;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C99170;
	sub_831CC188(ctx, base);
loc_82C99170:
	// mulli r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 * 108;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82d8b758
	ctx.lr = 0x82C99180;
	sub_82D8B758(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x82c992a8
	if (cr6.gt) goto loc_82C992A8;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28256
	ctx.r12.s64 = ctx.r12.s64 + -28256;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82C991CC;
	case 1:
		goto loc_82C991E0;
	case 2:
		goto loc_82C991F4;
	case 3:
		goto loc_82C99208;
	case 4:
		goto loc_82C9921C;
	case 5:
		goto loc_82C99230;
	case 6:
		goto loc_82C99244;
	case 7:
		goto loc_82C99258;
	case 8:
		goto loc_82C9926C;
	case 9:
		goto loc_82C99280;
	case 10:
		goto loc_82C99294;
	default:
		return;
	}
	// lwz r22,-28212(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28212);
	// lwz r22,-28192(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28192);
	// lwz r22,-28172(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28172);
	// lwz r22,-28152(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28152);
	// lwz r22,-28132(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28132);
	// lwz r22,-28112(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28112);
	// lwz r22,-28092(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28092);
	// lwz r22,-28072(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28072);
	// lwz r22,-28052(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28052);
	// lwz r22,-28032(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28032);
	// lwz r22,-28012(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28012);
loc_82C991CC:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,456
	ctx.r4.u64 = ctx.r4.u64 | 456;
	// bl 0x82d39ab8
	ctx.lr = 0x82C991DC;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C991E0:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,458
	ctx.r4.u64 = ctx.r4.u64 | 458;
	// bl 0x82d39ab8
	ctx.lr = 0x82C991F0;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C991F4:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,459
	ctx.r4.u64 = ctx.r4.u64 | 459;
	// bl 0x82d39ab8
	ctx.lr = 0x82C99204;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C99208:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,460
	ctx.r4.u64 = ctx.r4.u64 | 460;
	// bl 0x82d39ab8
	ctx.lr = 0x82C99218;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C9921C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,461
	ctx.r4.u64 = ctx.r4.u64 | 461;
	// bl 0x82d39ab8
	ctx.lr = 0x82C9922C;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C99230:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,462
	ctx.r4.u64 = ctx.r4.u64 | 462;
	// bl 0x82d39ab8
	ctx.lr = 0x82C99240;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C99244:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,463
	ctx.r4.u64 = ctx.r4.u64 | 463;
	// bl 0x82d39ab8
	ctx.lr = 0x82C99254;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C99258:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,464
	ctx.r4.u64 = ctx.r4.u64 | 464;
	// bl 0x82d39ab8
	ctx.lr = 0x82C99268;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C9926C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,575
	ctx.r4.u64 = ctx.r4.u64 | 575;
	// bl 0x82d39ab8
	ctx.lr = 0x82C9927C;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C99280:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,455
	ctx.r4.u64 = ctx.r4.u64 | 455;
	// bl 0x82d39ab8
	ctx.lr = 0x82C99290;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C99294:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,457
	ctx.r4.u64 = ctx.r4.u64 | 457;
	// bl 0x82d39ab8
	ctx.lr = 0x82C992A4;
	sub_82D39AB8(ctx, base);
	// b 0x82c992bc
	goto loc_82C992BC;
loc_82C992A8:
	// addi r4,r28,-734
	ctx.r4.s64 = ctx.r28.s64 + -734;
	// b 0x82c992b4
	goto loc_82C992B4;
loc_82C992B0:
	// addi r4,r28,-733
	ctx.r4.s64 = ctx.r28.s64 + -733;
loc_82C992B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d39bf8
	ctx.lr = 0x82C992BC;
	sub_82D39BF8(ctx, base);
loc_82C992BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r28,-703
	ctx.r4.s64 = ctx.r28.s64 + -703;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C992E0;
	sub_8259CC28(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C992F8;
	sub_82D042A8(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,572(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 572);
	// bl 0x82d19a78
	ctx.lr = 0x82C99308;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82C99310;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c99340
	if (!cr6.eq) goto loc_82C99340;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c99378
	if (cr6.lt) goto loc_82C99378;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C99338;
	sub_825952B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C99340:
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
	ctx.lr = 0x82C99358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c99370
	if (cr6.eq) goto loc_82C99370;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C99370;
	sub_82D291E0(ctx, base);
loc_82C99370:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C99378;
	sub_8387E8E0(ctx, base);
loc_82C99378:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99380"))) PPC_WEAK_FUNC(sub_82C99380);
PPC_FUNC_IMPL(__imp__sub_82C99380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C99388;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c99408
	if (cr6.eq) goto loc_82C99408;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C993A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c993c4
	if (cr6.lt) goto loc_82C993C4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82C993C4;
	sub_825952B8(ctx, base);
loc_82C993C4:
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
	// blt cr6,0x82c993ec
	if (cr6.lt) goto loc_82C993EC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x825952b8
	ctx.lr = 0x82C993EC;
	sub_825952B8(ctx, base);
loc_82C993EC:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// addi r11,r31,-56
	ctx.r11.s64 = ctx.r31.s64 + -56;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82c993a8
	if (!cr6.eq) goto loc_82C993A8;
loc_82C99408:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99410"))) PPC_WEAK_FUNC(sub_82C99410);
PPC_FUNC_IMPL(__imp__sub_82C99410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C99418;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C99444;
	sub_82B56298(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99464;
	sub_82B5A888(ctx, base);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// stb r6,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99480;
	sub_82B5A888(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8378e240
	ctx.lr = 0x82C99488;
	sub_8378E240(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99490"))) PPC_WEAK_FUNC(sub_82C99490);
PPC_FUNC_IMPL(__imp__sub_82C99490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C99498;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// bge cr6,0x82c99524
	if (!cr6.lt) goto loc_82C99524;
loc_82C994C4:
	// mulli r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 * 108;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C994DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c99524
	if (cr6.eq) goto loc_82C99524;
	// mulli r11,r29,108
	ctx.r11.s64 = ctx.r29.s64 * 108;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9950C;
	sub_82B5A888(ctx, base);
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// blt cr6,0x82c994c4
	if (cr6.lt) goto loc_82C994C4;
loc_82C99524:
	// mulli r11,r29,108
	ctx.r11.s64 = ctx.r29.s64 * 108;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r9,1(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99548;
	sub_82B5A888(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99550"))) PPC_WEAK_FUNC(sub_82C99550);
PPC_FUNC_IMPL(__imp__sub_82C99550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C99558;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c984f8
	ctx.lr = 0x82C99564;
	sub_82C984F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c988a0
	ctx.lr = 0x82C9956C;
	sub_82C988A0(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r26,-31776
	ctx.r26.s64 = -2082471936;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,572(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 572);
	// bl 0x82d19b10
	ctx.lr = 0x82C9958C;
	sub_82D19B10(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82c995a4
	if (cr6.eq) goto loc_82C995A4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C995A4;
	sub_82D1EAC0(ctx, base);
loc_82C995A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c990c0
	ctx.lr = 0x82C995AC;
	sub_82C990C0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C995B0;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c995dc
	if (cr6.eq) goto loc_82C995DC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8307e040
	ctx.lr = 0x82C995C4;
	sub_8307E040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82583300
	ctx.lr = 0x82C995CC;
	sub_82583300(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C995D4;
	sub_82DAB6D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d97730
	ctx.lr = 0x82C995DC;
	sub_82D97730(ctx, base);
loc_82C995DC:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C995E4;
	sub_82DAB6D0(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831f8200
	ctx.lr = 0x82C995F4;
	sub_831F8200(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C99600;
	sub_82D97688(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82c99630
	if (!cr6.eq) goto loc_82C99630;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,569
	ctx.r5.u64 = ctx.r5.u64 | 569;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C99630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C99630:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,108
	ctx.r29.s64 = 108;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c996f8
	if (!cr6.eq) goto loc_82C996F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97640
	ctx.lr = 0x82C99648;
	sub_82D97640(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C99658:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c99658
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C99658;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw. r9,r10,r29
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c996f8
	if (cr0.eq) goto loc_82C996F8;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ble cr6,0x82c996e0
	if (!cr6.gt) goto loc_82C996E0;
loc_82C99698:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r30,68(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c996cc
	if (!cr6.eq) goto loc_82C996CC;
	// lwz r30,64(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// bne cr6,0x82c996cc
	if (!cr6.eq) goto loc_82C996CC;
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c996cc
	if (!cr6.eq) goto loc_82C996CC;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c996ec
	if (cr6.eq) goto loc_82C996EC;
loc_82C996CC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82c99698
	if (cr6.gt) goto loc_82C99698;
	// b 0x82c996f8
	goto loc_82C996F8;
loc_82C996E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C996EC;
	sub_831CC188(ctx, base);
loc_82C996EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d1eac0
	ctx.lr = 0x82C996F8;
	sub_82D1EAC0(ctx, base);
loc_82C996F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C99700;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c997c8
	if (!cr6.eq) goto loc_82C997C8;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c997c8
	if (!cr6.eq) goto loc_82C997C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C99728;
	sub_82D19788(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82c997c8
	if (!cr0.eq) goto loc_82C997C8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,572(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 572);
	// bl 0x82d19b10
	ctx.lr = 0x82C99754;
	sub_82D19B10(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r11,r10,r29
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c997c8
	if (cr0.eq) goto loc_82C997C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x82c997a4
	if (!cr6.gt) goto loc_82C997A4;
loc_82C99778:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r7,73
	cr6.compare<int32_t>(ctx.r7.s32, 73, xer);
	// beq cr6,0x82c997b0
	if (cr6.eq) goto loc_82C997B0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82c99778
	if (cr6.gt) goto loc_82C99778;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C997A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C997B0;
	sub_831CC188(ctx, base);
loc_82C997B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d1eac0
	ctx.lr = 0x82C997BC;
	sub_82D1EAC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C997C8;
	sub_82D19720(ctx, base);
loc_82C997C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C997D4"))) PPC_WEAK_FUNC(sub_82C997D4);
PPC_FUNC_IMPL(__imp__sub_82C997D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C997D8"))) PPC_WEAK_FUNC(sub_82C997D8);
PPC_FUNC_IMPL(__imp__sub_82C997D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c990c0
	sub_82C990C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C997DC"))) PPC_WEAK_FUNC(sub_82C997DC);
PPC_FUNC_IMPL(__imp__sub_82C997DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C997E0"))) PPC_WEAK_FUNC(sub_82C997E0);
PPC_FUNC_IMPL(__imp__sub_82C997E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C997E8;
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c9982c
	if (cr6.eq) goto loc_82C9982C;
loc_82C99800:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9981C;
	sub_82B5A888(ctx, base);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c99800
	if (!cr6.eq) goto loc_82C99800;
loc_82C9982C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99838"))) PPC_WEAK_FUNC(sub_82C99838);
PPC_FUNC_IMPL(__imp__sub_82C99838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C99840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c9988c
	if (cr6.eq) goto loc_82C9988C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C99858:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c9987c
	if (cr6.eq) goto loc_82C9987C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C9987C;
	sub_82B56298(ctx, base);
loc_82C9987C:
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c99858
	if (!cr6.eq) goto loc_82C99858;
loc_82C9988C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99898"))) PPC_WEAK_FUNC(sub_82C99898);
PPC_FUNC_IMPL(__imp__sub_82C99898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C998A0;
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
	ctx.lr = 0x82C998C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c998dc
	if (cr6.eq) goto loc_82C998DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c99410
	ctx.lr = 0x82C998DC;
	sub_82C99410(ctx, base);
loc_82C998DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82C998EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c99904
	if (cr6.eq) goto loc_82C99904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c99410
	ctx.lr = 0x82C99904;
	sub_82C99410(ctx, base);
loc_82C99904:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C99914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9992c
	if (cr6.eq) goto loc_82C9992C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c99410
	ctx.lr = 0x82C9992C;
	sub_82C99410(ctx, base);
loc_82C9992C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99934"))) PPC_WEAK_FUNC(sub_82C99934);
PPC_FUNC_IMPL(__imp__sub_82C99934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C99938"))) PPC_WEAK_FUNC(sub_82C99938);
PPC_FUNC_IMPL(__imp__sub_82C99938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C99940;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82c999d4
	if (!cr6.lt) goto loc_82C999D4;
loc_82C9996C:
	// mulli r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 * 108;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-108
	ctx.r4.s64 = ctx.r3.s64 + -108;
	// bctrl 
	ctx.lr = 0x82C99980;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c99990
	if (cr6.eq) goto loc_82C99990;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82C99990:
	// mulli r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 * 108;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r10,r29,108
	ctx.r10.s64 = ctx.r29.s64 * 108;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C999BC;
	sub_82B5A888(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82c9996c
	if (cr6.lt) goto loc_82C9996C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82C999D4:
	// bne cr6,0x82c99a0c
	if (!cr6.eq) goto loc_82C99A0C;
	// mulli r11,r28,108
	ctx.r11.s64 = ctx.r28.s64 * 108;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r10,r29,108
	ctx.r10.s64 = ctx.r29.s64 * 108;
	// lbz r8,-108(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -108);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r9,r11,-108
	ctx.r9.s64 = ctx.r11.s64 + -108;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r7,-107(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -107);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99A08;
	sub_82B5A888(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82C99A0C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c99490
	ctx.lr = 0x82C99A24;
	sub_82C99490(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99A2C"))) PPC_WEAK_FUNC(sub_82C99A2C);
PPC_FUNC_IMPL(__imp__sub_82C99A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C99A30"))) PPC_WEAK_FUNC(sub_82C99A30);
PPC_FUNC_IMPL(__imp__sub_82C99A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C99A38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c99a7c
	if (cr6.eq) goto loc_82C99A7C;
	// subf r28,r5,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82C99A54:
	// lbzu r11,-108(r30)
	ea = -108 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stbu r11,-108(r31)
	ea = -108 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99A74;
	sub_82B5A888(ctx, base);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c99a54
	if (!cr6.eq) goto loc_82C99A54;
loc_82C99A7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99A88"))) PPC_WEAK_FUNC(sub_82C99A88);
PPC_FUNC_IMPL(__imp__sub_82C99A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C99A90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,108
	ctx.r10.s64 = 108;
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
	// ble cr6,0x82c99b20
	if (!cr6.gt) goto loc_82C99B20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,108
	ctx.r29.s64 = ctx.r11.s64 * 108;
	// mulli r26,r11,216
	ctx.r26.s64 = ctx.r11.s64 * 216;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c99898
	ctx.lr = 0x82C99AD8;
	sub_82C99898(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82c99898
	ctx.lr = 0x82C99AEC;
	sub_82C99898(ctx, base);
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
	// bl 0x82c99898
	ctx.lr = 0x82C99B04;
	sub_82C99898(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c99898
	ctx.lr = 0x82C99B18;
	sub_82C99898(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C99B20:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c99898
	ctx.lr = 0x82C99B2C;
	sub_82C99898(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99B34"))) PPC_WEAK_FUNC(sub_82C99B34);
PPC_FUNC_IMPL(__imp__sub_82C99B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C99B38"))) PPC_WEAK_FUNC(sub_82C99B38);
PPC_FUNC_IMPL(__imp__sub_82C99B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C99B40;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,108
	ctx.r10.s64 = 108;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r27,r11,r10
	ctx.r27.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r9,r27,1
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 1;
	// addze. r30,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x82c99c10
	if (!cr0.gt) goto loc_82C99C10;
	// mulli r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C99B7C:
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C99BA0;
	sub_82B56298(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c99938
	ctx.lr = 0x82C99BB8;
	sub_82C99938(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c99bd4
	if (cr6.lt) goto loc_82C99BD4;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82C99BD4;
	sub_825952B8(ctx, base);
loc_82C99BD4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r28.u8);
	// blt cr6,0x82c99bfc
	if (cr6.lt) goto loc_82C99BFC;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82C99BFC;
	sub_825952B8(ctx, base);
loc_82C99BFC:
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// bgt cr6,0x82c99b7c
	if (cr6.gt) goto loc_82C99B7C;
loc_82C99C10:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99C18"))) PPC_WEAK_FUNC(sub_82C99C18);
PPC_FUNC_IMPL(__imp__sub_82C99C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C99C20;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c99d8c
	if (cr6.eq) goto loc_82C99D8C;
	// addi r29,r3,108
	ctx.r29.s64 = ctx.r3.s64 + 108;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c99d8c
	if (cr6.eq) goto loc_82C99D8C;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82C99C50:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C99C70;
	sub_82B56298(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82C99C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c99cb4
	if (cr6.eq) goto loc_82C99CB4;
	// addi r5,r29,108
	ctx.r5.s64 = ctx.r29.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c99a30
	ctx.lr = 0x82C99C9C;
	sub_82C99A30(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r10,97(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// stb r10,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r10.u8);
	// b 0x82c99d28
	goto loc_82C99D28;
loc_82C99CB4:
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82C99CC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c99d14
	if (cr6.eq) goto loc_82C99D14;
loc_82C99CD4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99CF0;
	sub_82B5A888(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C99D08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c99cd4
	if (!cr6.eq) goto loc_82C99CD4;
loc_82C99D14:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lbz r10,97(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
loc_82C99D28:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82b5a888
	ctx.lr = 0x82C99D30;
	sub_82B5A888(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c99d4c
	if (cr6.lt) goto loc_82C99D4C;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82C99D4C;
	sub_825952B8(ctx, base);
loc_82C99D4C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r26.u8);
	// blt cr6,0x82c99d74
	if (cr6.lt) goto loc_82C99D74;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82C99D74;
	sub_825952B8(ctx, base);
loc_82C99D74:
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// bne cr6,0x82c99c50
	if (!cr6.eq) goto loc_82C99C50;
loc_82C99D8C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C99D94"))) PPC_WEAK_FUNC(sub_82C99D94);
PPC_FUNC_IMPL(__imp__sub_82C99D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C99D98"))) PPC_WEAK_FUNC(sub_82C99D98);
PPC_FUNC_IMPL(__imp__sub_82C99D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82C99DA0;
	__savegprlr_17(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,108
	ctx.r10.s64 = 108;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r7,108
	ctx.r11.s64 = ctx.r7.s64 * 108;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-108
	ctx.r5.s64 = ctx.r5.s64 + -108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// bl 0x82c99a88
	ctx.lr = 0x82C99DE0;
	sub_82C99A88(ctx, base);
	// addi r25,r31,108
	ctx.r25.s64 = ctx.r31.s64 + 108;
	// cmplw cr6,r19,r31
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, xer);
	// bge cr6,0x82c99e34
	if (!cr6.lt) goto loc_82C99E34;
loc_82C99DEC:
	// addi r30,r31,-108
	ctx.r30.s64 = ctx.r31.s64 + -108;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82C99E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c99e34
	if (!cr6.eq) goto loc_82C99E34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C99E1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c99e34
	if (!cr6.eq) goto loc_82C99E34;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r19,r30
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r30.u32, xer);
	// blt cr6,0x82c99dec
	if (cr6.lt) goto loc_82C99DEC;
loc_82C99E34:
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r18.u32, xer);
	// bge cr6,0x82c99e80
	if (!cr6.lt) goto loc_82C99E80;
loc_82C99E3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82C99E4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c99e80
	if (!cr6.eq) goto loc_82C99E80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C99E68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c99e80
	if (!cr6.eq) goto loc_82C99E80;
	// addi r25,r25,108
	ctx.r25.s64 = ctx.r25.s64 + 108;
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r18.u32, xer);
	// blt cr6,0x82c99e3c
	if (cr6.lt) goto loc_82C99E3C;
loc_82C99E80:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r22,15
	ctx.r22.s64 = 15;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82C99E94:
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// bge cr6,0x82c99f94
	if (!cr6.lt) goto loc_82C99F94;
loc_82C99E9C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C99EAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c99f88
	if (!cr6.eq) goto loc_82C99F88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82C99EC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c99f94
	if (!cr6.eq) goto loc_82C99F94;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r28,r25,4
	ctx.r28.s64 = ctx.r25.s64 + 4;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r25,r25,108
	ctx.r25.s64 = ctx.r25.s64 + 108;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stb r10,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C99EFC;
	sub_82B56298(ctx, base);
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r9,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// stb r8,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99F1C;
	sub_82B5A888(ctx, base);
	// lbz r7,145(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// lbz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r7,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r7.u8);
	// stb r6,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C99F38;
	sub_82B5A888(ctx, base);
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c99f54
	if (cr6.lt) goto loc_82C99F54;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825952b8
	ctx.lr = 0x82C99F54;
	sub_825952B8(ctx, base);
loc_82C99F54:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r24.u8);
	// blt cr6,0x82c99f7c
	if (cr6.lt) goto loc_82C99F7C;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825952b8
	ctx.lr = 0x82C99F7C;
	sub_825952B8(ctx, base);
loc_82C99F7C:
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r22.u32);
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// stb r24,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r24.u8);
loc_82C99F88:
	// addi r26,r26,108
	ctx.r26.s64 = ctx.r26.s64 + 108;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// blt cr6,0x82c99e9c
	if (cr6.lt) goto loc_82C99E9C;
loc_82C99F94:
	// cmplw cr6,r23,r19
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, xer);
	// ble cr6,0x82c9a09c
	if (!cr6.gt) goto loc_82C9A09C;
	// addi r30,r23,-108
	ctx.r30.s64 = ctx.r23.s64 + -108;
loc_82C99FA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82C99FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9a084
	if (!cr6.eq) goto loc_82C9A084;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C99FCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9a098
	if (!cr6.eq) goto loc_82C9A098;
	// lbzu r11,-108(r31)
	ea = -108 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r11,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r11.u8);
	// stb r10,705(r1)
	PPC_STORE_U8(ctx.r1.u32 + 705, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C99FF8;
	sub_82B56298(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A018;
	sub_82B5A888(ctx, base);
	// lbz r7,704(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 704);
	// lbz r6,705(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 705);
	// addi r4,r1,708
	ctx.r4.s64 = ctx.r1.s64 + 708;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// stb r6,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A034;
	sub_82B5A888(ctx, base);
	// lwz r5,760(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 760);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c9a050
	if (cr6.lt) goto loc_82C9A050;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,740(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// bl 0x825952b8
	ctx.lr = 0x82C9A050;
	sub_825952B8(ctx, base);
loc_82C9A050:
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// stw r22,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r22.u32);
	// stw r24,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,740(r1)
	PPC_STORE_U8(ctx.r1.u32 + 740, ctx.r24.u8);
	// blt cr6,0x82c9a078
	if (cr6.lt) goto loc_82C9A078;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,712(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// bl 0x825952b8
	ctx.lr = 0x82C9A078;
	sub_825952B8(ctx, base);
loc_82C9A078:
	// stw r22,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r22.u32);
	// stw r24,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r24.u32);
	// stb r24,712(r1)
	PPC_STORE_U8(ctx.r1.u32 + 712, ctx.r24.u8);
loc_82C9A084:
	// addi r11,r23,-108
	ctx.r11.s64 = ctx.r23.s64 + -108;
	// addi r30,r30,-108
	ctx.r30.s64 = ctx.r30.s64 + -108;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c99fa0
	if (cr6.lt) goto loc_82C99FA0;
loc_82C9A098:
	// cmplw cr6,r23,r19
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, xer);
loc_82C9A09C:
	// bne cr6,0x82c9a220
	if (!cr6.eq) goto loc_82C9A220;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// beq cr6,0x82c9a454
	if (cr6.eq) goto loc_82C9A454;
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// beq cr6,0x82c9a15c
	if (cr6.eq) goto loc_82C9A15C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r11.u8);
	// stb r10,481(r1)
	PPC_STORE_U8(ctx.r1.u32 + 481, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C9A0D0;
	sub_82B56298(ctx, base);
	// lbz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r29,r25,4
	ctx.r29.s64 = ctx.r25.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A0F0;
	sub_82B5A888(ctx, base);
	// lbz r7,480(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 480);
	// lbz r6,481(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 481);
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r7,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r7.u8);
	// stb r6,1(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A10C;
	sub_82B5A888(ctx, base);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c9a128
	if (cr6.lt) goto loc_82C9A128;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,516(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// bl 0x825952b8
	ctx.lr = 0x82C9A128;
	sub_825952B8(ctx, base);
loc_82C9A128:
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stw r22,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r22.u32);
	// stw r24,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 516, ctx.r24.u8);
	// blt cr6,0x82c9a150
	if (cr6.lt) goto loc_82C9A150;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,488(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// bl 0x825952b8
	ctx.lr = 0x82C9A150;
	sub_825952B8(ctx, base);
loc_82C9A150:
	// stw r22,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r22.u32);
	// stw r24,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r24.u32);
	// stb r24,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, ctx.r24.u8);
loc_82C9A15C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r11,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r11.u8);
	// addi r25,r25,108
	ctx.r25.s64 = ctx.r25.s64 + 108;
	// stb r10,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, ctx.r10.u8);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// addi r26,r26,108
	ctx.r26.s64 = ctx.r26.s64 + 108;
	// bl 0x82b56298
	ctx.lr = 0x82C9A190;
	sub_82B56298(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r9,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r8,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A1B0;
	sub_82B5A888(ctx, base);
	// lbz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// lbz r6,257(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 257);
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// stb r6,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A1CC;
	sub_82B5A888(ctx, base);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c9a1e8
	if (cr6.lt) goto loc_82C9A1E8;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x825952b8
	ctx.lr = 0x82C9A1E8;
	sub_825952B8(ctx, base);
loc_82C9A1E8:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r22,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r22.u32);
	// stw r24,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r24.u8);
	// blt cr6,0x82c9a210
	if (cr6.lt) goto loc_82C9A210;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x825952b8
	ctx.lr = 0x82C9A210;
	sub_825952B8(ctx, base);
loc_82C9A210:
	// stw r22,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r22.u32);
	// stw r24,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r24.u32);
	// stb r24,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r24.u8);
	// b 0x82c99e94
	goto loc_82C99E94;
loc_82C9A220:
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// bne cr6,0x82c9a398
	if (!cr6.eq) goto loc_82C9A398;
	// addi r11,r23,-108
	ctx.r11.s64 = ctx.r23.s64 + -108;
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82c9a2e8
	if (cr6.eq) goto loc_82C9A2E8;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r23,4
	ctx.r30.s64 = ctx.r23.s64 + 4;
	// lbz r10,1(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r11.u8);
	// stb r10,369(r1)
	PPC_STORE_U8(ctx.r1.u32 + 369, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C9A25C;
	sub_82B56298(ctx, base);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r9,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r8,1(r23)
	PPC_STORE_U8(ctx.r23.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A27C;
	sub_82B5A888(ctx, base);
	// lbz r7,368(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// lbz r6,369(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 369);
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// stb r6,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A298;
	sub_82B5A888(ctx, base);
	// lwz r5,424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c9a2b4
	if (cr6.lt) goto loc_82C9A2B4;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x825952b8
	ctx.lr = 0x82C9A2B4;
	sub_825952B8(ctx, base);
loc_82C9A2B4:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// stw r22,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r22.u32);
	// stw r24,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r24.u8);
	// blt cr6,0x82c9a2dc
	if (cr6.lt) goto loc_82C9A2DC;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,376(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// bl 0x825952b8
	ctx.lr = 0x82C9A2DC;
	sub_825952B8(ctx, base);
loc_82C9A2DC:
	// stw r22,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r22.u32);
	// stw r24,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r24.u32);
	// stb r24,376(r1)
	PPC_STORE_U8(ctx.r1.u32 + 376, ctx.r24.u8);
loc_82C9A2E8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r11.u8);
	// stb r10,593(r1)
	PPC_STORE_U8(ctx.r1.u32 + 593, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C9A308;
	sub_82B56298(ctx, base);
	// lbzu r9,-108(r25)
	ea = -108 + ctx.r25.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r25.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A328;
	sub_82B5A888(ctx, base);
	// lbz r7,592(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 592);
	// lbz r6,593(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 593);
	// addi r4,r1,596
	ctx.r4.s64 = ctx.r1.s64 + 596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r7,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r7.u8);
	// stb r6,1(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A344;
	sub_82B5A888(ctx, base);
	// lwz r5,648(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c9a360
	if (cr6.lt) goto loc_82C9A360;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,628(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// bl 0x825952b8
	ctx.lr = 0x82C9A360;
	sub_825952B8(ctx, base);
loc_82C9A360:
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// stw r22,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r22.u32);
	// stw r24,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r24.u8);
	// blt cr6,0x82c9a388
	if (cr6.lt) goto loc_82C9A388;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,600(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// bl 0x825952b8
	ctx.lr = 0x82C9A388;
	sub_825952B8(ctx, base);
loc_82C9A388:
	// stw r22,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r22.u32);
	// stw r24,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r24.u32);
	// stb r24,600(r1)
	PPC_STORE_U8(ctx.r1.u32 + 600, ctx.r24.u8);
	// b 0x82c99e94
	goto loc_82C99E94;
loc_82C9A398:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// lbz r10,1(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// addi r30,r23,-108
	ctx.r30.s64 = ctx.r23.s64 + -108;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// stb r11,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r11.u8);
	// stb r10,817(r1)
	PPC_STORE_U8(ctx.r1.u32 + 817, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C9A3C0;
	sub_82B56298(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r8,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A3E0;
	sub_82B5A888(ctx, base);
	// lbz r7,816(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 816);
	// lbz r6,817(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 817);
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// stb r6,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A3FC;
	sub_82B5A888(ctx, base);
	// lwz r5,872(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c9a418
	if (cr6.lt) goto loc_82C9A418;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,852(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// bl 0x825952b8
	ctx.lr = 0x82C9A418;
	sub_825952B8(ctx, base);
loc_82C9A418:
	// lwz r11,844(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// stw r22,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r22.u32);
	// stw r24,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,852(r1)
	PPC_STORE_U8(ctx.r1.u32 + 852, ctx.r24.u8);
	// blt cr6,0x82c9a440
	if (cr6.lt) goto loc_82C9A440;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,824(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// bl 0x825952b8
	ctx.lr = 0x82C9A440;
	sub_825952B8(ctx, base);
loc_82C9A440:
	// stw r22,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r22.u32);
	// addi r26,r26,108
	ctx.r26.s64 = ctx.r26.s64 + 108;
	// stw r24,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r24.u32);
	// stb r24,824(r1)
	PPC_STORE_U8(ctx.r1.u32 + 824, ctx.r24.u8);
	// b 0x82c99e94
	goto loc_82C99E94;
loc_82C9A454:
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r25,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r25.u32);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9A468"))) PPC_WEAK_FUNC(sub_82C9A468);
PPC_FUNC_IMPL(__imp__sub_82C9A468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c9a4b4
	if (cr6.eq) goto loc_82C9A4B4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c997e0
	ctx.lr = 0x82C9A49C;
	sub_82C997E0(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c99380
	ctx.lr = 0x82C9A4B0;
	sub_82C99380(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C9A4B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9A4CC"))) PPC_WEAK_FUNC(sub_82C9A4CC);
PPC_FUNC_IMPL(__imp__sub_82C9A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9A4D0"))) PPC_WEAK_FUNC(sub_82C9A4D0);
PPC_FUNC_IMPL(__imp__sub_82C9A4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C9A4D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,606
	ctx.r11.s64 = 39714816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,53399
	ctx.r10.u64 = ctx.r11.u64 | 53399;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c9a500
	if (!cr6.gt) goto loc_82C9A500;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C9A500;
	sub_831CC150(ctx, base);
loc_82C9A500:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,108
	ctx.r27.s64 = 108;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bge cr6,0x82c9a594
	if (!cr6.lt) goto loc_82C9A594;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c98758
	ctx.lr = 0x82C9A52C;
	sub_82C98758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c99838
	ctx.lr = 0x82C9A54C;
	sub_82C99838(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r11,r27
	ctx.r27.s32 = PPCDivide(ctx.r11.s32, ctx.r27.s32);
	// beq cr6,0x82c9a578
	if (cr6.eq) goto loc_82C9A578;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c99380
	ctx.lr = 0x82C9A570;
	sub_82C99380(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C9A578;
	sub_82416268(ctx, base);
loc_82C9A578:
	// mulli r10,r28,108
	ctx.r10.s64 = ctx.r28.s64 * 108;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mulli r11,r27,108
	ctx.r11.s64 = ctx.r27.s64 * 108;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82C9A594:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9A59C"))) PPC_WEAK_FUNC(sub_82C9A59C);
PPC_FUNC_IMPL(__imp__sub_82C9A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9A5A0"))) PPC_WEAK_FUNC(sub_82C9A5A0);
PPC_FUNC_IMPL(__imp__sub_82C9A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C9A5A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,108
	ctx.r28.s64 = 108;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r10,r11,r28
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82c9a69c
	if (!cr6.gt) goto loc_82C9A69C;
	// subfic r26,r3,-4
	xer.ca = ctx.r3.u32 <= 4294967292;
	ctx.r26.s64 = -4 - ctx.r3.s64;
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// addi r31,r4,-104
	ctx.r31.s64 = ctx.r4.s64 + -104;
	// subfic r24,r3,104
	xer.ca = ctx.r3.u32 <= 104;
	ctx.r24.s64 = 104 - ctx.r3.s64;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C9A5E4:
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// bl 0x82b56298
	ctx.lr = 0x82C9A600;
	sub_82B56298(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r9.u8);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r8,-3(r31)
	PPC_STORE_U8(ctx.r31.u32 + -3, ctx.r8.u8);
	// bl 0x82b5a888
	ctx.lr = 0x82C9A61C;
	sub_82B5A888(ctx, base);
	// add r5,r26,r31
	ctx.r5.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// divw r5,r5,r28
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r28.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c99938
	ctx.lr = 0x82C9A638;
	sub_82C99938(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82c9a654
	if (cr6.lt) goto loc_82C9A654;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82C9A654;
	sub_825952B8(ctx, base);
loc_82C9A654:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// blt cr6,0x82c9a67c
	if (cr6.lt) goto loc_82C9A67C;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82C9A67C;
	sub_825952B8(ctx, base);
loc_82C9A67C:
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// add r11,r24,r31
	ctx.r11.u64 = ctx.r24.u64 + ctx.r31.u64;
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// divw r10,r11,r28
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82c9a5e4
	if (cr6.gt) goto loc_82C9A5E4;
loc_82C9A69C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9A6A4"))) PPC_WEAK_FUNC(sub_82C9A6A4);
PPC_FUNC_IMPL(__imp__sub_82C9A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9A6A8"))) PPC_WEAK_FUNC(sub_82C9A6A8);
PPC_FUNC_IMPL(__imp__sub_82C9A6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1080
	ctx.r9.s64 = ctx.r11.s64 + -1080;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82d35198
	ctx.lr = 0x82C9A6DC;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82C9A6E8;
	sub_82D36760(ctx, base);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9a710
	if (cr6.eq) goto loc_82C9A710;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c99380
	ctx.lr = 0x82C9A708;
	sub_82C99380(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C9A710;
	sub_82416268(ctx, base);
loc_82C9A710:
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
	ctx.lr = 0x82C9A728;
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

__attribute__((alias("__imp__sub_82C9A740"))) PPC_WEAK_FUNC(sub_82C9A740);
PPC_FUNC_IMPL(__imp__sub_82C9A740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9A748;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9a808
	if (cr6.eq) goto loc_82C9A808;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04828
	ctx.lr = 0x82C9A768;
	sub_82D04828(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C9A774;
	sub_82D28370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8291fd60
	ctx.lr = 0x82C9A78C;
	sub_8291FD60(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04d80
	ctx.lr = 0x82C9A79C;
	sub_82D04D80(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bgt cr6,0x82c9a7d8
	if (cr6.gt) goto loc_82C9A7D8;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,576(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// b 0x82c9a7e0
	goto loc_82C9A7E0;
loc_82C9A7D8:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,580(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 580);
loc_82C9A7E0:
	// bctrl 
	ctx.lr = 0x82C9A7E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C9A7F8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838ae2a8
	ctx.lr = 0x82C9A800;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04b60
	ctx.lr = 0x82C9A808;
	sub_82D04B60(ctx, base);
loc_82C9A808:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9A810"))) PPC_WEAK_FUNC(sub_82C9A810);
PPC_FUNC_IMPL(__imp__sub_82C9A810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,606
	ctx.r10.s64 = 39714816;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,108
	ctx.r9.s64 = 108;
	// ori r8,r10,53399
	ctx.r8.u64 = ctx.r10.u64 | 53399;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c9a844
	if (!cr6.lt) goto loc_82C9A844;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82C9A844:
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
	// blt cr6,0x82c9a874
	if (cr6.lt) goto loc_82C9A874;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82C9A874:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c9a880
	if (!cr6.lt) goto loc_82C9A880;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82C9A880:
	// b 0x82c9a4d0
	sub_82C9A4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9A884"))) PPC_WEAK_FUNC(sub_82C9A884);
PPC_FUNC_IMPL(__imp__sub_82C9A884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9A888"))) PPC_WEAK_FUNC(sub_82C9A888);
PPC_FUNC_IMPL(__imp__sub_82C9A888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c9a6a8
	ctx.lr = 0x82C9A8A8;
	sub_82C9A6A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9a8c0
	if (cr6.eq) goto loc_82C9A8C0;
	// bl 0x82416268
	ctx.lr = 0x82C9A8BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C9A8C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9A8D8"))) PPC_WEAK_FUNC(sub_82C9A8D8);
PPC_FUNC_IMPL(__imp__sub_82C9A8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C9A8E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9ac00
	if (cr6.eq) goto loc_82C9AC00;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r23,108
	ctx.r23.s64 = 108;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r23
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// ble cr6,0x82c9ac00
	if (!cr6.gt) goto loc_82C9AC00;
	// mulli r24,r5,108
	ctx.r24.s64 = ctx.r5.s64 * 108;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82b56298
	ctx.lr = 0x82C9A92C;
	sub_82B56298(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d8b758
	ctx.lr = 0x82C9A93C;
	sub_82D8B758(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8b938
	ctx.lr = 0x82C9A948;
	sub_82D8B938(ctx, base);
	// lwz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r27,r26,100
	ctx.r27.s64 = ctx.r26.s64 + 100;
	// addi r31,r11,-1228
	ctx.r31.s64 = ctx.r11.s64 + -1228;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9A970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9a9b8
	if (cr6.eq) goto loc_82C9A9B8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c9a990
	if (cr6.eq) goto loc_82C9A990;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C9A98C;
	sub_82D29598(ctx, base);
	// b 0x82c9a9b8
	goto loc_82C9A9B8;
loc_82C9A990:
	// addi r4,r31,-714
	ctx.r4.s64 = ctx.r31.s64 + -714;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C9A99C;
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
	ctx.lr = 0x82C9A9B0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9A9B8;
	sub_8387E8E0(ctx, base);
loc_82C9A9B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9A9D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c98178
	ctx.lr = 0x82C9A9E0;
	sub_82C98178(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c9aa70
	if (!cr6.eq) goto loc_82C9AA70;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bctrl 
	ctx.lr = 0x82C9AA08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C9AA20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9aa78
	if (cr6.eq) goto loc_82C9AA78;
	// addi r4,r31,-713
	ctx.r4.s64 = ctx.r31.s64 + -713;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C9AA38;
	sub_837B0C10(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82d8ee48
	ctx.lr = 0x82C9AA50;
	sub_82D8EE48(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c9a740
	ctx.lr = 0x82C9AA64;
	sub_82C9A740(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9AA6C;
	sub_8387E8E0(ctx, base);
	// b 0x82c9aa78
	goto loc_82C9AA78;
loc_82C9AA70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C9AA78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9AA78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// bgt cr6,0x82c9aa9c
	if (cr6.gt) goto loc_82C9AA9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9AA9C;
	sub_831CC188(ctx, base);
loc_82C9AA9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzx r31,r11,r24
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C9AAB0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9aad0
	if (cr6.eq) goto loc_82C9AAD0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9aacc
	if (cr6.eq) goto loc_82C9AACC;
	// bl 0x82d3c750
	ctx.lr = 0x82C9AAC8;
	sub_82D3C750(ctx, base);
	// b 0x82c9aad0
	goto loc_82C9AAD0;
loc_82C9AACC:
	// bl 0x82d3c780
	ctx.lr = 0x82C9AAD0;
	sub_82D3C780(ctx, base);
loc_82C9AAD0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r10,r9,r23
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c9ab18
	if (cr0.eq) goto loc_82C9AB18;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c9ab48
	if (!cr6.gt) goto loc_82C9AB48;
loc_82C9AAF8:
	// lbzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c9ab08
	if (cr6.eq) goto loc_82C9AB08;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82C9AB08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,108
	ctx.r9.s64 = ctx.r9.s64 + 108;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c9aaf8
	if (cr6.gt) goto loc_82C9AAF8;
loc_82C9AB18:
	// lwz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c9ab64
	if (cr6.eq) goto loc_82C9AB64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c9ab64
	if (cr6.eq) goto loc_82C9AB64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c9ab64
	if (cr6.eq) goto loc_82C9AB64;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bgt cr6,0x82c9ab54
	if (cr6.gt) goto loc_82C9AB54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9AB48;
	sub_831CC188(ctx, base);
loc_82C9AB48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9AB54;
	sub_831CC188(ctx, base);
loc_82C9AB54:
	// add r11,r8,r24
	ctx.r11.u64 = ctx.r8.u64 + ctx.r24.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// b 0x82c9abd8
	goto loc_82C9ABD8;
loc_82C9AB64:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9ab98
	if (!cr6.eq) goto loc_82C9AB98;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x82c9ab80
	if (cr6.lt) goto loc_82C9AB80;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82c9aba4
	goto loc_82C9ABA4;
loc_82C9AB80:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r10,117(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 117);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82c9aba4
	goto loc_82C9ABA4;
loc_82C9AB98:
	// lbz r11,131(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 131);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82C9ABA4:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C9ABB8;
	sub_82D2B608(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r23
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x82c9abd8
	if (!cr6.gt) goto loc_82C9ABD8;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stb r31,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r31.u8);
loc_82C9ABD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C9ABE8;
	sub_82D2D510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82c98200
	ctx.lr = 0x82C9ABF8;
	sub_82C98200(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8378e240
	ctx.lr = 0x82C9AC00;
	sub_8378E240(ctx, base);
loc_82C9AC00:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9AC08"))) PPC_WEAK_FUNC(sub_82C9AC08);
PPC_FUNC_IMPL(__imp__sub_82C9AC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bge cr6,0x82c9ac40
	if (!cr6.lt) goto loc_82C9AC40;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82c9ac44
	if (!cr6.gt) goto loc_82C9AC44;
loc_82C9AC40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C9AC44:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9aca8
	if (cr6.eq) goto loc_82C9ACA8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,108
	ctx.r9.s64 = 108;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82c9ac78
	if (!cr6.eq) goto loc_82C9AC78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9a810
	ctx.lr = 0x82C9AC78;
	sub_82C9A810(ctx, base);
loc_82C9AC78:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,108
	ctx.r10.s64 = ctx.r30.s64 * 108;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9ace8
	if (cr6.eq) goto loc_82C9ACE8;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// b 0x82c9ace0
	goto loc_82C9ACE0;
loc_82C9ACA8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9acc0
	if (!cr6.eq) goto loc_82C9ACC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9a810
	ctx.lr = 0x82C9ACC0;
	sub_82C9A810(ctx, base);
loc_82C9ACC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9ace8
	if (cr6.eq) goto loc_82C9ACE8;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_82C9ACE0:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82b56298
	ctx.lr = 0x82C9ACE8;
	sub_82B56298(ctx, base);
loc_82C9ACE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
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

__attribute__((alias("__imp__sub_82C9AD0C"))) PPC_WEAK_FUNC(sub_82C9AD0C);
PPC_FUNC_IMPL(__imp__sub_82C9AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9AD10"))) PPC_WEAK_FUNC(sub_82C9AD10);
PPC_FUNC_IMPL(__imp__sub_82C9AD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C9AD18;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,108
	ctx.r25.s64 = 108;
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
	// ble cr6,0x82c9adcc
	if (!cr6.gt) goto loc_82C9ADCC;
loc_82C9AD40:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82c9adf0
	if (!cr6.gt) goto loc_82C9ADF0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c99d98
	ctx.lr = 0x82C9AD5C;
	sub_82C99D98(ctx, base);
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
	// bge cr6,0x82c9adac
	if (!cr6.lt) goto loc_82C9ADAC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c9ad10
	ctx.lr = 0x82C9ADA4;
	sub_82C9AD10(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82c9adbc
	goto loc_82C9ADBC;
loc_82C9ADAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c9ad10
	ctx.lr = 0x82C9ADB8;
	sub_82C9AD10(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82C9ADBC:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82c9ad40
	if (cr6.gt) goto loc_82C9AD40;
loc_82C9ADCC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c9ade8
	if (!cr6.gt) goto loc_82C9ADE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c99c18
	ctx.lr = 0x82C9ADE8;
	sub_82C99C18(ctx, base);
loc_82C9ADE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C9ADF0:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82c9adcc
	if (!cr6.gt) goto loc_82C9ADCC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c9ae18
	if (!cr6.gt) goto loc_82C9AE18;
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
	// bl 0x82c99b38
	ctx.lr = 0x82C9AE18;
	sub_82C99B38(ctx, base);
loc_82C9AE18:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c9a5a0
	ctx.lr = 0x82C9AE28;
	sub_82C9A5A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9AE30"))) PPC_WEAK_FUNC(sub_82C9AE30);
PPC_FUNC_IMPL(__imp__sub_82C9AE30) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c9a8d8
	sub_82C9A8D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9AE34"))) PPC_WEAK_FUNC(sub_82C9AE34);
PPC_FUNC_IMPL(__imp__sub_82C9AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9AE38"))) PPC_WEAK_FUNC(sub_82C9AE38);
PPC_FUNC_IMPL(__imp__sub_82C9AE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82C9AE40;
	__savegprlr_19(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9AE4C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9ae64
	if (!cr6.eq) goto loc_82C9AE64;
loc_82C9AE58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C9AE64:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C9AE6C;
	sub_825832D8(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C9AE7C;
	sub_82DAB6D0(ctx, base);
	// addi r22,r21,100
	ctx.r22.s64 = ctx.r21.s64 + 100;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c9a468
	ctx.lr = 0x82C9AE8C;
	sub_82C9A468(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r19,r21,117
	ctx.r19.s64 = ctx.r21.s64 + 117;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C9AEA0:
	// stbx r31,r19,r11
	PPC_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82c9aea0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9AEA0;
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c9b02c
	if (cr6.eq) goto loc_82C9B02C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c9b02c
	if (cr6.eq) goto loc_82C9B02C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4368
	ctx.lr = 0x82C9AECC;
	sub_82DA4368(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9AED0;
	sub_83102DB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,104
	ctx.r25.s64 = 104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// divw. r11,r9,r25
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c9b244
	if (cr0.eq) goto loc_82C9B244;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9b020
	if (!cr6.gt) goto loc_82C9B020;
loc_82C9AF04:
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b56298
	ctx.lr = 0x82C9AF10;
	sub_82B56298(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c9afac
	if (!cr6.eq) goto loc_82C9AFAC;
	// lwz r30,372(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r20,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r20.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c9afac
	if (cr6.eq) goto loc_82C9AFAC;
loc_82C9AF2C:
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x82b5a7e0
	ctx.lr = 0x82C9AF34;
	sub_82B5A7E0(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x82b5a888
	ctx.lr = 0x82C9AF40;
	sub_82B5A888(ctx, base);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// stb r31,417(r1)
	PPC_STORE_U8(ctx.r1.u32 + 417, ctx.r31.u8);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c9ac08
	ctx.lr = 0x82C9AF54;
	sub_82C9AC08(ctx, base);
	// lwz r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9af70
	if (cr6.lt) goto loc_82C9AF70;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x825952b8
	ctx.lr = 0x82C9AF70;
	sub_825952B8(ctx, base);
loc_82C9AF70:
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// stw r26,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r26.u32);
	// stw r31,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 452, ctx.r31.u8);
	// blt cr6,0x82c9af98
	if (cr6.lt) goto loc_82C9AF98;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// bl 0x825952b8
	ctx.lr = 0x82C9AF98;
	sub_825952B8(ctx, base);
loc_82C9AF98:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r26.u32);
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r31.u32);
	// stb r31,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r31.u8);
	// bne 0x82c9af2c
	if (!cr0.eq) goto loc_82C9AF2C;
loc_82C9AFAC:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9afc8
	if (cr6.lt) goto loc_82C9AFC8;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82C9AFC8;
	sub_825952B8(ctx, base);
loc_82C9AFC8:
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// blt cr6,0x82c9aff0
	if (cr6.lt) goto loc_82C9AFF0;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x825952b8
	ctx.lr = 0x82C9AFF0;
	sub_825952B8(ctx, base);
loc_82C9AFF0:
	// stw r26,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r26.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// addi r27,r27,104
	ctx.r27.s64 = ctx.r27.s64 + 104;
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r25
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c9af04
	if (cr6.gt) goto loc_82C9AF04;
	// b 0x82c9b244
	goto loc_82C9B244;
loc_82C9B020:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9B02C;
	sub_831CC188(ctx, base);
loc_82C9B02C:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C9B034;
	sub_82921C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82deabb0
	ctx.lr = 0x82C9B03C;
	sub_82DEABB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82deabb8
	ctx.lr = 0x82C9B048;
	sub_82DEABB8(ctx, base);
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c9b080
	if (cr6.eq) goto loc_82C9B080;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c9b0a8
	if (!cr6.eq) goto loc_82C9B0A8;
	// bl 0x82d9e6b8
	ctx.lr = 0x82C9B068;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9ae58
	if (!cr6.eq) goto loc_82C9AE58;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82c9b09c
	goto loc_82C9B09C;
loc_82C9B080:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9e6b8
	ctx.lr = 0x82C9B088;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9ae58
	if (!cr6.eq) goto loc_82C9AE58;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82C9B09C:
	// li r10,56
	ctx.r10.s64 = 56;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r28,r8,r10
	ctx.r28.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
loc_82C9B0A8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82c9b244
	if (cr6.eq) goto loc_82C9B244;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r29,6
	ctx.r29.s64 = 6;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82C9B0C4:
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82b5a7e0
	ctx.lr = 0x82C9B0CC;
	sub_82B5A7E0(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82b5a7e0
	ctx.lr = 0x82C9B0D4;
	sub_82B5A7E0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// li r9,84
	ctx.r9.s64 = 84;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stb r31,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r31.u8);
	// stb r31,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r31.u8);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stb r31,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r31.u8);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// beq cr6,0x82c9b140
	if (cr6.eq) goto loc_82C9B140;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c9b150
	if (!cr6.eq) goto loc_82C9B150;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82c9b144
	goto loc_82C9B144;
loc_82C9B140:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82C9B144:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82deacd8
	ctx.lr = 0x82C9B150;
	sub_82DEACD8(ctx, base);
loc_82C9B150:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// stw r20,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r20.u32);
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stb r31,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r31.u8);
	// bl 0x82c9ac08
	ctx.lr = 0x82C9B190;
	sub_82C9AC08(ctx, base);
	// lwz r7,248(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82c9b1ac
	if (cr6.lt) goto loc_82C9B1AC;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x825952b8
	ctx.lr = 0x82C9B1AC;
	sub_825952B8(ctx, base);
loc_82C9B1AC:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r26,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r26.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
	// blt cr6,0x82c9b1d4
	if (cr6.lt) goto loc_82C9B1D4;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x825952b8
	ctx.lr = 0x82C9B1D4;
	sub_825952B8(ctx, base);
loc_82C9B1D4:
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// blt cr6,0x82c9b1fc
	if (cr6.lt) goto loc_82C9B1FC;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82C9B1FC;
	sub_825952B8(ctx, base);
loc_82C9B1FC:
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// stw r26,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r26.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// blt cr6,0x82c9b224
	if (cr6.lt) goto loc_82C9B224;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,532(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// bl 0x825952b8
	ctx.lr = 0x82C9B224;
	sub_825952B8(ctx, base);
loc_82C9B224:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// blt cr6,0x82c9b0c4
	if (cr6.lt) goto loc_82C9B0C4;
loc_82C9B244:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r25,108
	ctx.r25.s64 = 108;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r28,r8,r25
	ctx.r28.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x82c9b290
	if (cr0.eq) goto loc_82C9B290;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82C9B264:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r25
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r25.s32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c9b2fc
	if (!cr6.gt) goto loc_82C9B2FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r31,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u8);
	// addi r9,r9,108
	ctx.r9.s64 = ctx.r9.s64 + 108;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// blt cr6,0x82c9b264
	if (cr6.lt) goto loc_82C9B264;
loc_82C9B290:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c9b2d0
	if (cr6.eq) goto loc_82C9B2D0;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82C9B2A0:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r25
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r25.s32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c9b308
	if (!cr6.gt) goto loc_82C9B308;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,108
	ctx.r9.s64 = ctx.r9.s64 + 108;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stb r31,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r31.u8);
	// blt cr6,0x82c9b2a0
	if (cr6.lt) goto loc_82C9B2A0;
loc_82C9B2D0:
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c9b314
	if (!cr6.eq) goto loc_82C9B314;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d97a20
	ctx.lr = 0x82C9B2E4;
	sub_82D97A20(ctx, base);
loc_82C9B2E4:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r3,r9,r25
	ctx.r3.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C9B2FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9B308;
	sub_831CC188(ctx, base);
loc_82C9B308:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9B314;
	sub_831CC188(ctx, base);
loc_82C9B314:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C9B31C;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9b334
	if (!cr6.eq) goto loc_82C9B334;
	// lbz r11,131(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 131);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9b2e4
	if (!cr6.eq) goto loc_82C9B2E4;
loc_82C9B334:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9B33C;
	sub_82D97688(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,28
	ctx.r26.s64 = 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// divw. r10,r9,r26
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c9b2e4
	if (cr0.eq) goto loc_82C9B2E4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9b498
	if (!cr6.gt) goto loc_82C9B498;
loc_82C9B368:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82d8b758
	ctx.lr = 0x82C9B374;
	sub_82D8B758(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x82c9b3e0
	if (cr6.gt) goto loc_82C9B3E0;
	// lis r12,-32054
	ctx.r12.s64 = -2100690944;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19564
	ctx.r12.s64 = ctx.r12.s64 + -19564;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82C9B3C0;
	case 1:
		goto loc_82C9B3D8;
	case 2:
		goto loc_82C9B3E0;
	case 3:
		goto loc_82C9B3E0;
	case 4:
		goto loc_82C9B3E0;
	case 5:
		goto loc_82C9B3E0;
	case 6:
		goto loc_82C9B3E0;
	case 7:
		goto loc_82C9B3E0;
	case 8:
		goto loc_82C9B3E0;
	case 9:
		goto loc_82C9B3CC;
	case 10:
		goto loc_82C9B3D8;
	default:
		return;
	}
	// lwz r22,-19520(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19520);
	// lwz r22,-19496(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19496);
	// lwz r22,-19488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19488);
	// lwz r22,-19488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19488);
	// lwz r22,-19488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19488);
	// lwz r22,-19488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19488);
	// lwz r22,-19488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19488);
	// lwz r22,-19488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19488);
	// lwz r22,-19488(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19488);
	// lwz r22,-19508(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19508);
	// lwz r22,-19496(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19496);
loc_82C9B3C0:
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
	// stb r20,126(r21)
	PPC_STORE_U8(ctx.r21.u32 + 126, ctx.r20.u8);
	// b 0x82c9b3e0
	goto loc_82C9B3E0;
loc_82C9B3CC:
	// stb r20,126(r21)
	PPC_STORE_U8(ctx.r21.u32 + 126, ctx.r20.u8);
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
	// b 0x82c9b3e0
	goto loc_82C9B3E0;
loc_82C9B3D8:
	// stb r20,118(r21)
	PPC_STORE_U8(ctx.r21.u32 + 118, ctx.r20.u8);
	// stb r20,127(r21)
	PPC_STORE_U8(ctx.r21.u32 + 127, ctx.r20.u8);
loc_82C9B3E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq cr6,0x82c9b474
	if (cr6.eq) goto loc_82C9B474;
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_82C9B410:
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x82c9b4a4
	if (!cr6.gt) goto loc_82C9B4A4;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r24,64(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r24,r8
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, xer);
	// bne cr6,0x82c9b454
	if (!cr6.eq) goto loc_82C9B454;
	// lwz r24,68(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r24,r6
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r6.u32, xer);
	// bne cr6,0x82c9b454
	if (!cr6.eq) goto loc_82C9B454;
	// lwz r24,92(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r24,r5
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c9b454
	if (!cr6.eq) goto loc_82C9B454;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c9b468
	if (cr6.eq) goto loc_82C9B468;
loc_82C9B454:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, xer);
	// blt cr6,0x82c9b410
	if (cr6.lt) goto loc_82C9B410;
	// b 0x82c9b474
	goto loc_82C9B474;
loc_82C9B468:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82c989a0
	ctx.lr = 0x82C9B474;
	sub_82C989A0(ctx, base);
loc_82C9B474:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r26
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bgt cr6,0x82c9b368
	if (cr6.gt) goto loc_82C9B368;
	// b 0x82c9b2e4
	goto loc_82C9B2E4;
loc_82C9B498:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9B4A4;
	sub_831CC188(ctx, base);
loc_82C9B4A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9B4B0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C9B4B0"))) PPC_WEAK_FUNC(sub_82C9B4B0);
PPC_FUNC_IMPL(__imp__sub_82C9B4B0) {
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
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x82c9b4d8
	if (cr6.lt) goto loc_82C9B4D8;
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
loc_82C9B4D8:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r8,r10,-792
	ctx.r8.s64 = ctx.r10.s64 + -792;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r5,108
	ctx.r5.s64 = 108;
	// divw r5,r6,r5
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r5.s32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x82c9ad10
	ctx.lr = 0x82C9B508;
	sub_82C9AD10(ctx, base);
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

__attribute__((alias("__imp__sub_82C9B51C"))) PPC_WEAK_FUNC(sub_82C9B51C);
PPC_FUNC_IMPL(__imp__sub_82C9B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9B520"))) PPC_WEAK_FUNC(sub_82C9B520);
PPC_FUNC_IMPL(__imp__sub_82C9B520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C9B528;
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
	ctx.lr = 0x82C9B544;
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
	ctx.lr = 0x82C9B55C;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// addi r9,r11,-1080
	ctx.r9.s64 = ctx.r11.s64 + -1080;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r30,r7,560
	ctx.r30.s64 = ctx.r7.s64 + 560;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stb r28,131(r31)
	PPC_STORE_U8(ctx.r31.u32 + 131, ctx.r28.u8);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stb r11,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r11.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r4,560(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 560);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9B5B8;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,568(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 568);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9B5C8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82C9B5D8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9ae38
	ctx.lr = 0x82C9B5E0;
	sub_82C9AE38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9b600
	if (!cr6.eq) goto loc_82C9B600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c98298
	ctx.lr = 0x82C9B5F4;
	sub_82C98298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C9B600:
	// bl 0x82d86078
	ctx.lr = 0x82C9B604;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b700
	if (cr6.eq) goto loc_82C9B700;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// ble cr6,0x82c9b660
	if (!cr6.gt) goto loc_82C9B660;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C9B620;
	sub_831F8200(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8291bd40
	ctx.lr = 0x82C9B62C;
	sub_8291BD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9b660
	if (cr6.eq) goto loc_82C9B660;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,354
	ctx.r4.u64 = ctx.r4.u64 | 354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82C9B64C;
	sub_82D21730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9e3d8
	ctx.lr = 0x82C9B65C;
	sub_82D9E3D8(ctx, base);
	// stb r29,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r29.u8);
loc_82C9B660:
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9B668;
	sub_82DAB6D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,3504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3504);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r5,3508(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3508);
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// bl 0x82c9b4b0
	ctx.lr = 0x82C9B688;
	sub_82C9B4B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9B690;
	sub_82D8BB28(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c9b6f8
	if (!cr6.eq) goto loc_82C9B6F8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9B6AC;
	sub_82D19788(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,11
	ctx.r4.s64 = 11;
	// ori r5,r5,102
	ctx.r5.u64 = ctx.r5.u64 | 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82C9B6C0;
	sub_82D20EB8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c9b6d4
	if (cr6.eq) goto loc_82C9B6D4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c9b6f8
	if (!cr6.eq) goto loc_82C9B6F8;
loc_82C9B6D4:
	// lis r5,31
	ctx.r5.s64 = 2031616;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,81
	ctx.r5.u64 = ctx.r5.u64 | 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82C9B6E8;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9B6F8;
	sub_82D19788(ctx, base);
loc_82C9B6F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c986a8
	ctx.lr = 0x82C9B700;
	sub_82C986A8(ctx, base);
loc_82C9B700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9B70C"))) PPC_WEAK_FUNC(sub_82C9B70C);
PPC_FUNC_IMPL(__imp__sub_82C9B70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9B710"))) PPC_WEAK_FUNC(sub_82C9B710);
PPC_FUNC_IMPL(__imp__sub_82C9B710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C9B718;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c9b8ac
	if (!cr6.eq) goto loc_82C9B8AC;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
	// lwz r29,120(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82c9b758
	if (cr6.lt) goto loc_82C9B758;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82c9b75c
	if (cr6.lt) goto loc_82C9B75C;
loc_82C9B758:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C9B75C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
	// lwz r31,124(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82c9b780
	if (cr6.lt) goto loc_82C9B780;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82c9b784
	if (cr6.lt) goto loc_82C9B784;
loc_82C9B780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C9B784:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82c9b7a8
	if (!cr6.eq) goto loc_82C9B7A8;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
loc_82C9B7A8:
	// bl 0x82d86078
	ctx.lr = 0x82C9B7AC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9B7BC;
	sub_82DAB6D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,3504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3504, ctx.r29.u32);
	// stw r31,3508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3508, ctx.r31.u32);
	// bl 0x82c9b4b0
	ctx.lr = 0x82C9B7D8;
	sub_82C9B4B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r31.u32);
	// bl 0x82d19ba0
	ctx.lr = 0x82C9B7F4;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d1eac0
	ctx.lr = 0x82C9B804;
	sub_82D1EAC0(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,572(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// bl 0x82d19a78
	ctx.lr = 0x82C9B814;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82C9B81C;
	sub_82D2F098(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82C9B830;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b8ac
	if (cr6.eq) goto loc_82C9B8AC;
	// addi r26,r30,100
	ctx.r26.s64 = ctx.r30.s64 + 100;
	// li r25,108
	ctx.r25.s64 = 108;
loc_82C9B840:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9b8ac
	if (!cr6.gt) goto loc_82C9B8AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C9B864;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b898
	if (cr6.eq) goto loc_82C9B898;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d19ba0
	ctx.lr = 0x82C9B87C;
	sub_82D19BA0(ctx, base);
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9B898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9B898:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82C9B8A4;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c9b840
	if (cr6.lt) goto loc_82C9B840;
loc_82C9B8AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9B8B8"))) PPC_WEAK_FUNC(sub_82C9B8B8);
PPC_FUNC_IMPL(__imp__sub_82C9B8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c9b8e0
	if (cr6.lt) goto loc_82C9B8E0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c9b8e4
	goto loc_82C9B8E4;
loc_82C9B8E0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C9B8E4:
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
	ctx.lr = 0x82C9B900;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b920
	if (cr6.eq) goto loc_82C9B920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c9b520
	ctx.lr = 0x82C9B91C;
	sub_82C9B520(ctx, base);
	// b 0x82c9b924
	goto loc_82C9B924;
loc_82C9B920:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9B924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9B93C"))) PPC_WEAK_FUNC(sub_82C9B93C);
PPC_FUNC_IMPL(__imp__sub_82C9B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9B940"))) PPC_WEAK_FUNC(sub_82C9B940);
PPC_FUNC_IMPL(__imp__sub_82C9B940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c9b968
	if (cr6.lt) goto loc_82C9B968;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c9b96c
	goto loc_82C9B96C;
loc_82C9B968:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C9B96C:
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
	ctx.lr = 0x82C9B988;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9b9a8
	if (cr6.eq) goto loc_82C9B9A8;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c9b520
	ctx.lr = 0x82C9B9A4;
	sub_82C9B520(ctx, base);
	// b 0x82c9b9ac
	goto loc_82C9B9AC;
loc_82C9B9A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9B9AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9B9C4"))) PPC_WEAK_FUNC(sub_82C9B9C4);
PPC_FUNC_IMPL(__imp__sub_82C9B9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9B9C8"))) PPC_WEAK_FUNC(sub_82C9B9C8);
PPC_FUNC_IMPL(__imp__sub_82C9B9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c9b9f0
	if (cr6.lt) goto loc_82C9B9F0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c9b9f4
	goto loc_82C9B9F4;
loc_82C9B9F0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C9B9F4:
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
	ctx.lr = 0x82C9BA10;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ba30
	if (cr6.eq) goto loc_82C9BA30;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c9b520
	ctx.lr = 0x82C9BA2C;
	sub_82C9B520(ctx, base);
	// b 0x82c9ba34
	goto loc_82C9BA34;
loc_82C9BA30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9BA34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9BA4C"))) PPC_WEAK_FUNC(sub_82C9BA4C);
PPC_FUNC_IMPL(__imp__sub_82C9BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9BA50"))) PPC_WEAK_FUNC(sub_82C9BA50);
PPC_FUNC_IMPL(__imp__sub_82C9BA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c9ba78
	if (cr6.lt) goto loc_82C9BA78;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c9ba7c
	goto loc_82C9BA7C;
loc_82C9BA78:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C9BA7C:
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
	ctx.lr = 0x82C9BA98;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9bab8
	if (cr6.eq) goto loc_82C9BAB8;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c9b520
	ctx.lr = 0x82C9BAB4;
	sub_82C9B520(ctx, base);
	// b 0x82c9babc
	goto loc_82C9BABC;
loc_82C9BAB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9BABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9BAD4"))) PPC_WEAK_FUNC(sub_82C9BAD4);
PPC_FUNC_IMPL(__imp__sub_82C9BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9BAD8"))) PPC_WEAK_FUNC(sub_82C9BAD8);
PPC_FUNC_IMPL(__imp__sub_82C9BAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C9BAE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// lis r9,51
	ctx.r9.s64 = 3342336;
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// lis r7,40
	ctx.r7.s64 = 2621440;
	// lis r8,51
	ctx.r8.s64 = 3342336;
	// lis r6,51
	ctx.r6.s64 = 3342336;
	// ori r4,r11,667
	ctx.r4.u64 = ctx.r11.u64 | 667;
	// ori r11,r9,112
	ctx.r11.u64 = ctx.r9.u64 | 112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// ori r3,r10,313
	ctx.r3.u64 = ctx.r10.u64 | 313;
	// ori r9,r7,102
	ctx.r9.u64 = ctx.r7.u64 | 102;
	// ori r10,r8,111
	ctx.r10.u64 = ctx.r8.u64 | 111;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// ori r7,r6,109
	ctx.r7.u64 = ctx.r6.u64 | 109;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// ori r6,r5,110
	ctx.r6.u64 = ctx.r5.u64 | 110;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r30,r1,224
	ctx.r30.s64 = ctx.r1.s64 + 224;
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
loc_82C9BB7C:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82C9BB94;
	sub_82D04220(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8291fdc8
	ctx.lr = 0x82C9BBA0;
	sub_8291FDC8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9bbbc
	if (cr6.lt) goto loc_82C9BBBC;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82C9BBBC;
	sub_825952B8(ctx, base);
loc_82C9BBBC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bne 0x82c9bb7c
	if (!cr0.eq) goto loc_82C9BB7C;
	// addi r30,r1,216
	ctx.r30.s64 = ctx.r1.s64 + 216;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82C9BBDC:
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82C9BBF4;
	sub_82D04220(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8291fdc8
	ctx.lr = 0x82C9BC00;
	sub_8291FDC8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9bc1c
	if (cr6.lt) goto loc_82C9BC1C;
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82C9BC1C;
	sub_825952B8(ctx, base);
loc_82C9BC1C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// bne 0x82c9bbdc
	if (!cr0.eq) goto loc_82C9BBDC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82afe488
	ctx.lr = 0x82C9BC40;
	sub_82AFE488(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82afe488
	ctx.lr = 0x82C9BC4C;
	sub_82AFE488(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c263d0
	ctx.lr = 0x82C9BC54;
	sub_82C263D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r3.u32);
	// bne cr6,0x82c9bcf4
	if (!cr6.eq) goto loc_82C9BCF4;
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c9bc90
	if (cr6.eq) goto loc_82C9BC90;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x838adab0
	ctx.lr = 0x82C9BC80;
	sub_838ADAB0(ctx, base);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825952b8
	ctx.lr = 0x82C9BC90;
	sub_825952B8(ctx, base);
loc_82C9BC90:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c9bcc0
	if (cr6.eq) goto loc_82C9BCC0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x838adab0
	ctx.lr = 0x82C9BCB0;
	sub_838ADAB0(ctx, base);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x825952b8
	ctx.lr = 0x82C9BCC0;
	sub_825952B8(ctx, base);
loc_82C9BCC0:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9bdb4
	if (cr6.eq) goto loc_82C9BDB4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82afdf98
	ctx.lr = 0x82C9BCDC;
	sub_82AFDF98(ctx, base);
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82C9BCEC;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C9BCF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,136(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// bl 0x82c25c80
	ctx.lr = 0x82C9BD00;
	sub_82C25C80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,140(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// lwz r3,132(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// bl 0x82c25c80
	ctx.lr = 0x82C9BD10;
	sub_82C25C80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// bl 0x83103100
	ctx.lr = 0x82C9BD1C;
	sub_83103100(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C9BD28;
	sub_82D17DA0(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c9bd58
	if (cr6.eq) goto loc_82C9BD58;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x838adab0
	ctx.lr = 0x82C9BD48;
	sub_838ADAB0(ctx, base);
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x825952b8
	ctx.lr = 0x82C9BD58;
	sub_825952B8(ctx, base);
loc_82C9BD58:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c9bd88
	if (cr6.eq) goto loc_82C9BD88;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x838adab0
	ctx.lr = 0x82C9BD78;
	sub_838ADAB0(ctx, base);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x825952b8
	ctx.lr = 0x82C9BD88;
	sub_825952B8(ctx, base);
loc_82C9BD88:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9bdb4
	if (cr6.eq) goto loc_82C9BDB4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82afdf98
	ctx.lr = 0x82C9BDA4;
	sub_82AFDF98(ctx, base);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82C9BDB4;
	sub_825952B8(ctx, base);
loc_82C9BDB4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9BDBC"))) PPC_WEAK_FUNC(sub_82C9BDBC);
PPC_FUNC_IMPL(__imp__sub_82C9BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9BDC0"))) PPC_WEAK_FUNC(sub_82C9BDC0);
PPC_FUNC_IMPL(__imp__sub_82C9BDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C9BDC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r28,r11,80
	ctx.r28.s64 = ctx.r11.s64 + 80;
	// beq cr6,0x82c9be48
	if (cr6.eq) goto loc_82C9BE48;
	// bl 0x82d19a78
	ctx.lr = 0x82C9BDE8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9BE00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9be3c
	if (cr6.eq) goto loc_82C9BE3C;
	// bl 0x82d2fe58
	ctx.lr = 0x82C9BE0C;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9be3c
	if (cr6.eq) goto loc_82C9BE3C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bge cr6,0x82c9be2c
	if (!cr6.lt) goto loc_82C9BE2C;
	// bl 0x82d3d908
	ctx.lr = 0x82C9BE28;
	sub_82D3D908(ctx, base);
	// b 0x82c9be30
	goto loc_82C9BE30;
loc_82C9BE2C:
	// bl 0x82d3d8a8
	ctx.lr = 0x82C9BE30;
	sub_82D3D8A8(ctx, base);
loc_82C9BE30:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82C9BE3C:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C9BE48;
	sub_82D17DA0(ctx, base);
loc_82C9BE48:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9be64
	if (!cr6.eq) goto loc_82C9BE64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9BE5C;
	sub_82D19A78(ctx, base);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// b 0x82c9be78
	goto loc_82C9BE78;
loc_82C9BE64:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c9be8c
	if (!cr6.eq) goto loc_82C9BE8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9BE74;
	sub_82D19A78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82C9BE78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9BE8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9BE8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9BE94"))) PPC_WEAK_FUNC(sub_82C9BE94);
PPC_FUNC_IMPL(__imp__sub_82C9BE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9BE98"))) PPC_WEAK_FUNC(sub_82C9BE98);
PPC_FUNC_IMPL(__imp__sub_82C9BE98) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, ctx.r11.u8);
	// b 0x82d19858
	sub_82D19858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9BEA8"))) PPC_WEAK_FUNC(sub_82C9BEA8);
PPC_FUNC_IMPL(__imp__sub_82C9BEA8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,832
	ctx.r4.s64 = ctx.r10.s64 + 832;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9BEE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8ba80
	ctx.lr = 0x82C9BEF0;
	sub_82D8BA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9bf0c
	if (!cr6.eq) goto loc_82C9BF0C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C9BF08;
	sub_82D2AEC8(ctx, base);
	// b 0x82c9bf24
	goto loc_82C9BF24;
loc_82C9BF0C:
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
	ctx.lr = 0x82C9BF24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9BF24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9BF3C"))) PPC_WEAK_FUNC(sub_82C9BF3C);
PPC_FUNC_IMPL(__imp__sub_82C9BF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9BF40"))) PPC_WEAK_FUNC(sub_82C9BF40);
PPC_FUNC_IMPL(__imp__sub_82C9BF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9BF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82C9BF50;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C9BF58;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9BF5C;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825832f0
	ctx.lr = 0x82C9BF68;
	sub_825832F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82C9BF74;
	sub_82D99FA0(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x82c9bf94
	if (cr6.lt) goto loc_82C9BF94;
	// li r11,250
	ctx.r11.s64 = 250;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C9BF94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9BFA0"))) PPC_WEAK_FUNC(sub_82C9BFA0);
PPC_FUNC_IMPL(__imp__sub_82C9BFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9BFA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82c9bfcc
	if (cr6.eq) goto loc_82C9BFCC;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82c9c018
	if (!cr6.eq) goto loc_82C9C018;
	// lis r30,550
	ctx.r30.s64 = 36044800;
	// ori r30,r30,149
	ctx.r30.u64 = ctx.r30.u64 | 149;
	// b 0x82c9bfd4
	goto loc_82C9BFD4;
loc_82C9BFCC:
	// lis r30,550
	ctx.r30.s64 = 36044800;
	// ori r30,r30,548
	ctx.r30.u64 = ctx.r30.u64 | 548;
loc_82C9BFD4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// bl 0x82d2f6d8
	ctx.lr = 0x82C9BFF0;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c018
	if (cr6.eq) goto loc_82C9C018;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82C9C004;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82C9C010;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,269(r29)
	PPC_STORE_U8(ctx.r29.u32 + 269, ctx.r11.u8);
loc_82C9C018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C020"))) PPC_WEAK_FUNC(sub_82C9C020);
PPC_FUNC_IMPL(__imp__sub_82C9C020) {
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
	ctx.lr = 0x82C9C028;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C9C034;
	sub_82D19BA0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C9C040;
	sub_82D19BB0(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,732(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// bl 0x82d19b10
	ctx.lr = 0x82C9C060;
	sub_82D19B10(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C9C064;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c19c
	if (cr6.eq) goto loc_82C9C19C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9C074;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9C07C;
	sub_82D97688(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r7,r11
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c9c0c0
	if (cr0.eq) goto loc_82C9C0C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C9C0A4:
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c9c0b4
	if (!cr6.eq) goto loc_82C9C0B4;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82C9C0B4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bdnz 0x82c9c0a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9C0A4;
loc_82C9C0C0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9c0dc
	if (!cr6.eq) goto loc_82C9C0DC;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x82c9c0dc
	if (cr6.eq) goto loc_82C9C0DC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C9C0DC:
	// lwz r10,3496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c9c0f4
	if (cr6.eq) goto loc_82C9C0F4;
	// subfic r10,r27,0
	xer.ca = ctx.r27.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r27.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
loc_82C9C0F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9c164
	if (cr6.eq) goto loc_82C9C164;
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97610
	ctx.lr = 0x82C9C10C;
	sub_82D97610(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d978a0
	ctx.lr = 0x82C9C13C;
	sub_82D978A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97648
	ctx.lr = 0x82C9C144;
	sub_82D97648(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// bl 0x82d20da8
	ctx.lr = 0x82C9C15C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C9C164:
	// bl 0x82d86078
	ctx.lr = 0x82C9C168;
	sub_82D86078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97a20
	ctx.lr = 0x82C9C170;
	sub_82D97A20(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97610
	ctx.lr = 0x82C9C17C;
	sub_82D97610(ctx, base);
	// lwz r9,3496(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-68
	ctx.r10.s64 = ctx.r11.s64 + -68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82C9C19C;
	sub_82D20DA8(ctx, base);
loc_82C9C19C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C1A4"))) PPC_WEAK_FUNC(sub_82C9C1A4);
PPC_FUNC_IMPL(__imp__sub_82C9C1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C1A8"))) PPC_WEAK_FUNC(sub_82C9C1A8);
PPC_FUNC_IMPL(__imp__sub_82C9C1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C9C1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9C1BC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c334
	if (cr6.eq) goto loc_82C9C334;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9C1CC;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C9C1D8;
	sub_82D19BA0(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,736(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// bl 0x82d19b10
	ctx.lr = 0x82C9C1FC;
	sub_82D19B10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,732(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 732);
	// bl 0x82d19b10
	ctx.lr = 0x82C9C210;
	sub_82D19B10(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c9c268
	if (!cr6.eq) goto loc_82C9C268;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97610
	ctx.lr = 0x82C9C228;
	sub_82D97610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c9bf40
	ctx.lr = 0x82C9C230;
	sub_82C9BF40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82c9c24c
	if (cr6.eq) goto loc_82C9C24C;
	// bl 0x82c9bfa0
	ctx.lr = 0x82C9C244;
	sub_82C9BFA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C9C24C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82C9C260;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C9C268:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c9c334
	if (!cr6.eq) goto loc_82C9C334;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9C27C;
	sub_82D97688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C9C288;
	sub_82D19BB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r8,r9
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82c9c30c
	if (cr0.eq) goto loc_82C9C30C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C9C2AC:
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c9c2bc
	if (!cr6.eq) goto loc_82C9C2BC;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82C9C2BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// bdnz 0x82c9c2ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9C2AC;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x82c9c30c
	if (cr6.eq) goto loc_82C9C30C;
	// mulli r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 * 28;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97620
	ctx.lr = 0x82C9C2E0;
	sub_82D97620(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d978a0
	ctx.lr = 0x82C9C30C;
	sub_82D978A0(ctx, base);
loc_82C9C30C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C9C314;
	sub_82D19BB0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97610
	ctx.lr = 0x82C9C320;
	sub_82D97610(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82C9C334;
	sub_82D20DA8(ctx, base);
loc_82C9C334:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C33C"))) PPC_WEAK_FUNC(sub_82C9C33C);
PPC_FUNC_IMPL(__imp__sub_82C9C33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C340"))) PPC_WEAK_FUNC(sub_82C9C340);
PPC_FUNC_IMPL(__imp__sub_82C9C340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C9C348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9C354;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c434
	if (cr6.eq) goto loc_82C9C434;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9C364;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9C36C;
	sub_82D97688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C9C378;
	sub_82D19BB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r8,r9
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82c9c400
	if (cr0.eq) goto loc_82C9C400;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C9C3A0:
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c9c3b0
	if (!cr6.eq) goto loc_82C9C3B0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82C9C3B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// bdnz 0x82c9c3a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9C3A0;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x82c9c400
	if (cr6.eq) goto loc_82C9C400;
	// mulli r31,r7,28
	ctx.r31.s64 = ctx.r7.s64 * 28;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97620
	ctx.lr = 0x82C9C3D4;
	sub_82D97620(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d978a0
	ctx.lr = 0x82C9C400;
	sub_82D978A0(ctx, base);
loc_82C9C400:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C9C408;
	sub_82D19BB0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97610
	ctx.lr = 0x82C9C414;
	sub_82D97610(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C9C420;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9C434;
	sub_82D20DA8(ctx, base);
loc_82C9C434:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C43C"))) PPC_WEAK_FUNC(sub_82C9C43C);
PPC_FUNC_IMPL(__imp__sub_82C9C43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C440"))) PPC_WEAK_FUNC(sub_82C9C440);
PPC_FUNC_IMPL(__imp__sub_82C9C440) {
	PPC_FUNC_PROLOGUE();
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82c9bdc0
	sub_82C9BDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C448"))) PPC_WEAK_FUNC(sub_82C9C448);
PPC_FUNC_IMPL(__imp__sub_82C9C448) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c9bdc0
	sub_82C9BDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C450"))) PPC_WEAK_FUNC(sub_82C9C450);
PPC_FUNC_IMPL(__imp__sub_82C9C450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9C458;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9C464;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c504
	if (cr6.eq) goto loc_82C9C504;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9C474;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9C47C;
	sub_82D97688(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C9C488;
	sub_82D19BB0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r8,r9
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82c9c4e4
	if (cr0.eq) goto loc_82C9C4E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C9C4B0:
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c9c4c0
	if (!cr6.eq) goto loc_82C9C4C0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82C9C4C0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// bdnz 0x82c9c4b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9C4B0;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x82c9c4e4
	if (cr6.eq) goto loc_82C9C4E4;
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97620
	ctx.lr = 0x82C9C4E4;
	sub_82D97620(ctx, base);
loc_82C9C4E4:
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C9C4F0;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9C504;
	sub_82D20DA8(ctx, base);
loc_82C9C504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C50C"))) PPC_WEAK_FUNC(sub_82C9C50C);
PPC_FUNC_IMPL(__imp__sub_82C9C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C510"))) PPC_WEAK_FUNC(sub_82C9C510);
PPC_FUNC_IMPL(__imp__sub_82C9C510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C9C518;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C9C524;
	sub_82D19BA0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C9C530;
	sub_82D19BB0(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,732(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// bl 0x82d19b10
	ctx.lr = 0x82C9C554;
	sub_82D19B10(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,736(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// bl 0x82d19b10
	ctx.lr = 0x82C9C568;
	sub_82D19B10(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C9C56C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c6ec
	if (cr6.eq) goto loc_82C9C6EC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9C57C;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97688
	ctx.lr = 0x82C9C580;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,28
	ctx.r27.s64 = 28;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// divw. r11,r10,r27
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c9c5c4
	if (cr0.eq) goto loc_82C9C5C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C9C5A8:
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c9c5b8
	if (!cr6.eq) goto loc_82C9C5B8;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_82C9C5B8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bdnz 0x82c9c5a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9C5A8;
loc_82C9C5C4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c9c628
	if (!cr6.eq) goto loc_82C9C628;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x82c9c628
	if (cr6.eq) goto loc_82C9C628;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9C5E0;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9c61c
	if (!cr6.eq) goto loc_82C9C61C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9C5FC;
	sub_82D19788(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,11
	ctx.r4.s64 = 11;
	// ori r5,r5,657
	ctx.r5.u64 = ctx.r5.u64 | 657;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9C61C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9C61C:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,600
	ctx.r5.u64 = ctx.r5.u64 | 600;
	// b 0x82c9c660
	goto loc_82C9C660;
loc_82C9C628:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9C638;
	sub_82D19788(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c9c658
	if (cr0.eq) goto loc_82C9C658;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,601
	ctx.r5.u64 = ctx.r5.u64 | 601;
	// b 0x82c9c660
	goto loc_82C9C660;
loc_82C9C658:
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
loc_82C9C660:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9C678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c9c6bc
	if (!cr6.eq) goto loc_82C9C6BC;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// ori r5,r5,70
	ctx.r5.u64 = ctx.r5.u64 | 70;
	// bctrl 
	ctx.lr = 0x82C9C6A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9C6B4;
	sub_82D19788(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C9C6BC:
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,599
	ctx.r5.u64 = ctx.r5.u64 | 599;
	// bctrl 
	ctx.lr = 0x82C9C6C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9C6D0;
	sub_82D8BB28(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c9c6ec
	if (!cr6.eq) goto loc_82C9C6EC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9C6EC;
	sub_82D19788(ctx, base);
loc_82C9C6EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C6F4"))) PPC_WEAK_FUNC(sub_82C9C6F4);
PPC_FUNC_IMPL(__imp__sub_82C9C6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C6F8"))) PPC_WEAK_FUNC(sub_82C9C6F8);
PPC_FUNC_IMPL(__imp__sub_82C9C6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C9C700;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9C70C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c7c0
	if (cr6.eq) goto loc_82C9C7C0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C9C71C;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9C724;
	sub_82D97688(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97a78
	ctx.lr = 0x82C9C730;
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
	// beq 0x82c9c7a0
	if (cr0.eq) goto loc_82C9C7A0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c9c7c8
	if (!cr6.gt) goto loc_82C9C7C8;
loc_82C9C758:
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
	ctx.lr = 0x82C9C780;
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
	// bgt cr6,0x82c9c758
	if (cr6.gt) goto loc_82C9C758;
loc_82C9C7A0:
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C9C7AC;
	sub_82D17DA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9C7C0;
	sub_82D20DA8(ctx, base);
loc_82C9C7C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C9C7C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9C7D4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C9C7D4"))) PPC_WEAK_FUNC(sub_82C9C7D4);
PPC_FUNC_IMPL(__imp__sub_82C9C7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C7D8"))) PPC_WEAK_FUNC(sub_82C9C7D8);
PPC_FUNC_IMPL(__imp__sub_82C9C7D8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9c810
	if (cr6.eq) goto loc_82C9C810;
	// bl 0x82a814a8
	ctx.lr = 0x82C9C80C;
	sub_82A814A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C9C810:
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

__attribute__((alias("__imp__sub_82C9C824"))) PPC_WEAK_FUNC(sub_82C9C824);
PPC_FUNC_IMPL(__imp__sub_82C9C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C828"))) PPC_WEAK_FUNC(sub_82C9C828);
PPC_FUNC_IMPL(__imp__sub_82C9C828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9C830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r6,760(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82C9C84C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9c84c
	if (!cr6.eq) goto loc_82C9C84C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82C9C878;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9c94c
	if (!cr6.eq) goto loc_82C9C94C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82c9c9bc
	if (!cr6.eq) goto loc_82C9C9BC;
	// bl 0x82d86078
	ctx.lr = 0x82C9C88C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9c9c4
	if (cr6.eq) goto loc_82C9C9C4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C9C89C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9C8A0;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d99fa0
	ctx.lr = 0x82C9C8AC;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// blt cr6,0x82c9c8b8
	if (cr6.lt) goto loc_82C9C8B8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C9C8B8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// bl 0x82d2f420
	ctx.lr = 0x82C9C8D8;
	sub_82D2F420(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,340
	ctx.r4.u64 = ctx.r4.u64 | 340;
	// bl 0x82d2a1c8
	ctx.lr = 0x82C9C8E8;
	sub_82D2A1C8(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,188
	ctx.r5.u64 = ctx.r5.u64 | 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2a258
	ctx.lr = 0x82C9C8FC;
	sub_82D2A258(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,74
	ctx.r5.u64 = ctx.r5.u64 | 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82C9C910;
	sub_82D2A258(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82C9C918;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,250
	cr6.compare<uint32_t>(ctx.r3.u32, 250, xer);
	// blt cr6,0x82c9c930
	if (cr6.lt) goto loc_82C9C930;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29d78
	ctx.lr = 0x82C9C930;
	sub_82D29D78(ctx, base);
loc_82C9C930:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82C9C93C;
	sub_83103100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,269(r29)
	PPC_STORE_U8(ctx.r29.u32 + 269, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C9C94C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r6,764(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82C9C958:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9c958
	if (!cr6.eq) goto loc_82C9C958;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82C9C984;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c9c9bc
	if (!cr6.eq) goto loc_82C9C9BC;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82c9c9a4
	if (cr6.lt) goto loc_82C9C9A4;
	// bne cr6,0x82c9c9bc
	if (!cr6.eq) goto loc_82C9C9BC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// b 0x82c9c9b0
	goto loc_82C9C9B0;
loc_82C9C9A4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
loc_82C9C9B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C9C9BC;
	sub_82D20DA8(ctx, base);
loc_82C9C9BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,269(r29)
	PPC_STORE_U8(ctx.r29.u32 + 269, ctx.r11.u8);
loc_82C9C9C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9C9CC"))) PPC_WEAK_FUNC(sub_82C9C9CC);
PPC_FUNC_IMPL(__imp__sub_82C9C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9C9D0"))) PPC_WEAK_FUNC(sub_82C9C9D0);
PPC_FUNC_IMPL(__imp__sub_82C9C9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r8,1
	ctx.r8.s64 = 1;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r6,24(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
loc_82C9C9EC:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82c9ca00
	if (!cr6.eq) goto loc_82C9CA00;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// beq cr6,0x82c9ca04
	if (cr6.eq) goto loc_82C9CA04;
loc_82C9CA00:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82C9CA04:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// slw r4,r8,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// bne cr6,0x82c9ca2c
	if (!cr6.eq) goto loc_82C9CA2C;
	// andc r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r4.u64;
loc_82C9CA2C:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r10,31
	cr6.compare<uint32_t>(ctx.r10.u32, 31, xer);
	// bge cr6,0x82c9ca40
	if (!cr6.lt) goto loc_82C9CA40;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82c9c9ec
	goto loc_82C9C9EC;
loc_82C9CA40:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82c9c9ec
	goto loc_82C9C9EC;
}

__attribute__((alias("__imp__sub_82C9CA4C"))) PPC_WEAK_FUNC(sub_82C9CA4C);
PPC_FUNC_IMPL(__imp__sub_82C9CA4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9CA50"))) PPC_WEAK_FUNC(sub_82C9CA50);
PPC_FUNC_IMPL(__imp__sub_82C9CA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9CA58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a81510
	ctx.lr = 0x82C9CA88;
	sub_82A81510(ctx, base);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// bne cr6,0x82c9cab0
	if (!cr6.eq) goto loc_82C9CAB0;
	// andc r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r7.u64;
loc_82C9CAB0:
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x83102db0
	ctx.lr = 0x82C9CABC;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,104
	ctx.r10.s64 = 104;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82c9cae4
	if (cr6.gt) goto loc_82C9CAE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9CAE4;
	sub_831CC188(ctx, base);
loc_82C9CAE4:
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d8b758
	ctx.lr = 0x82C9CAFC;
	sub_82D8B758(ctx, base);
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stb r29,256(r9)
	PPC_STORE_U8(ctx.r9.u32 + 256, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9CB0C"))) PPC_WEAK_FUNC(sub_82C9CB0C);
PPC_FUNC_IMPL(__imp__sub_82C9CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9CB10"))) PPC_WEAK_FUNC(sub_82C9CB10);
PPC_FUNC_IMPL(__imp__sub_82C9CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82C9CB34:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82c9cb5c
	if (!cr6.lt) goto loc_82C9CB5C;
	// neg. r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c9cb5c
	if (cr0.eq) goto loc_82C9CB5C;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// rlwinm r9,r9,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r5.s64;
	// b 0x82c9cb64
	goto loc_82C9CB64;
loc_82C9CB5C:
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82C9CB64:
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c9cb80
	if (cr6.eq) goto loc_82C9CB80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82C9CB80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82c9cb34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9CB34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9CB8C"))) PPC_WEAK_FUNC(sub_82C9CB8C);
PPC_FUNC_IMPL(__imp__sub_82C9CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9CB90"))) PPC_WEAK_FUNC(sub_82C9CB90);
PPC_FUNC_IMPL(__imp__sub_82C9CB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C9CB98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c9cbbc
	if (!cr6.gt) goto loc_82C9CBBC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-12732
	ctx.r3.s64 = ctx.r11.s64 + -12732;
	// bl 0x831cc150
	ctx.lr = 0x82C9CBBC;
	sub_831CC150(ctx, base);
loc_82C9CBBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r27,31
	ctx.r10.s64 = ctx.r27.s64 + 31;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r29,r10,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c9cc0c
	if (!cr6.lt) goto loc_82C9CC0C;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c9cc0c
	if (cr6.eq) goto loc_82C9CC0C;
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
	ctx.lr = 0x82C9CC04;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82C9CC0C:
	// clrlwi r9,r27,27
	ctx.r9.u64 = ctx.r27.u32 & 0x1F;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9cc44
	if (cr6.eq) goto loc_82C9CC44;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
loc_82C9CC44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9CC4C"))) PPC_WEAK_FUNC(sub_82C9CC4C);
PPC_FUNC_IMPL(__imp__sub_82C9CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9CC50"))) PPC_WEAK_FUNC(sub_82C9CC50);
PPC_FUNC_IMPL(__imp__sub_82C9CC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C9CC58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c9ce90
	if (cr6.eq) goto loc_82C9CE90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r8,r11,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bge cr6,0x82c9cca4
	if (!cr6.lt) goto loc_82C9CCA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C9CCA4;
	sub_831CC150(ctx, base);
loc_82C9CCA4:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c9cda0
	if (!cr6.lt) goto loc_82C9CDA0;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c9ccd4
	if (cr6.lt) goto loc_82C9CCD4;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82C9CCD4:
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c9cce0
	if (!cr6.lt) goto loc_82C9CCE0;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
loc_82C9CCE0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x828eb740
	ctx.lr = 0x82C9CCEC;
	sub_828EB740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// srawi r27,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 2;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x82c9cd20
	if (cr6.eq) goto loc_82C9CD20;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82C9CD14:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c9cd14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9CD14;
loc_82C9CD20:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r4,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r4.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82C9CD38;
	sub_831CE420(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r27,r29
	ctx.r9.u64 = ctx.r27.u64 + ctx.r29.u64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82C9CD5C;
	sub_831CE420(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r4,r3,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi r11,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x82c9cd7c
	if (cr6.eq) goto loc_82C9CD7C;
	// bl 0x82416268
	ctx.lr = 0x82C9CD7C;
	sub_82416268(ctx, base);
loc_82C9CD7C:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C9CDA0:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x82c9ce28
	if (!cr6.lt) goto loc_82C9CE28;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce420
	ctx.lr = 0x82C9CDC8;
	sub_831CE420(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// srawi r9,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// subf. r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c9cdf4
	if (cr0.eq) goto loc_82C9CDF4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9cdf4
	if (cr6.eq) goto loc_82C9CDF4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C9CDEC:
	// stwu r27,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c9cdec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9CDEC;
loc_82C9CDF4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c9ce90
	if (cr6.eq) goto loc_82C9CE90;
loc_82C9CE10:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c9ce10
	if (!cr6.eq) goto loc_82C9CE10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C9CE28:
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r26,r29,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r29.s64;
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x831ce420
	ctx.lr = 0x82C9CE4C;
	sub_831CE420(ctx, base);
	// add r10,r3,r25
	ctx.r10.u64 = ctx.r3.u64 + ctx.r25.u64;
	// subf r9,r31,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r31.s64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// subf r3,r8,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r8.s64;
	// bl 0x831ce420
	ctx.lr = 0x82C9CE70;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c9ce90
	if (cr6.eq) goto loc_82C9CE90;
loc_82C9CE80:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9ce80
	if (!cr6.eq) goto loc_82C9CE80;
loc_82C9CE90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9CE98"))) PPC_WEAK_FUNC(sub_82C9CE98);
PPC_FUNC_IMPL(__imp__sub_82C9CE98) {
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
	// bl 0x82c9cb10
	ctx.lr = 0x82C9CEB0;
	sub_82C9CB10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ced4
	if (cr6.eq) goto loc_82C9CED4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9CEC0;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9cee4
	if (!cr6.eq) goto loc_82C9CEE4;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82c9ced8
	goto loc_82C9CED8;
loc_82C9CED4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C9CED8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9CEE4;
	sub_82D19788(ctx, base);
loc_82C9CEE4:
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

__attribute__((alias("__imp__sub_82C9CEFC"))) PPC_WEAK_FUNC(sub_82C9CEFC);
PPC_FUNC_IMPL(__imp__sub_82C9CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9CF00"))) PPC_WEAK_FUNC(sub_82C9CF00);
PPC_FUNC_IMPL(__imp__sub_82C9CF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C9CF08;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,16(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// beq cr6,0x82c9cf68
	if (cr6.eq) goto loc_82C9CF68;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a814a8
	ctx.lr = 0x82C9CF60;
	sub_82A814A8(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82C9CF68:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// beq cr6,0x82c9cf98
	if (cr6.eq) goto loc_82C9CF98;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a814a8
	ctx.lr = 0x82C9CF98;
	sub_82A814A8(ctx, base);
loc_82C9CF98:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r9,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne cr6,0x82c9cfc4
	if (!cr6.eq) goto loc_82C9CFC4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c9cfc8
	if (cr6.eq) goto loc_82C9CFC8;
loc_82C9CFC4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82C9CFC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c9d02c
	if (!cr6.eq) goto loc_82C9D02C;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// beq cr6,0x82c9cff0
	if (cr6.eq) goto loc_82C9CFF0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a814a8
	ctx.lr = 0x82C9CFF0;
	sub_82A814A8(ctx, base);
loc_82C9CFF0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82a8c1f8
	ctx.lr = 0x82C9D008;
	sub_82A8C1F8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82c9cb90
	ctx.lr = 0x82C9D02C;
	sub_82C9CB90(ctx, base);
loc_82C9D02C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82a81510
	ctx.lr = 0x82C9D048;
	sub_82A81510(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9D054"))) PPC_WEAK_FUNC(sub_82C9D054);
PPC_FUNC_IMPL(__imp__sub_82C9D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9D058"))) PPC_WEAK_FUNC(sub_82C9D058);
PPC_FUNC_IMPL(__imp__sub_82C9D058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9D060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x839a0e80
	ctx.lr = 0x82C9D084;
	sub_839A0E80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9d0bc
	if (cr6.eq) goto loc_82C9D0BC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c9d0b0
	if (cr6.eq) goto loc_82C9D0B0;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82C9D0A4:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c9d0a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9D0A4;
loc_82C9D0B0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82C9D0BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9D0C8"))) PPC_WEAK_FUNC(sub_82C9D0C8);
PPC_FUNC_IMPL(__imp__sub_82C9D0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9D0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c9d10c
	if (!cr6.gt) goto loc_82C9D10C;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82c9cc50
	ctx.lr = 0x82C9D104;
	sub_82C9CC50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C9D10C:
	// bge cr6,0x82c9d140
	if (!cr6.lt) goto loc_82C9D140;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c9d140
	if (cr6.eq) goto loc_82C9D140;
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
	ctx.lr = 0x82C9D138;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82C9D140:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9D148"))) PPC_WEAK_FUNC(sub_82C9D148);
PPC_FUNC_IMPL(__imp__sub_82C9D148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C9D150;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82c9d238
	if (cr6.eq) goto loc_82C9D238;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x82c9d1a0
	if (!cr6.lt) goto loc_82C9D1A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-12732
	ctx.r3.s64 = ctx.r11.s64 + -12732;
	// bl 0x831cc150
	ctx.lr = 0x82C9D1A0;
	sub_831CC150(ctx, base);
loc_82C9D1A0:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// bl 0x82c9d0c8
	ctx.lr = 0x82C9D1B8;
	sub_82C9D0C8(ctx, base);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82c9d1d4
	if (!cr6.eq) goto loc_82C9D1D4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C9D1D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c9c7d8
	ctx.lr = 0x82C9D1E0;
	sub_82C9C7D8(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82c9c7d8
	ctx.lr = 0x82C9D204;
	sub_82C9C7D8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x82a81510
	ctx.lr = 0x82C9D21C;
	sub_82A81510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x82a81590
	ctx.lr = 0x82C9D238;
	sub_82A81590(ctx, base);
loc_82C9D238:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9D244"))) PPC_WEAK_FUNC(sub_82C9D244);
PPC_FUNC_IMPL(__imp__sub_82C9D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9D248"))) PPC_WEAK_FUNC(sub_82C9D248);
PPC_FUNC_IMPL(__imp__sub_82C9D248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,928
	ctx.r9.s64 = ctx.r11.s64 + 928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82d35198
	ctx.lr = 0x82C9D27C;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82C9D288;
	sub_82D36760(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82d9b958
	ctx.lr = 0x82C9D290;
	sub_82D9B958(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// beq cr6,0x82c9d2a8
	if (cr6.eq) goto loc_82C9D2A8;
	// bl 0x82416268
	ctx.lr = 0x82C9D2A8;
	sub_82416268(ctx, base);
loc_82C9D2A8:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// beq cr6,0x82c9d2c8
	if (cr6.eq) goto loc_82C9D2C8;
	// bl 0x82416268
	ctx.lr = 0x82C9D2C8;
	sub_82416268(ctx, base);
loc_82C9D2C8:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x82d25548
	ctx.lr = 0x82C9D2DC;
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

__attribute__((alias("__imp__sub_82C9D2F4"))) PPC_WEAK_FUNC(sub_82C9D2F4);
PPC_FUNC_IMPL(__imp__sub_82C9D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9D2F8"))) PPC_WEAK_FUNC(sub_82C9D2F8);
PPC_FUNC_IMPL(__imp__sub_82C9D2F8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r6,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r6.u8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c9d148
	ctx.lr = 0x82C9D31C;
	sub_82C9D148(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82a81510
	ctx.lr = 0x82C9D348;
	sub_82A81510(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x82a81510
	ctx.lr = 0x82C9D360;
	sub_82A81510(ctx, base);
	// addi r5,r1,175
	ctx.r5.s64 = ctx.r1.s64 + 175;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c9c9d0
	ctx.lr = 0x82C9D370;
	sub_82C9C9D0(ctx, base);
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

__attribute__((alias("__imp__sub_82C9D388"))) PPC_WEAK_FUNC(sub_82C9D388);
PPC_FUNC_IMPL(__imp__sub_82C9D388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c9d248
	ctx.lr = 0x82C9D3A8;
	sub_82C9D248(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9d3c0
	if (cr6.eq) goto loc_82C9D3C0;
	// bl 0x82416268
	ctx.lr = 0x82C9D3BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C9D3C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9D3D8"))) PPC_WEAK_FUNC(sub_82C9D3D8);
PPC_FUNC_IMPL(__imp__sub_82C9D3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82C9D3E0;
	__savegprlr_17(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9D3EC;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9d998
	if (cr6.eq) goto loc_82C9D998;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// bl 0x8332f198
	ctx.lr = 0x82C9D418;
	sub_8332F198(ctx, base);
	// lwz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832d8
	ctx.lr = 0x82C9D428;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9D42C;
	sub_83102DB0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9c128
	ctx.lr = 0x82C9D438;
	sub_82D9C128(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9D43C;
	sub_83102DB0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c9d480
	if (cr6.eq) goto loc_82C9D480;
loc_82C9D450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83546fd8
	ctx.lr = 0x82C9D468;
	sub_83546FD8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c9d450
	if (!cr6.eq) goto loc_82C9D450;
	// lwz r28,180(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r19,176(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82C9D480:
	// subf r11,r19,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r19.s64;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// srawi r20,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 3;
	// addi r6,r10,32224
	ctx.r6.s64 = ctx.r10.s64 + 32224;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82c85c88
	ctx.lr = 0x82C9D4A0;
	sub_82C85C88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82C9D4A8;
	sub_82D8BB28(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9d4e0
	if (cr6.eq) goto loc_82C9D4E0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x82c9d4e0
	if (cr6.eq) goto loc_82C9D4E0;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C9D4C4;
	sub_831F8200(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x82c9d4d8
	if (!cr6.eq) goto loc_82C9D4D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9D4D8;
	sub_831CC188(ctx, base);
loc_82C9D4D8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_82C9D4E0:
	// stb r30,276(r26)
	PPC_STORE_U8(ctx.r26.u32 + 276, ctx.r30.u8);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c9d558
	if (cr0.eq) goto loc_82C9D558;
	// addi r28,r19,4
	ctx.r28.s64 = ctx.r19.s64 + 4;
loc_82C9D500:
	// cmplw cr6,r20,r31
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9d544
	if (!cr6.gt) goto loc_82C9D544;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d9a868
	ctx.lr = 0x82C9D514;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9d550
	if (cr6.eq) goto loc_82C9D550;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c9d500
	if (cr6.lt) goto loc_82C9D500;
	// b 0x82c9d558
	goto loc_82C9D558;
loc_82C9D544:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9D550;
	sub_831CC188(ctx, base);
loc_82C9D550:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,276(r26)
	PPC_STORE_U8(ctx.r26.u32 + 276, ctx.r11.u8);
loc_82C9D558:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9D560;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,740(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9D57C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9d5ac
	if (!cr6.eq) goto loc_82C9D5AC;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82c9d998
	if (cr6.eq) goto loc_82C9D998;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x825952b8
	ctx.lr = 0x82C9D5A4;
	sub_825952B8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82C9D5AC:
	// addi r21,r31,100
	ctx.r21.s64 = ctx.r31.s64 + 100;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82dad028
	ctx.lr = 0x82C9D5B8;
	sub_82DAD028(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r20
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, xer);
	// li r18,2
	ctx.r18.s64 = 2;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r26,15
	ctx.r26.s64 = 15;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,536
	ctx.r29.s64 = ctx.r11.s64 + 536;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bge cr6,0x82c9d6c4
	if (!cr6.lt) goto loc_82C9D6C4;
	// addi r4,r29,-184
	ctx.r4.s64 = ctx.r29.s64 + -184;
	// bctrl 
	ctx.lr = 0x82C9D5F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// addi r4,r29,-1262
	ctx.r4.s64 = ctx.r29.s64 + -1262;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cc28
	ctx.lr = 0x82C9D60C;
	sub_8259CC28(ctx, base);
	// subf r11,r23,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r23.s64;
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x82C9D624;
	sub_82D042A8(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82c9d638
	if (!cr6.lt) goto loc_82C9D638;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_82C9D638:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_82C9D648:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9d648
	if (!cr6.eq) goto loc_82C9D648;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C9D66C;
	sub_8259CC28(ctx, base);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r29,-168
	ctx.r4.s64 = ctx.r29.s64 + -168;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82C9D688;
	sub_8259CC28(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C9D698;
	sub_82A69AD0(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c9d6b4
	if (cr6.lt) goto loc_82C9D6B4;
	// stw r18,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r18.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82C9D6B4;
	sub_825952B8(ctx, base);
loc_82C9D6B4:
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// b 0x82c9d6cc
	goto loc_82C9D6CC;
loc_82C9D6C4:
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// bctrl 
	ctx.lr = 0x82C9D6CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9D6CC:
	// bl 0x831156e8
	ctx.lr = 0x82C9D6D0;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82c9d980
	if (cr6.eq) goto loc_82C9D980;
	// li r22,12
	ctx.r22.s64 = 12;
	// li r25,13
	ctx.r25.s64 = 13;
loc_82C9D6E8:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82C9D708;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83165d78
	ctx.lr = 0x82C9D71C;
	sub_83165D78(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c9d730
	if (!cr6.lt) goto loc_82C9D730;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82C9D730:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82C9D738;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9d9a0
	if (cr6.eq) goto loc_82C9D9A0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c9d774
	if (cr6.gt) goto loc_82C9D774;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C9D75C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9d960
	if (cr6.lt) goto loc_82C9D960;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r18.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// b 0x82c9d958
	goto loc_82C9D958;
loc_82C9D774:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C9D77C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c9d9e8
	if (!cr6.gt) goto loc_82C9D9E8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ldx r4,r11,r19
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r19.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82C9D798;
	sub_8311BF98(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-128
	ctx.r4.s64 = ctx.r29.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9D7B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9d804
	if (cr6.eq) goto loc_82C9D804;
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d9a868
	ctx.lr = 0x82C9D7D8;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c9d800
	if (!cr6.eq) goto loc_82C9D800;
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
loc_82C9D800:
	// bctrl 
	ctx.lr = 0x82C9D804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9D804:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D81C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9d848
	if (cr6.eq) goto loc_82C9D848;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82C9D83C;
	sub_83120738(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82d39310
	ctx.lr = 0x82C9D848;
	sub_82D39310(ctx, base);
loc_82C9D848:
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C9D85C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c9d85c
	if (!cr6.eq) goto loc_82C9D85C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C9D880;
	sub_8259CC28(ctx, base);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x82C9D89C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C9D8AC;
	sub_82A69AD0(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x83179518
	ctx.lr = 0x82C9D8C4;
	sub_83179518(ctx, base);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82C9D8E4;
	sub_8259CC28(ctx, base);
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82C9D8F4;
	sub_82A6A1B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9D90C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9d944
	if (cr6.eq) goto loc_82C9D944;
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d8c868
	ctx.lr = 0x82C9D92C;
	sub_82D8C868(ctx, base);
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9D944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9D944:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9d960
	if (cr6.lt) goto loc_82C9D960;
	// stw r18,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r18.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
loc_82C9D958:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C9D960;
	sub_825952B8(ctx, base);
loc_82C9D960:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// blt cr6,0x82c9d6e8
	if (cr6.lt) goto loc_82C9D6E8;
loc_82C9D980:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82c9d998
	if (cr6.eq) goto loc_82C9D998;
	// stw r18,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r18.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x825952b8
	ctx.lr = 0x82C9D998;
	sub_825952B8(ctx, base);
loc_82C9D998:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82C9D9A0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9d9bc
	if (cr6.lt) goto loc_82C9D9BC;
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C9D9BC;
	sub_825952B8(ctx, base);
loc_82C9D9BC:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// beq cr6,0x82c9d998
	if (cr6.eq) goto loc_82C9D998;
	// stw r18,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r18.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x825952b8
	ctx.lr = 0x82C9D9E0;
	sub_825952B8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82C9D9E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9D9F4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C9D9F4"))) PPC_WEAK_FUNC(sub_82C9D9F4);
PPC_FUNC_IMPL(__imp__sub_82C9D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9D9F8"))) PPC_WEAK_FUNC(sub_82C9D9F8);
PPC_FUNC_IMPL(__imp__sub_82C9D9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C9DA00;
	__savegprlr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r31,748(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// bl 0x82d19a78
	ctx.lr = 0x82C9DA10;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82C9DA18;
	sub_82D2F098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dbc4
	if (cr6.eq) goto loc_82C9DBC4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C9DA34;
	sub_82D2B608(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r21,2
	ctx.r21.s64 = 2;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C9DA68;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dbc4
	if (cr6.eq) goto loc_82C9DBC4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r27,r11,592
	ctx.r27.s64 = ctx.r11.s64 + 592;
loc_82C9DA84:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C9DA90;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dbc4
	if (cr6.eq) goto loc_82C9DBC4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9DAB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dae4
	if (cr6.eq) goto loc_82C9DAE4;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82d8bfc0
	ctx.lr = 0x82C9DACC;
	sub_82D8BFC0(ctx, base);
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C9DAE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9DAE4:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82C9DB04;
	sub_82D042A8(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82C9DB24;
	sub_8259CB28(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x82C9DB40;
	sub_8259CC28(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C9DB50;
	sub_82A69AD0(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r29,r26,100
	ctx.r29.s64 = ctx.r26.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82C9DB70;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// ori r5,r5,172
	ctx.r5.u64 = ctx.r5.u64 | 172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C9DB84;
	sub_82A69A28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9dba0
	if (cr6.lt) goto loc_82C9DBA0;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C9DBA0;
	sub_825952B8(ctx, base);
loc_82C9DBA0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bl 0x82d33c10
	ctx.lr = 0x82C9DBBC;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c9da84
	if (cr6.lt) goto loc_82C9DA84;
loc_82C9DBC4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9DBCC"))) PPC_WEAK_FUNC(sub_82C9DBCC);
PPC_FUNC_IMPL(__imp__sub_82C9DBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9DBD0"))) PPC_WEAK_FUNC(sub_82C9DBD0);
PPC_FUNC_IMPL(__imp__sub_82C9DBD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9DBD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,748(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// bl 0x82d19a78
	ctx.lr = 0x82C9DBF0;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82C9DBF8;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dcb0
	if (cr6.eq) goto loc_82C9DCB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C9DC08;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9dcb0
	if (cr6.eq) goto loc_82C9DCB0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,604
	ctx.r31.s64 = ctx.r11.s64 + 604;
	// addi r4,r31,-1329
	ctx.r4.s64 = ctx.r31.s64 + -1329;
	// bl 0x837b0c10
	ctx.lr = 0x82C9DC28;
	sub_837B0C10(ctx, base);
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r4,700
	ctx.r4.s64 = 45875200;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,20048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r4,760
	ctx.r4.u64 = ctx.r4.u64 | 760;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d042a8
	ctx.lr = 0x82C9DC60;
	sub_82D042A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82C9DC8C;
	sub_8259CB28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C9DC98;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a69ad0
	ctx.lr = 0x82C9DCA8;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C9DCB0;
	sub_8387E8E0(ctx, base);
loc_82C9DCB0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9DCB8"))) PPC_WEAK_FUNC(sub_82C9DCB8);
PPC_FUNC_IMPL(__imp__sub_82C9DCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C9DCC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9dd1c
	if (!cr6.gt) goto loc_82C9DD1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82c9dd00
	if (cr6.eq) goto loc_82C9DD00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a814a8
	ctx.lr = 0x82C9DD00;
	sub_82A814A8(ctx, base);
loc_82C9DD00:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c9d2f8
	ctx.lr = 0x82C9DD14;
	sub_82C9D2F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C9DD1C:
	// bge cr6,0x82c9dd74
	if (!cr6.lt) goto loc_82C9DD74;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82c9dd44
	if (cr6.eq) goto loc_82C9DD44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a814a8
	ctx.lr = 0x82C9DD44;
	sub_82A814A8(ctx, base);
loc_82C9DD44:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a81510
	ctx.lr = 0x82C9DD5C;
	sub_82A81510(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82c9cf00
	ctx.lr = 0x82C9DD74;
	sub_82C9CF00(ctx, base);
loc_82C9DD74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9DD7C"))) PPC_WEAK_FUNC(sub_82C9DD7C);
PPC_FUNC_IMPL(__imp__sub_82C9DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9DD80"))) PPC_WEAK_FUNC(sub_82C9DD80);
PPC_FUNC_IMPL(__imp__sub_82C9DD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82C9DD88;
	__savegprlr_17(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9DD94;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c9dda8
	if (!cr6.eq) goto loc_82C9DDA8;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82C9DDA8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C9DDB0;
	sub_825832D8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C9DDC0;
	sub_82DAB6D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4368
	ctx.lr = 0x82C9DDCC;
	sub_82DA4368(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9DDD0;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r20,r17,136
	ctx.r20.s64 = ctx.r17.s64 + 136;
	// li r19,104
	ctx.r19.s64 = 104;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r28,r8,r19
	ctx.r28.s32 = PPCDivide(ctx.r8.s32, ctx.r19.s32);
	// bl 0x82d9d040
	ctx.lr = 0x82C9DDF4;
	sub_82D9D040(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c9dec8
	if (cr6.eq) goto loc_82C9DEC8;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82C9DE14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r19
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r19.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c9e0c4
	if (!cr6.gt) goto loc_82C9E0C4;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b56298
	ctx.lr = 0x82C9DE38;
	sub_82B56298(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c9de68
	if (!cr6.eq) goto loc_82C9DE68;
	// lwz r31,276(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c9de68
	if (cr6.eq) goto loc_82C9DE68;
loc_82C9DE54:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d9d2b8
	ctx.lr = 0x82C9DE60;
	sub_82D9D2B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82c9de54
	if (!cr0.eq) goto loc_82C9DE54;
loc_82C9DE68:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9de84
	if (cr6.lt) goto loc_82C9DE84;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82C9DE84;
	sub_825952B8(ctx, base);
loc_82C9DE84:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r18,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r18.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r18,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r18.u8);
	// blt cr6,0x82c9deac
	if (cr6.lt) goto loc_82C9DEAC;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x825952b8
	ctx.lr = 0x82C9DEAC;
	sub_825952B8(ctx, base);
loc_82C9DEAC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r26,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r26.u32);
	// stw r18,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r18.u32);
	// addi r27,r27,104
	ctx.r27.s64 = ctx.r27.s64 + 104;
	// stb r18,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r18.u8);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82c9de14
	if (cr6.lt) goto loc_82C9DE14;
loc_82C9DEC8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9DED0;
	sub_82D97688(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,28
	ctx.r23.s64 = 28;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// divw. r11,r9,r23
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c9e068
	if (cr0.eq) goto loc_82C9E068;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// ble cr6,0x82c9e0d0
	if (!cr6.gt) goto loc_82C9E0D0;
loc_82C9DEFC:
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82c9e048
	if (!cr6.eq) goto loc_82C9E048;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b5a7e0
	ctx.lr = 0x82C9DF14;
	sub_82B5A7E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e0dc
	if (!cr6.gt) goto loc_82C9E0DC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e0e8
	if (!cr6.gt) goto loc_82C9E0E8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e0f4
	if (!cr6.gt) goto loc_82C9E0F4;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e100
	if (!cr6.gt) goto loc_82C9E100;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e10c
	if (!cr6.gt) goto loc_82C9E10C;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e118
	if (!cr6.gt) goto loc_82C9E118;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// bl 0x82d9d2b8
	ctx.lr = 0x82C9DFF8;
	sub_82D9D2B8(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c9e014
	if (cr6.lt) goto loc_82C9E014;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C9E014;
	sub_825952B8(ctx, base);
loc_82C9E014:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r18,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r18.u8);
	// blt cr6,0x82c9e03c
	if (cr6.lt) goto loc_82C9E03C;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82C9E03C;
	sub_825952B8(ctx, base);
loc_82C9E03C:
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stb r18,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r18.u8);
loc_82C9E048:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r23
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c9defc
	if (cr6.gt) goto loc_82C9DEFC;
loc_82C9E068:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x829259c8
	ctx.lr = 0x82C9E070;
	sub_829259C8(ctx, base);
	// addi r31,r17,96
	ctx.r31.s64 = ctx.r17.s64 + 96;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9dcb8
	ctx.lr = 0x82C9E088;
	sub_82C9DCB8(ctx, base);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82c9e148
	if (cr6.eq) goto loc_82C9E148;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
loc_82C9E098:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82c9e124
	if (!cr6.lt) goto loc_82C9E124;
	// neg. r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c9e124
	if (cr0.eq) goto loc_82C9E124;
	// subfic r8,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r11.s64;
	// rlwinm r8,r8,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// b 0x82c9e12c
	goto loc_82C9E12C;
loc_82C9E0C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E0D0;
	sub_831CC188(ctx, base);
loc_82C9E0D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E0DC;
	sub_831CC188(ctx, base);
loc_82C9E0DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E0E8;
	sub_831CC188(ctx, base);
loc_82C9E0E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E0F4;
	sub_831CC188(ctx, base);
loc_82C9E0F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E100;
	sub_831CC188(ctx, base);
loc_82C9E100:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E10C;
	sub_831CC188(ctx, base);
loc_82C9E10C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E118;
	sub_831CC188(ctx, base);
loc_82C9E118:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E124;
	sub_831CC188(ctx, base);
loc_82C9E124:
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82C9E12C:
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r7,r21,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// andc r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// bdnz 0x82c9e098
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C9E098;
loc_82C9E148:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C9E150;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9e2a8
	if (cr6.eq) goto loc_82C9E2A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c9e2b0
	if (cr0.eq) goto loc_82C9E2B0;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
loc_82C9E178:
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x82c9e254
	if (cr6.eq) goto loc_82C9E254;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82C9E198:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C9E1A0;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r19
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r19.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e284
	if (!cr6.gt) goto loc_82C9E284;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c9e230
	if (!cr6.eq) goto loc_82C9E230;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C9E1CC;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r19
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r19.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e290
	if (!cr6.gt) goto loc_82C9E290;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x82c9e230
	if (!cr6.eq) goto loc_82C9E230;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C9E1FC;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r19
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r19.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c9e29c
	if (!cr6.gt) goto loc_82C9E29C;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c9e230
	if (!cr6.eq) goto loc_82C9E230;
	// lwz r11,112(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 112);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c9e244
	if (cr6.lt) goto loc_82C9E244;
loc_82C9E230:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// blt cr6,0x82c9e198
	if (cr6.lt) goto loc_82C9E198;
	// b 0x82c9e254
	goto loc_82C9E254;
loc_82C9E244:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82c9ca50
	ctx.lr = 0x82C9E254;
	sub_82C9CA50(ctx, base);
loc_82C9E254:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r25,r25,28
	ctx.r25.s64 = ctx.r25.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c9e178
	if (cr6.lt) goto loc_82C9E178;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x829259c8
	ctx.lr = 0x82C9E27C;
	sub_829259C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82C9E284:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E290;
	sub_831CC188(ctx, base);
loc_82C9E290:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E29C;
	sub_831CC188(ctx, base);
loc_82C9E29C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E2A8;
	sub_831CC188(ctx, base);
loc_82C9E2A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d97a20
	ctx.lr = 0x82C9E2B0;
	sub_82D97A20(ctx, base);
loc_82C9E2B0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x829259c8
	ctx.lr = 0x82C9E2B8;
	sub_829259C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9E2C0"))) PPC_WEAK_FUNC(sub_82C9E2C0);
PPC_FUNC_IMPL(__imp__sub_82C9E2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C9E2C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C9E2D4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9e8a4
	if (cr6.eq) goto loc_82C9E8A4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82C9E2E8;
	sub_8332F198(ctx, base);
	// bl 0x82d9c128
	ctx.lr = 0x82C9E2EC;
	sub_82D9C128(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C9E2F0;
	sub_83102DB0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C9E300;
	sub_82DAB6D0(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8307e040
	ctx.lr = 0x82C9E310;
	sub_8307E040(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C9E31C;
	sub_82D97688(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9E328;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,740(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 740);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C9E344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9e8a4
	if (cr6.eq) goto loc_82C9E8A4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r22,r11,336
	ctx.r22.s64 = ctx.r11.s64 + 336;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r4,r22,-192
	ctx.r4.s64 = ctx.r22.s64 + -192;
	// bl 0x837b0c10
	ctx.lr = 0x82C9E368;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,545
	ctx.r5.u64 = ctx.r5.u64 | 545;
	// bl 0x82a69a28
	ctx.lr = 0x82C9E37C;
	sub_82A69A28(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9E38C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C9E39C;
	sub_82D19788(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9E3A4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r22,-172
	ctx.r4.s64 = ctx.r22.s64 + -172;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9E3BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9e3ec
	if (cr6.eq) goto loc_82C9E3EC;
	// bl 0x82d2fe58
	ctx.lr = 0x82C9E3C8;
	sub_82D2FE58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9e3ec
	if (cr6.eq) goto loc_82C9E3EC;
	// bl 0x83572958
	ctx.lr = 0x82C9E3D8;
	sub_83572958(ctx, base);
	// lwz r11,272(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 272);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82C9E3EC;
	sub_82D3D968(ctx, base);
loc_82C9E3EC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r23,28
	ctx.r23.s64 = 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82c9e448
	if (cr6.eq) goto loc_82C9E448;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c9e448
	if (cr0.eq) goto loc_82C9E448;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r22,-156
	ctx.r4.s64 = ctx.r22.s64 + -156;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9E43C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c9d3d8
	ctx.lr = 0x82C9E444;
	sub_82C9D3D8(ctx, base);
	// b 0x82c9e488
	goto loc_82C9E488;
loc_82C9E448:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r22,-140
	ctx.r4.s64 = ctx.r22.s64 + -140;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9E464;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r22,-124
	ctx.r4.s64 = ctx.r22.s64 + -124;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C9E470;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,545
	ctx.r5.u64 = ctx.r5.u64 | 545;
	// bl 0x82a69a28
	ctx.lr = 0x82C9E484;
	sub_82A69A28(ctx, base);
	// stb r26,276(r25)
	PPC_STORE_U8(ctx.r25.u32 + 276, ctx.r26.u8);
loc_82C9E488:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c9d9f8
	ctx.lr = 0x82C9E490;
	sub_82C9D9F8(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
loc_82C9E498:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da52a0
	ctx.lr = 0x82C9E4A4;
	sub_82DA52A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9e4dc
	if (cr6.eq) goto loc_82C9E4DC;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c9e4dc
	if (cr0.eq) goto loc_82C9E4DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da51b0
	ctx.lr = 0x82C9E4D4;
	sub_82DA51B0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82c9e4e0
	goto loc_82C9E4E0;
loc_82C9E4DC:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82C9E4E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82c9e498
	if (cr6.lt) goto loc_82C9E498;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// li r28,100
	ctx.r28.s64 = 100;
loc_82C9E504:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x82c9e51c
	if (!cr6.lt) goto loc_82C9E51C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9e51c
	if (cr6.eq) goto loc_82C9E51C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82C9E51C:
	// divwu. r5,r11,r28
	ctx.r5.u32 = PPCDivide(ctx.r11.u32, ctx.r28.u32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// beq 0x82c9e52c
	if (cr0.eq) goto loc_82C9E52C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C9E52C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c9dbd0
	ctx.lr = 0x82C9E538;
	sub_82C9DBD0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x82c9e504
	if (cr6.lt) goto loc_82C9E504;
	// cmplwi cr6,r29,1000
	cr6.compare<uint32_t>(ctx.r29.u32, 1000, xer);
	// beq cr6,0x82c9e580
	if (cr6.eq) goto loc_82C9E580;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c9e580
	if (cr6.eq) goto loc_82C9E580;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// divwu r7,r8,r28
	ctx.r7.u32 = PPCDivide(ctx.r8.u32, ctx.r28.u32);
	// subf r11,r29,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r29.s64;
	// addi r5,r11,1000
	ctx.r5.s64 = ctx.r11.s64 + 1000;
	// bl 0x82c9dbd0
	ctx.lr = 0x82C9E580;
	sub_82C9DBD0(ctx, base);
loc_82C9E580:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divw r9,r5,r23
	ctx.r9.s32 = PPCDivide(ctx.r5.s32, ctx.r23.s32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c9e5f4
	if (cr6.eq) goto loc_82C9E5F4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82C9E5D0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c9e60c
	if (!cr6.gt) goto loc_82C9E60C;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x82c9e5d0
	if (cr6.lt) goto loc_82C9E5D0;
loc_82C9E5F4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c9e618
	if (cr6.eq) goto loc_82C9E618;
	// divwu r11,r8,r9
	ctx.r11.u32 = PPCDivide(ctx.r8.u32, ctx.r9.u32);
	// twllei r9,0
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82c9e61c
	goto loc_82C9E61C;
loc_82C9E60C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C9E618;
	sub_831CC188(ctx, base);
loc_82C9E618:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_82C9E61C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C9E624;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C9E640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9e8a4
	if (cr6.eq) goto loc_82C9E8A4;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// addi r4,r22,-108
	ctx.r4.s64 = ctx.r22.s64 + -108;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82C9E670;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,669
	ctx.r5.u64 = ctx.r5.u64 | 669;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a69a28
	ctx.lr = 0x82C9E684;
	sub_82A69A28(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r4,r22,-96
	ctx.r4.s64 = ctx.r22.s64 + -96;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C9E6A0;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,668
	ctx.r5.u64 = ctx.r5.u64 | 668;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a69a28
	ctx.lr = 0x82C9E6B4;
	sub_82A69A28(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r4,r22,-72
	ctx.r4.s64 = ctx.r22.s64 + -72;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C9E6D0;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,582
	ctx.r5.u64 = ctx.r5.u64 | 582;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C9E6E4;
	sub_82A69A28(ctx, base);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r22,-60
	ctx.r4.s64 = ctx.r22.s64 + -60;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C9E704;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83165d78
	ctx.lr = 0x82C9E718;
	sub_83165D78(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c9e72c
	if (!cr6.lt) goto loc_82C9E72C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82C9E72C:
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
	ctx.lr = 0x82C9E744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dad028
	ctx.lr = 0x82C9E750;
	sub_82DAD028(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// bge cr6,0x82c9e888
	if (!cr6.lt) goto loc_82C9E888;
loc_82C9E75C:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r4,r22,-40
	ctx.r4.s64 = ctx.r22.s64 + -40;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82C9E77C;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83165d78
	ctx.lr = 0x82C9E790;
	sub_83165D78(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c9e7a4
	if (!cr6.lt) goto loc_82C9E7A4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82C9E7A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82C9E7AC;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9e8ac
	if (cr6.eq) goto loc_82C9E8AC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r22,-28
	ctx.r4.s64 = ctx.r22.s64 + -28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C9E7D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9e840
	if (cr6.eq) goto loc_82C9E840;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bge cr6,0x82c9e838
	if (!cr6.lt) goto loc_82C9E838;
	// addi r4,r22,-16
	ctx.r4.s64 = ctx.r22.s64 + -16;
	// bctrl 
	ctx.lr = 0x82C9E808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d8bfc0
	ctx.lr = 0x82C9E820;
	sub_82D8BFC0(ctx, base);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// b 0x82c9e83c
	goto loc_82C9E83C;
loc_82C9E838:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82C9E83C:
	// bctrl 
	ctx.lr = 0x82C9E840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C9E840:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9e85c
	if (cr6.lt) goto loc_82C9E85C;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C9E85C;
	sub_825952B8(ctx, base);
loc_82C9E85C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82dad028
	ctx.lr = 0x82C9E87C;
	sub_82DAD028(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c9e75c
	if (cr6.lt) goto loc_82C9E75C;
loc_82C9E888:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9e8a4
	if (cr6.lt) goto loc_82C9E8A4;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C9E8A4;
	sub_825952B8(ctx, base);
loc_82C9E8A4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C9E8AC:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c9e8c8
	if (cr6.lt) goto loc_82C9E8C8;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C9E8C8;
	sub_825952B8(ctx, base);
loc_82C9E8C8:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// blt cr6,0x82c9e8a4
	if (cr6.lt) goto loc_82C9E8A4;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C9E8F0;
	sub_825952B8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9E8F8"))) PPC_WEAK_FUNC(sub_82C9E8F8);
PPC_FUNC_IMPL(__imp__sub_82C9E8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9E900;
	__savegprlr_29(ctx, base);
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
	// bl 0x8308e078
	ctx.lr = 0x82C9E914;
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
	ctx.lr = 0x82C9E92C;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,928
	ctx.r9.s64 = ctx.r11.s64 + 928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c9d058
	ctx.lr = 0x82C9E960;
	sub_82C9D058(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c9d058
	ctx.lr = 0x82C9E97C;
	sub_82C9D058(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82d9b910
	ctx.lr = 0x82C9E988;
	sub_82D9B910(ctx, base);
	// stb r30,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r30.u8);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r30.u8);
	// addi r30,r7,712
	ctx.r30.s64 = ctx.r7.s64 + 712;
	// lwz r4,712(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 712);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9E9AC;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,724(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 724);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9E9BC;
	sub_82D20AE0(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,728(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 728);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9E9CC;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,720(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// bl 0x82d20ae0
	ctx.lr = 0x82C9E9DC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82C9E9EC;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c9dd80
	ctx.lr = 0x82C9E9F4;
	sub_82C9DD80(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x82c9ea54
	if (!cr6.gt) goto loc_82C9EA54;
	// bl 0x82d86078
	ctx.lr = 0x82C9EA00;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9ea54
	if (cr6.eq) goto loc_82C9EA54;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82C9EA10;
	sub_831F8200(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8291bd40
	ctx.lr = 0x82C9EA1C;
	sub_8291BD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c9ea58
	if (cr6.eq) goto loc_82C9EA58;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,354
	ctx.r4.u64 = ctx.r4.u64 | 354;
	// bl 0x82d21730
	ctx.lr = 0x82C9EA3C;
	sub_82D21730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9e3d8
	ctx.lr = 0x82C9EA4C;
	sub_82D9E3D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r11.u8);
loc_82C9EA54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C9EA58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C9EA60"))) PPC_WEAK_FUNC(sub_82C9EA60);
PPC_FUNC_IMPL(__imp__sub_82C9EA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c9ea88
	if (cr6.lt) goto loc_82C9EA88;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c9ea8c
	goto loc_82C9EA8C;
loc_82C9EA88:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C9EA8C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,280
	ctx.r4.s64 = 280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C9EAA8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c9eac0
	if (cr6.eq) goto loc_82C9EAC0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c9e8f8
	ctx.lr = 0x82C9EABC;
	sub_82C9E8F8(ctx, base);
	// b 0x82c9eac4
	goto loc_82C9EAC4;
loc_82C9EAC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C9EAC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C9EADC"))) PPC_WEAK_FUNC(sub_82C9EADC);
PPC_FUNC_IMPL(__imp__sub_82C9EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C9EAE0"))) PPC_WEAK_FUNC(sub_82C9EAE0);
PPC_FUNC_IMPL(__imp__sub_82C9EAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C9EAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c9eba8
	if (cr6.eq) goto loc_82C9EBA8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04828
	ctx.lr = 0x82C9EB08;
	sub_82D04828(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C9EB14;
	sub_82D28370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8291fd60
	ctx.lr = 0x82C9EB2C;
	sub_8291FD60(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04d80
	ctx.lr = 0x82C9EB3C;
	sub_82D04D80(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bgt cr6,0x82c9eb78
	if (cr6.gt) goto loc_82C9EB78;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,752(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	// b 0x82c9eb80
	goto loc_82C9EB80;
loc_82C9EB78:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,756(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 756);
loc_82C9EB80:
	// bctrl 
	ctx.lr = 0x82C9EB84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C9EB98;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838ae2a8
	ctx.lr = 0x82C9EBA0;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04b60
	ctx.lr = 0x82C9EBA8;
	sub_82D04B60(ctx, base);
loc_82C9EBA8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

