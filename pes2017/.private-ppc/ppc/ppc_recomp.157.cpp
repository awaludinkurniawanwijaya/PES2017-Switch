#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C67604"))) PPC_WEAK_FUNC(sub_82C67604);
PPC_FUNC_IMPL(__imp__sub_82C67604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67608"))) PPC_WEAK_FUNC(sub_82C67608);
PPC_FUNC_IMPL(__imp__sub_82C67608) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6764c
	if (cr6.eq) goto loc_82C6764C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82C67638;
	sub_82C67458(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C6764C;
	sub_825952B8(ctx, base);
loc_82C6764C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C67670"))) PPC_WEAK_FUNC(sub_82C67670);
PPC_FUNC_IMPL(__imp__sub_82C67670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,5136
	ctx.r9.s64 = ctx.r11.s64 + 5136;
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
	// beq cr6,0x82c676d4
	if (cr6.eq) goto loc_82C676D4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c674c0
	ctx.lr = 0x82C676C0;
	sub_82C674C0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C676D4;
	sub_825952B8(ctx, base);
loc_82C676D4:
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
	ctx.lr = 0x82C676EC;
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

__attribute__((alias("__imp__sub_82C67704"))) PPC_WEAK_FUNC(sub_82C67704);
PPC_FUNC_IMPL(__imp__sub_82C67704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67708"))) PPC_WEAK_FUNC(sub_82C67708);
PPC_FUNC_IMPL(__imp__sub_82C67708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C67710;
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
	ctx.lr = 0x82C67724;
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
	ctx.lr = 0x82C6773C;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,5136
	ctx.r9.s64 = ctx.r11.s64 + 5136;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r4,-8244(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8244);
	// bl 0x82d20ae0
	ctx.lr = 0x82C67774;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8240(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8240);
	// bl 0x82d20ae0
	ctx.lr = 0x82C67784;
	sub_82D20AE0(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8236(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8236);
	// bl 0x82d20ae0
	ctx.lr = 0x82C67794;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-8216(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8216);
	// bl 0x82d23390
	ctx.lr = 0x82C677A8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C677B4"))) PPC_WEAK_FUNC(sub_82C677B4);
PPC_FUNC_IMPL(__imp__sub_82C677B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C677B8"))) PPC_WEAK_FUNC(sub_82C677B8);
PPC_FUNC_IMPL(__imp__sub_82C677B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c67670
	ctx.lr = 0x82C677D8;
	sub_82C67670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c677f0
	if (cr6.eq) goto loc_82C677F0;
	// bl 0x82416268
	ctx.lr = 0x82C677EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C677F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C67808"))) PPC_WEAK_FUNC(sub_82C67808);
PPC_FUNC_IMPL(__imp__sub_82C67808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C6783C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67870
	if (cr6.eq) goto loc_82C67870;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c67860
	if (cr6.lt) goto loc_82C67860;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c67708
	ctx.lr = 0x82C6785C;
	sub_82C67708(ctx, base);
	// b 0x82c67874
	goto loc_82C67874;
loc_82C67860:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c67708
	ctx.lr = 0x82C6786C;
	sub_82C67708(ctx, base);
	// b 0x82c67874
	goto loc_82C67874;
loc_82C67870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C67874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6788C"))) PPC_WEAK_FUNC(sub_82C6788C);
PPC_FUNC_IMPL(__imp__sub_82C6788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67890"))) PPC_WEAK_FUNC(sub_82C67890);
PPC_FUNC_IMPL(__imp__sub_82C67890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C67898;
	__savegprlr_21(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x82d86078
	ctx.lr = 0x82C678B4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c678cc
	if (cr6.eq) goto loc_82C678CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82de9e70
	ctx.lr = 0x82C678CC;
	sub_82DE9E70(ctx, base);
loc_82C678CC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r22,48
	ctx.r22.s64 = 48;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r21,2
	ctx.r21.s64 = 2;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw. r24,r10,r22
	ctx.r24.s32 = PPCDivide(ctx.r10.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq 0x82c67a94
	if (cr0.eq) goto loc_82C67A94;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r28,r10,5032
	ctx.r28.s64 = ctx.r10.s64 + 5032;
	// addi r25,r11,-22544
	ctx.r25.s64 = ctx.r11.s64 + -22544;
loc_82C67908:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r9,r10,r22
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r22.s32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c67ac4
	if (!cr6.gt) goto loc_82C67AC4;
	// add r4,r26,r3
	ctx.r4.u64 = ctx.r26.u64 + ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c67528
	ctx.lr = 0x82C67928;
	sub_82C67528(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82C67944;
	sub_8259CC28(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// lhz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 212);
	// lbz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// sth r6,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r6.u16);
	// stb r8,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r8.u8);
	// stb r5,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r5.u8);
	// bne cr6,0x82c679d8
	if (!cr6.eq) goto loc_82C679D8;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// lis r4,505
	ctx.r4.s64 = 33095680;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// bl 0x82d04220
	ctx.lr = 0x82C67998;
	sub_82D04220(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C679AC;
	sub_8259CB28(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c679c8
	if (cr6.lt) goto loc_82C679C8;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82C679C8;
	sub_825952B8(ctx, base);
loc_82C679C8:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// b 0x82c679ec
	goto loc_82C679EC;
loc_82C679D8:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C679EC;
	sub_8259CB28(ctx, base);
loc_82C679EC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 96;
	// bl 0x82d7f020
	ctx.lr = 0x82C679F8;
	sub_82D7F020(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82c67a50
	if (cr6.gt) goto loc_82C67A50;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c67a24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C67A24;
	// bdzf 4*cr6+eq,0x82c67a2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C67A2C;
	// bdzf 4*cr6+eq,0x82c67a34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C67A34;
	// bne cr6,0x82c67a3c
	if (!cr6.eq) goto loc_82C67A3C;
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// b 0x82c67a40
	goto loc_82C67A40;
loc_82C67A24:
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// b 0x82c67a40
	goto loc_82C67A40;
loc_82C67A2C:
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// b 0x82c67a40
	goto loc_82C67A40;
loc_82C67A34:
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// b 0x82c67a40
	goto loc_82C67A40;
loc_82C67A3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82C67A40:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82C67A50;
	sub_82D233B0(ctx, base);
loc_82C67A50:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c67a6c
	if (cr6.lt) goto loc_82C67A6C;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C67A6C;
	sub_825952B8(ctx, base);
loc_82C67A6C:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bl 0x82b7a190
	ctx.lr = 0x82C67A80;
	sub_82B7A190(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// blt cr6,0x82c67908
	if (cr6.lt) goto loc_82C67908;
loc_82C67A94:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67abc
	if (cr6.eq) goto loc_82C67ABC;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82c67458
	ctx.lr = 0x82C67AAC;
	sub_82C67458(ctx, base);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C67ABC;
	sub_825952B8(ctx, base);
loc_82C67ABC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C67AC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C67AD0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C67AD0"))) PPC_WEAK_FUNC(sub_82C67AD0);
PPC_FUNC_IMPL(__imp__sub_82C67AD0) {
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
	// bl 0x82c67890
	ctx.lr = 0x82C67AE8;
	sub_82C67890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C67AF0;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82C67AF4;
	sub_82D2EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67b30
	if (cr6.eq) goto loc_82C67B30;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-8232(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8232);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C67B18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67b30
	if (cr6.eq) goto loc_82C67B30;
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,557
	ctx.r4.u64 = ctx.r4.u64 | 557;
	// bl 0x82d30340
	ctx.lr = 0x82C67B30;
	sub_82D30340(ctx, base);
loc_82C67B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c670c0
	ctx.lr = 0x82C67B38;
	sub_82C670C0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C67B3C;
	sub_830FF290(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 230, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C67B5C"))) PPC_WEAK_FUNC(sub_82C67B5C);
PPC_FUNC_IMPL(__imp__sub_82C67B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67B60"))) PPC_WEAK_FUNC(sub_82C67B60);
PPC_FUNC_IMPL(__imp__sub_82C67B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C67B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C67B74;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c67b8c
	if (!cr6.eq) goto loc_82C67B8C;
loc_82C67B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C67B8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82C67B9C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67b80
	if (cr6.eq) goto loc_82C67B80;
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,579
	ctx.r4.u64 = ctx.r4.u64 | 579;
	// bl 0x82d30340
	ctx.lr = 0x82C67BB4;
	sub_82D30340(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82C67BC4;
	sub_82D1ED60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C67BD0;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67b80
	if (cr6.eq) goto loc_82C67B80;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6f960
	ctx.lr = 0x82C67BE4;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67bf8
	if (cr6.eq) goto loc_82C67BF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82C67BF4;
	sub_82E6FA08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82C67BF8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,5784
	ctx.r11.s64 = ctx.r11.s64 + 5784;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_82C67C08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C67C14;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,18
	ctx.r4.s64 = 18;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82C67C24;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67c34
	if (cr6.eq) goto loc_82C67C34;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x82d29598
	ctx.lr = 0x82C67C34;
	sub_82D29598(ctx, base);
loc_82C67C34:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82c67c68
	if (cr6.eq) goto loc_82C67C68;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c67c68
	if (!cr6.eq) goto loc_82C67C68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C67C58;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82C67C68;
	sub_82D2B608(ctx, base);
loc_82C67C68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x82c67c08
	if (cr6.lt) goto loc_82C67C08;
	// bl 0x830ff290
	ctx.lr = 0x82C67C7C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67c8c
	if (cr6.eq) goto loc_82C67C8C;
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_82C67C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C67C98"))) PPC_WEAK_FUNC(sub_82C67C98);
PPC_FUNC_IMPL(__imp__sub_82C67C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C67CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C67CAC;
	sub_82D19BB0(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bge cr6,0x82c67da8
	if (!cr6.lt) goto loc_82C67DA8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// rlwinm r30,r3,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,5888
	ctx.r31.s64 = ctx.r11.s64 + 5888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,-104
	ctx.r11.s64 = ctx.r31.s64 + -104;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82C67CD4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x82C67CE8;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82c67d0c
	if (cr6.eq) goto loc_82C67D0C;
	// bl 0x82d86078
	ctx.lr = 0x82C67CF4;
	sub_82D86078(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r11,516
	ctx.r3.s64 = ctx.r11.s64 + 516;
	// bl 0x8259cc28
	ctx.lr = 0x82C67D08;
	sub_8259CC28(ctx, base);
	// b 0x82c67d38
	goto loc_82C67D38;
loc_82C67D0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x82C67D20;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82c67d38
	if (cr6.eq) goto loc_82C67D38;
	// bl 0x82d86078
	ctx.lr = 0x82C67D2C;
	sub_82D86078(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82C67D38:
	// bl 0x830ff290
	ctx.lr = 0x82C67D3C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c67d54
	if (cr6.eq) goto loc_82C67D54;
	// addi r11,r31,-104
	ctx.r11.s64 = ctx.r31.s64 + -104;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
loc_82C67D54:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c67d68
	if (!cr6.lt) goto loc_82C67D68;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82C67D68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C67D74;
	sub_82D20DA8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c67d94
	if (cr6.lt) goto loc_82C67D94;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C67D94;
	sub_825952B8(ctx, base);
loc_82C67D94:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
loc_82C67DA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82C67DB0;
	sub_82D1B890(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C67DB8"))) PPC_WEAK_FUNC(sub_82C67DB8);
PPC_FUNC_IMPL(__imp__sub_82C67DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6504
	ctx.r9.s64 = ctx.r11.s64 + 6504;
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
	ctx.lr = 0x82C67DF0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c67e08
	if (cr6.eq) goto loc_82C67E08;
	// bl 0x82416268
	ctx.lr = 0x82C67E04;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C67E08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C67E20"))) PPC_WEAK_FUNC(sub_82C67E20);
PPC_FUNC_IMPL(__imp__sub_82C67E20) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r11.u8);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// std r11,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r11.u64);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
	// bl 0x82d19788
	ctx.lr = 0x82C67E74;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C67E84;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82C67E9C"))) PPC_WEAK_FUNC(sub_82C67E9C);
PPC_FUNC_IMPL(__imp__sub_82C67E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67EA0"))) PPC_WEAK_FUNC(sub_82C67EA0);
PPC_FUNC_IMPL(__imp__sub_82C67EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r8,120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r10,20480
	ctx.r7.u64 = ctx.r10.u64 | 20480;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c67ee0
	if (!cr6.eq) goto loc_82C67EE0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c67edc
	if (cr0.eq) goto loc_82C67EDC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c67f18
	if (cr6.eq) goto loc_82C67F18;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82c67ee0
	if (!cr6.eq) goto loc_82C67EE0;
loc_82C67EDC:
	// stw r6,120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 120, ctx.r6.u32);
loc_82C67EE0:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,128(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c67f10
	if (cr0.eq) goto loc_82C67F10;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82C67F10:
	// stw r6,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r6.u32);
	// blr 
	return;
loc_82C67F18:
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c67f3c
	if (cr6.eq) goto loc_82C67F3C;
	// lwz r10,1144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// stb r8,1160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1160, ctx.r8.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c67f3c
	if (cr6.eq) goto loc_82C67F3C;
	// stb r8,368(r10)
	PPC_STORE_U8(ctx.r10.u32 + 368, ctx.r8.u8);
loc_82C67F3C:
	// stb r8,160(r9)
	PPC_STORE_U8(ctx.r9.u32 + 160, ctx.r8.u8);
	// b 0x82c67ee0
	goto loc_82C67EE0;
}

__attribute__((alias("__imp__sub_82C67F44"))) PPC_WEAK_FUNC(sub_82C67F44);
PPC_FUNC_IMPL(__imp__sub_82C67F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67F48"))) PPC_WEAK_FUNC(sub_82C67F48);
PPC_FUNC_IMPL(__imp__sub_82C67F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82c67f68
	if (!cr6.eq) goto loc_82C67F68;
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
loc_82C67F68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C67F74"))) PPC_WEAK_FUNC(sub_82C67F74);
PPC_FUNC_IMPL(__imp__sub_82C67F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67F78"))) PPC_WEAK_FUNC(sub_82C67F78);
PPC_FUNC_IMPL(__imp__sub_82C67F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831d80b8
	ctx.lr = 0x82C67FBC;
	sub_831D80B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C67FCC"))) PPC_WEAK_FUNC(sub_82C67FCC);
PPC_FUNC_IMPL(__imp__sub_82C67FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C67FD0"))) PPC_WEAK_FUNC(sub_82C67FD0);
PPC_FUNC_IMPL(__imp__sub_82C67FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c67ff0
	if (!cr6.eq) goto loc_82C67FF0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82C67FF0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c68018
	if (!cr6.eq) goto loc_82C68018;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82C68018:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c68038
	if (!cr6.eq) goto loc_82C68038;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82C68038:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C68048"))) PPC_WEAK_FUNC(sub_82C68048);
PPC_FUNC_IMPL(__imp__sub_82C68048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c68068
	if (!cr6.eq) goto loc_82C68068;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82C68068:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c68090
	if (!cr6.eq) goto loc_82C68090;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82C68090:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c680b0
	if (!cr6.eq) goto loc_82C680B0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82C680B0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C680C0"))) PPC_WEAK_FUNC(sub_82C680C0);
PPC_FUNC_IMPL(__imp__sub_82C680C0) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82416260
	ctx.lr = 0x82C680DC;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6811c
	if (cr6.eq) goto loc_82C6811C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
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
loc_82C6811C:
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
	ctx.lr = 0x82C68138;
	sub_8246B850(ctx, base);
}

__attribute__((alias("__imp__sub_82C68138"))) PPC_WEAK_FUNC(sub_82C68138);
PPC_FUNC_IMPL(__imp__sub_82C68138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82416260
	ctx.lr = 0x82C68160;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c681b0
	if (cr6.eq) goto loc_82C681B0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r11.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,33(r7)
	PPC_STORE_U8(ctx.r7.u32 + 33, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C681B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x82C681C8;
	sub_8246B850(ctx, base);
}

__attribute__((alias("__imp__sub_82C681C8"))) PPC_WEAK_FUNC(sub_82C681C8);
PPC_FUNC_IMPL(__imp__sub_82C681C8) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,6864
	ctx.r4.s64 = ctx.r11.s64 + 6864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x82C681F0;
	sub_83103328(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6840
	ctx.r9.s64 = ctx.r10.s64 + 6840;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stb r11,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r11.u8);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
	// bl 0x82e84ef0
	ctx.lr = 0x82C68268;
	sub_82E84EF0(ctx, base);
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

__attribute__((alias("__imp__sub_82C68284"))) PPC_WEAK_FUNC(sub_82C68284);
PPC_FUNC_IMPL(__imp__sub_82C68284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C68288"))) PPC_WEAK_FUNC(sub_82C68288);
PPC_FUNC_IMPL(__imp__sub_82C68288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82e840d8
	ctx.lr = 0x82C682A8;
	sub_82E840D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c682c0
	if (cr6.eq) goto loc_82C682C0;
	// bl 0x82416268
	ctx.lr = 0x82C682BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C682C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C682D8"))) PPC_WEAK_FUNC(sub_82C682D8);
PPC_FUNC_IMPL(__imp__sub_82C682D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blt cr6,0x82c682fc
	if (cr6.lt) goto loc_82C682FC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82c68300
	goto loc_82C68300;
loc_82C682FC:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82C68300:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c68320
	if (cr6.lt) goto loc_82C68320;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82c68324
	goto loc_82C68324;
loc_82C68320:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82C68324:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c68344
	if (cr6.lt) goto loc_82C68344;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82c68348
	goto loc_82C68348;
loc_82C68344:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82C68348:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
	// std r11,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// std r11,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blt cr6,0x82c68370
	if (cr6.lt) goto loc_82C68370;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82c68374
	goto loc_82C68374;
loc_82C68370:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82C68374:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// blt cr6,0x82c68394
	if (cr6.lt) goto loc_82C68394;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82c68398
	goto loc_82C68398;
loc_82C68394:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82C68398:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r10,r3,160
	ctx.r10.s64 = ctx.r3.s64 + 160;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c683b4
	if (cr6.lt) goto loc_82C683B4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82C683B4:
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stw r9,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C683C4"))) PPC_WEAK_FUNC(sub_82C683C4);
PPC_FUNC_IMPL(__imp__sub_82C683C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C683C8"))) PPC_WEAK_FUNC(sub_82C683C8);
PPC_FUNC_IMPL(__imp__sub_82C683C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C683D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c683fc
	if (cr6.lt) goto loc_82C683FC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C683FC;
	sub_825952B8(ctx, base);
loc_82C683FC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,132
	ctx.r29.s64 = ctx.r28.s64 + 132;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c68430
	if (cr6.lt) goto loc_82C68430;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C68430;
	sub_825952B8(ctx, base);
loc_82C68430:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,104
	ctx.r30.s64 = ctx.r28.s64 + 104;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6845c
	if (cr6.lt) goto loc_82C6845C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C6845C;
	sub_825952B8(ctx, base);
loc_82C6845C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,60
	ctx.r29.s64 = ctx.r28.s64 + 60;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c68488
	if (cr6.lt) goto loc_82C68488;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C68488;
	sub_825952B8(ctx, base);
loc_82C68488:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c684b4
	if (cr6.lt) goto loc_82C684B4;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C684B4;
	sub_825952B8(ctx, base);
loc_82C684B4:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c684e0
	if (cr6.lt) goto loc_82C684E0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C684E0;
	sub_825952B8(ctx, base);
loc_82C684E0:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C684F4"))) PPC_WEAK_FUNC(sub_82C684F4);
PPC_FUNC_IMPL(__imp__sub_82C684F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C684F8"))) PPC_WEAK_FUNC(sub_82C684F8);
PPC_FUNC_IMPL(__imp__sub_82C684F8) {
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r11.u8);
	// bl 0x82c682d8
	ctx.lr = 0x82C68560;
	sub_82C682D8(ctx, base);
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

__attribute__((alias("__imp__sub_82C68578"))) PPC_WEAK_FUNC(sub_82C68578);
PPC_FUNC_IMPL(__imp__sub_82C68578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c685e0
	if (cr6.eq) goto loc_82C685E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c685ac
	if (cr6.eq) goto loc_82C685AC;
	// bl 0x82416268
	ctx.lr = 0x82C685AC;
	sub_82416268(ctx, base);
loc_82C685AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82C685E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C685F8"))) PPC_WEAK_FUNC(sub_82C685F8);
PPC_FUNC_IMPL(__imp__sub_82C685F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C68600;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82de5068
	ctx.lr = 0x82C68610;
	sub_82DE5068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c687a8
	if (cr6.eq) goto loc_82C687A8;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c687a8
	if (cr6.eq) goto loc_82C687A8;
	// lwz r11,1164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c6876c
	if (cr6.eq) goto loc_82C6876C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c68660
	if (cr6.eq) goto loc_82C68660;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c687a8
	if (!cr6.eq) goto loc_82C687A8;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c687a8
	if (cr6.eq) goto loc_82C687A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f2,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x82c68788
	goto loc_82C68788;
loc_82C68660:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82c6869c
	if (cr6.eq) goto loc_82C6869C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6869C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6869C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c68740
	if (!cr6.eq) goto loc_82C68740;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c68740
	if (!cr6.eq) goto loc_82C68740;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c68740
	if (!cr6.eq) goto loc_82C68740;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// bl 0x837b0c10
	ctx.lr = 0x82C686D8;
	sub_837B0C10(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82ce2dd0
	ctx.lr = 0x82C686F4;
	sub_82CE2DD0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C68700;
	sub_8387E8E0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,288(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 288);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82C68730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83103100
	ctx.lr = 0x82C6873C;
	sub_83103100(ctx, base);
	// stb r30,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r30.u8);
loc_82C68740:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c687a8
	if (cr6.eq) goto loc_82C687A8;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82e83c40
	ctx.lr = 0x82C68754;
	sub_82E83C40(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82c68794
	goto loc_82C68794;
loc_82C6876C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c687a8
	if (cr6.eq) goto loc_82C687A8;
	// bl 0x82e83bc8
	ctx.lr = 0x82C6877C;
	sub_82E83BC8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lfs f2,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f2.f64 = double(temp.f32);
loc_82C68788:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,288(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_82C68794:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bctrl 
	ctx.lr = 0x82C687A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C687A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C687B4"))) PPC_WEAK_FUNC(sub_82C687B4);
PPC_FUNC_IMPL(__imp__sub_82C687B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C687B8"))) PPC_WEAK_FUNC(sub_82C687B8);
PPC_FUNC_IMPL(__imp__sub_82C687B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C687C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82C687EC;
	sub_8259CB28(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82C68800;
	sub_8259CB28(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82C68814;
	sub_8259CB28(ctx, base);
	// ld r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 88);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// ld r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
	// bl 0x8259cb28
	ctx.lr = 0x82C68838;
	sub_8259CB28(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82C6884C;
	sub_8259CB28(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82C68860;
	sub_8259CB28(ctx, base);
	// lwz r8,188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C68874"))) PPC_WEAK_FUNC(sub_82C68874);
PPC_FUNC_IMPL(__imp__sub_82C68874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C68878"))) PPC_WEAK_FUNC(sub_82C68878);
PPC_FUNC_IMPL(__imp__sub_82C68878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C68880;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c68bc4
	if (cr6.eq) goto loc_82C68BC4;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-23904
	ctx.r11.s64 = ctx.r11.s64 + -23904;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C688AC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82c688ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C688AC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c684f8
	ctx.lr = 0x82C688C0;
	sub_82C684F8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82C688C4;
	sub_82D860F0(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x8259cb28
	ctx.lr = 0x82C688E0;
	sub_8259CB28(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x82C688F4;
	sub_8259CB28(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,6348
	ctx.r4.s64 = ctx.r11.s64 + 6348;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x8259cc28
	ctx.lr = 0x82C68908;
	sub_8259CC28(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// ble cr6,0x82c68920
	if (!cr6.gt) goto loc_82C68920;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r11.u64);
loc_82C68920:
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// ble cr6,0x82c68938
	if (!cr6.gt) goto loc_82C68938;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r11,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r11.u64);
loc_82C68938:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82a8c428
	ctx.lr = 0x82C68948;
	sub_82A8C428(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lfs f1,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d6c0a8
	ctx.lr = 0x82C68954;
	sub_82D6C0A8(ctx, base);
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a79bf8
	ctx.lr = 0x82C68960;
	sub_82A79BF8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c68974
	if (!cr6.lt) goto loc_82C68974;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C68974:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C68978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c68978
	if (!cr6.eq) goto loc_82C68978;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C6899C;
	sub_8259CC28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c689b0
	if (cr6.lt) goto loc_82C689B0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82C689B0;
	sub_82416268(ctx, base);
loc_82C689B0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82C689CC;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r30,r11,15320
	ctx.r30.s64 = ctx.r11.s64 + 15320;
	// stw r30,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r30.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82C689E0;
	sub_831CCF00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82a8c428
	ctx.lr = 0x82C689F0;
	sub_82A8C428(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f1,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d6c0a8
	ctx.lr = 0x82C689FC;
	sub_82D6C0A8(ctx, base);
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82C68A08;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c68a1c
	if (!cr6.lt) goto loc_82C68A1C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82C68A1C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C68A20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c68a20
	if (!cr6.eq) goto loc_82C68A20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C68A44;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c68a58
	if (cr6.lt) goto loc_82C68A58;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82C68A58;
	sub_82416268(ctx, base);
loc_82C68A58:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82C68A6C;
	sub_82A79160(ctx, base);
	// stw r30,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r30.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x831ccf00
	ctx.lr = 0x82C68A78;
	sub_831CCF00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82a8c428
	ctx.lr = 0x82C68A88;
	sub_82A8C428(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lfs f1,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d6c0a8
	ctx.lr = 0x82C68A94;
	sub_82D6C0A8(ctx, base);
	// addi r4,r1,616
	ctx.r4.s64 = ctx.r1.s64 + 616;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a79bf8
	ctx.lr = 0x82C68AA0;
	sub_82A79BF8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c68ab4
	if (!cr6.lt) goto loc_82C68AB4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82C68AB4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C68AB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c68ab8
	if (!cr6.eq) goto loc_82C68AB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C68ADC;
	sub_8259CC28(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c68af0
	if (cr6.lt) goto loc_82C68AF0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x82C68AF0;
	sub_82416268(ctx, base);
loc_82C68AF0:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82C68B04;
	sub_82A79160(ctx, base);
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x831ccf00
	ctx.lr = 0x82C68B10;
	sub_831CCF00(ctx, base);
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bgt cr6,0x82c68b98
	if (cr6.gt) goto loc_82C68B98;
	// lis r12,-32057
	ctx.r12.s64 = -2100887552;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29904
	ctx.r12.s64 = ctx.r12.s64 + -29904;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_82C68B60;
	case 1:
		goto loc_82C68B68;
	case 2:
		goto loc_82C68B98;
	case 3:
		goto loc_82C68B70;
	case 4:
		goto loc_82C68B98;
	case 5:
		goto loc_82C68B98;
	case 6:
		goto loc_82C68B78;
	case 7:
		goto loc_82C68B80;
	case 8:
		goto loc_82C68B88;
	case 9:
		goto loc_82C68B98;
	case 10:
		goto loc_82C68B98;
	case 11:
		goto loc_82C68B90;
	default:
		return;
	}
	// lwz r22,-29856(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29856);
	// lwz r22,-29848(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29848);
	// lwz r22,-29800(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29800);
	// lwz r22,-29840(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29840);
	// lwz r22,-29800(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29800);
	// lwz r22,-29800(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29800);
	// lwz r22,-29832(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29832);
	// lwz r22,-29824(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29824);
	// lwz r22,-29816(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29816);
	// lwz r22,-29800(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29800);
	// lwz r22,-29800(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29800);
	// lwz r22,-29808(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29808);
loc_82C68B60:
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r31.u32);
	// b 0x82c68ba0
	goto loc_82C68BA0;
loc_82C68B68:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c68b9c
	goto loc_82C68B9C;
loc_82C68B70:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82c68b9c
	goto loc_82C68B9C;
loc_82C68B78:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c68b9c
	goto loc_82C68B9C;
loc_82C68B80:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c68b9c
	goto loc_82C68B9C;
loc_82C68B88:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c68b9c
	goto loc_82C68B9C;
loc_82C68B90:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c68b9c
	goto loc_82C68B9C;
loc_82C68B98:
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C68B9C:
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
loc_82C68BA0:
	// bl 0x82e6e978
	ctx.lr = 0x82C68BA4;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c68bbc
	if (cr6.eq) goto loc_82C68BBC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82c687b8
	ctx.lr = 0x82C68BBC;
	sub_82C687B8(ctx, base);
loc_82C68BBC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c683c8
	ctx.lr = 0x82C68BC4;
	sub_82C683C8(ctx, base);
loc_82C68BC4:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C68BCC"))) PPC_WEAK_FUNC(sub_82C68BCC);
PPC_FUNC_IMPL(__imp__sub_82C68BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C68BD0"))) PPC_WEAK_FUNC(sub_82C68BD0);
PPC_FUNC_IMPL(__imp__sub_82C68BD0) {
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
	// lwz r4,108(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c68d00
	if (cr6.eq) goto loc_82C68D00;
	// lbz r11,1161(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1161);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c68d08
	if (cr6.eq) goto loc_82C68D08;
	// ld r11,1176(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 1176);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpldi cr6,r11,6
	cr6.compare<uint64_t>(ctx.r11.u64, 6, xer);
	// bgt cr6,0x82c68c80
	if (cr6.gt) goto loc_82C68C80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82c68c80
	if (cr6.gt) goto loc_82C68C80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c68c44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C68C44;
	// bdzf 4*cr6+eq,0x82c68c54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C68C54;
	// bdzf 4*cr6+eq,0x82c68c70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C68C70;
	// bdzf 4*cr6+eq,0x82c68c5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C68C5C;
	// bdzf 4*cr6+eq,0x82c68c78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C68C78;
	// bne cr6,0x82c68c4c
	if (!cr6.eq) goto loc_82C68C4C;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// b 0x82c68c88
	goto loc_82C68C88;
loc_82C68C44:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c68c84
	goto loc_82C68C84;
loc_82C68C4C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c68c84
	goto loc_82C68C84;
loc_82C68C54:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82c68c84
	goto loc_82C68C84;
loc_82C68C5C:
	// lwz r11,1124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1124);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x82c68c88
	goto loc_82C68C88;
loc_82C68C70:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82c68c84
	goto loc_82C68C84;
loc_82C68C78:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82c68c84
	goto loc_82C68C84;
loc_82C68C80:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82C68C84:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82C68C88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82c68878
	ctx.lr = 0x82C68C94;
	sub_82C68878(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c68cb4
	if (cr6.eq) goto loc_82C68CB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C68CB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_82C68CB4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c68d00
	if (cr6.eq) goto loc_82C68D00;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82C68CD4;
	sub_82595150(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c68cf4
	if (cr6.eq) goto loc_82C68CF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C68CF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C68CF4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82C68CFC;
	sub_82595170(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82C68D00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c68d0c
	goto loc_82C68D0C;
loc_82C68D08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C68D0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C68D24"))) PPC_WEAK_FUNC(sub_82C68D24);
PPC_FUNC_IMPL(__imp__sub_82C68D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C68D28"))) PPC_WEAK_FUNC(sub_82C68D28);
PPC_FUNC_IMPL(__imp__sub_82C68D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C68D30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,52427
	ctx.r9.u64 = ctx.r10.u64 | 52427;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c68d88
	if (cr6.lt) goto loc_82C68D88;
	// lwz r3,16(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c68d64
	if (cr6.eq) goto loc_82C68D64;
	// bl 0x82416268
	ctx.lr = 0x82C68D64;
	sub_82416268(ctx, base);
loc_82C68D64:
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r28.u32);
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stw r28,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r28.u32);
	// bl 0x82416268
	ctx.lr = 0x82C68D7C;
	sub_82416268(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12808
	ctx.r3.s64 = ctx.r11.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82C68D88;
	sub_831CC150(ctx, base);
loc_82C68D88:
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
	// bne cr6,0x82c68db8
	if (!cr6.eq) goto loc_82C68DB8;
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
	// b 0x82c68df8
	goto loc_82C68DF8;
loc_82C68DB8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c68de0
	if (cr6.eq) goto loc_82C68DE0;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c68df8
	if (!cr6.eq) goto loc_82C68DF8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82c68df8
	goto loc_82C68DF8;
loc_82C68DE0:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c68df8
	if (!cr6.eq) goto loc_82C68DF8;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82C68DF8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c68f1c
	if (!cr6.eq) goto loc_82C68F1C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C68E14:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c68e9c
	if (!cr6.eq) goto loc_82C68E9C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c68e5c
	if (!cr6.eq) goto loc_82C68E5C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82c68f0c
	goto loc_82C68F0C;
loc_82C68E5C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c68e74
	if (!cr6.eq) goto loc_82C68E74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x82C68E74;
	sub_82C67FD0(ctx, base);
loc_82C68E74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c68048
	ctx.lr = 0x82C68E98;
	sub_82C68048(ctx, base);
	// b 0x82c68f0c
	goto loc_82C68F0C;
loc_82C68E9C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c68ed0
	if (!cr6.eq) goto loc_82C68ED0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82c68f0c
	goto loc_82C68F0C;
loc_82C68ED0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c68ee8
	if (!cr6.eq) goto loc_82C68EE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c68048
	ctx.lr = 0x82C68EE8;
	sub_82C68048(ctx, base);
loc_82C68EE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c67fd0
	ctx.lr = 0x82C68F0C;
	sub_82C67FD0(ctx, base);
loc_82C68F0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c68e14
	if (cr6.eq) goto loc_82C68E14;
loc_82C68F1C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C68F38"))) PPC_WEAK_FUNC(sub_82C68F38);
PPC_FUNC_IMPL(__imp__sub_82C68F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C68F40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 33);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c68f68
	if (cr6.eq) goto loc_82C68F68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82C68F68;
	sub_831CC188(ctx, base);
loc_82C68F68:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83456c38
	ctx.lr = 0x82C68F74;
	sub_83456C38(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82c68f90
	if (cr6.eq) goto loc_82C68F90;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82c68fb4
	goto loc_82C68FB4;
loc_82C68F90:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c68fa8
	if (cr6.eq) goto loc_82C68FA8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82c68fb4
	goto loc_82C68FB4;
loc_82C68FA8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c690a0
	if (!cr6.eq) goto loc_82C690A0;
loc_82C68FB4:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c68fc8
	if (!cr6.eq) goto loc_82C68FC8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82C68FC8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c68fe0
	if (!cr6.eq) goto loc_82C68FE0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82c68ff8
	goto loc_82C68FF8;
loc_82C68FE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c68ff4
	if (!cr6.eq) goto loc_82C68FF4;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82c68ff8
	goto loc_82C68FF8;
loc_82C68FF4:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82C68FF8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c69048
	if (!cr6.eq) goto loc_82C69048;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6901c
	if (cr6.eq) goto loc_82C6901C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82c69044
	goto loc_82C69044;
loc_82C6901C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c69044
	if (!cr6.eq) goto loc_82C69044;
loc_82C69030:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c69030
	if (cr6.eq) goto loc_82C69030;
loc_82C69044:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82C69048:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c69134
	if (!cr6.eq) goto loc_82C69134;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c69070
	if (cr6.eq) goto loc_82C69070;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82c69134
	goto loc_82C69134;
loc_82C69070:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c69098
	if (!cr6.eq) goto loc_82C69098;
loc_82C69084:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c69084
	if (cr6.eq) goto loc_82C69084;
loc_82C69098:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82c69134
	goto loc_82C69134;
loc_82C690A0:
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
	// bne cr6,0x82c690c0
	if (!cr6.eq) goto loc_82C690C0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82c690e8
	goto loc_82C690E8;
loc_82C690C0:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c690d4
	if (!cr6.eq) goto loc_82C690D4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82C690D4:
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
loc_82C690E8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c69100
	if (!cr6.eq) goto loc_82C69100;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82c6911c
	goto loc_82C6911C;
loc_82C69100:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c69118
	if (!cr6.eq) goto loc_82C69118;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82c6911c
	goto loc_82C6911C;
loc_82C69118:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82C6911C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// lbz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 32);
	// stb r9,32(r25)
	PPC_STORE_U8(ctx.r25.u32 + 32, ctx.r9.u8);
	// stb r10,32(r26)
	PPC_STORE_U8(ctx.r26.u32 + 32, ctx.r10.u8);
loc_82C69134:
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c692cc
	if (!cr6.eq) goto loc_82C692CC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c692c8
	if (cr6.eq) goto loc_82C692C8;
loc_82C69158:
	// lbz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c692c8
	if (!cr6.eq) goto loc_82C692C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c69210
	if (!cr6.eq) goto loc_82C69210;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c69198
	if (!cr6.eq) goto loc_82C69198;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x82C69194;
	sub_82C67FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82C69198:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c69264
	if (!cr6.eq) goto loc_82C69264;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82c691c4
	if (!cr6.eq) goto loc_82C691C4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82c69260
	if (cr6.eq) goto loc_82C69260;
loc_82C691C4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82c691ec
	if (!cr6.eq) goto loc_82C691EC;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c68048
	ctx.lr = 0x82C691E8;
	sub_82C68048(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82C691EC:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x82c67fd0
	ctx.lr = 0x82C6920C;
	sub_82C67FD0(ctx, base);
	// b 0x82c692c8
	goto loc_82C692C8;
loc_82C69210:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c69234
	if (!cr6.eq) goto loc_82C69234;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c68048
	ctx.lr = 0x82C69230;
	sub_82C68048(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C69234:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c69264
	if (!cr6.eq) goto loc_82C69264;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82c69280
	if (!cr6.eq) goto loc_82C69280;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82c69280
	if (!cr6.eq) goto loc_82C69280;
loc_82C69260:
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
loc_82C69264:
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
	// bne cr6,0x82c69158
	if (!cr6.eq) goto loc_82C69158;
	// b 0x82c692c8
	goto loc_82C692C8;
loc_82C69280:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82c692a8
	if (!cr6.eq) goto loc_82C692A8;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x82C692A4;
	sub_82C67FD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C692A8:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x82c68048
	ctx.lr = 0x82C692C8;
	sub_82C68048(ctx, base);
loc_82C692C8:
	// stb r29,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r29.u8);
loc_82C692CC:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c692dc
	if (cr6.eq) goto loc_82C692DC;
	// bl 0x82416268
	ctx.lr = 0x82C692DC;
	sub_82416268(ctx, base);
loc_82C692DC:
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r30.u32);
	// stw r30,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r30.u32);
	// bl 0x82416268
	ctx.lr = 0x82C692F0;
	sub_82416268(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c69304
	if (cr6.eq) goto loc_82C69304;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82C69304:
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

__attribute__((alias("__imp__sub_82C69314"))) PPC_WEAK_FUNC(sub_82C69314);
PPC_FUNC_IMPL(__imp__sub_82C69314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C69318"))) PPC_WEAK_FUNC(sub_82C69318);
PPC_FUNC_IMPL(__imp__sub_82C69318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C69320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c69384
	if (!cr6.eq) goto loc_82C69384;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C69340:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c69318
	ctx.lr = 0x82C6934C;
	sub_82C69318(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82c69360
	if (cr6.eq) goto loc_82C69360;
	// bl 0x82416268
	ctx.lr = 0x82C69360;
	sub_82416268(ctx, base);
loc_82C69360:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// bl 0x82416268
	ctx.lr = 0x82C69374;
	sub_82416268(ctx, base);
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c69340
	if (cr6.eq) goto loc_82C69340;
loc_82C69384:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6938C"))) PPC_WEAK_FUNC(sub_82C6938C);
PPC_FUNC_IMPL(__imp__sub_82C6938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C69390"))) PPC_WEAK_FUNC(sub_82C69390);
PPC_FUNC_IMPL(__imp__sub_82C69390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C69398;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c6941c
	if (!cr6.eq) goto loc_82C6941C;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82C693D0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c693ec
	if (cr6.eq) goto loc_82C693EC;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82c693f8
	goto loc_82C693F8;
loc_82C693EC:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82C693F8:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6940c
	if (cr6.eq) goto loc_82C6940C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c69410
	goto loc_82C69410;
loc_82C6940C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82C69410:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c693d0
	if (cr6.eq) goto loc_82C693D0;
loc_82C6941C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6947c
	if (cr6.eq) goto loc_82C6947C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c69474
	if (!cr6.eq) goto loc_82C69474;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c68d28
	ctx.lr = 0x82C69458;
	sub_82C68D28(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r25.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C69474:
	// bl 0x82ff8298
	ctx.lr = 0x82C69478;
	sub_82FF8298(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C6947C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c694c0
	if (!cr6.lt) goto loc_82C694C0;
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
	// bl 0x82c68d28
	ctx.lr = 0x82C694A4;
	sub_82C68D28(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r25.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C694C0:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c694d0
	if (cr6.eq) goto loc_82C694D0;
	// bl 0x82416268
	ctx.lr = 0x82C694D0;
	sub_82416268(ctx, base);
loc_82C694D0:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// stw r31,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r31.u32);
	// bl 0x82416268
	ctx.lr = 0x82C694E8;
	sub_82416268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C694FC"))) PPC_WEAK_FUNC(sub_82C694FC);
PPC_FUNC_IMPL(__imp__sub_82C694FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C69500"))) PPC_WEAK_FUNC(sub_82C69500);
PPC_FUNC_IMPL(__imp__sub_82C69500) {
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
	// bl 0x82c69318
	ctx.lr = 0x82C69520;
	sub_82C69318(ctx, base);
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

__attribute__((alias("__imp__sub_82C69554"))) PPC_WEAK_FUNC(sub_82C69554);
PPC_FUNC_IMPL(__imp__sub_82C69554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C69558"))) PPC_WEAK_FUNC(sub_82C69558);
PPC_FUNC_IMPL(__imp__sub_82C69558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C69560;
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
	// bne cr6,0x82c6959c
	if (!cr6.eq) goto loc_82C6959C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82c68d28
	ctx.lr = 0x82C69590;
	sub_82C68D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C6959C:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c695e0
	if (!cr6.eq) goto loc_82C695E0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c696dc
	if (!cr6.lt) goto loc_82C696DC;
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
	// bl 0x82c68d28
	ctx.lr = 0x82C695D4;
	sub_82C68D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C695E0:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82c6961c
	if (!cr6.eq) goto loc_82C6961C;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c696dc
	if (!cr6.lt) goto loc_82C696DC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c68d28
	ctx.lr = 0x82C69610;
	sub_82C68D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C6961C:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82c69680
	if (!cr6.gt) goto loc_82C69680;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff8298
	ctx.lr = 0x82C69638;
	sub_82FF8298(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82c6967c
	if (!cr6.lt) goto loc_82C6967C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c696c8
	if (!cr6.eq) goto loc_82C696C8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82C69668:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82c68d28
	ctx.lr = 0x82C69670;
	sub_82C68D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C6967C:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82C69680:
	// bge cr6,0x82c696dc
	if (!cr6.lt) goto loc_82C696DC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82C69690;
	sub_83456C38(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82c696a8
	if (cr6.eq) goto loc_82C696A8;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c696dc
	if (!cr6.lt) goto loc_82C696DC;
loc_82C696A8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c69668
	if (cr6.eq) goto loc_82C69668;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82C696C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82c68d28
	ctx.lr = 0x82C696D0;
	sub_82C68D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C696DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c69390
	ctx.lr = 0x82C696F0;
	sub_82C69390(ctx, base);
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

__attribute__((alias("__imp__sub_82C69708"))) PPC_WEAK_FUNC(sub_82C69708);
PPC_FUNC_IMPL(__imp__sub_82C69708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C69710;
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
	// bne cr6,0x82c6975c
	if (!cr6.eq) goto loc_82C6975C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c6975c
	if (!cr6.eq) goto loc_82C6975C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c69500
	ctx.lr = 0x82C69744;
	sub_82C69500(ctx, base);
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
loc_82C6975C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c6978c
	if (cr6.eq) goto loc_82C6978C;
loc_82C69764:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83456c38
	ctx.lr = 0x82C69770;
	sub_83456C38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c68f38
	ctx.lr = 0x82C69780;
	sub_82C68F38(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c69764
	if (!cr6.eq) goto loc_82C69764;
loc_82C6978C:
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

__attribute__((alias("__imp__sub_82C6979C"))) PPC_WEAK_FUNC(sub_82C6979C);
PPC_FUNC_IMPL(__imp__sub_82C6979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C697A0"))) PPC_WEAK_FUNC(sub_82C697A0);
PPC_FUNC_IMPL(__imp__sub_82C697A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C697A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c697f0
	if (!cr6.eq) goto loc_82C697F0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82C697C8:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c697dc
	if (!cr6.lt) goto loc_82C697DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c697e4
	goto loc_82C697E4;
loc_82C697DC:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C697E4:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c697c8
	if (cr6.eq) goto loc_82C697C8;
loc_82C697F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c6980c
	if (cr6.eq) goto loc_82C6980C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c698b4
	if (!cr6.lt) goto loc_82C698B4;
loc_82C6980C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82c68578
	ctx.lr = 0x82C6983C;
	sub_82C68578(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c680c0
	ctx.lr = 0x82C69844;
	sub_82C680C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c69870
	if (cr0.eq) goto loc_82C69870;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// bl 0x82c68578
	ctx.lr = 0x82C69870;
	sub_82C68578(ctx, base);
loc_82C69870:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c69558
	ctx.lr = 0x82C69884;
	sub_82C69558(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82c69898
	if (cr6.eq) goto loc_82C69898;
	// bl 0x82416268
	ctx.lr = 0x82C69898;
	sub_82416268(ctx, base);
loc_82C69898:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c698a8
	if (cr6.eq) goto loc_82C698A8;
	// bl 0x82416268
	ctx.lr = 0x82C698A8;
	sub_82416268(ctx, base);
loc_82C698A8:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C698B4:
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C698C0"))) PPC_WEAK_FUNC(sub_82C698C0);
PPC_FUNC_IMPL(__imp__sub_82C698C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C698C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r22,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r22.u8);
	// addi r27,r11,6396
	ctx.r27.s64 = ctx.r11.s64 + 6396;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r27,-362
	ctx.r4.s64 = ctx.r27.s64 + -362;
	// bl 0x82472fc0
	ctx.lr = 0x82C69900;
	sub_82472FC0(ctx, base);
	// bl 0x82de5068
	ctx.lr = 0x82C69904;
	sub_82DE5068(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c69e74
	if (cr6.eq) goto loc_82C69E74;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c6992c
	if (cr6.lt) goto loc_82C6992C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x82C69924;
	sub_824707C8(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C6992C:
	// li r23,29
	ctx.r23.s64 = 29;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,1192
	ctx.r4.s64 = 1192;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// bl 0x82595718
	ctx.lr = 0x82C6995C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c69974
	if (cr6.eq) goto loc_82C69974;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c681c8
	ctx.lr = 0x82C6996C;
	sub_82C681C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82c69978
	goto loc_82C69978;
loc_82C69974:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C69978:
	// stw r11,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r11.u32);
	// addi r29,r24,32
	ctx.r29.s64 = ctx.r24.s64 + 32;
	// addi r28,r25,144
	ctx.r28.s64 = ctx.r25.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// bl 0x82c697a0
	ctx.lr = 0x82C69998;
	sub_82C697A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c69a00
	if (cr0.eq) goto loc_82C69A00;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82C699B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c697a0
	ctx.lr = 0x82C699BC;
	sub_82C697A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c699fc
	if (cr6.eq) goto loc_82C699FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bl 0x82c697a0
	ctx.lr = 0x82C699E0;
	sub_82C697A0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c699b0
	if (cr6.lt) goto loc_82C699B0;
	// b 0x82c69a00
	goto loc_82C69A00;
loc_82C699FC:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82C69A00:
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r4,r27,-361
	ctx.r4.s64 = ctx.r27.s64 + -361;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C69A1C;
	sub_8259CC28(ctx, base);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82472fc0
	ctx.lr = 0x82C69A2C;
	sub_82472FC0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c69a40
	if (!cr6.lt) goto loc_82C69A40;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C69A40:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C69A44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c69a44
	if (!cr6.eq) goto loc_82C69A44;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82C69A68;
	sub_82472FC0(ctx, base);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C69A78;
	sub_8259CC28(ctx, base);
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r22,400(r1)
	PPC_STORE_U16(ctx.r1.u32 + 400, ctx.r22.u16);
	// addi r3,r1,402
	ctx.r3.s64 = ctx.r1.s64 + 402;
	// bl 0x831cdcf0
	ctx.lr = 0x82C69A8C;
	sub_831CDCF0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c69aa0
	if (!cr6.lt) goto loc_82C69AA0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82C69AA0:
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x832d2e80
	ctx.lr = 0x82C69ABC;
	sub_832D2E80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c69ad4
	if (cr6.eq) goto loc_82C69AD4;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
loc_82C69AD4:
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(ctx.r31.u32, 128, xer);
	// bgt cr6,0x82c69b04
	if (cr6.gt) goto loc_82C69B04;
	// addi r30,r11,852
	ctx.r30.s64 = ctx.r11.s64 + 852;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82C69AF4;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d8c38
	ctx.lr = 0x82C69B04;
	sub_831D8C38(ctx, base);
loc_82C69B04:
	// bl 0x82e6e978
	ctx.lr = 0x82C69B08;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c69c34
	if (cr6.eq) goto loc_82C69C34;
	// li r5,31
	ctx.r5.s64 = 31;
	// stb r22,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r22.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,193
	ctx.r3.s64 = ctx.r1.s64 + 193;
	// bl 0x831cdcf0
	ctx.lr = 0x82C69B24;
	sub_831CDCF0(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,100
	ctx.r9.s64 = 100;
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// mulhwu r7,r10,r8
	ctx.r7.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r7,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// divwu r5,r10,r9
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// mulli r3,r6,100
	ctx.r3.s64 = ctx.r6.s64 * 100;
	// subf r6,r3,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82c67f78
	ctx.lr = 0x82C69B54;
	sub_82C67F78(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a8c428
	ctx.lr = 0x82C69B64;
	sub_82A8C428(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c697a0
	ctx.lr = 0x82C69B70;
	sub_82C697A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r31,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 2;
	// bl 0x82473550
	ctx.lr = 0x82C69B90;
	sub_82473550(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82473550
	ctx.lr = 0x82C69B98;
	sub_82473550(ctx, base);
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// bl 0x82474170
	ctx.lr = 0x82C69BA0;
	sub_82474170(ctx, base);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// bl 0x82473550
	ctx.lr = 0x82C69BA8;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x82C69BB0;
	sub_82474170(ctx, base);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a79bf8
	ctx.lr = 0x82C69BBC;
	sub_82A79BF8(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82c69bd0
	if (!cr6.lt) goto loc_82C69BD0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82C69BD0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C69BD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c69bd4
	if (!cr6.eq) goto loc_82C69BD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C69BF8;
	sub_825A1EB8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c69c0c
	if (cr6.lt) goto loc_82C69C0C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82C69C0C;
	sub_82416268(ctx, base);
loc_82C69C0C:
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// stb r22,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r22.u8);
	// bl 0x82a79160
	ctx.lr = 0x82C69C20;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82C69C34;
	sub_831CCF00(ctx, base);
loc_82C69C34:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x831cdcf0
	ctx.lr = 0x82C69C44;
	sub_831CDCF0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c69c58
	if (!cr6.lt) goto loc_82C69C58;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82C69C58:
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x832d2e80
	ctx.lr = 0x82C69C74;
	sub_832D2E80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c69c8c
	if (cr6.eq) goto loc_82C69C8C;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// sthx r22,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u16);
loc_82C69C8C:
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(ctx.r31.u32, 128, xer);
	// bgt cr6,0x82c69cbc
	if (cr6.gt) goto loc_82C69CBC;
	// addi r30,r11,340
	ctx.r30.s64 = ctx.r11.s64 + 340;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82C69CAC;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d8c38
	ctx.lr = 0x82C69CBC;
	sub_831D8C38(ctx, base);
loc_82C69CBC:
	// lbz r11,136(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c69ce0
	if (cr6.eq) goto loc_82C69CE0;
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,108(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// stb r10,1120(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1120, ctx.r10.u8);
	// stw r11,1124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1124, ctx.r11.u32);
	// stb r22,136(r25)
	PPC_STORE_U8(ctx.r25.u32 + 136, ctx.r22.u8);
loc_82C69CE0:
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x82c69d28
	if (!cr6.eq) goto loc_82C69D28;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82595718
	ctx.lr = 0x82C69D00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c69d5c
	if (cr6.eq) goto loc_82C69D5C;
	// lwz r10,84(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// addi r11,r24,64
	ctx.r11.s64 = ctx.r24.s64 + 64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c69d1c
	if (cr6.lt) goto loc_82C69D1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C69D1C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82e85c80
	ctx.lr = 0x82C69D24;
	sub_82E85C80(ctx, base);
	// b 0x82c69d60
	goto loc_82C69D60;
loc_82C69D28:
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82595718
	ctx.lr = 0x82C69D34;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c69d5c
	if (cr6.eq) goto loc_82C69D5C;
	// lwz r10,84(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// addi r11,r24,64
	ctx.r11.s64 = ctx.r24.s64 + 64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c69d50
	if (cr6.lt) goto loc_82C69D50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C69D50:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82e85c40
	ctx.lr = 0x82C69D58;
	sub_82E85C40(ctx, base);
	// b 0x82c69d60
	goto loc_82C69D60;
loc_82C69D5C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82C69D60:
	// stw r3,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r3.u32);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c69d78
	if (cr6.lt) goto loc_82C69D78;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x82c69d7c
	goto loc_82C69D7C;
loc_82C69D78:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_82C69D7C:
	// lwz r10,56(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// addi r11,r24,36
	ctx.r11.s64 = ctx.r24.s64 + 36;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c69d90
	if (cr6.lt) goto loc_82C69D90;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C69D90:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c69da4
	if (!cr6.lt) goto loc_82C69DA4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C69DA4:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,104(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r7,28(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r3,108(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// bl 0x82e85208
	ctx.lr = 0x82C69DBC;
	sub_82E85208(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// bl 0x83103100
	ctx.lr = 0x82C69DC8;
	sub_83103100(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c69ddc
	if (cr6.lt) goto loc_82C69DDC;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x82c69de0
	goto loc_82C69DE0;
loc_82C69DDC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82C69DE0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C69DE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c69de4
	if (!cr6.eq) goto loc_82C69DE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r25,180
	ctx.r3.s64 = ctx.r25.s64 + 180;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C69E08;
	sub_8259CC28(ctx, base);
	// lwz r10,84(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// addi r11,r24,64
	ctx.r11.s64 = ctx.r24.s64 + 64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c69e1c
	if (cr6.lt) goto loc_82C69E1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C69E1C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C69E20:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c69e20
	if (!cr6.eq) goto loc_82C69E20;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r25,208
	ctx.r3.s64 = ctx.r25.s64 + 208;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C69E48;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c69e68
	if (cr6.lt) goto loc_82C69E68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C69E68;
	sub_825952B8(ctx, base);
loc_82C69E68:
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
loc_82C69E74:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c69e88
	if (cr6.lt) goto loc_82C69E88;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82C69E88;
	sub_82416268(ctx, base);
loc_82C69E88:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C69E90"))) PPC_WEAK_FUNC(sub_82C69E90);
PPC_FUNC_IMPL(__imp__sub_82C69E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C69E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82de5068
	ctx.lr = 0x82C69EA4;
	sub_82DE5068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c69ef4
	if (cr6.eq) goto loc_82C69EF4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c69ef4
	if (!cr6.gt) goto loc_82C69EF4;
	// addi r28,r31,144
	ctx.r28.s64 = ctx.r31.s64 + 144;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82C69EC8:
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c697a0
	ctx.lr = 0x82C69ED8;
	sub_82C697A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab5f20
	ctx.lr = 0x82C69EE0;
	sub_82AB5F20(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c69ec8
	if (cr6.lt) goto loc_82C69EC8;
loc_82C69EF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C69EFC"))) PPC_WEAK_FUNC(sub_82C69EFC);
PPC_FUNC_IMPL(__imp__sub_82C69EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C69F00"))) PPC_WEAK_FUNC(sub_82C69F00);
PPC_FUNC_IMPL(__imp__sub_82C69F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C69F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82de5068
	ctx.lr = 0x82C69F14;
	sub_82DE5068(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c69f2c
	if (!cr6.eq) goto loc_82C69F2C;
loc_82C69F20:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C69F2C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x82c6a220
	if (cr6.gt) goto loc_82C6A220;
	// lis r12,-32057
	ctx.r12.s64 = -2100887552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24752
	ctx.r12.s64 = ctx.r12.s64 + -24752;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C69F84;
	case 1:
		goto loc_82C69FA0;
	case 2:
		goto loc_82C6A0C4;
	case 3:
		goto loc_82C6A16C;
	case 4:
		goto loc_82C6A1E8;
	case 5:
		goto loc_82C6A34C;
	case 6:
		goto loc_82C6A3F8;
	case 7:
		goto loc_82C6A40C;
	case 8:
		goto loc_82C6A420;
	case 9:
		goto loc_82C6A4B8;
	case 10:
		goto loc_82C6A4FC;
	case 11:
		goto loc_82C6A550;
	case 12:
		goto loc_82C6A57C;
	default:
		return;
	}
	// lwz r22,-24700(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24700);
	// lwz r22,-24672(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24672);
	// lwz r22,-24380(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24380);
	// lwz r22,-24212(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24212);
	// lwz r22,-24088(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24088);
	// lwz r22,-23732(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23732);
	// lwz r22,-23560(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23560);
	// lwz r22,-23540(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23540);
	// lwz r22,-23520(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23520);
	// lwz r22,-23368(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23368);
	// lwz r22,-23300(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23300);
	// lwz r22,-23216(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23216);
	// lwz r22,-23172(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23172);
loc_82C69F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c69e90
	ctx.lr = 0x82C69F8C;
	sub_82C69E90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C69FA0:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// bl 0x8310fbf0
	ctx.lr = 0x82C69FC8;
	sub_8310FBF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6a058
	if (cr6.eq) goto loc_82C6A058;
loc_82C69FD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fcb8
	ctx.lr = 0x82C69FD8;
	sub_8310FCB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x82C69FE4;
	sub_82475D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fc88
	ctx.lr = 0x82C69FEC;
	sub_8310FC88(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82c6a040
	if (!cr6.eq) goto loc_82C6A040;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6a010
	if (cr6.lt) goto loc_82C6A010;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82c6a014
	goto loc_82C6A014;
loc_82C6A010:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82C6A014:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82C6A024;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c6a040
	if (!cr6.eq) goto loc_82C6A040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fc48
	ctx.lr = 0x82C6A034;
	sub_8310FC48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6a078
	if (!cr6.eq) goto loc_82C6A078;
loc_82C6A040:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x82C6A048;
	sub_824707C8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8310fbf0
	ctx.lr = 0x82C6A050;
	sub_8310FBF0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c69fd0
	if (cr6.lt) goto loc_82C69FD0;
loc_82C6A058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82c698c0
	ctx.lr = 0x82C6A064;
	sub_82C698C0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A078:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c6a0ac
	if (!cr6.lt) goto loc_82C6A0AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x824707c8
	ctx.lr = 0x82C6A0A0;
	sub_824707C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A0AC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x824707c8
	ctx.lr = 0x82C6A0B8;
	sub_824707C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A0C4:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6a220
	if (!cr6.eq) goto loc_82C6A220;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,6332
	ctx.r11.s64 = ctx.r11.s64 + 6332;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x82C6A0EC;
	sub_837B0C10(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82ce3f50
	ctx.lr = 0x82C6A108;
	sub_82CE3F50(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6A114;
	sub_8387E8E0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,-23488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,9008(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,288(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C6A148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83103100
	ctx.lr = 0x82C6A154;
	sub_83103100(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A16C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c685f8
	ctx.lr = 0x82C6A174;
	sub_82C685F8(ctx, base);
	// bl 0x82e738c0
	ctx.lr = 0x82C6A178;
	sub_82E738C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6a1a0
	if (!cr6.eq) goto loc_82C6A1A0;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c68bd0
	ctx.lr = 0x82C6A1A8;
	sub_82C68BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6a220
	if (cr6.eq) goto loc_82C6A220;
	// bl 0x82e6f960
	ctx.lr = 0x82C6A1B8;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6a1c4
	if (cr6.eq) goto loc_82C6A1C4;
	// bl 0x82e701c0
	ctx.lr = 0x82C6A1C4;
	sub_82E701C0(ctx, base);
loc_82C6A1C4:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
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
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A1E8:
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6a22c
	if (cr6.eq) goto loc_82C6A22C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6a218
	if (cr6.eq) goto loc_82C6A218;
	// lwz r10,1144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,1160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1160, ctx.r9.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6a218
	if (cr6.eq) goto loc_82C6A218;
	// stb r9,368(r10)
	PPC_STORE_U8(ctx.r10.u32 + 368, ctx.r9.u8);
loc_82C6A218:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82C6A220:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A22C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6a270
	if (cr6.eq) goto loc_82C6A270;
loc_82C6A238:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,288(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// lfs f2,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82C6A264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A270:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6a238
	if (!cr6.eq) goto loc_82C6A238;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// bl 0x8310fbf0
	ctx.lr = 0x82C6A29C;
	sub_8310FBF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6a31c
	if (cr6.eq) goto loc_82C6A31C;
loc_82C6A2A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310fcb8
	ctx.lr = 0x82C6A2AC;
	sub_8310FCB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82475d40
	ctx.lr = 0x82C6A2B8;
	sub_82475D40(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6a2d0
	if (cr6.lt) goto loc_82C6A2D0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c6a2d4
	goto loc_82C6A2D4;
loc_82C6A2D0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82C6A2D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x82C6A2E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c6a308
	if (cr6.eq) goto loc_82C6A308;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824707c8
	ctx.lr = 0x82C6A2F4;
	sub_824707C8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x8310fbf0
	ctx.lr = 0x82C6A2FC;
	sub_8310FBF0(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c6a2a4
	if (cr6.lt) goto loc_82C6A2A4;
	// b 0x82c6a31c
	goto loc_82C6A31C;
loc_82C6A308:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310fc10
	ctx.lr = 0x82C6A314;
	sub_8310FC10(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824707c8
	ctx.lr = 0x82C6A31C;
	sub_824707C8(ctx, base);
loc_82C6A31C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A34C:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6a220
	if (!cr6.eq) goto loc_82C6A220;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6a218
	if (cr6.eq) goto loc_82C6A218;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r10,6332
	ctx.r11.s64 = ctx.r10.s64 + 6332;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x82C6A380;
	sub_837B0C10(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82ce2dd0
	ctx.lr = 0x82C6A39C;
	sub_82CE2DD0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6A3A8;
	sub_8387E8E0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,-23488(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23488);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r11,288(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C6A3D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83103100
	ctx.lr = 0x82C6A3E4;
	sub_83103100(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A3F8:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A40C:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A420:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r9,6792
	ctx.r6.s64 = ctx.r9.s64 + 6792;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// beq cr6,0x82c6a464
	if (cr6.eq) goto loc_82C6A464;
	// ld r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicl r10,r11,54,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 54) & 0x3FFFFFFFFFFFFF;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ce30f0
	ctx.lr = 0x82C6A464;
	sub_82CE30F0(ctx, base);
loc_82C6A464:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6a484
	if (cr6.eq) goto loc_82C6A484;
	// ld r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicl r10,r11,54,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 54) & 0x3FFFFFFFFFFFFF;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ce30f0
	ctx.lr = 0x82C6A484;
	sub_82CE30F0(ctx, base);
loc_82C6A484:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6a4a4
	if (cr6.eq) goto loc_82C6A4A4;
	// ld r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicl r10,r11,54,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 54) & 0x3FFFFFFFFFFFFF;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ce30f0
	ctx.lr = 0x82C6A4A4;
	sub_82CE30F0(ctx, base);
loc_82C6A4A4:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A4B8:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6a220
	if (!cr6.eq) goto loc_82C6A220;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6a220
	if (!cr6.eq) goto loc_82C6A220;
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6a220
	if (cr6.eq) goto loc_82C6A220;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82c69f20
	if (!cr6.eq) goto loc_82C69F20;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A4FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r10,6332
	ctx.r3.s64 = ctx.r10.s64 + 6332;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82C6A520;
	sub_82D2F6D8(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r4,240
	ctx.r4.s64 = 15728640;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d2ada8
	ctx.lr = 0x82C6A530;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83103100
	ctx.lr = 0x82C6A53C;
	sub_83103100(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A550:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6a220
	if (!cr6.eq) goto loc_82C6A220;
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c69f20
	if (cr6.eq) goto loc_82C69F20;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6A57C:
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6a220
	if (cr6.eq) goto loc_82C6A220;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6A5A8"))) PPC_WEAK_FUNC(sub_82C6A5A8);
PPC_FUNC_IMPL(__imp__sub_82C6A5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C6A5B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6880
	ctx.r9.s64 = ctx.r11.s64 + 6880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82de5078
	ctx.lr = 0x82C6A5D4;
	sub_82DE5078(ctx, base);
	// bl 0x82deab48
	ctx.lr = 0x82C6A5D8;
	sub_82DEAB48(ctx, base);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82c6a5fc
	if (cr6.lt) goto loc_82C6A5FC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C6A5FC;
	sub_825952B8(ctx, base);
loc_82C6A5FC:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6a630
	if (cr6.lt) goto loc_82C6A630;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C6A630;
	sub_825952B8(ctx, base);
loc_82C6A630:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c69708
	ctx.lr = 0x82C6A650;
	sub_82C69708(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82416268
	ctx.lr = 0x82C6A658;
	sub_82416268(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6504
	ctx.r9.s64 = ctx.r11.s64 + 6504;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82d25548
	ctx.lr = 0x82C6A678;
	sub_82D25548(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6A680"))) PPC_WEAK_FUNC(sub_82C6A680);
PPC_FUNC_IMPL(__imp__sub_82C6A680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C6A688;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6a6a4
	if (cr6.lt) goto loc_82C6A6A4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82C6A6A4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
loc_82C6A6BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c6a6bc
	if (!cr6.eq) goto loc_82C6A6BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C6A6E0;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82c6a6f4
	if (!cr6.lt) goto loc_82C6A6F4;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_82C6A6F4:
	// bl 0x8308e078
	ctx.lr = 0x82C6A6F8;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82C6A710;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,6504
	ctx.r9.s64 = ctx.r11.s64 + 6504;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// blt cr6,0x82c6a74c
	if (cr6.lt) goto loc_82C6A74C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C6A74C;
	sub_825952B8(ctx, base);
loc_82C6A74C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r9,r11,6880
	ctx.r9.s64 = ctx.r11.s64 + 6880;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x82c68138
	ctx.lr = 0x82C6A7AC;
	sub_82C68138(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// std r30,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r30.u64);
	// stb r7,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r7.u8);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// stw r28,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// bl 0x82deab28
	ctx.lr = 0x82C6A7D8;
	sub_82DEAB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6A7E8"))) PPC_WEAK_FUNC(sub_82C6A7E8);
PPC_FUNC_IMPL(__imp__sub_82C6A7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c6a5a8
	ctx.lr = 0x82C6A808;
	sub_82C6A5A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6a820
	if (cr6.eq) goto loc_82C6A820;
	// bl 0x82416268
	ctx.lr = 0x82C6A81C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C6A820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6A838"))) PPC_WEAK_FUNC(sub_82C6A838);
PPC_FUNC_IMPL(__imp__sub_82C6A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,7616
	ctx.r5.s64 = ctx.r11.s64 + 7616;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6A848"))) PPC_WEAK_FUNC(sub_82C6A848);
PPC_FUNC_IMPL(__imp__sub_82C6A848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C6A850;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1170
	ctx.r11.s64 = 76677120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,18724
	ctx.r10.u64 = ctx.r11.u64 | 18724;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c6a878
	if (!cr6.gt) goto loc_82C6A878;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C6A878;
	sub_831CC150(ctx, base);
loc_82C6A878:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,56
	ctx.r27.s64 = 56;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bge cr6,0x82c6a8f4
	if (!cr6.lt) goto loc_82C6A8F4;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e80a40
	ctx.lr = 0x82C6A8A4;
	sub_82E80A40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x837e37b0
	ctx.lr = 0x82C6A8BC;
	sub_837E37B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r29,r10,r27
	ctx.r29.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x82c6a8d8
	if (cr6.eq) goto loc_82C6A8D8;
	// bl 0x82416268
	ctx.lr = 0x82C6A8D8;
	sub_82416268(ctx, base);
loc_82C6A8D8:
	// mulli r10,r28,56
	ctx.r10.s64 = ctx.r28.s64 * 56;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mulli r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 * 56;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82C6A8F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6A8FC"))) PPC_WEAK_FUNC(sub_82C6A8FC);
PPC_FUNC_IMPL(__imp__sub_82C6A8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6A900"))) PPC_WEAK_FUNC(sub_82C6A900);
PPC_FUNC_IMPL(__imp__sub_82C6A900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1170
	ctx.r10.s64 = 76677120;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,56
	ctx.r9.s64 = 56;
	// ori r8,r10,18724
	ctx.r8.u64 = ctx.r10.u64 | 18724;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c6a934
	if (!cr6.lt) goto loc_82C6A934;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82C6A934:
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
	// blt cr6,0x82c6a964
	if (cr6.lt) goto loc_82C6A964;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82C6A964:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c6a970
	if (!cr6.lt) goto loc_82C6A970;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82C6A970:
	// b 0x82c6a848
	sub_82C6A848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6A974"))) PPC_WEAK_FUNC(sub_82C6A974);
PPC_FUNC_IMPL(__imp__sub_82C6A974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6A978"))) PPC_WEAK_FUNC(sub_82C6A978);
PPC_FUNC_IMPL(__imp__sub_82C6A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C6A980;
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
	ctx.lr = 0x82C6A994;
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
	ctx.lr = 0x82C6A9AC;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8032
	ctx.r9.s64 = ctx.r11.s64 + 8032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r30,r7,-7828
	ctx.r30.s64 = ctx.r7.s64 + -7828;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r4,-7828(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7828);
	// bl 0x82d20ae0
	ctx.lr = 0x82C6A9E8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82C6A9F4;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x82C6AA00;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82C6AA10;
	sub_82D23390(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,37
	ctx.r5.u64 = ctx.r5.u64 | 37;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20eb8
	ctx.lr = 0x82C6AA24;
	sub_82D20EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82C6AA34;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6AA40"))) PPC_WEAK_FUNC(sub_82C6AA40);
PPC_FUNC_IMPL(__imp__sub_82C6AA40) {
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
	ctx.lr = 0x82C6AA5C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r30,r11,7636
	ctx.r30.s64 = ctx.r11.s64 + 7636;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6AA7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ab24
	if (cr6.eq) goto loc_82C6AB24;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,676
	ctx.r4.u64 = ctx.r4.u64 | 676;
	// bl 0x82d30340
	ctx.lr = 0x82C6AA94;
	sub_82D30340(ctx, base);
	// addi r4,r30,-418
	ctx.r4.s64 = ctx.r30.s64 + -418;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C6AAA0;
	sub_837B0C10(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r11,56
	ctx.r11.s64 = 56;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,551
	ctx.r4.u64 = ctx.r4.u64 | 551;
	// divw r5,r8,r11
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// bl 0x82d042a8
	ctx.lr = 0x82C6AAC4;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6AACC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C6AAE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ab04
	if (cr6.eq) goto loc_82C6AB04;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6ab00
	if (!cr6.lt) goto loc_82C6AB00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C6AB00:
	// bl 0x82d39bf8
	ctx.lr = 0x82C6AB04;
	sub_82D39BF8(ctx, base);
loc_82C6AB04:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6ab24
	if (cr6.lt) goto loc_82C6AB24;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C6AB24;
	sub_825952B8(ctx, base);
loc_82C6AB24:
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

__attribute__((alias("__imp__sub_82C6AB3C"))) PPC_WEAK_FUNC(sub_82C6AB3C);
PPC_FUNC_IMPL(__imp__sub_82C6AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6AB40"))) PPC_WEAK_FUNC(sub_82C6AB40);
PPC_FUNC_IMPL(__imp__sub_82C6AB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bge cr6,0x82c6ab78
	if (!cr6.lt) goto loc_82C6AB78;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82c6ab7c
	if (!cr6.gt) goto loc_82C6AB7C;
loc_82C6AB78:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C6AB7C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6abcc
	if (cr6.eq) goto loc_82C6ABCC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,56
	ctx.r9.s64 = 56;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82c6abb0
	if (!cr6.eq) goto loc_82C6ABB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6a900
	ctx.lr = 0x82C6ABB0;
	sub_82C6A900(ctx, base);
loc_82C6ABB0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6abfc
	if (cr6.eq) goto loc_82C6ABFC;
	// b 0x82c6abf4
	goto loc_82C6ABF4;
loc_82C6ABCC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c6abe4
	if (!cr6.eq) goto loc_82C6ABE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6a900
	ctx.lr = 0x82C6ABE4;
	sub_82C6A900(ctx, base);
loc_82C6ABE4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6abfc
	if (cr6.eq) goto loc_82C6ABFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C6ABF4:
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6ABFC;
	sub_831CE980(ctx, base);
loc_82C6ABFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
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

__attribute__((alias("__imp__sub_82C6AC20"))) PPC_WEAK_FUNC(sub_82C6AC20);
PPC_FUNC_IMPL(__imp__sub_82C6AC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c6ac48
	if (cr6.lt) goto loc_82C6AC48;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c6ac4c
	goto loc_82C6AC4C;
loc_82C6AC48:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C6AC4C:
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
	ctx.lr = 0x82C6AC68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ac80
	if (cr6.eq) goto loc_82C6AC80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c6a978
	ctx.lr = 0x82C6AC7C;
	sub_82C6A978(ctx, base);
	// b 0x82c6ac84
	goto loc_82C6AC84;
loc_82C6AC80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C6AC84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6AC9C"))) PPC_WEAK_FUNC(sub_82C6AC9C);
PPC_FUNC_IMPL(__imp__sub_82C6AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6ACA0"))) PPC_WEAK_FUNC(sub_82C6ACA0);
PPC_FUNC_IMPL(__imp__sub_82C6ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8032
	ctx.r9.s64 = ctx.r11.s64 + 8032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ace4
	if (cr6.eq) goto loc_82C6ACE4;
	// bl 0x82416268
	ctx.lr = 0x82C6ACE4;
	sub_82416268(ctx, base);
loc_82C6ACE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82C6ACFC;
	sub_82D25548(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6ad14
	if (cr6.eq) goto loc_82C6AD14;
	// bl 0x82416268
	ctx.lr = 0x82C6AD10;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C6AD14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6AD2C"))) PPC_WEAK_FUNC(sub_82C6AD2C);
PPC_FUNC_IMPL(__imp__sub_82C6AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6AD30"))) PPC_WEAK_FUNC(sub_82C6AD30);
PPC_FUNC_IMPL(__imp__sub_82C6AD30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C6AD38;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6AD44;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ae9c
	if (cr6.eq) goto loc_82C6AE9C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6AD54;
	sub_82921C20(ctx, base);
	// addi r30,r23,96
	ctx.r30.s64 = ctx.r23.s64 + 96;
	// lwz r5,96(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,100(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837e7a18
	ctx.lr = 0x82C6AD70;
	sub_837E7A18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82deabc0
	ctx.lr = 0x82C6AD78;
	sub_82DEABC0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r22,56
	ctx.r22.s64 = 56;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// divw. r27,r9,r22
	ctx.r27.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x82c6ae5c
	if (cr0.eq) goto loc_82C6AE5C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r25,84
	ctx.r25.s64 = 84;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r26,6
	ctx.r26.s64 = 6;
loc_82C6ADB0:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82deacd8
	ctx.lr = 0x82C6AE04;
	sub_82DEACD8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82c6ae18
	if (cr6.eq) goto loc_82C6AE18;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82C6AE18:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d961a0
	ctx.lr = 0x82C6AE20;
	sub_82D961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6ae3c
	if (!cr6.eq) goto loc_82C6AE3C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c6ae3c
	if (!cr6.eq) goto loc_82C6AE3C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82C6AE3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6ab40
	ctx.lr = 0x82C6AE48;
	sub_82C6AB40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// blt cr6,0x82c6adb0
	if (cr6.lt) goto loc_82C6ADB0;
loc_82C6AE5C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,105
	ctx.r4.s64 = 105;
	// bne cr6,0x82c6ae74
	if (!cr6.eq) goto loc_82C6AE74;
	// li r4,104
	ctx.r4.s64 = 104;
loc_82C6AE74:
	// bl 0x82d17da0
	ctx.lr = 0x82C6AE78;
	sub_82D17DA0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// divw r5,r9,r22
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82C6AE9C;
	sub_82D20F50(ctx, base);
loc_82C6AE9C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6AEA4"))) PPC_WEAK_FUNC(sub_82C6AEA4);
PPC_FUNC_IMPL(__imp__sub_82C6AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6AEA8"))) PPC_WEAK_FUNC(sub_82C6AEA8);
PPC_FUNC_IMPL(__imp__sub_82C6AEA8) {
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
	// bl 0x82c6ad30
	ctx.lr = 0x82C6AEC0;
	sub_82C6AD30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6aa40
	ctx.lr = 0x82C6AEC8;
	sub_82C6AA40(ctx, base);
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

__attribute__((alias("__imp__sub_82C6AEE0"))) PPC_WEAK_FUNC(sub_82C6AEE0);
PPC_FUNC_IMPL(__imp__sub_82C6AEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C6AEE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c6b394
	if (cr6.eq) goto loc_82C6B394;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// ble cr6,0x82c6b384
	if (!cr6.gt) goto loc_82C6B384;
	// mulli r10,r5,56
	ctx.r10.s64 = ctx.r5.s64 * 56;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6AF28;
	sub_831CE980(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d8b758
	ctx.lr = 0x82C6AF38;
	sub_82D8B758(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d8b938
	ctx.lr = 0x82C6AF44;
	sub_82D8B938(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// addi r31,r11,7932
	ctx.r31.s64 = ctx.r11.s64 + 7932;
	// beq cr6,0x82c6af7c
	if (cr6.eq) goto loc_82C6AF7C;
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// bl 0x837b0c10
	ctx.lr = 0x82C6AF68;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6AF78;
	sub_82A69A28(ctx, base);
	// b 0x82c6afa4
	goto loc_82C6AFA4;
loc_82C6AF7C:
	// addi r4,r31,-713
	ctx.r4.s64 = ctx.r31.s64 + -713;
	// bl 0x837b0c10
	ctx.lr = 0x82C6AF84;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82C6AF94;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6AFA4;
	sub_82A69AD0(ctx, base);
loc_82C6AFA4:
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d8c0c8
	ctx.lr = 0x82C6AFB8;
	sub_82D8C0C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6b020
	if (cr6.eq) goto loc_82C6B020;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6AFE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6B000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// beq cr6,0x82c6b018
	if (cr6.eq) goto loc_82C6B018;
	// bl 0x82d39310
	ctx.lr = 0x82C6B014;
	sub_82D39310(ctx, base);
	// b 0x82c6b1cc
	goto loc_82C6B1CC;
loc_82C6B018:
	// bl 0x82d39448
	ctx.lr = 0x82C6B01C;
	sub_82D39448(ctx, base);
	// b 0x82c6b1cc
	goto loc_82C6B1CC;
loc_82C6B020:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6B03C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6B054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6b1cc
	if (cr6.eq) goto loc_82C6B1CC;
	// addi r4,r31,-682
	ctx.r4.s64 = ctx.r31.s64 + -682;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B06C;
	sub_837B0C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,196(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,74
	cr6.compare<int32_t>(ctx.r11.s32, 74, xer);
	// bne cr6,0x82c6b0c8
	if (!cr6.eq) goto loc_82C6B0C8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c6b100
	if (cr6.eq) goto loc_82C6B100;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// clrlwi r29,r5,14
	ctx.r29.u64 = ctx.r5.u32 & 0x3FFFF;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c6b0a0
	if (!cr6.gt) goto loc_82C6B0A0;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82C6B0A0:
	// bl 0x831156e8
	ctx.lr = 0x82C6B0A4;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82C6B0B0;
	sub_8311C148(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82C6B0C4;
	sub_82D042A8(ctx, base);
	// b 0x82c6b114
	goto loc_82C6B114;
loc_82C6B0C8:
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(ctx.r11.s32, 75, xer);
	// bne cr6,0x82c6b100
	if (!cr6.eq) goto loc_82C6B100;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// beq cr6,0x82c6b100
	if (cr6.eq) goto loc_82C6B100;
	// bl 0x831156e8
	ctx.lr = 0x82C6B0DC;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c628
	ctx.lr = 0x82C6B0E8;
	sub_8311C628(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82C6B0FC;
	sub_82D042A8(ctx, base);
	// b 0x82c6b114
	goto loc_82C6B114;
loc_82C6B100:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8ee48
	ctx.lr = 0x82C6B114;
	sub_82D8EE48(ctx, base);
loc_82C6B114:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d04828
	ctx.lr = 0x82C6B11C;
	sub_82D04828(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C6B128;
	sub_82D28370(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x8291fd60
	ctx.lr = 0x82C6B13C;
	sub_8291FD60(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04d80
	ctx.lr = 0x82C6B14C;
	sub_82D04D80(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ble cr6,0x82c6b184
	if (!cr6.gt) goto loc_82C6B184;
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
loc_82C6B184:
	// bctrl 
	ctx.lr = 0x82C6B188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292a3f8
	ctx.lr = 0x82C6B194;
	sub_8292A3F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B1A4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6B1B4;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838ae2a8
	ctx.lr = 0x82C6B1BC;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d04b60
	ctx.lr = 0x82C6B1C4;
	sub_82D04B60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6B1CC;
	sub_8387E8E0(ctx, base);
loc_82C6B1CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6B1E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6B200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82d8ba80
	ctx.lr = 0x82C6B20C;
	sub_82D8BA80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82c6b22c
	if (!cr6.eq) goto loc_82C6B22C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6B228;
	sub_82D2AEC8(ctx, base);
	// b 0x82c6b250
	goto loc_82C6B250;
loc_82C6B22C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6B234;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6B250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6B250:
	// lwz r27,220(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x82c6b274
	if (!cr6.eq) goto loc_82C6B274;
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ori r29,r29,678
	ctx.r29.u64 = ctx.r29.u64 | 678;
	// b 0x82c6b278
	goto loc_82C6B278;
loc_82C6B274:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82C6B278:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x82d961a0
	ctx.lr = 0x82C6B280;
	sub_82D961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6b290
	if (!cr6.eq) goto loc_82C6B290;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82C6B290:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x82c6b2a0
	if (!cr6.eq) goto loc_82C6B2A0;
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// ori r29,r29,677
	ctx.r29.u64 = ctx.r29.u64 | 677;
loc_82C6B2A0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6b2c8
	if (cr6.eq) goto loc_82C6B2C8;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// bne cr6,0x82c6b2c0
	if (!cr6.eq) goto loc_82C6B2C0;
	// ori r29,r29,670
	ctx.r29.u64 = ctx.r29.u64 | 670;
	// b 0x82c6b2d0
	goto loc_82C6B2D0;
loc_82C6B2C0:
	// ori r29,r29,679
	ctx.r29.u64 = ctx.r29.u64 | 679;
	// b 0x82c6b2d0
	goto loc_82C6B2D0;
loc_82C6B2C8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c6b2f0
	if (cr6.eq) goto loc_82C6B2F0;
loc_82C6B2D0:
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B2DC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6B2EC;
	sub_82A69A28(ctx, base);
	// b 0x82c6b31c
	goto loc_82C6B31C;
loc_82C6B2F0:
	// addi r4,r31,-681
	ctx.r4.s64 = ctx.r31.s64 + -681;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B2FC;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B30C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6B31C;
	sub_82A69AD0(ctx, base);
loc_82C6B31C:
	// addi r4,r31,-651
	ctx.r4.s64 = ctx.r31.s64 + -651;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B328;
	sub_837B0C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82a6b9a8
	ctx.lr = 0x82C6B338;
	sub_82A6B9A8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c6b34c
	if (!cr6.lt) goto loc_82C6B34C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82C6B34C:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B354;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82C6B364;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6B374;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6B37C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C6B384:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6B394;
	sub_82D2AEC8(ctx, base);
loc_82C6B394:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6B39C"))) PPC_WEAK_FUNC(sub_82C6B39C);
PPC_FUNC_IMPL(__imp__sub_82C6B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6B3A0"))) PPC_WEAK_FUNC(sub_82C6B3A0);
PPC_FUNC_IMPL(__imp__sub_82C6B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23792);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6b3fc
	if (!cr6.eq) goto loc_82C6B3FC;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,148
	ctx.r4.s64 = 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C6B3E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6b3f4
	if (cr6.eq) goto loc_82C6B3F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82debb40
	ctx.lr = 0x82C6B3F0;
	sub_82DEBB40(ctx, base);
	// b 0x82c6b3f8
	goto loc_82C6B3F8;
loc_82C6B3F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C6B3F8:
	// stw r3,-23792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23792, ctx.r3.u32);
loc_82C6B3FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6B414"))) PPC_WEAK_FUNC(sub_82C6B414);
PPC_FUNC_IMPL(__imp__sub_82C6B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6B418"))) PPC_WEAK_FUNC(sub_82C6B418);
PPC_FUNC_IMPL(__imp__sub_82C6B418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C6B420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c6b464
	if (!cr6.eq) goto loc_82C6B464;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,-7668
	ctx.r11.s64 = ctx.r11.s64 + -7668;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82C6B444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d20ae0
	ctx.lr = 0x82C6B450;
	sub_82D20AE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82c6b444
	if (!cr0.eq) goto loc_82C6B444;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,-7660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7660);
	// b 0x82c6b490
	goto loc_82C6B490;
loc_82C6B464:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r11,r11,-7684
	ctx.r11.s64 = ctx.r11.s64 + -7684;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82C6B474:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d20ae0
	ctx.lr = 0x82C6B480;
	sub_82D20AE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82c6b474
	if (!cr0.eq) goto loc_82C6B474;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,-7672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7672);
loc_82C6B490:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d23390
	ctx.lr = 0x82C6B49C;
	sub_82D23390(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6B4A8"))) PPC_WEAK_FUNC(sub_82C6B4A8);
PPC_FUNC_IMPL(__imp__sub_82C6B4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c6b52c
	if (cr6.eq) goto loc_82C6B52C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82c6b534
	if (!cr6.eq) goto loc_82C6B534;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82c6b534
	if (!cr6.eq) goto loc_82C6B534;
	// bl 0x82d86078
	ctx.lr = 0x82C6B4E0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6b534
	if (cr6.eq) goto loc_82C6B534;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6B4F0;
	sub_82921C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82deabf0
	ctx.lr = 0x82C6B4F8;
	sub_82DEABF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,29
	ctx.r4.s64 = 29;
	// stw r11,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C6B50C;
	sub_82D17DA0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,9100
	ctx.r5.s64 = ctx.r10.s64 + 9100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C6B520;
	sub_82D20DA8(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// b 0x82c6b534
	goto loc_82C6B534;
loc_82C6B52C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82C6B534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6B54C"))) PPC_WEAK_FUNC(sub_82C6B54C);
PPC_FUNC_IMPL(__imp__sub_82C6B54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6B550"))) PPC_WEAK_FUNC(sub_82C6B550);
PPC_FUNC_IMPL(__imp__sub_82C6B550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c6b578
	if (!cr6.eq) goto loc_82C6B578;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
loc_82C6B578:
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

__attribute__((alias("__imp__sub_82C6B588"))) PPC_WEAK_FUNC(sub_82C6B588);
PPC_FUNC_IMPL(__imp__sub_82C6B588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c6b5b0
	if (!cr6.eq) goto loc_82C6B5B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
loc_82C6B5B0:
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

__attribute__((alias("__imp__sub_82C6B5C0"))) PPC_WEAK_FUNC(sub_82C6B5C0);
PPC_FUNC_IMPL(__imp__sub_82C6B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C6B5C8;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82c6b644
	if (!cr6.lt) goto loc_82C6B644;
loc_82C6B5F4:
	// mulli r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 * 56;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82C6B60C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6b644
	if (cr6.eq) goto loc_82C6B644;
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6B62C;
	sub_831CE980(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x82c6b5f4
	if (cr6.lt) goto loc_82C6B5F4;
loc_82C6B644:
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6B658;
	sub_831CE980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6B660"))) PPC_WEAK_FUNC(sub_82C6B660);
PPC_FUNC_IMPL(__imp__sub_82C6B660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r10,15
	ctx.r10.s64 = 983040;
	// li r9,84
	ctx.r9.s64 = 84;
	// ori r6,r10,16960
	ctx.r6.u64 = ctx.r10.u64 | 16960;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
loc_82C6B6C0:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c6b6c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C6B6C0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r9,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6B6E0"))) PPC_WEAK_FUNC(sub_82C6B6E0);
PPC_FUNC_IMPL(__imp__sub_82C6B6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6B6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6B6F4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6b778
	if (cr6.eq) goto loc_82C6B778;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6B708;
	sub_82921C20(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C6B718;
	sub_82DAB6D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82deab90
	ctx.lr = 0x82C6B734;
	sub_82DEAB90(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82deab78
	ctx.lr = 0x82C6B748;
	sub_82DEAB78(ctx, base);
	// lwz r10,3496(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3496);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82c6b770
	if (!cr6.eq) goto loc_82C6B770;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// bl 0x82d20da8
	ctx.lr = 0x82C6B768;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6B770:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19858
	ctx.lr = 0x82C6B778;
	sub_82D19858(ctx, base);
loc_82C6B778:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6B780"))) PPC_WEAK_FUNC(sub_82C6B780);
PPC_FUNC_IMPL(__imp__sub_82C6B780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6B79C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6b81c
	if (cr6.eq) goto loc_82C6B81C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6B7AC;
	sub_82921C20(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82deab90
	ctx.lr = 0x82C6B7C0;
	sub_82DEAB90(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c6b81c
	if (cr6.eq) goto loc_82C6B81C;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82bd64b8
	ctx.lr = 0x82C6B7EC;
	sub_82BD64B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6B7F4;
	sub_82D1C1A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82bd6728
	ctx.lr = 0x82C6B81C;
	sub_82BD6728(ctx, base);
loc_82C6B81C:
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

__attribute__((alias("__imp__sub_82C6B834"))) PPC_WEAK_FUNC(sub_82C6B834);
PPC_FUNC_IMPL(__imp__sub_82C6B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6B838"))) PPC_WEAK_FUNC(sub_82C6B838);
PPC_FUNC_IMPL(__imp__sub_82C6B838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C6B840;
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
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82c6b8c0
	if (!cr6.lt) goto loc_82C6B8C0;
loc_82C6B86C:
	// mulli r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 * 56;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-56
	ctx.r4.s64 = ctx.r3.s64 + -56;
	// bctrl 
	ctx.lr = 0x82C6B880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6b890
	if (cr6.eq) goto loc_82C6B890;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82C6B890:
	// mulli r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 * 56;
	// mulli r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 * 56;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6B8A8;
	sub_831CE980(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82c6b86c
	if (cr6.lt) goto loc_82C6B86C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82C6B8C0:
	// bne cr6,0x82c6b8e4
	if (!cr6.eq) goto loc_82C6B8E4;
	// mulli r11,r28,56
	ctx.r11.s64 = ctx.r28.s64 * 56;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 * 56;
	// addi r4,r10,-56
	ctx.r4.s64 = ctx.r10.s64 + -56;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6B8E0;
	sub_831CE980(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82C6B8E4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82c6b94c
	if (!cr6.lt) goto loc_82C6B94C;
loc_82C6B8FC:
	// mulli r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 * 56;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82C6B914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6b94c
	if (cr6.eq) goto loc_82C6B94C;
	// mulli r11,r28,56
	ctx.r11.s64 = ctx.r28.s64 * 56;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6B934;
	sub_831CE980(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x82c6b8fc
	if (cr6.lt) goto loc_82C6B8FC;
loc_82C6B94C:
	// mulli r11,r28,56
	ctx.r11.s64 = ctx.r28.s64 * 56;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6B960;
	sub_831CE980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6B968"))) PPC_WEAK_FUNC(sub_82C6B968);
PPC_FUNC_IMPL(__imp__sub_82C6B968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c6b9e8
	if (!cr6.eq) goto loc_82C6B9E8;
	// bl 0x82d86078
	ctx.lr = 0x82C6B990;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6b9e8
	if (cr6.eq) goto loc_82C6B9E8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6B9A0;
	sub_82921C20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82deab90
	ctx.lr = 0x82C6B9B8;
	sub_82DEAB90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6B9C0;
	sub_82D1C1A8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c6b9e8
	if (cr6.eq) goto loc_82C6B9E8;
	// stw r3,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82deab78
	ctx.lr = 0x82C6B9E0;
	sub_82DEAB78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6b780
	ctx.lr = 0x82C6B9E8;
	sub_82C6B780(ctx, base);
loc_82C6B9E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6BA00"))) PPC_WEAK_FUNC(sub_82C6BA00);
PPC_FUNC_IMPL(__imp__sub_82C6BA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C6BA08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6BA14;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6bc68
	if (cr6.eq) goto loc_82C6BC68;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6BA24;
	sub_82921C20(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r28,56
	ctx.r28.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// divw r27,r9,r28
	ctx.r27.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BA48;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c6ba88
	if (!cr6.gt) goto loc_82C6BA88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BA58;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6ba7c
	if (cr6.gt) goto loc_82C6BA7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BA7C;
	sub_831CC188(ctx, base);
loc_82C6BA7C:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 632, ctx.r9.u32);
loc_82C6BA88:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c6bc5c
	if (!cr6.eq) goto loc_82C6BC5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83767d18
	ctx.lr = 0x82C6BA9C;
	sub_83767D18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82c6b660
	ctx.lr = 0x82C6BAA4;
	sub_82C6B660(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r27,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r27.u8);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BAB4;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bad8
	if (cr6.gt) goto loc_82C6BAD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BAD8;
	sub_831CC188(ctx, base);
loc_82C6BAD8:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BAF0;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bb14
	if (cr6.gt) goto loc_82C6BB14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BB14;
	sub_831CC188(ctx, base);
loc_82C6BB14:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r27,392(r29)
	PPC_STORE_U8(ctx.r29.u32 + 392, ctx.r27.u8);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BB30;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bb54
	if (cr6.gt) goto loc_82C6BB54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BB54;
	sub_831CC188(ctx, base);
loc_82C6BB54:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BB6C;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bb90
	if (cr6.gt) goto loc_82C6BB90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BB90;
	sub_831CC188(ctx, base);
loc_82C6BB90:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,74
	cr6.compare<int32_t>(ctx.r10.s32, 74, xer);
	// bne cr6,0x82c6bbe0
	if (!cr6.eq) goto loc_82C6BBE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BBAC;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bbd0
	if (cr6.gt) goto loc_82C6BBD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BBD0;
	sub_831CC188(ctx, base);
loc_82C6BBD0:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r10.u32);
loc_82C6BBE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BBE8;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bc0c
	if (cr6.gt) goto loc_82C6BC0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BC0C;
	sub_831CC188(ctx, base);
loc_82C6BC0C:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,75
	cr6.compare<int32_t>(ctx.r10.s32, 75, xer);
	// bne cr6,0x82c6bc5c
	if (!cr6.eq) goto loc_82C6BC5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BC28;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bc4c
	if (cr6.gt) goto loc_82C6BC4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BC4C;
	sub_831CC188(ctx, base);
loc_82C6BC4C:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r10.u32);
loc_82C6BC5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19858
	ctx.lr = 0x82C6BC68;
	sub_82D19858(ctx, base);
loc_82C6BC68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6BC70"))) PPC_WEAK_FUNC(sub_82C6BC70);
PPC_FUNC_IMPL(__imp__sub_82C6BC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C6BC78;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6BC84;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6be54
	if (cr6.eq) goto loc_82C6BE54;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6BC98;
	sub_82921C20(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r29,56
	ctx.r29.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// divw r26,r9,r29
	ctx.r26.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BCBC;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, xer);
	// ble cr6,0x82c6bcfc
	if (!cr6.gt) goto loc_82C6BCFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BCCC;
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
	// bgt cr6,0x82c6bcf0
	if (cr6.gt) goto loc_82C6BCF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BCF0;
	sub_831CC188(ctx, base);
loc_82C6BCF0:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,632(r27)
	PPC_STORE_U32(ctx.r27.u32 + 632, ctx.r9.u32);
loc_82C6BCFC:
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C6BD04;
	sub_82DAB6D0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BD40;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// divw r4,r5,r29
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r29.s32);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bd64
	if (cr6.gt) goto loc_82C6BD64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BD64;
	sub_831CC188(ctx, base);
loc_82C6BD64:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BD7C;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bda0
	if (cr6.gt) goto loc_82C6BDA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BDA0;
	sub_831CC188(ctx, base);
loc_82C6BDA0:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BDB8;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bddc
	if (cr6.gt) goto loc_82C6BDDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BDDC;
	sub_831CC188(ctx, base);
loc_82C6BDDC:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BDF4;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6be18
	if (cr6.gt) goto loc_82C6BE18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BE18;
	sub_831CC188(ctx, base);
loc_82C6BE18:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82d97620
	ctx.lr = 0x82C6BE34;
	sub_82D97620(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,9052
	ctx.r5.s64 = ctx.r9.s64 + 9052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C6BE48;
	sub_82D20DA8(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C6BE54;
	sub_82D17DA0(ctx, base);
loc_82C6BE54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6BE5C"))) PPC_WEAK_FUNC(sub_82C6BE5C);
PPC_FUNC_IMPL(__imp__sub_82C6BE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6BE60"))) PPC_WEAK_FUNC(sub_82C6BE60);
PPC_FUNC_IMPL(__imp__sub_82C6BE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6BE68;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c6bff4
	if (!cr6.eq) goto loc_82C6BFF4;
	// bl 0x82d86078
	ctx.lr = 0x82C6BE80;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6c048
	if (cr6.eq) goto loc_82C6C048;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C6BE90;
	sub_82DAB6D0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BECC;
	sub_82D1C1A8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r29,56
	ctx.r29.s64 = 56;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// divw r4,r5,r29
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r29.s32);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bef8
	if (cr6.gt) goto loc_82C6BEF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BEF8;
	sub_831CC188(ctx, base);
loc_82C6BEF8:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BF10;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bf34
	if (cr6.gt) goto loc_82C6BF34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BF34;
	sub_831CC188(ctx, base);
loc_82C6BF34:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BF4C;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bf70
	if (cr6.gt) goto loc_82C6BF70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BF70;
	sub_831CC188(ctx, base);
loc_82C6BF70:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6BF88;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82c6bfac
	if (cr6.gt) goto loc_82C6BFAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6BFAC;
	sub_831CC188(ctx, base);
loc_82C6BFAC:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82d97620
	ctx.lr = 0x82C6BFC8;
	sub_82D97620(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C6BFD4;
	sub_82D17DA0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,9084
	ctx.r11.s64 = ctx.r9.s64 + 9084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bl 0x82d20da8
	ctx.lr = 0x82C6BFEC;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6BFF4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c6c048
	if (!cr6.eq) goto loc_82C6C048;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,9084
	ctx.r3.s64 = ctx.r11.s64 + 9084;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82C6C018;
	sub_82D2F6D8(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,508
	ctx.r4.u64 = ctx.r4.u64 | 508;
	// bl 0x82d2ada8
	ctx.lr = 0x82C6C028;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C6C034;
	sub_83103100(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r10,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C6C048;
	sub_82D17DA0(ctx, base);
loc_82C6C048:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6C050"))) PPC_WEAK_FUNC(sub_82C6C050);
PPC_FUNC_IMPL(__imp__sub_82C6C050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6C058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82C6C068;
	sub_82D19D40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6C074;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,9124
	ctx.r4.s64 = ctx.r11.s64 + 9124;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C6C090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6c0f4
	if (cr6.eq) goto loc_82C6C0F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82C6C0A4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6c0ec
	if (cr6.eq) goto loc_82C6C0EC;
loc_82C6C0AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C6C0B8;
	sub_82D33DB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82C6C0D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82C6C0E4;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c6c0ac
	if (cr6.lt) goto loc_82C6C0AC;
loc_82C6C0EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6b780
	ctx.lr = 0x82C6C0F4;
	sub_82C6B780(ctx, base);
loc_82C6C0F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6C0FC"))) PPC_WEAK_FUNC(sub_82C6C0FC);
PPC_FUNC_IMPL(__imp__sub_82C6C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6C100"))) PPC_WEAK_FUNC(sub_82C6C100);
PPC_FUNC_IMPL(__imp__sub_82C6C100) {
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
	ctx.lr = 0x82C6C108;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6C120;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6C128;
	sub_82921C20(ctx, base);
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// li r27,56
	ctx.r27.s64 = 56;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82c6c1e8
	if (cr6.gt) goto loc_82C6C1E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c6c180
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6C180;
	// bdzf 4*cr6+eq,0x82c6c1c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6C1C8;
	// bdzf 4*cr6+eq,0x82c6c1c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6C1C8;
	// bdzf 4*cr6+eq,0x82c6c1d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6C1D0;
	// bne cr6,0x82c6c1d0
	if (!cr6.eq) goto loc_82C6C1D0;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lwz r9,148(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf r30,r5,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r5.s64;
	// b 0x82c6c1e8
	goto loc_82C6C1E8;
loc_82C6C180:
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82c6c1a4
	if (!cr6.lt) goto loc_82C6C1A4;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x82c6c1e8
	goto loc_82C6C1E8;
loc_82C6C1A4:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// mulhw r8,r11,r9
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf r30,r6,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x82c6c1e8
	goto loc_82C6C1E8;
loc_82C6C1C8:
	// lwz r30,148(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// b 0x82c6c1e8
	goto loc_82C6C1E8;
loc_82C6C1D0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82deab90
	ctx.lr = 0x82C6C1E4;
	sub_82DEAB90(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C6C1E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C6C20C;
	sub_82D1EBF8(ctx, base);
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82c6c2bc
	if (cr6.eq) goto loc_82C6C2BC;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c6c2bc
	if (cr6.eq) goto loc_82C6C2BC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82c6c2bc
	if (cr6.eq) goto loc_82C6C2BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C6C234;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c24c
	if (!cr6.eq) goto loc_82C6C24C;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c6c2bc
	if (!cr6.eq) goto loc_82C6C2BC;
loc_82C6C24C:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 + 96;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c6c2bc
	if (cr0.eq) goto loc_82C6C2BC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c6c2d0
	if (!cr6.gt) goto loc_82C6C2D0;
loc_82C6C270:
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r10,632(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 632);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c6c29c
	if (!cr6.eq) goto loc_82C6C29C;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C6C29C;
	sub_82D1EBF8(ctx, base);
loc_82C6C29C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c6c270
	if (cr6.gt) goto loc_82C6C270;
loc_82C6C2BC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C6C2D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6C2DC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C6C2DC"))) PPC_WEAK_FUNC(sub_82C6C2DC);
PPC_FUNC_IMPL(__imp__sub_82C6C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6C2E0"))) PPC_WEAK_FUNC(sub_82C6C2E0);
PPC_FUNC_IMPL(__imp__sub_82C6C2E0) {
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
	ctx.lr = 0x82C6C2E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,56
	ctx.r10.s64 = 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82c6c3e0
	if (!cr0.gt) goto loc_82C6C3E0;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// mulli r11,r27,56
	ctx.r11.s64 = ctx.r27.s64 * 56;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r3
	ctx.r24.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C6C31C:
	// addi r24,r24,-56
	ctx.r24.s64 = ctx.r24.s64 + -56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// bl 0x831ce980
	ctx.lr = 0x82C6C338;
	sub_831CE980(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x82c6c398
	if (!cr6.lt) goto loc_82C6C398;
loc_82C6C348:
	// mulli r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 * 56;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-56
	ctx.r4.s64 = ctx.r3.s64 + -56;
	// bctrl 
	ctx.lr = 0x82C6C35C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6c36c
	if (cr6.eq) goto loc_82C6C36C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82C6C36C:
	// mulli r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 * 56;
	// mulli r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 * 56;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6C384;
	sub_831CE980(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82c6c348
	if (cr6.lt) goto loc_82C6C348;
loc_82C6C398:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x82c6c3c0
	if (!cr6.eq) goto loc_82C6C3C0;
	// mulli r11,r28,56
	ctx.r11.s64 = ctx.r28.s64 * 56;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 * 56;
	// addi r4,r10,-56
	ctx.r4.s64 = ctx.r10.s64 + -56;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6C3BC;
	sub_831CE980(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82C6C3C0:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6b5c0
	ctx.lr = 0x82C6C3D8;
	sub_82C6B5C0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x82c6c31c
	if (cr6.gt) goto loc_82C6C31C;
loc_82C6C3E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6C3E8"))) PPC_WEAK_FUNC(sub_82C6C3E8);
PPC_FUNC_IMPL(__imp__sub_82C6C3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C6C3F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c6c4ec
	if (cr6.eq) goto loc_82C6C4EC;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c6c4ec
	if (cr6.eq) goto loc_82C6C4EC;
	// addi r26,r29,-56
	ctx.r26.s64 = ctx.r29.s64 + -56;
loc_82C6C418:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C42C;
	sub_831CE980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82C6C43C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6c478
	if (cr6.eq) goto loc_82C6C478;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c6c470
	if (cr6.eq) goto loc_82C6C470;
loc_82C6C454:
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C468;
	sub_831CE980(ctx, base);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c6c454
	if (!cr6.eq) goto loc_82C6C454;
loc_82C6C470:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82c6c4d0
	goto loc_82C6C4D0;
loc_82C6C478:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82C6C48C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6c4cc
	if (cr6.eq) goto loc_82C6C4CC;
loc_82C6C498:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C4A8;
	sub_831CE980(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C6C4C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c498
	if (!cr6.eq) goto loc_82C6C498;
loc_82C6C4CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C6C4D0:
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x82C6C4DC;
	sub_831CE980(ctx, base);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// addi r26,r26,56
	ctx.r26.s64 = ctx.r26.s64 + 56;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bne cr6,0x82c6c418
	if (!cr6.eq) goto loc_82C6C418;
loc_82C6C4EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6C4F4"))) PPC_WEAK_FUNC(sub_82C6C4F4);
PPC_FUNC_IMPL(__imp__sub_82C6C4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6C4F8"))) PPC_WEAK_FUNC(sub_82C6C4F8);
PPC_FUNC_IMPL(__imp__sub_82C6C4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6C500;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	ctx.lr = 0x82C6C524;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6c560
	if (cr6.eq) goto loc_82C6C560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C540;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C550;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C560;
	sub_831CE980(ctx, base);
loc_82C6C560:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82C6C570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6c5ac
	if (cr6.eq) goto loc_82C6C5AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C58C;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C59C;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C5AC;
	sub_831CE980(ctx, base);
loc_82C6C5AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C6C5BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6c5f8
	if (cr6.eq) goto loc_82C6C5F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C5D8;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C5E8;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C5F8;
	sub_831CE980(ctx, base);
loc_82C6C5F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6C600"))) PPC_WEAK_FUNC(sub_82C6C600);
PPC_FUNC_IMPL(__imp__sub_82C6C600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C6C608;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,56
	ctx.r10.s64 = 56;
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
	// ble cr6,0x82c6c698
	if (!cr6.gt) goto loc_82C6C698;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,56
	ctx.r29.s64 = ctx.r11.s64 * 56;
	// mulli r26,r11,112
	ctx.r26.s64 = ctx.r11.s64 * 112;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c6c4f8
	ctx.lr = 0x82C6C650;
	sub_82C6C4F8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82c6c4f8
	ctx.lr = 0x82C6C664;
	sub_82C6C4F8(ctx, base);
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
	// bl 0x82c6c4f8
	ctx.lr = 0x82C6C67C;
	sub_82C6C4F8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c6c4f8
	ctx.lr = 0x82C6C690;
	sub_82C6C4F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C6C698:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c6c4f8
	ctx.lr = 0x82C6C6A4;
	sub_82C6C4F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6C6AC"))) PPC_WEAK_FUNC(sub_82C6C6AC);
PPC_FUNC_IMPL(__imp__sub_82C6C6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6C6B0"))) PPC_WEAK_FUNC(sub_82C6C6B0);
PPC_FUNC_IMPL(__imp__sub_82C6C6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C6C6B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,56
	ctx.r10.s64 = 56;
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
	// mulli r11,r7,56
	ctx.r11.s64 = ctx.r7.s64 * 56;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-56
	ctx.r5.s64 = ctx.r5.s64 + -56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82c6c600
	ctx.lr = 0x82C6C6F8;
	sub_82C6C600(ctx, base);
	// addi r26,r31,56
	ctx.r26.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x82c6c74c
	if (!cr6.lt) goto loc_82C6C74C;
loc_82C6C704:
	// addi r30,r31,-56
	ctx.r30.s64 = ctx.r31.s64 + -56;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82C6C718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c74c
	if (!cr6.eq) goto loc_82C6C74C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C6C734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c74c
	if (!cr6.eq) goto loc_82C6C74C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// blt cr6,0x82c6c704
	if (cr6.lt) goto loc_82C6C704;
loc_82C6C74C:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// bge cr6,0x82c6c798
	if (!cr6.lt) goto loc_82C6C798;
loc_82C6C754:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82C6C764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c798
	if (!cr6.eq) goto loc_82C6C798;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C6C780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c798
	if (!cr6.eq) goto loc_82C6C798;
	// addi r26,r26,56
	ctx.r26.s64 = ctx.r26.s64 + 56;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82c6c754
	if (cr6.lt) goto loc_82C6C754;
loc_82C6C798:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82C6C7A0:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82c6c824
	if (!cr6.lt) goto loc_82C6C824;
loc_82C6C7A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C6C7B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c818
	if (!cr6.eq) goto loc_82C6C818;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82C6C7D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c824
	if (!cr6.eq) goto loc_82C6C824;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r26,r26,56
	ctx.r26.s64 = ctx.r26.s64 + 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6C7F8;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C808;
	sub_831CE980(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C818;
	sub_831CE980(ctx, base);
loc_82C6C818:
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82c6c7a8
	if (cr6.lt) goto loc_82C6C7A8;
loc_82C6C824:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// ble cr6,0x82c6c8b4
	if (!cr6.gt) goto loc_82C6C8B4;
	// addi r30,r28,-56
	ctx.r30.s64 = ctx.r28.s64 + -56;
loc_82C6C830:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82C6C840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c89c
	if (!cr6.eq) goto loc_82C6C89C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C6C85C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6c8b0
	if (!cr6.eq) goto loc_82C6C8B0;
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6C87C;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C88C;
	sub_831CE980(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C89C;
	sub_831CE980(ctx, base);
loc_82C6C89C:
	// addi r11,r28,-56
	ctx.r11.s64 = ctx.r28.s64 + -56;
	// addi r30,r30,-56
	ctx.r30.s64 = ctx.r30.s64 + -56;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c6c830
	if (cr6.lt) goto loc_82C6C830;
loc_82C6C8B0:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
loc_82C6C8B4:
	// bne cr6,0x82c6c940
	if (!cr6.eq) goto loc_82C6C940;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x82c6ca04
	if (cr6.eq) goto loc_82C6CA04;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c6c8f8
	if (cr6.eq) goto loc_82C6C8F8;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C8D8;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C8E8;
	sub_831CE980(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C8F8;
	sub_831CE980(ctx, base);
loc_82C6C8F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// addi r26,r26,56
	ctx.r26.s64 = ctx.r26.s64 + 56;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6C91C;
	sub_831CE980(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C92C;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C93C;
	sub_831CE980(ctx, base);
	// b 0x82c6c7a0
	goto loc_82C6C7A0;
loc_82C6C940:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bne cr6,0x82c6c9c4
	if (!cr6.eq) goto loc_82C6C9C4;
	// addi r11,r28,-56
	ctx.r11.s64 = ctx.r28.s64 + -56;
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82c6c98c
	if (cr6.eq) goto loc_82C6C98C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C96C;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C97C;
	sub_831CE980(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C98C;
	sub_831CE980(ctx, base);
loc_82C6C98C:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r26,r26,-56
	ctx.r26.s64 = ctx.r26.s64 + -56;
	// bl 0x831ce980
	ctx.lr = 0x82C6C9A0;
	sub_831CE980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C9B0;
	sub_831CE980(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C9C0;
	sub_831CE980(ctx, base);
	// b 0x82c6c7a0
	goto loc_82C6C7A0;
loc_82C6C9C4:
	// addi r30,r28,-56
	ctx.r30.s64 = ctx.r28.s64 + -56;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C9DC;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C9EC;
	sub_831CE980(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6C9FC;
	sub_831CE980(ctx, base);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// b 0x82c6c7a0
	goto loc_82C6C7A0;
loc_82C6CA04:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6CA18"))) PPC_WEAK_FUNC(sub_82C6CA18);
PPC_FUNC_IMPL(__imp__sub_82C6CA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C6CA20;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,56
	ctx.r28.s64 = 56;
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r29,r28
	ctx.r11.s32 = PPCDivide(ctx.r29.s32, ctx.r28.s32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c6ca9c
	if (!cr6.gt) goto loc_82C6CA9C;
	// addi r31,r4,-56
	ctx.r31.s64 = ctx.r4.s64 + -56;
loc_82C6CA44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6CA54;
	sub_831CE980(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C6CA64;
	sub_831CE980(ctx, base);
	// addi r11,r29,-56
	ctx.r11.s64 = ctx.r29.s64 + -56;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r11,r28
	ctx.r5.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6b838
	ctx.lr = 0x82C6CA80;
	sub_82C6B838(ctx, base);
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// divw r10,r11,r28
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82c6ca44
	if (cr6.gt) goto loc_82C6CA44;
loc_82C6CA9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6CAA4"))) PPC_WEAK_FUNC(sub_82C6CAA4);
PPC_FUNC_IMPL(__imp__sub_82C6CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6CAA8"))) PPC_WEAK_FUNC(sub_82C6CAA8);
PPC_FUNC_IMPL(__imp__sub_82C6CAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C6CAB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,56
	ctx.r25.s64 = 56;
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
	// ble cr6,0x82c6cb64
	if (!cr6.gt) goto loc_82C6CB64;
loc_82C6CAD8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82c6cb88
	if (!cr6.gt) goto loc_82C6CB88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c6c6b0
	ctx.lr = 0x82C6CAF4;
	sub_82C6C6B0(ctx, base);
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
	// bge cr6,0x82c6cb44
	if (!cr6.lt) goto loc_82C6CB44;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6caa8
	ctx.lr = 0x82C6CB3C;
	sub_82C6CAA8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82c6cb54
	goto loc_82C6CB54;
loc_82C6CB44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c6caa8
	ctx.lr = 0x82C6CB50;
	sub_82C6CAA8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82C6CB54:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82c6cad8
	if (cr6.gt) goto loc_82C6CAD8;
loc_82C6CB64:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c6cb80
	if (!cr6.gt) goto loc_82C6CB80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6c3e8
	ctx.lr = 0x82C6CB80;
	sub_82C6C3E8(ctx, base);
loc_82C6CB80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C6CB88:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82c6cb64
	if (!cr6.gt) goto loc_82C6CB64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c6cbb0
	if (!cr6.gt) goto loc_82C6CBB0;
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
	// bl 0x82c6c2e0
	ctx.lr = 0x82C6CBB0;
	sub_82C6C2E0(ctx, base);
loc_82C6CBB0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6ca18
	ctx.lr = 0x82C6CBC0;
	sub_82C6CA18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6CBC8"))) PPC_WEAK_FUNC(sub_82C6CBC8);
PPC_FUNC_IMPL(__imp__sub_82C6CBC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6CBE4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r30,r11,8920
	ctx.r30.s64 = ctx.r11.s64 + 8920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6CC04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6cc84
	if (cr6.eq) goto loc_82C6CC84;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c6cc24
	if (!cr6.eq) goto loc_82C6CC24;
	// ori r4,r4,570
	ctx.r4.u64 = ctx.r4.u64 | 570;
	// b 0x82c6cc38
	goto loc_82C6CC38;
loc_82C6CC24:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c6cc34
	if (!cr6.eq) goto loc_82C6CC34;
	// ori r4,r4,653
	ctx.r4.u64 = ctx.r4.u64 | 653;
	// b 0x82c6cc38
	goto loc_82C6CC38;
loc_82C6CC34:
	// ori r4,r4,554
	ctx.r4.u64 = ctx.r4.u64 | 554;
loc_82C6CC38:
	// bl 0x82d303d0
	ctx.lr = 0x82C6CC3C;
	sub_82D303D0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c6cc80
	if (cr6.eq) goto loc_82C6CC80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6CC50;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6cc60
	if (!cr6.eq) goto loc_82C6CC60;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C6CC60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6CC6C;
	sub_837B0C10(ctx, base);
	// lis r5,508
	ctx.r5.s64 = 33292288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,42
	ctx.r5.u64 = ctx.r5.u64 | 42;
	// bl 0x82a69a28
	ctx.lr = 0x82C6CC80;
	sub_82A69A28(ctx, base);
loc_82C6CC80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C6CC84:
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

__attribute__((alias("__imp__sub_82C6CC9C"))) PPC_WEAK_FUNC(sub_82C6CC9C);
PPC_FUNC_IMPL(__imp__sub_82C6CC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6CCA0"))) PPC_WEAK_FUNC(sub_82C6CCA0);
PPC_FUNC_IMPL(__imp__sub_82C6CCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6CCA8;
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
	ctx.lr = 0x82C6CCC0;
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
	ctx.lr = 0x82C6CCD8;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,9768
	ctx.r9.s64 = ctx.r11.s64 + 9768;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stb r30,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r30.u8);
	// stb r30,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r30.u8);
	// stb r30,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r30.u8);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x837e7a18
	ctx.lr = 0x82C6CD74;
	sub_837E7A18(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6b418
	ctx.lr = 0x82C6CD84;
	sub_82C6B418(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c6cdd4
	if (cr6.eq) goto loc_82C6CDD4;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r3,r9,8940
	ctx.r3.s64 = ctx.r9.s64 + 8940;
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r4,0
	ctx.r4.s64 = 0;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x82bd6558
	ctx.lr = 0x82C6CDBC;
	sub_82BD6558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c6cdd8
	if (cr6.eq) goto loc_82C6CDD8;
	// bl 0x83103100
	ctx.lr = 0x82C6CDD4;
	sub_83103100(ctx, base);
loc_82C6CDD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C6CDD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6CDE0"))) PPC_WEAK_FUNC(sub_82C6CDE0);
PPC_FUNC_IMPL(__imp__sub_82C6CDE0) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// addi r8,r11,9768
	ctx.r8.s64 = ctx.r11.s64 + 9768;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// lwz r3,-23792(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23792);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ce2c
	if (cr6.eq) goto loc_82C6CE2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6CE2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6CE2C:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ce3c
	if (cr6.eq) goto loc_82C6CE3C;
	// bl 0x82416268
	ctx.lr = 0x82C6CE3C;
	sub_82416268(ctx, base);
loc_82C6CE3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82C6CE54;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82C6CE68"))) PPC_WEAK_FUNC(sub_82C6CE68);
PPC_FUNC_IMPL(__imp__sub_82C6CE68) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82c6ce90
	if (cr6.eq) goto loc_82C6CE90;
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
loc_82C6CE90:
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10056
	ctx.r9.s64 = ctx.r11.s64 + 10056;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r7,56
	ctx.r7.s64 = 56;
	// divw r5,r8,r7
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r7.s32);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82c6caa8
	ctx.lr = 0x82C6CEB8;
	sub_82C6CAA8(ctx, base);
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

__attribute__((alias("__imp__sub_82C6CECC"))) PPC_WEAK_FUNC(sub_82C6CECC);
PPC_FUNC_IMPL(__imp__sub_82C6CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6CED0"))) PPC_WEAK_FUNC(sub_82C6CED0);
PPC_FUNC_IMPL(__imp__sub_82C6CED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c6cf00
	if (cr6.lt) goto loc_82C6CF00;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c6cf04
	goto loc_82C6CF04;
loc_82C6CF00:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C6CF04:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C6CF20;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6cf40
	if (cr6.eq) goto loc_82C6CF40;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c6cca0
	ctx.lr = 0x82C6CF38;
	sub_82C6CCA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6cf44
	if (!cr6.eq) goto loc_82C6CF44;
loc_82C6CF40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C6CF44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6CF5C"))) PPC_WEAK_FUNC(sub_82C6CF5C);
PPC_FUNC_IMPL(__imp__sub_82C6CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6CF60"))) PPC_WEAK_FUNC(sub_82C6CF60);
PPC_FUNC_IMPL(__imp__sub_82C6CF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c6cf90
	if (cr6.lt) goto loc_82C6CF90;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c6cf94
	goto loc_82C6CF94;
loc_82C6CF90:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C6CF94:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C6CFB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6cfd0
	if (cr6.eq) goto loc_82C6CFD0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c6cca0
	ctx.lr = 0x82C6CFC8;
	sub_82C6CCA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6cfd4
	if (!cr6.eq) goto loc_82C6CFD4;
loc_82C6CFD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C6CFD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6CFEC"))) PPC_WEAK_FUNC(sub_82C6CFEC);
PPC_FUNC_IMPL(__imp__sub_82C6CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6CFF0"))) PPC_WEAK_FUNC(sub_82C6CFF0);
PPC_FUNC_IMPL(__imp__sub_82C6CFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c6d020
	if (cr6.lt) goto loc_82C6D020;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c6d024
	goto loc_82C6D024;
loc_82C6D020:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C6D024:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C6D040;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6d060
	if (cr6.eq) goto loc_82C6D060;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c6cca0
	ctx.lr = 0x82C6D058;
	sub_82C6CCA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6d064
	if (!cr6.eq) goto loc_82C6D064;
loc_82C6D060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C6D064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6D07C"))) PPC_WEAK_FUNC(sub_82C6D07C);
PPC_FUNC_IMPL(__imp__sub_82C6D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6D080"))) PPC_WEAK_FUNC(sub_82C6D080);
PPC_FUNC_IMPL(__imp__sub_82C6D080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c6d0b0
	if (cr6.lt) goto loc_82C6D0B0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c6d0b4
	goto loc_82C6D0B4;
loc_82C6D0B0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C6D0B4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C6D0D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6d0f0
	if (cr6.eq) goto loc_82C6D0F0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c6cca0
	ctx.lr = 0x82C6D0E8;
	sub_82C6CCA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6d0f4
	if (!cr6.eq) goto loc_82C6D0F4;
loc_82C6D0F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C6D0F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6D10C"))) PPC_WEAK_FUNC(sub_82C6D10C);
PPC_FUNC_IMPL(__imp__sub_82C6D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6D110"))) PPC_WEAK_FUNC(sub_82C6D110);
PPC_FUNC_IMPL(__imp__sub_82C6D110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82c6cde0
	ctx.lr = 0x82C6D130;
	sub_82C6CDE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d148
	if (cr6.eq) goto loc_82C6D148;
	// bl 0x82416268
	ctx.lr = 0x82C6D144;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C6D148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6D160"))) PPC_WEAK_FUNC(sub_82C6D160);
PPC_FUNC_IMPL(__imp__sub_82C6D160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6D168;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c6d238
	if (!cr6.eq) goto loc_82C6D238;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c6d238
	if (!cr6.eq) goto loc_82C6D238;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6d238
	if (cr6.eq) goto loc_82C6D238;
	// lwz r29,120(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82c6d1b8
	if (cr6.lt) goto loc_82C6D1B8;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82c6d1bc
	if (cr6.lt) goto loc_82C6D1BC;
loc_82C6D1B8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82C6D1BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d238
	if (cr6.eq) goto loc_82C6D238;
	// lwz r30,124(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82c6d1e0
	if (cr6.lt) goto loc_82C6D1E0;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82c6d1e4
	if (cr6.lt) goto loc_82C6D1E4;
loc_82C6D1E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82C6D1E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d238
	if (cr6.eq) goto loc_82C6D238;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82c6d208
	if (!cr6.eq) goto loc_82C6D208;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82c6d234
	if (cr6.eq) goto loc_82C6D234;
loc_82C6D208:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6ce68
	ctx.lr = 0x82C6D218;
	sub_82C6CE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d238
	if (cr6.eq) goto loc_82C6D238;
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// bl 0x82c6c050
	ctx.lr = 0x82C6D234;
	sub_82C6C050(ctx, base);
loc_82C6D234:
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
loc_82C6D238:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6D244"))) PPC_WEAK_FUNC(sub_82C6D244);
PPC_FUNC_IMPL(__imp__sub_82C6D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6D248"))) PPC_WEAK_FUNC(sub_82C6D248);
PPC_FUNC_IMPL(__imp__sub_82C6D248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C6D250;
	__savegprlr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r26,r3,96
	ctx.r26.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,100(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// lwz r5,96(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x837e7a18
	ctx.lr = 0x82C6D270;
	sub_837E7A18(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C6D274;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6d28c
	if (!cr6.eq) goto loc_82C6D28C;
loc_82C6D280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C6D28C:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6D294;
	sub_82921C20(ctx, base);
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// li r23,56
	ctx.r23.s64 = 56;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c6d510
	if (cr6.gt) goto loc_82C6D510;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c6d2bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6D2BC;
	// bdzf 4*cr6+eq,0x82c6d37c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6D37C;
	// bne cr6,0x82c6d448
	if (!cr6.eq) goto loc_82C6D448;
loc_82C6D2BC:
	// bl 0x82deaba8
	ctx.lr = 0x82C6D2C0;
	sub_82DEABA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d9e6b8
	ctx.lr = 0x82C6D2C8;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6d280
	if (!cr6.eq) goto loc_82C6D280;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r25,r8,r23
	ctx.r25.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x82c6d510
	if (cr0.eq) goto loc_82C6D510;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,84
	ctx.r28.s64 = 84;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82C6D304:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82deacd8
	ctx.lr = 0x82C6D358;
	sub_82DEACD8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c6ab40
	ctx.lr = 0x82C6D364;
	sub_82C6AB40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82c6d304
	if (cr6.lt) goto loc_82C6D304;
	// b 0x82c6d510
	goto loc_82C6D510;
loc_82C6D37C:
	// bl 0x82deabb0
	ctx.lr = 0x82C6D380;
	sub_82DEABB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d9e6b8
	ctx.lr = 0x82C6D388;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6d280
	if (!cr6.eq) goto loc_82C6D280;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x83ac2480
	ctx.lr = 0x82C6D39C;
	sub_83AC2480(ctx, base);
	// stb r31,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r31.u8);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// divw. r25,r8,r23
	ctx.r25.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x82c6d510
	if (cr0.eq) goto loc_82C6D510;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,84
	ctx.r28.s64 = 84;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82C6D3D0:
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stb r31,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r31.u8);
	// stb r31,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r31.u8);
	// stb r31,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r31.u8);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x82deacd8
	ctx.lr = 0x82C6D424;
	sub_82DEACD8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c6ab40
	ctx.lr = 0x82C6D430;
	sub_82C6AB40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82c6d3d0
	if (cr6.lt) goto loc_82C6D3D0;
	// b 0x82c6d510
	goto loc_82C6D510;
loc_82C6D448:
	// bl 0x82deabb8
	ctx.lr = 0x82C6D44C;
	sub_82DEABB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d9e6b8
	ctx.lr = 0x82C6D454;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6d280
	if (!cr6.eq) goto loc_82C6D280;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x83ac2480
	ctx.lr = 0x82C6D468;
	sub_83AC2480(ctx, base);
	// stb r31,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r31.u8);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r25,r8,r23
	ctx.r25.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x82c6d510
	if (cr0.eq) goto loc_82C6D510;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,84
	ctx.r28.s64 = 84;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82C6D49C:
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// stb r31,273(r1)
	PPC_STORE_U8(ctx.r1.u32 + 273, ctx.r31.u8);
	// stb r31,274(r1)
	PPC_STORE_U8(ctx.r1.u32 + 274, ctx.r31.u8);
	// stb r31,275(r1)
	PPC_STORE_U8(ctx.r1.u32 + 275, ctx.r31.u8);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// bl 0x82deacd8
	ctx.lr = 0x82C6D4F0;
	sub_82DEACD8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c6ab40
	ctx.lr = 0x82C6D4FC;
	sub_82C6AB40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82c6d49c
	if (cr6.lt) goto loc_82C6D49C;
loc_82C6D510:
	// lwz r11,184(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c6d544
	if (!cr6.eq) goto loc_82C6D544;
	// lwz r11,188(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 188);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r4,100(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r10,10056
	ctx.r9.s64 = ctx.r10.s64 + 10056;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r7,r23
	ctx.r5.s32 = PPCDivide(ctx.r7.s32, ctx.r23.s32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82c6caa8
	ctx.lr = 0x82C6D544;
	sub_82C6CAA8(ctx, base);
loc_82C6D544:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6D550"))) PPC_WEAK_FUNC(sub_82C6D550);
PPC_FUNC_IMPL(__imp__sub_82C6D550) {
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
	ctx.lr = 0x82C6D558;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82deb398
	ctx.lr = 0x82C6D568;
	sub_82DEB398(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6d750
	if (!cr6.eq) goto loc_82C6D750;
	// bl 0x82d86078
	ctx.lr = 0x82C6D578;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6d750
	if (cr6.eq) goto loc_82C6D750;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6D588;
	sub_82921C20(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82deab90
	ctx.lr = 0x82C6D5A0;
	sub_82DEAB90(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// beq cr6,0x82c6d5c8
	if (cr6.eq) goto loc_82C6D5C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6D5C4;
	sub_82D1C1A8(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
loc_82C6D5C8:
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// bgt cr6,0x82c6d750
	if (cr6.gt) goto loc_82C6D750;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c6d638
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6D638;
	// bdzf 4*cr6+eq,0x82c6d6b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6D6B0;
	// bdzf 4*cr6+eq,0x82c6d6b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6D6B0;
	// bne cr6,0x82c6d6e8
	if (!cr6.eq) goto loc_82C6D6E8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82c6d608
	if (!cr0.eq) goto loc_82C6D608;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82c6d620
	goto loc_82C6D620;
loc_82C6D608:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_82C6D620:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C6D630;
	sub_82D17DA0(ctx, base);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// b 0x82c6d6f0
	goto loc_82C6D6F0;
loc_82C6D638:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82c6d658
	if (!cr0.eq) goto loc_82C6D658;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82c6d694
	goto loc_82C6D694;
loc_82C6D658:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x82c6d66c
	if (cr6.lt) goto loc_82C6D66C;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// b 0x82c6d694
	goto loc_82C6D694;
loc_82C6D66C:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf. r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82c6d690
	if (!cr0.eq) goto loc_82C6D690;
	// li r10,100
	ctx.r10.s64 = 100;
loc_82C6D690:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82C6D694:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C6D6A4;
	sub_82D17DA0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// b 0x82c6d6f0
	goto loc_82C6D6F0;
loc_82C6D6B0:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c6ce68
	ctx.lr = 0x82C6D6D0;
	sub_82C6CE68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c6d6f0
	if (!cr6.eq) goto loc_82C6D6F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6D6E8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82C6D6F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82deab78
	ctx.lr = 0x82C6D6FC;
	sub_82DEAB78(ctx, base);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r9,r11,8892
	ctx.r9.s64 = ctx.r11.s64 + 8892;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-31757
	ctx.r7.s64 = -2081226752;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r3,-23792(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -23792);
	// lwzx r11,r5,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83102fe0
	ctx.lr = 0x82C6D738;
	sub_83102FE0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6D750:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6D75C"))) PPC_WEAK_FUNC(sub_82C6D75C);
PPC_FUNC_IMPL(__imp__sub_82C6D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6D760"))) PPC_WEAK_FUNC(sub_82C6D760);
PPC_FUNC_IMPL(__imp__sub_82C6D760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6D768;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82c6d794
	if (cr0.eq) goto loc_82C6D794;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6D794:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c6d7b4
	if (!cr6.eq) goto loc_82C6D7B4;
loc_82C6D7A0:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6D7B4:
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c6d7a0
	if (cr6.eq) goto loc_82C6D7A0;
	// bl 0x82deb398
	ctx.lr = 0x82C6D7C4;
	sub_82DEB398(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,4
	ctx.r29.s64 = 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d7dc
	if (cr6.eq) goto loc_82C6D7DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c6d878
	goto loc_82C6D878;
loc_82C6D7DC:
	// bl 0x82d86078
	ctx.lr = 0x82C6D7E0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6d7f0
	if (!cr6.eq) goto loc_82C6D7F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c6d878
	goto loc_82C6D878;
loc_82C6D7F0:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6D7F8;
	sub_82921C20(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82deab90
	ctx.lr = 0x82C6D810;
	sub_82DEAB90(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82deab78
	ctx.lr = 0x82C6D830;
	sub_82DEAB78(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r7,r9,8892
	ctx.r7.s64 = ctx.r9.s64 + 8892;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-31757
	ctx.r5.s64 = -2081226752;
	// addi r6,r8,21716
	ctx.r6.s64 = ctx.r8.s64 + 21716;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lwz r3,-23792(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23792);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x83102fe0
	ctx.lr = 0x82C6D86C;
	sub_83102FE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82C6D878:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6d888
	if (!cr6.eq) goto loc_82C6D888;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
loc_82C6D888:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6D894"))) PPC_WEAK_FUNC(sub_82C6D894);
PPC_FUNC_IMPL(__imp__sub_82C6D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6D898"))) PPC_WEAK_FUNC(sub_82C6D898);
PPC_FUNC_IMPL(__imp__sub_82C6D898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6D8A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6D8AC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6d9e8
	if (cr6.eq) goto loc_82C6D9E8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6D8BC;
	sub_82921C20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6d248
	ctx.lr = 0x82C6D8C8;
	sub_82C6D248(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6d9f4
	if (!cr6.eq) goto loc_82C6D9F4;
	// bl 0x82d19a78
	ctx.lr = 0x82C6D8DC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6D8E8;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6D8F0;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82C6D8F4;
	sub_83574C00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82C6D8FC;
	sub_82D44FA8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r29,507
	ctx.r29.s64 = 33226752;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r29,64
	ctx.r29.u64 = ctx.r29.u64 | 64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c6d984
	if (cr6.gt) goto loc_82C6D984;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c6d928
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6D928;
	// bdzf 4*cr6+eq,0x82c6d944
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6D944;
	// bne cr6,0x82c6d960
	if (!cr6.eq) goto loc_82C6D960;
loc_82C6D928:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82deaba8
	ctx.lr = 0x82C6D930;
	sub_82DEABA8(ctx, base);
	// bl 0x82d9e6b8
	ctx.lr = 0x82C6D934;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d984
	if (cr6.eq) goto loc_82C6D984;
	// b 0x82c6d980
	goto loc_82C6D980;
loc_82C6D944:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82deabb0
	ctx.lr = 0x82C6D94C;
	sub_82DEABB0(ctx, base);
	// bl 0x82d9e6b8
	ctx.lr = 0x82C6D950;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d984
	if (cr6.eq) goto loc_82C6D984;
	// b 0x82c6d980
	goto loc_82C6D980;
loc_82C6D960:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82deabb8
	ctx.lr = 0x82C6D968;
	sub_82DEABB8(ctx, base);
	// bl 0x82d9e6b8
	ctx.lr = 0x82C6D96C;
	sub_82D9E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d984
	if (cr6.eq) goto loc_82C6D984;
	// lis r29,550
	ctx.r29.s64 = 36044800;
	// ori r29,r29,541
	ctx.r29.u64 = ctx.r29.u64 | 541;
loc_82C6D980:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C6D984:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c6d9e8
	if (!cr6.eq) goto loc_82C6D9E8;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c6d9e8
	if (cr6.eq) goto loc_82C6D9E8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82C6D9B4;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6d9e8
	if (cr6.eq) goto loc_82C6D9E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19948
	ctx.lr = 0x82C6D9C8;
	sub_82D19948(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82C6D9D4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C6D9E0;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82C6D9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6D9F4:
	// bl 0x82c6d760
	ctx.lr = 0x82C6D9F8;
	sub_82C6D760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6d9e8
	if (cr6.eq) goto loc_82C6D9E8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82C6DA2C;
	sub_82D20F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6c100
	ctx.lr = 0x82C6DA34;
	sub_82C6C100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6c050
	ctx.lr = 0x82C6DA3C;
	sub_82C6C050(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6DA48"))) PPC_WEAK_FUNC(sub_82C6DA48);
PPC_FUNC_IMPL(__imp__sub_82C6DA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C6DA50;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r10.u8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c6da9c
	if (cr6.gt) goto loc_82C6DA9C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c6da90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6DA90;
	// bdzf 4*cr6+eq,0x82c6da88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6DA88;
	// bne cr6,0x82c6da90
	if (!cr6.eq) goto loc_82C6DA90;
	// li r4,228
	ctx.r4.s64 = 228;
	// b 0x82c6da94
	goto loc_82C6DA94;
loc_82C6DA88:
	// li r4,227
	ctx.r4.s64 = 227;
	// b 0x82c6da94
	goto loc_82C6DA94;
loc_82C6DA90:
	// li r4,229
	ctx.r4.s64 = 229;
loc_82C6DA94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82C6DA9C;
	sub_82D1A998(ctx, base);
loc_82C6DA9C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6DAAC;
	sub_82D19788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c6d898
	ctx.lr = 0x82C6DAB4;
	sub_82C6D898(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6db50
	if (!cr6.eq) goto loc_82C6DB50;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r27,56
	ctx.r27.s64 = 56;
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r30,r29,96
	ctx.r30.s64 = ctx.r29.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c6db50
	if (cr0.eq) goto loc_82C6DB50;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r28,r11,8370
	ctx.r28.s64 = ctx.r11.s64 + 8370;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r28,610
	ctx.r3.s64 = ctx.r28.s64 + 610;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82C6DAF8;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6db50
	if (cr6.eq) goto loc_82C6DB50;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6DB10;
	sub_837B0C10(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r4,r4,538
	ctx.r4.u64 = ctx.r4.u64 | 538;
	// divw r5,r9,r27
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// bl 0x82d042a8
	ctx.lr = 0x82C6DB30;
	sub_82D042A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82C6DB3C;
	sub_82D2AAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82C6DB48;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6DB50;
	sub_8387E8E0(ctx, base);
loc_82C6DB50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6DB58"))) PPC_WEAK_FUNC(sub_82C6DB58);
PPC_FUNC_IMPL(__imp__sub_82C6DB58) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c6dbdc
	if (!cr6.eq) goto loc_82C6DBDC;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82c6dbdc
	if (!cr6.gt) goto loc_82C6DBDC;
	// bl 0x8308e078
	ctx.lr = 0x82C6DB88;
	sub_8308E078(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82C6DB94;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6dbdc
	if (cr6.eq) goto loc_82C6DBDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6DBB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c6dbdc
	if (cr6.eq) goto loc_82C6DBDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6d550
	ctx.lr = 0x82C6DBC8;
	sub_82C6D550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6dbdc
	if (!cr6.eq) goto loc_82C6DBDC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82C6DBDC:
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

__attribute__((alias("__imp__sub_82C6DBF0"))) PPC_WEAK_FUNC(sub_82C6DBF0);
PPC_FUNC_IMPL(__imp__sub_82C6DBF0) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c6dc74
	if (!cr6.eq) goto loc_82C6DC74;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82c6dc74
	if (!cr6.gt) goto loc_82C6DC74;
	// bl 0x8308e078
	ctx.lr = 0x82C6DC20;
	sub_8308E078(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82C6DC2C;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6dc74
	if (cr6.eq) goto loc_82C6DC74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6DC48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c6dc74
	if (cr6.eq) goto loc_82C6DC74;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6d550
	ctx.lr = 0x82C6DC60;
	sub_82C6D550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6dc74
	if (!cr6.eq) goto loc_82C6DC74;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82C6DC74:
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

__attribute__((alias("__imp__sub_82C6DC88"))) PPC_WEAK_FUNC(sub_82C6DC88);
PPC_FUNC_IMPL(__imp__sub_82C6DC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C6DC90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c6dd60
	if (!cr6.eq) goto loc_82C6DD60;
	// bl 0x82d86078
	ctx.lr = 0x82C6DCA8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6dd60
	if (cr6.eq) goto loc_82C6DD60;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6DCB8;
	sub_82921C20(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r29,56
	ctx.r29.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// divw r27,r9,r29
	ctx.r27.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6DCDC;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// bge cr6,0x82c6dd1c
	if (!cr6.lt) goto loc_82C6DD1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6DCEC;
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
	// bgt cr6,0x82c6dd10
	if (cr6.gt) goto loc_82C6DD10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6DD10;
	sub_831CC188(ctx, base);
loc_82C6DD10:
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,632(r28)
	PPC_STORE_U32(ctx.r28.u32 + 632, ctx.r9.u32);
loc_82C6DD1C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6d550
	ctx.lr = 0x82C6DD28;
	sub_82C6D550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6dd3c
	if (!cr6.eq) goto loc_82C6DD3C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
loc_82C6DD3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6DD4C;
	sub_82D19788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82C6DD58;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26b18
	ctx.lr = 0x82C6DD60;
	sub_82D26B18(ctx, base);
loc_82C6DD60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6DD68"))) PPC_WEAK_FUNC(sub_82C6DD68);
PPC_FUNC_IMPL(__imp__sub_82C6DD68) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82c6de78
	if (cr6.gt) goto loc_82C6DE78;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c6ddbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6DDBC;
	// bdzf 4*cr6+eq,0x82c6ddc8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6DDC8;
	// bdzf 4*cr6+eq,0x82c6de18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6DE18;
	// bdzf 4*cr6+eq,0x82c6de78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6DE78;
	// bne cr6,0x82c6dda4
	if (!cr6.eq) goto loc_82C6DDA4;
loc_82C6DDA4:
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
loc_82C6DDBC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c6de9c
	goto loc_82C6DE9C;
loc_82C6DDC8:
	// bl 0x82deb398
	ctx.lr = 0x82C6DDCC;
	sub_82DEB398(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6dda4
	if (!cr6.eq) goto loc_82C6DDA4;
	// bl 0x82deb3b8
	ctx.lr = 0x82C6DDDC;
	sub_82DEB3B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6de0c
	if (cr6.eq) goto loc_82C6DE0C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x82debae8
	ctx.lr = 0x82C6DDF4;
	sub_82DEBAE8(ctx, base);
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
loc_82C6DE0C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c6de9c
	goto loc_82C6DE9C;
loc_82C6DE18:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82e74328
	ctx.lr = 0x82C6DE2C;
	sub_82E74328(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74260
	ctx.lr = 0x82C6DE34;
	sub_82E74260(ctx, base);
	// lbz r10,173(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c6de58
	if (!cr6.eq) goto loc_82C6DE58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6d898
	ctx.lr = 0x82C6DE4C;
	sub_82C6D898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6dda4
	if (cr6.eq) goto loc_82C6DDA4;
loc_82C6DE58:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stb r11,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r11.u8);
	// b 0x82c6de94
	goto loc_82C6DE94;
loc_82C6DE78:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
loc_82C6DE94:
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_82C6DE9C:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C6DEB4"))) PPC_WEAK_FUNC(sub_82C6DEB4);
PPC_FUNC_IMPL(__imp__sub_82C6DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6DEB8"))) PPC_WEAK_FUNC(sub_82C6DEB8);
PPC_FUNC_IMPL(__imp__sub_82C6DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C6DEC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c6df40
	if (cr6.lt) goto loc_82C6DF40;
	// bne cr6,0x82c6dfa0
	if (!cr6.eq) goto loc_82C6DFA0;
	// bl 0x82c6dd68
	ctx.lr = 0x82C6DEE0;
	sub_82C6DD68(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c6dfa0
	if (!cr6.eq) goto loc_82C6DFA0;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6df28
	if (cr6.eq) goto loc_82C6DF28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6DF00;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6DF0C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6DF14;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82C6DF18;
	sub_83574C00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82C6DF20;
	sub_82D44FA8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82C6DF28:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C6DF40:
	// bl 0x831021a0
	ctx.lr = 0x82C6DF44;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x82C6DF4C;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6dfac
	if (cr6.eq) goto loc_82C6DFAC;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,-23792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23792);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6dfac
	if (!cr6.eq) goto loc_82C6DFAC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,8952
	ctx.r3.s64 = ctx.r11.s64 + 8952;
	// bl 0x82c6b3a0
	ctx.lr = 0x82C6DF74;
	sub_82C6B3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6dfac
	if (cr6.eq) goto loc_82C6DFAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C6DF88;
	sub_83103100(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6d550
	ctx.lr = 0x82C6DF94;
	sub_82C6D550(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r11.u8);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_82C6DFA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C6DFAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6DFB8"))) PPC_WEAK_FUNC(sub_82C6DFB8);
PPC_FUNC_IMPL(__imp__sub_82C6DFB8) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c6e1e8
	if (cr6.lt) goto loc_82C6E1E8;
	// beq cr6,0x82c6e1b8
	if (cr6.eq) goto loc_82C6E1B8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82c6e218
	if (!cr6.lt) goto loc_82C6E218;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c6e1b0
	if (cr6.gt) goto loc_82C6E1B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c6e00c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6E00C;
	// bdzf 4*cr6+eq,0x82c6e0b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C6E0B0;
	// bne cr6,0x82c6e130
	if (!cr6.eq) goto loc_82C6E130;
loc_82C6E00C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E01C;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,602
	ctx.r5.u64 = ctx.r5.u64 | 602;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E03C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E04C;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,592
	ctx.r5.u64 = ctx.r5.u64 | 592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6E06C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82c6e1b0
	if (!cr6.eq) goto loc_82C6E1B0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E088;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,11
	ctx.r4.s64 = 11;
	// ori r5,r5,657
	ctx.r5.u64 = ctx.r5.u64 | 657;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E0A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82c6e218
	goto loc_82C6E218;
loc_82C6E0B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E0C0;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,602
	ctx.r5.u64 = ctx.r5.u64 | 602;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E0E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E0F0;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,605
	ctx.r5.u64 = ctx.r5.u64 | 605;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6E110;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E120;
	sub_82D19788(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,11
	ctx.r4.s64 = 11;
	// ori r5,r5,577
	ctx.r5.u64 = ctx.r5.u64 | 577;
	// b 0x82c6e19c
	goto loc_82C6E19C;
loc_82C6E130:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,168
	ctx.r5.u64 = ctx.r5.u64 | 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E160;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,602
	ctx.r5.u64 = ctx.r5.u64 | 602;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6E180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E190;
	sub_82D19788(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,656
	ctx.r5.u64 = ctx.r5.u64 | 656;
loc_82C6E19C:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C6E1B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6E1B0:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82c6e218
	goto loc_82C6E218;
loc_82C6E1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6deb8
	ctx.lr = 0x82C6E1C0;
	sub_82C6DEB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6e1fc
	if (cr6.eq) goto loc_82C6E1FC;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6e1e0
	if (cr6.eq) goto loc_82C6E1E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c6e21c
	goto loc_82C6E21C;
loc_82C6E1E0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c6e214
	goto loc_82C6E214;
loc_82C6E1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c6cbc8
	ctx.lr = 0x82C6E1F0;
	sub_82C6CBC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6e204
	if (!cr6.eq) goto loc_82C6E204;
loc_82C6E1FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c6e21c
	goto loc_82C6E21C;
loc_82C6E204:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19730
	ctx.lr = 0x82C6E210;
	sub_82D19730(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C6E214:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_82C6E218:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C6E21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6E234"))) PPC_WEAK_FUNC(sub_82C6E234);
PPC_FUNC_IMPL(__imp__sub_82C6E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6E238"))) PPC_WEAK_FUNC(sub_82C6E238);
PPC_FUNC_IMPL(__imp__sub_82C6E238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C6E240;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6E24C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6e468
	if (cr6.eq) goto loc_82C6E468;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6E260;
	sub_82921C20(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C6E270;
	sub_82DAB6D0(ctx, base);
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82c6e2e8
	if (cr6.eq) goto loc_82C6E2E8;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c6e2c4
	if (cr6.eq) goto loc_82C6E2C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c6dd68
	ctx.lr = 0x82C6E298;
	sub_82C6DD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6e2c4
	if (!cr6.eq) goto loc_82C6E2C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,140(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C6E2C4;
	sub_82D1EBF8(ctx, base);
loc_82C6E2C4:
	// lbz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6e33c
	if (cr6.eq) goto loc_82C6E33C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C6E2E0;
	sub_82D1EAC0(ctx, base);
	// stb r27,172(r29)
	PPC_STORE_U8(ctx.r29.u32 + 172, ctx.r27.u8);
	// b 0x82c6e33c
	goto loc_82C6E33C;
loc_82C6E2E8:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82deab90
	ctx.lr = 0x82C6E2FC;
	sub_82DEAB90(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82deab78
	ctx.lr = 0x82C6E310;
	sub_82DEAB78(ctx, base);
	// lwz r11,3496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3496);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82c6e334
	if (!cr6.eq) goto loc_82C6E334;
	// addi r11,r11,9020
	ctx.r11.s64 = ctx.r11.s64 + 9020;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// b 0x82c6e338
	goto loc_82C6E338;
loc_82C6E334:
	// addi r5,r11,9020
	ctx.r5.s64 = ctx.r11.s64 + 9020;
loc_82C6E338:
	// bl 0x82d20da8
	ctx.lr = 0x82C6E33C;
	sub_82D20DA8(ctx, base);
loc_82C6E33C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C6E344;
	sub_82D1C1A8(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r26,56
	ctx.r26.s64 = 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r29,96
	ctx.r30.s64 = ctx.r29.s64 + 96;
	// divw r11,r9,r26
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c6e438
	if (!cr6.lt) goto loc_82C6E438;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bgt cr6,0x82c6e380
	if (cr6.gt) goto loc_82C6E380;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6E380;
	sub_831CC188(ctx, base);
loc_82C6E380:
	// mulli r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 * 56;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82c6e3b4
	if (cr6.eq) goto loc_82C6E3B4;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82d961a0
	ctx.lr = 0x82C6E3A0;
	sub_82D961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6e3d4
	if (!cr6.eq) goto loc_82C6E3D4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x82c6e3d4
	goto loc_82C6E3D4;
loc_82C6E3B4:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82d961a0
	ctx.lr = 0x82C6E3BC;
	sub_82D961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_82C6E3D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c6e3f8
	if (cr6.gt) goto loc_82C6E3F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6E3F8;
	sub_831CC188(ctx, base);
loc_82C6E3F8:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c6e418
	if (cr6.eq) goto loc_82C6E418;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c6e418
	if (cr6.eq) goto loc_82C6E418;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6e428
	if (!cr6.eq) goto loc_82C6E428;
loc_82C6E418:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6e42c
	if (!cr6.eq) goto loc_82C6E42C;
loc_82C6E428:
	// li r5,2
	ctx.r5.s64 = 2;
loc_82C6E42C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E438;
	sub_82D19788(ctx, base);
loc_82C6E438:
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// ble cr6,0x82c6e460
	if (!cr6.gt) goto loc_82C6E460;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6E454;
	sub_82D19788(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C6E460:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
loc_82C6E468:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6E474"))) PPC_WEAK_FUNC(sub_82C6E474);
PPC_FUNC_IMPL(__imp__sub_82C6E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6E478"))) PPC_WEAK_FUNC(sub_82C6E478);
PPC_FUNC_IMPL(__imp__sub_82C6E478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C6E480;
	__savegprlr_21(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c6ecb0
	if (cr6.eq) goto loc_82C6ECB0;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r29,56
	ctx.r29.s64 = 56;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c6e4d0
	if (cr6.lt) goto loc_82C6E4D0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6E4C8;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C6E4D0:
	// bl 0x82d2aff8
	ctx.lr = 0x82C6E4D4;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6e4f0
	if (!cr6.eq) goto loc_82C6E4F0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6E4F0;
	sub_82D2AEC8(ctx, base);
loc_82C6E4F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82c6e514
	if (cr6.gt) goto loc_82C6E514;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C6E514;
	sub_831CC188(ctx, base);
loc_82C6E514:
	// mulli r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 * 56;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82C6E528;
	sub_831CE980(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d8b758
	ctx.lr = 0x82C6E538;
	sub_82D8B758(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d8b938
	ctx.lr = 0x82C6E544;
	sub_82D8B938(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r24,100
	ctx.r31.s64 = ctx.r24.s64 + 100;
	// addi r30,r11,9660
	ctx.r30.s64 = ctx.r11.s64 + 9660;
	// beq cr6,0x82c6e57c
	if (cr6.eq) goto loc_82C6E57C;
	// addi r4,r30,-512
	ctx.r4.s64 = ctx.r30.s64 + -512;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E568;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6E578;
	sub_82A69A28(ctx, base);
	// b 0x82c6e5a4
	goto loc_82C6E5A4;
loc_82C6E57C:
	// addi r4,r30,-1289
	ctx.r4.s64 = ctx.r30.s64 + -1289;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E584;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-496
	ctx.r4.s64 = ctx.r30.s64 + -496;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E594;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6E5A4;
	sub_82A69AD0(ctx, base);
loc_82C6E5A4:
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d8c0c8
	ctx.lr = 0x82C6E5B8;
	sub_82D8C0C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6e624
	if (cr6.eq) goto loc_82C6E624;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-480
	ctx.r4.s64 = ctx.r30.s64 + -480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E5E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-448
	ctx.r4.s64 = ctx.r30.s64 + -448;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6E604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// beq cr6,0x82c6e61c
	if (cr6.eq) goto loc_82C6E61C;
	// bl 0x82d39310
	ctx.lr = 0x82C6E618;
	sub_82D39310(ctx, base);
	// b 0x82c6e7d0
	goto loc_82C6E7D0;
loc_82C6E61C:
	// bl 0x82d39448
	ctx.lr = 0x82C6E620;
	sub_82D39448(ctx, base);
	// b 0x82c6e7d0
	goto loc_82C6E7D0;
loc_82C6E624:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-392
	ctx.r4.s64 = ctx.r30.s64 + -392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6E658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6e7d0
	if (cr6.eq) goto loc_82C6E7D0;
	// addi r4,r30,-1258
	ctx.r4.s64 = ctx.r30.s64 + -1258;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E670;
	sub_837B0C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,276(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,74
	cr6.compare<int32_t>(ctx.r11.s32, 74, xer);
	// bne cr6,0x82c6e6cc
	if (!cr6.eq) goto loc_82C6E6CC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c6e704
	if (cr6.eq) goto loc_82C6E704;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// clrlwi r29,r5,14
	ctx.r29.u64 = ctx.r5.u32 & 0x3FFFF;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c6e6a4
	if (!cr6.gt) goto loc_82C6E6A4;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_82C6E6A4:
	// bl 0x831156e8
	ctx.lr = 0x82C6E6A8;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82C6E6B4;
	sub_8311C148(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82C6E6C8;
	sub_82D042A8(ctx, base);
	// b 0x82c6e718
	goto loc_82C6E718;
loc_82C6E6CC:
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(ctx.r11.s32, 75, xer);
	// bne cr6,0x82c6e704
	if (!cr6.eq) goto loc_82C6E704;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// beq cr6,0x82c6e704
	if (cr6.eq) goto loc_82C6E704;
	// bl 0x831156e8
	ctx.lr = 0x82C6E6E0;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c628
	ctx.lr = 0x82C6E6EC;
	sub_8311C628(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82C6E700;
	sub_82D042A8(ctx, base);
	// b 0x82c6e718
	goto loc_82C6E718;
loc_82C6E704:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8ee48
	ctx.lr = 0x82C6E718;
	sub_82D8EE48(ctx, base);
loc_82C6E718:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d04828
	ctx.lr = 0x82C6E720;
	sub_82D04828(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C6E72C;
	sub_82D28370(ctx, base);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// bl 0x8291fd60
	ctx.lr = 0x82C6E740;
	sub_8291FD60(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04d80
	ctx.lr = 0x82C6E750;
	sub_82D04D80(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// addi r4,r30,-368
	ctx.r4.s64 = ctx.r30.s64 + -368;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ble cr6,0x82c6e788
	if (!cr6.gt) goto loc_82C6E788;
	// addi r4,r30,-340
	ctx.r4.s64 = ctx.r30.s64 + -340;
loc_82C6E788:
	// bctrl 
	ctx.lr = 0x82C6E78C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8292a3f8
	ctx.lr = 0x82C6E798;
	sub_8292A3F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-312
	ctx.r4.s64 = ctx.r30.s64 + -312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E7A8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6E7B8;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838ae2a8
	ctx.lr = 0x82C6E7C0;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d04b60
	ctx.lr = 0x82C6E7C8;
	sub_82D04B60(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6E7D0;
	sub_8387E8E0(ctx, base);
loc_82C6E7D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-288
	ctx.r4.s64 = ctx.r30.s64 + -288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E7E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-276
	ctx.r4.s64 = ctx.r30.s64 + -276;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6E804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82d8ba80
	ctx.lr = 0x82C6E810;
	sub_82D8BA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6e82c
	if (!cr6.eq) goto loc_82C6E82C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6E828;
	sub_82D2AEC8(ctx, base);
	// b 0x82c6e844
	goto loc_82C6E844;
loc_82C6E82C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6E844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6E844:
	// lwz r11,112(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 112);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c6e8a8
	if (!cr6.eq) goto loc_82C6E8A8;
	// lbz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 308);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6e884
	if (cr6.eq) goto loc_82C6E884;
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E868;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,655
	ctx.r5.u64 = ctx.r5.u64 | 655;
	// bl 0x82a69a28
	ctx.lr = 0x82C6E87C;
	sub_82A69A28(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C6E884:
	// addi r4,r30,-244
	ctx.r4.s64 = ctx.r30.s64 + -244;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E88C;
	sub_837B0C10(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,164
	ctx.r5.u64 = ctx.r5.u64 | 164;
	// bl 0x82a69a28
	ctx.lr = 0x82C6E8A0;
	sub_82A69A28(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C6E8A8:
	// lwz r26,300(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x82c6e8c8
	if (!cr6.eq) goto loc_82C6E8C8;
	// lwz r27,292(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// ori r28,r28,575
	ctx.r28.u64 = ctx.r28.u64 | 575;
	// b 0x82c6e8d0
	goto loc_82C6E8D0;
loc_82C6E8C8:
	// lwz r27,288(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// ori r28,r28,574
	ctx.r28.u64 = ctx.r28.u64 | 574;
loc_82C6E8D0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d961a0
	ctx.lr = 0x82C6E8DC;
	sub_82D961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6e8ec
	if (!cr6.eq) goto loc_82C6E8EC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82C6E8EC:
	// cmpwi cr6,r26,5
	cr6.compare<int32_t>(ctx.r26.s32, 5, xer);
	// bne cr6,0x82c6e8f8
	if (!cr6.eq) goto loc_82C6E8F8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82C6E8F8:
	// clrlwi r25,r29,24
	ctx.r25.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82c6e93c
	if (cr6.eq) goto loc_82C6E93C;
	// lwz r11,176(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 176);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// blt cr6,0x82c6e93c
	if (cr6.lt) goto loc_82C6E93C;
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// bne cr6,0x82c6e924
	if (!cr6.eq) goto loc_82C6E924;
	// ori r28,r28,670
	ctx.r28.u64 = ctx.r28.u64 | 670;
	// b 0x82c6e944
	goto loc_82C6E944;
loc_82C6E924:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bne cr6,0x82c6e934
	if (!cr6.eq) goto loc_82C6E934;
	// ori r28,r28,679
	ctx.r28.u64 = ctx.r28.u64 | 679;
	// b 0x82c6e944
	goto loc_82C6E944;
loc_82C6E934:
	// ori r28,r28,639
	ctx.r28.u64 = ctx.r28.u64 | 639;
	// b 0x82c6e944
	goto loc_82C6E944;
loc_82C6E93C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c6e9ac
	if (cr6.eq) goto loc_82C6E9AC;
loc_82C6E944:
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E950;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6E960;
	sub_82A69A28(ctx, base);
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82c6e98c
	if (!cr6.eq) goto loc_82C6E98C;
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E974;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,684
	ctx.r5.u64 = ctx.r5.u64 | 684;
	// bl 0x82a69a28
	ctx.lr = 0x82C6E988;
	sub_82A69A28(ctx, base);
	// b 0x82c6e9d8
	goto loc_82C6E9D8;
loc_82C6E98C:
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E994;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,682
	ctx.r5.u64 = ctx.r5.u64 | 682;
	// bl 0x82a69a28
	ctx.lr = 0x82C6E9A8;
	sub_82A69A28(ctx, base);
	// b 0x82c6e9d8
	goto loc_82C6E9D8;
loc_82C6E9AC:
	// addi r4,r30,-1257
	ctx.r4.s64 = ctx.r30.s64 + -1257;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E9B8;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82C6E9C8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6E9D8;
	sub_82A69AD0(ctx, base);
loc_82C6E9D8:
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6ea74
	if (cr6.eq) goto loc_82C6EA74;
	// cmpwi cr6,r26,5
	cr6.compare<int32_t>(ctx.r26.s32, 5, xer);
	// beq cr6,0x82c6ea74
	if (cr6.eq) goto loc_82C6EA74;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83161f10
	ctx.lr = 0x82C6EA10;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x82C6EA24;
	sub_8259CB28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6EA2C;
	sub_8387E8E0(ctx, base);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c6ea40
	if (!cr6.lt) goto loc_82C6EA40;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82C6EA40:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6EA48;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82C6EA58;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6EA68;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6EA70;
	sub_8387E8E0(ctx, base);
	// b 0x82c6ea94
	goto loc_82C6EA94;
loc_82C6EA74:
	// addi r4,r30,-152
	ctx.r4.s64 = ctx.r30.s64 + -152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6EA80;
	sub_837B0C10(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// bl 0x82a69a28
	ctx.lr = 0x82C6EA94;
	sub_82A69A28(ctx, base);
loc_82C6EA94:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82c6eb54
	if (!cr6.eq) goto loc_82C6EB54;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// std r10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// bl 0x831d4e70
	ctx.lr = 0x82C6EAAC;
	sub_831D4E70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6ecb0
	if (cr6.eq) goto loc_82C6ECB0;
	// addi r4,r30,-1227
	ctx.r4.s64 = ctx.r30.s64 + -1227;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82C6EAC4;
	sub_837B0C10(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,3600
	ctx.r11.s64 = 3600;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// divwu. r5,r10,r11
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// beq 0x82c6eaec
	if (cr0.eq) goto loc_82C6EAEC;
	// ori r4,r4,640
	ctx.r4.u64 = ctx.r4.u64 | 640;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82C6EAE8;
	sub_82D042A8(ctx, base);
	// b 0x82c6eb0c
	goto loc_82C6EB0C;
loc_82C6EAEC:
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82c6eb04
	if (cr6.eq) goto loc_82C6EB04;
	// ori r4,r4,641
	ctx.r4.u64 = ctx.r4.u64 | 641;
	// bl 0x82d042a8
	ctx.lr = 0x82C6EB00;
	sub_82D042A8(ctx, base);
	// b 0x82c6eb0c
	goto loc_82C6EB0C;
loc_82C6EB04:
	// ori r4,r4,642
	ctx.r4.u64 = ctx.r4.u64 | 642;
	// bl 0x82d042a8
	ctx.lr = 0x82C6EB0C;
	sub_82D042A8(ctx, base);
loc_82C6EB0C:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6eb20
	if (!cr6.lt) goto loc_82C6EB20;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82C6EB20:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6EB28;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82C6EB38;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6EB48;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6EB50;
	sub_8387E8E0(ctx, base);
	// b 0x82c6eb74
	goto loc_82C6EB74;
loc_82C6EB54:
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C6EB60;
	sub_837B0C10(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// bl 0x82a69a28
	ctx.lr = 0x82C6EB74;
	sub_82A69A28(ctx, base);
loc_82C6EB74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6EB8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d8c1f8
	ctx.lr = 0x82C6EB98;
	sub_82D8C1F8(ctx, base);
	// lbz r28,307(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 307);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c6ec20
	if (cr6.eq) goto loc_82C6EC20;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x82c6ebcc
	if (!cr6.eq) goto loc_82C6EBCC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// li r3,3
	ctx.r3.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6ebc4
	if (!cr6.eq) goto loc_82C6EBC4;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82C6EBC4:
	// bl 0x82d8c1f8
	ctx.lr = 0x82C6EBC8;
	sub_82D8C1F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82C6EBCC:
	// lwz r11,112(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 112);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c6ebf4
	if (!cr6.eq) goto loc_82C6EBF4;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// bne cr6,0x82c6ebf4
	if (!cr6.eq) goto loc_82C6EBF4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6EBF0;
	sub_82D2AEC8(ctx, base);
	// b 0x82c6ec20
	goto loc_82C6EC20;
loc_82C6EBF4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6EC04;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6EC20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6EC20:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r10,306(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 306);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c6ec48
	if (!cr6.eq) goto loc_82C6EC48;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
loc_82C6EC48:
	// bctrl 
	ctx.lr = 0x82C6EC4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6EC68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// bne cr6,0x82c6ec80
	if (!cr6.eq) goto loc_82C6EC80;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82c6ecb0
	if (!cr6.eq) goto loc_82C6ECB0;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// b 0x82c6ec98
	goto loc_82C6EC98;
loc_82C6EC80:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x82c6ecb0
	if (!cr6.eq) goto loc_82C6ECB0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6ecb0
	if (cr6.eq) goto loc_82C6ECB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C6EC98:
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
	ctx.lr = 0x82C6ECB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6ECB0:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6ECB8"))) PPC_WEAK_FUNC(sub_82C6ECB8);
PPC_FUNC_IMPL(__imp__sub_82C6ECB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c6e478
	sub_82C6E478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6ECBC"))) PPC_WEAK_FUNC(sub_82C6ECBC);
PPC_FUNC_IMPL(__imp__sub_82C6ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6ECC0"))) PPC_WEAK_FUNC(sub_82C6ECC0);
PPC_FUNC_IMPL(__imp__sub_82C6ECC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C6ECC8;
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
	ctx.lr = 0x82C6ECDC;
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
	ctx.lr = 0x82C6ECF4;
	sub_82D253F8(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,11648
	ctx.r8.s64 = ctx.r10.s64 + 11648;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// addi r30,r6,-7528
	ctx.r30.s64 = ctx.r6.s64 + -7528;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// lwz r4,-7528(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7528);
	// bl 0x82d20ae0
	ctx.lr = 0x82C6ED34;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82C6ED40;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82C6ED4C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d23390
	ctx.lr = 0x82C6ED5C;
	sub_82D23390(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,10500
	ctx.r3.s64 = ctx.r5.s64 + 10500;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd6558
	ctx.lr = 0x82C6ED74;
	sub_82BD6558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c6ed8c
	if (cr6.eq) goto loc_82C6ED8C;
	// bl 0x83103100
	ctx.lr = 0x82C6ED88;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C6ED8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6ED94"))) PPC_WEAK_FUNC(sub_82C6ED94);
PPC_FUNC_IMPL(__imp__sub_82C6ED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6ED98"))) PPC_WEAK_FUNC(sub_82C6ED98);
PPC_FUNC_IMPL(__imp__sub_82C6ED98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C6EDA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6EDAC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6EDB8;
	sub_82921C20(ctx, base);
	// bl 0x82deabd8
	ctx.lr = 0x82C6EDBC;
	sub_82DEABD8(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C6EDCC;
	sub_82DAB6D0(ctx, base);
	// lwz r28,12(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82d97a20
	ctx.lr = 0x82C6EDE4;
	sub_82D97A20(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97ce8
	ctx.lr = 0x82C6EE08;
	sub_82D97CE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x82d17da0
	ctx.lr = 0x82C6EE14;
	sub_82D17DA0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,11088
	ctx.r5.s64 = ctx.r10.s64 + 11088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C6EE28;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6EE30"))) PPC_WEAK_FUNC(sub_82C6EE30);
PPC_FUNC_IMPL(__imp__sub_82C6EE30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11648
	ctx.r9.s64 = ctx.r11.s64 + 11648;
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
	ctx.lr = 0x82C6EE68;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c6ee80
	if (cr6.eq) goto loc_82C6EE80;
	// bl 0x82416268
	ctx.lr = 0x82C6EE7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C6EE80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6EE98"))) PPC_WEAK_FUNC(sub_82C6EE98);
PPC_FUNC_IMPL(__imp__sub_82C6EE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c6eec0
	if (cr6.lt) goto loc_82C6EEC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c6eec4
	goto loc_82C6EEC4;
loc_82C6EEC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C6EEC4:
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
	ctx.lr = 0x82C6EEE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6eef8
	if (cr6.eq) goto loc_82C6EEF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c6ecc0
	ctx.lr = 0x82C6EEF4;
	sub_82C6ECC0(ctx, base);
	// b 0x82c6eefc
	goto loc_82C6EEFC;
loc_82C6EEF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C6EEFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C6EF14"))) PPC_WEAK_FUNC(sub_82C6EF14);
PPC_FUNC_IMPL(__imp__sub_82C6EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6EF18"))) PPC_WEAK_FUNC(sub_82C6EF18);
PPC_FUNC_IMPL(__imp__sub_82C6EF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C6EF20;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6EF2C;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6EF34;
	sub_82921C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82deabd8
	ctx.lr = 0x82C6EF3C;
	sub_82DEABD8(ctx, base);
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c6ef68
	if (!cr6.eq) goto loc_82C6EF68;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6ef68
	if (!cr6.eq) goto loc_82C6EF68;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x82c6ef74
	goto loc_82C6EF74;
loc_82C6EF68:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82C6EF74:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6ef8c
	if (!cr6.eq) goto loc_82C6EF8C;
	// stb r11,641(r30)
	PPC_STORE_U8(ctx.r30.u32 + 641, ctx.r11.u8);
	// b 0x82c6ef90
	goto loc_82C6EF90;
loc_82C6EF8C:
	// stb r31,641(r30)
	PPC_STORE_U8(ctx.r30.u32 + 641, ctx.r31.u8);
loc_82C6EF90:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83161f10
	ctx.lr = 0x82C6EFA0;
	sub_83161F10(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C6EFC4;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cde860
	ctx.lr = 0x82C6EFD8;
	sub_82CDE860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6f008
	if (!cr6.eq) goto loc_82C6F008;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6f02c
	if (cr6.lt) goto loc_82C6F02C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C6F000;
	sub_825952B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C6F008:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C6F010;
	sub_83103100(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6f02c
	if (cr6.lt) goto loc_82C6F02C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C6F02C;
	sub_825952B8(ctx, base);
loc_82C6F02C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6F034"))) PPC_WEAK_FUNC(sub_82C6F034);
PPC_FUNC_IMPL(__imp__sub_82C6F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6F038"))) PPC_WEAK_FUNC(sub_82C6F038);
PPC_FUNC_IMPL(__imp__sub_82C6F038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,4216
	ctx.r9.u64 = ctx.r11.u64 | 4216;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c6f0d8
	if (!cr6.eq) goto loc_82C6F0D8;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c6f0d8
	if (cr6.eq) goto loc_82C6F0D8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cde7c0
	ctx.lr = 0x82C6F078;
	sub_82CDE7C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82C6F0A0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8315d780
	ctx.lr = 0x82C6F0A8;
	sub_8315D780(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6F0B0;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6F0B8;
	sub_82921C20(ctx, base);
	// stw r30,636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 636, ctx.r30.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r8,11100
	ctx.r5.s64 = ctx.r8.s64 + 11100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C6F0D0;
	sub_82D20DA8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6F0D8;
	sub_8387E8E0(ctx, base);
loc_82C6F0D8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82C6F0F4"))) PPC_WEAK_FUNC(sub_82C6F0F4);
PPC_FUNC_IMPL(__imp__sub_82C6F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6F0F8"))) PPC_WEAK_FUNC(sub_82C6F0F8);
PPC_FUNC_IMPL(__imp__sub_82C6F0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6F100;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F10C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r11,10956
	ctx.r31.s64 = ctx.r11.s64 + 10956;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6F12C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6f28c
	if (cr6.eq) goto loc_82C6F28C;
	// bl 0x82d86078
	ctx.lr = 0x82C6F13C;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6F144;
	sub_82921C20(ctx, base);
	// bl 0x82deabd8
	ctx.lr = 0x82C6F148;
	sub_82DEABD8(ctx, base);
	// lbz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 108);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c6f248
	if (cr6.eq) goto loc_82C6F248;
	// lbz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c6f248
	if (cr6.eq) goto loc_82C6F248;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82c6f248
	if (cr6.eq) goto loc_82C6F248;
	// lbz r10,54(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c6f184
	if (!cr6.eq) goto loc_82C6F184;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c6f248
	if (cr6.eq) goto loc_82C6F248;
loc_82C6F184:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F18C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6F1A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C6F1B8;
	sub_82D2B608(ctx, base);
	// lbz r9,53(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82c6f20c
	if (!cr6.eq) goto loc_82C6F20C;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6f20c
	if (!cr6.eq) goto loc_82C6F20C;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F1E0;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,606
	ctx.r5.u64 = ctx.r5.u64 | 606;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F1F4;
	sub_82A69A28(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6F204;
	sub_82D19788(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6F20C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F21C;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,603
	ctx.r5.u64 = ctx.r5.u64 | 603;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F230;
	sub_82A69A28(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6F240;
	sub_82D19788(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6F248:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F250;
	sub_82D19A78(ctx, base);
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
	ctx.lr = 0x82C6F268;
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
	ctx.lr = 0x82C6F27C;
	sub_82D2B608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6F28C;
	sub_82D19788(ctx, base);
loc_82C6F28C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6F294"))) PPC_WEAK_FUNC(sub_82C6F294);
PPC_FUNC_IMPL(__imp__sub_82C6F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6F298"))) PPC_WEAK_FUNC(sub_82C6F298);
PPC_FUNC_IMPL(__imp__sub_82C6F298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C6F2A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6F2AC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6F2B4;
	sub_82921C20(ctx, base);
	// bl 0x82deabd8
	ctx.lr = 0x82C6F2B8;
	sub_82DEABD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F2C4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r26,r11,11040
	ctx.r26.s64 = ctx.r11.s64 + 11040;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6F2E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82c6f418
	if (cr6.eq) goto loc_82C6F418;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82c6f418
	if (cr6.eq) goto loc_82C6F418;
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6f358
	if (!cr6.eq) goto loc_82C6F358;
	// lbz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6f358
	if (!cr6.eq) goto loc_82C6F358;
	// lbz r11,54(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 54);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6f390
	if (cr6.eq) goto loc_82C6F390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F330;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f340
	if (!cr6.eq) goto loc_82C6F340;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82C6F340:
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F34C;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// ori r5,r5,445
	ctx.r5.u64 = ctx.r5.u64 | 445;
	// b 0x82c6f384
	goto loc_82C6F384;
loc_82C6F358:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F360;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f370
	if (!cr6.eq) goto loc_82C6F370;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82C6F370:
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F37C;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// ori r5,r5,444
	ctx.r5.u64 = ctx.r5.u64 | 444;
loc_82C6F384:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F390;
	sub_82A69A28(ctx, base);
loc_82C6F390:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6f3dc
	if (!cr6.eq) goto loc_82C6F3DC;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F3A4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f3b4
	if (!cr6.eq) goto loc_82C6F3B4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82C6F3B4:
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F3C0;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,575
	ctx.r5.u64 = ctx.r5.u64 | 575;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F3D4;
	sub_82A69A28(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C6F3DC:
	// bl 0x82d19a78
	ctx.lr = 0x82C6F3E0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f3f0
	if (!cr6.eq) goto loc_82C6F3F0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82C6F3F0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F3FC;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,574
	ctx.r5.u64 = ctx.r5.u64 | 574;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F410;
	sub_82A69A28(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C6F418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F420;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,-68
	ctx.r4.s64 = ctx.r26.s64 + -68;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6F438;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F440;
	sub_82D19A78(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f454
	if (!cr6.eq) goto loc_82C6F454;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82C6F454:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C6F474;
	sub_8259CC28(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,447
	ctx.r5.u64 = ctx.r5.u64 | 447;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F488;
	sub_82A69A28(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c6f4a4
	if (cr6.eq) goto loc_82C6F4A4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C6F4A4;
	sub_82D2B608(ctx, base);
loc_82C6F4A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F4AC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f4bc
	if (!cr6.eq) goto loc_82C6F4BC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82C6F4BC:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C6F4D8;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,639
	ctx.r5.u64 = ctx.r5.u64 | 639;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F4EC;
	sub_82A69A28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C6F4FC;
	sub_82D19788(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6F504"))) PPC_WEAK_FUNC(sub_82C6F504);
PPC_FUNC_IMPL(__imp__sub_82C6F504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C6F508"))) PPC_WEAK_FUNC(sub_82C6F508);
PPC_FUNC_IMPL(__imp__sub_82C6F508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C6F510;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6F520;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6F528;
	sub_82921C20(ctx, base);
	// bl 0x82deabd8
	ctx.lr = 0x82C6F52C;
	sub_82DEABD8(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82c6f580
	if (!cr6.eq) goto loc_82C6F580;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F540;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f550
	if (!cr6.eq) goto loc_82C6F550;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C6F550:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,11072
	ctx.r11.s64 = ctx.r11.s64 + 11072;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F564;
	sub_837B0C10(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F578;
	sub_82A69A28(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C6F580:
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6f628
	if (!cr6.eq) goto loc_82C6F628;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831d4e70
	ctx.lr = 0x82C6F59C;
	sub_831D4E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c6f628
	if (cr6.eq) goto loc_82C6F628;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,11072
	ctx.r30.s64 = ctx.r11.s64 + 11072;
	// addi r4,r30,-926
	ctx.r4.s64 = ctx.r30.s64 + -926;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F5BC;
	sub_837B0C10(ctx, base);
	// li r11,3600
	ctx.r11.s64 = 3600;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r5,r29,r11
	ctx.r5.u32 = PPCDivide(ctx.r29.u32, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C6F5DC;
	sub_82D042A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F5E4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f5f4
	if (!cr6.eq) goto loc_82C6F5F4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C6F5F4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292a3f8
	ctx.lr = 0x82C6F600;
	sub_8292A3F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F610;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6F620;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6F628;
	sub_8387E8E0(ctx, base);
loc_82C6F628:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C6F630"))) PPC_WEAK_FUNC(sub_82C6F630);
PPC_FUNC_IMPL(__imp__sub_82C6F630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C6F638;
	__savegprlr_21(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C6F644;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C6F64C;
	sub_82921C20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82deabd8
	ctx.lr = 0x82C6F654;
	sub_82DEABD8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r29,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r29.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r24,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r29,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r29.u8);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// lwz r6,20(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// bl 0x82d8ee48
	ctx.lr = 0x82C6F68C;
	sub_82D8EE48(ctx, base);
	// lwz r10,464(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// li r21,2
	ctx.r21.s64 = 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c6f6ec
	if (!cr6.eq) goto loc_82C6F6EC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F6A4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f6b4
	if (!cr6.eq) goto loc_82C6F6B4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6F6B4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,11540
	ctx.r27.s64 = ctx.r11.s64 + 11540;
	// addi r4,r27,-1393
	ctx.r4.s64 = ctx.r27.s64 + -1393;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F6C8;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-432
	ctx.r4.s64 = ctx.r27.s64 + -432;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F6D8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6F6E8;
	sub_82A69AD0(ctx, base);
	// b 0x82c6f7a0
	goto loc_82C6F7A0;
loc_82C6F6EC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r27,r11,11540
	ctx.r27.s64 = ctx.r11.s64 + 11540;
	// addi r4,r27,-1363
	ctx.r4.s64 = ctx.r27.s64 + -1363;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F700;
	sub_837B0C10(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r5,448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6f714
	if (!cr6.lt) goto loc_82C6F714;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
loc_82C6F714:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// ori r4,r4,202
	ctx.r4.u64 = ctx.r4.u64 | 202;
	// bl 0x82d042a8
	ctx.lr = 0x82C6F724;
	sub_82D042A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F72C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f73c
	if (!cr6.eq) goto loc_82C6F73C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6F73C:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6f750
	if (!cr6.lt) goto loc_82C6F750;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
loc_82C6F750:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F758;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-420
	ctx.r4.s64 = ctx.r27.s64 + -420;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F768;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6F778;
	sub_82A69AD0(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6f794
	if (cr6.lt) goto loc_82C6F794;
	// stw r21,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r21.u32);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825952b8
	ctx.lr = 0x82C6F794;
	sub_825952B8(ctx, base);
loc_82C6F794:
	// stw r24,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r24.u32);
	// stw r29,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r29.u32);
	// stb r29,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r29.u8);
loc_82C6F7A0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F7A8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f7b8
	if (!cr6.eq) goto loc_82C6F7B8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6F7B8:
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// addi r4,r27,-408
	ctx.r4.s64 = ctx.r27.s64 + -408;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82C6F7D4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// bl 0x82a6a1b8
	ctx.lr = 0x82C6F7E4;
	sub_82A6A1B8(ctx, base);
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r23,r11,98
	ctx.r23.u64 = ctx.r11.u64 | 98;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6f840
	if (!cr6.eq) goto loc_82C6F840;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F810;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f820
	if (!cr6.eq) goto loc_82C6F820;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6F820:
	// addi r4,r27,-392
	ctx.r4.s64 = ctx.r27.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F82C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F83C;
	sub_82A69A28(ctx, base);
	// b 0x82c6f8e4
	goto loc_82C6F8E4;
loc_82C6F840:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x83161f10
	ctx.lr = 0x82C6F854;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cb28
	ctx.lr = 0x82C6F868;
	sub_8259CB28(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6f884
	if (cr6.lt) goto loc_82C6F884;
	// stw r21,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r21.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x825952b8
	ctx.lr = 0x82C6F884;
	sub_825952B8(ctx, base);
loc_82C6F884:
	// stw r24,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r24.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r29.u32);
	// stb r29,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r29.u8);
	// bl 0x82d19a78
	ctx.lr = 0x82C6F898;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f8a8
	if (!cr6.eq) goto loc_82C6F8A8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6F8A8:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6f8bc
	if (!cr6.lt) goto loc_82C6F8BC;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_82C6F8BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F8C4;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-376
	ctx.r4.s64 = ctx.r27.s64 + -376;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F8D4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6F8E4;
	sub_82A69AD0(ctx, base);
loc_82C6F8E4:
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82d8b758
	ctx.lr = 0x82C6F8EC;
	sub_82D8B758(ctx, base);
	// stw r3,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82d8b938
	ctx.lr = 0x82C6F8F8;
	sub_82D8B938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82c6f93c
	if (cr6.eq) goto loc_82C6F93C;
	// bl 0x82d19a78
	ctx.lr = 0x82C6F90C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f91c
	if (!cr6.eq) goto loc_82C6F91C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6F91C:
	// addi r4,r27,-360
	ctx.r4.s64 = ctx.r27.s64 + -360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F928;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6F938;
	sub_82A69A28(ctx, base);
	// b 0x82c6f97c
	goto loc_82C6F97C;
loc_82C6F93C:
	// bl 0x82d19a78
	ctx.lr = 0x82C6F940;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6f950
	if (!cr6.eq) goto loc_82C6F950;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6F950:
	// addi r4,r27,-1362
	ctx.r4.s64 = ctx.r27.s64 + -1362;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F95C;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-344
	ctx.r4.s64 = ctx.r27.s64 + -344;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C6F96C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6F97C;
	sub_82A69AD0(ctx, base);
loc_82C6F97C:
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// addi r4,r27,-1361
	ctx.r4.s64 = ctx.r27.s64 + -1361;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x82C6F998;
	sub_8259CC28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,40(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// bl 0x82a6b9a8
	ctx.lr = 0x82C6F9A8;
	sub_82A6B9A8(ctx, base);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r27,-1343
	ctx.r4.s64 = ctx.r27.s64 + -1343;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82C6F9C4;
	sub_8259CC28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// bl 0x82a6b9a8
	ctx.lr = 0x82C6F9D4;
	sub_82A6B9A8(ctx, base);
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r24.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r4,r27,-1342
	ctx.r4.s64 = ctx.r27.s64 + -1342;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x82C6F9F0;
	sub_8259CC28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,48(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82a6b9a8
	ctx.lr = 0x82C6FA00;
	sub_82A6B9A8(ctx, base);
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6fa7c
	if (!cr6.eq) goto loc_82C6FA7C;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r11.u32);
	// lbz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c6fa50
	if (cr6.eq) goto loc_82C6FA50;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FA28;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fa38
	if (!cr6.eq) goto loc_82C6FA38;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FA38:
	// addi r4,r27,-328
	ctx.r4.s64 = ctx.r27.s64 + -328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FA44;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,593
	ctx.r5.u64 = ctx.r5.u64 | 593;
	// b 0x82c6fab0
	goto loc_82C6FAB0;
loc_82C6FA50:
	// bl 0x82d19a78
	ctx.lr = 0x82C6FA54;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fa64
	if (!cr6.eq) goto loc_82C6FA64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FA64:
	// addi r4,r27,-312
	ctx.r4.s64 = ctx.r27.s64 + -312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FA70;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,594
	ctx.r5.u64 = ctx.r5.u64 | 594;
	// b 0x82c6fab0
	goto loc_82C6FAB0;
loc_82C6FA7C:
	// lwz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C6FA8C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fa9c
	if (!cr6.eq) goto loc_82C6FA9C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FA9C:
	// addi r4,r27,-296
	ctx.r4.s64 = ctx.r27.s64 + -296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FAA8;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,576
	ctx.r5.u64 = ctx.r5.u64 | 576;
loc_82C6FAB0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6FABC;
	sub_82A69A28(ctx, base);
	// stw r24,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r24.u32);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// addi r4,r27,-1341
	ctx.r4.s64 = ctx.r27.s64 + -1341;
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cc28
	ctx.lr = 0x82C6FAD8;
	sub_8259CC28(ctx, base);
	// stw r24,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// addi r4,r27,-1271
	ctx.r4.s64 = ctx.r27.s64 + -1271;
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cc28
	ctx.lr = 0x82C6FAF4;
	sub_8259CC28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6fb08
	if (!cr6.lt) goto loc_82C6FB08;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_82C6FB08:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6fb1c
	if (!cr6.lt) goto loc_82C6FB1C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82C6FB1C:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// bl 0x82d042a8
	ctx.lr = 0x82C6FB2C;
	sub_82D042A8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6fb40
	if (!cr6.lt) goto loc_82C6FB40;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
loc_82C6FB40:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6fb54
	if (!cr6.lt) goto loc_82C6FB54;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82C6FB54:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// bl 0x82d042a8
	ctx.lr = 0x82C6FB64;
	sub_82D042A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FB6C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fb7c
	if (!cr6.eq) goto loc_82C6FB7C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FB7C:
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82C6FB9C;
	sub_8259CB28(ctx, base);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r27,-280
	ctx.r4.s64 = ctx.r27.s64 + -280;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C6FBB8;
	sub_8259CC28(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6FBC8;
	sub_82A69AD0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FBD0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fbe0
	if (!cr6.eq) goto loc_82C6FBE0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FBE0:
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82C6FC00;
	sub_8259CB28(ctx, base);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r4,r27,-264
	ctx.r4.s64 = ctx.r27.s64 + -264;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82C6FC1C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6FC2C;
	sub_82A69AD0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c80d40
	ctx.lr = 0x82C6FC34;
	sub_82C80D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c6fc4c
	if (!cr6.eq) goto loc_82C6FC4C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,96(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x82c6f508
	ctx.lr = 0x82C6FC4C;
	sub_82C6F508(ctx, base);
loc_82C6FC4C:
	// lbz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c6fdc4
	if (cr6.eq) goto loc_82C6FDC4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FC60;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fc70
	if (!cr6.eq) goto loc_82C6FC70;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FC70:
	// addi r4,r27,-248
	ctx.r4.s64 = ctx.r27.s64 + -248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FC7C;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,673
	ctx.r5.u64 = ctx.r5.u64 | 673;
	// bl 0x82a69a28
	ctx.lr = 0x82C6FC90;
	sub_82A69A28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FC98;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fca8
	if (!cr6.eq) goto loc_82C6FCA8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FCA8:
	// addi r4,r27,-232
	ctx.r4.s64 = ctx.r27.s64 + -232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FCB4;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,672
	ctx.r5.u64 = ctx.r5.u64 | 672;
	// bl 0x82a69a28
	ctx.lr = 0x82C6FCC8;
	sub_82A69A28(ctx, base);
	// stw r29,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r29.u32);
	// stw r24,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r24.u32);
	// stb r29,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r29.u8);
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6fd18
	if (!cr6.eq) goto loc_82C6FD18;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FCE8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fcf8
	if (!cr6.eq) goto loc_82C6FCF8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FCF8:
	// addi r4,r27,-216
	ctx.r4.s64 = ctx.r27.s64 + -216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FD04;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6FD14;
	sub_82A69A28(ctx, base);
	// b 0x82c6fd9c
	goto loc_82C6FD9C;
loc_82C6FD18:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83161f10
	ctx.lr = 0x82C6FD2C;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8259cb28
	ctx.lr = 0x82C6FD40;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C6FD48;
	sub_8387E8E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FD50;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fd60
	if (!cr6.eq) goto loc_82C6FD60;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FD60:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c6fd74
	if (!cr6.lt) goto loc_82C6FD74;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_82C6FD74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FD7C;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-200
	ctx.r4.s64 = ctx.r27.s64 + -200;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FD8C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C6FD9C;
	sub_82A69AD0(ctx, base);
loc_82C6FD9C:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c6fdb8
	if (cr6.lt) goto loc_82C6FDB8;
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82C6FDB8;
	sub_825952B8(ctx, base);
loc_82C6FDB8:
	// stw r24,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r24.u32);
	// stw r29,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r29.u32);
	// stb r29,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r29.u8);
loc_82C6FDC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FDCC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-184
	ctx.r4.s64 = ctx.r27.s64 + -184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6FDE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-172
	ctx.r4.s64 = ctx.r27.s64 + -172;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C6FE00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82d8ba80
	ctx.lr = 0x82C6FE0C;
	sub_82D8BA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c6fe28
	if (!cr6.eq) goto loc_82C6FE28;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6FE24;
	sub_82D2AEC8(ctx, base);
	// b 0x82c6fe40
	goto loc_82C6FE40;
loc_82C6FE28:
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
	ctx.lr = 0x82C6FE40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6FE40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FE48;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-160
	ctx.r4.s64 = ctx.r27.s64 + -160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6FE60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// bl 0x82d8c1f8
	ctx.lr = 0x82C6FE6C;
	sub_82D8C1F8(ctx, base);
	// lwz r9,36(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82c6fe88
	if (!cr6.eq) goto loc_82C6FE88;
	// stb r28,108(r26)
	PPC_STORE_U8(ctx.r26.u32 + 108, ctx.r28.u8);
	// b 0x82c6fe8c
	goto loc_82C6FE8C;
loc_82C6FE88:
	// stb r29,108(r26)
	PPC_STORE_U8(ctx.r26.u32 + 108, ctx.r29.u8);
loc_82C6FE8C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c6ff00
	if (cr6.eq) goto loc_82C6FF00;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c6febc
	if (!cr6.eq) goto loc_82C6FEBC;
	// lbz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 52);
	// li r3,3
	ctx.r3.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c6feb4
	if (!cr6.eq) goto loc_82C6FEB4;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82C6FEB4:
	// bl 0x82d8c1f8
	ctx.lr = 0x82C6FEB8;
	sub_82D8C1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C6FEBC:
	// lbz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c6fedc
	if (!cr6.eq) goto loc_82C6FEDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6FED8;
	sub_82D2AEC8(ctx, base);
	// b 0x82c6ff00
	goto loc_82C6FF00;
loc_82C6FEDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C6FEE4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C6FF00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C6FF00:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82c70134
	if (!cr6.eq) goto loc_82C70134;
	// addi r3,r27,-144
	ctx.r3.s64 = ctx.r27.s64 + -144;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C6FF20;
	sub_82D2AD40(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,448
	ctx.r4.u64 = ctx.r4.u64 | 448;
	// bl 0x82d2ada8
	ctx.lr = 0x82C6FF30;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C6FF3C;
	sub_83103100(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FF44;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6ff54
	if (!cr6.eq) goto loc_82C6FF54;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FF54:
	// addi r4,r27,-128
	ctx.r4.s64 = ctx.r27.s64 + -128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FF60;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,448
	ctx.r5.u64 = ctx.r5.u64 | 448;
	// bl 0x82a69a28
	ctx.lr = 0x82C6FF74;
	sub_82A69A28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FF7C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6ff8c
	if (!cr6.eq) goto loc_82C6FF8C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FF8C:
	// addi r4,r27,-120
	ctx.r4.s64 = ctx.r27.s64 + -120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FF98;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6FFA8;
	sub_82A69A28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FFB0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6ffc0
	if (!cr6.eq) goto loc_82C6FFC0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FFC0:
	// addi r4,r27,-104
	ctx.r4.s64 = ctx.r27.s64 + -104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C6FFCC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C6FFDC;
	sub_82A69A28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C6FFE4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c6fff4
	if (!cr6.eq) goto loc_82C6FFF4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C6FFF4:
	// addi r4,r27,-88
	ctx.r4.s64 = ctx.r27.s64 + -88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70000;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C70010;
	sub_82A69A28(ctx, base);
	// stb r29,68(r25)
	PPC_STORE_U8(ctx.r25.u32 + 68, ctx.r29.u8);
	// stw r29,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c6f298
	ctx.lr = 0x82C70020;
	sub_82C6F298(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c7003c
	if (cr6.lt) goto loc_82C7003C;
	// stw r21,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r21.u32);
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82C7003C;
	sub_825952B8(ctx, base);
loc_82C7003C:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r24,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// blt cr6,0x82c70064
	if (cr6.lt) goto loc_82C70064;
	// stw r21,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r21.u32);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82C70064;
	sub_825952B8(ctx, base);
loc_82C70064:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r24,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r24.u32);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// blt cr6,0x82c7008c
	if (cr6.lt) goto loc_82C7008C;
	// stw r21,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C7008C;
	sub_825952B8(ctx, base);
loc_82C7008C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r24.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// blt cr6,0x82c700b4
	if (cr6.lt) goto loc_82C700B4;
	// stw r21,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r21.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82C700B4;
	sub_825952B8(ctx, base);
loc_82C700B4:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// blt cr6,0x82c700dc
	if (cr6.lt) goto loc_82C700DC;
	// stw r21,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r21.u32);
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82C700DC;
	sub_825952B8(ctx, base);
loc_82C700DC:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// blt cr6,0x82c70104
	if (cr6.lt) goto loc_82C70104;
	// stw r21,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r21.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82C70104;
	sub_825952B8(ctx, base);
loc_82C70104:
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// blt cr6,0x82c70424
	if (cr6.lt) goto loc_82C70424;
	// stw r21,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r21.u32);
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x82C7012C;
	sub_825952B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C70134:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c7018c
	if (!cr6.eq) goto loc_82C7018C;
	// lbz r11,643(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 643);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c702e0
	if (!cr6.eq) goto loc_82C702E0;
	// lbz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c702e0
	if (!cr6.eq) goto loc_82C702E0;
	// addi r3,r27,-72
	ctx.r3.s64 = ctx.r27.s64 + -72;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C70168;
	sub_82D2AD40(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,453
	ctx.r4.u64 = ctx.r4.u64 | 453;
	// bl 0x82d2ada8
	ctx.lr = 0x82C70178;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C70184;
	sub_83103100(ctx, base);
	// stb r28,643(r22)
	PPC_STORE_U8(ctx.r22.u32 + 643, ctx.r28.u8);
	// b 0x82c702d4
	goto loc_82C702D4;
loc_82C7018C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c70228
	if (!cr6.eq) goto loc_82C70228;
	// lbz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c701dc
	if (cr6.eq) goto loc_82C701DC;
	// addi r3,r27,-52
	ctx.r3.s64 = ctx.r27.s64 + -52;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C701B4;
	sub_82D2AD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c702e0
	if (cr6.eq) goto loc_82C702E0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,546
	ctx.r4.u64 = ctx.r4.u64 | 546;
	// bl 0x82d2ada8
	ctx.lr = 0x82C701CC;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C701D8;
	sub_83103100(ctx, base);
	// b 0x82c702e0
	goto loc_82C702E0;
loc_82C701DC:
	// lbz r11,640(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 640);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c702e0
	if (cr6.eq) goto loc_82C702E0;
	// addi r3,r27,-32
	ctx.r3.s64 = ctx.r27.s64 + -32;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C701FC;
	sub_82D2AD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c70220
	if (cr6.eq) goto loc_82C70220;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,452
	ctx.r4.u64 = ctx.r4.u64 | 452;
	// bl 0x82d2ada8
	ctx.lr = 0x82C70214;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C70220;
	sub_83103100(ctx, base);
loc_82C70220:
	// stb r29,640(r22)
	PPC_STORE_U8(ctx.r22.u32 + 640, ctx.r29.u8);
	// b 0x82c702e0
	goto loc_82C702E0;
loc_82C70228:
	// lbz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c70284
	if (cr6.eq) goto loc_82C70284;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c702e0
	if (cr6.eq) goto loc_82C702E0;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c702e0
	if (cr6.eq) goto loc_82C702E0;
	// addi r3,r27,-12
	ctx.r3.s64 = ctx.r27.s64 + -12;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C7025C;
	sub_82D2AD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c702e0
	if (cr6.eq) goto loc_82C702E0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,579
	ctx.r4.u64 = ctx.r4.u64 | 579;
	// bl 0x82d2ada8
	ctx.lr = 0x82C70274;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C70280;
	sub_83103100(ctx, base);
	// b 0x82c702e0
	goto loc_82C702E0;
loc_82C70284:
	// lbz r10,642(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 642);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c702e0
	if (!cr6.eq) goto loc_82C702E0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c702e0
	if (!cr6.eq) goto loc_82C702E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C702AC;
	sub_82D2AD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c702d0
	if (cr6.eq) goto loc_82C702D0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,451
	ctx.r4.u64 = ctx.r4.u64 | 451;
	// bl 0x82d2ada8
	ctx.lr = 0x82C702C4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C702D0;
	sub_83103100(ctx, base);
loc_82C702D0:
	// stb r28,642(r22)
	PPC_STORE_U8(ctx.r22.u32 + 642, ctx.r28.u8);
loc_82C702D4:
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C702E0;
	sub_82D17DA0(ctx, base);
loc_82C702E0:
	// bl 0x82d860f0
	ctx.lr = 0x82C702E4;
	sub_82D860F0(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82c70308
	if (!cr6.eq) goto loc_82C70308;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c70308
	if (cr6.eq) goto loc_82C70308;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x82d84728
	ctx.lr = 0x82C70308;
	sub_82D84728(ctx, base);
loc_82C70308:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c6f0f8
	ctx.lr = 0x82C70310;
	sub_82C6F0F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c6f298
	ctx.lr = 0x82C70318;
	sub_82C6F298(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c70334
	if (cr6.lt) goto loc_82C70334;
	// stw r21,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r21.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82C70334;
	sub_825952B8(ctx, base);
loc_82C70334:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r24,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// blt cr6,0x82c7035c
	if (cr6.lt) goto loc_82C7035C;
	// stw r21,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r21.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82C7035C;
	sub_825952B8(ctx, base);
loc_82C7035C:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r24,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r24.u32);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// blt cr6,0x82c70384
	if (cr6.lt) goto loc_82C70384;
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C70384;
	sub_825952B8(ctx, base);
loc_82C70384:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r24.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// blt cr6,0x82c703ac
	if (cr6.lt) goto loc_82C703AC;
	// stw r21,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r21.u32);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82C703AC;
	sub_825952B8(ctx, base);
loc_82C703AC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// blt cr6,0x82c703d4
	if (cr6.lt) goto loc_82C703D4;
	// stw r21,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r21.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82C703D4;
	sub_825952B8(ctx, base);
loc_82C703D4:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// blt cr6,0x82c703fc
	if (cr6.lt) goto loc_82C703FC;
	// stw r21,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r21.u32);
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82C703FC;
	sub_825952B8(ctx, base);
loc_82C703FC:
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// blt cr6,0x82c70424
	if (cr6.lt) goto loc_82C70424;
	// stw r21,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r21.u32);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x82C70424;
	sub_825952B8(ctx, base);
loc_82C70424:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7042C"))) PPC_WEAK_FUNC(sub_82C7042C);
PPC_FUNC_IMPL(__imp__sub_82C7042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C70430"))) PPC_WEAK_FUNC(sub_82C70430);
PPC_FUNC_IMPL(__imp__sub_82C70430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C70438;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C7044C;
	sub_82D19788(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,604
	ctx.r5.u64 = ctx.r5.u64 | 604;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C7046C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70474;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r29,r11,10600
	ctx.r29.s64 = ctx.r11.s64 + 10600;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C70494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c704ac
	if (cr6.eq) goto loc_82C704AC;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,553
	ctx.r4.u64 = ctx.r4.u64 | 553;
	// bl 0x82d30340
	ctx.lr = 0x82C704AC;
	sub_82D30340(ctx, base);
loc_82C704AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C704B4;
	sub_82D19A78(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c704c8
	if (!cr6.eq) goto loc_82C704C8;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C704C8:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C704E8;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,573
	ctx.r5.u64 = ctx.r5.u64 | 573;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C704FC;
	sub_82A69A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70504;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70514
	if (!cr6.eq) goto loc_82C70514;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C70514:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C70530;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,591
	ctx.r5.u64 = ctx.r5.u64 | 591;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C70544;
	sub_82A69A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C7054C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c7055c
	if (!cr6.eq) goto loc_82C7055C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C7055C:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C70578;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,674
	ctx.r5.u64 = ctx.r5.u64 | 674;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C7058C;
	sub_82A69A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70594;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c705a4
	if (!cr6.eq) goto loc_82C705A4;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C705A4:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C705C0;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,574
	ctx.r5.u64 = ctx.r5.u64 | 574;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C705D4;
	sub_82A69A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C705DC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c705ec
	if (!cr6.eq) goto loc_82C705EC;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C705EC:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C70608;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,575
	ctx.r5.u64 = ctx.r5.u64 | 575;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C7061C;
	sub_82A69A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70624;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70634
	if (!cr6.eq) goto loc_82C70634;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C70634:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C70650;
	sub_8259CC28(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,45
	ctx.r5.u64 = ctx.r5.u64 | 45;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C70664;
	sub_82A69A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c80d40
	ctx.lr = 0x82C7066C;
	sub_82C80D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c6f630
	ctx.lr = 0x82C70674;
	sub_82C6F630(ctx, base);
	// li r4,230
	ctx.r4.s64 = 230;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82C70680;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C70690;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7069C"))) PPC_WEAK_FUNC(sub_82C7069C);
PPC_FUNC_IMPL(__imp__sub_82C7069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C706A0"))) PPC_WEAK_FUNC(sub_82C706A0);
PPC_FUNC_IMPL(__imp__sub_82C706A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C706A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C706B4;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C706BC;
	sub_82921C20(ctx, base);
	// bl 0x82deabd8
	ctx.lr = 0x82C706C0;
	sub_82DEABD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c80d40
	ctx.lr = 0x82C706CC;
	sub_82C80D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c706e4
	if (!cr6.eq) goto loc_82C706E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82c6f508
	ctx.lr = 0x82C706E4;
	sub_82C6F508(ctx, base);
loc_82C706E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c6f0f8
	ctx.lr = 0x82C706EC;
	sub_82C6F0F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c6f298
	ctx.lr = 0x82C706F4;
	sub_82C6F298(ctx, base);
	// lbz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c70e00
	if (cr6.eq) goto loc_82C70E00;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70708;
	sub_82D19A78(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c7071c
	if (!cr6.eq) goto loc_82C7071C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C7071C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r30,32(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r29,r11,10900
	ctx.r29.s64 = ctx.r11.s64 + 10900;
	// addi r4,r29,-284
	ctx.r4.s64 = ctx.r29.s64 + -284;
	// bl 0x837b0c10
	ctx.lr = 0x82C70734;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82C70744;
	sub_82A6A1B8(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r26,r10,98
	ctx.r26.u64 = ctx.r10.u64 | 98;
	// bne cr6,0x82c70790
	if (!cr6.eq) goto loc_82C70790;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70760;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70770
	if (!cr6.eq) goto loc_82C70770;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70770:
	// addi r4,r29,-268
	ctx.r4.s64 = ctx.r29.s64 + -268;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C7077C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C7078C;
	sub_82A69A28(ctx, base);
	// b 0x82c70800
	goto loc_82C70800;
loc_82C70790:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83161f10
	ctx.lr = 0x82C707A4;
	sub_83161F10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C707AC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c707bc
	if (!cr6.eq) goto loc_82C707BC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C707BC:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c707d0
	if (!cr6.lt) goto loc_82C707D0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82C707D0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C707D8;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,-252
	ctx.r4.s64 = ctx.r29.s64 + -252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C707E8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C707F8;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82C70800;
	sub_8387E8E0(ctx, base);
loc_82C70800:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70808;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-236
	ctx.r4.s64 = ctx.r29.s64 + -236;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C70820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// bl 0x82d8c1f8
	ctx.lr = 0x82C7082C;
	sub_82D8C1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c708a4
	if (cr6.eq) goto loc_82C708A4;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c70860
	if (!cr6.eq) goto loc_82C70860;
	// lbz r11,53(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 53);
	// li r3,3
	ctx.r3.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c70858
	if (!cr6.eq) goto loc_82C70858;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82C70858:
	// bl 0x82d8c1f8
	ctx.lr = 0x82C7085C;
	sub_82D8C1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C70860:
	// lbz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 100);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c70880
	if (!cr6.eq) goto loc_82C70880;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C7087C;
	sub_82D2AEC8(ctx, base);
	// b 0x82c708a4
	goto loc_82C708A4;
loc_82C70880:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C70888;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C708A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C708A4:
	// lbz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c708ec
	if (cr6.eq) goto loc_82C708EC;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c708ec
	if (!cr6.eq) goto loc_82C708EC;
	// addi r3,r29,-220
	ctx.r3.s64 = ctx.r29.s64 + -220;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C708D0;
	sub_82D2AD40(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,449
	ctx.r4.u64 = ctx.r4.u64 | 449;
	// bl 0x82d2ada8
	ctx.lr = 0x82C708E0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C708EC;
	sub_83103100(ctx, base);
loc_82C708EC:
	// lbz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 60);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c70a58
	if (cr6.eq) goto loc_82C70A58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70904;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70914
	if (!cr6.eq) goto loc_82C70914;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70914:
	// addi r4,r29,-200
	ctx.r4.s64 = ctx.r29.s64 + -200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70920;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,673
	ctx.r5.u64 = ctx.r5.u64 | 673;
	// bl 0x82a69a28
	ctx.lr = 0x82C70934;
	sub_82A69A28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C7093C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c7094c
	if (!cr6.eq) goto loc_82C7094C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C7094C:
	// addi r4,r29,-184
	ctx.r4.s64 = ctx.r29.s64 + -184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70958;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,672
	ctx.r5.u64 = ctx.r5.u64 | 672;
	// bl 0x82a69a28
	ctx.lr = 0x82C7096C;
	sub_82A69A28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c709c8
	if (!cr6.eq) goto loc_82C709C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70990;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c709a0
	if (!cr6.eq) goto loc_82C709A0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C709A0:
	// addi r4,r29,-168
	ctx.r4.s64 = ctx.r29.s64 + -168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C709AC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C709BC;
	sub_82A69A28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C709C4;
	sub_8387E8E0(ctx, base);
	// b 0x82c70aa4
	goto loc_82C70AA4;
loc_82C709C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83161f10
	ctx.lr = 0x82C709DC;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82C709F0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82C709F8;
	sub_8387E8E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70A00;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70a10
	if (!cr6.eq) goto loc_82C70A10;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70A10:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c70a24
	if (!cr6.lt) goto loc_82C70A24;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82C70A24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70A2C;
	sub_837B0C10(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C70A3C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C70A4C;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C70A54;
	sub_8387E8E0(ctx, base);
	// b 0x82c70aa4
	goto loc_82C70AA4;
loc_82C70A58:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c70aa4
	if (!cr6.eq) goto loc_82C70AA4;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C70A74;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70a84
	if (!cr6.eq) goto loc_82C70A84;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70A84:
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70A90;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,594
	ctx.r5.u64 = ctx.r5.u64 | 594;
	// bl 0x82a69a28
	ctx.lr = 0x82C70AA4;
	sub_82A69A28(ctx, base);
loc_82C70AA4:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,108(r28)
	PPC_STORE_U8(ctx.r28.u32 + 108, ctx.r9.u8);
	// lbz r8,54(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 54);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c70b08
	if (cr6.eq) goto loc_82C70B08;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c70b08
	if (!cr6.eq) goto loc_82C70B08;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70AD8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70ae8
	if (!cr6.eq) goto loc_82C70AE8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70AE8:
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70AF4;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,445
	ctx.r5.u64 = ctx.r5.u64 | 445;
	// bl 0x82a69a28
	ctx.lr = 0x82C70B08;
	sub_82A69A28(ctx, base);
loc_82C70B08:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82c70c2c
	if (!cr6.eq) goto loc_82C70C2C;
	// addi r3,r29,-112
	ctx.r3.s64 = ctx.r29.s64 + -112;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C70B28;
	sub_82D2AD40(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,448
	ctx.r4.u64 = ctx.r4.u64 | 448;
	// bl 0x82d2ada8
	ctx.lr = 0x82C70B38;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C70B44;
	sub_83103100(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70B4C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70b5c
	if (!cr6.eq) goto loc_82C70B5C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70B5C:
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70B68;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,448
	ctx.r5.u64 = ctx.r5.u64 | 448;
	// bl 0x82a69a28
	ctx.lr = 0x82C70B7C;
	sub_82A69A28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70B84;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70b94
	if (!cr6.eq) goto loc_82C70B94;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70B94:
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70BA0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C70BB0;
	sub_82A69A28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70BB8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70bc8
	if (!cr6.eq) goto loc_82C70BC8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70BC8:
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70BD4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C70BE4;
	sub_82A69A28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70BEC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70bfc
	if (!cr6.eq) goto loc_82C70BFC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70BFC:
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70C08;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C70C18;
	sub_82A69A28(ctx, base);
	// stb r25,68(r27)
	PPC_STORE_U8(ctx.r27.u32 + 68, ctx.r25.u8);
	// stw r25,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C70C2C:
	// lbz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c70db4
	if (cr6.eq) goto loc_82C70DB4;
	// addi r4,r29,-786
	ctx.r4.s64 = ctx.r29.s64 + -786;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C70C44;
	sub_837B0C10(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82C70C48;
	sub_82D860F0(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82c70d28
	if (!cr6.eq) goto loc_82C70D28;
	// ori r4,r4,546
	ctx.r4.u64 = ctx.r4.u64 | 546;
	// bl 0x82d042a8
	ctx.lr = 0x82C70C64;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x82C70C74;
	sub_825A1EB8(ctx, base);
	// addi r4,r29,-785
	ctx.r4.s64 = ctx.r29.s64 + -785;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82C70C80;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,446
	ctx.r4.u64 = ctx.r4.u64 | 446;
	// bl 0x82d042a8
	ctx.lr = 0x82C70C90;
	sub_82D042A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82C70CA4;
	sub_825A1DA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70CAC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70cbc
	if (!cr6.eq) goto loc_82C70CBC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70CBC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c70cd0
	if (!cr6.lt) goto loc_82C70CD0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C70CD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70CD8;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C70CE8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C70CF8;
	sub_82A69AD0(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c70d10
	if (cr6.eq) goto loc_82C70D10;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x82d84728
	ctx.lr = 0x82C70D10;
	sub_82D84728(ctx, base);
loc_82C70D10:
	// li r4,105
	ctx.r4.s64 = 105;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C70D1C;
	sub_82D17DA0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82C70D24;
	sub_8387E8E0(ctx, base);
	// b 0x82c70d74
	goto loc_82C70D74;
loc_82C70D28:
	// ori r4,r4,579
	ctx.r4.u64 = ctx.r4.u64 | 579;
	// bl 0x82d042a8
	ctx.lr = 0x82C70D30;
	sub_82D042A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C70D38;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c70d48
	if (!cr6.eq) goto loc_82C70D48;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C70D48:
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C70D54;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,454
	ctx.r5.u64 = ctx.r5.u64 | 454;
	// bl 0x82a69a28
	ctx.lr = 0x82C70D68;
	sub_82A69A28(ctx, base);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C70D74;
	sub_82D17DA0(ctx, base);
loc_82C70D74:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c70dac
	if (cr6.eq) goto loc_82C70DAC;
	// addi r3,r29,-20
	ctx.r3.s64 = ctx.r29.s64 + -20;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C70D94;
	sub_82D2AD40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82C70DA0;
	sub_82D2AAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C70DAC;
	sub_83103100(ctx, base);
loc_82C70DAC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C70DB4;
	sub_8387E8E0(ctx, base);
loc_82C70DB4:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c70dfc
	if (!cr6.eq) goto loc_82C70DFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ad40
	ctx.lr = 0x82C70DD4;
	sub_82D2AD40(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,453
	ctx.r4.u64 = ctx.r4.u64 | 453;
	// bl 0x82d2ada8
	ctx.lr = 0x82C70DE4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C70DF0;
	sub_83103100(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C70DFC;
	sub_82D17DA0(ctx, base);
loc_82C70DFC:
	// stb r25,68(r27)
	PPC_STORE_U8(ctx.r27.u32 + 68, ctx.r25.u8);
loc_82C70E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C70E0C"))) PPC_WEAK_FUNC(sub_82C70E0C);
PPC_FUNC_IMPL(__imp__sub_82C70E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C70E10"))) PPC_WEAK_FUNC(sub_82C70E10);
PPC_FUNC_IMPL(__imp__sub_82C70E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,301(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 301);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,12396
	ctx.r5.s64 = ctx.r11.s64 + 12396;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C70E2C"))) PPC_WEAK_FUNC(sub_82C70E2C);
PPC_FUNC_IMPL(__imp__sub_82C70E2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C70E30"))) PPC_WEAK_FUNC(sub_82C70E30);
PPC_FUNC_IMPL(__imp__sub_82C70E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,12488
	ctx.r9.s64 = ctx.r11.s64 + 12488;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d9b958
	ctx.lr = 0x82C70E6C;
	sub_82D9B958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82C70E74;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c70e8c
	if (cr6.eq) goto loc_82C70E8C;
	// bl 0x82416268
	ctx.lr = 0x82C70E88;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C70E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C70EA4"))) PPC_WEAK_FUNC(sub_82C70EA4);
PPC_FUNC_IMPL(__imp__sub_82C70EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C70EA8"))) PPC_WEAK_FUNC(sub_82C70EA8);
PPC_FUNC_IMPL(__imp__sub_82C70EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C70EB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C70EBC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c70ed4
	if (!cr6.eq) goto loc_82C70ED4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C70ED4:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82C70EDC;
	sub_8332F198(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C70EEC;
	sub_82DAB6D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C70EF8;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C70EFC;
	sub_83102DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82d97688
	ctx.lr = 0x82C70F0C;
	sub_82D97688(ctx, base);
	// addi r23,r27,96
	ctx.r23.s64 = ctx.r27.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d9d040
	ctx.lr = 0x82C70F1C;
	sub_82D9D040(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c70fc4
	if (cr6.eq) goto loc_82C70FC4;
	// li r30,28
	ctx.r30.s64 = 28;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82C70F30:
	// addi r29,r28,60
	ctx.r29.s64 = ctx.r28.s64 + 60;
	// lwz r22,1856(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1856);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8b758
	ctx.lr = 0x82C70F40;
	sub_82D8B758(ctx, base);
	// cmpw cr6,r22,r3
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r3.s32, xer);
	// bne cr6,0x82c70f54
	if (!cr6.eq) goto loc_82C70F54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d9d2b8
	ctx.lr = 0x82C70F54;
	sub_82D9D2B8(ctx, base);
loc_82C70F54:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r10,r8,r30
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c70fb4
	if (cr0.eq) goto loc_82C70FB4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x82c70fd4
	if (!cr6.gt) goto loc_82C70FD4;
loc_82C70F78:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// bne cr6,0x82c70f94
	if (!cr6.eq) goto loc_82C70F94;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r25,216(r11)
	PPC_STORE_U8(ctx.r11.u32 + 216, ctx.r25.u8);
loc_82C70F94:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r7,r30
	ctx.r10.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82c70f78
	if (cr6.gt) goto loc_82C70F78;
loc_82C70FB4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,104
	ctx.r28.s64 = ctx.r28.s64 + 104;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c70f30
	if (!cr6.eq) goto loc_82C70F30;
loc_82C70FC4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x829259c8
	ctx.lr = 0x82C70FCC;
	sub_829259C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C70FD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C70FE0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C70FE0"))) PPC_WEAK_FUNC(sub_82C70FE0);
PPC_FUNC_IMPL(__imp__sub_82C70FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C70FE8;
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
	// bl 0x8308e078
	ctx.lr = 0x82C71000;
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
	ctx.lr = 0x82C71018;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,12488
	ctx.r9.s64 = ctx.r11.s64 + 12488;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9b910
	ctx.lr = 0x82C7103C;
	sub_82D9B910(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r27,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r27.u8);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stb r28,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r7,12300
	ctx.r29.s64 = ctx.r7.s64 + 12300;
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// bl 0x82d20ae0
	ctx.lr = 0x82C7105C;
	sub_82D20AE0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82C7106C;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9d040
	ctx.lr = 0x82C71074;
	sub_82D9D040(ctx, base);
	// li r10,84
	ctx.r10.s64 = 84;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r31,216
	ctx.r9.s64 = ctx.r31.s64 + 216;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C71084:
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82c71084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C71084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c70ea8
	ctx.lr = 0x82C71098;
	sub_82C70EA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82c710c8
	if (!cr6.eq) goto loc_82C710C8;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,210
	ctx.r4.u64 = ctx.r4.u64 | 210;
	// bl 0x82d21730
	ctx.lr = 0x82C710B4;
	sub_82D21730(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C710C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82C710D4;
	sub_82D19788(ctx, base);
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c710f4
	if (cr6.eq) goto loc_82C710F4;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,465
	ctx.r5.u64 = ctx.r5.u64 | 465;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82C710F4;
	sub_82D20EB8(ctx, base);
loc_82C710F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C71100"))) PPC_WEAK_FUNC(sub_82C71100);
PPC_FUNC_IMPL(__imp__sub_82C71100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c71128
	if (cr6.lt) goto loc_82C71128;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c7112c
	goto loc_82C7112C;
loc_82C71128:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C7112C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C71148;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71164
	if (cr6.eq) goto loc_82C71164;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c70fe0
	ctx.lr = 0x82C71160;
	sub_82C70FE0(ctx, base);
	// b 0x82c71168
	goto loc_82C71168;
loc_82C71164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C71168:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C71180"))) PPC_WEAK_FUNC(sub_82C71180);
PPC_FUNC_IMPL(__imp__sub_82C71180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c711a8
	if (cr6.lt) goto loc_82C711A8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c711ac
	goto loc_82C711AC;
loc_82C711A8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C711AC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C711C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c711e4
	if (cr6.eq) goto loc_82C711E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c70fe0
	ctx.lr = 0x82C711E0;
	sub_82C70FE0(ctx, base);
	// b 0x82c711e8
	goto loc_82C711E8;
loc_82C711E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C711E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C71200"))) PPC_WEAK_FUNC(sub_82C71200);
PPC_FUNC_IMPL(__imp__sub_82C71200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C71208;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C71214;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c712bc
	if (cr6.eq) goto loc_82C712BC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C71224;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C71230;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82C7123C;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,104
	ctx.r10.s64 = 104;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c712bc
	if (!cr6.gt) goto loc_82C712BC;
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b56298
	ctx.lr = 0x82C71268;
	sub_82B56298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97680
	ctx.lr = 0x82C71270;
	sub_82D97680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82d97618
	ctx.lr = 0x82C71280;
	sub_82D97618(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// bl 0x82d97ce8
	ctx.lr = 0x82C712A8;
	sub_82D97CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19858
	ctx.lr = 0x82C712B4;
	sub_82D19858(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378e240
	ctx.lr = 0x82C712BC;
	sub_8378E240(ctx, base);
loc_82C712BC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C712C4"))) PPC_WEAK_FUNC(sub_82C712C4);
PPC_FUNC_IMPL(__imp__sub_82C712C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C712C8"))) PPC_WEAK_FUNC(sub_82C712C8);
PPC_FUNC_IMPL(__imp__sub_82C712C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C712D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C712E0;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82C712EC;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,104
	ctx.r10.s64 = 104;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c71334
	if (!cr6.gt) goto loc_82C71334;
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b56298
	ctx.lr = 0x82C71318;
	sub_82B56298(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addic r10,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfe r8,r10,r29
	temp.u8 = (~ctx.r10.u32 + ctx.r29.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r29.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r8,216(r9)
	PPC_STORE_U8(ctx.r9.u32 + 216, ctx.r8.u8);
	// bl 0x8378e240
	ctx.lr = 0x82C71334;
	sub_8378E240(ctx, base);
loc_82C71334:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7133C"))) PPC_WEAK_FUNC(sub_82C7133C);
PPC_FUNC_IMPL(__imp__sub_82C7133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C71340"))) PPC_WEAK_FUNC(sub_82C71340);
PPC_FUNC_IMPL(__imp__sub_82C71340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C71348;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C71354;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C7135C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7156c
	if (cr6.eq) goto loc_82C7156C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C71370;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C71378;
	sub_82D33DB0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r11,12368
	ctx.r28.s64 = ctx.r11.s64 + 12368;
	// beq cr6,0x82c713b4
	if (cr6.eq) goto loc_82C713B4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C71398;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C713B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C713B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C713BC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C713D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7156c
	if (cr6.eq) goto loc_82C7156C;
	// bl 0x82d86078
	ctx.lr = 0x82C713E4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7156c
	if (cr6.eq) goto loc_82C7156C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82C713F8;
	sub_8332F198(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C71400;
	sub_82DAB6D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,1856(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1856);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82d8b938
	ctx.lr = 0x82C71414;
	sub_82D8B938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d303d0
	ctx.lr = 0x82C71420;
	sub_82D303D0(ctx, base);
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829259c8
	ctx.lr = 0x82C7142C;
	sub_829259C8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829259c8
	ctx.lr = 0x82C71438;
	sub_829259C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C71444;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bge cr6,0x82c71458
	if (!cr6.lt) goto loc_82C71458;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C71454;
	sub_82D33C10(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_82C71458:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82C7146C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83165d78
	ctx.lr = 0x82C71480;
	sub_83165D78(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c71494
	if (!cr6.lt) goto loc_82C71494;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C71494:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C714AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C714B4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7152c
	if (cr6.eq) goto loc_82C7152C;
loc_82C714BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C714C8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71518
	if (cr6.eq) goto loc_82C71518;
	// lbz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 300);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82c714fc
	if (cr6.eq) goto loc_82C714FC;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// bctrl 
	ctx.lr = 0x82C714F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82c71508
	goto loc_82C71508;
loc_82C714FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82C71504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,255
	ctx.r4.s64 = 255;
loc_82C71508:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21408
	ctx.lr = 0x82C71518;
	sub_82D21408(ctx, base);
loc_82C71518:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82C71524;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c714bc
	if (cr6.lt) goto loc_82C714BC;
loc_82C7152C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829259c8
	ctx.lr = 0x82C71534;
	sub_829259C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d20f50
	ctx.lr = 0x82C7154C;
	sub_82D20F50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c7156c
	if (cr6.lt) goto loc_82C7156C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C7156C;
	sub_825952B8(ctx, base);
loc_82C7156C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C71578"))) PPC_WEAK_FUNC(sub_82C71578);
PPC_FUNC_IMPL(__imp__sub_82C71578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C71580;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c71684
	if (cr6.eq) goto loc_82C71684;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82C715A0;
	sub_83102DB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,104
	ctx.r11.s64 = 104;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r11,r8,r11
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c71684
	if (!cr6.gt) goto loc_82C71684;
	// mulli r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 * 104;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b56298
	ctx.lr = 0x82C715CC;
	sub_82B56298(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r6,204(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82d8ee48
	ctx.lr = 0x82C715F8;
	sub_82D8EE48(ctx, base);
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,12384
	ctx.r30.s64 = ctx.r11.s64 + 12384;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C7161C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71634
	if (cr6.eq) goto loc_82C71634;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d291e0
	ctx.lr = 0x82C71634;
	sub_82D291E0(ctx, base);
loc_82C71634:
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
	ctx.lr = 0x82C7164C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71674
	if (cr6.eq) goto loc_82C71674;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 216);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c71670
	if (!cr6.eq) goto loc_82C71670;
	// bl 0x82d3c750
	ctx.lr = 0x82C7166C;
	sub_82D3C750(ctx, base);
	// b 0x82c71674
	goto loc_82C71674;
loc_82C71670:
	// bl 0x82d3c780
	ctx.lr = 0x82C71674;
	sub_82D3C780(ctx, base);
loc_82C71674:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C7167C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8378e240
	ctx.lr = 0x82C71684;
	sub_8378E240(ctx, base);
loc_82C71684:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7168C"))) PPC_WEAK_FUNC(sub_82C7168C);
PPC_FUNC_IMPL(__imp__sub_82C7168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C71690"))) PPC_WEAK_FUNC(sub_82C71690);
PPC_FUNC_IMPL(__imp__sub_82C71690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82C71698;
	__savegprlr_18(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c716bc
	if (!cr6.eq) goto loc_82C716BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19858
	ctx.lr = 0x82C716B4;
	sub_82D19858(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C716BC:
	// bl 0x82d86078
	ctx.lr = 0x82C716C0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c718ac
	if (cr6.eq) goto loc_82C718AC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C716D0;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r20,96
	ctx.r3.s64 = ctx.r20.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82C716DC;
	sub_83102DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C716E8;
	sub_82D97688(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C716F4;
	sub_82D97688(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ad6338
	ctx.lr = 0x82C71700;
	sub_82AD6338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97a20
	ctx.lr = 0x82C71708;
	sub_82D97A20(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r19,28
	ctx.r19.s64 = 28;
	// li r23,0
	ctx.r23.s64 = 0;
	// subf r10,r18,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r18.s64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// divw r26,r10,r19
	ctx.r26.s32 = PPCDivide(ctx.r10.s32, ctx.r19.s32);
	// li r21,-1
	ctx.r21.s64 = -1;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82c71790
	if (cr6.eq) goto loc_82C71790;
	// addi r31,r18,20
	ctx.r31.s64 = ctx.r18.s64 + 20;
loc_82C71738:
	// lwz r25,1856(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// ble cr6,0x82c718b4
	if (!cr6.gt) goto loc_82C718B4;
	// addi r29,r31,-12
	ctx.r29.s64 = ctx.r31.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8b758
	ctx.lr = 0x82C71750;
	sub_82D8B758(ctx, base);
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, xer);
	// beq cr6,0x82c71780
	if (cr6.eq) goto loc_82C71780;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d97ce8
	ctx.lr = 0x82C7177C;
	sub_82D97CE8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82C71780:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82c71738
	if (cr6.lt) goto loc_82C71738;
loc_82C71790:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r27,104
	ctx.r27.s64 = 104;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c71890
	if (cr0.eq) goto loc_82C71890;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, xer);
	// ble cr6,0x82c718c0
	if (!cr6.gt) goto loc_82C718C0;
loc_82C717C0:
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b56298
	ctx.lr = 0x82C717CC;
	sub_82B56298(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 216);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c71820
	if (!cr6.eq) goto loc_82C71820;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r25,r9,r19
	ctx.r25.s32 = PPCDivide(ctx.r9.s32, ctx.r19.s32);
	// bl 0x82d97680
	ctx.lr = 0x82C717F8;
	sub_82D97680(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// bl 0x82d97ce8
	ctx.lr = 0x82C71820;
	sub_82D97CE8(ctx, base);
loc_82C71820:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c7183c
	if (cr6.lt) goto loc_82C7183C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C7183C;
	sub_825952B8(ctx, base);
loc_82C7183C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r23.u8);
	// blt cr6,0x82c71864
	if (cr6.lt) goto loc_82C71864;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82C71864;
	sub_825952B8(ctx, base);
loc_82C71864:
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// stb r23,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r23.u8);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c717c0
	if (cr6.gt) goto loc_82C717C0;
loc_82C71890:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19858
	ctx.lr = 0x82C7189C;
	sub_82D19858(ctx, base);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82c718ac
	if (cr6.eq) goto loc_82C718AC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82416268
	ctx.lr = 0x82C718AC;
	sub_82416268(ctx, base);
loc_82C718AC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C718B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C718C0;
	sub_831CC188(ctx, base);
loc_82C718C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C718CC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C718CC"))) PPC_WEAK_FUNC(sub_82C718CC);
PPC_FUNC_IMPL(__imp__sub_82C718CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C718D0"))) PPC_WEAK_FUNC(sub_82C718D0);
PPC_FUNC_IMPL(__imp__sub_82C718D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C718D8;
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
	ctx.lr = 0x82C718F0;
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
	ctx.lr = 0x82C71908;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// addi r9,r11,13392
	ctx.r9.s64 = ctx.r11.s64 + 13392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,101
	ctx.r3.s64 = ctx.r31.s64 + 101;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r7,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r7.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82C7193C;
	sub_831CDCF0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-7224(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7224);
	// bl 0x82d20ae0
	ctx.lr = 0x82C7194C;
	sub_82D20AE0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,13180
	ctx.r4.s64 = ctx.r5.s64 + 13180;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82C71960;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7196C"))) PPC_WEAK_FUNC(sub_82C7196C);
PPC_FUNC_IMPL(__imp__sub_82C7196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C71970"))) PPC_WEAK_FUNC(sub_82C71970);
PPC_FUNC_IMPL(__imp__sub_82C71970) {
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
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c719d8
	if (!cr6.eq) goto loc_82C719D8;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C71994;
	sub_82D1C1A8(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r10,-7088
	ctx.r9.s64 = ctx.r10.s64 + -7088;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bge cr6,0x82c719d8
	if (!cr6.lt) goto loc_82C719D8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r10,101(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 101);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82c719d4
	if (cr6.eq) goto loc_82C719D4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C719D4:
	// bl 0x82d19788
	ctx.lr = 0x82C719D8;
	sub_82D19788(ctx, base);
loc_82C719D8:
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

__attribute__((alias("__imp__sub_82C719F0"))) PPC_WEAK_FUNC(sub_82C719F0);
PPC_FUNC_IMPL(__imp__sub_82C719F0) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82C71A0C;
	sub_82D1C1A8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bge cr6,0x82c71a64
	if (!cr6.lt) goto loc_82C71A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C71A1C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,13300
	ctx.r4.s64 = ctx.r11.s64 + 13300;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C71A38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71a64
	if (cr6.eq) goto loc_82C71A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C71A4C;
	sub_82D1C1A8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-6728
	ctx.r9.s64 = ctx.r11.s64 + -6728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d39ab8
	ctx.lr = 0x82C71A64;
	sub_82D39AB8(ctx, base);
loc_82C71A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C71A7C"))) PPC_WEAK_FUNC(sub_82C71A7C);
PPC_FUNC_IMPL(__imp__sub_82C71A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C71A80"))) PPC_WEAK_FUNC(sub_82C71A80);
PPC_FUNC_IMPL(__imp__sub_82C71A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13392
	ctx.r9.s64 = ctx.r11.s64 + 13392;
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
	ctx.lr = 0x82C71AB8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c71ad0
	if (cr6.eq) goto loc_82C71AD0;
	// bl 0x82416268
	ctx.lr = 0x82C71ACC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C71AD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C71AE8"))) PPC_WEAK_FUNC(sub_82C71AE8);
PPC_FUNC_IMPL(__imp__sub_82C71AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c71b10
	if (cr6.lt) goto loc_82C71B10;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c71b14
	goto loc_82C71B14;
loc_82C71B10:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C71B14:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C71B30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71b50
	if (cr6.eq) goto loc_82C71B50;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c718d0
	ctx.lr = 0x82C71B48;
	sub_82C718D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c71b54
	if (!cr6.eq) goto loc_82C71B54;
loc_82C71B50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C71B54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C71B6C"))) PPC_WEAK_FUNC(sub_82C71B6C);
PPC_FUNC_IMPL(__imp__sub_82C71B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C71B70"))) PPC_WEAK_FUNC(sub_82C71B70);
PPC_FUNC_IMPL(__imp__sub_82C71B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c71b98
	if (cr6.lt) goto loc_82C71B98;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c71b9c
	goto loc_82C71B9C;
loc_82C71B98:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C71B9C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C71BB8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71bd8
	if (cr6.eq) goto loc_82C71BD8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c718d0
	ctx.lr = 0x82C71BD0;
	sub_82C718D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c71bdc
	if (!cr6.eq) goto loc_82C71BDC;
loc_82C71BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C71BDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C71BF4"))) PPC_WEAK_FUNC(sub_82C71BF4);
PPC_FUNC_IMPL(__imp__sub_82C71BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C71BF8"))) PPC_WEAK_FUNC(sub_82C71BF8);
PPC_FUNC_IMPL(__imp__sub_82C71BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82C71C14;
	sub_82D1C1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C71C1C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71c70
	if (cr6.eq) goto loc_82C71C70;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C71C2C;
	sub_82DAB6D0(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,-7088
	ctx.r11.s64 = ctx.r10.s64 + -7088;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,1856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1856, ctx.r8.u32);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82c71c60
	if (cr6.lt) goto loc_82C71C60;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82C71C60:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C71C70;
	sub_82D20DA8(ctx, base);
loc_82C71C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C71C88"))) PPC_WEAK_FUNC(sub_82C71C88);
PPC_FUNC_IMPL(__imp__sub_82C71C88) {
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
	// beq cr6,0x82c71ddc
	if (cr6.eq) goto loc_82C71DDC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c71ddc
	if (!cr6.eq) goto loc_82C71DDC;
	// bl 0x82d86078
	ctx.lr = 0x82C71CB8;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c71de8
	if (cr6.eq) goto loc_82C71DE8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C71CCC;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C71CD0;
	sub_83767D18(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82C71CE0;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97688
	ctx.lr = 0x82C71CE4;
	sub_82D97688(ctx, base);
	// li r10,84
	ctx.r10.s64 = 84;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// li r9,84
	ctx.r9.s64 = 84;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C71CF8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c71cf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C71CF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
	// lbz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 100);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c71ddc
	if (cr6.eq) goto loc_82C71DDC;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,28
	ctx.r6.s64 = 28;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r9,r8,r6
	ctx.r9.s32 = PPCDivide(ctx.r8.s32, ctx.r6.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c71dd4
	if (cr0.eq) goto loc_82C71DD4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c71e00
	if (!cr6.gt) goto loc_82C71E00;
loc_82C71D48:
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,74
	cr6.compare<int32_t>(ctx.r10.s32, 74, xer);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82c71d84
	if (!cr6.eq) goto loc_82C71D84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r4,r5,r6
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r6.s32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c71e0c
	if (!cr6.gt) goto loc_82C71E0C;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// b 0x82c71db0
	goto loc_82C71DB0;
loc_82C71D84:
	// cmpwi cr6,r10,75
	cr6.compare<int32_t>(ctx.r10.s32, 75, xer);
	// bne cr6,0x82c71db0
	if (!cr6.eq) goto loc_82C71DB0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r4,r5,r6
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r6.s32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c71e18
	if (!cr6.gt) goto loc_82C71E18;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
loc_82C71DB0:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r5,r6
	ctx.r9.s32 = PPCDivide(ctx.r5.s32, ctx.r6.s32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c71d48
	if (cr6.gt) goto loc_82C71D48;
loc_82C71DD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
loc_82C71DDC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19858
	ctx.lr = 0x82C71DE8;
	sub_82D19858(ctx, base);
loc_82C71DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C71E00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C71E0C;
	sub_831CC188(ctx, base);
loc_82C71E0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C71E18;
	sub_831CC188(ctx, base);
loc_82C71E18:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C71E24;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C71E24"))) PPC_WEAK_FUNC(sub_82C71E24);
PPC_FUNC_IMPL(__imp__sub_82C71E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C71E28"))) PPC_WEAK_FUNC(sub_82C71E28);
PPC_FUNC_IMPL(__imp__sub_82C71E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82C71E30;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r20,r3,101
	ctx.r20.s64 = ctx.r3.s64 + 101;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r28,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r28.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82C71E54;
	sub_831CDCF0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C71E58;
	sub_831156E8(ctx, base);
	// lwz r19,48(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d86078
	ctx.lr = 0x82C71E60;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c721c0
	if (cr6.eq) goto loc_82C721C0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C71E74;
	sub_82DAB6D0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832d8
	ctx.lr = 0x82C71E84;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x82C71E88;
	sub_82DA4368(ctx, base);
	// lis r17,0
	ctx.r17.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// ori r17,r17,65535
	ctx.r17.u64 = ctx.r17.u64 | 65535;
	// bl 0x82d97688
	ctx.lr = 0x82C71E9C;
	sub_82D97688(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,28
	ctx.r26.s64 = 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r10,r9,r26
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c71f94
	if (cr0.eq) goto loc_82C71F94;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// ble cr6,0x82c72078
	if (!cr6.gt) goto loc_82C72078;
loc_82C71ECC:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c71ee0
	if (cr6.eq) goto loc_82C71EE0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
loc_82C71EE0:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82c71ef0
	if (cr6.eq) goto loc_82C71EF0;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
loc_82C71EF0:
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82d8b758
	ctx.lr = 0x82C71EF8;
	sub_82D8B758(ctx, base);
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c71f6c
	if (!cr6.eq) goto loc_82C71F6C;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x82c71f6c
	if (cr6.gt) goto loc_82C71F6C;
	// lis r12,-32057
	ctx.r12.s64 = -2100887552;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,7972
	ctx.r12.s64 = ctx.r12.s64 + 7972;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82C71F50;
	case 1:
		goto loc_82C71F60;
	case 2:
		goto loc_82C71F6C;
	case 3:
		goto loc_82C71F6C;
	case 4:
		goto loc_82C71F6C;
	case 5:
		goto loc_82C71F6C;
	case 6:
		goto loc_82C71F6C;
	case 7:
		goto loc_82C71F6C;
	case 8:
		goto loc_82C71F6C;
	case 9:
		goto loc_82C71F58;
	case 10:
		goto loc_82C71F68;
	default:
		return;
	}
	// lwz r22,8016(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8016);
	// lwz r22,8032(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8032);
	// lwz r22,8044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// lwz r22,8044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// lwz r22,8044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// lwz r22,8044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// lwz r22,8044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// lwz r22,8044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// lwz r22,8044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// lwz r22,8024(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8024);
	// lwz r22,8040(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8040);
loc_82C71F50:
	// stb r30,110(r24)
	PPC_STORE_U8(ctx.r24.u32 + 110, ctx.r30.u8);
	// b 0x82c71f6c
	goto loc_82C71F6C;
loc_82C71F58:
	// stb r30,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r30.u8);
	// b 0x82c71f6c
	goto loc_82C71F6C;
loc_82C71F60:
	// stb r30,111(r24)
	PPC_STORE_U8(ctx.r24.u32 + 111, ctx.r30.u8);
	// b 0x82c71f6c
	goto loc_82C71F6C;
loc_82C71F68:
	// stb r30,102(r24)
	PPC_STORE_U8(ctx.r24.u32 + 102, ctx.r30.u8);
loc_82C71F6C:
	// stbx r30,r20,r3
	PPC_STORE_U8(ctx.r20.u32 + ctx.r3.u32, ctx.r30.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r30,100(r24)
	PPC_STORE_U8(ctx.r24.u32 + 100, ctx.r30.u8);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r26
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c71ecc
	if (cr6.gt) goto loc_82C71ECC;
loc_82C71F94:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r26,r11,-7088
	ctx.r26.s64 = ctx.r11.s64 + -7088;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// li r23,10
	ctx.r23.s64 = 10;
	// li r29,15
	ctx.r29.s64 = 15;
	// ori r22,r10,65535
	ctx.r22.u64 = ctx.r10.u64 | 65535;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r30,r11,13292
	ctx.r30.s64 = ctx.r11.s64 + 13292;
loc_82C71FBC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C71FCC;
	sub_82D19AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c721b0
	if (cr6.eq) goto loc_82C721B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C71FF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d21408
	ctx.lr = 0x82C72004;
	sub_82D21408(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r27,100
	ctx.r31.s64 = ctx.r27.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82C72024;
	sub_8259CC28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82a69a28
	ctx.lr = 0x82C72034;
	sub_82A69A28(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbzx r9,r20,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c72084
	if (!cr6.eq) goto loc_82C72084;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C72060;
	sub_8259CC28(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C72074;
	sub_82A69A28(ctx, base);
	// b 0x82c721b0
	goto loc_82C721B0;
loc_82C72078:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C72084;
	sub_831CC188(ctx, base);
loc_82C72084:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82c72114
	if (!cr6.eq) goto loc_82C72114;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82c72160
	if (cr6.eq) goto loc_82C72160;
	// clrlwi r4,r18,14
	ctx.r4.u64 = ctx.r18.u32 & 0x3FFFF;
	// cmplw cr6,r18,r22
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r22.u32, xer);
	// ble cr6,0x82c720a4
	if (!cr6.gt) goto loc_82C720A4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82C720A4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8311c148
	ctx.lr = 0x82C720AC;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
loc_82C720C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c720c0
	if (!cr6.eq) goto loc_82C720C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C720E4;
	sub_8259CC28(ctx, base);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82C72100;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C72110;
	sub_82A69AD0(ctx, base);
	// b 0x82c72190
	goto loc_82C72190;
loc_82C72114:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82c72160
	if (!cr6.eq) goto loc_82C72160;
	// cmplwi cr6,r17,65535
	cr6.compare<uint32_t>(ctx.r17.u32, 65535, xer);
	// beq cr6,0x82c72160
	if (cr6.eq) goto loc_82C72160;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8311c628
	ctx.lr = 0x82C72130;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C7213C;
	sub_837B0C10(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C7214C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C7215C;
	sub_82A69AD0(ctx, base);
	// b 0x82c72190
	goto loc_82C72190;
loc_82C72160:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82C7217C;
	sub_8259CC28(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C72190;
	sub_82A69A28(ctx, base);
loc_82C72190:
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c721b0
	if (!cr6.eq) goto loc_82C721B0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C721B0;
	sub_82D2B608(ctx, base);
loc_82C721B0:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// bne 0x82c71fbc
	if (!cr0.eq) goto loc_82C71FBC;
loc_82C721C0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C721C8"))) PPC_WEAK_FUNC(sub_82C721C8);
PPC_FUNC_IMPL(__imp__sub_82C721C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C721D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C721DC;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C721E4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c722b4
	if (cr6.eq) goto loc_82C722B4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C721F8;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C721FC;
	sub_83767D18(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C72204;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d97688
	ctx.lr = 0x82C7220C;
	sub_82D97688(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ad6338
	ctx.lr = 0x82C72218;
	sub_82AD6338(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r10,-7088
	ctx.r8.s64 = ctx.r10.s64 + -7088;
	// li r7,28
	ctx.r7.s64 = 28;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r26,r6,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r4,r27,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r27.s64;
	// addi r31,r27,20
	ctx.r31.s64 = ctx.r27.s64 + 20;
	// divw r11,r4,r7
	ctx.r11.s32 = PPCDivide(ctx.r4.s32, ctx.r7.s32);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82C7224C:
	// addi r30,r31,-12
	ctx.r30.s64 = ctx.r31.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8b758
	ctx.lr = 0x82C72258;
	sub_82D8B758(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, xer);
	// bne cr6,0x82c72284
	if (!cr6.eq) goto loc_82C72284;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x82d978a0
	ctx.lr = 0x82C72284;
	sub_82D978A0(ctx, base);
loc_82C72284:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82c7224c
	if (!cr0.eq) goto loc_82C7224C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c71e28
	ctx.lr = 0x82C72298;
	sub_82C71E28(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82C7229C;
	sub_82D26ED8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82d26b18
	ctx.lr = 0x82C722A4;
	sub_82D26B18(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c722b4
	if (cr6.eq) goto loc_82C722B4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82416268
	ctx.lr = 0x82C722B4;
	sub_82416268(ctx, base);
loc_82C722B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C722BC"))) PPC_WEAK_FUNC(sub_82C722BC);
PPC_FUNC_IMPL(__imp__sub_82C722BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C722C0"))) PPC_WEAK_FUNC(sub_82C722C0);
PPC_FUNC_IMPL(__imp__sub_82C722C0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C722E4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82d1ed60
	ctx.lr = 0x82C722F4;
	sub_82D1ED60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r30,r10,13240
	ctx.r30.s64 = ctx.r10.s64 + 13240;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// bl 0x8259cc28
	ctx.lr = 0x82C7232C;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83165d78
	ctx.lr = 0x82C72340;
	sub_83165D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C72348;
	sub_82D19A78(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82c7235c
	if (!cr6.lt) goto loc_82C7235C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C7235C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C72370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C72378;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C72390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C72398;
	sub_82D19A78(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C723B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C723B8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C723D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c723e8
	if (cr6.eq) goto loc_82C723E8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,608
	ctx.r4.u64 = ctx.r4.u64 | 608;
	// bl 0x82d30340
	ctx.lr = 0x82C723E8;
	sub_82D30340(ctx, base);
loc_82C723E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,66
	ctx.r5.u64 = ctx.r5.u64 | 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C72408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c71e28
	ctx.lr = 0x82C72410;
	sub_82C71E28(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c72430
	if (cr6.lt) goto loc_82C72430;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C72430;
	sub_825952B8(ctx, base);
loc_82C72430:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82C7244C"))) PPC_WEAK_FUNC(sub_82C7244C);
PPC_FUNC_IMPL(__imp__sub_82C7244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C72450"))) PPC_WEAK_FUNC(sub_82C72450);
PPC_FUNC_IMPL(__imp__sub_82C72450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C72458;
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
	ctx.lr = 0x82C7246C;
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
	ctx.lr = 0x82C72484;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14288
	ctx.r9.s64 = ctx.r11.s64 + 14288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-6688(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6688);
	// bl 0x82d20ae0
	ctx.lr = 0x82C724AC;
	sub_82D20AE0(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r6,14024
	ctx.r30.s64 = ctx.r6.s64 + 14024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x82d23390
	ctx.lr = 0x82C724C4;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd6558
	ctx.lr = 0x82C724D8;
	sub_82BD6558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c724f0
	if (cr6.eq) goto loc_82C724F0;
	// bl 0x83103100
	ctx.lr = 0x82C724EC;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C724F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C724F8"))) PPC_WEAK_FUNC(sub_82C724F8);
PPC_FUNC_IMPL(__imp__sub_82C724F8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r7,5
	ctx.r7.s64 = 5;
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r6,r10,13948
	ctx.r6.s64 = ctx.r10.s64 + 13948;
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82cd5d28
	ctx.lr = 0x82C7252C;
	sub_82CD5D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c72540
	if (cr6.eq) goto loc_82C72540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C72540;
	sub_83103100(ctx, base);
loc_82C72540:
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

__attribute__((alias("__imp__sub_82C72554"))) PPC_WEAK_FUNC(sub_82C72554);
PPC_FUNC_IMPL(__imp__sub_82C72554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C72558"))) PPC_WEAK_FUNC(sub_82C72558);
PPC_FUNC_IMPL(__imp__sub_82C72558) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,14188
	ctx.r5.s64 = ctx.r11.s64 + 14188;
	// bl 0x82d20da8
	ctx.lr = 0x82C72574;
	sub_82D20DA8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82C72578;
	sub_82D26ED8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82d26b18
	ctx.lr = 0x82C72580;
	sub_82D26B18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C72590"))) PPC_WEAK_FUNC(sub_82C72590);
PPC_FUNC_IMPL(__imp__sub_82C72590) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82C725B0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7260c
	if (cr6.eq) goto loc_82C7260C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C725C0;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C725C4;
	sub_83767D18(ctx, base);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bgt cr6,0x82c72608
	if (cr6.gt) goto loc_82C72608;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c725ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C725EC;
	// bdzf 4*cr6+eq,0x82c725f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C725F4;
	// bdzf 4*cr6+eq,0x82c725fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C725FC;
	// bne cr6,0x82c72604
	if (!cr6.eq) goto loc_82C72604;
	// lbz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82c72608
	goto loc_82C72608;
loc_82C725EC:
	// lbz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// b 0x82c72608
	goto loc_82C72608;
loc_82C725F4:
	// lbz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// b 0x82c72608
	goto loc_82C72608;
loc_82C725FC:
	// lbz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// b 0x82c72608
	goto loc_82C72608;
loc_82C72604:
	// lbz r31,392(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 392);
loc_82C72608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C7260C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C72624"))) PPC_WEAK_FUNC(sub_82C72624);
PPC_FUNC_IMPL(__imp__sub_82C72624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C72628"))) PPC_WEAK_FUNC(sub_82C72628);
PPC_FUNC_IMPL(__imp__sub_82C72628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C72630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C72644;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c726cc
	if (cr6.eq) goto loc_82C726CC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C72654;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C72658;
	sub_83767D18(ctx, base);
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bgt cr6,0x82c726cc
	if (cr6.gt) goto loc_82C726CC;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c7268c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C7268C;
	// bdzf 4*cr6+eq,0x82c726a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C726A4;
	// bne cr6,0x82c726bc
	if (!cr6.eq) goto loc_82C726BC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C7268C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C726A4:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C726BC:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stb r9,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r9.u8);
loc_82C726CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C726D4"))) PPC_WEAK_FUNC(sub_82C726D4);
PPC_FUNC_IMPL(__imp__sub_82C726D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C726D8"))) PPC_WEAK_FUNC(sub_82C726D8);
PPC_FUNC_IMPL(__imp__sub_82C726D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bge cr6,0x82c72734
	if (!cr6.lt) goto loc_82C72734;
	// bl 0x82d19ba0
	ctx.lr = 0x82C72700;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82c72728
	if (!cr6.eq) goto loc_82C72728;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c72590
	ctx.lr = 0x82C72714;
	sub_82C72590(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x82c7272c
	if (!cr6.eq) goto loc_82C7272C;
loc_82C72728:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C7272C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82C72734;
	sub_82D19788(ctx, base);
loc_82C72734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7274C"))) PPC_WEAK_FUNC(sub_82C7274C);
PPC_FUNC_IMPL(__imp__sub_82C7274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C72750"))) PPC_WEAK_FUNC(sub_82C72750);
PPC_FUNC_IMPL(__imp__sub_82C72750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14288
	ctx.r9.s64 = ctx.r11.s64 + 14288;
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
	ctx.lr = 0x82C72788;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c727a0
	if (cr6.eq) goto loc_82C727A0;
	// bl 0x82416268
	ctx.lr = 0x82C7279C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C727A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C727B8"))) PPC_WEAK_FUNC(sub_82C727B8);
PPC_FUNC_IMPL(__imp__sub_82C727B8) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82C727D0;
	sub_82D1C1A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c726d8
	ctx.lr = 0x82C727DC;
	sub_82C726D8(ctx, base);
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

__attribute__((alias("__imp__sub_82C727F4"))) PPC_WEAK_FUNC(sub_82C727F4);
PPC_FUNC_IMPL(__imp__sub_82C727F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C727F8"))) PPC_WEAK_FUNC(sub_82C727F8);
PPC_FUNC_IMPL(__imp__sub_82C727F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82c72820
	if (cr6.lt) goto loc_82C72820;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c72824
	goto loc_82C72824;
loc_82C72820:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C72824:
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
	ctx.lr = 0x82C72840;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7285c
	if (cr6.eq) goto loc_82C7285C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c72450
	ctx.lr = 0x82C72854;
	sub_82C72450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c72860
	if (!cr6.eq) goto loc_82C72860;
loc_82C7285C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C72860:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C72878"))) PPC_WEAK_FUNC(sub_82C72878);
PPC_FUNC_IMPL(__imp__sub_82C72878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// blt cr6,0x82c728b8
	if (cr6.lt) goto loc_82C728B8;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82C728B8:
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c728c8
	if (cr6.lt) goto loc_82C728C8;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82C728C8:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// bl 0x82d042a8
	ctx.lr = 0x82C728D8;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bge cr6,0x82c72918
	if (!cr6.lt) goto loc_82C72918;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C728F0;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c72918
	if (cr6.eq) goto loc_82C72918;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82C72908;
	sub_82D2D510(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C72918;
	sub_82D291E0(ctx, base);
loc_82C72918:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c72938
	if (cr6.lt) goto loc_82C72938;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C72938;
	sub_825952B8(ctx, base);
loc_82C72938:
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

__attribute__((alias("__imp__sub_82C72950"))) PPC_WEAK_FUNC(sub_82C72950);
PPC_FUNC_IMPL(__imp__sub_82C72950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C72958;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C72964;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c72ae0
	if (cr6.eq) goto loc_82C72AE0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C72974;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C72978;
	sub_83767D18(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,13731
	ctx.r31.s64 = ctx.r11.s64 + 13731;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// bl 0x837b0c10
	ctx.lr = 0x82C72990;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82C7299C;
	sub_837B0C10(ctx, base);
	// lbz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,15
	ctx.r28.s64 = 983040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r28,r28,16960
	ctx.r28.u64 = ctx.r28.u64 | 16960;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c729c0
	if (cr6.eq) goto loc_82C729C0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
loc_82C729C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83161f10
	ctx.lr = 0x82C729D0;
	sub_83161F10(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x82C729E8;
	sub_8259CB28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c72a08
	if (cr6.lt) goto loc_82C72A08;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C72A08;
	sub_825952B8(ctx, base);
loc_82C72A08:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83161f10
	ctx.lr = 0x82C72A2C;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82C72A40;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c72a5c
	if (cr6.lt) goto loc_82C72A5C;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C72A5C;
	sub_825952B8(ctx, base);
loc_82C72A5C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82C72A8C;
	sub_8259CB28(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82C72AAC;
	sub_8259CB28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c26ba8
	ctx.lr = 0x82C72ABC;
	sub_82C26BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c72ad0
	if (cr6.eq) goto loc_82C72AD0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C72AD0;
	sub_83103100(ctx, base);
loc_82C72AD0:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C72AD8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82C72AE0;
	sub_8387E8E0(ctx, base);
loc_82C72AE0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C72AE8"))) PPC_WEAK_FUNC(sub_82C72AE8);
PPC_FUNC_IMPL(__imp__sub_82C72AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C72AF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C72AFC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c72d10
	if (cr6.eq) goto loc_82C72D10;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C72B10;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C72B14;
	sub_83767D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C72B20;
	sub_82D1C1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C72B2C;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82c72b54
	if (!cr6.eq) goto loc_82C72B54;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,14180
	ctx.r11.s64 = ctx.r11.s64 + 14180;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82C72B4C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C72B54:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x82c72d10
	if (cr6.gt) goto loc_82C72D10;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c72bd4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C72BD4;
	// bdzf 4*cr6+eq,0x82c72be4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C72BE4;
	// bdzf 4*cr6+eq,0x82c72c44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C72C44;
	// bne cr6,0x82c72ca4
	if (!cr6.eq) goto loc_82C72CA4;
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c72b90
	if (cr6.eq) goto loc_82C72B90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82C72B90:
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r9,-6552
	ctx.r7.s64 = ctx.r9.s64 + -6552;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c724f8
	ctx.lr = 0x82C72BCC;
	sub_82C724F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C72BD4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c72950
	ctx.lr = 0x82C72BDC;
	sub_82C72950(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C72BE4:
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,200
	ctx.r10.s64 = 200;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c72c00
	if (cr6.eq) goto loc_82C72C00;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_82C72C00:
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r9,-6552
	ctx.r7.s64 = ctx.r9.s64 + -6552;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,76(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82beccd8
	ctx.lr = 0x82C72C3C;
	sub_82BECCD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C72C44:
	// lbz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c72c60
	if (cr6.eq) goto loc_82C72C60;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_82C72C60:
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r9,-6552
	ctx.r7.s64 = ctx.r9.s64 + -6552;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,112(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82beccd8
	ctx.lr = 0x82C72C9C;
	sub_82BECCD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C72CA4:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C72CAC;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d97a20
	ctx.lr = 0x82C72CB4;
	sub_82D97A20(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82C72CC0:
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r6,84
	cr6.compare<uint32_t>(ctx.r6.u32, 84, xer);
	// beq cr6,0x82c72cec
	if (cr6.eq) goto loc_82C72CEC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97ce8
	ctx.lr = 0x82C72CEC;
	sub_82D97CE8(ctx, base);
loc_82C72CEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,84
	cr6.compare<uint32_t>(ctx.r30.u32, 84, xer);
	// blt cr6,0x82c72cc0
	if (cr6.lt) goto loc_82C72CC0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,14180
	ctx.r5.s64 = ctx.r11.s64 + 14180;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C72D10;
	sub_82D20DA8(ctx, base);
loc_82C72D10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C72D18"))) PPC_WEAK_FUNC(sub_82C72D18);
PPC_FUNC_IMPL(__imp__sub_82C72D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C72D20;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83161f10
	ctx.lr = 0x82C72D68;
	sub_83161F10(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C72D80;
	sub_8259CB28(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c72da0
	if (cr6.lt) goto loc_82C72DA0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82C72DA0;
	sub_825952B8(ctx, base);
loc_82C72DA0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// clrldi r4,r29,32
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83161f10
	ctx.lr = 0x82C72DC0;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82C72DD4;
	sub_8259CB28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c72df0
	if (cr6.lt) goto loc_82C72DF0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82C72DF0;
	sub_825952B8(ctx, base);
loc_82C72DF0:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c72878
	ctx.lr = 0x82C72E10;
	sub_82C72878(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c72e2c
	if (cr6.lt) goto loc_82C72E2C;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C72E2C;
	sub_825952B8(ctx, base);
loc_82C72E2C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82c72e54
	if (cr6.lt) goto loc_82C72E54;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C72E54;
	sub_825952B8(ctx, base);
loc_82C72E54:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C72E5C"))) PPC_WEAK_FUNC(sub_82C72E5C);
PPC_FUNC_IMPL(__imp__sub_82C72E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C72E60"))) PPC_WEAK_FUNC(sub_82C72E60);
PPC_FUNC_IMPL(__imp__sub_82C72E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C72E68;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C72E74;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73104
	if (cr6.eq) goto loc_82C73104;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C72E84;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C72E88;
	sub_83767D18(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r11,-6552
	ctx.r27.s64 = ctx.r11.s64 + -6552;
	// lwz r5,-6552(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6552);
	// bl 0x82d19aa8
	ctx.lr = 0x82C72EA4;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73104
	if (cr6.eq) goto loc_82C73104;
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lis r9,108
	ctx.r9.s64 = 7077888;
	// ori r26,r9,98
	ctx.r26.u64 = ctx.r9.u64 | 98;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c72f4c
	if (cr6.eq) goto loc_82C72F4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r31,r10,14164
	ctx.r31.s64 = ctx.r10.s64 + 14164;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-216
	ctx.r10.s64 = ctx.r31.s64 + -216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x82d042a8
	ctx.lr = 0x82C72F08;
	sub_82D042A8(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r31,-216
	ctx.r10.s64 = ctx.r31.s64 + -216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x82d042a8
	ctx.lr = 0x82C72F24;
	sub_82D042A8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c72878
	ctx.lr = 0x82C72F38;
	sub_82C72878(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C72F40;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C72F48;
	sub_8387E8E0(ctx, base);
	// b 0x82c72f74
	goto loc_82C72F74;
loc_82C72F4C:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r10,14164
	ctx.r31.s64 = ctx.r10.s64 + 14164;
	// addi r28,r11,100
	ctx.r28.s64 = ctx.r11.s64 + 100;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x82C72F64;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C72F74;
	sub_82A69A28(ctx, base);
loc_82C72F74:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C72F84;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73104
	if (cr6.eq) goto loc_82C73104;
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c72fb4
	if (cr6.eq) goto loc_82C72FB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82c72d18
	ctx.lr = 0x82C72FB0;
	sub_82C72D18(ctx, base);
	// b 0x82c72fd4
	goto loc_82C72FD4;
loc_82C72FB4:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,100
	ctx.r28.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C72FC4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C72FD4;
	sub_82A69A28(ctx, base);
loc_82C72FD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,72(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C72FE4;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73104
	if (cr6.eq) goto loc_82C73104;
	// lbz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c73014
	if (cr6.eq) goto loc_82C73014;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82c72d18
	ctx.lr = 0x82C73010;
	sub_82C72D18(ctx, base);
	// b 0x82c73034
	goto loc_82C73034;
loc_82C73014:
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,100
	ctx.r28.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C73024;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C73034;
	sub_82A69A28(ctx, base);
loc_82C73034:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,108(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C73044;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73104
	if (cr6.eq) goto loc_82C73104;
	// lbz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c73074
	if (cr6.eq) goto loc_82C73074;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x82c72d18
	ctx.lr = 0x82C73070;
	sub_82C72D18(ctx, base);
	// b 0x82c73094
	goto loc_82C73094;
loc_82C73074:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,100
	ctx.r28.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C73084;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C73094;
	sub_82A69A28(ctx, base);
loc_82C73094:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,144(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C730A4;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73104
	if (cr6.eq) goto loc_82C73104;
	// lbz r10,392(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 392);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c730e8
	if (cr6.eq) goto loc_82C730E8;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C730CC;
	sub_837B0C10(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C730E0;
	sub_82A69A28(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C730E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C730F4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C73104;
	sub_82A69A28(ctx, base);
loc_82C73104:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7310C"))) PPC_WEAK_FUNC(sub_82C7310C);
PPC_FUNC_IMPL(__imp__sub_82C7310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C73110"))) PPC_WEAK_FUNC(sub_82C73110);
PPC_FUNC_IMPL(__imp__sub_82C73110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C73118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C73128;
	sub_82D19BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bge cr6,0x82c7321c
	if (!cr6.lt) goto loc_82C7321C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-20
	xer.ca = ctx.r11.u32 > 19;
	ctx.r11.s64 = ctx.r11.s64 + -20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c731cc
	if (cr0.eq) goto loc_82C731CC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c731a0
	if (cr6.eq) goto loc_82C731A0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82c73210
	if (!cr6.eq) goto loc_82C73210;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c7321c
	if (cr6.eq) goto loc_82C7321C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C73170;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73210
	if (cr6.eq) goto loc_82C73210;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c26678
	ctx.lr = 0x82C73184;
	sub_82C26678(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c26678
	ctx.lr = 0x82C73194;
	sub_82C26678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82c731fc
	goto loc_82C731FC;
loc_82C731A0:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c7321c
	if (cr6.eq) goto loc_82C7321C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82C731B8;
	sub_82CD58A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82C731C8;
	sub_82CD58A0(ctx, base);
	// b 0x82c731f4
	goto loc_82C731F4;
loc_82C731CC:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c7321c
	if (cr6.eq) goto loc_82C7321C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82C731E4;
	sub_82CD58A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82C731F4;
	sub_82CD58A0(ctx, base);
loc_82C731F4:
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
loc_82C731FC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c72628
	ctx.lr = 0x82C73208;
	sub_82C72628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c72e60
	ctx.lr = 0x82C73210;
	sub_82C72E60(ctx, base);
loc_82C73210:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c726d8
	ctx.lr = 0x82C7321C;
	sub_82C726D8(ctx, base);
loc_82C7321C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C73228"))) PPC_WEAK_FUNC(sub_82C73228);
PPC_FUNC_IMPL(__imp__sub_82C73228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C73230;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C73240;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7335c
	if (cr6.eq) goto loc_82C7335C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82921c20
	ctx.lr = 0x82C73254;
	sub_82921C20(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x82C73258;
	sub_83767D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x82c73354
	if (cr6.gt) goto loc_82C73354;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c732a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C732A4;
	// bdzf 4*cr6+eq,0x82c732cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C732CC;
	// bdzf 4*cr6+eq,0x82c732f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C732F0;
	// bne cr6,0x82c73314
	if (!cr6.eq) goto loc_82C73314;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// bl 0x82c72e60
	ctx.lr = 0x82C7329C;
	sub_82C72E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C732A4:
	// lis r10,15
	ctx.r10.s64 = 983040;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,16960
	ctx.r9.u64 = ctx.r10.u64 | 16960;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// bl 0x82c72e60
	ctx.lr = 0x82C732C4;
	sub_82C72E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C732CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,200
	ctx.r10.s64 = 200;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x82c72e60
	ctx.lr = 0x82C732E8;
	sub_82C72E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C732F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x82c72e60
	ctx.lr = 0x82C7330C;
	sub_82C72E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C73314:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C7331C;
	sub_82DAB6D0(ctx, base);
	// bl 0x82d97a20
	ctx.lr = 0x82C73320;
	sub_82D97A20(ctx, base);
	// li r10,84
	ctx.r10.s64 = 84;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// li r9,84
	ctx.r9.s64 = 84;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C73334:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c73334
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C73334;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// stb r11,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r11.u8);
loc_82C73354:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c72e60
	ctx.lr = 0x82C7335C;
	sub_82C72E60(ctx, base);
loc_82C7335C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C73364"))) PPC_WEAK_FUNC(sub_82C73364);
PPC_FUNC_IMPL(__imp__sub_82C73364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C73368"))) PPC_WEAK_FUNC(sub_82C73368);
PPC_FUNC_IMPL(__imp__sub_82C73368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C73370;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C73384;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,66
	ctx.r5.u64 = ctx.r5.u64 | 66;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C733A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d1ed60
	ctx.lr = 0x82C733B4;
	sub_82D1ED60(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r25,15
	ctx.r25.s64 = 15;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// addi r28,r11,14116
	ctx.r28.s64 = ctx.r11.s64 + 14116;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// bl 0x8259cc28
	ctx.lr = 0x82C733EC;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83165d78
	ctx.lr = 0x82C73400;
	sub_83165D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C73408;
	sub_82D19A78(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82c7341c
	if (!cr6.lt) goto loc_82C7341C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C7341C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C73430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C73438;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-68
	ctx.r4.s64 = ctx.r28.s64 + -68;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C73450;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C73458;
	sub_82D19A78(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C73470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C73478;
	sub_82D19A78(ctx, base);
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// bl 0x82d2f098
	ctx.lr = 0x82C73480;
	sub_82D2F098(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c734b0
	if (cr6.eq) goto loc_82C734B0;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C7349C;
	sub_837B0C10(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,168
	ctx.r5.u64 = ctx.r5.u64 | 168;
	// bl 0x82a69a28
	ctx.lr = 0x82C734B0;
	sub_82A69A28(ctx, base);
loc_82C734B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C734B8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C734D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c734e8
	if (cr6.eq) goto loc_82C734E8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,610
	ctx.r4.u64 = ctx.r4.u64 | 610;
	// bl 0x82d30340
	ctx.lr = 0x82C734E8;
	sub_82D30340(ctx, base);
loc_82C734E8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r11,r11,-6552
	ctx.r11.s64 = ctx.r11.s64 + -6552;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
loc_82C734F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C73508;
	sub_82D19AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c735d4
	if (cr6.eq) goto loc_82C735D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C7352C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82C73540;
	sub_82D21408(ctx, base);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82C73560;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r5,36(r29)
	ea = 36 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82a69a28
	ctx.lr = 0x82C73570;
	sub_82A69A28(ctx, base);
	// addi r27,r27,36
	ctx.r27.s64 = ctx.r27.s64 + 36;
	// cmplwi cr6,r27,180
	cr6.compare<uint32_t>(ctx.r27.u32, 180, xer);
	// blt cr6,0x82c734f8
	if (cr6.lt) goto loc_82C734F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c72e60
	ctx.lr = 0x82C73584;
	sub_82C72E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C7358C;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c735a8
	if (!cr6.eq) goto loc_82C735A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C735A8;
	sub_82D1EAC0(ctx, base);
loc_82C735A8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c735c8
	if (cr6.lt) goto loc_82C735C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C735C8;
	sub_825952B8(ctx, base);
loc_82C735C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C735D4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c735c8
	if (cr6.lt) goto loc_82C735C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C735F4;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C73600"))) PPC_WEAK_FUNC(sub_82C73600);
PPC_FUNC_IMPL(__imp__sub_82C73600) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82C7361C;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c73228
	ctx.lr = 0x82C7362C;
	sub_82C73228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c726d8
	ctx.lr = 0x82C73638;
	sub_82C726D8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82C7363C;
	sub_82D26ED8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82d26b18
	ctx.lr = 0x82C73644;
	sub_82D26B18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C7365C"))) PPC_WEAK_FUNC(sub_82C7365C);
PPC_FUNC_IMPL(__imp__sub_82C7365C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C73660"))) PPC_WEAK_FUNC(sub_82C73660);
PPC_FUNC_IMPL(__imp__sub_82C73660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C73668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,16240
	ctx.r28.s64 = ctx.r11.s64 + 16240;
loc_82C7367C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c73748
	if (cr6.eq) goto loc_82C73748;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r8,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7373c
	if (cr6.eq) goto loc_82C7373C;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-9
	ctx.r11.s64 = ctx.r9.s64 + -9;
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x82c73730
	if (cr6.gt) goto loc_82C73730;
	// lis r12,-32057
	ctx.r12.s64 = -2100887552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14040
	ctx.r12.s64 = ctx.r12.s64 + 14040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C7371C;
	case 1:
		goto loc_82C73730;
	case 2:
		goto loc_82C73730;
	case 3:
		goto loc_82C7371C;
	case 4:
		goto loc_82C73730;
	case 5:
		goto loc_82C73730;
	case 6:
		goto loc_82C7371C;
	case 7:
		goto loc_82C73730;
	case 8:
		goto loc_82C73730;
	case 9:
		goto loc_82C7371C;
	case 10:
		goto loc_82C73730;
	case 11:
		goto loc_82C73730;
	case 12:
		goto loc_82C73730;
	case 13:
		goto loc_82C73730;
	case 14:
		goto loc_82C73730;
	case 15:
		goto loc_82C73730;
	case 16:
		goto loc_82C7371C;
	default:
		return;
	}
	// lwz r22,14108(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14108);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14108(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14108);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14108(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14108);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14108(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14108);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14128(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14128);
	// lwz r22,14108(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14108);
loc_82C7371C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C7372C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
loc_82C73730:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c738f4
	if (!cr6.eq) goto loc_82C738F4;
loc_82C7373C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C73748:
	// cmplwi cr6,r30,49
	cr6.compare<uint32_t>(ctx.r30.u32, 49, xer);
	// bgt cr6,0x82c73850
	if (cr6.gt) goto loc_82C73850;
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,19
	cr6.compare<uint32_t>(ctx.r30.u32, 19, xer);
	// bgt cr6,0x82c73824
	if (cr6.gt) goto loc_82C73824;
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// bgt cr6,0x82c738f4
	if (cr6.gt) goto loc_82C738F4;
	// lis r12,-32057
	ctx.r12.s64 = -2100887552;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14208
	ctx.r12.s64 = ctx.r12.s64 + 14208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_82C737B8;
	case 1:
		goto loc_82C738F4;
	case 2:
		goto loc_82C737DC;
	case 3:
		goto loc_82C738F4;
	case 4:
		goto loc_82C738F4;
	case 5:
		goto loc_82C738F4;
	case 6:
		goto loc_82C738F4;
	case 7:
		goto loc_82C738A0;
	case 8:
		goto loc_82C738F4;
	case 9:
		goto loc_82C738F4;
	case 10:
		goto loc_82C738F4;
	case 11:
		goto loc_82C738F4;
	case 12:
		goto loc_82C738F4;
	case 13:
		goto loc_82C738A0;
	default:
		return;
	}
	// lwz r22,14264(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14264);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14300(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14300);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14496(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14496);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14580(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14580);
	// lwz r22,14496(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14496);
loc_82C737B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C737C0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7373c
	if (cr6.eq) goto loc_82C7373C;
	// addic. r11,r3,100
	xer.ca = ctx.r3.u32 > 4294967195;
	ctx.r11.s64 = ctx.r3.s64 + 100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r11.u32);
	// beq 0x82c7373c
	if (cr0.eq) goto loc_82C7373C;
	// stw r3,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r3.u32);
	// b 0x82c738f4
	goto loc_82C738F4;
loc_82C737DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7373c
	if (cr6.eq) goto loc_82C7373C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C73808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7373c
	if (cr6.eq) goto loc_82C7373C;
	// addic. r11,r3,100
	xer.ca = ctx.r3.u32 > 4294967195;
	ctx.r11.s64 = ctx.r3.s64 + 100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
	// beq 0x82c7373c
	if (cr0.eq) goto loc_82C7373C;
	// stw r3,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r3.u32);
	// b 0x82c738f4
	goto loc_82C738F4;
loc_82C73824:
	// cmplwi cr6,r30,37
	cr6.compare<uint32_t>(ctx.r30.u32, 37, xer);
	// bgt cr6,0x82c73844
	if (cr6.gt) goto loc_82C73844;
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,25
	cr6.compare<uint32_t>(ctx.r30.u32, 25, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,31
	cr6.compare<uint32_t>(ctx.r30.u32, 31, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// b 0x82c738f4
	goto loc_82C738F4;
loc_82C73844:
	// cmplwi cr6,r30,43
	cr6.compare<uint32_t>(ctx.r30.u32, 43, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// b 0x82c738f4
	goto loc_82C738F4;
loc_82C73850:
	// cmplwi cr6,r30,79
	cr6.compare<uint32_t>(ctx.r30.u32, 79, xer);
	// bgt cr6,0x82c73888
	if (cr6.gt) goto loc_82C73888;
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,67
	cr6.compare<uint32_t>(ctx.r30.u32, 67, xer);
	// bgt cr6,0x82c7387c
	if (cr6.gt) goto loc_82C7387C;
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,55
	cr6.compare<uint32_t>(ctx.r30.u32, 55, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,61
	cr6.compare<uint32_t>(ctx.r30.u32, 61, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// b 0x82c738f4
	goto loc_82C738F4;
loc_82C7387C:
	// cmplwi cr6,r30,73
	cr6.compare<uint32_t>(ctx.r30.u32, 73, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// b 0x82c738f4
	goto loc_82C738F4;
loc_82C73888:
	// cmplwi cr6,r30,85
	cr6.compare<uint32_t>(ctx.r30.u32, 85, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,91
	cr6.compare<uint32_t>(ctx.r30.u32, 91, xer);
	// beq cr6,0x82c738a0
	if (cr6.eq) goto loc_82C738A0;
	// cmplwi cr6,r30,97
	cr6.compare<uint32_t>(ctx.r30.u32, 97, xer);
	// bne cr6,0x82c738f4
	if (!cr6.eq) goto loc_82C738F4;
loc_82C738A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7373c
	if (cr6.eq) goto loc_82C7373C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C738CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7373c
	if (cr6.eq) goto loc_82C7373C;
	// addi r10,r30,19
	ctx.r10.s64 = ctx.r30.s64 + 19;
	// addic. r11,r3,100
	xer.ca = ctx.r3.u32 > 4294967195;
	ctx.r11.s64 = ctx.r3.s64 + 100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// beq 0x82c7373c
	if (cr0.eq) goto loc_82C7373C;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r3,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r3.u32);
loc_82C738F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,103
	cr6.compare<uint32_t>(ctx.r30.u32, 103, xer);
	// blt cr6,0x82c7367c
	if (cr6.lt) goto loc_82C7367C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C7390C"))) PPC_WEAK_FUNC(sub_82C7390C);
PPC_FUNC_IMPL(__imp__sub_82C7390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C73910"))) PPC_WEAK_FUNC(sub_82C73910);
PPC_FUNC_IMPL(__imp__sub_82C73910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C73918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,18340
	ctx.r30.s64 = ctx.r11.s64 + 18340;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f420
	ctx.lr = 0x82C73944;
	sub_82D2F420(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c739a4
	if (cr6.eq) goto loc_82C739A4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82C73958:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82C73968;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x82c73958
	if (cr6.lt) goto loc_82C73958;
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,223
	ctx.r4.u64 = ctx.r4.u64 | 223;
	// bl 0x82d2a1c8
	ctx.lr = 0x82C73984;
	sub_82D2A1C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C73990;
	sub_83103100(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1180, ctx.r11.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82C7399C;
	sub_82D26ED8(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x82d26b18
	ctx.lr = 0x82C739A4;
	sub_82D26B18(ctx, base);
loc_82C739A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C739AC"))) PPC_WEAK_FUNC(sub_82C739AC);
PPC_FUNC_IMPL(__imp__sub_82C739AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C739B0"))) PPC_WEAK_FUNC(sub_82C739B0);
PPC_FUNC_IMPL(__imp__sub_82C739B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,1088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c73a34
	if (!cr6.eq) goto loc_82C73A34;
	// bl 0x82d86078
	ctx.lr = 0x82C739D8;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73a34
	if (cr6.eq) goto loc_82C73A34;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82C739F0;
	sub_82C52918(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82C739FC;
	sub_82DDAE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C73A04;
	sub_82D1C1A8(ctx, base);
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// stw r9,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r9.u32);
	// beq cr6,0x82c73a2c
	if (cr6.eq) goto loc_82C73A2C;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ddaf08
	ctx.lr = 0x82C73A2C;
	sub_82DDAF08(ctx, base);
loc_82C73A2C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82C73A34;
	sub_82DA8C38(ctx, base);
loc_82C73A34:
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

__attribute__((alias("__imp__sub_82C73A4C"))) PPC_WEAK_FUNC(sub_82C73A4C);
PPC_FUNC_IMPL(__imp__sub_82C73A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C73A50"))) PPC_WEAK_FUNC(sub_82C73A50);
PPC_FUNC_IMPL(__imp__sub_82C73A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C73A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1176(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1176);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c73ae8
	if (cr6.eq) goto loc_82C73AE8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,18392
	ctx.r3.s64 = ctx.r11.s64 + 18392;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f420
	ctx.lr = 0x82C73A8C;
	sub_82D2F420(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73b40
	if (cr6.eq) goto loc_82C73B40;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-6224
	ctx.r11.s64 = ctx.r11.s64 + -6224;
	// addi r30,r11,-32
	ctx.r30.s64 = ctx.r11.s64 + -32;
loc_82C73AA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,32(r30)
	ea = 32 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82C73AB8;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x82c73aa8
	if (cr6.lt) goto loc_82C73AA8;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,172
	ctx.r4.u64 = ctx.r4.u64 | 172;
	// bl 0x82d2a1c8
	ctx.lr = 0x82C73AD4;
	sub_82D2A1C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C73AE0;
	sub_83103100(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c73aec
	goto loc_82C73AEC;
loc_82C73AE8:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82C73AEC:
	// stw r11,1180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1180, ctx.r11.u32);
	// bl 0x82d86078
	ctx.lr = 0x82C73AF4;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73b40
	if (cr6.eq) goto loc_82C73B40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82C73B0C;
	sub_82C52918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ddae98
	ctx.lr = 0x82C73B18;
	sub_82DDAE98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C73B20;
	sub_82D1C1A8(ctx, base);
	// lwz r11,976(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 976);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82ddaf08
	ctx.lr = 0x82C73B38;
	sub_82DDAF08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82C73B40;
	sub_82DA8C38(ctx, base);
loc_82C73B40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C73B48"))) PPC_WEAK_FUNC(sub_82C73B48);
PPC_FUNC_IMPL(__imp__sub_82C73B48) {
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
	// lwz r11,1096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82c73c74
	if (cr6.gt) goto loc_82C73C74;
	// lis r12,-32057
	ctx.r12.s64 = -2100887552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15240
	ctx.r12.s64 = ctx.r12.s64 + 15240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C73BB8;
	case 1:
		goto loc_82C73BE0;
	case 2:
		goto loc_82C73C2C;
	case 3:
		goto loc_82C73C40;
	case 4:
		goto loc_82C73C74;
	case 5:
		goto loc_82C73C74;
	case 6:
		goto loc_82C73C74;
	case 7:
		goto loc_82C73C74;
	case 8:
		goto loc_82C73C74;
	case 9:
		goto loc_82C73C74;
	case 10:
		goto loc_82C73C48;
	case 11:
		goto loc_82C73C48;
	default:
		return;
	}
	// lwz r22,15288(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15288);
	// lwz r22,15328(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15328);
	// lwz r22,15404(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15404);
	// lwz r22,15424(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15424);
	// lwz r22,15476(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15476);
	// lwz r22,15476(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15476);
	// lwz r22,15476(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15476);
	// lwz r22,15476(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15476);
	// lwz r22,15476(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15476);
	// lwz r22,15476(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15476);
	// lwz r22,15432(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15432);
	// lwz r22,15432(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15432);
loc_82C73BB8:
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lwz r9,1172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1172);
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf r31,r5,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r5.s64;
	// b 0x82c73c74
	goto loc_82C73C74;
loc_82C73BE0:
	// lwz r11,1172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82c73c08
	if (!cr6.lt) goto loc_82C73C08;
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,1004(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x82c73c74
	goto loc_82C73C74;
loc_82C73C08:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// mulhw r8,r11,r9
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf r31,r6,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x82c73c74
	goto loc_82C73C74;
loc_82C73C2C:
	// lwz r10,1032(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 & ctx.r10.u64;
	// b 0x82c73c74
	goto loc_82C73C74;
loc_82C73C40:
	// lwz r31,1172(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1172);
	// b 0x82c73c74
	goto loc_82C73C74;
loc_82C73C48:
	// bl 0x82d86078
	ctx.lr = 0x82C73C4C;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82C73C5C;
	sub_82C52918(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82C73C68;
	sub_82DDAE98(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82da8c38
	ctx.lr = 0x82C73C74;
	sub_82DA8C38(ctx, base);
loc_82C73C74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C73C94;
	sub_82D1EBF8(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,1096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1096, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C73CB4"))) PPC_WEAK_FUNC(sub_82C73CB4);
PPC_FUNC_IMPL(__imp__sub_82C73CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C73CB8"))) PPC_WEAK_FUNC(sub_82C73CB8);
PPC_FUNC_IMPL(__imp__sub_82C73CB8) {
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
	ctx.lr = 0x82C73CC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82ddb600
	ctx.lr = 0x82C73CD0;
	sub_82DDB600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c73fc8
	if (!cr6.eq) goto loc_82C73FC8;
	// bl 0x82d86078
	ctx.lr = 0x82C73CE0;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c73fc8
	if (cr6.eq) goto loc_82C73FC8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,92(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82C73CF8;
	sub_82C52918(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82C73D04;
	sub_82DDAE98(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,1120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// stw r28,1104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1104, ctx.r28.u32);
	// addi r31,r30,1104
	ctx.r31.s64 = ctx.r30.s64 + 1104;
	// stw r28,1108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1108, ctx.r28.u32);
	// stw r11,1112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1112, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C73D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r25,10
	cr6.compare<int32_t>(ctx.r25.s32, 10, xer);
	// beq cr6,0x82c73d60
	if (cr6.eq) goto loc_82C73D60;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,1120
	ctx.r3.s64 = ctx.r30.s64 + 1120;
	// bl 0x82da8e68
	ctx.lr = 0x82C73D44;
	sub_82DA8E68(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1108, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82C73D5C;
	sub_82D1C1A8(ctx, base);
	// stw r3,1112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1112, ctx.r3.u32);
loc_82C73D60:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi cr6,r25,10
	cr6.compare<uint32_t>(ctx.r25.u32, 10, xer);
	// bgt cr6,0x82c73fc0
	if (cr6.gt) goto loc_82C73FC0;
	// lis r12,-32057
	ctx.r12.s64 = -2100887552;
	// rlwinm r0,r25,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15748
	ctx.r12.s64 = ctx.r12.s64 + 15748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r25.u32) {
	case 0:
		goto loc_82C73DB0;
	case 1:
		goto loc_82C73DFC;
	case 2:
		goto loc_82C73E74;
	case 3:
		goto loc_82C73EDC;
	case 4:
		goto loc_82C73EAC;
	case 5:
		goto loc_82C73EAC;
	case 6:
		goto loc_82C73EAC;
	case 7:
		goto loc_82C73EAC;
	case 8:
		goto loc_82C73EAC;
	case 9:
		goto loc_82C73FC0;
	case 10:
		goto loc_82C73EFC;
	default:
		return;
	}
	// lwz r22,15792(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15792);
	// lwz r22,15868(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15868);
	// lwz r22,15988(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15988);
	// lwz r22,16092(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16092);
	// lwz r22,16044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16044);
	// lwz r22,16044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16044);
	// lwz r22,16044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16044);
	// lwz r22,16044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16044);
	// lwz r22,16044(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16044);
	// lwz r22,16320(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16320);
	// lwz r22,16124(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16124);
loc_82C73DB0:
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,1004(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82c73dd4
	if (!cr0.eq) goto loc_82C73DD4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r28.u32);
	// b 0x82c73f0c
	goto loc_82C73F0C;
loc_82C73DD4:
	// lwz r11,1004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// lwz r9,1024(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,-40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -40);
	// stw r28,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r28.u32);
	// subfc r6,r9,r7
	xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 & ctx.r7.u64;
	// b 0x82c73f0c
	goto loc_82C73F0C;
loc_82C73DFC:
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,1004(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82c73e24
	if (!cr0.eq) goto loc_82C73E24;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r10.u32);
	// b 0x82c73f0c
	goto loc_82C73F0C;
loc_82C73E24:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x82c73e40
	if (cr6.lt) goto loc_82C73E40;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// stw r10,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r10.u32);
	// b 0x82c73f0c
	goto loc_82C73F0C;
loc_82C73E40:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lwz r11,1024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf. r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82c73e64
	if (!cr0.eq) goto loc_82C73E64;
	// li r10,100
	ctx.r10.s64 = 100;
loc_82C73E64:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r10.u32);
	// b 0x82c73f0c
	goto loc_82C73F0C;
loc_82C73E74:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82da95e8
	ctx.lr = 0x82C73E80;
	sub_82DA95E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c73ea4
	if (cr6.eq) goto loc_82C73EA4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddaf08
	ctx.lr = 0x82C73E98;
	sub_82DDAF08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,1040
	ctx.r3.s64 = ctx.r30.s64 + 1040;
	// bl 0x82da8e68
	ctx.lr = 0x82C73EA4;
	sub_82DA8E68(ctx, base);
loc_82C73EA4:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82c73f10
	goto loc_82C73F10;
loc_82C73EAC:
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r8,r10,18360
	ctx.r8.s64 = ctx.r10.s64 + 18360;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r28,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r28.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// b 0x82c73f10
	goto loc_82C73F10;
loc_82C73EDC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// b 0x82c73f10
	goto loc_82C73F10;
loc_82C73EFC:
	// addi r4,r30,1120
	ctx.r4.s64 = ctx.r30.s64 + 1120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da8e68
	ctx.lr = 0x82C73F08;
	sub_82DA8E68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C73F0C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82C73F10:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddaf08
	ctx.lr = 0x82C73F1C;
	sub_82DDAF08(ctx, base);
	// lwz r11,996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82c73f34
	if (cr6.lt) goto loc_82C73F34;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82c73f38
	if (cr6.lt) goto loc_82C73F38;
loc_82C73F34:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82C73F38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c73fa0
	if (cr6.eq) goto loc_82C73FA0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,15076
	ctx.r11.s64 = ctx.r9.s64 + 15076;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82c73f70
	if (!cr6.eq) goto loc_82C73F70;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c73f74
	goto loc_82C73F74;
loc_82C73F70:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C73F74:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// addi r31,r10,21716
	ctx.r31.s64 = ctx.r10.s64 + 21716;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r3,-25760(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25760);
	// bl 0x83102fe0
	ctx.lr = 0x82C73F9C;
	sub_83102FE0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82C73FA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,1088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1088, ctx.r11.u32);
	// bl 0x82da8c38
	ctx.lr = 0x82C73FB4;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C73FC0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da8c38
	ctx.lr = 0x82C73FC8;
	sub_82DA8C38(ctx, base);
loc_82C73FC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C73FD4"))) PPC_WEAK_FUNC(sub_82C73FD4);
PPC_FUNC_IMPL(__imp__sub_82C73FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C73FD8"))) PPC_WEAK_FUNC(sub_82C73FD8);
PPC_FUNC_IMPL(__imp__sub_82C73FD8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C73FF4;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82C74004;
	sub_82C52918(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82C74010;
	sub_82DDAE98(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82c740d0
	if (!cr6.eq) goto loc_82C740D0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x82c74070
	if (cr6.gt) goto loc_82C74070;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c74054
	if (cr6.eq) goto loc_82C74054;
	// bdz 0x82c7405c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C7405C;
	// bdz 0x82c7405c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C7405C;
	// bdz 0x82c7405c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C7405C;
	// bdz 0x82c74064
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C74064;
	// bdnz 0x82c7406c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C7406C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c74070
	goto loc_82C74070;
loc_82C74054:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c74070
	goto loc_82C74070;
loc_82C7405C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c74070
	goto loc_82C74070;
loc_82C74064:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c74070
	goto loc_82C74070;
loc_82C7406C:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82C74070:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// stw r10,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r10.u32);
	// bne cr6,0x82c740d4
	if (!cr6.eq) goto loc_82C740D4;
	// lwz r8,980(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c740d4
	if (cr0.eq) goto loc_82C740D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c740c4
	if (!cr6.gt) goto loc_82C740C4;
loc_82C740A4:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// beq cr6,0x82c740d0
	if (cr6.eq) goto loc_82C740D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c740a4
	if (cr6.gt) goto loc_82C740A4;
	// b 0x82c740d4
	goto loc_82C740D4;
loc_82C740C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C740D0;
	sub_831CC188(ctx, base);
loc_82C740D0:
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
loc_82C740D4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82C740DC;
	sub_82DA8C38(ctx, base);
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

__attribute__((alias("__imp__sub_82C740F4"))) PPC_WEAK_FUNC(sub_82C740F4);
PPC_FUNC_IMPL(__imp__sub_82C740F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C740F8"))) PPC_WEAK_FUNC(sub_82C740F8);
PPC_FUNC_IMPL(__imp__sub_82C740F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C74100;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,1004(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82c7412c
	if (cr0.eq) goto loc_82C7412C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C7412C:
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82c74264
	if (cr6.eq) goto loc_82C74264;
	// lbz r11,1198(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1198);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c74264
	if (cr6.eq) goto loc_82C74264;
	// bl 0x82ddb600
	ctx.lr = 0x82C74148;
	sub_82DDB600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c7415c
	if (cr6.eq) goto loc_82C7415C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c74258
	goto loc_82C74258;
loc_82C7415C:
	// bl 0x82d86078
	ctx.lr = 0x82C74160;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c74258
	if (cr6.eq) goto loc_82C74258;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82C74178;
	sub_82C52918(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82ddae98
	ctx.lr = 0x82C74184;
	sub_82DDAE98(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,1120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// addi r11,r31,1104
	ctx.r11.s64 = ctx.r31.s64 + 1104;
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
	// stw r10,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C741B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,1120
	ctx.r4.s64 = ctx.r31.s64 + 1120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da8e68
	ctx.lr = 0x82C741BC;
	sub_82DA8E68(ctx, base);
	// lwz r7,1104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x82ddaf08
	ctx.lr = 0x82C741D0;
	sub_82DDAF08(ctx, base);
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82c741e8
	if (cr6.lt) goto loc_82C741E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82c741ec
	if (cr6.lt) goto loc_82C741EC;
loc_82C741E8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82C741EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c7423c
	if (cr6.eq) goto loc_82C7423C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,15076
	ctx.r11.s64 = ctx.r9.s64 + 15076;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-31757
	ctx.r6.s64 = -2081226752;
	// addi r30,r7,21716
	ctx.r30.s64 = ctx.r7.s64 + 21716;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r3,-25760(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25760);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x83102fe0
	ctx.lr = 0x82C74238;
	sub_83102FE0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82C7423C:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r10.u32);
	// bl 0x82da8c38
	ctx.lr = 0x82C74254;
	sub_82DA8C38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C74258:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c7426c
	if (!cr6.eq) goto loc_82C7426C;
loc_82C74264:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
loc_82C7426C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C74278"))) PPC_WEAK_FUNC(sub_82C74278);
PPC_FUNC_IMPL(__imp__sub_82C74278) {
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
	// lwz r11,1088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c742c0
	if (!cr6.eq) goto loc_82C742C0;
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82c742c0
	if (!cr6.gt) goto loc_82C742C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c73cb8
	ctx.lr = 0x82C742AC;
	sub_82C73CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c742c0
	if (!cr6.eq) goto loc_82C742C0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
loc_82C742C0:
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

__attribute__((alias("__imp__sub_82C742D4"))) PPC_WEAK_FUNC(sub_82C742D4);
PPC_FUNC_IMPL(__imp__sub_82C742D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C742D8"))) PPC_WEAK_FUNC(sub_82C742D8);
PPC_FUNC_IMPL(__imp__sub_82C742D8) {
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
	// lwz r11,1088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c74320
	if (!cr6.eq) goto loc_82C74320;
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82c74320
	if (!cr6.gt) goto loc_82C74320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c73cb8
	ctx.lr = 0x82C7430C;
	sub_82C73CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c74320
	if (!cr6.eq) goto loc_82C74320;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
loc_82C74320:
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

__attribute__((alias("__imp__sub_82C74334"))) PPC_WEAK_FUNC(sub_82C74334);
PPC_FUNC_IMPL(__imp__sub_82C74334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C74338"))) PPC_WEAK_FUNC(sub_82C74338);
PPC_FUNC_IMPL(__imp__sub_82C74338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c743a8
	if (cr6.eq) goto loc_82C743A8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82c7438c
	if (cr6.eq) goto loc_82C7438C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82c743dc
	if (!cr6.eq) goto loc_82C743DC;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82c743a0
	if (cr6.eq) goto loc_82C743A0;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x82c74380
	if (cr6.lt) goto loc_82C74380;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82C74380:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r5,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r5.u32);
	// b 0x82c743d8
	goto loc_82C743D8;
loc_82C7438C:
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bge cr6,0x82c743a0
	if (!cr6.lt) goto loc_82C743A0;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c73cb8
	ctx.lr = 0x82C743A0;
	sub_82C73CB8(ctx, base);
loc_82C743A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c743d8
	goto loc_82C743D8;
loc_82C743A8:
	// lwz r30,156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c743d4
	if (cr6.eq) goto loc_82C743D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C743C4;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83574c00
	ctx.lr = 0x82C743CC;
	sub_83574C00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82C743D4;
	sub_82D44FA8(ctx, base);
loc_82C743D4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82C743D8:
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
loc_82C743DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C743F4"))) PPC_WEAK_FUNC(sub_82C743F4);
PPC_FUNC_IMPL(__imp__sub_82C743F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C743F8"))) PPC_WEAK_FUNC(sub_82C743F8);
PPC_FUNC_IMPL(__imp__sub_82C743F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C74400;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C7440C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c745b0
	if (cr6.eq) goto loc_82C745B0;
	// lwz r11,996(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 996);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,92(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82c74438
	if (cr6.lt) goto loc_82C74438;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82c7443c
	if (cr6.lt) goto loc_82C7443C;
loc_82C74438:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82C7443C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c745b0
	if (cr6.eq) goto loc_82C745B0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,15076
	ctx.r11.s64 = ctx.r9.s64 + 15076;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82da9f18
	ctx.lr = 0x82C74470;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82da9890
	ctx.lr = 0x82C74484;
	sub_82DA9890(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b5e118
	ctx.lr = 0x82C7448C;
	sub_82B5E118(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8838
	ctx.lr = 0x82C74494;
	sub_82DA8838(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c745a8
	if (cr6.eq) goto loc_82C745A8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82C744AC;
	sub_82DA9740(ctx, base);
	// bl 0x82e83308
	ctx.lr = 0x82C744B0;
	sub_82E83308(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c7451c
	if (cr6.eq) goto loc_82C7451C;
loc_82C744C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8d18
	ctx.lr = 0x82C744C8;
	sub_82DA8D18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C744DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r27,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r27.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da88b8
	ctx.lr = 0x82C744F0;
	sub_82DA88B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c74508
	if (cr6.eq) goto loc_82C74508;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82C74508;
	sub_82DA9740(ctx, base);
loc_82C74508:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82C74510;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82c744c0
	if (cr6.lt) goto loc_82C744C0;
loc_82C7451C:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r11,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r11.u8);
	// bl 0x82c52918
	ctx.lr = 0x82C7452C;
	sub_82C52918(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82C74538;
	sub_82DDAE98(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C74540;
	sub_82D1C1A8(ctx, base);
	// lwz r10,976(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 976);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// bl 0x82ddaf08
	ctx.lr = 0x82C74558;
	sub_82DDAF08(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82da9248
	ctx.lr = 0x82C74560;
	sub_82DA9248(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x82c74580
	if (cr6.lt) goto loc_82C74580;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,18416
	ctx.r5.s64 = ctx.r11.s64 + 18416;
	// bl 0x82d20da8
	ctx.lr = 0x82C7457C;
	sub_82D20DA8(ctx, base);
	// b 0x82c74594
	goto loc_82C74594;
loc_82C74580:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r27,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r27.u32);
	// bl 0x82c73cb8
	ctx.lr = 0x82C74590;
	sub_82C73CB8(ctx, base);
	// stb r27,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r27.u8);
loc_82C74594:
	// bl 0x82d26ed8
	ctx.lr = 0x82C74598;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26b18
	ctx.lr = 0x82C745A0;
	sub_82D26B18(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82da8c38
	ctx.lr = 0x82C745A8;
	sub_82DA8C38(ctx, base);
loc_82C745A8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8c38
	ctx.lr = 0x82C745B0;
	sub_82DA8C38(ctx, base);
loc_82C745B0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C745B8"))) PPC_WEAK_FUNC(sub_82C745B8);
PPC_FUNC_IMPL(__imp__sub_82C745B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C745C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x82c74844
	if (!cr6.lt) goto loc_82C74844;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,17888
	ctx.r11.s64 = ctx.r10.s64 + 17888;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r29,156(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 156);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c74844
	if (cr6.eq) goto loc_82C74844;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r27,156(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 156);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c74844
	if (cr6.eq) goto loc_82C74844;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r28,156(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 156);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c74844
	if (cr6.eq) goto loc_82C74844;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r26,156(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82c74844
	if (cr6.eq) goto loc_82C74844;
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,1004(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// blt cr6,0x82c746c0
	if (cr6.lt) goto loc_82C746C0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C74688;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C74698;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C746A8;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C746B8;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C746C0:
	// bl 0x82d2aff8
	ctx.lr = 0x82C746C4;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c746e0
	if (!cr6.eq) goto loc_82C746E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C746E0;
	sub_82D2AEC8(ctx, base);
loc_82C746E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82C746E8;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c74704
	if (!cr6.eq) goto loc_82C74704;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C74704;
	sub_82D2AEC8(ctx, base);
loc_82C74704:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82C7470C;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c74728
	if (!cr6.eq) goto loc_82C74728;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C74728;
	sub_82D2AEC8(ctx, base);
loc_82C74728:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82C74730;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c7474c
	if (!cr6.eq) goto loc_82C7474C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C7474C;
	sub_82D2AEC8(ctx, base);
loc_82C7474C:
	// lwz r9,1004(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// mulli r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 * 208;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// ble cr6,0x82c7478c
	if (!cr6.gt) goto loc_82C7478C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82C7478C:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82c747a4
	if (cr6.eq) goto loc_82C747A4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C747A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82C747B8;
	sub_82D329F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82d294d0
	ctx.lr = 0x82C747C4;
	sub_82D294D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C747D8;
	sub_82D291E0(ctx, base);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r30,156(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// bl 0x82d860f0
	ctx.lr = 0x82C747E8;
	sub_82D860F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c74830
	if (cr6.eq) goto loc_82C74830;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r10,18428
	ctx.r4.s64 = ctx.r10.s64 + 18428;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C74810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c74830
	if (cr6.eq) goto loc_82C74830;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C74830;
	sub_82D2AEC8(ctx, base);
loc_82C74830:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C74844;
	sub_82D291E0(ctx, base);
loc_82C74844:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

