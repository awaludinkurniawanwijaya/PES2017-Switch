#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D03400"))) PPC_WEAK_FUNC(sub_82D03400);
PPC_FUNC_IMPL(__imp__sub_82D03400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D03408;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D03414;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d035bc
	if (cr6.eq) goto loc_82D035BC;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,-7592
	ctx.r31.s64 = ctx.r11.s64 + -7592;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D0343C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d035bc
	if (cr6.eq) goto loc_82D035BC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03464;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D03480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d035bc
	if (cr6.eq) goto loc_82D035BC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d035bc
	if (cr6.eq) goto loc_82D035BC;
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ble cr6,0x82d0355c
	if (!cr6.gt) goto loc_82D0355C;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bctrl 
	ctx.lr = 0x82D034BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D034D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r11,r28,100
	ctx.r11.s64 = ctx.r28.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D034F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d03514
	if (cr6.eq) goto loc_82D03514;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// bl 0x82d29598
	ctx.lr = 0x82D03510;
	sub_82D29598(ctx, base);
	// b 0x82d03528
	goto loc_82D03528;
loc_82D03514:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x82D03528;
	sub_82D2B6E0(ctx, base);
loc_82D03528:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d035a8
	if (cr6.eq) goto loc_82D035A8;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,338
	ctx.r4.u64 = ctx.r4.u64 | 338;
	// bl 0x82d29598
	ctx.lr = 0x82D03540;
	sub_82D29598(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,245(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 245);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82D03554;
	sub_82D2B608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D0355C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82D03564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D0357C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03594
	if (cr6.eq) goto loc_82D03594;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// bl 0x82d29598
	ctx.lr = 0x82D03590;
	sub_82D29598(ctx, base);
	// b 0x82d035a8
	goto loc_82D035A8;
loc_82D03594:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x82D035A8;
	sub_82D2B6E0(ctx, base);
loc_82D035A8:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x82D035BC;
	sub_82D2B6E0(ctx, base);
loc_82D035BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D035C4"))) PPC_WEAK_FUNC(sub_82D035C4);
PPC_FUNC_IMPL(__imp__sub_82D035C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D035C8"))) PPC_WEAK_FUNC(sub_82D035C8);
PPC_FUNC_IMPL(__imp__sub_82D035C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d19ba0
	ctx.lr = 0x82D035E4;
	sub_82D19BA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82D035F0;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82d03634
	if (cr6.lt) goto loc_82D03634;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d03634
	if (cr6.lt) goto loc_82D03634;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d03628
	if (!cr6.eq) goto loc_82D03628;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d0361c
	if (cr6.lt) goto loc_82D0361C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D0361C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83572958
	ctx.lr = 0x82D03624;
	sub_83572958(ctx, base);
	// b 0x82d03634
	goto loc_82D03634;
loc_82D03628:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82D03634;
	sub_82D19858(ctx, base);
loc_82D03634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0364C"))) PPC_WEAK_FUNC(sub_82D0364C);
PPC_FUNC_IMPL(__imp__sub_82D0364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03650"))) PPC_WEAK_FUNC(sub_82D03650);
PPC_FUNC_IMPL(__imp__sub_82D03650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0369c
	if (cr6.eq) goto loc_82D0369C;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r11,r3,156
	ctx.r11.s64 = ctx.r3.s64 + 156;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d0368c
	if (cr6.lt) goto loc_82D0368C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d03690
	goto loc_82D03690;
loc_82D0368C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82D03690:
	// bl 0x83816968
	ctx.lr = 0x82D03694;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D0369C;
	sub_83816378(ctx, base);
loc_82D0369C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,252(r30)
	PPC_STORE_U8(ctx.r30.u32 + 252, ctx.r11.u8);
	// stw r11,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D036C0"))) PPC_WEAK_FUNC(sub_82D036C0);
PPC_FUNC_IMPL(__imp__sub_82D036C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d03714
	if (cr6.eq) goto loc_82D03714;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d036e4
	if (cr6.eq) goto loc_82D036E4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r11,r11,-7484
	ctx.r11.s64 = ctx.r11.s64 + -7484;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82D036E4:
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0370c
	if (cr6.eq) goto loc_82D0370C;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r11,r3,156
	ctx.r11.s64 = ctx.r3.s64 + 156;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d03704
	if (cr6.lt) goto loc_82D03704;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D03704:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82D0370C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D03714:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,-7484
	ctx.r3.s64 = ctx.r11.s64 + -7484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D03720"))) PPC_WEAK_FUNC(sub_82D03720);
PPC_FUNC_IMPL(__imp__sub_82D03720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D03728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D03734;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03838
	if (cr6.eq) goto loc_82D03838;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-7744
	ctx.r31.s64 = ctx.r11.s64 + -7744;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D03760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D0377C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03794
	if (cr6.eq) goto loc_82D03794;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,100
	ctx.r4.s64 = ctx.r28.s64 + 100;
	// bl 0x82d291e0
	ctx.lr = 0x82D03794;
	sub_82D291E0(ctx, base);
loc_82D03794:
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82D037A0;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d037e8
	if (cr6.eq) goto loc_82D037E8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D037C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d037d8
	if (cr6.eq) goto loc_82D037D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x82D037D8;
	sub_82D291E0(ctx, base);
loc_82D037D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d21188
	ctx.lr = 0x82D037E8;
	sub_82D21188(ctx, base);
loc_82D037E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03800;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d036c0
	ctx.lr = 0x82D0380C;
	sub_82D036C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d03838
	if (cr6.eq) goto loc_82D03838;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03838
	if (cr6.eq) goto loc_82D03838;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03838;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D03838:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03840"))) PPC_WEAK_FUNC(sub_82D03840);
PPC_FUNC_IMPL(__imp__sub_82D03840) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d03888
	if (!cr6.eq) goto loc_82D03888;
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
loc_82D03888:
	// lhz r3,254(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 254);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03898
	if (cr6.eq) goto loc_82D03898;
	// bl 0x82d39100
	ctx.lr = 0x82D03898;
	sub_82D39100(ctx, base);
loc_82D03898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d03650
	ctx.lr = 0x82D038A0;
	sub_82D03650(ctx, base);
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

__attribute__((alias("__imp__sub_82D038B8"))) PPC_WEAK_FUNC(sub_82D038B8);
PPC_FUNC_IMPL(__imp__sub_82D038B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D038C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-7368
	ctx.r9.s64 = ctx.r11.s64 + -7368;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r29,r3,216
	ctx.r29.s64 = ctx.r3.s64 + 216;
	// lwz r7,236(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d03904
	if (cr6.lt) goto loc_82D03904;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D03904;
	sub_825952B8(ctx, base);
loc_82D03904:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r30,r28,184
	ctx.r30.s64 = ctx.r28.s64 + 184;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d03938
	if (cr6.lt) goto loc_82D03938;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D03938;
	sub_825952B8(ctx, base);
loc_82D03938:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,156
	ctx.r29.s64 = ctx.r28.s64 + 156;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d03964
	if (cr6.lt) goto loc_82D03964;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D03964;
	sub_825952B8(ctx, base);
loc_82D03964:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,128
	ctx.r30.s64 = ctx.r28.s64 + 128;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d03990
	if (cr6.lt) goto loc_82D03990;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D03990;
	sub_825952B8(ctx, base);
loc_82D03990:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,100
	ctx.r29.s64 = ctx.r28.s64 + 100;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d039bc
	if (cr6.lt) goto loc_82D039BC;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D039BC;
	sub_825952B8(ctx, base);
loc_82D039BC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x82d25548
	ctx.lr = 0x82D039D0;
	sub_82D25548(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D039D8"))) PPC_WEAK_FUNC(sub_82D039D8);
PPC_FUNC_IMPL(__imp__sub_82D039D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D039E0;
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
	ctx.lr = 0x82D039F8;
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
	ctx.lr = 0x82D03A10;
	sub_82D253F8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// addi r9,r11,-7368
	ctx.r9.s64 = ctx.r11.s64 + -7368;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// stb r11,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r11.u8);
	// stb r11,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r11.u8);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
	// sth r11,254(r31)
	PPC_STORE_U16(ctx.r31.u32 + 254, ctx.r11.u16);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r30,r11,-7960
	ctx.r30.s64 = ctx.r11.s64 + -7960;
	// bne cr6,0x82d03aac
	if (!cr6.eq) goto loc_82D03AAC;
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// bl 0x82d20ae0
	ctx.lr = 0x82D03AA4;
	sub_82D20AE0(ctx, base);
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// b 0x82d03ab8
	goto loc_82D03AB8;
loc_82D03AAC:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// bl 0x82d20ae0
	ctx.lr = 0x82D03AB4;
	sub_82D20AE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D03AB8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82D03AC4;
	sub_82D23390(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82D03AD4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82D03ADC;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03AE8"))) PPC_WEAK_FUNC(sub_82D03AE8);
PPC_FUNC_IMPL(__imp__sub_82D03AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d038b8
	ctx.lr = 0x82D03B08;
	sub_82D038B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d03b20
	if (cr6.eq) goto loc_82D03B20;
	// bl 0x82416268
	ctx.lr = 0x82D03B1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D03B20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D03B38"))) PPC_WEAK_FUNC(sub_82D03B38);
PPC_FUNC_IMPL(__imp__sub_82D03B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D03B40;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d03b74
	if (cr6.lt) goto loc_82D03B74;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82d03b78
	goto loc_82D03B78;
loc_82D03B74:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82D03B78:
	// bl 0x83816968
	ctx.lr = 0x82D03B7C;
	sub_83816968(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lfs f3,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// lfs f4,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x83816550
	ctx.lr = 0x82D03BB4;
	sub_83816550(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82d03bc8
	if (cr6.lt) goto loc_82D03BC8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d03bcc
	goto loc_82D03BCC;
loc_82D03BC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D03BCC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D03BD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d03bd0
	if (!cr6.eq) goto loc_82D03BD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,156
	ctx.r3.s64 = ctx.r26.s64 + 156;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D03BF4;
	sub_8259CC28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,252(r26)
	PPC_STORE_U8(ctx.r26.u32 + 252, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03C04"))) PPC_WEAK_FUNC(sub_82D03C04);
PPC_FUNC_IMPL(__imp__sub_82D03C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03C08"))) PPC_WEAK_FUNC(sub_82D03C08);
PPC_FUNC_IMPL(__imp__sub_82D03C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D03C10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82D03C38;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D03C4C;
	sub_8259CB28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03C54"))) PPC_WEAK_FUNC(sub_82D03C54);
PPC_FUNC_IMPL(__imp__sub_82D03C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03C58"))) PPC_WEAK_FUNC(sub_82D03C58);
PPC_FUNC_IMPL(__imp__sub_82D03C58) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03C68"))) PPC_WEAK_FUNC(sub_82D03C68);
PPC_FUNC_IMPL(__imp__sub_82D03C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D03C70;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D03C7C;
	sub_82D19A78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03df4
	if (cr6.eq) goto loc_82D03DF4;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,-7688
	ctx.r31.s64 = ctx.r11.s64 + -7688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D03CAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03cc4
	if (cr6.eq) goto loc_82D03CC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,100
	ctx.r4.s64 = ctx.r28.s64 + 100;
	// bl 0x82d291e0
	ctx.lr = 0x82D03CC4;
	sub_82D291E0(ctx, base);
loc_82D03CC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03CDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03cf4
	if (cr6.eq) goto loc_82D03CF4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,184
	ctx.r4.s64 = ctx.r28.s64 + 184;
	// bl 0x82d291e0
	ctx.lr = 0x82D03CF4;
	sub_82D291E0(ctx, base);
loc_82D03CF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03D0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03d50
	if (cr6.eq) goto loc_82D03D50;
	// addi r4,r31,-614
	ctx.r4.s64 = ctx.r31.s64 + -614;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82D03D24;
	sub_837B0C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,212(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// bl 0x82a6b9a8
	ctx.lr = 0x82D03D34;
	sub_82A6B9A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82D03D48;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82D03D50;
	sub_8387E8E0(ctx, base);
loc_82D03D50:
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82D03D5C;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03da4
	if (cr6.eq) goto loc_82D03DA4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03d94
	if (cr6.eq) goto loc_82D03D94;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x82D03D94;
	sub_82D291E0(ctx, base);
loc_82D03D94:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d21188
	ctx.lr = 0x82D03DA4;
	sub_82D21188(ctx, base);
loc_82D03DA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03DBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d036c0
	ctx.lr = 0x82D03DC8;
	sub_82D036C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d03df4
	if (cr6.eq) goto loc_82D03DF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03df4
	if (cr6.eq) goto loc_82D03DF4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03DF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D03DF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03DFC"))) PPC_WEAK_FUNC(sub_82D03DFC);
PPC_FUNC_IMPL(__imp__sub_82D03DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03E00"))) PPC_WEAK_FUNC(sub_82D03E00);
PPC_FUNC_IMPL(__imp__sub_82D03E00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03E24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d03e48
	if (!cr6.eq) goto loc_82D03E48;
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
loc_82D03E48:
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d03e60
	if (!cr6.eq) goto loc_82D03E60;
loc_82D03E54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82d03ec4
	goto loc_82D03EC4;
loc_82D03E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D03E68;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d03e54
	if (cr6.eq) goto loc_82D03E54;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,245(r31)
	PPC_STORE_U8(ctx.r31.u32 + 245, ctx.r11.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82D03E80;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82D03E84;
	sub_82D2B0F8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,254(r31)
	PPC_STORE_U16(ctx.r31.u32 + 254, ctx.r3.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d03e98
	if (cr6.eq) goto loc_82D03E98;
	// bl 0x82d390c0
	ctx.lr = 0x82D03E98;
	sub_82D390C0(ctx, base);
loc_82D03E98:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d03eb0
	if (!cr6.eq) goto loc_82D03EB0;
	// bl 0x82d03720
	ctx.lr = 0x82D03EAC;
	sub_82D03720(ctx, base);
	// b 0x82d03eb4
	goto loc_82D03EB4;
loc_82D03EB0:
	// bl 0x82d03c68
	ctx.lr = 0x82D03EB4;
	sub_82D03C68(ctx, base);
loc_82D03EB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d03400
	ctx.lr = 0x82D03EBC;
	sub_82D03400(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_82D03EC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D03ED0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82D03EE8"))) PPC_WEAK_FUNC(sub_82D03EE8);
PPC_FUNC_IMPL(__imp__sub_82D03EE8) {
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
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82D03F08;
	sub_82D253F8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5368
	ctx.r9.s64 = ctx.r11.s64 + -5368;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d17e60
	ctx.lr = 0x82D03F2C;
	sub_82D17E60(ctx, base);
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

__attribute__((alias("__imp__sub_82D03F44"))) PPC_WEAK_FUNC(sub_82D03F44);
PPC_FUNC_IMPL(__imp__sub_82D03F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03F48"))) PPC_WEAK_FUNC(sub_82D03F48);
PPC_FUNC_IMPL(__imp__sub_82D03F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5368
	ctx.r9.s64 = ctx.r11.s64 + -5368;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82d25548
	sub_82D25548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D03F64"))) PPC_WEAK_FUNC(sub_82D03F64);
PPC_FUNC_IMPL(__imp__sub_82D03F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D03F68"))) PPC_WEAK_FUNC(sub_82D03F68);
PPC_FUNC_IMPL(__imp__sub_82D03F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D03F70;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19c80
	ctx.lr = 0x82D03F84;
	sub_82D19C80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d040b8
	if (cr6.eq) goto loc_82D040B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19db0
	ctx.lr = 0x82D03F9C;
	sub_82D19DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d040b8
	if (cr6.eq) goto loc_82D040B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19e10
	ctx.lr = 0x82D03FB0;
	sub_82D19E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d040b8
	if (cr6.eq) goto loc_82D040B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82D03FC4;
	sub_82D19A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,364(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// bl 0x82d19db0
	ctx.lr = 0x82D03FD8;
	sub_82D19DB0(ctx, base);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// divwu r30,r9,r29
	ctx.r30.u32 = PPCDivide(ctx.r9.u32, ctx.r29.u32);
	// twllei r29,0
	// bl 0x82d19e10
	ctx.lr = 0x82D03FF4;
	sub_82D19E10(ctx, base);
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// divwu r23,r7,r29
	ctx.r23.u32 = PPCDivide(ctx.r7.u32, ctx.r29.u32);
	// twllei r29,0
	// bl 0x82d19d40
	ctx.lr = 0x82D04010;
	sub_82D19D40(ctx, base);
	// divwu r31,r3,r29
	ctx.r31.u32 = PPCDivide(ctx.r3.u32, ctx.r29.u32);
	// twllei r29,0
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// blt cr6,0x82d04028
	if (cr6.lt) goto loc_82D04028;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_82D04028:
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// li r26,0
	ctx.r26.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
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
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r24,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r24.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq 0x82d040b8
	if (cr0.eq) goto loc_82D040B8;
	// mullw r30,r31,r29
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// neg r27,r29
	ctx.r27.s64 = -ctx.r29.s64;
loc_82D04060:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82d040b8
	if (cr6.lt) goto loc_82D040B8;
	// cmpw cr6,r31,r23
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, xer);
	// bge cr6,0x82d040b8
	if (!cr6.lt) goto loc_82D040B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D04090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x82d040a4
	if (!cr6.lt) goto loc_82D040A4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// b 0x82d040ac
	goto loc_82D040AC;
loc_82D040A4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_82D040AC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82d04060
	if (cr6.lt) goto loc_82D04060;
loc_82D040B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D040C0"))) PPC_WEAK_FUNC(sub_82D040C0);
PPC_FUNC_IMPL(__imp__sub_82D040C0) {
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
	// bl 0x82d17e98
	ctx.lr = 0x82D040D8;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d04128
	if (cr6.eq) goto loc_82D04128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82D040EC;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82D040F8;
	sub_82D19A88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d04128
	if (cr6.eq) goto loc_82D04128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bc0
	ctx.lr = 0x82D0410C;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d04128
	if (cr6.eq) goto loc_82D04128;
	// bl 0x82d2aff8
	ctx.lr = 0x82D04118;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0412c
	if (!cr6.eq) goto loc_82D0412C;
loc_82D04128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D0412C:
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

__attribute__((alias("__imp__sub_82D04140"))) PPC_WEAK_FUNC(sub_82D04140);
PPC_FUNC_IMPL(__imp__sub_82D04140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5368
	ctx.r9.s64 = ctx.r11.s64 + -5368;
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
	ctx.lr = 0x82D04178;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d04190
	if (cr6.eq) goto loc_82D04190;
	// bl 0x82416268
	ctx.lr = 0x82D0418C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D04190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D041A8"))) PPC_WEAK_FUNC(sub_82D041A8);
PPC_FUNC_IMPL(__imp__sub_82D041A8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-20585
	xer.ca = ctx.r11.u32 > 20584;
	ctx.r11.s64 = ctx.r11.s64 + -20585;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82d041dc
	if (cr0.eq) goto loc_82D041DC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d04208
	if (!cr6.eq) goto loc_82D04208;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d041e0
	goto loc_82D041E0;
loc_82D041DC:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82D041E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d03f68
	ctx.lr = 0x82D041E8;
	sub_82D03F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d040c0
	ctx.lr = 0x82D041F0;
	sub_82D040C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d04208
	if (cr6.eq) goto loc_82D04208;
	// bl 0x82d26ed8
	ctx.lr = 0x82D04200;
	sub_82D26ED8(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// bl 0x82d26b18
	ctx.lr = 0x82D04208;
	sub_82D26B18(ctx, base);
loc_82D04208:
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

__attribute__((alias("__imp__sub_82D04220"))) PPC_WEAK_FUNC(sub_82D04220);
PPC_FUNC_IMPL(__imp__sub_82D04220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d05818
	ctx.lr = 0x82D04240;
	sub_82D05818(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d04258
	if (!cr6.eq) goto loc_82D04258;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-5026
	ctx.r4.s64 = ctx.r11.s64 + -5026;
	// b 0x82d04288
	goto loc_82D04288;
loc_82D04258:
	// bl 0x82d05818
	ctx.lr = 0x82D0425C;
	sub_82D05818(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d06288
	ctx.lr = 0x82D04264;
	sub_82D06288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D0426C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0426c
	if (!cr6.eq) goto loc_82D0426C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82D04288:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D04290;
	sub_8259CC28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D042A8"))) PPC_WEAK_FUNC(sub_82D042A8);
PPC_FUNC_IMPL(__imp__sub_82D042A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d05818
	ctx.lr = 0x82D042E0;
	sub_82D05818(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d04300
	if (!cr6.eq) goto loc_82D04300;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-5025
	ctx.r4.s64 = ctx.r11.s64 + -5025;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D042FC;
	sub_8259CC28(ctx, base);
	// b 0x82d04324
	goto loc_82D04324;
loc_82D04300:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82d05818
	ctx.lr = 0x82D04314;
	sub_82D05818(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d062e0
	ctx.lr = 0x82D04324;
	sub_82D062E0(ctx, base);
loc_82D04324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0433C"))) PPC_WEAK_FUNC(sub_82D0433C);
PPC_FUNC_IMPL(__imp__sub_82D0433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04340"))) PPC_WEAK_FUNC(sub_82D04340);
PPC_FUNC_IMPL(__imp__sub_82D04340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D04348;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
loc_82D04368:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d04368
	if (!cr6.eq) goto loc_82D04368;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D04390;
	sub_8259CC28(ctx, base);
	// li r10,95
	ctx.r10.s64 = 95;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a7eb0
	ctx.lr = 0x82D043B0;
	sub_827A7EB0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d043e4
	if (!cr6.eq) goto loc_82D043E4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d043d8
	if (cr6.lt) goto loc_82D043D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D043D8;
	sub_825952B8(ctx, base);
loc_82D043D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D043E4:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d04410
	if (cr6.gt) goto loc_82D04410;
loc_82D043F8:
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,48
	cr6.compare<uint32_t>(ctx.r9.u32, 48, xer);
	// bne cr6,0x82d04410
	if (!cr6.eq) goto loc_82D04410;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d043f8
	if (!cr6.gt) goto loc_82D043F8;
loc_82D04410:
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831d88a0
	ctx.lr = 0x82D04418;
	sub_831D88A0(ctx, base);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x82D0443C;
	sub_8259CB28(ctx, base);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82D0445C;
	sub_8259CB28(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d0447c
	if (cr6.lt) goto loc_82D0447C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82D0447C;
	sub_825952B8(ctx, base);
loc_82D0447C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// bl 0x8241c348
	ctx.lr = 0x82D04494;
	sub_8241C348(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r7,r11,19736
	ctx.r7.s64 = ctx.r11.s64 + 19736;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
loc_82D044A0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82D044A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82d044cc
	if (cr6.eq) goto loc_82D044CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d044a8
	if (cr6.eq) goto loc_82D044A8;
loc_82D044CC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d044e8
	if (cr6.eq) goto loc_82D044E8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplwi cr6,r31,205
	cr6.compare<uint32_t>(ctx.r31.u32, 205, xer);
	// blt cr6,0x82d044a0
	if (cr6.lt) goto loc_82D044A0;
	// b 0x82d044f8
	goto loc_82D044F8;
loc_82D044E8:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82D044F8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,205
	cr6.compare<uint32_t>(ctx.r31.u32, 205, xer);
	// bne cr6,0x82d04550
	if (!cr6.eq) goto loc_82D04550;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d0451c
	if (cr6.lt) goto loc_82D0451C;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82D0451C;
	sub_825952B8(ctx, base);
loc_82D0451C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// blt cr6,0x82d04544
	if (cr6.lt) goto loc_82D04544;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82D04544;
	sub_825952B8(ctx, base);
loc_82D04544:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D04550:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d04568
	if (cr6.lt) goto loc_82D04568;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82D04568;
	sub_825952B8(ctx, base);
loc_82D04568:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// blt cr6,0x82d04590
	if (cr6.lt) goto loc_82D04590;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82D04590;
	sub_825952B8(ctx, base);
loc_82D04590:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0459C"))) PPC_WEAK_FUNC(sub_82D0459C);
PPC_FUNC_IMPL(__imp__sub_82D0459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D045A0"))) PPC_WEAK_FUNC(sub_82D045A0);
PPC_FUNC_IMPL(__imp__sub_82D045A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_82D045D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d045d4
	if (!cr6.eq) goto loc_82D045D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D045F8;
	sub_8259CC28(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82D04618"))) PPC_WEAK_FUNC(sub_82D04618);
PPC_FUNC_IMPL(__imp__sub_82D04618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D04620;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3162
	ctx.r4.s64 = ctx.r11.s64 + -3162;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82D04654;
	sub_8259CC28(ctx, base);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r9,r10,15
	ctx.r9.u64 = ctx.r10.u64 | 15;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d046b0
	if (cr6.lt) goto loc_82D046B0;
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
	ctx.lr = 0x82D04684;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d04750
	if (cr6.lt) goto loc_82D04750;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D046A4;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D046B0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d04704
	if (cr6.lt) goto loc_82D04704;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,21480
	ctx.r11.s64 = ctx.r11.s64 + 21480;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d045a0
	ctx.lr = 0x82D046E4;
	sub_82D045A0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D046F8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82D04700;
	sub_8387E8E0(ctx, base);
	// b 0x82d04710
	goto loc_82D04710;
loc_82D04704:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82D04710;
	sub_82D04220(ctx, base);
loc_82D04710:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
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
	ctx.lr = 0x82D04730;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d04750
	if (cr6.lt) goto loc_82D04750;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D04750;
	sub_825952B8(ctx, base);
loc_82D04750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0475C"))) PPC_WEAK_FUNC(sub_82D0475C);
PPC_FUNC_IMPL(__imp__sub_82D0475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04760"))) PPC_WEAK_FUNC(sub_82D04760);
PPC_FUNC_IMPL(__imp__sub_82D04760) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-2300
	ctx.r9.s64 = ctx.r11.s64 + -2300;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d04794
	if (cr6.eq) goto loc_82D04794;
	// bl 0x82416268
	ctx.lr = 0x82D04790;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D04794:
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

__attribute__((alias("__imp__sub_82D047A8"))) PPC_WEAK_FUNC(sub_82D047A8);
PPC_FUNC_IMPL(__imp__sub_82D047A8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d047e0
	if (!cr6.eq) goto loc_82D047E0;
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
loc_82D047E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d08790
	ctx.lr = 0x82D047E8;
	sub_82D08790(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D047FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d08890
	ctx.lr = 0x82D04804;
	sub_82D08890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d09df8
	ctx.lr = 0x82D0480C;
	sub_82D09DF8(ctx, base);
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

__attribute__((alias("__imp__sub_82D04824"))) PPC_WEAK_FUNC(sub_82D04824);
PPC_FUNC_IMPL(__imp__sub_82D04824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04828"))) PPC_WEAK_FUNC(sub_82D04828);
PPC_FUNC_IMPL(__imp__sub_82D04828) {
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
	// bl 0x82d07150
	ctx.lr = 0x82D04840;
	sub_82D07150(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2272
	ctx.r9.s64 = ctx.r11.s64 + -2272;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82D0486C"))) PPC_WEAK_FUNC(sub_82D0486C);
PPC_FUNC_IMPL(__imp__sub_82D0486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04870"))) PPC_WEAK_FUNC(sub_82D04870);
PPC_FUNC_IMPL(__imp__sub_82D04870) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mulli r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 * 52;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04880"))) PPC_WEAK_FUNC(sub_82D04880);
PPC_FUNC_IMPL(__imp__sub_82D04880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D04888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82d0491c
	if (cr6.eq) goto loc_82D0491C;
	// lis r11,1260
	ctx.r11.s64 = 82575360;
	// ori r10,r11,20164
	ctx.r10.u64 = ctx.r11.u64 | 20164;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d048c0
	if (cr6.gt) goto loc_82D048C0;
	// mulli r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 * 52;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d048c4
	if (!cr6.gt) goto loc_82D048C4;
loc_82D048C0:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82D048C4:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D048D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d04914
	if (cr6.eq) goto loc_82D04914;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82d04918
	if (cr0.lt) goto loc_82D04918;
loc_82D048F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0c688
	ctx.lr = 0x82D048FC;
	sub_82D0C688(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// bge 0x82d048f4
	if (!cr0.lt) goto loc_82D048F4;
	// stw r29,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D04914:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D04918:
	// stw r29,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
loc_82D0491C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D04924"))) PPC_WEAK_FUNC(sub_82D04924);
PPC_FUNC_IMPL(__imp__sub_82D04924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04928"))) PPC_WEAK_FUNC(sub_82D04928);
PPC_FUNC_IMPL(__imp__sub_82D04928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D04930;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d04988
	if (cr6.eq) goto loc_82D04988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d0c5c8
	ctx.lr = 0x82D04950;
	sub_82D0C5C8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,84(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
loc_82D04958:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D04964;
	sub_82D0C5F8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d04990
	if (!cr6.eq) goto loc_82D04990;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d04958
	if (!cr6.eq) goto loc_82D04958;
loc_82D04988:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D04990:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d0bc70
	ctx.lr = 0x82D04998;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d049bc
	if (!cr6.eq) goto loc_82D049BC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d0bc98
	ctx.lr = 0x82D049AC;
	sub_82D0BC98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d049c0
	if (cr6.eq) goto loc_82D049C0;
loc_82D049BC:
	// li r4,32
	ctx.r4.s64 = 32;
loc_82D049C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d0d2b8
	ctx.lr = 0x82D049D0;
	sub_82D0D2B8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// b 0x82d04958
	goto loc_82D04958;
}

__attribute__((alias("__imp__sub_82D049E8"))) PPC_WEAK_FUNC(sub_82D049E8);
PPC_FUNC_IMPL(__imp__sub_82D049E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82d04a10
	if (cr6.lt) goto loc_82D04A10;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// ble cr6,0x82d04a10
	if (!cr6.gt) goto loc_82D04A10;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// blr 
	return;
loc_82D04A10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04A18"))) PPC_WEAK_FUNC(sub_82D04A18);
PPC_FUNC_IMPL(__imp__sub_82D04A18) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d04a88
	if (cr6.eq) goto loc_82D04A88;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// mulli r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 * 52;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// blt 0x82d04a6c
	if (cr0.lt) goto loc_82D04A6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r11,r11,-2300
	ctx.r11.s64 = ctx.r11.s64 + -2300;
loc_82D04A64:
	// stwu r11,-52(r10)
	ea = -52 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d04a64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D04A64;
loc_82D04A6C:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d04a80
	if (cr6.eq) goto loc_82D04A80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82D04A80;
	sub_82416268(ctx, base);
loc_82D04A80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82d04aac
	goto loc_82D04AAC;
loc_82D04A88:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-2300
	ctx.r9.s64 = ctx.r11.s64 + -2300;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d04aa8
	if (cr6.eq) goto loc_82D04AA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D04AA8;
	sub_82416268(ctx, base);
loc_82D04AA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D04AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04AC4"))) PPC_WEAK_FUNC(sub_82D04AC4);
PPC_FUNC_IMPL(__imp__sub_82D04AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04AC8"))) PPC_WEAK_FUNC(sub_82D04AC8);
PPC_FUNC_IMPL(__imp__sub_82D04AC8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d04b4c
	if (cr6.eq) goto loc_82D04B4C;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D04AFC;
	sub_82595150(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d04b38
	if (cr6.eq) goto loc_82D04B38;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d04b34
	if (cr6.eq) goto loc_82D04B34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D04B30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d04b38
	goto loc_82D04B38;
loc_82D04B34:
	// bl 0x82416268
	ctx.lr = 0x82D04B38;
	sub_82416268(ctx, base);
loc_82D04B38:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D04B40;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82D04B4C:
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

__attribute__((alias("__imp__sub_82D04B60"))) PPC_WEAK_FUNC(sub_82D04B60);
PPC_FUNC_IMPL(__imp__sub_82D04B60) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2272
	ctx.r10.s64 = ctx.r11.s64 + -2272;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d04ac8
	ctx.lr = 0x82D04B84;
	sub_82D04AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d087f8
	ctx.lr = 0x82D04B8C;
	sub_82D087F8(ctx, base);
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

__attribute__((alias("__imp__sub_82D04BA0"))) PPC_WEAK_FUNC(sub_82D04BA0);
PPC_FUNC_IMPL(__imp__sub_82D04BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2272
	ctx.r10.s64 = ctx.r11.s64 + -2272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d04ac8
	ctx.lr = 0x82D04BCC;
	sub_82D04AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d087f8
	ctx.lr = 0x82D04BD4;
	sub_82D087F8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d04bec
	if (cr6.eq) goto loc_82D04BEC;
	// bl 0x82416268
	ctx.lr = 0x82D04BE8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D04BEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04C04"))) PPC_WEAK_FUNC(sub_82D04C04);
PPC_FUNC_IMPL(__imp__sub_82D04C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04C08"))) PPC_WEAK_FUNC(sub_82D04C08);
PPC_FUNC_IMPL(__imp__sub_82D04C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D04C1C:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// beq cr6,0x82d04c2c
	if (cr6.eq) goto loc_82D04C2C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82D04C2C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d04c1c
	if (!cr6.eq) goto loc_82D04C1C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04C3C"))) PPC_WEAK_FUNC(sub_82D04C3C);
PPC_FUNC_IMPL(__imp__sub_82D04C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D04C40"))) PPC_WEAK_FUNC(sub_82D04C40);
PPC_FUNC_IMPL(__imp__sub_82D04C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D04C50:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// beq cr6,0x82d04c68
	if (cr6.eq) goto loc_82D04C68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82D04C68:
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d04c50
	if (!cr6.eq) goto loc_82D04C50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04C78"))) PPC_WEAK_FUNC(sub_82D04C78);
PPC_FUNC_IMPL(__imp__sub_82D04C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,-1840
	ctx.r10.s64 = ctx.r11.s64 + -1840;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lbz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// stb r9,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r9.u8);
	// lbz r8,45(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// stb r8,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r8.u8);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f10,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04D30"))) PPC_WEAK_FUNC(sub_82D04D30);
PPC_FUNC_IMPL(__imp__sub_82D04D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d087f8
	ctx.lr = 0x82D04D50;
	sub_82D087F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d04d68
	if (cr6.eq) goto loc_82D04D68;
	// bl 0x82416268
	ctx.lr = 0x82D04D64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D04D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D04D80"))) PPC_WEAK_FUNC(sub_82D04D80);
PPC_FUNC_IMPL(__imp__sub_82D04D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82D04D88;
	__savegprlr_16(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d04c78
	ctx.lr = 0x82D04DA4;
	sub_82D04C78(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r10,-2272
	ctx.r9.s64 = ctx.r10.s64 + -2272;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x82ab5f20
	ctx.lr = 0x82D04DD8;
	sub_82AB5F20(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// blt cr6,0x82d04df4
	if (cr6.lt) goto loc_82D04DF4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d04df8
	goto loc_82D04DF8;
loc_82D04DF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D04DF8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d06fa0
	ctx.lr = 0x82D04E00;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d047a8
	ctx.lr = 0x82D04E08;
	sub_82D047A8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r18,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r10.s32 >> 2;
	// ble cr6,0x82d04ff8
	if (!cr6.gt) goto loc_82D04FF8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d08490
	ctx.lr = 0x82D04E30;
	sub_82D08490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82D04E3C;
	sub_837B0C10(ctx, base);
	// li r16,27
	ctx.r16.s64 = 27;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r20,r11,1
	ctx.r20.s64 = ctx.r11.s64 + 1;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82595718
	ctx.lr = 0x82D04E5C;
	sub_82595718(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d04e74
	if (!cr6.lt) goto loc_82D04E74;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82D04E74:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82D04E80;
	sub_831CE7D8(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r19,2
	ctx.r19.s64 = 2;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x82d04fbc
	if (!cr6.gt) goto loc_82D04FBC;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82D04EA0:
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r24,r18
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r18.s32, xer);
	// bge cr6,0x82d04fbc
	if (!cr6.lt) goto loc_82D04FBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r31,-4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d04ee8
	if (!cr6.lt) goto loc_82D04EE8;
loc_82D04EC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d08460
	ctx.lr = 0x82D04ED0;
	sub_82D08460(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d04ec4
	if (cr6.lt) goto loc_82D04EC4;
loc_82D04EE8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d049e8
	ctx.lr = 0x82D04EF4;
	sub_82D049E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d04fbc
	if (cr6.lt) goto loc_82D04FBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d049e8
	ctx.lr = 0x82D04F0C;
	sub_82D049E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82d04f1c
	if (cr6.gt) goto loc_82D04F1C;
	// addi r30,r20,-1
	ctx.r30.s64 = ctx.r20.s64 + -1;
loc_82D04F1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d049e8
	ctx.lr = 0x82D04F28;
	sub_82D049E8(ctx, base);
	// add r31,r3,r22
	ctx.r31.u64 = ctx.r3.u64 + ctx.r22.u64;
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lbzx r28,r30,r31
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// stbx r29,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u8);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_82D04F48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d04f48
	if (!cr6.eq) goto loc_82D04F48;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D04F70;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82D04F7C;
	sub_8291FDC8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d04f98
	if (cr6.lt) goto loc_82D04F98;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82D04F98;
	sub_825952B8(ctx, base);
loc_82D04F98:
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
	// cmpw cr6,r24,r21
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r21.s32, xer);
	// blt cr6,0x82d04ea0
	if (cr6.lt) goto loc_82D04EA0;
loc_82D04FBC:
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82D04FCC;
	sub_825952B8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d04fe8
	if (cr6.lt) goto loc_82D04FE8;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82D04FE8;
	sub_825952B8(ctx, base);
loc_82D04FE8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
loc_82D04FF8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d05004
	if (cr6.eq) goto loc_82D05004;
	// bl 0x82416268
	ctx.lr = 0x82D05004;
	sub_82416268(ctx, base);
loc_82D05004:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82d04b60
	ctx.lr = 0x82D05018;
	sub_82D04B60(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D05020"))) PPC_WEAK_FUNC(sub_82D05020);
PPC_FUNC_IMPL(__imp__sub_82D05020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82D05028;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d05460
	if (cr6.eq) goto loc_82D05460;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82d05460
	if (!cr6.gt) goto loc_82D05460;
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82d05460
	if (!cr6.gt) goto loc_82D05460;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d04828
	ctx.lr = 0x82D05070;
	sub_82D04828(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82d04828
	ctx.lr = 0x82D05078;
	sub_82D04828(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d06ef8
	ctx.lr = 0x82D05088;
	sub_82D06EF8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d07058
	ctx.lr = 0x82D05094;
	sub_82D07058(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82d07060
	ctx.lr = 0x82D050A0;
	sub_82D07060(ctx, base);
	// lwz r11,20(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d050b4
	if (cr6.lt) goto loc_82D050B4;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x82d050b8
	goto loc_82D050B8;
loc_82D050B4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82D050B8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d06fa0
	ctx.lr = 0x82D050C0;
	sub_82D06FA0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82dab6c8
	ctx.lr = 0x82D050CC;
	sub_82DAB6C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82d06ef8
	ctx.lr = 0x82D050DC;
	sub_82D06EF8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d07058
	ctx.lr = 0x82D050E8;
	sub_82D07058(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82d07060
	ctx.lr = 0x82D050F4;
	sub_82D07060(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82dab6c8
	ctx.lr = 0x82D05100;
	sub_82DAB6C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x8291fd60
	ctx.lr = 0x82D05118;
	sub_8291FD60(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04d80
	ctx.lr = 0x82D05128;
	sub_82D04D80(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d047a8
	ctx.lr = 0x82D05130;
	sub_82D047A8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r26,272(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82d07068
	ctx.lr = 0x82D0513C;
	sub_82D07068(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x82d05448
	if (!cr6.gt) goto loc_82D05448;
	// subf r11,r3,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r3.s64;
	// twllei r26,0
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
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divw. r25,r9,r26
	ctx.r25.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// andc r7,r26,r8
	ctx.r7.u64 = ctx.r26.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	// bgt 0x82d0518c
	if (cr0.gt) goto loc_82D0518C;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82D0518C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x82d05414
	if (!cr6.gt) goto loc_82D05414;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r24,27
	ctx.r24.s64 = 27;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// divw r20,r8,r10
	ctx.r20.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addi r22,r11,-2154
	ctx.r22.s64 = ctx.r11.s64 + -2154;
loc_82D051D0:
	// cmpw cr6,r20,r28
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r28.s32, xer);
	// ble cr6,0x82d05414
	if (!cr6.gt) goto loc_82D05414;
	// cmplw cr6,r20,r28
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r28.u32, xer);
	// ble cr6,0x82d05470
	if (!cr6.gt) goto loc_82D05470;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82D051EC;
	sub_8292A3F8(ctx, base);
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82d053dc
	if (!cr6.eq) goto loc_82D053DC;
	// cmpw cr6,r20,r25
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r25.s32, xer);
	// ble cr6,0x82d053e8
	if (!cr6.gt) goto loc_82D053E8;
	// addi r4,r22,218
	ctx.r4.s64 = ctx.r22.s64 + 218;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82D0520C;
	sub_837B0C10(ctx, base);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82595718
	ctx.lr = 0x82D05230;
	sub_82595718(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d05248
	if (!cr6.lt) goto loc_82D05248;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82D05248:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82D05254;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d04828
	ctx.lr = 0x82D0525C;
	sub_82D04828(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d06ef8
	ctx.lr = 0x82D0526C;
	sub_82D06EF8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d07058
	ctx.lr = 0x82D05278;
	sub_82D07058(ctx, base);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82d07060
	ctx.lr = 0x82D05294;
	sub_82D07060(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82D052A0;
	sub_837B0C10(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d052d0
	if (cr6.eq) goto loc_82D052D0;
loc_82D052B4:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// beq cr6,0x82d052c4
	if (cr6.eq) goto loc_82D052C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82D052C4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d052b4
	if (!cr6.eq) goto loc_82D052B4;
loc_82D052D0:
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
loc_82D052D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82d05390
	if (cr6.lt) goto loc_82D05390;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d05314
	if (cr6.eq) goto loc_82D05314;
loc_82D052F0:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// beq cr6,0x82d05308
	if (cr6.eq) goto loc_82D05308;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d05314
	if (cr6.lt) goto loc_82D05314;
loc_82D05308:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d052f0
	if (!cr6.eq) goto loc_82D052F0;
loc_82D05314:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
loc_82D0531C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0531c
	if (!cr6.eq) goto loc_82D0531C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D05344;
	sub_8259CC28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82D05358;
	sub_825A1DA8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d0536c
	if (!cr6.lt) goto loc_82D0536C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82D0536C:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d06fa0
	ctx.lr = 0x82D05374;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d047a8
	ctx.lr = 0x82D0537C;
	sub_82D047A8(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x82d052d4
	if (cr6.gt) goto loc_82D052D4;
	// b 0x82d0539c
	goto loc_82D0539C;
loc_82D05390:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d6c0
	ctx.lr = 0x82D0539C;
	sub_8259D6C0(ctx, base);
loc_82D0539C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82D053B0;
	sub_8259CB28(ctx, base);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x82D053C0;
	sub_825952B8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82D053C8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d04b60
	ctx.lr = 0x82D053D0;
	sub_82D04B60(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82D053D8;
	sub_8387E8E0(ctx, base);
	// b 0x82d053e8
	goto loc_82D053E8;
loc_82D053DC:
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b142a0
	ctx.lr = 0x82D053E8;
	sub_82B142A0(ctx, base);
loc_82D053E8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825a1da8
	ctx.lr = 0x82D053FC;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82D05404;
	sub_8387E8E0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r23,r23,28
	ctx.r23.s64 = ctx.r23.s64 + 28;
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, xer);
	// bgt cr6,0x82d051d0
	if (cr6.gt) goto loc_82D051D0;
loc_82D05414:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D05428;
	sub_8259CB28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d05448
	if (cr6.lt) goto loc_82D05448;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D05448;
	sub_825952B8(ctx, base);
loc_82D05448:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838ae2a8
	ctx.lr = 0x82D05450;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82d04b60
	ctx.lr = 0x82D05458;
	sub_82D04B60(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d04b60
	ctx.lr = 0x82D05460;
	sub_82D04B60(ctx, base);
loc_82D05460:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82D05470:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D0547C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D0547C"))) PPC_WEAK_FUNC(sub_82D0547C);
PPC_FUNC_IMPL(__imp__sub_82D0547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05480"))) PPC_WEAK_FUNC(sub_82D05480);
PPC_FUNC_IMPL(__imp__sub_82D05480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D05488;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d055f8
	if (cr6.eq) goto loc_82D055F8;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,-1932
	ctx.r26.s64 = ctx.r11.s64 + -1932;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D054C0;
	sub_82574D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d05598
	if (cr6.eq) goto loc_82D05598;
	// li r23,2
	ctx.r23.s64 = 2;
loc_82D054D8:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D054F8;
	sub_8259CB28(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D05518;
	sub_8259CB28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82D05524;
	sub_8291FDC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d05540
	if (cr6.lt) goto loc_82D05540;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D05540;
	sub_825952B8(ctx, base);
loc_82D05540:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82d05568
	if (cr6.lt) goto loc_82D05568;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82D05568;
	sub_825952B8(ctx, base);
loc_82D05568:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D0558C;
	sub_82574D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d054d8
	if (!cr6.eq) goto loc_82D054D8;
loc_82D05598:
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// subf r6,r30,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x8259cb28
	ctx.lr = 0x82D055BC;
	sub_8259CB28(ctx, base);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82D055DC;
	sub_8259CB28(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82D055E8;
	sub_8291FDC8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82D055F0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82D055F8;
	sub_8387E8E0(ctx, base);
loc_82D055F8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D05600"))) PPC_WEAK_FUNC(sub_82D05600);
PPC_FUNC_IMPL(__imp__sub_82D05600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// cmpwi cr6,r3,54
	cr6.compare<int32_t>(ctx.r3.s32, 54, xer);
	// addi r11,r11,-31400
	ctx.r11.s64 = ctx.r11.s64 + -31400;
	// beq cr6,0x82d0561c
	if (cr6.eq) goto loc_82D0561C;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82D0561C:
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05624"))) PPC_WEAK_FUNC(sub_82D05624);
PPC_FUNC_IMPL(__imp__sub_82D05624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05628"))) PPC_WEAK_FUNC(sub_82D05628);
PPC_FUNC_IMPL(__imp__sub_82D05628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// cmplwi cr6,r3,95
	cr6.compare<uint32_t>(ctx.r3.u32, 95, xer);
	// addi r11,r11,-31400
	ctx.r11.s64 = ctx.r11.s64 + -31400;
	// blt cr6,0x82d05640
	if (cr6.lt) goto loc_82D05640;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// blr 
	return;
loc_82D05640:
	// cmplwi cr6,r3,90
	cr6.compare<uint32_t>(ctx.r3.u32, 90, xer);
	// blt cr6,0x82d05650
	if (cr6.lt) goto loc_82D05650;
	// addi r3,r11,188
	ctx.r3.s64 = ctx.r11.s64 + 188;
	// blr 
	return;
loc_82D05650:
	// cmplwi cr6,r3,80
	cr6.compare<uint32_t>(ctx.r3.u32, 80, xer);
	// blt cr6,0x82d05660
	if (cr6.lt) goto loc_82D05660;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// blr 
	return;
loc_82D05660:
	// cmplwi cr6,r3,70
	cr6.compare<uint32_t>(ctx.r3.u32, 70, xer);
	// blt cr6,0x82d05670
	if (cr6.lt) goto loc_82D05670;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// blr 
	return;
loc_82D05670:
	// cmplwi cr6,r3,60
	cr6.compare<uint32_t>(ctx.r3.u32, 60, xer);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05684"))) PPC_WEAK_FUNC(sub_82D05684);
PPC_FUNC_IMPL(__imp__sub_82D05684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05688"))) PPC_WEAK_FUNC(sub_82D05688);
PPC_FUNC_IMPL(__imp__sub_82D05688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// addi r11,r11,-31400
	ctx.r11.s64 = ctx.r11.s64 + -31400;
	// blt cr6,0x82d056a0
	if (cr6.lt) goto loc_82D056A0;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// blr 
	return;
loc_82D056A0:
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// blt cr6,0x82d056b0
	if (cr6.lt) goto loc_82D056B0;
	// addi r3,r11,188
	ctx.r3.s64 = ctx.r11.s64 + 188;
	// blr 
	return;
loc_82D056B0:
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x82d056c0
	if (cr6.lt) goto loc_82D056C0;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// blr 
	return;
loc_82D056C0:
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x82d056d0
	if (cr6.lt) goto loc_82D056D0;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// blr 
	return;
loc_82D056D0:
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D056E4"))) PPC_WEAK_FUNC(sub_82D056E4);
PPC_FUNC_IMPL(__imp__sub_82D056E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D056E8"))) PPC_WEAK_FUNC(sub_82D056E8);
PPC_FUNC_IMPL(__imp__sub_82D056E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// addi r11,r11,-31400
	ctx.r11.s64 = ctx.r11.s64 + -31400;
	// blt cr6,0x82d05700
	if (cr6.lt) goto loc_82D05700;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// blr 
	return;
loc_82D05700:
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82d05710
	if (cr6.lt) goto loc_82D05710;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// blr 
	return;
loc_82D05710:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05724"))) PPC_WEAK_FUNC(sub_82D05724);
PPC_FUNC_IMPL(__imp__sub_82D05724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05728"))) PPC_WEAK_FUNC(sub_82D05728);
PPC_FUNC_IMPL(__imp__sub_82D05728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// addi r11,r11,-31400
	ctx.r11.s64 = ctx.r11.s64 + -31400;
	// blt cr6,0x82d05740
	if (cr6.lt) goto loc_82D05740;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// blr 
	return;
loc_82D05740:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05754"))) PPC_WEAK_FUNC(sub_82D05754);
PPC_FUNC_IMPL(__imp__sub_82D05754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05758"))) PPC_WEAK_FUNC(sub_82D05758);
PPC_FUNC_IMPL(__imp__sub_82D05758) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83104868
	ctx.lr = 0x82D05788;
	sub_83104868(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-980
	ctx.r9.s64 = ctx.r10.s64 + -980;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D057B4"))) PPC_WEAK_FUNC(sub_82D057B4);
PPC_FUNC_IMPL(__imp__sub_82D057B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D057B8"))) PPC_WEAK_FUNC(sub_82D057B8);
PPC_FUNC_IMPL(__imp__sub_82D057B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-980
	ctx.r10.s64 = ctx.r11.s64 + -980;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83103f60
	ctx.lr = 0x82D057E4;
	sub_83103F60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d057fc
	if (cr6.eq) goto loc_82D057FC;
	// bl 0x82416268
	ctx.lr = 0x82D057F8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D057FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05814"))) PPC_WEAK_FUNC(sub_82D05814);
PPC_FUNC_IMPL(__imp__sub_82D05814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05818"))) PPC_WEAK_FUNC(sub_82D05818);
PPC_FUNC_IMPL(__imp__sub_82D05818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-31108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05824"))) PPC_WEAK_FUNC(sub_82D05824);
PPC_FUNC_IMPL(__imp__sub_82D05824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05828"))) PPC_WEAK_FUNC(sub_82D05828);
PPC_FUNC_IMPL(__imp__sub_82D05828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d05884
	if (!cr6.eq) goto loc_82D05884;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
loc_82D05844:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d05858
	if (!cr6.lt) goto loc_82D05858;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d05878
	goto loc_82D05878;
loc_82D05858:
	// lbz r8,21(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d05870
	if (cr6.eq) goto loc_82D05870;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d05870
	if (!cr6.lt) goto loc_82D05870;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82D05870:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D05878:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d05844
	if (cr6.eq) goto loc_82D05844;
loc_82D05884:
	// lbz r11,21(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0589c
	if (cr6.eq) goto loc_82D0589C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82d058a0
	goto loc_82D058A0;
loc_82D0589C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82D058A0:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d058d8
	if (!cr6.eq) goto loc_82D058D8;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
loc_82D058B0:
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d058c8
	if (!cr6.lt) goto loc_82D058C8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d058cc
	goto loc_82D058CC;
loc_82D058C8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D058CC:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d058b0
	if (cr6.eq) goto loc_82D058B0;
loc_82D058D8:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D058E4"))) PPC_WEAK_FUNC(sub_82D058E4);
PPC_FUNC_IMPL(__imp__sub_82D058E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D058E8"))) PPC_WEAK_FUNC(sub_82D058E8);
PPC_FUNC_IMPL(__imp__sub_82D058E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d05944
	if (!cr6.eq) goto loc_82D05944;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82D05904:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d05918
	if (!cr6.lt) goto loc_82D05918;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d05938
	goto loc_82D05938;
loc_82D05918:
	// lbz r8,33(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d05930
	if (cr6.eq) goto loc_82D05930;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d05930
	if (!cr6.lt) goto loc_82D05930;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82D05930:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D05938:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d05904
	if (cr6.eq) goto loc_82D05904;
loc_82D05944:
	// lbz r11,33(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0595c
	if (cr6.eq) goto loc_82D0595C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82d05960
	goto loc_82D05960;
loc_82D0595C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82D05960:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d05998
	if (!cr6.eq) goto loc_82D05998;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82D05970:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d05988
	if (!cr6.lt) goto loc_82D05988;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d0598c
	goto loc_82D0598C;
loc_82D05988:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D0598C:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d05970
	if (cr6.eq) goto loc_82D05970;
loc_82D05998:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D059A4"))) PPC_WEAK_FUNC(sub_82D059A4);
PPC_FUNC_IMPL(__imp__sub_82D059A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D059A8"))) PPC_WEAK_FUNC(sub_82D059A8);
PPC_FUNC_IMPL(__imp__sub_82D059A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d05a04
	if (!cr6.eq) goto loc_82D05A04;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82D059C4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d059d8
	if (!cr6.lt) goto loc_82D059D8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d059f8
	goto loc_82D059F8;
loc_82D059D8:
	// lbz r8,25(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d059f0
	if (cr6.eq) goto loc_82D059F0;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d059f0
	if (!cr6.lt) goto loc_82D059F0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82D059F0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D059F8:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d059c4
	if (cr6.eq) goto loc_82D059C4;
loc_82D05A04:
	// lbz r11,25(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d05a1c
	if (cr6.eq) goto loc_82D05A1C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82d05a20
	goto loc_82D05A20;
loc_82D05A1C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82D05A20:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d05a58
	if (!cr6.eq) goto loc_82D05A58;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82D05A30:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d05a48
	if (!cr6.lt) goto loc_82D05A48;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d05a4c
	goto loc_82D05A4C;
loc_82D05A48:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D05A4C:
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d05a30
	if (cr6.eq) goto loc_82D05A30;
loc_82D05A58:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05A64"))) PPC_WEAK_FUNC(sub_82D05A64);
PPC_FUNC_IMPL(__imp__sub_82D05A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05A68"))) PPC_WEAK_FUNC(sub_82D05A68);
PPC_FUNC_IMPL(__imp__sub_82D05A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D05A70;
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
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d05af4
	if (!cr6.eq) goto loc_82D05AF4;
	// lhz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82D05AA8:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d05ac4
	if (cr6.eq) goto loc_82D05AC4;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82d05ad0
	goto loc_82D05AD0;
loc_82D05AC4:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82D05AD0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d05ae4
	if (cr6.eq) goto loc_82D05AE4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d05ae8
	goto loc_82D05AE8;
loc_82D05AE4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D05AE8:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d05aa8
	if (cr6.eq) goto loc_82D05AA8;
loc_82D05AF4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d05b54
	if (cr6.eq) goto loc_82D05B54;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d05b4c
	if (!cr6.eq) goto loc_82D05B4C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83587190
	ctx.lr = 0x82D05B30;
	sub_83587190(ctx, base);
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
loc_82D05B4C:
	// bl 0x833e7410
	ctx.lr = 0x82D05B50;
	sub_833E7410(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D05B54:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d05b98
	if (!cr6.lt) goto loc_82D05B98;
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
	// bl 0x83587190
	ctx.lr = 0x82D05B7C;
	sub_83587190(ctx, base);
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
loc_82D05B98:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D05BAC;
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

__attribute__((alias("__imp__sub_82D05BC4"))) PPC_WEAK_FUNC(sub_82D05BC4);
PPC_FUNC_IMPL(__imp__sub_82D05BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05BC8"))) PPC_WEAK_FUNC(sub_82D05BC8);
PPC_FUNC_IMPL(__imp__sub_82D05BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d05c10
	if (cr6.eq) goto loc_82D05C10;
loc_82D05BF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83456c38
	ctx.lr = 0x82D05C04;
	sub_83456C38(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d05bf0
	if (!cr6.eq) goto loc_82D05BF0;
loc_82D05C10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05C28"))) PPC_WEAK_FUNC(sub_82D05C28);
PPC_FUNC_IMPL(__imp__sub_82D05C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d05c70
	if (cr6.eq) goto loc_82D05C70;
loc_82D05C50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x833ccd48
	ctx.lr = 0x82D05C64;
	sub_833CCD48(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d05c50
	if (!cr6.eq) goto loc_82D05C50;
loc_82D05C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D05C88"))) PPC_WEAK_FUNC(sub_82D05C88);
PPC_FUNC_IMPL(__imp__sub_82D05C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d05cc8
	if (!cr6.eq) goto loc_82D05CC8;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
loc_82D05CA0:
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d05cb4
	if (!cr6.lt) goto loc_82D05CB4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d05cbc
	goto loc_82D05CBC;
loc_82D05CB4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D05CBC:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d05ca0
	if (cr6.eq) goto loc_82D05CA0;
loc_82D05CC8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d05cf8
	if (cr6.eq) goto loc_82D05CF8;
	// lhz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d05cf8
	if (cr6.lt) goto loc_82D05CF8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D05CF8:
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

__attribute__((alias("__imp__sub_82D05D0C"))) PPC_WEAK_FUNC(sub_82D05D0C);
PPC_FUNC_IMPL(__imp__sub_82D05D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D05D10"))) PPC_WEAK_FUNC(sub_82D05D10);
PPC_FUNC_IMPL(__imp__sub_82D05D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D05D18;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d05d54
	if (!cr6.eq) goto loc_82D05D54;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83587190
	ctx.lr = 0x82D05D48;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05D54:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d05d98
	if (!cr6.eq) goto loc_82D05D98;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d05e94
	if (!cr6.lt) goto loc_82D05E94;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83587190
	ctx.lr = 0x82D05D8C;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05D98:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82d05dd4
	if (!cr6.eq) goto loc_82D05DD4;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d05e94
	if (!cr6.lt) goto loc_82D05E94;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83587190
	ctx.lr = 0x82D05DC8;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05DD4:
	// lhz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82d05e38
	if (!cr6.gt) goto loc_82D05E38;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e7410
	ctx.lr = 0x82D05DF0;
	sub_833E7410(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82d05e34
	if (!cr6.lt) goto loc_82D05E34;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d05e80
	if (!cr6.eq) goto loc_82D05E80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D05E20:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83587190
	ctx.lr = 0x82D05E28;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05E34:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82D05E38:
	// bge cr6,0x82d05e94
	if (!cr6.lt) goto loc_82D05E94;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x82D05E48;
	sub_8330EE50(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82d05e60
	if (cr6.eq) goto loc_82D05E60;
	// lhz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d05e94
	if (!cr6.lt) goto loc_82D05E94;
loc_82D05E60:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d05e20
	if (cr6.eq) goto loc_82D05E20;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D05E80:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83587190
	ctx.lr = 0x82D05E88;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05E94:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d05a68
	ctx.lr = 0x82D05EA8;
	sub_82D05A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D05EC0"))) PPC_WEAK_FUNC(sub_82D05EC0);
PPC_FUNC_IMPL(__imp__sub_82D05EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D05EC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d05f04
	if (!cr6.eq) goto loc_82D05F04;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dba428
	ctx.lr = 0x82D05EF8;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05F04:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d05f48
	if (!cr6.eq) goto loc_82D05F48;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d06044
	if (!cr6.lt) goto loc_82D06044;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dba428
	ctx.lr = 0x82D05F3C;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05F48:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82d05f84
	if (!cr6.eq) goto loc_82D05F84;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d06044
	if (!cr6.lt) goto loc_82D06044;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dba428
	ctx.lr = 0x82D05F78;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05F84:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82d05fe8
	if (!cr6.gt) goto loc_82D05FE8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8349cc40
	ctx.lr = 0x82D05FA0;
	sub_8349CC40(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82d05fe4
	if (!cr6.lt) goto loc_82D05FE4;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d06030
	if (!cr6.eq) goto loc_82D06030;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D05FD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dba428
	ctx.lr = 0x82D05FD8;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D05FE4:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82D05FE8:
	// bge cr6,0x82d06044
	if (!cr6.lt) goto loc_82D06044;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ccd48
	ctx.lr = 0x82D05FF8;
	sub_833CCD48(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82d06010
	if (cr6.eq) goto loc_82D06010;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d06044
	if (!cr6.lt) goto loc_82D06044;
loc_82D06010:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d05fd0
	if (cr6.eq) goto loc_82D05FD0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D06030:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82dba428
	ctx.lr = 0x82D06038;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D06044:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dba838
	ctx.lr = 0x82D06058;
	sub_82DBA838(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06070"))) PPC_WEAK_FUNC(sub_82D06070);
PPC_FUNC_IMPL(__imp__sub_82D06070) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D060A4;
	sub_82595718(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// beq 0x82d060e0
	if (cr0.eq) goto loc_82D060E0;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82D060E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D060F8"))) PPC_WEAK_FUNC(sub_82D060F8);
PPC_FUNC_IMPL(__imp__sub_82D060F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D06120;
	sub_82596FE8(ctx, base);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83571120
	ctx.lr = 0x82D06130;
	sub_83571120(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d06150
	if (cr6.eq) goto loc_82D06150;
	// bl 0x82597088
	ctx.lr = 0x82D06148;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d06158
	goto loc_82D06158;
loc_82D06150:
	// bl 0x82597088
	ctx.lr = 0x82D06154;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D06158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D06170"))) PPC_WEAK_FUNC(sub_82D06170);
PPC_FUNC_IMPL(__imp__sub_82D06170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D06198;
	sub_82596FE8(ctx, base);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d2a98
	ctx.lr = 0x82D061A8;
	sub_833D2A98(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d061e4
	if (cr6.eq) goto loc_82D061E4;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d061d4
	if (!cr6.eq) goto loc_82D061D4;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83103c68
	ctx.lr = 0x82D061CC;
	sub_83103C68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_82D061D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82D061DC;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d061f0
	goto loc_82D061F0;
loc_82D061E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82D061EC;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D061F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D06208"))) PPC_WEAK_FUNC(sub_82D06208);
PPC_FUNC_IMPL(__imp__sub_82D06208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// sth r4,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r4.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D06230;
	sub_82596FE8(ctx, base);
	// addi r5,r1,142
	ctx.r5.s64 = ctx.r1.s64 + 142;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d05c88
	ctx.lr = 0x82D06240;
	sub_82D05C88(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d06264
	if (cr6.eq) goto loc_82D06264;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82597088
	ctx.lr = 0x82D0625C;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82d0626c
	goto loc_82D0626C;
loc_82D06264:
	// bl 0x82597088
	ctx.lr = 0x82D06268;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D0626C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D06284"))) PPC_WEAK_FUNC(sub_82D06284);
PPC_FUNC_IMPL(__imp__sub_82D06284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06288"))) PPC_WEAK_FUNC(sub_82D06288);
PPC_FUNC_IMPL(__imp__sub_82D06288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r4,r4,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// lwz r30,22016(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22016);
	// bl 0x82d06208
	ctx.lr = 0x82D062B0;
	sub_82D06208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d062c4
	if (cr6.eq) goto loc_82D062C4;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x82d0d678
	ctx.lr = 0x82D062C0;
	sub_82D0D678(ctx, base);
	// b 0x82d062c8
	goto loc_82D062C8;
loc_82D062C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D062C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D062E0"))) PPC_WEAK_FUNC(sub_82D062E0);
PPC_FUNC_IMPL(__imp__sub_82D062E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D062E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r29,r5,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,22016(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22016);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82d06208
	ctx.lr = 0x82D06310;
	sub_82D06208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06324
	if (cr6.eq) goto loc_82D06324;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x82d0d678
	ctx.lr = 0x82D06320;
	sub_82D0D678(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82D06324:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d06350
	if (cr6.eq) goto loc_82D06350;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d06208
	ctx.lr = 0x82D06338;
	sub_82D06208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06350
	if (cr6.eq) goto loc_82D06350;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d0de60
	ctx.lr = 0x82D06350;
	sub_82D0DE60(ctx, base);
loc_82D06350:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06358"))) PPC_WEAK_FUNC(sub_82D06358);
PPC_FUNC_IMPL(__imp__sub_82D06358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D06360;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d059a8
	ctx.lr = 0x82D06378;
	sub_82D059A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d05c28
	ctx.lr = 0x82D0639C;
	sub_82D05C28(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c5a180
	ctx.lr = 0x82D063B0;
	sub_82C5A180(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D063BC"))) PPC_WEAK_FUNC(sub_82D063BC);
PPC_FUNC_IMPL(__imp__sub_82D063BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D063C0"))) PPC_WEAK_FUNC(sub_82D063C0);
PPC_FUNC_IMPL(__imp__sub_82D063C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D063C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D063E0;
	sub_82596FE8(ctx, base);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d2a98
	ctx.lr = 0x82D063F4;
	sub_833D2A98(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d06410
	if (cr6.eq) goto loc_82D06410;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d06358
	ctx.lr = 0x82D06410;
	sub_82D06358(ctx, base);
loc_82D06410:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82D06418;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06420"))) PPC_WEAK_FUNC(sub_82D06420);
PPC_FUNC_IMPL(__imp__sub_82D06420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d06478
	if (!cr6.eq) goto loc_82D06478;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
loc_82D06450:
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d06464
	if (!cr6.lt) goto loc_82D06464;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d0646c
	goto loc_82D0646C;
loc_82D06464:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D0646C:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d06450
	if (cr6.eq) goto loc_82D06450;
loc_82D06478:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d06494
	if (cr6.eq) goto loc_82D06494;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d064d0
	if (!cr6.lt) goto loc_82D064D0;
loc_82D06494:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82d06070
	ctx.lr = 0x82D064B0;
	sub_82D06070(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d05d10
	ctx.lr = 0x82D064C4;
	sub_82D05D10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82d064d4
	goto loc_82D064D4;
loc_82D064D0:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
loc_82D064D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D064EC"))) PPC_WEAK_FUNC(sub_82D064EC);
PPC_FUNC_IMPL(__imp__sub_82D064EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D064F0"))) PPC_WEAK_FUNC(sub_82D064F0);
PPC_FUNC_IMPL(__imp__sub_82D064F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d06548
	if (!cr6.eq) goto loc_82D06548;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D06520:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d06534
	if (!cr6.lt) goto loc_82D06534;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d0653c
	goto loc_82D0653C;
loc_82D06534:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D0653C:
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d06520
	if (cr6.eq) goto loc_82D06520;
loc_82D06548:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d06564
	if (cr6.eq) goto loc_82D06564;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d065ac
	if (!cr6.lt) goto loc_82D065AC;
loc_82D06564:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r8.u64);
	// bl 0x82f4c328
	ctx.lr = 0x82D0658C;
	sub_82F4C328(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d05ec0
	ctx.lr = 0x82D065A0;
	sub_82D05EC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82d065b0
	goto loc_82D065B0;
loc_82D065AC:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
loc_82D065B0:
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

__attribute__((alias("__imp__sub_82D065C8"))) PPC_WEAK_FUNC(sub_82D065C8);
PPC_FUNC_IMPL(__imp__sub_82D065C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D065D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D065EC;
	sub_82596FE8(ctx, base);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d2a98
	ctx.lr = 0x82D065FC;
	sub_833D2A98(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d0665c
	if (cr6.eq) goto loc_82D0665C;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0665c
	if (cr6.eq) goto loc_82D0665C;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83103bb8
	ctx.lr = 0x82D06620;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d06640
	if (cr6.eq) goto loc_82D06640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82D06634;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D06640:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83103e98
	ctx.lr = 0x82D06648;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d063c0
	ctx.lr = 0x82D0665C;
	sub_82D063C0(ctx, base);
loc_82D0665C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82D06664;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06670"))) PPC_WEAK_FUNC(sub_82D06670);
PPC_FUNC_IMPL(__imp__sub_82D06670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D06678;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D06694;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// bl 0x82d06208
	ctx.lr = 0x82D066A4;
	sub_82D06208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d066f0
	if (!cr6.eq) goto loc_82D066F0;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D066C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d066dc
	if (cr6.eq) goto loc_82D066DC;
	// bl 0x83a759f8
	ctx.lr = 0x82D066D4;
	sub_83A759F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d066e0
	goto loc_82D066E0;
loc_82D066DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D066E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d06420
	ctx.lr = 0x82D066EC;
	sub_82D06420(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82D066F0:
	// li r6,27
	ctx.r6.s64 = 27;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0d5c8
	ctx.lr = 0x82D06704;
	sub_82D0D5C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x82D0670C;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06714"))) PPC_WEAK_FUNC(sub_82D06714);
PPC_FUNC_IMPL(__imp__sub_82D06714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06718"))) PPC_WEAK_FUNC(sub_82D06718);
PPC_FUNC_IMPL(__imp__sub_82D06718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D06720;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d06748
	if (cr6.lt) goto loc_82D06748;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82d0674c
	goto loc_82D0674C;
loc_82D06748:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D0674C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// li r9,21
	ctx.r9.s64 = 21;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r30,r11,-1076
	ctx.r30.s64 = ctx.r11.s64 + -1076;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D06778;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82d06794
	if (cr6.lt) goto loc_82D06794;
	// cmplwi cr6,r29,20
	cr6.compare<uint32_t>(ctx.r29.u32, 20, xer);
	// bgt cr6,0x82d06794
	if (cr6.gt) goto loc_82D06794;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,14
	ctx.r5.s64 = 14;
	// b 0x82d0679c
	goto loc_82D0679C;
loc_82D06794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,11
	ctx.r5.s64 = 11;
loc_82D0679C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82D067A4;
	sub_825A1EB8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,22024
	ctx.r9.s64 = ctx.r11.s64 + 22024;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D067B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d067b8
	if (!cr6.eq) goto loc_82D067B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82D067DC;
	sub_825A1EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D067E4"))) PPC_WEAK_FUNC(sub_82D067E4);
PPC_FUNC_IMPL(__imp__sub_82D067E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D067E8"))) PPC_WEAK_FUNC(sub_82D067E8);
PPC_FUNC_IMPL(__imp__sub_82D067E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D067F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// lwz r31,-31108(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d06864
	if (cr6.eq) goto loc_82D06864;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d06864
	if (cr6.eq) goto loc_82D06864;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82d06864
	if (cr6.eq) goto loc_82D06864;
loc_82D06824:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x833ccd48
	ctx.lr = 0x82D06830;
	sub_833CCD48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82d06170
	ctx.lr = 0x82D0683C;
	sub_82D06170(ctx, base);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83103e20
	ctx.lr = 0x82D06844;
	sub_83103E20(ctx, base);
	// lwz r3,-31108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82d065c8
	ctx.lr = 0x82D06850;
	sub_82D065C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,-31108(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d06824
	if (!cr6.eq) goto loc_82D06824;
loc_82D06864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0686C"))) PPC_WEAK_FUNC(sub_82D0686C);
PPC_FUNC_IMPL(__imp__sub_82D0686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06870"))) PPC_WEAK_FUNC(sub_82D06870);
PPC_FUNC_IMPL(__imp__sub_82D06870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D06878;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D06894;
	sub_82596FE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d060f8
	ctx.lr = 0x82D068A0;
	sub_82D060F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d068c0
	if (cr6.eq) goto loc_82D068C0;
loc_82D068AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82D068B4;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D068C0:
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d2a98
	ctx.lr = 0x82D068D4;
	sub_833D2A98(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d068ac
	if (!cr6.eq) goto loc_82D068AC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d06718
	ctx.lr = 0x82D06908;
	sub_82D06718(ctx, base);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D06924;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0694c
	if (cr6.eq) goto loc_82D0694C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d06940
	if (!cr6.lt) goto loc_82D06940;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D06940:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d05758
	ctx.lr = 0x82D06948;
	sub_82D05758(ctx, base);
	// b 0x82d06950
	goto loc_82D06950;
loc_82D0694C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D06950:
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x82D06958;
	sub_83103B18(ctx, base);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d064f0
	ctx.lr = 0x82D06964;
	sub_82D064F0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D06974;
	sub_8387E8E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82D0697C;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06988"))) PPC_WEAK_FUNC(sub_82D06988);
PPC_FUNC_IMPL(__imp__sub_82D06988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D06990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d058e8
	ctx.lr = 0x82D069A8;
	sub_82D058E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d05bc8
	ctx.lr = 0x82D069CC;
	sub_82D05BC8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e5a698
	ctx.lr = 0x82D069E0;
	sub_82E5A698(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D069EC"))) PPC_WEAK_FUNC(sub_82D069EC);
PPC_FUNC_IMPL(__imp__sub_82D069EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D069F0"))) PPC_WEAK_FUNC(sub_82D069F0);
PPC_FUNC_IMPL(__imp__sub_82D069F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D069F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,48
	ctx.r25.s64 = ctx.r3.s64 + 48;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D06A10;
	sub_82596FE8(ctx, base);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83571120
	ctx.lr = 0x82D06A24;
	sub_83571120(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d06b00
	if (cr6.eq) goto loc_82D06B00;
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d06af4
	if (cr6.eq) goto loc_82D06AF4;
	// li r27,27
	ctx.r27.s64 = 27;
loc_82D06A48:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d05c88
	ctx.lr = 0x82D06A58;
	sub_82D05C88(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d06ae4
	if (cr6.eq) goto loc_82D06AE4;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d0d6c8
	ctx.lr = 0x82D06A70;
	sub_82D0D6C8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x825832e8
	ctx.lr = 0x82D06A78;
	sub_825832E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d06ae4
	if (!cr6.eq) goto loc_82D06AE4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d06ac0
	if (cr6.eq) goto loc_82D06AC0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D06A9C;
	sub_82595150(ctx, base);
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d06ab8
	if (cr6.eq) goto loc_82D06AB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0dc70
	ctx.lr = 0x82D06AB0;
	sub_82D0DC70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82D06AB8;
	sub_82416268(ctx, base);
loc_82D06AB8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D06AC0;
	sub_82595170(ctx, base);
loc_82D06AC0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d05828
	ctx.lr = 0x82D06AD0;
	sub_82D05828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82d0e798
	ctx.lr = 0x82D06AE4;
	sub_82D0E798(ctx, base);
loc_82D06AE4:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d06a48
	if (!cr6.eq) goto loc_82D06A48;
loc_82D06AF4:
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d06988
	ctx.lr = 0x82D06B00;
	sub_82D06988(ctx, base);
loc_82D06B00:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82597088
	ctx.lr = 0x82D06B08;
	sub_82597088(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06B10"))) PPC_WEAK_FUNC(sub_82D06B10);
PPC_FUNC_IMPL(__imp__sub_82D06B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D06B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,48
	ctx.r26.s64 = ctx.r3.s64 + 48;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D06B34;
	sub_82596FE8(ctx, base);
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83571120
	ctx.lr = 0x82D06B48;
	sub_83571120(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d06c40
	if (!cr6.eq) goto loc_82D06C40;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d2a98
	ctx.lr = 0x82D06B68;
	sub_833D2A98(ctx, base);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d06b84
	if (cr6.eq) goto loc_82D06B84;
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d06c40
	if (cr6.eq) goto loc_82D06C40;
loc_82D06B84:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x831049a8
	ctx.lr = 0x82D06BA4;
	sub_831049A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825832e8
	ctx.lr = 0x82D06BAC;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06c08
	if (cr6.eq) goto loc_82D06C08;
loc_82D06BB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104a50
	ctx.lr = 0x82D06BC4;
	sub_83104A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06bf8
	if (cr6.eq) goto loc_82D06BF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104ab8
	ctx.lr = 0x82D06BDC;
	sub_83104AB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d06670
	ctx.lr = 0x82D06BEC;
	sub_82D06670(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82badd90
	ctx.lr = 0x82D06BF8;
	sub_82BADD90(ctx, base);
loc_82D06BF8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82d06bb8
	if (cr6.lt) goto loc_82D06BB8;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82D06C08:
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c1e790
	ctx.lr = 0x82D06C14;
	sub_82C1E790(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a11f50
	ctx.lr = 0x82D06C1C;
	sub_82A11F50(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a5c688
	ctx.lr = 0x82D06C24;
	sub_82A5C688(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d06c40
	if (cr6.eq) goto loc_82D06C40;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D06C40;
	sub_825952B8(ctx, base);
loc_82D06C40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x82D06C48;
	sub_82597088(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06C50"))) PPC_WEAK_FUNC(sub_82D06C50);
PPC_FUNC_IMPL(__imp__sub_82D06C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82d06ca0
	if (cr6.eq) goto loc_82D06CA0;
loc_82D06C7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d069f0
	ctx.lr = 0x82D06C88;
	sub_82D069F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82D06C90;
	sub_83456C38(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d06c7c
	if (!cr6.eq) goto loc_82D06C7C;
loc_82D06CA0:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82596f90
	ctx.lr = 0x82D06CA8;
	sub_82596F90(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c5a180
	ctx.lr = 0x82D06CBC;
	sub_82C5A180(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D06CD0;
	sub_825952B8(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e5a698
	ctx.lr = 0x82D06CE4;
	sub_82E5A698(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x825952b8
	ctx.lr = 0x82D06CF4;
	sub_825952B8(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x82D06D08;
	sub_82D0E798(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x82D06D18;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_82D06D30"))) PPC_WEAK_FUNC(sub_82D06D30);
PPC_FUNC_IMPL(__imp__sub_82D06D30) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8381b9d0
	ctx.lr = 0x82D06D50;
	sub_8381B9D0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b629b0
	ctx.lr = 0x82D06D60;
	sub_82B629B0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8387b310
	ctx.lr = 0x82D06D70;
	sub_8387B310(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82596fa8
	ctx.lr = 0x82D06D78;
	sub_82596FA8(ctx, base);
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

__attribute__((alias("__imp__sub_82D06D90"))) PPC_WEAK_FUNC(sub_82D06D90);
PPC_FUNC_IMPL(__imp__sub_82D06D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D06D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// lwz r11,-31108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d06e1c
	if (!cr6.eq) goto loc_82D06E1C;
	// li r29,27
	ctx.r29.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D06DC4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06e1c
	if (cr6.eq) goto loc_82D06E1C;
	// bl 0x82d06d30
	ctx.lr = 0x82D06DD0;
	sub_82D06D30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06e1c
	if (cr6.eq) goto loc_82D06E1C;
	// lwz r11,-31108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d06e18
	if (cr6.eq) goto loc_82D06E18;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D06DF8;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d06c50
	ctx.lr = 0x82D06E00;
	sub_82D06C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D06E08;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D06E10;
	sub_82595170(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D06E18:
	// stw r31,-31108(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31108, ctx.r31.u32);
loc_82D06E1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06E24"))) PPC_WEAK_FUNC(sub_82D06E24);
PPC_FUNC_IMPL(__imp__sub_82D06E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06E28"))) PPC_WEAK_FUNC(sub_82D06E28);
PPC_FUNC_IMPL(__imp__sub_82D06E28) {
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
	// bl 0x8310d588
	ctx.lr = 0x82D06E3C;
	sub_8310D588(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-920
	ctx.r9.s64 = ctx.r11.s64 + -920;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d05818
	ctx.lr = 0x82D06E50;
	sub_82D05818(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d06870
	ctx.lr = 0x82D06E58;
	sub_82D06870(ctx, base);
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

__attribute__((alias("__imp__sub_82D06E6C"))) PPC_WEAK_FUNC(sub_82D06E6C);
PPC_FUNC_IMPL(__imp__sub_82D06E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06E70"))) PPC_WEAK_FUNC(sub_82D06E70);
PPC_FUNC_IMPL(__imp__sub_82D06E70) {
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
	// bl 0x8310d588
	ctx.lr = 0x82D06E84;
	sub_8310D588(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-920
	ctx.r9.s64 = ctx.r11.s64 + -920;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d05818
	ctx.lr = 0x82D06E98;
	sub_82D05818(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d060f8
	ctx.lr = 0x82D06EA0;
	sub_82D060F8(ctx, base);
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

__attribute__((alias("__imp__sub_82D06EB4"))) PPC_WEAK_FUNC(sub_82D06EB4);
PPC_FUNC_IMPL(__imp__sub_82D06EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06EB8"))) PPC_WEAK_FUNC(sub_82D06EB8);
PPC_FUNC_IMPL(__imp__sub_82D06EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D06EC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r31,22
	ctx.r31.s64 = 22;
	// addi r11,r11,-920
	ctx.r11.s64 = ctx.r11.s64 + -920;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82D06ED4:
	// lwzu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d05818
	ctx.lr = 0x82D06EDC;
	sub_82D05818(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d069f0
	ctx.lr = 0x82D06EE4;
	sub_82D069F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82d06ed4
	if (!cr0.eq) goto loc_82D06ED4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06EF4"))) PPC_WEAK_FUNC(sub_82D06EF4);
PPC_FUNC_IMPL(__imp__sub_82D06EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06EF8"))) PPC_WEAK_FUNC(sub_82D06EF8);
PPC_FUNC_IMPL(__imp__sub_82D06EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D06F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d0e298
	ctx.lr = 0x82D06F10;
	sub_82D0E298(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06f8c
	if (cr6.eq) goto loc_82D06F8C;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bge cr6,0x82d06f38
	if (!cr6.lt) goto loc_82D06F38;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82d06f3c
	goto loc_82D06F3C;
loc_82D06F38:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D06F3C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D06F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D06F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D06F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D06F94"))) PPC_WEAK_FUNC(sub_82D06F94);
PPC_FUNC_IMPL(__imp__sub_82D06F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D06F98"))) PPC_WEAK_FUNC(sub_82D06F98);
PPC_FUNC_IMPL(__imp__sub_82D06F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D06FA0"))) PPC_WEAK_FUNC(sub_82D06FA0);
PPC_FUNC_IMPL(__imp__sub_82D06FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D06FA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82d06fc8
	if (!cr6.eq) goto loc_82D06FC8;
loc_82D06FBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D06FC8:
	// li r31,27
	ctx.r31.s64 = 27;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D06FDC;
	sub_825952B8(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x825952b8
	ctx.lr = 0x82D06FEC;
	sub_825952B8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D06FF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d06ff0
	if (!cr6.eq) goto loc_82D06FF0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x82595718
	ctx.lr = 0x82D07020;
	sub_82595718(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d06fbc
	if (cr6.eq) goto loc_82D06FBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stbx r11,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r11.u8);
	// beq cr6,0x82d0704c
	if (cr6.eq) goto loc_82D0704C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D0704C;
	sub_831CE980(ctx, base);
loc_82D0704C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D07058"))) PPC_WEAK_FUNC(sub_82D07058);
PPC_FUNC_IMPL(__imp__sub_82D07058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07060"))) PPC_WEAK_FUNC(sub_82D07060);
PPC_FUNC_IMPL(__imp__sub_82D07060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07068"))) PPC_WEAK_FUNC(sub_82D07068);
PPC_FUNC_IMPL(__imp__sub_82D07068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// beq cr6,0x82d07094
	if (cr6.eq) goto loc_82D07094;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x82d07094
	if (cr6.eq) goto loc_82D07094;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// beq cr6,0x82d07094
	if (cr6.eq) goto loc_82D07094;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82D07094:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f13,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d070b8
	if (!cr6.lt) goto loc_82D070B8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D070B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D070DC"))) PPC_WEAK_FUNC(sub_82D070DC);
PPC_FUNC_IMPL(__imp__sub_82D070DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D070E0"))) PPC_WEAK_FUNC(sub_82D070E0);
PPC_FUNC_IMPL(__imp__sub_82D070E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// ori r4,r10,16
	ctx.r4.u64 = ctx.r10.u64 | 16;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D070F8"))) PPC_WEAK_FUNC(sub_82D070F8);
PPC_FUNC_IMPL(__imp__sub_82D070F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r4,r4,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D07118"))) PPC_WEAK_FUNC(sub_82D07118);
PPC_FUNC_IMPL(__imp__sub_82D07118) {
	PPC_FUNC_PROLOGUE();
	// stb r4,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07120"))) PPC_WEAK_FUNC(sub_82D07120);
PPC_FUNC_IMPL(__imp__sub_82D07120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07130"))) PPC_WEAK_FUNC(sub_82D07130);
PPC_FUNC_IMPL(__imp__sub_82D07130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07140"))) PPC_WEAK_FUNC(sub_82D07140);
PPC_FUNC_IMPL(__imp__sub_82D07140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07150"))) PPC_WEAK_FUNC(sub_82D07150);
PPC_FUNC_IMPL(__imp__sub_82D07150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D07158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r9,-1840
	ctx.r8.s64 = ctx.r9.s64 + -1840;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stb r30,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r30.u8);
	// stb r30,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r30.u8);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// stw r30,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// bl 0x82d0e298
	ctx.lr = 0x82D071E0;
	sub_82D0E298(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82d07248
	if (cr6.eq) goto loc_82D07248;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D0721C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D07244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D07248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D07250"))) PPC_WEAK_FUNC(sub_82D07250);
PPC_FUNC_IMPL(__imp__sub_82D07250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D07258;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,48(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82d0c5c8
	ctx.lr = 0x82D07278;
	sub_82D0C5C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D07284;
	sub_82D0C5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d072f0
	if (cr6.eq) goto loc_82D072F0;
loc_82D07290:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d072d0
	if (!cr6.eq) goto loc_82D072D0;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d072fc
	if (cr6.eq) goto loc_82D072FC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d072c4
	if (cr6.eq) goto loc_82D072C4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d072cc
	if (cr6.eq) goto loc_82D072CC;
loc_82D072C4:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82d072d0
	if (!cr6.eq) goto loc_82D072D0;
loc_82D072CC:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D072D0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D072E4;
	sub_82D0C5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d07290
	if (!cr6.eq) goto loc_82D07290;
loc_82D072F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D072FC:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D07314;
	sub_82595718(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stbx r10,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r10.u8);
	// beq cr6,0x82d073ec
	if (cr6.eq) goto loc_82D073EC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d073dc
	if (cr6.eq) goto loc_82D073DC;
	// lwz r30,48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,32
	ctx.r28.s64 = 32;
loc_82D07340:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D0734C;
	sub_82D0C5F8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d073b8
	if (!cr6.eq) goto loc_82D073B8;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d073ec
	if (cr6.eq) goto loc_82D073EC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0738c
	if (cr6.eq) goto loc_82D0738C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d0738c
	if (!cr6.eq) goto loc_82D0738C;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82d07340
	goto loc_82D07340;
loc_82D0738C:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82d073b8
	if (!cr6.eq) goto loc_82D073B8;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D073A8;
	sub_831CE980(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82d07340
	goto loc_82D07340;
loc_82D073B8:
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D073CC;
	sub_831CE980(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82d07340
	goto loc_82D07340;
loc_82D073DC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D073EC;
	sub_831CE980(ctx, base);
loc_82D073EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D073F8"))) PPC_WEAK_FUNC(sub_82D073F8);
PPC_FUNC_IMPL(__imp__sub_82D073F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82D07400;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r26,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// bl 0x82d0c5c8
	ctx.lr = 0x82D07434;
	sub_82D0C5C8(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
loc_82D07438:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D07444;
	sub_82D0C5F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d07488
	if (!cr6.eq) goto loc_82D07488;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d074e8
	if (cr6.eq) goto loc_82D074E8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d07474
	if (cr6.eq) goto loc_82D07474;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82d07438
	if (!cr6.eq) goto loc_82D07438;
loc_82D07474:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// b 0x82d07438
	goto loc_82D07438;
loc_82D07488:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc70
	ctx.lr = 0x82D07490;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d074bc
	if (cr6.eq) goto loc_82D074BC;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// b 0x82d07438
	goto loc_82D07438;
loc_82D074BC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d074d8
	if (!cr6.eq) goto loc_82D074D8;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
loc_82D074D8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// b 0x82d07438
	goto loc_82D07438;
loc_82D074E8:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// beq 0x82d0768c
	if (cr0.eq) goto loc_82D0768C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D0750C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// ori r8,r9,21845
	ctx.r8.u64 = ctx.r9.u64 | 21845;
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82d07530
	if (cr6.gt) goto loc_82D07530;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82d07534
	goto loc_82D07534;
loc_82D07530:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82D07534:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D07548;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d07580
	if (cr6.eq) goto loc_82D07580;
	// addic. r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82d07578
	if (cr0.lt) goto loc_82D07578;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,11
	ctx.r10.s64 = 11;
loc_82D07568:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d07568
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D07568;
loc_82D07578:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d07584
	goto loc_82D07584;
loc_82D07580:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82D07584:
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r23,8
	ctx.r23.s64 = 8;
	// li r24,7
	ctx.r24.s64 = 7;
	// li r27,5
	ctx.r27.s64 = 5;
loc_82D075A0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D075AC;
	sub_82D0C5F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d07604
	if (!cr6.eq) goto loc_82D07604;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d0766c
	if (cr6.eq) goto loc_82D0766C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d075e4
	if (!cr6.eq) goto loc_82D075E4;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d075a0
	goto loc_82D075A0;
loc_82D075E4:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82d075a0
	if (!cr6.eq) goto loc_82D075A0;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d075a0
	goto loc_82D075A0;
loc_82D07604:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc70
	ctx.lr = 0x82D0760C;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07634
	if (cr6.eq) goto loc_82D07634;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d075a0
	goto loc_82D075A0;
loc_82D07634:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d07650
	if (cr6.eq) goto loc_82D07650;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82d075a0
	goto loc_82D075A0;
loc_82D07650:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d075a0
	goto loc_82D075A0;
loc_82D0766C:
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D0768C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D0768C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D07694"))) PPC_WEAK_FUNC(sub_82D07694);
PPC_FUNC_IMPL(__imp__sub_82D07694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07698"))) PPC_WEAK_FUNC(sub_82D07698);
PPC_FUNC_IMPL(__imp__sub_82D07698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82D076A0;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d076d0
	if (cr6.gt) goto loc_82D076D0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82d076d4
	goto loc_82D076D4;
loc_82D076D0:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82D076D4:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D076E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq cr6,0x82d07724
	if (cr6.eq) goto loc_82D07724;
	// addic. r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82d0771c
	if (cr0.lt) goto loc_82D0771C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,11
	ctx.r10.s64 = 11;
loc_82D0770C:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d0770c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0770C;
loc_82D0771C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d07728
	goto loc_82D07728;
loc_82D07724:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82D07728:
	// stw r31,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// bl 0x82d0c5c8
	ctx.lr = 0x82D0774C;
	sub_82D0C5C8(ctx, base);
	// li r18,8
	ctx.r18.s64 = 8;
	// li r19,7
	ctx.r19.s64 = 7;
	// li r20,10
	ctx.r20.s64 = 10;
	// li r21,6
	ctx.r21.s64 = 6;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r22,2
	ctx.r22.s64 = 2;
loc_82D07764:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D07770;
	sub_82D0C5F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d07844
	if (!cr6.eq) goto loc_82D07844;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d07a7c
	if (cr6.eq) goto loc_82D07A7C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d077b0
	if (!cr6.eq) goto loc_82D077B0;
	// stw r18,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r18.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82d07808
	goto loc_82D07808;
loc_82D077B0:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82d077d8
	if (!cr6.eq) goto loc_82D077D8;
	// stw r19,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r19.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d07808
	goto loc_82D07808;
loc_82D077D8:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82d077f8
	if (!cr6.eq) goto loc_82D077F8;
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82d07808
	goto loc_82D07808;
loc_82D077F8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82d07808
	if (cr6.eq) goto loc_82D07808;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82d0783c
	if (!cr6.eq) goto loc_82D0783C;
loc_82D07808:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x82d0783c
	if (!cr6.gt) goto loc_82D0783C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0783c
	if (cr6.eq) goto loc_82D0783C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d0c660
	ctx.lr = 0x82D0783C;
	sub_82D0C660(ctx, base);
loc_82D0783C:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// b 0x82d07764
	goto loc_82D07764;
loc_82D07844:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc70
	ctx.lr = 0x82D0784C;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0786c
	if (cr6.eq) goto loc_82D0786C;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// b 0x82d07a30
	goto loc_82D07A30;
loc_82D0786C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0ba98
	ctx.lr = 0x82D07874;
	sub_82D0BA98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07894
	if (cr6.eq) goto loc_82D07894;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// b 0x82d07a30
	goto loc_82D07A30;
loc_82D07894:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0b8e0
	ctx.lr = 0x82D0789C;
	sub_82D0B8E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d079e0
	if (cr6.eq) goto loc_82D079E0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82d0798c
	if (cr6.eq) goto loc_82D0798C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r29,r27,24
	ctx.r29.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D078D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r8,r29
	ctx.r8.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d0c660
	ctx.lr = 0x82D078E8;
	sub_82D0C660(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0ba40
	ctx.lr = 0x82D078F0;
	sub_82D0BA40(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d07908
	if (cr6.eq) goto loc_82D07908;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// beq cr6,0x82d0790c
	if (cr6.eq) goto loc_82D0790C;
loc_82D07908:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82D0790C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0ba00
	ctx.lr = 0x82D07914;
	sub_82D0BA00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0794c
	if (cr6.eq) goto loc_82D0794C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0794c
	if (cr6.eq) goto loc_82D0794C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d0c660
	ctx.lr = 0x82D0794C;
	sub_82D0C660(ctx, base);
loc_82D0794C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0ba18
	ctx.lr = 0x82D07954;
	sub_82D0BA18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d079b8
	if (cr6.eq) goto loc_82D079B8;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d079b8
	if (cr6.eq) goto loc_82D079B8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d079b4
	goto loc_82D079B4;
loc_82D0798C:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stw r25,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r25.u32);
	// stw r22,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r22.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D079B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82D079B4:
	// bl 0x82d0c660
	ctx.lr = 0x82D079B8;
	sub_82D0C660(ctx, base);
loc_82D079B8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0b958
	ctx.lr = 0x82D079C0;
	sub_82D0B958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d079d0
	if (cr6.eq) goto loc_82D079D0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82D079D0:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82d07764
	goto loc_82D07764;
loc_82D079E0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bb10
	ctx.lr = 0x82D079E8;
	sub_82D0BB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07a08
	if (cr6.eq) goto loc_82D07A08;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// b 0x82d07a30
	goto loc_82D07A30;
loc_82D07A08:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d07a20
	if (cr6.eq) goto loc_82D07A20;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82d07a34
	goto loc_82D07A34;
loc_82D07A20:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_82D07A30:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_82D07A34:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x82d07a70
	if (!cr6.gt) goto loc_82D07A70;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07a70
	if (cr6.eq) goto loc_82D07A70;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07A68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d0c660
	ctx.lr = 0x82D07A70;
	sub_82D0C660(ctx, base);
loc_82D07A70:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82d07764
	goto loc_82D07764;
loc_82D07A7C:
	// li r11,9
	ctx.r11.s64 = 9;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x82d07ab8
	if (!cr6.gt) goto loc_82D07AB8;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07ab8
	if (cr6.eq) goto loc_82D07AB8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d0c660
	ctx.lr = 0x82D07AB8;
	sub_82D0C660(ctx, base);
loc_82D07AB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07AD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D07AD8"))) PPC_WEAK_FUNC(sub_82D07AD8);
PPC_FUNC_IMPL(__imp__sub_82D07AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82D07AE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r28,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r28.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// bl 0x82d0c5c8
	ctx.lr = 0x82D07B14;
	sub_82D0C5C8(ctx, base);
loc_82D07B14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D07B20;
	sub_82D0C5F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d07b60
	if (!cr6.eq) goto loc_82D07B60;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d07b7c
	if (cr6.eq) goto loc_82D07B7C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d07b50
	if (cr6.eq) goto loc_82D07B50;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82d07b14
	if (!cr6.eq) goto loc_82D07B14;
loc_82D07B50:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// b 0x82d07b14
	goto loc_82D07B14;
loc_82D07B60:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r9,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r9.u32);
	// b 0x82d07b14
	goto loc_82D07B14;
loc_82D07B7C:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// beq 0x82d07d20
	if (cr0.eq) goto loc_82D07D20;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07BA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// ori r8,r9,21845
	ctx.r8.u64 = ctx.r9.u64 | 21845;
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82d07bc4
	if (cr6.gt) goto loc_82D07BC4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82d07bc8
	goto loc_82D07BC8;
loc_82D07BC4:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82D07BC8:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D07BDC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d07c14
	if (cr6.eq) goto loc_82D07C14;
	// addic. r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82d07c0c
	if (cr0.lt) goto loc_82D07C0C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,11
	ctx.r10.s64 = 11;
loc_82D07BFC:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d07bfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D07BFC;
loc_82D07C0C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d07c18
	goto loc_82D07C18;
loc_82D07C14:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82D07C18:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// li r22,8
	ctx.r22.s64 = 8;
	// li r23,7
	ctx.r23.s64 = 7;
	// li r24,5
	ctx.r24.s64 = 5;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D07C3C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D07C48;
	sub_82D0C5F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d07c98
	if (!cr6.eq) goto loc_82D07C98;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d07d00
	if (cr6.eq) goto loc_82D07D00;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d07c7c
	if (!cr6.eq) goto loc_82D07C7C;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d07c3c
	goto loc_82D07C3C;
loc_82D07C7C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82d07c3c
	if (!cr6.eq) goto loc_82D07C3C;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d07c3c
	goto loc_82D07C3C;
loc_82D07C98:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc70
	ctx.lr = 0x82D07CA0;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07cc4
	if (cr6.eq) goto loc_82D07CC4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d07c3c
	goto loc_82D07C3C;
loc_82D07CC4:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07ce8
	if (cr6.eq) goto loc_82D07CE8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d07c3c
	goto loc_82D07C3C;
loc_82D07CE8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x82d07c3c
	goto loc_82D07C3C;
loc_82D07D00:
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D07D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D07D20:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D07D28"))) PPC_WEAK_FUNC(sub_82D07D28);
PPC_FUNC_IMPL(__imp__sub_82D07D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d07d44
	if (cr6.eq) goto loc_82D07D44;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// beq cr6,0x82d07d44
	if (cr6.eq) goto loc_82D07D44;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d07d50
	goto loc_82D07D50;
loc_82D07D44:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82D07D50:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stb r9,52(r4)
	PPC_STORE_U8(ctx.r4.u32 + 52, ctx.r9.u8);
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07D6C"))) PPC_WEAK_FUNC(sub_82D07D6C);
PPC_FUNC_IMPL(__imp__sub_82D07D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07D70"))) PPC_WEAK_FUNC(sub_82D07D70);
PPC_FUNC_IMPL(__imp__sub_82D07D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07D80"))) PPC_WEAK_FUNC(sub_82D07D80);
PPC_FUNC_IMPL(__imp__sub_82D07D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D07D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82d07dd4
	if (cr6.gt) goto loc_82D07DD4;
loc_82D07DA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D07DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x82d07da8
	if (!cr6.gt) goto loc_82D07DA8;
loc_82D07DD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D07DE0"))) PPC_WEAK_FUNC(sub_82D07DE0);
PPC_FUNC_IMPL(__imp__sub_82D07DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfs f13,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D07E44"))) PPC_WEAK_FUNC(sub_82D07E44);
PPC_FUNC_IMPL(__imp__sub_82D07E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D07E48"))) PPC_WEAK_FUNC(sub_82D07E48);
PPC_FUNC_IMPL(__imp__sub_82D07E48) {
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
	ctx.lr = 0x82D07E50;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d08038
	if (cr6.eq) goto loc_82D08038;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf. r25,r10,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bgt 0x82d07e88
	if (cr0.gt) goto loc_82D07E88;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
loc_82D07E88:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x82d07f20
	if (cr6.eq) goto loc_82D07F20;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x82d08038
	if (cr6.gt) goto loc_82D08038;
	// lis r12,-32048
	ctx.r12.s64 = -2100297728;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,32448
	ctx.r12.s64 = ctx.r12.s64 + 32448;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D07F0C;
	case 1:
		goto loc_82D07F18;
	case 2:
		goto loc_82D07F0C;
	case 3:
		goto loc_82D08038;
	case 4:
		goto loc_82D08038;
	case 5:
		goto loc_82D08038;
	case 6:
		goto loc_82D08038;
	case 7:
		goto loc_82D08038;
	case 8:
		goto loc_82D08038;
	case 9:
		goto loc_82D08038;
	case 10:
		goto loc_82D08038;
	case 11:
		goto loc_82D08038;
	case 12:
		goto loc_82D08038;
	case 13:
		goto loc_82D08038;
	case 14:
		goto loc_82D08038;
	case 15:
		goto loc_82D08038;
	case 16:
		goto loc_82D07F0C;
	case 17:
		goto loc_82D07F18;
	case 18:
		goto loc_82D07F0C;
	default:
		return;
	}
	// lwz r22,32524(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32524);
	// lwz r22,32536(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32536);
	// lwz r22,32524(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32524);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,32524(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32524);
	// lwz r22,32536(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32536);
	// lwz r22,32524(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32524);
loc_82D07F0C:
	// srawi r11,r25,1
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// neg r25,r11
	ctx.r25.s64 = -ctx.r11.s64;
	// b 0x82d07f90
	goto loc_82D07F90;
loc_82D07F18:
	// neg r25,r25
	ctx.r25.s64 = -ctx.r25.s64;
	// b 0x82d07f90
	goto loc_82D07F90;
loc_82D07F20:
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x82d08038
	if (cr6.gt) goto loc_82D08038;
	// lis r12,-32048
	ctx.r12.s64 = -2100297728;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,32576
	ctx.r12.s64 = ctx.r12.s64 + 32576;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D07F8C;
	case 1:
		goto loc_82D07F90;
	case 2:
		goto loc_82D07F8C;
	case 3:
		goto loc_82D08038;
	case 4:
		goto loc_82D08038;
	case 5:
		goto loc_82D08038;
	case 6:
		goto loc_82D08038;
	case 7:
		goto loc_82D08038;
	case 8:
		goto loc_82D08038;
	case 9:
		goto loc_82D08038;
	case 10:
		goto loc_82D08038;
	case 11:
		goto loc_82D08038;
	case 12:
		goto loc_82D08038;
	case 13:
		goto loc_82D08038;
	case 14:
		goto loc_82D08038;
	case 15:
		goto loc_82D08038;
	case 16:
		goto loc_82D07F8C;
	case 17:
		goto loc_82D07F90;
	case 18:
		goto loc_82D07F8C;
	default:
		return;
	}
	// lwz r22,32652(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32652);
	// lwz r22,32656(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32656);
	// lwz r22,32652(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32652);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,-32712(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32712);
	// lwz r22,32652(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32652);
	// lwz r22,32656(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32656);
	// lwz r22,32652(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 32652);
loc_82D07F8C:
	// srawi r25,r25,1
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
loc_82D07F90:
	// lwz r27,8(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d08038
	if (!cr6.lt) goto loc_82D08038;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D07FAC:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bge cr6,0x82d08024
	if (!cr6.lt) goto loc_82D08024;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82d08024
	if (cr6.gt) goto loc_82D08024;
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_82D07FEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D08018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x82d07fec
	if (!cr6.gt) goto loc_82D07FEC;
loc_82D08024:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d07fac
	if (cr6.lt) goto loc_82D07FAC;
loc_82D08038:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D08044"))) PPC_WEAK_FUNC(sub_82D08044);
PPC_FUNC_IMPL(__imp__sub_82D08044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08048"))) PPC_WEAK_FUNC(sub_82D08048);
PPC_FUNC_IMPL(__imp__sub_82D08048) {
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
	ctx.lr = 0x82D08050;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d081e0
	if (cr6.eq) goto loc_82D081E0;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// andc r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// twllei r10,0
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// twlgei r7,-1
	// ble cr6,0x82d080b8
	if (!cr6.gt) goto loc_82D080B8;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r7,r11,r10
	ctx.r7.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// andc r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// twllei r10,0
	// subf. r4,r6,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// twlgei r3,-1
	// beq 0x82d080b8
	if (cr0.eq) goto loc_82D080B8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82D080B8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d080c8
	if (!cr6.lt) goto loc_82D080C8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82D080C8:
	// subf. r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82d081e0
	if (cr0.eq) goto loc_82D081E0;
	// lbz r11,45(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d08164
	if (cr6.eq) goto loc_82D08164;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82d081e0
	if (!cr6.eq) goto loc_82D081E0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82d081e0
	if (!cr6.gt) goto loc_82D081E0;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_82D08108:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x82D0814C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x82d08108
	if (cr6.lt) goto loc_82D08108;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D08164:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r31,0
	ctx.r31.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// ble cr6,0x82d081e0
	if (!cr6.gt) goto loc_82D081E0;
loc_82D08190:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D081A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x82D081D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x82d08190
	if (cr6.lt) goto loc_82D08190;
loc_82D081E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D081EC"))) PPC_WEAK_FUNC(sub_82D081EC);
PPC_FUNC_IMPL(__imp__sub_82D081EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D081F0"))) PPC_WEAK_FUNC(sub_82D081F0);
PPC_FUNC_IMPL(__imp__sub_82D081F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D081F8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,-11356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11356);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bgt cr6,0x82d08244
	if (cr6.gt) goto loc_82D08244;
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f12
	cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x82d083f4
	if (!cr6.gt) goto loc_82D083F4;
loc_82D08244:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bne cr6,0x82d082c0
	if (!cr6.eq) goto loc_82D082C0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d082a4
	if (cr6.eq) goto loc_82D082A4;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// beq cr6,0x82d082a4
	if (cr6.eq) goto loc_82D082A4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82d08284
	if (cr6.eq) goto loc_82D08284;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x82d08328
	if (!cr6.eq) goto loc_82D08328;
loc_82D08284:
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f31,f10
	ctx.f31.f64 = double(float(ctx.f10.f64));
	// b 0x82d08328
	goto loc_82D08328;
loc_82D082A4:
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f0,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82d08314
	goto loc_82D08314;
loc_82D082C0:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82d082fc
	if (cr6.eq) goto loc_82D082FC;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// beq cr6,0x82d082fc
	if (cr6.eq) goto loc_82D082FC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d082e0
	if (cr6.eq) goto loc_82D082E0;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bne cr6,0x82d08328
	if (!cr6.eq) goto loc_82D08328;
loc_82D082E0:
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f0,-11416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11416);
	ctx.f0.f64 = double(temp.f32);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82d08314
	goto loc_82D08314;
loc_82D082FC:
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
loc_82D08314:
	// fcfid f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f29,f10,f0
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f31,f7,f0
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
loc_82D08328:
	// fsubs f0,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// li r27,0
	ctx.r27.s64 = 0;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82d08348
	if (cr6.gt) goto loc_82D08348;
	// lfs f30,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82d08350
	goto loc_82D08350;
loc_82D08348:
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82D08350:
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82d083f4
	if (!cr6.gt) goto loc_82D083F4;
loc_82D08360:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d083e8
	if (cr6.eq) goto loc_82D083E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d083c0
	if (cr6.eq) goto loc_82D083C0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D083BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d083d0
	goto loc_82D083D0;
loc_82D083C0:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f2,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D083D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D083D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D083E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D083E8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x82d08360
	if (cr6.lt) goto loc_82D08360;
loc_82D083F4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0844c
	if (cr6.eq) goto loc_82D0844C;
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82d0844c
	if (!cr6.gt) goto loc_82D0844C;
loc_82D08414:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D0842C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D08440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x82d08414
	if (cr6.lt) goto loc_82D08414;
loc_82D0844C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D08460"))) PPC_WEAK_FUNC(sub_82D08460);
PPC_FUNC_IMPL(__imp__sub_82D08460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d08474
	if (cr6.lt) goto loc_82D08474;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D08474:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D08490"))) PPC_WEAK_FUNC(sub_82D08490);
PPC_FUNC_IMPL(__imp__sub_82D08490) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d084bc
	if (!cr6.eq) goto loc_82D084BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d07250
	ctx.lr = 0x82D084B8;
	sub_82D07250(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_82D084BC:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

__attribute__((alias("__imp__sub_82D084D4"))) PPC_WEAK_FUNC(sub_82D084D4);
PPC_FUNC_IMPL(__imp__sub_82D084D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D084D8"))) PPC_WEAK_FUNC(sub_82D084D8);
PPC_FUNC_IMPL(__imp__sub_82D084D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82D084E0;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
loc_82D08500:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d08500
	if (!cr6.eq) goto loc_82D08500;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rotlwi r24,r11,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82d0c5c8
	ctx.lr = 0x82D08538;
	sub_82D0C5C8(ctx, base);
	// li r17,41
	ctx.r17.s64 = 41;
	// li r18,40
	ctx.r18.s64 = 40;
	// li r19,93
	ctx.r19.s64 = 93;
	// li r20,91
	ctx.r20.s64 = 91;
	// li r25,62
	ctx.r25.s64 = 62;
	// li r26,60
	ctx.r26.s64 = 60;
	// li r21,125
	ctx.r21.s64 = 125;
	// li r22,123
	ctx.r22.s64 = 123;
loc_82D08558:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D08564;
	sub_82D0C5F8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d085b4
	if (!cr6.eq) goto loc_82D085B4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d08754
	if (cr6.eq) goto loc_82D08754;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d08594
	if (cr6.eq) goto loc_82D08594;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82d08594
	if (cr6.eq) goto loc_82D08594;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82d08748
	if (!cr6.eq) goto loc_82D08748;
loc_82D08594:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82d08558
	goto loc_82D08558;
loc_82D085B4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d0bc70
	ctx.lr = 0x82D085BC;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d085e0
	if (cr6.eq) goto loc_82D085E0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x82d0873c
	goto loc_82D0873C;
loc_82D085E0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d0ba98
	ctx.lr = 0x82D085E8;
	sub_82D0BA98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0860c
	if (cr6.eq) goto loc_82D0860C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x82d0873c
	goto loc_82D0873C;
loc_82D0860C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d0b8e0
	ctx.lr = 0x82D08614;
	sub_82D0B8E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d08644
	if (cr6.eq) goto loc_82D08644;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0863c
	if (!cr6.eq) goto loc_82D0863C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82D0863C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0873c
	goto loc_82D0873C;
loc_82D08644:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// bne cr6,0x82d08668
	if (!cr6.eq) goto loc_82D08668;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// ble cr6,0x82d08660
	if (!cr6.gt) goto loc_82D08660;
	// stb r17,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r17.u8);
loc_82D08660:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D08668:
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(ctx.r11.s32, 41, xer);
	// bne cr6,0x82d08684
	if (!cr6.eq) goto loc_82D08684;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// ble cr6,0x82d0867c
	if (!cr6.gt) goto loc_82D0867C;
	// stb r18,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r18.u8);
loc_82D0867C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D08684:
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// bne cr6,0x82d086a0
	if (!cr6.eq) goto loc_82D086A0;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// ble cr6,0x82d08698
	if (!cr6.gt) goto loc_82D08698;
	// stb r19,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r19.u8);
loc_82D08698:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D086A0:
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(ctx.r11.s32, 93, xer);
	// bne cr6,0x82d086bc
	if (!cr6.eq) goto loc_82D086BC;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// ble cr6,0x82d086b4
	if (!cr6.gt) goto loc_82D086B4;
	// stb r20,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r20.u8);
loc_82D086B4:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D086BC:
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, xer);
	// bne cr6,0x82d086d0
	if (!cr6.eq) goto loc_82D086D0;
	// stb r25,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r25.u8);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D086D0:
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, xer);
	// bne cr6,0x82d086e4
	if (!cr6.eq) goto loc_82D086E4;
	// stb r26,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r26.u8);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D086E4:
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(ctx.r11.s32, 123, xer);
	// bne cr6,0x82d08700
	if (!cr6.eq) goto loc_82D08700;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// ble cr6,0x82d086f8
	if (!cr6.gt) goto loc_82D086F8;
	// stb r21,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r21.u8);
loc_82D086F8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D08700:
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(ctx.r11.s32, 125, xer);
	// bne cr6,0x82d0871c
	if (!cr6.eq) goto loc_82D0871C;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// ble cr6,0x82d08714
	if (!cr6.gt) goto loc_82D08714;
	// stb r22,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r22.u8);
loc_82D08714:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d0872c
	goto loc_82D0872C;
loc_82D0871C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d08738
	if (!cr6.eq) goto loc_82D08738;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82D0872C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82D08738:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82D0873C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82D08748:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82d08558
	goto loc_82D08558;
loc_82D08754:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq 0x82d08784
	if (cr0.eq) goto loc_82D08784;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08778;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d07698
	ctx.lr = 0x82D08784;
	sub_82D07698(ctx, base);
loc_82D08784:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0878C"))) PPC_WEAK_FUNC(sub_82D0878C);
PPC_FUNC_IMPL(__imp__sub_82D0878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08790"))) PPC_WEAK_FUNC(sub_82D08790);
PPC_FUNC_IMPL(__imp__sub_82D08790) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d087e0
	if (cr6.eq) goto loc_82D087E0;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D087C4;
	sub_82595150(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82416268
	ctx.lr = 0x82D087CC;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D087D4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82D087E0:
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

__attribute__((alias("__imp__sub_82D087F4"))) PPC_WEAK_FUNC(sub_82D087F4);
PPC_FUNC_IMPL(__imp__sub_82D087F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D087F8"))) PPC_WEAK_FUNC(sub_82D087F8);
PPC_FUNC_IMPL(__imp__sub_82D087F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-1840
	ctx.r9.s64 = ctx.r11.s64 + -1840;
	// li r30,27
	ctx.r30.s64 = 27;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d08858
	if (cr6.eq) goto loc_82D08858;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D0883C;
	sub_82595150(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82416268
	ctx.lr = 0x82D08844;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D0884C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82D08858:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825952b8
	ctx.lr = 0x82D08868;
	sub_825952B8(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825952b8
	ctx.lr = 0x82D08878;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_82D08890"))) PPC_WEAK_FUNC(sub_82D08890);
PPC_FUNC_IMPL(__imp__sub_82D08890) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d07250
	ctx.lr = 0x82D088B0;
	sub_82D07250(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0896c
	if (cr6.eq) goto loc_82D0896C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82d08908
	if (cr6.gt) goto loc_82D08908;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d088f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D088F0;
	// bdzf 4*cr6+eq,0x82d08948
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D08948;
	// bne cr6,0x82d08900
	if (!cr6.eq) goto loc_82D08900;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D088E8:
	// bl 0x82d073f8
	ctx.lr = 0x82D088EC;
	sub_82D073F8(ctx, base);
	// b 0x82d08958
	goto loc_82D08958;
loc_82D088F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d084d8
	ctx.lr = 0x82D088FC;
	sub_82D084D8(ctx, base);
	// b 0x82d08958
	goto loc_82D08958;
loc_82D08900:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82d0894c
	goto loc_82D0894C;
loc_82D08908:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82d08948
	if (cr6.eq) goto loc_82D08948;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82d08948
	if (cr6.eq) goto loc_82D08948;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// beq cr6,0x82d08948
	if (cr6.eq) goto loc_82D08948;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82d08948
	if (cr6.eq) goto loc_82D08948;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d088e8
	if (!cr6.eq) goto loc_82D088E8;
	// bl 0x82d084d8
	ctx.lr = 0x82D08944;
	sub_82D084D8(ctx, base);
	// b 0x82d08958
	goto loc_82D08958;
loc_82D08948:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D0894C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d07ad8
	ctx.lr = 0x82D08958;
	sub_82D07AD8(ctx, base);
loc_82D08958:
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D0896C;
	sub_825952B8(ctx, base);
loc_82D0896C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D08984"))) PPC_WEAK_FUNC(sub_82D08984);
PPC_FUNC_IMPL(__imp__sub_82D08984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08988"))) PPC_WEAK_FUNC(sub_82D08988);
PPC_FUNC_IMPL(__imp__sub_82D08988) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82d04220
	ctx.lr = 0x82D089B8;
	sub_82D04220(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82d089cc
	if (!cr6.lt) goto loc_82D089CC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82D089CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D089E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d08a04
	if (cr6.lt) goto loc_82D08A04;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D08A04;
	sub_825952B8(ctx, base);
loc_82D08A04:
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

__attribute__((alias("__imp__sub_82D08A1C"))) PPC_WEAK_FUNC(sub_82D08A1C);
PPC_FUNC_IMPL(__imp__sub_82D08A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08A20"))) PPC_WEAK_FUNC(sub_82D08A20);
PPC_FUNC_IMPL(__imp__sub_82D08A20) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d08a60
	if (!cr6.eq) goto loc_82D08A60;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x82d08af4
	goto loc_82D08AF4;
loc_82D08A60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d07de0
	ctx.lr = 0x82D08A6C;
	sub_82D07DE0(ctx, base);
	// bl 0x82d07e48
	ctx.lr = 0x82D08A70;
	sub_82D07E48(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f7,24(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d08acc
	if (cr6.eq) goto loc_82D08ACC;
	// bl 0x82ab5f20
	ctx.lr = 0x82D08ACC;
	sub_82AB5F20(ctx, base);
loc_82D08ACC:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D08AE8:
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d08ae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D08AE8;
loc_82D08AF4:
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D08B10"))) PPC_WEAK_FUNC(sub_82D08B10);
PPC_FUNC_IMPL(__imp__sub_82D08B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D08B18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d08c70
	if (!cr6.eq) goto loc_82D08C70;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d08c70
	if (cr6.eq) goto loc_82D08C70;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d07d80
	ctx.lr = 0x82D08B68;
	sub_82D07D80(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x82d08c70
	if (cr6.eq) goto loc_82D08C70;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d08c70
	if (!cr6.gt) goto loc_82D08C70;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bge cr6,0x82d08c70
	if (!cr6.lt) goto loc_82D08C70;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d08c58
	if (cr6.eq) goto loc_82D08C58;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82d0c4b8
	ctx.lr = 0x82D08BCC;
	sub_82D0C4B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d08c04
	if (!cr6.eq) goto loc_82D08C04;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82d08c04
	if (cr6.eq) goto loc_82D08C04;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82d08c08
	if (!cr6.eq) goto loc_82D08C08;
loc_82D08C04:
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_82D08C08:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d08c58
	if (!cr6.eq) goto loc_82D08C58;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,-204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -204);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x82d08c58
	if (!cr6.lt) goto loc_82D08C58;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82D08C58:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d08c70
	if (cr6.eq) goto loc_82D08C70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d08a20
	ctx.lr = 0x82D08C70;
	sub_82D08A20(ctx, base);
loc_82D08C70:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x82d08cdc
	if (!cr6.gt) goto loc_82D08CDC;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
loc_82D08C7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r30,r26
	ctx.r4.u64 = ctx.r30.u64 + ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08C94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D08CAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,32(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// blt cr6,0x82d08c7c
	if (cr6.lt) goto loc_82D08C7C;
loc_82D08CDC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stb r25,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r25.u8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82d08d1c
	if (!cr6.lt) goto loc_82D08D1C;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,28
	ctx.r12.s64 = 28;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82D08D1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D08D24"))) PPC_WEAK_FUNC(sub_82D08D24);
PPC_FUNC_IMPL(__imp__sub_82D08D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D08D28"))) PPC_WEAK_FUNC(sub_82D08D28);
PPC_FUNC_IMPL(__imp__sub_82D08D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82D08D30;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r23,12(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lbz r24,52(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d08e74
	if (!cr6.lt) goto loc_82D08E74;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r23,1
	ctx.r27.s64 = ctx.r23.s64 + 1;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D08D80:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r26,r10
	ctx.r11.u64 = ctx.r26.u64 + ctx.r10.u64;
	// bge cr6,0x82d08d98
	if (!cr6.lt) goto loc_82D08D98;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
loc_82D08D98:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82d08dc0
	if (cr6.eq) goto loc_82D08DC0;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82d08e74
	if (!cr6.eq) goto loc_82D08E74;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d08dc0
	if (cr6.eq) goto loc_82D08DC0;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82d08e74
	if (cr6.eq) goto loc_82D08E74;
loc_82D08DC0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82d08e08
	if (cr6.gt) goto loc_82D08E08;
loc_82D08DDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08DF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ble cr6,0x82d08ddc
	if (!cr6.gt) goto loc_82D08DDC;
loc_82D08E08:
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// add r22,r29,r22
	ctx.r22.u64 = ctx.r29.u64 + ctx.r22.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d08e50
	if (!cr6.eq) goto loc_82D08E50;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d08e50
	if (cr6.eq) goto loc_82D08E50;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d08e50
	if (cr6.eq) goto loc_82D08E50;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d08e50
	if (!cr6.gt) goto loc_82D08E50;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// blt cr6,0x82d08e70
	if (cr6.lt) goto loc_82D08E70;
loc_82D08E50:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d08d80
	if (cr6.lt) goto loc_82D08D80;
	// b 0x82d08e74
	goto loc_82D08E74;
loc_82D08E70:
	// li r21,1
	ctx.r21.s64 = 1;
loc_82D08E74:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r26,r23,-1
	ctx.r26.s64 = ctx.r23.s64 + -1;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bgt cr6,0x82d08f7c
	if (cr6.gt) goto loc_82D08F7C;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D08E90:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82d08eac
	if (cr6.eq) goto loc_82D08EAC;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82d08f68
	if (!cr6.eq) goto loc_82D08F68;
loc_82D08EAC:
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d07d80
	ctx.lr = 0x82D08EC4;
	sub_82D07D80(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ble cr6,0x82d08f5c
	if (!cr6.gt) goto loc_82D08F5C;
loc_82D08EFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D08F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D08F2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,32(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x82d08efc
	if (cr6.lt) goto loc_82D08EFC;
loc_82D08F5C:
	// lfs f0,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,20(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 20, temp.u32);
loc_82D08F68:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r27,r27,-12
	ctx.r27.s64 = ctx.r27.s64 + -12;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// ble cr6,0x82d08e90
	if (!cr6.gt) goto loc_82D08E90;
loc_82D08F7C:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// stw r23,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r23.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r10,52(r25)
	PPC_STORE_U8(ctx.r25.u32 + 52, ctx.r10.u8);
	// beq cr6,0x82d08fa0
	if (cr6.eq) goto loc_82D08FA0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d08a20
	ctx.lr = 0x82D08FA0;
	sub_82D08A20(ctx, base);
loc_82D08FA0:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lfs f0,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82d08fd4
	if (!cr6.lt) goto loc_82D08FD4;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,28
	ctx.r12.s64 = 28;
	// stfiwx f0,r25,r12
	PPC_STORE_U32(ctx.r25.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82D08FD4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D08FE0"))) PPC_WEAK_FUNC(sub_82D08FE0);
PPC_FUNC_IMPL(__imp__sub_82D08FE0) {
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
	ctx.lr = 0x82D08FE8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82d07d80
	ctx.lr = 0x82D09018;
	sub_82D07D80(ctx, base);
	// lbz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d09080
	if (!cr6.eq) goto loc_82D09080;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d09080
	if (cr6.eq) goto loc_82D09080;
	// lbz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d09080
	if (cr6.eq) goto loc_82D09080;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d09080
	if (!cr6.gt) goto loc_82D09080;
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d09080
	if (!cr6.lt) goto loc_82D09080;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d08a20
	ctx.lr = 0x82D09080;
	sub_82D08A20(ctx, base);
loc_82D09080:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// fsubs f31,f13,f30
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// blt 0x82d09238
	if (cr0.lt) goto loc_82D09238;
loc_82D090B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D090CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// beq cr6,0x82d091f8
	if (cr6.eq) goto loc_82D091F8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D090FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,55691
	cr6.compare<uint32_t>(ctx.r11.u32, 55691, xer);
	// beq cr6,0x82d091a0
	if (cr6.eq) goto loc_82D091A0;
	// cmplwi cr6,r11,55694
	cr6.compare<uint32_t>(ctx.r11.u32, 55694, xer);
	// beq cr6,0x82d091a0
	if (cr6.eq) goto loc_82D091A0;
	// cmplwi cr6,r11,55695
	cr6.compare<uint32_t>(ctx.r11.u32, 55695, xer);
	// beq cr6,0x82d091a0
	if (cr6.eq) goto loc_82D091A0;
	// cmplwi cr6,r11,55698
	cr6.compare<uint32_t>(ctx.r11.u32, 55698, xer);
	// beq cr6,0x82d091a0
	if (cr6.eq) goto loc_82D091A0;
	// cmplwi cr6,r11,55692
	cr6.compare<uint32_t>(ctx.r11.u32, 55692, xer);
	// beq cr6,0x82d091a0
	if (cr6.eq) goto loc_82D091A0;
	// cmplwi cr6,r11,55697
	cr6.compare<uint32_t>(ctx.r11.u32, 55697, xer);
	// beq cr6,0x82d091a0
	if (cr6.eq) goto loc_82D091A0;
	// cmplwi cr6,r11,55728
	cr6.compare<uint32_t>(ctx.r11.u32, 55728, xer);
	// beq cr6,0x82d091a0
	if (cr6.eq) goto loc_82D091A0;
	// cmplwi cr6,r11,55693
	cr6.compare<uint32_t>(ctx.r11.u32, 55693, xer);
	// beq cr6,0x82d09148
	if (cr6.eq) goto loc_82D09148;
	// cmplwi cr6,r11,55696
	cr6.compare<uint32_t>(ctx.r11.u32, 55696, xer);
	// bne cr6,0x82d091f8
	if (!cr6.eq) goto loc_82D091F8;
loc_82D09148:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fadds f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// b 0x82d091f4
	goto loc_82D091F4;
loc_82D091A0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f8,120(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
loc_82D091F4:
	// stfs f5,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82D091F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D09210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge 0x82d090b4
	if (!cr0.lt) goto loc_82D090B4;
loc_82D09238:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f0,20(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stb r8,52(r28)
	PPC_STORE_U8(ctx.r28.u32 + 52, ctx.r8.u8);
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82d09284
	if (!cr6.lt) goto loc_82D09284;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,28
	ctx.r12.s64 = 28;
	// stfiwx f0,r28,r12
	PPC_STORE_U32(ctx.r28.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82D09284:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D09294"))) PPC_WEAK_FUNC(sub_82D09294);
PPC_FUNC_IMPL(__imp__sub_82D09294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09298"))) PPC_WEAK_FUNC(sub_82D09298);
PPC_FUNC_IMPL(__imp__sub_82D09298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82D092A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r26,16(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r29,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x82d07d80
	ctx.lr = 0x82D092D0;
	sub_82D07D80(ctx, base);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r21,1
	ctx.r21.s64 = 1;
	// add r23,r11,r3
	ctx.r23.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0948c
	if (!cr6.eq) goto loc_82D0948C;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d0948c
	if (cr6.eq) goto loc_82D0948C;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0948c
	if (cr6.eq) goto loc_82D0948C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d0948c
	if (!cr6.gt) goto loc_82D0948C;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// bge cr6,0x82d0948c
	if (!cr6.lt) goto loc_82D0948C;
	// rlwinm r11,r10,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d09474
	if (cr6.eq) goto loc_82D09474;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r28,20(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x82d09384
	if (cr6.eq) goto loc_82D09384;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
loc_82D09368:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d095dc
	if (!cr6.eq) goto loc_82D095DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x82d09368
	if (cr6.lt) goto loc_82D09368;
loc_82D09384:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x82d09414
	if (cr6.eq) goto loc_82D09414;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D093A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82d0c4b8
	ctx.lr = 0x82D093AC;
	sub_82D0C4B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d09414
	if (!cr6.eq) goto loc_82D09414;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// beq cr6,0x82d09414
	if (cr6.eq) goto loc_82D09414;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// beq cr6,0x82d09414
	if (cr6.eq) goto loc_82D09414;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x82d09418
	if (!cr6.eq) goto loc_82D09418;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D093E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d0bce0
	ctx.lr = 0x82D093F4;
	sub_82D0BCE0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d09414
	if (!cr6.eq) goto loc_82D09414;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d0bcb0
	ctx.lr = 0x82D09408;
	sub_82D0BCB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d09418
	if (cr6.eq) goto loc_82D09418;
loc_82D09414:
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
loc_82D09418:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d09474
	if (!cr6.eq) goto loc_82D09474;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d09474
	if (!cr6.eq) goto loc_82D09474;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsw r10,r23
	ctx.r10.s64 = ctx.r23.s32;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -204);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82d09474
	if (!cr6.lt) goto loc_82D09474;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_82D09474:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d0948c
	if (cr6.eq) goto loc_82D0948C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d08a20
	ctx.lr = 0x82D0948C;
	sub_82D08A20(ctx, base);
loc_82D0948C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x82d094f4
	if (!cr6.gt) goto loc_82D094F4;
loc_82D09494:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r29,r24
	ctx.r4.u64 = ctx.r29.u64 + ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D094AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D094C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, xer);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// blt cr6,0x82d09494
	if (cr6.lt) goto loc_82D09494;
loc_82D094F4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stb r21,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r21.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82d09534
	if (!cr6.lt) goto loc_82D09534;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,28
	ctx.r12.s64 = 28;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82D09534:
	// lbz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d0978c
	if (!cr6.eq) goto loc_82D0978C;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d0978c
	if (cr6.eq) goto loc_82D0978C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82d0978c
	if (!cr6.eq) goto loc_82D0978C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D0958C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D095AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,8(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bl 0x82d0c570
	ctx.lr = 0x82D095BC;
	sub_82D0C570(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d09628
	if (cr6.eq) goto loc_82D09628;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82D095DC:
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// addi r9,r11,23
	ctx.r9.s64 = ctx.r11.s64 + 23;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// bl 0x82d08a20
	ctx.lr = 0x82D0961C;
	sub_82D08A20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82D09628:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0c4b8
	ctx.lr = 0x82D09630;
	sub_82D0C4B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0978c
	if (!cr6.eq) goto loc_82D0978C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bcb0
	ctx.lr = 0x82D09644;
	sub_82D0BCB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d09674
	if (cr6.eq) goto loc_82D09674;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,92
	ctx.r10.s64 = 92;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stfiwx f13,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f13.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82D09674:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x82d0978c
	if (cr6.gt) goto loc_82D0978C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bce0
	ctx.lr = 0x82D0969C;
	sub_82D0BCE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d096b8
	if (cr6.eq) goto loc_82D096B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x82d09780
	goto loc_82D09780;
loc_82D096B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bcf8
	ctx.lr = 0x82D096C0;
	sub_82D0BCF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d096dc
	if (cr6.eq) goto loc_82D096DC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x82d09780
	goto loc_82D09780;
loc_82D096DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0bb88
	ctx.lr = 0x82D096E4;
	sub_82D0BB88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d09774
	if (!cr6.eq) goto loc_82D09774;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bb98
	ctx.lr = 0x82D096F8;
	sub_82D0BB98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d09774
	if (!cr6.eq) goto loc_82D09774;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bd10
	ctx.lr = 0x82D0970C;
	sub_82D0BD10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0973c
	if (cr6.eq) goto loc_82D0973C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0bd40
	ctx.lr = 0x82D09720;
	sub_82D0BD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0973c
	if (cr6.eq) goto loc_82D0973C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,112
	ctx.r10.s64 = 112;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82d09780
	goto loc_82D09780;
loc_82D0973C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0bd70
	ctx.lr = 0x82D09744;
	sub_82D0BD70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0978c
	if (!cr6.eq) goto loc_82D0978C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0bd70
	ctx.lr = 0x82D09758;
	sub_82D0BD70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0978c
	if (cr6.eq) goto loc_82D0978C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,120
	ctx.r10.s64 = 120;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82d09780
	goto loc_82D09780;
loc_82D09774:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,108
	ctx.r10.s64 = 108;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82D09780:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f13.u32);
loc_82D0978C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D09798"))) PPC_WEAK_FUNC(sub_82D09798);
PPC_FUNC_IMPL(__imp__sub_82D09798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D097A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d07d80
	ctx.lr = 0x82D097C4;
	sub_82D07D80(ctx, base);
	// lbz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d098c0
	if (!cr6.eq) goto loc_82D098C0;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d098c0
	if (cr6.eq) goto loc_82D098C0;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d098c0
	if (cr6.eq) goto loc_82D098C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d098c0
	if (!cr6.gt) goto loc_82D098C0;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d098c0
	if (!cr6.lt) goto loc_82D098C0;
	// rlwinm r11,r9,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d09850
	if (cr6.eq) goto loc_82D09850;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
loc_82D09834:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d09874
	if (!cr6.eq) goto loc_82D09874;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x82d09834
	if (cr6.lt) goto loc_82D09834;
loc_82D09850:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82d08a20
	ctx.lr = 0x82D09868;
	sub_82D08A20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D09874:
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// addi r9,r11,23
	ctx.r9.s64 = ctx.r11.s64 + 23;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82d08a20
	ctx.lr = 0x82D098B4;
	sub_82D08A20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D098C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D098D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D098EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f11,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r6,1
	ctx.r6.s64 = 1;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stb r6,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r6.u8);
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x82d0994c
	if (!cr6.lt) goto loc_82D0994C;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,28
	ctx.r12.s64 = 28;
	// stfiwx f13,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f13.u32);
loc_82D0994C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x82d0997c
	if (cr6.gt) goto loc_82D0997C;
	// li r10,104
	ctx.r10.s64 = 104;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stfiwx f0,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f0.u32);
loc_82D0997C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D09988"))) PPC_WEAK_FUNC(sub_82D09988);
PPC_FUNC_IMPL(__imp__sub_82D09988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D09990;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d07d80
	ctx.lr = 0x82D099B8;
	sub_82D07D80(ctx, base);
	// lbz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d09abc
	if (!cr6.eq) goto loc_82D09ABC;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d09abc
	if (cr6.eq) goto loc_82D09ABC;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d09abc
	if (cr6.eq) goto loc_82D09ABC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d09abc
	if (!cr6.gt) goto loc_82D09ABC;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d09abc
	if (!cr6.lt) goto loc_82D09ABC;
	// rlwinm r11,r9,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d09a44
	if (cr6.eq) goto loc_82D09A44;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
loc_82D09A28:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82d09a6c
	if (!cr6.eq) goto loc_82D09A6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x82d09a28
	if (cr6.lt) goto loc_82D09A28;
loc_82D09A44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82d08a20
	ctx.lr = 0x82D09A5C;
	sub_82D08A20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D09A6C:
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// addi r9,r11,23
	ctx.r9.s64 = ctx.r11.s64 + 23;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82d08a20
	ctx.lr = 0x82D09AAC;
	sub_82D08A20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D09ABC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D09AD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f31,f11
	ctx.f31.f64 = double(float(ctx.f11.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D09B14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f8,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f31,f8
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stb r6,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r6.u8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// fcmpu cr6,f5,f0
	cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x82d09b60
	if (!cr6.lt) goto loc_82D09B60;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,28
	ctx.r12.s64 = 28;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82D09B60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D09B6C"))) PPC_WEAK_FUNC(sub_82D09B6C);
PPC_FUNC_IMPL(__imp__sub_82D09B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09B70"))) PPC_WEAK_FUNC(sub_82D09B70);
PPC_FUNC_IMPL(__imp__sub_82D09B70) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// bl 0x82d08a20
	ctx.lr = 0x82D09B9C;
	sub_82D08A20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_82D09BB4"))) PPC_WEAK_FUNC(sub_82D09BB4);
PPC_FUNC_IMPL(__imp__sub_82D09BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09BB8"))) PPC_WEAK_FUNC(sub_82D09BB8);
PPC_FUNC_IMPL(__imp__sub_82D09BB8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d09c14
	if (!cr6.eq) goto loc_82D09C14;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d09c14
	if (cr6.lt) goto loc_82D09C14;
	// bl 0x82d07de0
	ctx.lr = 0x82D09C10;
	sub_82D07DE0(ctx, base);
	// bl 0x82d07e48
	ctx.lr = 0x82D09C14;
	sub_82D07E48(ctx, base);
loc_82D09C14:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82d08a20
	ctx.lr = 0x82D09C2C;
	sub_82D08A20(ctx, base);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D09C58"))) PPC_WEAK_FUNC(sub_82D09C58);
PPC_FUNC_IMPL(__imp__sub_82D09C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82D09C88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d09c88
	if (!cr6.eq) goto loc_82D09C88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82D09CAC;
	sub_82472FC0(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r30,r11,22316
	ctx.r30.s64 = ctx.r11.s64 + 22316;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82D09CB8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D09CC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d09cc0
	if (!cr6.eq) goto loc_82D09CC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82574d38
	ctx.lr = 0x82D09CE8;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d09d30
	if (!cr6.eq) goto loc_82D09D30;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d09cb8
	if (!cr6.eq) goto loc_82D09CB8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d09d14
	if (cr6.lt) goto loc_82D09D14;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82D09D14;
	sub_82416268(ctx, base);
loc_82D09D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D09D18:
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
loc_82D09D30:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d09d44
	if (cr6.lt) goto loc_82D09D44;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82D09D44;
	sub_82416268(ctx, base);
loc_82D09D44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d09d18
	goto loc_82D09D18;
}

__attribute__((alias("__imp__sub_82D09D4C"))) PPC_WEAK_FUNC(sub_82D09D4C);
PPC_FUNC_IMPL(__imp__sub_82D09D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09D50"))) PPC_WEAK_FUNC(sub_82D09D50);
PPC_FUNC_IMPL(__imp__sub_82D09D50) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82d09298
	sub_82D09298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D09D58"))) PPC_WEAK_FUNC(sub_82D09D58);
PPC_FUNC_IMPL(__imp__sub_82D09D58) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82d09298
	sub_82D09298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D09D60"))) PPC_WEAK_FUNC(sub_82D09D60);
PPC_FUNC_IMPL(__imp__sub_82D09D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D09D68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82d09df0
	if (!cr6.gt) goto loc_82D09DF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d09dd8
	if (!cr6.gt) goto loc_82D09DD8;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r29,r11,22324
	ctx.r29.s64 = ctx.r11.s64 + 22324;
loc_82D09D94:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D09DCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// blt cr6,0x82d09d94
	if (cr6.lt) goto loc_82D09D94;
loc_82D09DD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d08048
	ctx.lr = 0x82D09DE4;
	sub_82D08048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d081f0
	ctx.lr = 0x82D09DF0;
	sub_82D081F0(ctx, base);
loc_82D09DF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D09DF8"))) PPC_WEAK_FUNC(sub_82D09DF8);
PPC_FUNC_IMPL(__imp__sub_82D09DF8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82d0ea60
	ctx.lr = 0x82D09E18;
	sub_82D0EA60(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d09fbc
	if (cr6.eq) goto loc_82D09FBC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r8,84(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bne cr6,0x82d09e68
	if (!cr6.eq) goto loc_82D09E68;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
loc_82D09E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d07068
	ctx.lr = 0x82D09E74;
	sub_82D07068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d09e94
	if (cr6.eq) goto loc_82D09E94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d07068
	ctx.lr = 0x82D09E84;
	sub_82D07068(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82d09ea4
	goto loc_82D09EA4;
loc_82D09E94:
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82D09EA4:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x831d18f0
	ctx.lr = 0x82D09ED4;
	sub_831D18F0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x831d18f0
	ctx.lr = 0x82D09EF8;
	sub_831D18F0(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f13,21204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21204);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// lfs f0,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
loc_82D09F60:
	// stw r30,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d09f60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D09F60;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d09d60
	ctx.lr = 0x82D09F78;
	sub_82D09D60(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,72(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,76(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82D09FBC:
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

__attribute__((alias("__imp__sub_82D09FD4"))) PPC_WEAK_FUNC(sub_82D09FD4);
PPC_FUNC_IMPL(__imp__sub_82D09FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D09FD8"))) PPC_WEAK_FUNC(sub_82D09FD8);
PPC_FUNC_IMPL(__imp__sub_82D09FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x82d09ffc
	if (cr6.lt) goto loc_82D09FFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D09FFC:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,608
	ctx.r7.s64 = ctx.r10.s64 + 608;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,22472
	ctx.r10.s64 = ctx.r11.s64 + 22472;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d0a058
	if (!cr6.eq) goto loc_82D0A058;
	// cmpwi cr6,r9,20
	cr6.compare<int32_t>(ctx.r9.s32, 20, xer);
	// beq cr6,0x82d0a048
	if (cr6.eq) goto loc_82D0A048;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// bne cr6,0x82d0a058
	if (!cr6.eq) goto loc_82D0A058;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r9,r11,22648
	ctx.r9.s64 = ctx.r11.s64 + 22648;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82d0a050
	goto loc_82D0A050;
loc_82D0A048:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,22648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22648);
loc_82D0A050:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0A058:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A068"))) PPC_WEAK_FUNC(sub_82D0A068);
PPC_FUNC_IMPL(__imp__sub_82D0A068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// blt cr6,0x82d0a08c
	if (cr6.lt) goto loc_82D0A08C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D0A08C:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,668
	ctx.r7.s64 = ctx.r10.s64 + 668;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,22472
	ctx.r10.s64 = ctx.r11.s64 + 22472;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d0a0e8
	if (!cr6.eq) goto loc_82D0A0E8;
	// cmpwi cr6,r9,20
	cr6.compare<int32_t>(ctx.r9.s32, 20, xer);
	// beq cr6,0x82d0a0d8
	if (cr6.eq) goto loc_82D0A0D8;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// bne cr6,0x82d0a0e8
	if (!cr6.eq) goto loc_82D0A0E8;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r9,r11,22648
	ctx.r9.s64 = ctx.r11.s64 + 22648;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82d0a0e0
	goto loc_82D0A0E0;
loc_82D0A0D8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,22648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22648);
loc_82D0A0E0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0A0E8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A0F8"))) PPC_WEAK_FUNC(sub_82D0A0F8);
PPC_FUNC_IMPL(__imp__sub_82D0A0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82d0a11c
	if (cr6.lt) goto loc_82D0A11C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D0A11C:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,704
	ctx.r7.s64 = ctx.r10.s64 + 704;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,22472
	ctx.r10.s64 = ctx.r11.s64 + 22472;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d0a178
	if (!cr6.eq) goto loc_82D0A178;
	// cmpwi cr6,r9,20
	cr6.compare<int32_t>(ctx.r9.s32, 20, xer);
	// beq cr6,0x82d0a168
	if (cr6.eq) goto loc_82D0A168;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// bne cr6,0x82d0a178
	if (!cr6.eq) goto loc_82D0A178;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r9,r11,22648
	ctx.r9.s64 = ctx.r11.s64 + 22648;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82d0a170
	goto loc_82D0A170;
loc_82D0A168:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,22648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22648);
loc_82D0A170:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0A178:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A188"))) PPC_WEAK_FUNC(sub_82D0A188);
PPC_FUNC_IMPL(__imp__sub_82D0A188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// blt cr6,0x82d0a1ac
	if (cr6.lt) goto loc_82D0A1AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D0A1AC:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,744
	ctx.r7.s64 = ctx.r10.s64 + 744;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,22472
	ctx.r10.s64 = ctx.r11.s64 + 22472;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d0a208
	if (!cr6.eq) goto loc_82D0A208;
	// cmpwi cr6,r9,20
	cr6.compare<int32_t>(ctx.r9.s32, 20, xer);
	// beq cr6,0x82d0a1f8
	if (cr6.eq) goto loc_82D0A1F8;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// bne cr6,0x82d0a208
	if (!cr6.eq) goto loc_82D0A208;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r9,r11,22648
	ctx.r9.s64 = ctx.r11.s64 + 22648;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82d0a200
	goto loc_82D0A200;
loc_82D0A1F8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,22648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22648);
loc_82D0A200:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0A208:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A218"))) PPC_WEAK_FUNC(sub_82D0A218);
PPC_FUNC_IMPL(__imp__sub_82D0A218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82d0a23c
	if (cr6.lt) goto loc_82D0A23C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D0A23C:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,800
	ctx.r7.s64 = ctx.r10.s64 + 800;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,22472
	ctx.r10.s64 = ctx.r11.s64 + 22472;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d0a298
	if (!cr6.eq) goto loc_82D0A298;
	// cmpwi cr6,r9,20
	cr6.compare<int32_t>(ctx.r9.s32, 20, xer);
	// beq cr6,0x82d0a288
	if (cr6.eq) goto loc_82D0A288;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// bne cr6,0x82d0a298
	if (!cr6.eq) goto loc_82D0A298;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r9,r11,22648
	ctx.r9.s64 = ctx.r11.s64 + 22648;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82d0a290
	goto loc_82D0A290;
loc_82D0A288:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,22648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22648);
loc_82D0A290:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0A298:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A2A8"))) PPC_WEAK_FUNC(sub_82D0A2A8);
PPC_FUNC_IMPL(__imp__sub_82D0A2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r10,-101
	ctx.r11.s64 = ctx.r10.s64 + -101;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d0a2ec
	if (!cr6.lt) goto loc_82D0A2EC;
	// cmplwi cr6,r10,113
	cr6.compare<uint32_t>(ctx.r10.u32, 113, xer);
	// blt cr6,0x82d0a2cc
	if (cr6.lt) goto loc_82D0A2CC;
	// cmplwi cr6,r10,115
	cr6.compare<uint32_t>(ctx.r10.u32, 115, xer);
	// ble cr6,0x82d0a2ec
	if (!cr6.gt) goto loc_82D0A2EC;
loc_82D0A2CC:
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-30656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30656);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82D0A2EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A2FC"))) PPC_WEAK_FUNC(sub_82D0A2FC);
PPC_FUNC_IMPL(__imp__sub_82D0A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A300"))) PPC_WEAK_FUNC(sub_82D0A300);
PPC_FUNC_IMPL(__imp__sub_82D0A300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D0A308;
	__savegprlr_27(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// addic. r9,r4,-97
	xer.ca = ctx.r4.u32 > 96;
	ctx.r9.s64 = ctx.r4.s64 + -97;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r10,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r6,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r11,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r11.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// stw r7,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r7.u32);
	// stw r10,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r10.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r7,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// stw r3,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r3.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// stw r31,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r31.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// stw r30,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r30.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// stw r8,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r8.u32);
	// stw r5,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// stw r11,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// stw r5,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r5.u32);
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// stw r5,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r5.u32);
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// stw r10,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r10.u32);
	// stw r11,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r11.u32);
	// stw r8,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r8.u32);
	// stw r4,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r4.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// blt 0x82d0a670
	if (cr0.lt) goto loc_82D0A670;
	// cmplwi cr6,r9,17
	cr6.compare<uint32_t>(ctx.r9.u32, 17, xer);
	// bge cr6,0x82d0a670
	if (!cr6.lt) goto loc_82D0A670;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r29,20
	ctx.r29.s64 = 20;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82d0a670
	if (cr6.eq) goto loc_82D0A670;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82d0a4a4
	if (cr6.eq) goto loc_82D0A4A4;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// addi r8,r10,-31040
	ctx.r8.s64 = ctx.r10.s64 + -31040;
	// lwz r11,-31044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31044);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lbz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82d0a484
	if (!cr6.eq) goto loc_82D0A484;
	// cmpwi cr6,r9,14
	cr6.compare<int32_t>(ctx.r9.s32, 14, xer);
	// bne cr6,0x82d0a474
	if (!cr6.eq) goto loc_82D0A474;
	// li r29,19
	ctx.r29.s64 = 19;
	// b 0x82d0a610
	goto loc_82D0A610;
loc_82D0A474:
	// cmpwi cr6,r9,12
	cr6.compare<int32_t>(ctx.r9.s32, 12, xer);
	// bne cr6,0x82d0a610
	if (!cr6.eq) goto loc_82D0A610;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x82d0a610
	goto loc_82D0A610;
loc_82D0A484:
	// cmpwi cr6,r9,14
	cr6.compare<int32_t>(ctx.r9.s32, 14, xer);
	// bne cr6,0x82d0a494
	if (!cr6.eq) goto loc_82D0A494;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x82d0a610
	goto loc_82D0A610;
loc_82D0A494:
	// cmpwi cr6,r9,12
	cr6.compare<int32_t>(ctx.r9.s32, 12, xer);
	// bne cr6,0x82d0a610
	if (!cr6.eq) goto loc_82D0A610;
	// li r29,19
	ctx.r29.s64 = 19;
	// b 0x82d0a610
	goto loc_82D0A610;
loc_82D0A4A4:
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// addi r8,r1,-248
	ctx.r8.s64 = ctx.r1.s64 + -248;
	// lis r5,-31758
	ctx.r5.s64 = -2081292288;
	// lis r27,-31758
	ctx.r27.s64 = -2081292288;
	// addi r10,r1,-252
	ctx.r10.s64 = ctx.r1.s64 + -252;
	// lwz r9,-31044(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31044);
	// lwzx r30,r3,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,-31048(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31048);
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// lwz r5,-31052(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31052);
	// addi r31,r8,-30912
	ctx.r31.s64 = ctx.r8.s64 + -30912;
	// addi r6,r9,-30784
	ctx.r6.s64 = ctx.r9.s64 + -30784;
loc_82D0A4DC:
	// lwzx r9,r7,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a514
	if (cr6.eq) goto loc_82D0A514;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a508
	if (cr6.eq) goto loc_82D0A508;
	// lbzx r10,r9,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// b 0x82d0a518
	goto loc_82D0A518;
loc_82D0A508:
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82d0a518
	goto loc_82D0A518;
loc_82D0A514:
	// lbzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
loc_82D0A518:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a5f4
	if (cr6.eq) goto loc_82D0A5F4;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a54c
	if (cr6.eq) goto loc_82D0A54C;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a540
	if (cr6.eq) goto loc_82D0A540;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82d0a550
	goto loc_82D0A550;
loc_82D0A540:
	// lwzx r27,r7,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r27,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// b 0x82d0a550
	goto loc_82D0A550;
loc_82D0A54C:
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_82D0A550:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a5e0
	if (cr6.eq) goto loc_82D0A5E0;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a584
	if (cr6.eq) goto loc_82D0A584;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a578
	if (cr6.eq) goto loc_82D0A578;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82d0a588
	goto loc_82D0A588;
loc_82D0A578:
	// lwzx r27,r7,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r27,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// b 0x82d0a588
	goto loc_82D0A588;
loc_82D0A584:
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_82D0A588:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a5e8
	if (cr6.eq) goto loc_82D0A5E8;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a5bc
	if (cr6.eq) goto loc_82D0A5BC;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a5b0
	if (cr6.eq) goto loc_82D0A5B0;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82d0a5c0
	goto loc_82D0A5C0;
loc_82D0A5B0:
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82d0a5c0
	goto loc_82D0A5C0;
loc_82D0A5BC:
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_82D0A5C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a5f0
	if (cr6.eq) goto loc_82D0A5F0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r1,-252
	ctx.r10.s64 = ctx.r1.s64 + -252;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82d0a4dc
	if (cr6.lt) goto loc_82D0A4DC;
	// b 0x82d0a610
	goto loc_82D0A610;
loc_82D0A5E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82d0a5f4
	goto loc_82D0A5F4;
loc_82D0A5E8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82d0a5f4
	goto loc_82D0A5F4;
loc_82D0A5F0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82D0A5F4:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x82d0a610
	if (!cr6.lt) goto loc_82D0A610;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r29,r7,24
	ctx.r29.u64 = ctx.r7.u32 & 0xFF;
loc_82D0A610:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r9,r29,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0x7F8;
	// addi r10,r11,22472
	ctx.r10.s64 = ctx.r11.s64 + 22472;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d0a660
	if (!cr6.eq) goto loc_82D0A660;
	// cmpwi cr6,r8,20
	cr6.compare<int32_t>(ctx.r8.s32, 20, xer);
	// beq cr6,0x82d0a650
	if (cr6.eq) goto loc_82D0A650;
	// cmpwi cr6,r8,21
	cr6.compare<int32_t>(ctx.r8.s32, 21, xer);
	// bne cr6,0x82d0a660
	if (!cr6.eq) goto loc_82D0A660;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r9,r11,22648
	ctx.r9.s64 = ctx.r11.s64 + 22648;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82d0a658
	goto loc_82D0A658;
loc_82D0A650:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,22648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22648);
loc_82D0A658:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0A660:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D0A670:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0A67C"))) PPC_WEAK_FUNC(sub_82D0A67C);
PPC_FUNC_IMPL(__imp__sub_82D0A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A680"))) PPC_WEAK_FUNC(sub_82D0A680);
PPC_FUNC_IMPL(__imp__sub_82D0A680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D0A688;
	__savegprlr_27(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-2
	ctx.r10.s64 = -2;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r8.u32);
	// addic. r9,r9,-97
	xer.ca = ctx.r9.u32 > 96;
	ctx.r9.s64 = ctx.r9.s64 + -97;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r11.u32);
	// stw r7,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r7.u32);
	// stw r10,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r10.u32);
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// stw r11,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r11.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r11,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r11.u32);
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r11.u32);
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// stw r10,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r10.u32);
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// stw r10,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// stw r11,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r11.u32);
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// stw r11,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r11.u32);
	// stw r10,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r10.u32);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// blt 0x82d0a984
	if (cr0.lt) goto loc_82D0A984;
	// cmplwi cr6,r9,18
	cr6.compare<uint32_t>(ctx.r9.u32, 18, xer);
	// bge cr6,0x82d0a984
	if (!cr6.lt) goto loc_82D0A984;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,-272
	ctx.r8.s64 = ctx.r1.s64 + -272;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r29,20
	ctx.r29.s64 = 20;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82d0a984
	if (cr6.eq) goto loc_82D0A984;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82d0a7b8
	if (cr6.eq) goto loc_82D0A7B8;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82d0a924
	goto loc_82D0A924;
loc_82D0A7B8:
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// addi r8,r1,-264
	ctx.r8.s64 = ctx.r1.s64 + -264;
	// lis r5,-31758
	ctx.r5.s64 = -2081292288;
	// lis r27,-31758
	ctx.r27.s64 = -2081292288;
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
	// lwz r9,-31044(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31044);
	// lwzx r30,r3,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,-31048(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31048);
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// lwz r5,-31052(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31052);
	// addi r31,r8,-30912
	ctx.r31.s64 = ctx.r8.s64 + -30912;
	// addi r6,r9,-30784
	ctx.r6.s64 = ctx.r9.s64 + -30784;
loc_82D0A7F0:
	// lwzx r9,r7,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a828
	if (cr6.eq) goto loc_82D0A828;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a81c
	if (cr6.eq) goto loc_82D0A81C;
	// lbzx r10,r9,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// b 0x82d0a82c
	goto loc_82D0A82C;
loc_82D0A81C:
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82d0a82c
	goto loc_82D0A82C;
loc_82D0A828:
	// lbzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
loc_82D0A82C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a908
	if (cr6.eq) goto loc_82D0A908;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a860
	if (cr6.eq) goto loc_82D0A860;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a854
	if (cr6.eq) goto loc_82D0A854;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82d0a864
	goto loc_82D0A864;
loc_82D0A854:
	// lwzx r27,r7,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r27,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// b 0x82d0a864
	goto loc_82D0A864;
loc_82D0A860:
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_82D0A864:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a8f4
	if (cr6.eq) goto loc_82D0A8F4;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a898
	if (cr6.eq) goto loc_82D0A898;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a88c
	if (cr6.eq) goto loc_82D0A88C;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82d0a89c
	goto loc_82D0A89C;
loc_82D0A88C:
	// lwzx r27,r7,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r27,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// b 0x82d0a89c
	goto loc_82D0A89C;
loc_82D0A898:
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_82D0A89C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a8fc
	if (cr6.eq) goto loc_82D0A8FC;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0a8d0
	if (cr6.eq) goto loc_82D0A8D0;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x82d0a8c4
	if (cr6.eq) goto loc_82D0A8C4;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82d0a8d4
	goto loc_82D0A8D4;
loc_82D0A8C4:
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82d0a8d4
	goto loc_82D0A8D4;
loc_82D0A8D0:
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_82D0A8D4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d0a904
	if (cr6.eq) goto loc_82D0A904;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82d0a7f0
	if (cr6.lt) goto loc_82D0A7F0;
	// b 0x82d0a924
	goto loc_82D0A924;
loc_82D0A8F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82d0a908
	goto loc_82D0A908;
loc_82D0A8FC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82d0a908
	goto loc_82D0A908;
loc_82D0A904:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82D0A908:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x82d0a924
	if (!cr6.lt) goto loc_82D0A924;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r29,r7,24
	ctx.r29.u64 = ctx.r7.u32 & 0xFF;
loc_82D0A924:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r9,r29,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0x7F8;
	// addi r10,r11,22472
	ctx.r10.s64 = ctx.r11.s64 + 22472;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d0a974
	if (!cr6.eq) goto loc_82D0A974;
	// cmpwi cr6,r8,20
	cr6.compare<int32_t>(ctx.r8.s32, 20, xer);
	// beq cr6,0x82d0a964
	if (cr6.eq) goto loc_82D0A964;
	// cmpwi cr6,r8,21
	cr6.compare<int32_t>(ctx.r8.s32, 21, xer);
	// bne cr6,0x82d0a974
	if (!cr6.eq) goto loc_82D0A974;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r9,r11,22648
	ctx.r9.s64 = ctx.r11.s64 + 22648;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82d0a96c
	goto loc_82D0A96C;
loc_82D0A964:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,22648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22648);
loc_82D0A96C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82D0A974:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D0A984:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0A990"))) PPC_WEAK_FUNC(sub_82D0A990);
PPC_FUNC_IMPL(__imp__sub_82D0A990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// stw r3,-31056(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31056, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,-31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31044, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A9A8"))) PPC_WEAK_FUNC(sub_82D0A9A8);
PPC_FUNC_IMPL(__imp__sub_82D0A9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// stw r3,-31052(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31052, ctx.r3.u32);
	// stw r4,-31048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31048, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A9BC"))) PPC_WEAK_FUNC(sub_82D0A9BC);
PPC_FUNC_IMPL(__imp__sub_82D0A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A9C0"))) PPC_WEAK_FUNC(sub_82D0A9C0);
PPC_FUNC_IMPL(__imp__sub_82D0A9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-31040
	ctx.r7.s64 = ctx.r11.s64 + -31040;
	// addi r3,r10,-30912
	ctx.r3.s64 = ctx.r10.s64 + -30912;
	// addi r11,r9,-30784
	ctx.r11.s64 = ctx.r9.s64 + -30784;
	// stwx r4,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r5,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0A9EC"))) PPC_WEAK_FUNC(sub_82D0A9EC);
PPC_FUNC_IMPL(__imp__sub_82D0A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0A9F0"))) PPC_WEAK_FUNC(sub_82D0A9F0);
PPC_FUNC_IMPL(__imp__sub_82D0A9F0) {
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
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// li r11,22
	ctx.r11.s64 = 22;
	// addi r5,r7,22648
	ctx.r5.s64 = ctx.r7.s64 + 22648;
	// addi r9,r6,22472
	ctx.r9.s64 = ctx.r6.s64 + 22472;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,22648(r7)
	PPC_STORE_U32(ctx.r7.u32 + 22648, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D0AA28:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0aa54
	if (cr6.eq) goto loc_82D0AA54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D0AA38:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d0aa38
	if (!cr6.eq) goto loc_82D0AA38;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
loc_82D0AA54:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82d0aa28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0AA28;
	// bl 0x8310e010
	ctx.lr = 0x82D0AA60;
	sub_8310E010(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r8,r10,-30656
	ctx.r8.s64 = ctx.r10.s64 + -30656;
	// bne cr6,0x82d0aa7c
	if (!cr6.eq) goto loc_82D0AA7C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,22912
	ctx.r11.s64 = ctx.r11.s64 + 22912;
	// b 0x82d0aa84
	goto loc_82D0AA84;
loc_82D0AA7C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
loc_82D0AA84:
	// stw r11,-30656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30656, ctx.r11.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D0AA94:
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0aac8
	if (cr6.eq) goto loc_82D0AAC8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D0AAA8:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d0aaa8
	if (!cr6.eq) goto loc_82D0AAA8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82D0AAC8:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x82d0aa94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0AA94;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24616
	ctx.r4.s64 = ctx.r11.s64 + -24616;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AAE0;
	sub_82D0BDB8(ctx, base);
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,-24472
	ctx.r4.s64 = ctx.r10.s64 + -24472;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AAF0;
	sub_82D0BDB8(ctx, base);
	// lis r9,-32047
	ctx.r9.s64 = -2100232192;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r4,r9,-24328
	ctx.r4.s64 = ctx.r9.s64 + -24328;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AB00;
	sub_82D0BDB8(ctx, base);
	// lis r8,-32047
	ctx.r8.s64 = -2100232192;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r8,-24184
	ctx.r4.s64 = ctx.r8.s64 + -24184;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AB10;
	sub_82D0BDB8(ctx, base);
	// lis r7,-32047
	ctx.r7.s64 = -2100232192;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r7,-24040
	ctx.r4.s64 = ctx.r7.s64 + -24040;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AB20;
	sub_82D0BDB8(ctx, base);
	// lis r6,-32047
	ctx.r6.s64 = -2100232192;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r6,-23808
	ctx.r4.s64 = ctx.r6.s64 + -23808;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AB30;
	sub_82D0BDB8(ctx, base);
	// lis r5,-32047
	ctx.r5.s64 = -2100232192;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r5,-22912
	ctx.r4.s64 = ctx.r5.s64 + -22912;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AB40;
	sub_82D0BDB8(ctx, base);
	// lis r4,-32047
	ctx.r4.s64 = -2100232192;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r4,r4,-23896
	ctx.r4.s64 = ctx.r4.s64 + -23896;
	// bl 0x82d0bdb8
	ctx.lr = 0x82D0AB50;
	sub_82D0BDB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0AB60"))) PPC_WEAK_FUNC(sub_82D0AB60);
PPC_FUNC_IMPL(__imp__sub_82D0AB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// stw r3,-31044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31044, ctx.r3.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-31044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31044, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0AB7C"))) PPC_WEAK_FUNC(sub_82D0AB7C);
PPC_FUNC_IMPL(__imp__sub_82D0AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0AB80"))) PPC_WEAK_FUNC(sub_82D0AB80);
PPC_FUNC_IMPL(__imp__sub_82D0AB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-31056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31056);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// stw r11,-31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31044, ctx.r11.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31044, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0ABA8"))) PPC_WEAK_FUNC(sub_82D0ABA8);
PPC_FUNC_IMPL(__imp__sub_82D0ABA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0ABB4"))) PPC_WEAK_FUNC(sub_82D0ABB4);
PPC_FUNC_IMPL(__imp__sub_82D0ABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0ABB8"))) PPC_WEAK_FUNC(sub_82D0ABB8);
PPC_FUNC_IMPL(__imp__sub_82D0ABB8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d05600
	ctx.lr = 0x82D0ABD4;
	sub_82D05600(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D0ABF0"))) PPC_WEAK_FUNC(sub_82D0ABF0);
PPC_FUNC_IMPL(__imp__sub_82D0ABF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d0ac10
	if (cr6.eq) goto loc_82D0AC10;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// ble cr6,0x82d0ac10
	if (!cr6.gt) goto loc_82D0AC10;
loc_82D0AC04:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0ac04
	if (cr6.gt) goto loc_82D0AC04;
loc_82D0AC10:
	// sth r11,92(r3)
	PPC_STORE_U16(ctx.r3.u32 + 92, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0AC18"))) PPC_WEAK_FUNC(sub_82D0AC18);
PPC_FUNC_IMPL(__imp__sub_82D0AC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0AC20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82d0acbc
	if (cr6.eq) goto loc_82D0ACBC;
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d0ac60
	if (cr6.gt) goto loc_82D0AC60;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d0ac64
	if (!cr6.gt) goto loc_82D0AC64;
loc_82D0AC60:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82D0AC64:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0AC78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0acb4
	if (cr6.eq) goto loc_82D0ACB4;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82d0acb8
	if (cr0.lt) goto loc_82D0ACB8;
loc_82D0AC94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0cb88
	ctx.lr = 0x82D0AC9C;
	sub_82D0CB88(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bge 0x82d0ac94
	if (!cr0.lt) goto loc_82D0AC94;
	// stw r29,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D0ACB4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D0ACB8:
	// stw r29,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
loc_82D0ACBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0ACC4"))) PPC_WEAK_FUNC(sub_82D0ACC4);
PPC_FUNC_IMPL(__imp__sub_82D0ACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0ACC8"))) PPC_WEAK_FUNC(sub_82D0ACC8);
PPC_FUNC_IMPL(__imp__sub_82D0ACC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0ACD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d0ad54
	if (cr6.eq) goto loc_82D0AD54;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5c8
	ctx.lr = 0x82D0ACF0;
	sub_82D0C5C8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r3,43
	ctx.r3.s64 = 43;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82d05600
	ctx.lr = 0x82D0AD04;
	sub_82D05600(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r3,42
	ctx.r3.s64 = 42;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d0ad1c
	if (cr6.eq) goto loc_82D0AD1C;
	// li r3,43
	ctx.r3.s64 = 43;
loc_82D0AD1C:
	// bl 0x82d05600
	ctx.lr = 0x82D0AD20;
	sub_82D05600(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82D0AD28:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D0AD34;
	sub_82D0C5F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d0ad5c
	if (!cr6.eq) goto loc_82D0AD5C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d0ad28
	if (!cr6.eq) goto loc_82D0AD28;
loc_82D0AD54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D0AD5C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc70
	ctx.lr = 0x82D0AD64;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0ad88
	if (!cr6.eq) goto loc_82D0AD88;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc98
	ctx.lr = 0x82D0AD78;
	sub_82D0BC98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0ad8c
	if (cr6.eq) goto loc_82D0AD8C;
loc_82D0AD88:
	// li r4,32
	ctx.r4.s64 = 32;
loc_82D0AD8C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d0d568
	ctx.lr = 0x82D0ADA0;
	sub_82D0D568(ctx, base);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// b 0x82d0ad28
	goto loc_82D0AD28;
}

__attribute__((alias("__imp__sub_82D0ADA8"))) PPC_WEAK_FUNC(sub_82D0ADA8);
PPC_FUNC_IMPL(__imp__sub_82D0ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0ADB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,84(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d0adf0
	if (!cr6.gt) goto loc_82D0ADF0;
loc_82D0ADD0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0cf68
	ctx.lr = 0x82D0ADDC;
	sub_82D0CF68(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d0add0
	if (cr6.lt) goto loc_82D0ADD0;
loc_82D0ADF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0ADF8"))) PPC_WEAK_FUNC(sub_82D0ADF8);
PPC_FUNC_IMPL(__imp__sub_82D0ADF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D0AE00;
	__savegprlr_27(ctx, base);
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d0ae2c
	if (!cr6.eq) goto loc_82D0AE2C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x833cb2c8
	ctx.lr = 0x82D0AE24;
	sub_833CB2C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82d0ae30
	goto loc_82D0AE30;
loc_82D0AE2C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82D0AE30:
	// lwz r27,96(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83779190
	ctx.lr = 0x82D0AE40;
	sub_83779190(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833cb570
	ctx.lr = 0x82D0AE4C;
	sub_833CB570(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x833cb348
	ctx.lr = 0x82D0AE58;
	sub_833CB348(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833cb518
	ctx.lr = 0x82D0AE68;
	sub_833CB518(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// lbz r6,90(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 90);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r5,89(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// lbz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// bl 0x83779190
	ctx.lr = 0x82D0AE80;
	sub_83779190(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb580
	ctx.lr = 0x82D0AE90;
	sub_833CB580(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb570
	ctx.lr = 0x82D0AEA0;
	sub_833CB570(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb580
	ctx.lr = 0x82D0AEB0;
	sub_833CB580(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb570
	ctx.lr = 0x82D0AEC0;
	sub_833CB570(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r6,90(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 90);
	// li r7,255
	ctx.r7.s64 = 255;
	// lbz r5,89(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// lbz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// bl 0x83779190
	ctx.lr = 0x82D0AED8;
	sub_83779190(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb580
	ctx.lr = 0x82D0AEE8;
	sub_833CB580(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb570
	ctx.lr = 0x82D0AEF8;
	sub_833CB570(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb580
	ctx.lr = 0x82D0AF08;
	sub_833CB580(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb570
	ctx.lr = 0x82D0AF18;
	sub_833CB570(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d28578
	ctx.lr = 0x82D0AF20;
	sub_82D28578(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82d0af34
	if (!cr6.eq) goto loc_82D0AF34;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x82D0AF34;
	sub_833CB2F8(ctx, base);
loc_82D0AF34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0AF3C"))) PPC_WEAK_FUNC(sub_82D0AF3C);
PPC_FUNC_IMPL(__imp__sub_82D0AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0AF40"))) PPC_WEAK_FUNC(sub_82D0AF40);
PPC_FUNC_IMPL(__imp__sub_82D0AF40) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0AF58"))) PPC_WEAK_FUNC(sub_82D0AF58);
PPC_FUNC_IMPL(__imp__sub_82D0AF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0AF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d0af84
	if (!cr6.eq) goto loc_82D0AF84;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// b 0x82d0b190
	goto loc_82D0B190;
loc_82D0AF84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d070f8
	ctx.lr = 0x82D0AF8C;
	sub_82D070F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d08790
	ctx.lr = 0x82D0AF94;
	sub_82D08790(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D0AFA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d08890
	ctx.lr = 0x82D0AFB0;
	sub_82D08890(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d09df8
	ctx.lr = 0x82D0AFB8;
	sub_82D09DF8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d0b044
	if (cr6.gt) goto loc_82D0B044;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82d0f368
	ctx.lr = 0x82D0AFD4;
	sub_82D0F368(ctx, base);
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,6
	ctx.r9.s64 = ctx.r3.s64 + 6;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add. r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82d0b008
	if (cr0.eq) goto loc_82D0B008;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82d0b008
	if (!cr6.gt) goto loc_82D0B008;
loc_82D0AFFC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0affc
	if (cr6.gt) goto loc_82D0AFFC;
loc_82D0B008:
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82d0b03c
	if (cr0.eq) goto loc_82D0B03C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82d0b03c
	if (!cr6.gt) goto loc_82D0B03C;
loc_82D0B030:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d0b030
	if (cr6.gt) goto loc_82D0B030;
loc_82D0B03C:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x82d0b0a8
	goto loc_82D0B0A8;
loc_82D0B044:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d0b070
	if (cr6.eq) goto loc_82D0B070;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82d0b070
	if (!cr6.gt) goto loc_82D0B070;
loc_82D0B064:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0b064
	if (cr6.gt) goto loc_82D0B064;
loc_82D0B070:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d0b0a4
	if (cr6.eq) goto loc_82D0B0A4;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82d0b0a4
	if (!cr6.gt) goto loc_82D0B0A4;
loc_82D0B098:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0b098
	if (cr6.gt) goto loc_82D0B098;
loc_82D0B0A4:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_82D0B0A8:
	// lhz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 92);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d0b0c0
	if (!cr6.lt) goto loc_82D0B0C0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82D0B0C0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d0b120
	if (cr6.eq) goto loc_82D0B120;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ee550
	ctx.lr = 0x82D0B0DC;
	sub_835EE550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ed758
	ctx.lr = 0x82D0B0E8;
	sub_835ED758(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d0ada8
	ctx.lr = 0x82D0B0F8;
	sub_82D0ADA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D0B10C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ed308
	ctx.lr = 0x82D0B114;
	sub_835ED308(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D0B120:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0b18c
	if (cr6.eq) goto loc_82D0B18C;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D0B144;
	sub_82595150(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0b180
	if (cr6.eq) goto loc_82D0B180;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d0b17c
	if (cr6.eq) goto loc_82D0B17C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D0B178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d0b180
	goto loc_82D0B180;
loc_82D0B17C:
	// bl 0x82416268
	ctx.lr = 0x82D0B180;
	sub_82416268(ctx, base);
loc_82D0B180:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D0B188;
	sub_82595170(ctx, base);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
loc_82D0B18C:
	// std r31,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r31.u64);
loc_82D0B190:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82D0B19C;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0B1A8"))) PPC_WEAK_FUNC(sub_82D0B1A8);
PPC_FUNC_IMPL(__imp__sub_82D0B1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0B1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0b21c
	if (cr6.eq) goto loc_82D0B21C;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82d0b1fc
	if (cr0.lt) goto loc_82D0B1FC;
loc_82D0B1E8:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0ced8
	ctx.lr = 0x82D0B1F4;
	sub_82D0CED8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x82d0b1e8
	if (!cr0.lt) goto loc_82D0B1E8;
loc_82D0B1FC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0b210
	if (cr6.eq) goto loc_82D0B210;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82D0B210;
	sub_82416268(ctx, base);
loc_82D0B210:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D0B21C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0ced8
	ctx.lr = 0x82D0B224;
	sub_82D0CED8(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0b238
	if (cr6.eq) goto loc_82D0B238;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82D0B238;
	sub_82416268(ctx, base);
loc_82D0B238:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0B244"))) PPC_WEAK_FUNC(sub_82D0B244);
PPC_FUNC_IMPL(__imp__sub_82D0B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B248"))) PPC_WEAK_FUNC(sub_82D0B248);
PPC_FUNC_IMPL(__imp__sub_82D0B248) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0b298
	if (cr6.eq) goto loc_82D0B298;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D0B278;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D0B290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D0B298;
	sub_82595170(ctx, base);
loc_82D0B298:
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

__attribute__((alias("__imp__sub_82D0B2AC"))) PPC_WEAK_FUNC(sub_82D0B2AC);
PPC_FUNC_IMPL(__imp__sub_82D0B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B2B0"))) PPC_WEAK_FUNC(sub_82D0B2B0);
PPC_FUNC_IMPL(__imp__sub_82D0B2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D0B2B8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0b4b4
	if (cr6.eq) goto loc_82D0B4B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d0b334
	if (cr6.gt) goto loc_82D0B334;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82d0f368
	ctx.lr = 0x82D0B2FC;
	sub_82D0F368(ctx, base);
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// lfs f12,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// b 0x82d0b358
	goto loc_82D0B358;
loc_82D0B334:
	// lfs f13,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_82D0B358:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f31,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82D0B3BC:
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x831fcbb0
	ctx.lr = 0x82D0B3DC;
	sub_831FCBB0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(ctx.r31.s32, 16, xer);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfsu f11,20(r30)
	ea = 20 + ctx.r30.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x82d0b3bc
	if (cr6.lt) goto loc_82D0B3BC;
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f30,f9
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fdivs f0,f29,f11
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ble cr6,0x82d0b49c
	if (!cr6.gt) goto loc_82D0B49C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x82d0b49c
	if (cr6.gt) goto loc_82D0B49C;
	// lbz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// li r10,255
	ctx.r10.s64 = 255;
	// lbz r9,89(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 89);
	// lbz r8,90(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 90);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r10,111(r29)
	PPC_STORE_U8(ctx.r29.u32 + 111, ctx.r10.u8);
	// rlwinm r5,r8,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r7,108(r29)
	PPC_STORE_U8(ctx.r29.u32 + 108, ctx.r7.u8);
	// stb r6,109(r29)
	PPC_STORE_U8(ctx.r29.u32 + 109, ctx.r6.u8);
	// stb r5,110(r29)
	PPC_STORE_U8(ctx.r29.u32 + 110, ctx.r5.u8);
	// b 0x82d0b4a4
	goto loc_82D0B4A4;
loc_82D0B49C:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
loc_82D0B4A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0adf8
	ctx.lr = 0x82D0B4B4;
	sub_82D0ADF8(ctx, base);
loc_82D0B4B4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0B4C8"))) PPC_WEAK_FUNC(sub_82D0B4C8);
PPC_FUNC_IMPL(__imp__sub_82D0B4C8) {
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
	// bl 0x82d07150
	ctx.lr = 0x82D0B4E4;
	sub_82D07150(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82bee188
	ctx.lr = 0x82D0B504;
	sub_82BEE188(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// sth r30,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1272
	ctx.r10.s64 = ctx.r11.s64 + 1272;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0B53C"))) PPC_WEAK_FUNC(sub_82D0B53C);
PPC_FUNC_IMPL(__imp__sub_82D0B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B540"))) PPC_WEAK_FUNC(sub_82D0B540);
PPC_FUNC_IMPL(__imp__sub_82D0B540) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,1272
	ctx.r10.s64 = ctx.r11.s64 + 1272;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d0b578
	if (cr6.eq) goto loc_82D0B578;
	// bl 0x833bbd78
	ctx.lr = 0x82D0B570;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82D0B578:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d04ac8
	ctx.lr = 0x82D0B58C;
	sub_82D04AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d087f8
	ctx.lr = 0x82D0B594;
	sub_82D087F8(ctx, base);
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

__attribute__((alias("__imp__sub_82D0B5A8"))) PPC_WEAK_FUNC(sub_82D0B5A8);
PPC_FUNC_IMPL(__imp__sub_82D0B5A8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0B5CC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0b5e8
	if (cr6.eq) goto loc_82D0B5E8;
	// bl 0x82d0b4c8
	ctx.lr = 0x82D0B5D8;
	sub_82D0B4C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0B5E8:
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

__attribute__((alias("__imp__sub_82D0B5FC"))) PPC_WEAK_FUNC(sub_82D0B5FC);
PPC_FUNC_IMPL(__imp__sub_82D0B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B600"))) PPC_WEAK_FUNC(sub_82D0B600);
PPC_FUNC_IMPL(__imp__sub_82D0B600) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0b658
	if (cr6.eq) goto loc_82D0B658;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0b6ac
	if (!cr6.eq) goto loc_82D0B6AC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d0af58
	ctx.lr = 0x82D0B640;
	sub_82D0AF58(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d0b670
	if (!cr6.eq) goto loc_82D0B670;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82D0B658;
	sub_82572FA0(ctx, base);
loc_82D0B658:
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
loc_82D0B670:
	// bl 0x825832e8
	ctx.lr = 0x82D0B674;
	sub_825832E8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825832f0
	ctx.lr = 0x82D0B680;
	sub_825832F0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bcae8
	ctx.lr = 0x82D0B69C;
	sub_833BCAE8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82D0B6AC;
	sub_82572FA0(ctx, base);
loc_82D0B6AC:
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
}

__attribute__((alias("__imp__sub_82D0B6C4"))) PPC_WEAK_FUNC(sub_82D0B6C4);
PPC_FUNC_IMPL(__imp__sub_82D0B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B6C8"))) PPC_WEAK_FUNC(sub_82D0B6C8);
PPC_FUNC_IMPL(__imp__sub_82D0B6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d04ac8
	ctx.lr = 0x82D0B6F4;
	sub_82D04AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d087f8
	ctx.lr = 0x82D0B6FC;
	sub_82D087F8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d0b714
	if (cr6.eq) goto loc_82D0B714;
	// bl 0x82416268
	ctx.lr = 0x82D0B710;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D0B714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0B72C"))) PPC_WEAK_FUNC(sub_82D0B72C);
PPC_FUNC_IMPL(__imp__sub_82D0B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B730"))) PPC_WEAK_FUNC(sub_82D0B730);
PPC_FUNC_IMPL(__imp__sub_82D0B730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,1272
	ctx.r10.s64 = ctx.r11.s64 + 1272;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d0b770
	if (cr6.eq) goto loc_82D0B770;
	// bl 0x833bbd78
	ctx.lr = 0x82D0B768;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82D0B770:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d04ac8
	ctx.lr = 0x82D0B784;
	sub_82D04AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d087f8
	ctx.lr = 0x82D0B78C;
	sub_82D087F8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d0b7a4
	if (cr6.eq) goto loc_82D0B7A4;
	// bl 0x82416268
	ctx.lr = 0x82D0B7A0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D0B7A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0B7BC"))) PPC_WEAK_FUNC(sub_82D0B7BC);
PPC_FUNC_IMPL(__imp__sub_82D0B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0B7C0"))) PPC_WEAK_FUNC(sub_82D0B7C0);
PPC_FUNC_IMPL(__imp__sub_82D0B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,55458
	cr6.compare<uint32_t>(ctx.r3.u32, 55458, xer);
	// blt cr6,0x82d0b7f4
	if (cr6.lt) goto loc_82D0B7F4;
	// cmplwi cr6,r3,55482
	cr6.compare<uint32_t>(ctx.r3.u32, 55482, xer);
	// bgt cr6,0x82d0b7f4
	if (cr6.gt) goto loc_82D0B7F4;
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,10078
	ctx.r11.s64 = ctx.r11.s64 + 10078;
	// addi r9,r10,1672
	ctx.r9.s64 = ctx.r10.s64 + 1672;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82D0B7F4:
	// cmplwi cr6,r3,55681
	cr6.compare<uint32_t>(ctx.r3.u32, 55681, xer);
	// blt cr6,0x82d0b828
	if (cr6.lt) goto loc_82D0B828;
	// cmplwi cr6,r3,55690
	cr6.compare<uint32_t>(ctx.r3.u32, 55690, xer);
	// bgt cr6,0x82d0b828
	if (cr6.gt) goto loc_82D0B828;
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,9855
	ctx.r11.s64 = ctx.r11.s64 + 9855;
	// addi r9,r10,1512
	ctx.r9.s64 = ctx.r10.s64 + 1512;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82D0B828:
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r11,r11,48053
	ctx.r11.u64 = ctx.r11.u64 | 48053;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d0b854
	if (!cr6.eq) goto loc_82D0B854;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// lis r3,239
	ctx.r3.s64 = 15663104;
	// ori r3,r3,48054
	ctx.r3.u64 = ctx.r3.u64 | 48054;
	// blr 
	return;
loc_82D0B854:
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r11,r11,48055
	ctx.r11.u64 = ctx.r11.u64 | 48055;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d0b880
	if (!cr6.eq) goto loc_82D0B880;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// lis r3,239
	ctx.r3.s64 = 15663104;
	// ori r3,r3,48056
	ctx.r3.u64 = ctx.r3.u64 | 48056;
	// blr 
	return;
loc_82D0B880:
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r11,r11,48057
	ctx.r11.u64 = ctx.r11.u64 | 48057;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d0b8ac
	if (!cr6.eq) goto loc_82D0B8AC;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// lis r3,239
	ctx.r3.s64 = 15663104;
	// ori r3,r3,48058
	ctx.r3.u64 = ctx.r3.u64 | 48058;
	// blr 
	return;
loc_82D0B8AC:
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r11,r11,48059
	ctx.r11.u64 = ctx.r11.u64 | 48059;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x82d0b8d8
	if (cr6.eq) goto loc_82D0B8D8;
	// lis r3,239
	ctx.r3.s64 = 15663104;
	// ori r3,r3,48060
	ctx.r3.u64 = ctx.r3.u64 | 48060;
	// blr 
	return;
loc_82D0B8D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0B8E0"))) PPC_WEAK_FUNC(sub_82D0B8E0);
PPC_FUNC_IMPL(__imp__sub_82D0B8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,55424
	cr6.compare<uint32_t>(ctx.r3.u32, 55424, xer);
	// blt cr6,0x82d0b8f0
	if (cr6.lt) goto loc_82D0B8F0;
	// cmplwi cr6,r3,56255
	cr6.compare<uint32_t>(ctx.r3.u32, 56255, xer);
	// ble cr6,0x82d0b940
	if (!cr6.gt) goto loc_82D0B940;
loc_82D0B8F0:
	// cmplwi cr6,r3,56720
	cr6.compare<uint32_t>(ctx.r3.u32, 56720, xer);
	// blt cr6,0x82d0b900
	if (cr6.lt) goto loc_82D0B900;
	// cmplwi cr6,r3,56767
	cr6.compare<uint32_t>(ctx.r3.u32, 56767, xer);
	// ble cr6,0x82d0b940
	if (!cr6.gt) goto loc_82D0B940;
loc_82D0B900:
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,44432
	ctx.r10.u64 = ctx.r11.u64 | 44432;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d0b920
	if (cr6.lt) goto loc_82D0B920;
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,47039
	ctx.r10.u64 = ctx.r11.u64 | 47039;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d0b940
	if (!cr6.gt) goto loc_82D0B940;
loc_82D0B920:
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,47536
	ctx.r10.u64 = ctx.r11.u64 | 47536;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d0b94c
	if (cr6.lt) goto loc_82D0B94C;
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,48063
	ctx.r10.u64 = ctx.r11.u64 | 48063;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d0b94c
	if (cr6.gt) goto loc_82D0B94C;
loc_82D0B940:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82D0B94C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0B958"))) PPC_WEAK_FUNC(sub_82D0B958);
PPC_FUNC_IMPL(__imp__sub_82D0B958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,55463
	cr6.compare<uint32_t>(ctx.r3.u32, 55463, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55471
	cr6.compare<uint32_t>(ctx.r3.u32, 55471, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55472
	cr6.compare<uint32_t>(ctx.r3.u32, 55472, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55473
	cr6.compare<uint32_t>(ctx.r3.u32, 55473, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55474
	cr6.compare<uint32_t>(ctx.r3.u32, 55474, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55688
	cr6.compare<uint32_t>(ctx.r3.u32, 55688, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55457
	cr6.compare<uint32_t>(ctx.r3.u32, 55457, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55460
	cr6.compare<uint32_t>(ctx.r3.u32, 55460, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55461
	cr6.compare<uint32_t>(ctx.r3.u32, 55461, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55459
	cr6.compare<uint32_t>(ctx.r3.u32, 55459, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// cmplwi cr6,r3,55458
	cr6.compare<uint32_t>(ctx.r3.u32, 55458, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,48053
	ctx.r10.u64 = ctx.r11.u64 | 48053;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,48055
	ctx.r10.u64 = ctx.r11.u64 | 48055;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,48057
	ctx.r10.u64 = ctx.r11.u64 | 48057;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0b9f4
	if (cr6.eq) goto loc_82D0B9F4;
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,48059
	ctx.r10.u64 = ctx.r11.u64 | 48059;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d0b9f8
	if (!cr6.eq) goto loc_82D0B9F8;
loc_82D0B9F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0B9F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BA00"))) PPC_WEAK_FUNC(sub_82D0BA00);
PPC_FUNC_IMPL(__imp__sub_82D0BA00) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -65536;
	// addi r10,r10,10079
	ctx.r10.s64 = ctx.r10.s64 + 10079;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BA14"))) PPC_WEAK_FUNC(sub_82D0BA14);
PPC_FUNC_IMPL(__imp__sub_82D0BA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BA18"))) PPC_WEAK_FUNC(sub_82D0BA18);
PPC_FUNC_IMPL(__imp__sub_82D0BA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,55436
	cr6.compare<uint32_t>(ctx.r3.u32, 55436, xer);
	// beq cr6,0x82d0ba34
	if (cr6.eq) goto loc_82D0BA34;
	// cmplwi cr6,r3,55451
	cr6.compare<uint32_t>(ctx.r3.u32, 55451, xer);
	// beq cr6,0x82d0ba34
	if (cr6.eq) goto loc_82D0BA34;
	// cmplwi cr6,r3,55455
	cr6.compare<uint32_t>(ctx.r3.u32, 55455, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0ba38
	if (!cr6.eq) goto loc_82D0BA38;
loc_82D0BA34:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0BA38:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BA40"))) PPC_WEAK_FUNC(sub_82D0BA40);
PPC_FUNC_IMPL(__imp__sub_82D0BA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,55694
	cr6.compare<uint32_t>(ctx.r3.u32, 55694, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55695
	cr6.compare<uint32_t>(ctx.r3.u32, 55695, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55696
	cr6.compare<uint32_t>(ctx.r3.u32, 55696, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55698
	cr6.compare<uint32_t>(ctx.r3.u32, 55698, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55691
	cr6.compare<uint32_t>(ctx.r3.u32, 55691, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55692
	cr6.compare<uint32_t>(ctx.r3.u32, 55692, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55693
	cr6.compare<uint32_t>(ctx.r3.u32, 55693, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55697
	cr6.compare<uint32_t>(ctx.r3.u32, 55697, xer);
	// beq cr6,0x82d0ba8c
	if (cr6.eq) goto loc_82D0BA8C;
	// cmplwi cr6,r3,55728
	cr6.compare<uint32_t>(ctx.r3.u32, 55728, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0ba90
	if (!cr6.eq) goto loc_82D0BA90;
loc_82D0BA8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0BA90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BA98"))) PPC_WEAK_FUNC(sub_82D0BA98);
PPC_FUNC_IMPL(__imp__sub_82D0BA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,33
	cr6.compare<uint32_t>(ctx.r3.u32, 33, xer);
	// beq cr6,0x82d0bacc
	if (cr6.eq) goto loc_82D0BACC;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r9,r9,2088
	ctx.r9.s64 = ctx.r9.s64 + 2088;
loc_82D0BAB0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0bad4
	if (cr6.eq) goto loc_82D0BAD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x82d0bab0
	if (!cr6.eq) goto loc_82D0BAB0;
loc_82D0BACC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D0BAD4:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r11,r11,2072
	ctx.r11.s64 = ctx.r11.s64 + 2072;
loc_82D0BADC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82d0baf4
	if (cr6.gt) goto loc_82D0BAF4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x82d0bacc
	if (!cr6.gt) goto loc_82D0BACC;
loc_82D0BAF4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0bb04
	if (cr6.eq) goto loc_82D0BB04;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82d0badc
	goto loc_82D0BADC;
loc_82D0BB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BB0C"))) PPC_WEAK_FUNC(sub_82D0BB0C);
PPC_FUNC_IMPL(__imp__sub_82D0BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BB10"))) PPC_WEAK_FUNC(sub_82D0BB10);
PPC_FUNC_IMPL(__imp__sub_82D0BB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// beq cr6,0x82d0bb34
	if (cr6.eq) goto loc_82D0BB34;
	// cmplwi cr6,r3,91
	cr6.compare<uint32_t>(ctx.r3.u32, 91, xer);
	// beq cr6,0x82d0bb34
	if (cr6.eq) goto loc_82D0BB34;
	// cmplwi cr6,r3,60
	cr6.compare<uint32_t>(ctx.r3.u32, 60, xer);
	// beq cr6,0x82d0bb34
	if (cr6.eq) goto loc_82D0BB34;
	// cmplwi cr6,r3,123
	cr6.compare<uint32_t>(ctx.r3.u32, 123, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0bb38
	if (!cr6.eq) goto loc_82D0BB38;
loc_82D0BB34:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0BB38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0bb4c
	if (cr6.eq) goto loc_82D0BB4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D0BB4C:
	// cmplwi cr6,r3,41
	cr6.compare<uint32_t>(ctx.r3.u32, 41, xer);
	// beq cr6,0x82d0bb70
	if (cr6.eq) goto loc_82D0BB70;
	// cmplwi cr6,r3,93
	cr6.compare<uint32_t>(ctx.r3.u32, 93, xer);
	// beq cr6,0x82d0bb70
	if (cr6.eq) goto loc_82D0BB70;
	// cmplwi cr6,r3,62
	cr6.compare<uint32_t>(ctx.r3.u32, 62, xer);
	// beq cr6,0x82d0bb70
	if (cr6.eq) goto loc_82D0BB70;
	// cmplwi cr6,r3,125
	cr6.compare<uint32_t>(ctx.r3.u32, 125, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0bb74
	if (!cr6.eq) goto loc_82D0BB74;
loc_82D0BB70:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0BB74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82D0BB84"))) PPC_WEAK_FUNC(sub_82D0BB84);
PPC_FUNC_IMPL(__imp__sub_82D0BB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BB88"))) PPC_WEAK_FUNC(sub_82D0BB88);
PPC_FUNC_IMPL(__imp__sub_82D0BB88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-91
	ctx.r11.s64 = ctx.r3.s64 + -91;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BB98"))) PPC_WEAK_FUNC(sub_82D0BB98);
PPC_FUNC_IMPL(__imp__sub_82D0BB98) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-93
	ctx.r11.s64 = ctx.r3.s64 + -93;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BBA8"))) PPC_WEAK_FUNC(sub_82D0BBA8);
PPC_FUNC_IMPL(__imp__sub_82D0BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d0bbcc
	if (cr6.lt) goto loc_82D0BBCC;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,33727
	ctx.r10.u64 = ctx.r11.u64 | 33727;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d0bbd0
	if (!cr6.gt) goto loc_82D0BBD0;
loc_82D0BBCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D0BBD0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BBD8"))) PPC_WEAK_FUNC(sub_82D0BBD8);
PPC_FUNC_IMPL(__imp__sub_82D0BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d0bbfc
	if (cr6.lt) goto loc_82D0BBFC;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,33727
	ctx.r10.u64 = ctx.r11.u64 | 33727;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d0bc00
	if (!cr6.gt) goto loc_82D0BC00;
loc_82D0BBFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D0BC00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0bc14
	if (!cr6.eq) goto loc_82D0BC14;
loc_82D0BC0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D0BC14:
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,33427
	ctx.r10.u64 = ctx.r11.u64 | 33427;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d0bc34
	if (cr6.lt) goto loc_82D0BC34;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,33434
	ctx.r10.u64 = ctx.r11.u64 | 33434;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d0bc0c
	if (!cr6.gt) goto loc_82D0BC0C;
loc_82D0BC34:
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,32919
	ctx.r10.u64 = ctx.r11.u64 | 32919;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0bc0c
	if (cr6.eq) goto loc_82D0BC0C;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,32917
	ctx.r10.u64 = ctx.r11.u64 | 32917;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0bc0c
	if (cr6.eq) goto loc_82D0BC0C;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,33425
	ctx.r10.u64 = ctx.r11.u64 | 33425;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BC6C"))) PPC_WEAK_FUNC(sub_82D0BC6C);
PPC_FUNC_IMPL(__imp__sub_82D0BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BC70"))) PPC_WEAK_FUNC(sub_82D0BC70);
PPC_FUNC_IMPL(__imp__sub_82D0BC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// beq cr6,0x82d0bc8c
	if (cr6.eq) goto loc_82D0BC8C;
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d0bc90
	if (!cr6.eq) goto loc_82D0BC90;
loc_82D0BC8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0BC90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BC98"))) PPC_WEAK_FUNC(sub_82D0BC98);
PPC_FUNC_IMPL(__imp__sub_82D0BC98) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -65536;
	// addi r10,r10,15712
	ctx.r10.s64 = ctx.r10.s64 + 15712;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BCAC"))) PPC_WEAK_FUNC(sub_82D0BCAC);
PPC_FUNC_IMPL(__imp__sub_82D0BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BCB0"))) PPC_WEAK_FUNC(sub_82D0BCB0);
PPC_FUNC_IMPL(__imp__sub_82D0BCB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,32898
	ctx.r10.u64 = ctx.r11.u64 | 32898;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0bcd4
	if (cr6.eq) goto loc_82D0BCD4;
	// cmplwi cr6,r3,63
	cr6.compare<uint32_t>(ctx.r3.u32, 63, xer);
	// beq cr6,0x82d0bcd4
	if (cr6.eq) goto loc_82D0BCD4;
	// cmplwi cr6,r3,33
	cr6.compare<uint32_t>(ctx.r3.u32, 33, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0bcd8
	if (!cr6.eq) goto loc_82D0BCD8;
loc_82D0BCD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0BCD8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BCE0"))) PPC_WEAK_FUNC(sub_82D0BCE0);
PPC_FUNC_IMPL(__imp__sub_82D0BCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r11,r11,32897
	ctx.r11.u64 = ctx.r11.u64 | 32897;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

